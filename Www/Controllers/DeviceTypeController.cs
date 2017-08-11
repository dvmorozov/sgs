using System;
using System.Collections.Generic;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator, User")]
    public class DeviceTypeController : PersonalizedController
    {
        private IDeviceTypeRepository _repository; //  data isolation level

        public DeviceTypeController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new DeviceTypeRepository(), Entities);
        }

        public DeviceTypeController(IDeviceTypeRepository r)
        {
            SetRepository(r, null);
        }

        private void SetRepository(IDeviceTypeRepository r, SGMasterBaseEntities e)
        {
            _repository = r;
            _repository.SetEntities(e);
        }

        public ViewResult Index()
        {
            try
            {
                List<ViewDeviceType> viewgroupList = _repository.GetDeviceTypeList(GetUserId(), null);
                return View(viewgroupList);
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
                ViewDeviceType viewdevicetype = _repository.GetDeviceType(id, GetUserId());
                return View(viewdevicetype);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Create()
        {
            return View();
        }

        [HttpPost]
        public ActionResult Create(ViewDeviceType viewdevicetype)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    _repository.AddDeviceType(viewdevicetype, GetUserId());
                    return RedirectToAction("Index");
                }

                return View(viewdevicetype);
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
                ViewDeviceType viewdevicetype = _repository.GetDeviceType(id, GetUserId());
                return View(viewdevicetype);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewDeviceType viewdevicetype)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    _repository.UpdateDeviceType(viewdevicetype, GetUserId());
                    return RedirectToAction("Index");
                }
                return View(viewdevicetype);
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
                ViewDeviceType viewdevicetype = _repository.GetDeviceType(id, GetUserId());
                return View(viewdevicetype);
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
                _repository.DeleteDeviceType(id, GetUserId());
                return RedirectToAction("Index");
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult CreateCustom(long id)
        {
            try
            {
                _repository.CreateCustomDeviceType(id, GetUserId());
                return RedirectToAction("Index");
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }
    }
}