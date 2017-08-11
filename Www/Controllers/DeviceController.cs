using System;
using System.Globalization;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    public class DeviceController : BaseDeviceController
    {
        public ActionResult Create(long id /*device group identifier*/)
        {
            try
            {
                var userId = GetUserId();
                FillAuxData(userId, id, 0, 0, 0);

                //  to fill hidden page fields conviniently
                var viewdevice = new ViewDevice { AddressType = "IP", GroupID = id };
                return View("CreateWithoutIP" /*temporarily IP input disabled !!!*/, viewdevice);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(ViewDevice viewdevice)
        {
            try
            {
                if (viewdevice != null)
                {
                    Guid userId = GetUserId();
                    if (ModelState.IsValid)
                    {
                        DeviceRepository.AddDevice(viewdevice, userId);
                        return RedirectToAction("GroupDevices", "Device", new {id = viewdevice.GroupID});
                    }

                    FillAuxData(userId, viewdevice.GroupID,
                                viewdevice.OwnerID != null ? (Int64) viewdevice.OwnerID : 0,
                                viewdevice.TypeID, viewdevice.GroupID);
                }
                return View(viewdevice);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ViewResult Details(long id /*device identifier*/)
        {
            try
            {
                var viewdevice = DeviceRepository.GetDevice(id, GetUserId());
                ViewBag.CurrentGroupID = viewdevice.GroupID;
                return View("DetailsWithoutIP" /*temporarily IP input disabled !!!*/, viewdevice);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Edit(long id /*device identifier*/)
        {
            try
            {
                var viewdevice = DeviceRepository.GetDevice(id, GetUserId());
                FillEditViewBag(viewdevice);
                return View("EditWithoutIP" /*temporarily IP input disabled !!!*/, viewdevice);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //  параметр должен называться именно "id"!
        public ViewResult GroupDevices(long id /*device group identifier*/)
        {
            try
            {
                var userId = GetUserId();
                var v = DeviceTypeAndOwnerRepository.GetDeviceTypeAndOwnerList(id, userId);
                var vg = GroupRepository.GetGroup(id, userId);
                ViewBag.GroupName = vg.Name.TrimEnd();
                ViewBag.CurrentGroupID = id;
                return View("GroupDevicesWithoutIP" /*temporarily IP input disabled !!!*/, v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewDevice viewdevice)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    DeviceRepository.UpdateDevice(viewdevice, GetUserId());
                    return RedirectToAction("GroupDevices/" + viewdevice.GroupID.ToString(CultureInfo.InvariantCulture));
                }
                FillEditViewBag(viewdevice);
                return View(viewdevice);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult SetAddress(long id /*device id.*/, long? addressId
            /*null terminates the address setup sequence*/)
        {
            try
            {
                if (null != addressId)
                {
                    if (ModelState.IsValid)
                    {
                        //  this code finalizes the address setup sequence
                        var v = new ViewDevice { ID = id, LocationAddressID = addressId };
                        DeviceRepository.UpdateDeviceAddress(v, GetUserId());
                    }
                }
                return RedirectToAction("Details/" + id.ToString(CultureInfo.InvariantCulture));
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult SetOwner(long id /*device id.*/, long? ownerId /*null terminates the owner setup sequence*/)
        {
            try
            {
                if (null != ownerId)
                {
                    if (ModelState.IsValid)
                    {
                        //  this code finalizes the owner setup sequence
                        var v = new ViewDevice { ID = id, OwnerID = ownerId };
                        DeviceRepository.UpdateDeviceOwnerId(v, GetUserId());
                    }
                }
                return RedirectToAction("Details/" + id.ToString(CultureInfo.InvariantCulture));
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Delete(long id /*device index*/)
        {
            try
            {
                var viewdevice = DeviceRepository.GetDevice(id, GetUserId());
                ViewBag.CurrentGroupID = viewdevice.GroupID;
                return View("DeleteWithoutIP" /*temporarily IP input disabled !!!*/, viewdevice);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(long id /*device index*/)
        {
            try
            {
                var userId = GetUserId();
                var vg = DeviceRepository.GetDevice(id, userId);
                DeviceRepository.DeleteDevice(id, userId);
                return RedirectToAction("GroupDevices/" + vg.GroupID.ToString(CultureInfo.InvariantCulture));
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [Authorize(Roles = "Administrator, User")]
        public FileResult XmlTemplate(long id /*device index*/)
        {
            try
            {
                var t = GetXmlTemplate(id, GetUserId());
                return File(System.Text.Encoding.UTF8.GetBytes(t), System.Net.Mime.MediaTypeNames.Application.Octet,
                            id + ".xml");
            }
            catch (Exception)
            {
                //  Returns the error message as file.
                //var msg = ProcessLog.GetExceptionMessage(e);
                return File(System.Text.Encoding.UTF8.GetBytes( /*msg*/"An error occured in creating template file. " +
                                                                       "Probably the logical attributes of device aren't added " +
                                                                       "to the acquisition list."),
                            System.Net.Mime.MediaTypeNames.Application.Octet, "Exception.txt");
            }
        }
    }
}