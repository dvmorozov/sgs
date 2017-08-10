using System;
using System.Collections.Generic;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator, User")]
    public class ChartSetController : PersonalizedController
    {
        private IChartSetRepository _chartSetRepository;
        private IChartSetChartsRepository _chartSetsChartsRepository;

        public ChartSetController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new ChartSetChartsRepository(), new ChartSetRepository(), Entities);
        }

        public ChartSetController(IChartSetChartsRepository r, IChartSetRepository r1)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, r1, null);
        }

        private void SetRepository(IChartSetChartsRepository r, IChartSetRepository r1, SGMasterBaseEntities e)
        {
            _chartSetsChartsRepository = r;
            _chartSetsChartsRepository.SetEntities(e);
            _chartSetRepository = r1;
            _chartSetRepository.SetEntities(e);
        }

        public ActionResult Index()
        {
            try
            {
                List<ViewChartSet> list = _chartSetRepository.GetChartSetList(GetUserId());
                return View(list);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Details(int id)
        {
            try
            {
                ViewChartSet v = _chartSetRepository.GetChartSet(id, GetUserId());
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Create()
        {
            try
            {
                return View();
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(ViewChartSet v)
        {
            try
            {
                _chartSetRepository.AddChartSet(v, GetUserId());
                return RedirectToAction("Index");
            }
            catch
            {
                return View();
            }
        }

        public ActionResult Edit(int id)
        {
            try
            {
                ViewChartSet v = _chartSetRepository.GetChartSet(id, GetUserId());
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(int id, ViewChartSet v)
        {
            try
            {
                if (null != v)
                {
                    v.ID = id;
                    _chartSetRepository.UpdateChartSet(v, GetUserId());
                }
                return RedirectToAction("Index");
            }
            catch
            {
                return View();
            }
        }

        public ActionResult Delete(int id)
        {
            try
            {
                ViewChartSet v = _chartSetRepository.GetChartSet(id, GetUserId());
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(int id)
        {
            try
            {
                _chartSetRepository.DeleteChartSet(id, GetUserId());
                return RedirectToAction("Index");
            }
            catch
            {
                return View();
            }
        }

        public ActionResult View(int id)
        {
            try
            {
                Guid userId = GetUserId();
                ViewChartSet v = _chartSetRepository.GetChartSet(id, userId);

                List<ViewChartSetsCharts> l = _chartSetsChartsRepository.GetChartSetChartsList(id, userId);
                ViewBag.ChartSetsCharts = l;
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }
    }
}