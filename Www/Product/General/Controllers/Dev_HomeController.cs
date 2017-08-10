using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Configuration;
using System.Web.Mvc;

namespace web.Controllers
{
    public partial class HomeController
    {
#if _DEV
        private readonly Guid _userId = new Guid("4D3CA3B7-D41F-41DA-89A3-E0BBD7693775"); //  demo user id
        
        private long _diagramId = 249;     //  demo diagram id
        private long _chartId = 250;       //  demo chart id
        private long _chartSetId = 187;

        private void ReadConfiguration()
        {
            try
            {
                var appSettings = (NameValueCollection)ConfigurationManager.GetSection("appSettings");
                _diagramId = long.Parse(appSettings["DemoDiagramId"]);
                _chartId = long.Parse(appSettings["DemoChartId"]);
                _chartSetId = long.Parse(appSettings["DemoChartSetId"]);
            }
// ReSharper disable EmptyGeneralCatchClause
            catch
// ReSharper restore EmptyGeneralCatchClause
            {
            }
        }

        public ActionResult ViewChart(Int64 id /*chart id.*/, int width, int height)
        {
            try
            {
                var viewchart = FillChartData(id, width, height, GetUserId());
                return View(viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                //  this view is showed in frame, so
                //  it should show error message by itself
                return View();
            }
        }

        //  this method renders the diagram demo page;
        //  name must be the same as in ChartController to utilize the updating script;
        public ActionResult ShowDiagram()
        {
            try
            {
                var v = BaseChartRepository.GetChart(_diagramId, _userId);
                ViewBag.ChartID = v.ID;
                ViewBag.Width = v.Width;
                ViewBag.Height = v.Height;

                if (v.ChartType.ToLower() == Diagram.ToLower())
                {
                    return View("DemoDiagram", v);
                }
                return RedirectToAction("Index");
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //  this method renders the chart demo page;
        //  name must be the same as in ChartController to utilize the updating script;
        //  https://www.evernote.com/shard/s132/nl/14501366/7dea6933-c310-4df8-906c-a0457ca00fac
        public ActionResult ShowChart()
        {
            try
            {
                var v = BaseChartRepository.GetChart(_chartId, _userId);
                ViewBag.ChartID = v.ID;
                ViewBag.Width = v.Width;
                ViewBag.Height = v.Height;

                if (v.ChartType.ToLower() == Line.ToLower())
                {
                    return View("DemoChart");
                }
                return RedirectToAction("Index");
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult ShowChartSet()
        {
            try
            {
                var v = _chartSetRepository.GetChartSet(_chartSetId, _userId);

                var l = _chartSetsChartsRepository.GetChartSetChartsList(_chartSetId, _userId);
                ViewBag.ChartSetsCharts = l;
                return View("DemoChartSet", v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //  https://www.evernote.com/shard/s132/nl/14501366/7dea6933-c310-4df8-906c-a0457ca00fac
        //  Renders and returns chart image.
        public FileResult GetChartContent(long seqNum /*is ignored*/)
        {
            return GetChartContentWh(-1, -1, seqNum);
        }

        //  https://www.evernote.com/shard/s132/nl/14501366/7dea6933-c310-4df8-906c-a0457ca00fac
        //  Renders and returns chart image.
        public FileResult GetChartContentWh(int width, int height, long seqNum /*is ignored*/)
        {
            var viewchart = FillChartData(_chartId, width, height, _userId);

            //  Gets chart object.
            var myChart = RenderChart(viewchart);
            return File(myChart.GetBytes(), System.Net.Mime.MediaTypeNames.Application.Octet, seqNum + ".jpg");
        }

        //  https://www.evernote.com/shard/s132/nl/14501366/7dea6933-c310-4df8-906c-a0457ca00fac
        //  Renders charts for demo chartset by index.
        public FileResult GetChartContentForChartSet(int chartIndex, int width, int height, long seqNum /*is ignored*/)
        {
            try
            {
                var l = _chartSetsChartsRepository.GetChartSetChartsList(_chartSetId, _userId);
                var chartId = l[chartIndex].ChartID;

                var viewchart = FillChartData(chartId, width, height, _userId);

                //  Gets chart object.
                var myChart = RenderChart(viewchart);
                return File(myChart.GetBytes(), System.Net.Mime.MediaTypeNames.Application.Octet, seqNum + ".jpg");
            }
            catch (Exception e)
            {
                //  Returns the error message as file.
                //var msg = ProcessLog.GetExceptionMessage(e);
                return File(System.Text.Encoding.UTF8.GetBytes( /*msg*/"An error occured in chart rendering: " + e.Message),
                            System.Net.Mime.MediaTypeNames.Application.Octet, "Exception.txt");
            }
        }

        public ContentResult Update()
        {
            var result = new ContentResult();
            try
            {
                FillChartData(_diagramId, -1, -1, _userId);
                var states = (List<String>)ViewBag.DataStates;

                result.ContentType = "application/json";
                result.Content = string.Join(" ", states);
                return result;
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                result.ContentType = "text/plain";
                result.Content = "Exception: " + e.Message;
                return result;
            }
        }

        public ActionResult Demo()
        {
            return View("Dev_Demo");
        }

        public ActionResult Contribute()
        {
            return View("Dev_Contribute");
        }
#else
        private void ReadConfiguration()
        {
        }
#endif
    }
}