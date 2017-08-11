using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Web;
using System.Web.Mvc;
using System.Xml;
using Newtonsoft.Json;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator, User")]
    public class ChartController : ProjectChartController
    {
        private void SetRepository(IChartRepository r2, IBaseChartRepository b, SGMasterBaseEntities e)
        {
            ChartRepository = r2;
            ChartRepository.SetEntities(e);
            BaseChartRepository = b;
            BaseChartRepository.SetEntities(Entities);
        }

        public ChartController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new ChartRepository(), new BaseChartRepository(), Entities);
        }

        public ChartController(IChartRepository r, IBaseChartRepository b)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, b, null);
        }

        public ViewResult Index()
        {
            try
            {
                return View(BaseChartRepository.GetChartList(GetUserId()));
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ViewResult Details(long id)
        {
            try
            {
                ViewChart viewchart = BaseChartRepository.GetChart(id, GetUserId());
                ViewBag.ChartTypes = new SelectList(ChartTypes, viewchart != null ? viewchart.ChartType.TrimEnd() : ChartTypes[0]);
                return View("Details", viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public void SetCreateEditViewBag(ViewChart viewchart)
        {
            ViewBag.ChartType = new SelectList(ChartTypes, viewchart != null ? viewchart.ChartType.TrimEnd() : ChartTypes[0]);
            ViewBag.DataSetType = new SelectList(DataSetTypes, viewchart != null ? viewchart.DataSetType.TrimEnd() : DataSetTypes[0]);
        }

        public ActionResult Create()
        {
            try
            {
                SetCreateEditViewBag(null);
                var viewchart = new ViewChart {DataSetType = Last, DataSetMaxCount = 2, ChartType = Line};
                return View("Create", viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult CreateDiagram()
        {
            try
            {
                SetCreateEditViewBag(null);
                var viewchart = new ViewChart {DataSetType = Last, DataSetMaxCount = 2, ChartType = Diagram};
                return View("CreateDiagram", viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(ViewChart viewchart)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    BaseChartRepository.AddChart(viewchart, GetUserId());
                    return RedirectToAction("Index");
                }

                SetCreateEditViewBag(viewchart);
                return View(viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Edit(long id)
        {
            try
            {
                ViewChart v = BaseChartRepository.GetChart(id, GetUserId());
                SetCreateEditViewBag(v);

                if (v.ChartType.ToLower() == Diagram.ToLower())
                {
                    return View("EditDiagram", v);
                }
                return View("Edit", v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewChart viewchart)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    BaseChartRepository.UpdateChart(viewchart, GetUserId());
                    return RedirectToAction("ShowChart", "Chart", new {viewchart.ID});
                }
                return View(viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Delete(long id)
        {
            try
            {
                ViewChart viewchart = BaseChartRepository.GetChart(id, GetUserId());
                return View(viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(long id)
        {
            try
            {
                BaseChartRepository.DeleteChart(id, GetUserId());
                return RedirectToAction("Index");
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //  Исп. для рендеринга чартов Google.
        //  https://www.evernote.com/shard/s132/nl/14501366/93bb3dca-a2c7-42bf-b252-ee803e7fbfe3
// ReSharper disable UnusedMember.Local
        private ViewResult RenderXml()
// ReSharper restore UnusedMember.Local
        {
            var result = new XmlDocument();

            var xmlDataSets = (List<String>) ViewBag.FileNames; //  series data
            var xmlDataStats = (List<String>) ViewBag.StatFileNames; //  list of statistical data for each serie

            XmlNode chartData = result.CreateElement("chart_data");
            result.AppendChild(chartData);

            XmlNode dataSets = result.CreateElement("data_sets");
            chartData.AppendChild(dataSets);
            XmlNode dataStats = result.CreateElement("data_stats");
            chartData.AppendChild(dataStats);

            foreach (String xmlDataSet in xmlDataSets)
            {
                var dataSet = new XmlDocument();
                dataSet.Load(new MemoryStream(Encoding.ASCII.GetBytes(xmlDataSet)));
                XmlElement dataSetRoot = dataSet.DocumentElement;
                if (dataSetRoot != null)
                {
                    XmlNode newDataSetRoot = result.ImportNode(dataSetRoot, true);
                    dataSets.AppendChild(newDataSetRoot);
                }
            }

            foreach (String xmlDataStat in xmlDataStats)
            {
                var dataStat = new XmlDocument();
                dataStat.Load(new MemoryStream(Encoding.ASCII.GetBytes(xmlDataStat)));
                XmlElement recRoot = dataStat.DocumentElement;
                if (recRoot != null)
                {
                    XmlNode newDataStatRoot = result.ImportNode(recRoot, true);
                    dataStats.AppendChild(newDataStatRoot);
                }
            }

            ViewBag.XmlDoc = JsonConvert.SerializeXmlNode(result);
            return View("RenderXML");
        }

        public  ActionResult View(Int64 id /*chart id.*/, Int32 width, Int32 height)
        {
            try
            {
                var viewchart = FillChartData(id, width, height, GetUserId());

                if (viewchart.ChartType.TrimEnd().ToLower() == Diagram.ToLower())
                    return View("RenderDiagram", viewchart);

                var g = Guid.NewGuid();
                var baseFileName = g.ToString();
                var path = AppDomain.CurrentDomain.BaseDirectory + "Temp\\";
                var localName = Path.Combine(path, baseFileName);

                //  Gets chart object.
                var myChart = RenderChart(viewchart);

                //  Saves chart to the temporary file.
                var fileName = localName + ".png";
                myChart.Save(fileName, "png");
                ViewBag.FileName = baseFileName + ".png";

                // RenderXml() 
                //  Renders URL to the file.
                return View("RenderChart", viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                //  this view is showed in frame, so
                //  it should show error message by itself
                return View();
            }
        }

        //  https://www.evernote.com/shard/s132/nl/14501366/82196283-fd9c-43a4-844a-5b2845f602e8
        //  Renders and returns chart image.
        public FileResult GetChartContent(long id /*chart id.*/, long seqNum /*is ignored*/)
        {
            return GetChartContentWh(id, -1, -1, seqNum);
        }

        //  https://www.evernote.com/shard/s132/nl/14501366/82196283-fd9c-43a4-844a-5b2845f602e8
        //  Renders and returns chart image.
        public FileResult GetChartContentWh(long id /*chart id.*/, Int32 width, Int32 height, long seqNum /*is ignored*/)
        {
            var viewchart = FillChartData(id, width, height, GetUserId());

            //  Gets chart object.
            var myChart = RenderChart(viewchart);
            return File(myChart.GetBytes(), System.Net.Mime.MediaTypeNames.Application.Octet, seqNum + ".jpg");
        }

        public ActionResult ShowDiagram(Int64 id /*chart id.*/)
        {
            try
            {
                Guid userId = GetUserId();
                ViewChart viewchart = BaseChartRepository.GetChart(id, userId);

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

        public ActionResult Update(Int64 id /*chart id.*/)
        {
            try
            {
                return RedirectToAction("View", "Chart", new {id, width = -1, height = -1});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                //  this view is showed in frame, so
                //  it should show error message by itself
                return View("Error");
            }
        }

        //  this method is used from chart set updating JScript
        public ActionResult UpdateWh(Int64 id /*chart id.*/, Int32 width, Int32 height)
        {
            try
            {
                return RedirectToAction("View", "Chart", new {id, width, height});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                //  this view is showed in frame, so
                //  it should show error message by itself
                return View("Error");
            }
        }

        public ActionResult ShowChart(Int64 id/*chart id.*/)
        {
            try
            {
                Guid userId = GetUserId();
                ViewChart v = BaseChartRepository.GetChart(id, userId);
                ViewBag.ChartID = v.ID;
                ViewBag.Width = v.Width;
                ViewBag.Height = v.Height;
                
                return View("ShowChart", v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult ShowDiagramDataSet(Int64 id /*chart id.*/)
        {
            try
            {
                Guid userId = GetUserId();
                ViewChart v = BaseChartRepository.GetChart(id, userId);

                if (v.ChartType.ToLower() == Diagram.ToLower())
                {
                    ViewBag.ChartID = v.ID;
                    ViewBag.Width = v.Width;
                    ViewBag.Height = v.Height;
                    return View("ShowDiagramDataSet", v);
                }
                return RedirectToAction("ShowChart", new {id});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        /*
        public ActionResult XLSX(Int64 id/*chart id.* /)
        {
            try
            {
                //  here should be export to XLSX realization
                ViewChart viewchart = chartRepository.GetChart(id, GetUserID());
                return View(viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }
        */

        public ActionResult DataSet(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId, String owner,
                                    long? locationId, String location, String element, String svgId)
        {
            try
            {
                ViewChart viewchart = BaseChartRepository.GetChart(id, GetUserId());
                ViewBag.Group = group;
                ViewBag.GroupID = groupId;
                ViewBag.Owner = owner;
                ViewBag.OwnerID = ownerId;
                ViewBag.Location = location;
                ViewBag.LocationID = locationId;
                ViewBag.Element = element;
                ViewBag.SVGID = svgId;
                List<ViewElementFiltered> v = BaseChartRepository.GetElementFilteredList(element, ownerId, groupId, locationId, GetUserId(), id);
                ViewBag.ElementList = v;
                return View(viewchart);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult ElementStates(Int64 id /*chart id.*/, Int64 docId, String svgId, String valueIdentifier,
                                          String identifier)
        {
            try
            {
                return RedirectToAction("Index", "SvgDataElementState",
                                        new {id, docID = docId, svgID = svgId, valueIdentifier, identifier});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("AddElement")]
        public ActionResult AddElementConfirm(Int64 id /*chart id.*/, Int64 elementId, String returnUrl)
        {
            try
            {
                if (Url.IsLocalUrl(returnUrl) && returnUrl.Length > 1
                    && !returnUrl.StartsWith("//") && !returnUrl.StartsWith("/\\"))
                {
                    ChartRepository.AddElementToChart(elementId, id, GetUserId());
                    return Redirect(returnUrl);
                }
                return RedirectToAction("DataSet", new {id});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("DeleteElement")]
        public ActionResult DeleteElementConfirm(Int64 id /*chart id.*/, Int64 elementId, String returnUrl)
        {
            try
            {
                if (Url.IsLocalUrl(returnUrl) && returnUrl.Length > 1
                    && !returnUrl.StartsWith("//") && !returnUrl.StartsWith("/\\"))
                {
                    ChartRepository.DeleteElementFromChart(elementId, id, GetUserId());
                    return Redirect(returnUrl);
                }
                return RedirectToAction("DataSet", new {id});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult SelectGroup(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId, String owner,
                                        long? locationId, String location, String element)
        {
            try
            {
                List<ViewElementGroup> v = BaseChartRepository.GetElementGroupList(GetUserId());
                ViewBag.ChartID = id;
                ViewBag.Group = group;
                ViewBag.GroupID = groupId;
                ViewBag.Owner = owner;
                ViewBag.OwnerID = ownerId;
                ViewBag.Location = location;
                ViewBag.LocationID = locationId;
                ViewBag.Element = element;
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("SelectGroup")]
        public ActionResult SelectGroupConfirm(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId,
                                               String owner, long? locationId, String location, String element)
        {
            try
            {
                return RedirectToAction("DataSet",
                                        new
                                            {
                                                id,
                                                groupid = groupId,
                                                group,
                                                ownerid = ownerId,
                                                owner,
                                                locationid = locationId,
                                                location,
                                                element
                                            });
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult SelectOwner(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId, String owner,
                                        long? locationId, String location, String element)
        {
            try
            {
                List<ViewElementOwner> v = BaseChartRepository.GetElementOwnerList(GetUserId());
                ViewBag.ChartID = id;
                ViewBag.Group = group;
                ViewBag.GroupID = groupId;
                ViewBag.Owner = owner;
                ViewBag.OwnerID = ownerId;
                ViewBag.Location = location;
                ViewBag.LocationID = locationId;
                ViewBag.Element = element;
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("SelectOwner")]
        public ActionResult SelectOwnerConfirm(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId,
                                               String owner, long? locationId, String location, String element)
        {
            try
            {
                return RedirectToAction("DataSet",
                                        new
                                            {
                                                id,
                                                groupid = groupId,
                                                group,
                                                ownerid = ownerId,
                                                owner,
                                                locationid = locationId,
                                                location,
                                                element
                                            });
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult SelectLocation(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId,
                                           String owner, long? locationId, String location, String element)
        {
            try
            {
                List<ViewElementLocation> v = BaseChartRepository.GetElementLocationList(GetUserId());
                ViewBag.ChartID = id;
                ViewBag.Group = group;
                ViewBag.GroupID = groupId;
                ViewBag.Owner = owner;
                ViewBag.OwnerID = ownerId;
                ViewBag.Location = location;
                ViewBag.LocationID = locationId;
                ViewBag.Element = element;
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("SelectLocation")]
        public ActionResult SelectLocationConfirm(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId,
                                                  String owner, long? locationId, String location, String element)
        {
            try
            {
                return RedirectToAction("DataSet",
                                        new
                                            {
                                                id,
                                                groupid = groupId,
                                                group,
                                                ownerid = ownerId,
                                                owner,
                                                locationid = locationId,
                                                location,
                                                element
                                            });
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult SelectElement(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId,
                                          String owner, long? locationId, String location, String element)
        {
            try
            {
                List<ViewElementInstanceName> v = BaseChartRepository.GetElementInstanceNameList();
                ViewBag.ChartID = id;
                ViewBag.Group = group;
                ViewBag.GroupID = groupId;
                ViewBag.Owner = owner;
                ViewBag.OwnerID = ownerId;
                ViewBag.Location = location;
                ViewBag.LocationID = locationId;
                ViewBag.Element = element;
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("SelectElement")]
        public ActionResult SelectElementConfirm(Int64 id /*chart id.*/, long? groupId, String group, long? ownerId,
                                                 String owner, long? locationId, String location, String element)
        {
            try
            {
                return RedirectToAction("DataSet",
                                        new
                                            {
                                                id,
                                                groupid = groupId,
                                                group,
                                                ownerid = ownerId,
                                                owner,
                                                locationid = locationId,
                                                location,
                                                element
                                            });
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // GET: /Data/
        [HttpPost]
        public ActionResult UploadDiagram(IEnumerable<HttpPostedFileBase> file, long chartId)
        {
            try
            {
                foreach (HttpPostedFileBase f in file)
                {
                    if (f == null) continue;
                    //  "f" contains source file name, but this name is ignored and
                    //  changed on the unique name to avoid possible conflicts
                    String path = AppDomain.CurrentDomain.BaseDirectory + "UploadedFiles\\";
                    String srcName = Path.Combine(path, Guid.NewGuid().ToString());
                    String dstName = Path.Combine(path, Guid.NewGuid().ToString());
                    try
                    {
                        f.SaveAs(srcName);

                        var src = new XmlDocument();
                        var dst = new XmlDocument();

                        src.Load(srcName);
                        XmlNodeList svgList = src.GetElementsByTagName("svg");
                        for (int i = 0; i < svgList.Count; i++)
                        {
                            XmlNode svg = svgList[i];
                            XmlNodeList nodes = svg.ChildNodes;

                            XmlNode svgOut = dst.CreateElement("svg");
                            dst.AppendChild(svgOut);

                            //  the best way to copy the elememt is to copy only necessary data
                            //  and to ignore all other stuff
                            for (int j = 0; j < nodes.Count; j++)
                            {
                                XmlNode svgElement = nodes[j];
                                switch (svgElement.Name.ToLower())
                                {
                                    case ("rect"):
                                    case ("ellipse"):
                                    case ("circle"):
                                    case ("polygon"):
                                    case ("polyline"):
                                    case ("path"):
                                    case ("text"):
                                        if (svgElement.Attributes != null)
                                        {
                                            XmlAttribute attr = svgElement.Attributes["style"];
                                            if (attr != null)
                                            {
                                                var styleParts = new[] {"fill", "stroke"};
                                                foreach (string stylePart in styleParts)
                                                {
                                                    string inner = attr.InnerText.ToLower();

                                                    int index = inner.IndexOf(stylePart, StringComparison.Ordinal);
                                                    int startStylePart = index;
                                                    if (index != -1)
                                                    {
                                                        index = inner.IndexOf(':', index + stylePart.Length);
                                                        if (index != -1)
                                                        {
                                                            int start = index + 1;
                                                            int removeLen;
                                                            index = inner.IndexOf(';', index + 1);

                                                            if (index == -1)
                                                            {
                                                                index = inner.Length;
                                                                removeLen = index - startStylePart;
                                                            }
                                                            else
                                                            {
                                                                removeLen = index - startStylePart + 1;
                                                            }
                                                            int end = index;

                                                            string stylePartValue =
                                                                inner.Substring(start, end - start).Trim();
                                                            inner = inner.Remove(startStylePart, removeLen);
                                                            XmlAttribute newAttr = src.CreateAttribute(stylePart);
                                                            newAttr.InnerText = stylePartValue;
                                                            svgElement.Attributes.Append(newAttr);
                                                        }
                                                        attr.InnerText = inner;
                                                    }
                                                }
                                            }
                                        }
                                        XmlElement newElement = dst.CreateElement(svgElement.Name);
                                        newElement.InnerText = svgElement.InnerText;
                                        //  copying of attributes
                                        if (svgElement.Attributes != null)
                                        {
                                            for (int k = 0; k < svgElement.Attributes.Count; k++)
                                            {
                                                XmlAttribute newAttr = dst.CreateAttribute(svgElement.Attributes[k].Name);
                                                newAttr.Value = svgElement.Attributes[k].Value;
                                                newElement.Attributes.Append(newAttr);
                                            }
                                        }
                                        //  adding of special attributes
                                        XmlAttribute attr1 = dst.CreateAttribute("class");
                                        attr1.Value = "visible";
                                        newElement.Attributes.Append(attr1);

                                        XmlElement elValueIdentifier = dst.CreateElement("value_identifier");
                                        elValueIdentifier.InnerText = "empty";
                                            //  must be for xQuery parser to work correctly
                                        newElement.AppendChild(elValueIdentifier);

                                        XmlElement elState = dst.CreateElement("state");
                                        elState.InnerText = "empty";
                                        elValueIdentifier.AppendChild(elState);

                                        XmlElement elTitle = dst.CreateElement("title");
                                        if (svgElement.Attributes != null)
                                            elTitle.InnerText = svgElement.Attributes["id"].Value;
                                        newElement.AppendChild(elTitle);

                                        attr1 = dst.CreateAttribute("onclick");
                                        attr1.Value = "on_svg_click(id)";
                                        newElement.Attributes.Append(attr1);

                                        attr1 = dst.CreateAttribute("onmouseover");
                                        attr1.Value = "svg_oumouseover(evt)";
                                        newElement.Attributes.Append(attr1);

                                        attr1 = dst.CreateAttribute("onmouseout");
                                        attr1.Value = "svg_oumouseout(evt)";
                                        newElement.Attributes.Append(attr1);

                                        svgOut.AppendChild(newElement);
                                        break;
                                }
                            }
                        }
                        dst.Save(dstName);
                        Entities.PutSVGIntoBase(chartId, srcName, dstName, GetUserId());
                    }
                    finally
                    {
                        System.IO.File.Delete(srcName);
                        System.IO.File.Delete(dstName);
                    }
                }

                return RedirectToAction("Edit", new {id = chartId});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult UploadDiagram(long id /*chart ID*/)
        {
            try
            {
                ViewBag.ChartID = id;
                return View();
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult AttachDataElement(long id /*chart ID*/, string svgId)
        {
            try
            {
                return RedirectToAction("DataSet", new {id, svgID = svgId});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult DetachDataElement(long id /*chart ID*/, long docId, string svgId)
        {
            try
            {
                Guid userId = GetUserId();

                Entities.DetachDataElementState(svgId, docId, userId);
                return RedirectToAction("ShowDiagramDataSet", "Chart", new {id});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }
    }
}