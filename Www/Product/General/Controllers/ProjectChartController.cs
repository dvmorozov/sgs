using System;
using System.Collections.Generic;
using System.Data;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using System.Web.Helpers;
using System.Xml;
using web.Models;

namespace web.Controllers
{
    public class ProjectChartController : PersonalizedController
    {
        public static String Diagram = "diagram";
        public static String Line = "line";
        protected static String Last = "last";
        protected static String LastSeconds = "last sec.";

        protected IBaseChartRepository BaseChartRepository;
        protected IChartRepository ChartRepository;

        public List<String> DataSetTypes
        {
            get { return new List<String>(new[] {Last, LastSeconds}); }
        }

        public List<String> ChartTypes
        {
            get { return new List<String>(new[] {Line /*should be first as default*/, "area", "column"}); }
        }

        protected ViewChart FillChartData(Int64 id /*chart id.*/, int width, int height, Guid userId)
        {
            ViewChart viewchart = BaseChartRepository.GetChart(id, userId);
            ViewBag.Width = (width != -1) ? width : viewchart.Width;
            ViewBag.Height = (height != -1) ? height : viewchart.Height;

            if (viewchart.ChartType.TrimEnd().ToLower() == Diagram.ToLower())
            {
                //  the reference to document is meaningful only for diagrams,
                //  so it can be null
                if (viewchart.DocID != null)
                {
                    List<String> states = ChartRepository.ExportDataElementStates((long) viewchart.DocID, userId);
                    ViewBag.DataStates = states;
                }
                else
                {
                    ViewBag.DataStates = new List<String>();
                }
            }
            else
            {
                var fileNames = new List<String>();
                var statFileNames = new List<String>();

                var l = viewchart.DataSetType.Trim().ToLower() == LastSeconds ? 
                    BaseChartRepository.GetPointsVsAcqTime_Stat_LastSeconds(id, userId, viewchart.DataSetMaxCount) : 
                    BaseChartRepository.GetPointsVsAcqTime_Stat_Last(id, userId, viewchart.DataSetMaxCount);

                for (int i = 0; i < l.Count(); i++)
                {
                    ViewFile vf = l[i];
                    if (vf.Content.ToLower() == "dataset")
                    {
                        fileNames.Add(vf.FileName);
                    }
                    else if (vf.Content.ToLower() == "datastat")
                    {
                        statFileNames.Add(vf.FileName);
                    }
                }
                ViewBag.FileNames = fileNames;
                ViewBag.StatFileNames = statFileNames;
            }

            return viewchart;
        }

        private class TimeStep
        {
            private readonly int _deltaSecs;
            private readonly int _intervalSecs;

            public int DeltaSecs {
                get { return _deltaSecs; }
            }

            public int IntervalSecs
            {
                get { return _intervalSecs; }
            }

            public TimeStep(int delta, int interval)
            {
                _deltaSecs = delta;
                _intervalSecs = interval;
            }
        }

        //  Returns the minimal value which is multiple of 5 or power of 10.
        private  static double GetLimit(double value)
        {
            var result = 1.0;
            while (result < value)
            {
                var r = result*5.0;
                if (r >= value)
                {
                    result = r; break; 
                }
                result *= 10.0;
            }
            return result;
        }

        private static void GetValueLimits(double vMin, double vMax, out double newMin, out double newMax)
        {

            //  Auto limits.
            if (vMax < 0.0 && vMin < 0.0)
            {
                newMin = GetLimit(Math.Abs(vMin) > Math.Abs(vMax) ? vMin : vMax);
                newMax = 0;
            }
            else
            if (vMax >= 0.0 && vMin >= 0.0)
            {
                newMax = GetLimit(Math.Abs(vMax) > Math.Abs(vMin) ? vMax : vMin);
                newMin = 0;
            }
            else
            {
                newMax = GetLimit(Math.Abs(vMax) > Math.Abs(vMin) ? Math.Abs(vMax) : Math.Abs(vMin));
                newMin = -1 * vMax;
            }
        }

