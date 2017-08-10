using System;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    public partial class HomeController : ProjectChartController
    {
        private IChartSetChartsRepository _chartSetsChartsRepository;
        private IChartSetRepository _chartSetRepository;

        private void SetRepository(IChartSetChartsRepository r, IChartSetRepository r1, IChartRepository r2,
                                   IBaseChartRepository b, SGMasterBaseEntities e)
        {
            _chartSetsChartsRepository = r;
            _chartSetsChartsRepository.SetEntities(e);
            _chartSetRepository = r1;
            _chartSetRepository.SetEntities(e);
            ChartRepository = r2;
            ChartRepository.SetEntities(e);
            BaseChartRepository = b;
            BaseChartRepository.SetEntities(Entities);
        }

        public HomeController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new ChartSetChartsRepository(), new ChartSetRepository(), new ChartRepository(),
                          new BaseChartRepository(), Entities);
#if _DEV
            ReadConfiguration();
#endif
        }

        public HomeController(IChartSetChartsRepository r, IChartSetRepository r1, IChartRepository r2,
                              IBaseChartRepository b)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, r1, r2, b, null);
#if _DEV
            ReadConfiguration();
#endif
        }

        public ActionResult Index()
        {
            try
            {
                // ViewBag.Title is filling in the ancestor
#if _DEV
                ViewBag.Message = (String) ViewBag.Title + "!";
                return View("Dev_Index");
#else
#if _SANDBOX
                return View("SandBox_Index");


#else
                return View("Index");
#endif
#endif
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

#if !_DEV
        public ActionResult EULA()
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
#endif
    }
}