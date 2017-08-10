/************************************************************

 udpServer.cs
 CopyRight 2000-2001
 This is a sample program made by Saurabh Nandu.
 E-mail: saurabh@mastercsharp.com
 Website: http://www.mastercsharp.com
 Udp Date Time Client-Server
Compilation:
csc /t:winexe /r:System.dll;System.Windows.Forms.dll udpServer.cs

20/August/2001
************************************************************/
using System;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Windows.Forms;
using System.ComponentModel;
using System.IO;
using System.Text;

namespace MasterCSharp.WebSite.Saurabh.Networking
{
    public class UdpDateTimeServer : Form
    {
        private UdpClient server;
        private IPEndPoint receivePoint;
        private int port = 6767; //Port for the Server to use
        private int ip = 127001;//IP Address 127.0.0.1
        private TextBox logBox;

        [STAThread]
        public static void Main()
        {
            Application.Run(new UdpDateTimeServer());
        }
        /*
        public override void Dispose()
        {
            base.Dispose();
        }
         */
        //Method called when the Windows Form is Closed
        public void UdpDateTimeServer_Closed(object sender, EventArgs e)
        {
            //Close the Socket - Never forget this or your
            //Server will remain in memory even if the 
            //Application is terminated
            server.Close();
        }

        //Constructor
        public UdpDateTimeServer()
        {
            // без этого вывод сообщения вызывает исключение
            // http://rucoders.ru/t2874.htm#comments
            // http://rucoders.ru/page/56
            CheckForIllegalCrossThreadCalls = false;

            //TextBox settings
            logBox = new TextBox();
            logBox.Multiline = true;
            logBox.ScrollBars = ScrollBars.Vertical;
            logBox.ReadOnly = true;
            logBox.Dock = DockStyle.Fill;
            this.Controls.Add(logBox);
            this.Text = "Udp Date/Time Server";
            //Wire-up the EventHandler
            this.Closed += new System.EventHandler(UdpDateTimeServer_Closed);
            //Create the UdpClient
            server = new UdpClient(port);
            //Define a Receive point
            receivePoint = new IPEndPoint(new IPAddress(ip), port);
            //Declare a Thread
            Thread startServer = new Thread(new ThreadStart(start_server));
            //Start the Thread
            startServer.Start();
        }

        private static int packetNumber = 0;
        private static int prevPacketNumber = 0;
        private static int packetSecNumber = 0;

        public void start_server()
        {
            logBox.Text += "Server Started \r\n";
            //Infinite loop
            DateTime startTime = DateTime.Now;
            while (true)
            {
                //Receive DataGram
                //byte[] recData = server.Receive(ref receivePoint);
                //logBox.Text += "Packet Received!!\r\n";
                System.Text.ASCIIEncoding encode = new System.Text.ASCIIEncoding();
                //Split it up
                string[] temp = {"www.rationalcity.com", "6060"}; //encode.GetString(recData).Split(new Char[] { '@' });
                //logBox.Text += "From :" + temp[0];
                //logBox.Text += "\r\nPort :" + temp[1];
                //logBox.Text += "\r\nContent :" + temp[2];

                //Re-send the DataGram
                MemoryStream m = new MemoryStream(20000);
                m.Write(new byte[]{
                            1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                            31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                            41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                            51, 52, 53, 54, 55, 56, 57, 58, 59, 60
                            }, 0, 60);
                // Send the length as a fixed length string
                m.Position = 0;
                m.Write(Encoding.ASCII.GetBytes((packetSecNumber++).ToString("d8") + "\r\n"), 0, 10);

                //logBox.Text += "\r\nSending current Date Time...\r\n";
                //We use the IP and Port sent by the user to send the DataGram back
                server.Send(m.GetBuffer(), (int)m.Length, temp[0], Int32.Parse(temp[1]));
                
                packetNumber++;
                // once per second outputs the number of received packets
                DateTime now = DateTime.Now;
                TimeSpan delta = now.Subtract(startTime);
                if (delta.Seconds != 0)
                {
                    startTime = now;
                    logBox.Text = "Packet number = " + (packetNumber - prevPacketNumber).ToString() + "\r\n";
                    prevPacketNumber = packetNumber;
                }

                Thread.Sleep(16);
            }
        }
    }
}