        private static void GetTimeLimits(double tMinSec, double tMaxSec, out double newMinSec, out double newMaxSec, out double duration)
        {
            var steps = new[]
                {
                    new TimeStep(50, 10), 
                    new TimeStep(300, 60), 
                    new TimeStep(600, 120),
                    new TimeStep(1500, 300), 
                    new TimeStep(3000, 600), 
                    new TimeStep(9000, 1800), 
                    new TimeStep(18000 /*5 hours*/, 3600), 
                    new TimeStep(36000 /*10 hours*/, 7200), 
                    new TimeStep(90000 /*25 hours*/, 18000), 
                    new TimeStep(180000 /*50 hours*/, 36000), 
                    new TimeStep(432000 /*5 days*/, 86400), 
                    new TimeStep(864000 /*10 days*/, 172800 /*2 days*/), 
                    new TimeStep(2160000 /*25 days*/, 432000 /*5 days*/), 
                    new TimeStep(4320000 /*50 days*/, 864000 /*10 days*/), 
                    new TimeStep(8640000 /*100 days*/, 1728000 /*20 days*/), 
                    new TimeStep(12960000 /*150 days*/, 2592000 /*30 days*/), 
                    new TimeStep(21600000 /*250 days*/, 4320000 /*50 days*/), 
                    new TimeStep(25920000 /*300 days*/, 5184000 /*60 days*/),
                    new TimeStep(86400000 /*1000 days*/, 17280000 /*200 days*/),
                    new TimeStep(129600000 /*1500 days*/, 25920000 /*300 days*/),
                    new TimeStep(311040000 /*3600 days*/, 62208000 /*720 days*/)
                };

            Debug.Assert(tMaxSec >= tMinSec);

            var delta = tMaxSec - tMinSec;
            double interval;
            double intervalNumber;

            try
            {
                var timeStep = steps.First(i => (double) i.DeltaSecs >= delta);
                interval = timeStep.IntervalSecs;
                intervalNumber = Math.Floor(timeStep.DeltaSecs / interval);
            }
            catch
            {
                //  The delta is more than 3600 days.
                var deltaYears = delta/31104000.0;
                var intervalYears = Math.Floor(deltaYears / 5);                     //  The width of delta in years.
                if (intervalYears * 5 < deltaYears) intervalYears += 1.0;

                intervalNumber = 5.0;
                interval = intervalYears * 31104000.0;
            }

            duration = intervalNumber*interval;
            var offset = tMinSec - Math.Floor(tMinSec/interval)*interval;
            newMinSec = tMinSec - offset;
            newMaxSec = newMinSec + duration;
        }

