/************************************************************

 udpClient.cs
 CopyRight 2000-2001
 This is a sample program made by Saurabh Nandu.
 E-mail: saurabh@mastercsharp.com
 Website: http://www.mastercsharp.com
 Udp Date Time Client-Server
Compilation:
csc /t:winexe /r:System.dll;System.Windows.Forms.dll udpClient.cs

20/August/2001
************************************************************/
using System;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Windows.Forms;
using Amazon.DynamoDB;
using Amazon.DynamoDB.Model;
using Amazon.Runtime;
using Amazon.SecurityToken;
using System.IO;
using System.Collections.Generic;
using System.Web;
using System.Text;

namespace MasterCSharp.WebSite.Saurabh.Networking
{
    public class UdpDateTimeClient : Form
    {
        private UdpClient client;
        private IPEndPoint receivePoint;
        private int port = 6060; //Port for the Client to use
        private int ip = 127001;//IP Address 127.0.0.1
        private TextBox logBox;

        private static AmazonDynamoDBClient amazonClient;

        static int maxReplyMs = 0;
        static int meanReplyMs = 0;
        static int replyMsSum = 0;

        private static void CreateClient()
        {
            var userCredentials = new AmazonSecurityTokenServiceConfig();
            //EnvironmentAWSCredentials();
            var stsClient = new AmazonSecurityTokenServiceClient(userCredentials);
            var sessionCredentials = new RefreshingSessionAWSCredentials(stsClient);
            amazonClient = new AmazonDynamoDBClient(sessionCredentials);
        }

        [STAThread]
        public static void Main()
        {
            Application.Run(new UdpDateTimeClient());
        }
        public UdpDateTimeClient()
        {
            CreateClient();
            // без этого вывод сообщения вызывает исключение
            // http://rucoders.ru/t2874.htm#comments
            // http://rucoders.ru/page/56
            CheckForIllegalCrossThreadCalls = false;

            //TextBox Properties
            logBox = new TextBox();
            logBox.Multiline = true;
            logBox.ScrollBars = ScrollBars.Vertical;
            logBox.ReadOnly = true;
            logBox.Dock = DockStyle.Fill;
            this.Controls.Add(logBox);
            this.Text = "Udp Date/Time Client";
            //Create the UdpClient
            client = new UdpClient(port);
            receivePoint = new IPEndPoint(new IPAddress(/*ip*/new byte[]{10, 204, 171, 32}), port);
            Thread startClient = new Thread(new ThreadStart(start_client));
            //Start the Thread
            startClient.Start();

        }
        /*
        public override void Dispose()
        {
            base.Dispose();
        }
8        */
        private static int packetNumber = 0;
        private static int prevPacketNumber = 0;
        private static string tableName = "Snapshot";
        private static int lostPacketNumber = 0;
        private static bool lastPacketSecNumberInitialized = false;
        private static int lastPacketSecNumber = 0;
        private static int invalidSequenceNumber = 0;   //  the number of packets arrived in invalid order

