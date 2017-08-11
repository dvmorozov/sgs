using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace web.Controllers
{
    public class ProjectPersonalizedController : Controller
    {
        //  the method fills ViewBag with application name
        protected override void OnActionExecuting(ActionExecutingContext ctx)
        {
            String appName1, appName2;

            appName1 = "Rational";
            appName2 = "City";

            ViewBag.AppName = appName1 + " " + appName2;
            ViewBag.AppName1 = appName1;
            ViewBag.AppName2 = appName2;
            ViewBag.Title = "Welcome " + (String)ViewBag.AppName;
        }
    }
}
