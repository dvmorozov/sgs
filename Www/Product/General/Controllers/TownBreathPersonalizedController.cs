using System;
using System.Collections.Specialized;
using System.Configuration;
using System.Web.Mvc;

namespace web.Controllers
{
    public class ProjectPersonalizedController : Controller
    {
        private String _appName1, _appName2;

        private void ReadConfiguration()
        {
            var appSettings = (NameValueCollection) ConfigurationManager.GetSection("appSettings");
            _appName1 = appSettings["AppName1"];
            _appName2 = appSettings["AppName2"];
        }

        public ProjectPersonalizedController()
        {
            ReadConfiguration();
        }

        //  the method fills ViewBag with application name
        protected override void OnActionExecuting(ActionExecutingContext ctx)
        {
            ViewBag.AppName = _appName1 + " " + _appName2;
            ViewBag.AppName1 = _appName1;
            ViewBag.AppName2 = _appName2;
            ViewBag.Title = "Welcome " + (String) ViewBag.AppName;
        }
    }
}