        public void start_client()
        {
            //Loop Flag
            bool continueLoop = true;

            String startRunTime = DateTime.Now.ToString();
            DateTime startTime = DateTime.Now;
            int startPacketNum = 0;

            //  to initialize exchange with DynamoDB
            var request = new PutItemRequest
            {
                TableName = tableName,
                Item = new Dictionary<string, AttributeValue>()
                        {
                        { "SerieID", new AttributeValue { S = "1" }},
                        { "SnapshotSeqNum", new AttributeValue { N = "1" /*(m_Count + 1).ToString()*/ }},
                        // short string up to 60 bytes
                        { "Snapshot", new AttributeValue { S = "startup" }}
                        }
            };
            amazonClient.PutItem(request);

            while (continueLoop)
            {
                //Send DataGram
                //Format: Hostname@Post@Message
                //System.Text.ASCIIEncoding encode = new System.Text.ASCIIEncoding();
                //string sendString = "localhost@" + port.ToString() + "@Send Date Time";
                //byte[] sendData = encode.GetBytes(sendString);
                //Send to Server 
                //client.Send(sendData, sendData.Length, "localhost", 6767);

                //Receive DataGram from Server
                byte[] recData = client.Receive(ref receivePoint);
                packetNumber++;

                String recS = Encoding.ASCII.GetString(recData);
                int packetSeqNum = Int32.Parse(recS.Substring(0, 10));
                if (packetSeqNum > lastPacketSecNumber)
                {
                    if (lastPacketSecNumberInitialized)
                    {
                        lostPacketNumber += (packetSeqNum - lastPacketSecNumber) - 1;
                    }
                    else startPacketNum = packetSeqNum;
                    lastPacketSecNumber = packetSeqNum;
                    lastPacketSecNumberInitialized = true;
                }
                else
                {
                    invalidSequenceNumber++;
                }

                String sIn = "";
                MemoryStream m = new MemoryStream(recData);
                m.Seek(0, System.IO.SeekOrigin.Begin);
                for (int i = 0; i < recData.Length; i++)
                {
                    Int32 b = m.ReadByte();
                    sIn += b.ToString("X2");
                }

                DateTime begin = DateTime.Now;
                TimeSpan delta;

                request = new PutItemRequest
                {
                    TableName = tableName,
                    Item = new Dictionary<string, AttributeValue>()
                        {
                        { "SerieID", new AttributeValue { S = "1" }},
                        { "SnapshotSeqNum", new AttributeValue { N = "1" /*(m_Count + 1).ToString()*/ }},
                        // short string up to 60 bytes
                        { "Snapshot", new AttributeValue { S = sIn }}
                        }
                };
                amazonClient.PutItem(request);

                var r1 = new GetItemRequest
                {
                    TableName = tableName,
                    Key = new Key
                    {
                        RangeKeyElement = new AttributeValue { N = "1" /*(m_Count + 1).ToString()*/ },
                        HashKeyElement = new AttributeValue { S = "1" }
                    },
                    // Optional parameters.
                    AttributesToGet = new List<string>() { "Snapshot", "SnapshotSeqNum" },
                    ConsistentRead = true
                };
                var response = amazonClient.GetItem(r1);

                DateTime end = DateTime.Now;
                delta = end.Subtract(begin);
                int replyMs = delta.Hours * 3600 * 1000 + delta.Minutes * 60000 + delta.Seconds * 1000 + delta.Milliseconds;
                if (replyMs > maxReplyMs) maxReplyMs = replyMs;
                replyMsSum += replyMs;
                meanReplyMs = replyMsSum / packetNumber;
                // Check the response.
                var result = response.GetItemResult;
                Dictionary<String, AttributeValue> attributeMap = result.Item;
                AttributeValue a = attributeMap["Snapshot"];
                String pic = a.S;

                Byte[] imgData = new Byte[pic.Length / 2];
                Int32 byteIndex = 0;
                for (int i = 0; i < pic.Length; i += 2)
                {
                    String hex = pic.Substring(i, 2);
                    Byte b = Byte.Parse(hex, System.Globalization.NumberStyles.AllowHexSpecifier);
                    imgData[byteIndex++] = b;
                }

                // once per second outputs statistical information
                DateTime now = DateTime.Now;

                delta = now.Subtract(startTime);
                if (delta.Seconds != 0)
                {
                    startTime = now;
                    logBox.Text =
                        "Start time = " + startRunTime + "\r\n" +
                        "Start packet number = " + startPacketNum.ToString() + "\r\n" +
                        "Packet number per sec = " + (packetNumber - prevPacketNumber).ToString() + "\r\n" +
                        "Lost packet number = " + lostPacketNumber.ToString() + "\r\n" +
                        "Max DynamoDB cycle = " + maxReplyMs.ToString() + "\r\n" +
                        "Mean DynamoDB cycle = " + meanReplyMs.ToString() + "\r\n" +
                        "Invalid sequence number = " + invalidSequenceNumber.ToString() + "\r\n";
                    prevPacketNumber = packetNumber;
                }
            }
        }
    }
}