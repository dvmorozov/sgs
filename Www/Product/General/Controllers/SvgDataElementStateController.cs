using System;
using System.Linq;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    public class SvgDataElementStateController : PersonalizedController
    {
        private readonly SGMasterBaseEntities _db = new SGMasterBaseEntities();

        public ViewResult Index(long id /*chart id.*/, long docId, string svgId, string valueIdentifier,
                                string identifier /*user defined identifier of the data element*/)
        {
            try
            {
                Guid userId = GetUserId();
                ViewBag.SVGID = svgId;
                ViewBag.ValueIdentifier = valueIdentifier;
                ViewBag.ChartID = id;
                ViewBag.DocID = docId;
                ViewBag.Identifier = identifier;
                var vi = new Guid(valueIdentifier);
                return
                    View(
                        _db.ViewSVGDataElementState.Where(
                            t => (t.DataOwnerID == userId) && (t.ValueIdentifier == vi) && (t.DocID == docId)).ToList());
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ViewResult Details(long id, long chartId, long docId, string svgId, string valueIdentifier,
                                  string identifier /*user defined identifier of the data element*/)
        {
            try
            {
                ViewBag.SVGID = svgId;
                ViewBag.ValueIdentifier = valueIdentifier;
                ViewBag.ChartID = id;
                ViewBag.DocID = docId;
                ViewBag.Identifier = identifier;

                Guid userId = GetUserId();
                ViewSVGDataElementState viewsvgdataelementstate =
                    _db.ViewSVGDataElementState.Single(v => v.ID == id && v.DataOwnerID == userId);
                return View(viewsvgdataelementstate);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // GET: /SvgDataElementState/Create

        public ActionResult Create(long chartId, long docId, string svgId, string valueIdentifier, string identifier
            /*user defined identifier of the data element*/)
        {
            try
            {
                ViewBag.SVGID = svgId;
                ViewBag.ValueIdentifier = valueIdentifier;
                ViewBag.ChartID = chartId;
                ViewBag.DocID = docId;
                ViewBag.Identifier = identifier;
                return View();
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // POST: /SvgDataElementState/Create

        [HttpPost]
        public ActionResult Create(ViewSVGDataElementState v, long chartId, long docId, string svgId,
                                   string valueIdentifier, string identifier
            /*user defined identifier of the data element*/)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    Guid userId = GetUserId();
                    v.DataOwnerID = userId;
                    _db.AddDataElementSate(v.LowLimit, v.State, v.DocID, v.ValueIdentifier, v.DataOwnerID);
                    return RedirectToAction("Index", new {id = chartId, docID = docId, svgID = svgId, valueIdentifier, identifier});
                }

                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // GET: /SvgDataElementState/Edit/5

        public ActionResult Edit(long id, long chartId, long docId, string svgId, string valueIdentifier,
                                 string identifier /*user defined identifier of the data element*/)
        {
            try
            {
                ViewBag.SVGID = svgId;
                ViewBag.ValueIdentifier = valueIdentifier;
                ViewBag.ChartID = chartId;
                ViewBag.DocID = docId;
                ViewBag.Identifier = identifier;

                Guid userId = GetUserId();
                ViewSVGDataElementState viewsvgdataelementstate =
                    _db.ViewSVGDataElementState.Single(v => v.ID == id && v.DataOwnerID == userId);
                return View(viewsvgdataelementstate);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // POST: /SvgDataElementState/Edit/5

        [HttpPost]
        public ActionResult Edit(ViewSVGDataElementState v, long chartId, long docId, string svgId,
                                 string valueIdentifier, string identifier
            /*user defined identifier of the data element*/)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    Guid userId = GetUserId();
                    v.DataOwnerID = userId;

                    _db.UpdateDataElementState(v.ID, v.LowLimit, v.State, v.DocID, v.ValueIdentifier, v.DataOwnerID);
                    return RedirectToAction("Index", new {id = chartId, docID = docId, svgID = svgId, valueIdentifier, identifier});
                }
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // GET: /SvgDataElementState/Delete/5

        public ActionResult Delete(long id, long chartId, long docId, string svgId, string valueIdentifier,
                                   string identifier /*user defined identifier of the data element*/)
        {
            try
            {
                ViewBag.SVGID = svgId;
                ViewBag.ValueIdentifier = valueIdentifier;
                ViewBag.ChartID = id;
                ViewBag.DocID = docId;
                ViewBag.Identifier = identifier;

                Guid userId = GetUserId();
                ViewSVGDataElementState viewsvgdataelementstate =
                    _db.ViewSVGDataElementState.Single(v => v.ID == id && v.DataOwnerID == userId);
                return View(viewsvgdataelementstate);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // POST: /SvgDataElementState/Delete/5

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(long id, long chartId, long docId, string svgId, string valueIdentifier,
                                            string identifier /*user defined identifier of the data element*/)
        {
            try
            {
                Guid userId = GetUserId();
                _db.DeleteDataElementState(id, userId);
                return RedirectToAction("Index", new {id = chartId, docID = docId, svgID = svgId, valueIdentifier, identifier});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // POST: /SvgDataElementState/Attach

        [HttpPost]
        public ActionResult Attach(long chartId, long docId, string svgId, string valueIdentifier, string identifier
                                   /*user defined identifier of the data element*/, string state)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    Guid userId = GetUserId();
                    _db.SetDataElementState(svgId, valueIdentifier, state, docId, userId, identifier);
                    return RedirectToAction("ShowDiagramDataSet", "Chart", new {id = chartId});
                }

                return RedirectToAction("Index", new {id = chartId, docID = docId, svgID = svgId, valueIdentifier, identifier});
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        protected override void Dispose(bool disposing)
        {
            _db.Dispose();
            base.Dispose(disposing);
        }
    }
}