        protected Chart RenderChart(ViewChart v)
        {
            var xmlData = (List<String>)ViewBag.FileNames;
            var xmlStat = (List<String>)ViewBag.StatFileNames;

            var chart = new Chart(ViewBag.Width != null ? (Int32)ViewBag.Width : v.Width, ViewBag.Height != null ? (Int32)ViewBag.Height : v.Height).AddTitle(v.Name.TrimEnd());

            Double tMin = 0.0, tMax = 0.0, vMin = 0.0, vMax = 0.0, unitsInSec = 1.0;
            var elementName = "";
            var timeUnits = "?";
            //var origAcqTimeMax = "?";
            var origAcqTimeMin = "?";

            if ((xmlStat != null) && (xmlStat.Count() != 0))
            {
                var xml = xmlStat[0];
                var reader = new XmlTextReader(new MemoryStream(Encoding.ASCII.GetBytes(xml)));
                const string locale = "en-US";
                var culture = new CultureInfo(locale);

                try
                {
                    while (reader.Read())
                    {
                        switch (reader.NodeType)
                        {
                            case XmlNodeType.Element:       // The node is an element.
                                elementName = reader.Name.ToLower();
                                break;
                            case XmlNodeType.Text:          //Display the text in each element.
                                switch (elementName)
                                {
                                    case ("tmax"):
                                        tMax = Double.Parse(reader.Value, culture.NumberFormat);
                                        break;
                                    case ("tmin"):
                                        tMin = Double.Parse(reader.Value, culture.NumberFormat);
                                        break;
                                    case ("vmax"):
                                        vMax = Double.Parse(reader.Value, culture.NumberFormat);
                                        break;
                                    case ("vmin"):
                                        vMin = Double.Parse(reader.Value, culture.NumberFormat);
                                        break;
                                    case ("timeunits"):
                                        timeUnits = reader.Value;
                                        break;
                                    case("unitsinsec"):
                                        unitsInSec = Double.Parse(reader.Value, culture.NumberFormat);
                                        break;
                                    case ("origacqtimemax"):
                                        //origAcqTimeMax = reader.Value;
                                        break;
                                    case ("origacqtimemin"):
                                        origAcqTimeMin = reader.Value;
                                        break;
                                }
                                break;
                            case XmlNodeType.EndElement:    //Display the end of the element.
                                break;
                        }
                    }
                }
                finally
                {   // this allows file deleting in the case of reading failure
                    reader.Close();
                }
            }

            var legendName = Guid.NewGuid().ToString();
            //myChart.AddLegend("Legend\nStart time: " + origAcqTimeMin + "\nEnd time: " + origAcqTimeMax, legendName);
            chart.AddLegend("Legend", legendName);

            for (var i = 0; i < xmlData.Count(); i++)
            {
                //  Must be separate object for every serie.
                var dataSet = new DataSet();
                dataSet.ReadXmlSchema(Server.MapPath("~/App_Data/data.xsd"));

                dataSet.ReadXml(new MemoryStream(Encoding.ASCII.GetBytes(xmlData[i])));

                var dataView = new DataView(dataSet.Tables[0]) {Sort = "Time"};
                var chartType = v.ChartType.TrimEnd().ToLower();

                chart.AddSeries("Last " + v.DataSetMaxCount.ToString(CultureInfo.InvariantCulture) + " points " + (i + 1).ToString(CultureInfo.InvariantCulture), chartType, markerStep: 1, legend: legendName,
                        xValue: dataView, xField: "Time",
                        yValues: dataView, yFields: "Value"
                        );
            }

            Debug.Assert(Math.Abs(unitsInSec) > 1e-6);
            if (v.DataSetType.Trim().ToLower() == LastSeconds)
            {
                tMin = (tMax*unitsInSec - v.DataSetMaxCount)/unitsInSec;
            }

            if (Math.Abs(tMax - tMin) > 1e-6)
            {
                double newMin, newMax, duration;

                GetTimeLimits(tMin * unitsInSec, tMax * unitsInSec, out newMin, out newMax, out duration);
                newMin /= unitsInSec;
                newMax /= unitsInSec;
                duration /= unitsInSec;
                chart.SetXAxis("Time, Start = " + origAcqTimeMin + ", Duration = " + duration.ToString(CultureInfo.InvariantCulture) + " (" + timeUnits + ")", newMin, newMax);
            }
            else
                if (Math.Abs(tMin - 0) < 1e-6)
                {
                    chart.SetXAxis("Time, Start = " + origAcqTimeMin + ", Duration = " + tMax.ToString(CultureInfo.InvariantCulture) + " (" + timeUnits + ")", tMin, tMin + 1);
                }

            if (Math.Abs(vMax - vMin) > 1e-6)
            {
                double newMin, newMax;
                GetValueLimits(vMin, vMax, out newMin, out newMax);
                chart.SetYAxis("Value, Min = " + vMin.ToString(CultureInfo.InvariantCulture) + ", Max = " + vMax.ToString(CultureInfo.InvariantCulture), newMin, newMax);
            }
            else
                if (Math.Abs(vMin - 0) < 1e-6)
                {
                    chart.SetYAxis("Value, Min = " + vMin.ToString(CultureInfo.InvariantCulture) + ", Max = " + vMax.ToString(CultureInfo.InvariantCulture), vMin, vMin + 1);
                }
            return chart;
        }
    }
}