using System;
using System.Collections.Generic;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator")]
    public class ObisSetController : PersonalizedController
    {
        private IDeviceTypeRepository _deviceTypeRepository;
        private IObisGroupRepository _obisGroupRepository;
        private IObisSetRepository _obisSetRepository; //  data isolation level

        public ObisSetController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new ObisSetRepository(), new DeviceTypeRepository(), new ObisGroupRepository(), Entities);
        }

        public ObisSetController(IObisSetRepository r, IDeviceTypeRepository dtr, IObisGroupRepository ogr)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, dtr, ogr, null);
        }

        private void SetRepository(IObisSetRepository r, IDeviceTypeRepository dtr, IObisGroupRepository ogr,
                                   SGMasterBaseEntities e)
        {
            _obisSetRepository = r;
            _obisSetRepository.SetEntities(e);
            _deviceTypeRepository = dtr;
            _deviceTypeRepository.SetEntities(e);
            _obisGroupRepository = ogr;
            _obisGroupRepository.SetEntities(e);
        }

        public ViewResult Index()
        {
            try
            {
                List<ViewOBISSet> v = _obisSetRepository.GetObisSetList(GetUserId());
                return View(v);
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
                ViewOBISSet viewobisset = _obisSetRepository.GetObisSet(id, GetUserId());
                FillAuxData(viewobisset);
                return View(viewobisset);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        private void FillAuxData(ViewOBISSet viewobisset)
        {
            Guid userId = GetUserId();
            if (viewobisset != null)
            {
                if (viewobisset.DeviceTypeID != null)
                {
                    ViewDeviceType vdt = _deviceTypeRepository.GetDeviceType((Int64) viewobisset.DeviceTypeID, userId);
                    ViewBag.DeviceTypeName = vdt.Description;
                }
            }
            if (viewobisset != null && viewobisset.DeviceTypeID != null)
                ViewBag.DeviceTypeID = _deviceTypeRepository.GetDeviceTypes(userId,
                                                                            (Int64) viewobisset.DeviceTypeID, null);
            ViewBag.AID = _obisGroupRepository.GetObisGroups("A", userId, viewobisset != null ? viewobisset.AID : 0);
            ViewBag.BID = _obisGroupRepository.GetObisGroups("B", userId, viewobisset != null ? viewobisset.BID : 0);
            ViewBag.CID = _obisGroupRepository.GetObisGroups("C", userId, viewobisset != null ? viewobisset.CID : 0);
            ViewBag.DID = _obisGroupRepository.GetObisGroups("D", userId, viewobisset != null ? viewobisset.DID : 0);
            ViewBag.EID = _obisGroupRepository.GetObisGroups("E", userId, viewobisset != null ? viewobisset.EID : 0);
            ViewBag.FID = _obisGroupRepository.GetObisGroups("F", userId, viewobisset != null ? viewobisset.FID : 0);
        }

        public ActionResult Create()
        {
            try
            {
                FillAuxData(null);
                return View();
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(ViewOBISSet viewobisset)
        {
            try
            {
                if (viewobisset != null)
                {
                    if (ModelState.IsValid)
                    {
                        _obisSetRepository.AddObisSet(viewobisset, GetUserId());
                        return RedirectToAction("Index");
                    }
                }
                FillAuxData(viewobisset);
                return View(viewobisset);
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
                ViewOBISSet viewobisset = _obisSetRepository.GetObisSet(id, GetUserId());
                //Trace.Assert(viewobisset != null); allowed...
                FillAuxData(viewobisset);
                return View(viewobisset);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewOBISSet viewobisset)
        {
            try
            {
                if (viewobisset != null)
                {
                    if (ModelState.IsValid)
                    {
                        _obisSetRepository.UpdateObisSet(viewobisset, GetUserId());
                        return RedirectToAction("Index");
                    }
                }
                FillAuxData(viewobisset);
                return View(viewobisset);
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
                ViewOBISSet viewobisset = _obisSetRepository.GetObisSet(id, GetUserId());
                //Trace.Assert(viewobisset != null); allowed...
                FillAuxData(viewobisset);
                return View(viewobisset);
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
                _obisSetRepository.DeleteObisSet(id, GetUserId());
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