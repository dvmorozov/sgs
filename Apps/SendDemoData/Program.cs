using System;
using System.Globalization;
using System.Linq;
using System.IO;
using System.Net;
using System.Threading;

namespace SendDemoData
{
    //  this program sends data to be shown in demo pages
    public class RationalCityPostExample
    {
        public static String XmlFileName = "test.xml";
        public static String Domain = "localhost:2374";
        public static Int32 Sleep = 60000;
        public static String TemplateFileName = "template.xml";

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
            var cl = new WebClient {Proxy = WebRequest.DefaultWebProxy};
            //  This is proxy to pass through.
            cl.Proxy.Credentials = CredentialCache.DefaultCredentials;

            var request = "http://" + Domain + "/Data/Upload";
            Console.WriteLine("Request: \"" + request + "\"");
            Console.WriteLine("File name: \"" + XmlFileName + "\"");

            var result = 
                cl.UploadFile(request, XmlFileName);
            Console.WriteLine("Response: \"" + System.Text.Encoding.UTF8.GetString(result) + "\"");
        }

        static void Main(string[] args)
        {
            var cycleCount = 1;
            Console.WriteLine(RationalCityPostExampleVersion.ToString());

            if (!args.Any())
            {
                Console.WriteLine("Usage: SendDemoData.exe \"www.rationalcity.com\" 5000 \"mytemplate.xml\"");
            }
            else
            {
                if (args.Any())
                {
                    Domain = args[0];
                }

                if (args.Count() > 1)
                {
                    Sleep = Int32.Parse(args[1]);
                }

                if (args.Count() > 2)
                {
                    TemplateFileName = args[2];
                }
            }

            var r = File.OpenText(TemplateFileName);
            var xmlTemplate = r.ReadToEnd();
            var flag = true;

            for (; ; )
            {
                var now = DateTime.Now;
                var result = xmlTemplate;
                Int64[] values = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                String[] units = { "units", "units", "units", "units", "units", "units", "units", "units", "units", "units" };

                values[0] = flag ? 1 : 2;
                values[1] = flag ? 2 : 1;
                values[2] = flag ? 1 : 2;
                values[3] = flag ? 2 : 1;
                values[4] = 0;
                values[5] = 0;
                values[6] = 0;
                values[7] = 0;
                values[8] = 0;
                values[9] = 0;

                for (Int32 j = 1; j <= 10; j++)
                {
                    result = result.Replace("@@VALUE_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", values[j - 1].ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@STRING_VALUE_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", values[j - 1].ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@STATUS_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", "0");
                    result = result.Replace("@@UNITS_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", units[j - 1]);
                    result = result.Replace("@@YEAR_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.Year.ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@MONTH_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.Month.ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@DAY_OF_MONTH_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.Day.ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@DAY_OF_WEEK_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.DayOfWeek.ToString());
                    result = result.Replace("@@HOUR_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.Hour.ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@MINUTE_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.Minute.ToString(CultureInfo.InvariantCulture));
                    result = result.Replace("@@SECOND_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", now.Second.ToString(CultureInfo.InvariantCulture));
                    //  according to IEC62056-62 p.13
                    result = result.Replace("@@HUNDREDTHS_OF_SECOND_Value_" + j.ToString(CultureInfo.InvariantCulture) + "@@", (now.Millisecond / 10).ToString(CultureInfo.InvariantCulture));
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
                Console.WriteLine("Cycle " + cycleCount.ToString(CultureInfo.InvariantCulture) + " time: " + now.ToString(CultureInfo.InvariantCulture));
                cycleCount++;
                flag = !flag;

                Thread.Sleep(Sleep);
            }
// ReSharper disable FunctionNeverReturns
        }
// ReSharper restore FunctionNeverReturns
    }
}

