using System;
using System.Web.Mvc;

namespace web.Controllers
{
    public class DownloadsController : PersonalizedController
    {
        //
        // GET: /Downloads/
        public ActionResult Index()
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
    }
}