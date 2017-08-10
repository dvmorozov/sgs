using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Net;
using System.Threading;
using System.Net.NetworkInformation;

namespace SendData
{
    public class RationalCityPostExample
    {
        public static String xmlFileName = "test.xml";
        public static String domain = "localhost:2374";
        public static Int32 sleep = 60000;
        public static String templateFileName = "template.xml";

        public static void SendRequest()
        {
            /*
            // Create a request using a URL that can receive a post. 
            WebRequest request = WebRequest.Create("http://localhost:2374/Data/Upload");
            // Set the Method property of the request to POST.
            request.Method = "POST";
            // Create POST data and convert it to a byte array.
            string postData = "This is a test that posts this string to a Web server.";
            byte[] byteArray = Encoding.UTF8.GetBytes(postData);
            // Set the ContentType property of the WebRequest.
            request.ContentType = "multipart/form-data";
            // Set the ContentLength property of the WebRequest.
            request.ContentLength = byteArray.Length;
            // Get the request stream.
            Stream dataStream = request.GetRequestStream();
            // Write the data to the request stream.
            dataStream.Write(byteArray, 0, byteArray.Length);
            // Close the Stream object.
            dataStream.Close();
            // Get the response.
            WebResponse response = request.GetResponse();
            // Display the status.
            Console.WriteLine(((HttpWebResponse)response).StatusDescription);
            // Get the stream containing content returned by the server.
            dataStream = response.GetResponseStream();
            // Open the stream using a StreamReader for easy access.
            StreamReader reader = new StreamReader(dataStream);
            // Read the content.
            string responseFromServer = reader.ReadToEnd();
            // Display the content.
            Console.WriteLine(responseFromServer);
            // Clean up the streams.
            reader.Close();
            dataStream.Close();
            response.Close();
             */
            WebClient cl = new WebClient();
            //  this is to proxy pass through
            cl.Proxy = WebRequest.DefaultWebProxy;
            cl.Proxy.Credentials = CredentialCache.DefaultCredentials;

            //Byte[] result = 
                cl.UploadFile("http://" + domain + "/Data/Upload", xmlFileName);
            //Console.WriteLine( System.Text.Encoding.UTF8.GetString(result));
        }

        static void Main(string[] args)
        {
            Int32 cycleCount = 1;

            NetworkInterface netif = null;
            Console.WriteLine(RationalCityPostExampleVersion.ToString());

            if (args.Count() == 0)
            {
                foreach (NetworkInterface n in NetworkInterface.GetAllNetworkInterfaces())
                {
                    PhysicalAddress ph = n.GetPhysicalAddress();
                    IPInterfaceProperties ipp = n.GetIPProperties();
                    UnicastIPAddressInformationCollection ua = ipp.UnicastAddresses;
                    Console.WriteLine(ph.ToString().ToUpper());
                    foreach (UnicastIPAddressInformation u in ua)
                    {
                        Console.WriteLine("  Unicast Address ......................... : {0}", u.Address);
                    }
                }
            }
            else
            {
                foreach (NetworkInterface n in NetworkInterface.GetAllNetworkInterfaces())
                {
                    PhysicalAddress ph = n.GetPhysicalAddress();

                    if (ph.ToString().ToUpper() == args[0].ToUpper())
                    {
                        netif = n;
                        break;
                    }
                }

                if (args.Count() > 1)
                {
                    domain = args[1];
                }

                if (args.Count() > 2)
                {
                    sleep = Int32.Parse(args[2]);
                }

                if (args.Count() > 3)
                {
                    templateFileName = args[3];
                }
            }

            StreamReader r = System.IO.File.OpenText(templateFileName);
            String xmlTemplate = r.ReadToEnd();


            for (; ; )
            {
                if (netif != null)
                {
                    IPv4InterfaceStatistics stat = netif.GetIPv4Statistics();
                    DateTime now = DateTime.Now;
                    String result = xmlTemplate;
                    Int64[] values = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                    String[] units = { "kB", "kB", "pieces", "pieces", "pieces", "pieces", "pieces", "pieces", "pieces", "pieces" };

                    values[0] = stat.BytesSent / 1000;
                    values[1] = stat.BytesReceived / 1000;
                    values[2] = stat.IncomingPacketsDiscarded;
                    values[3] = stat.IncomingPacketsWithErrors;
                    values[4] = stat.IncomingUnknownProtocolPackets;
                    values[5] = stat.NonUnicastPacketsReceived;
                    values[6] = stat.NonUnicastPacketsSent;
                    values[7] = stat.UnicastPacketsReceived;
                    values[8] = stat.UnicastPacketsSent;
                    values[9] = stat.OutputQueueLength;

                    for (Int32 j = 1; j <= 10; j++)
                    {
                        result = result.Replace("@@VALUE_Value_" + j.ToString() + "@@", values[j - 1].ToString());
                        result = result.Replace("@@STRING_VALUE_Value_" + j.ToString() + "@@", values[j - 1].ToString());
                        result = result.Replace("@@STATUS_Value_" + j.ToString() + "@@", "0");
                        result = result.Replace("@@UNITS_Value_" + j.ToString() + "@@", units[j - 1]);
                        result = result.Replace("@@YEAR_Value_" + j.ToString() + "@@", now.Year.ToString());
                        result = result.Replace("@@MONTH_Value_" + j.ToString() + "@@", now.Month.ToString());
                        result = result.Replace("@@DAY_OF_MONTH_Value_" + j.ToString() + "@@", now.Day.ToString());
                        result = result.Replace("@@DAY_OF_WEEK_Value_" + j.ToString() + "@@", now.DayOfWeek.ToString());
                        result = result.Replace("@@HOUR_Value_" + j.ToString() + "@@", now.Hour.ToString());
                        result = result.Replace("@@MINUTE_Value_" + j.ToString() + "@@", now.Minute.ToString());
                        result = result.Replace("@@SECOND_Value_" + j.ToString() + "@@", now.Second.ToString());
                        //  according to IEC62056-62 p.13
                        result = result.Replace("@@HUNDREDTHS_OF_SECOND_Value_" + j.ToString() + "@@", (now.Millisecond / 10).ToString());
                    }
                    System.IO.File.WriteAllText(xmlFileName, result);

                    try
                    {
                        RationalCityPostExample.SendRequest();
                    }
                    catch(Exception e)
                    {
                        Console.WriteLine("Exception: " + (String)(e.InnerException != null ? e.InnerException.Message : e.Message));
                    }
                    Console.WriteLine("Cycle " + cycleCount.ToString() + " time: " + now.ToString());
                    cycleCount++;
                }
                Thread.Sleep(sleep);
            }
        }
    }
}

