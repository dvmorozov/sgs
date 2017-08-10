using System;
using System.Globalization;
using System.Linq;
using System.IO;
using System.Net;
using System.Threading;
using System.Net.NetworkInformation;

namespace ServPerfMon
{
    public class PerfAttrCollector
    {
        public static String XmlFileName = "test.xml";
        public static String Domain = "localhost:2374";
        public static Int32 Sleep = 60000;
        public static String TemplateFileName = "template.xml";

        public static void SendRequest()
        {
            var cl = new WebClient {Proxy = WebRequest.DefaultWebProxy};
            //  this is to proxy pass through
            cl.Proxy.Credentials = CredentialCache.DefaultCredentials;

            //Byte[] result = 
                cl.UploadFile("http://" + Domain + "/Data/Upload", XmlFileName);
            //Console.WriteLine( System.Text.Encoding.UTF8.GetString(result));
        }

        static void Main(string[] args)
        {
            var cycleCount = 1;

            NetworkInterface netif = null;
            Console.WriteLine(PerfAttrCollectorVersion.ToString());

            if (!args.Any())
            {
                foreach (var n in NetworkInterface.GetAllNetworkInterfaces())
                {
                    var ph = n.GetPhysicalAddress();
                    var ipp = n.GetIPProperties();
                    var ua = ipp.UnicastAddresses;
                    Console.WriteLine(ph.ToString().ToUpper());
                    foreach (var u in ua)
                    {
                        Console.WriteLine("  Unicast Address ......................... : {0}", u.Address);
                    }
                }
            }
            else
            {
                foreach (var n in NetworkInterface.GetAllNetworkInterfaces())
                {
                    var ph = n.GetPhysicalAddress();

                    if (ph.ToString().ToUpper() != args[0].ToUpper()) continue;
                    netif = n;
                    break;
                }

                if (args.Count() > 1)
                {
                    Domain = args[1];
                }

                if (args.Count() > 2)
                {
                    Sleep = Int32.Parse(args[2]);
                }

                if (args.Count() > 3)
                {
                    TemplateFileName = args[3];
                }
            }

            var r = File.OpenText(TemplateFileName);
            var xmlTemplate = r.ReadToEnd();


            for (; ; )
            {
                if (netif != null)
                {
                    var stat = netif.GetIPv4Statistics();
                    var now = DateTime.Now;
                    var result = xmlTemplate;
                    Int64[] values = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                    string[] units = { "kB", "kB", "pieces", "pieces", "pieces", "pieces", "pieces", "pieces", "pieces", "pieces" };
                    string[] names = {"BytesSent", "IncomingPacketsDisca", "IncomingPacketsWithE", "IncomingUnknownProto", "NonUnicastPacketsRec", "NonUnicastPacketsSen", "UnicastPacketsReceiv", "UnicastPacketsSent", "OutputQueueLength", "BytesReceived"};

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

                    for (var j = 0; j < 10; j++)
                    {
                        result = result.Replace("@@VALUE_" + names[j] + "@@", values[j].ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@STRING_VALUE_" + names[j] + "@@", values[j].ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@STATUS_" + names[j] + "@@", "0");
                        result = result.Replace("@@UNITS_" + names[j] + "@@", units[j]);
                        result = result.Replace("@@YEAR_" + names[j] + "@@", now.Year.ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@MONTH_" + names[j] + "@@", now.Month.ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@DAY_OF_MONTH_" + names[j] + "@@", now.Day.ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@DAY_OF_WEEK_" + names[j] + "@@", now.DayOfWeek.ToString());
                        result = result.Replace("@@HOUR_" + names[j] + "@@", now.Hour.ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@MINUTE_" + names[j] + "@@", now.Minute.ToString(CultureInfo.InvariantCulture));
                        result = result.Replace("@@SECOND_" + names[j] + "@@", now.Second.ToString(CultureInfo.InvariantCulture));
                        //  according to IEC62056-62 p.13
                        result = result.Replace("@@HUNDREDTHS_OF_SECOND_" + names[j] + "@@", (now.Millisecond / 10).ToString(CultureInfo.InvariantCulture));
                    }
                    File.WriteAllText(XmlFileName, result);

                    try
                    {
                        SendRequest();
                    }
                    catch(Exception e)
                    {
                        Console.WriteLine("Exception: " + (e.InnerException != null ? e.InnerException.Message : e.Message));
                    }
                    Console.WriteLine("Cycle " + cycleCount + " time: " + now.ToString(CultureInfo.InvariantCulture));
                    cycleCount++;
                }
                Thread.Sleep(Sleep);
            }
// ReSharper disable FunctionNeverReturns
        }
// ReSharper restore FunctionNeverReturns
    }
}

