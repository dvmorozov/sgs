using System;
using System.Collections.Generic;
using System.Web;
using System.Web.Mvc;
using System.Xml.XPath;
using web.Models;

namespace web.Controllers
{
    public class DataController : PersonalizedController
    {
        public DataController()
        {
            Entities = new SGMasterBaseEntities();
        }

        [HttpPost]
        public ActionResult Upload(IEnumerable<HttpPostedFileBase> file)
        {
            try
            {
                foreach (HttpPostedFileBase f in file)
                {
                    if (f == null) continue;

                    var doc = new XPathDocument(f.InputStream);
                    XPathNavigator navigator = doc.CreateNavigator();
                    XPathNodeIterator i1 =
                        navigator.Select(
                            "/xml_template/device_type/logical_device/logical_object/attribute/extended_register");
                    while (i1.MoveNext())
                    {
                        XPathNodeIterator i2 = i1.Current.Select("value_identifier");
                        String valueIdentifier = i2.MoveNext() ? i2.Current.Value : "";

                        i2 = i1.Current.Select("value/int_value");
                        int intValue = i2.MoveNext() ? int.Parse(i2.Current.Value) : 0;

                        i2 = i1.Current.Select("value/string_value");
                        String stringValue = i2.MoveNext() ? i2.Current.Value : "";

                        i2 = i1.Current.Select("status/int_status");
                        int intStatus = i2.MoveNext() ? int.Parse(i2.Current.Value) : 0;

                        i2 = i1.Current.Select("units");
                        String units = i2.MoveNext() ? i2.Current.Value : "";

                        i2 = i1.Current.Select("capture_time/year");
                        int year = i2.MoveNext() ? int.Parse(i2.Current.Value) : 1975;

                        i2 = i1.Current.Select("capture_time/month");
                        int month = i2.MoveNext() ? int.Parse(i2.Current.Value) : 8;

                        i2 = i1.Current.Select("capture_time/day_of_month");
                        int dayOfMonth = i2.MoveNext() ? int.Parse(i2.Current.Value) : 12;

                        i2 = i1.Current.Select("capture_time/day_of_week");
                        String dayOfWeek = i2.MoveNext() ? i2.Current.Value : "";

                        i2 = i1.Current.Select("capture_time/hour");
                        int hour = i2.MoveNext() ? int.Parse(i2.Current.Value) : 0;

                        i2 = i1.Current.Select("capture_time/minute");
                        int minute = i2.MoveNext() ? int.Parse(i2.Current.Value) : 0;

                        i2 = i1.Current.Select("capture_time/second");
                        int second = i2.MoveNext() ? int.Parse(i2.Current.Value) : 0;

                        i2 = i1.Current.Select("capture_time/hundredths_of_second");
                        int hundredthsOfSecond = i2.MoveNext() ? int.Parse(i2.Current.Value) : 0;

                        Entities.PutExtendedRegisterIntoBase(valueIdentifier, units, intValue, stringValue, intStatus,
                                                             year, month, dayOfMonth, dayOfWeek, hour, minute, second,
                                                             hundredthsOfSecond);
                    }
                }

                return RedirectToAction("Upload");
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Upload()
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