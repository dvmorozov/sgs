using System;
using System.Collections.Generic;
using System.Globalization;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator, User")]
    public class CosemObjectController : PersonalizedController
    {
        private ICosemAttributeDataTypeRepository _cosemAttributeDataTypeRepository;
        private ICosemClassRepository _cosemClassRepository;
        private ICosemLogicalDeviceRepository _cosemLogicaDeviceRepository;
        private ICosemObjectRepository _cosemObjectRepository;
        private IDeviceTypeRepository _deviceTypeRepository;

        public CosemObjectController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new CosemObjectRepository(), new CosemLogicalDeviceRepository(), new DeviceTypeRepository(),
                          new CosemClassRepository(),
                          new CosemAttributeDataTypeRepository(), Entities);
        }

        public CosemObjectController(ICosemObjectRepository r, ICosemLogicalDeviceRepository clr,
                                     IDeviceTypeRepository dtr, ICosemClassRepository ccr,
                                     ICosemAttributeDataTypeRepository cadtr)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, clr, dtr, ccr, cadtr, null);
        }

        private void SetRepository(ICosemObjectRepository r, ICosemLogicalDeviceRepository clr,
                                   IDeviceTypeRepository dtr, ICosemClassRepository ccr,
                                   ICosemAttributeDataTypeRepository cadtr, SGMasterBaseEntities e)
        {
            _cosemObjectRepository = r;
            _cosemObjectRepository.SetEntities(e);
            _cosemLogicaDeviceRepository = clr;
            _cosemLogicaDeviceRepository.SetEntities(e);
            _deviceTypeRepository = dtr;
            _deviceTypeRepository.SetEntities(e);
            _cosemClassRepository = ccr;
            _cosemClassRepository.SetEntities(e);
            _cosemAttributeDataTypeRepository = cadtr;
            _cosemAttributeDataTypeRepository.SetEntities(e);
        }


        private void FillCreateEditViewBag(long id /*the identifier of COSEM logical device*/)
        {
            //  some other things are filled that impossible to pass through model object.
            ViewCOSEMLogicalDevice viewcosemlogicaldevice = _cosemLogicaDeviceRepository.GetCosemLogicalDevice(id,
                                                                                                              GetUserId());
            ViewDeviceType vdt = _deviceTypeRepository.GetDeviceType(viewcosemlogicaldevice.DeviceTypeID, GetUserId());
            ViewBag.DeviceTypeName = vdt.Description.TrimEnd();
            //  list of COSEM classes is extracted
            ViewBag.COSEMClassID = _cosemClassRepository.GetCosemClasses(GetUserId(), 0);
        }

        private void FillCommonViewBag(long id /*the identifier of COSEM object*/)
        {
            //  some other things are filled that impossible to pass through model object.
            ViewCOSEMObject viewcosemobject = _cosemObjectRepository.GetCosemObject(id, GetUserId());
            ViewBag.LogicalDeviceID = viewcosemobject.COSEMLogicalDeviceID;
            ViewCOSEMLogicalDevice viewcosemlogicaldevice =
                _cosemLogicaDeviceRepository.GetCosemLogicalDevice(viewcosemobject.COSEMLogicalDeviceID, GetUserId());

            ViewDeviceType vdt = _deviceTypeRepository.GetDeviceType(viewcosemlogicaldevice.DeviceTypeID, GetUserId());
            ViewBag.DeviceTypeName = vdt.Description.TrimEnd();
            //  for using in the "Attributes" page.
            ViewBag.COSEMObjectID = id;
            ViewBag.COSEMObjectName = viewcosemobject.COSEMLogicalName.TrimEnd();
            ViewBag.COSEMObjectStandard = viewcosemobject.Standard;
        }

        public ViewResult Index(long id /*the identifier of COSEM logical device*/)
        {
            try
            {
                Guid userId = GetUserId();
                List<ViewCOSEMObject> v = _cosemObjectRepository.GetCosemObjectList(id, userId);
                ViewBag.LogicalDeviceID = id;
                ViewCOSEMLogicalDevice viewcosemlogicaldevice = _cosemLogicaDeviceRepository.GetCosemLogicalDevice(id,
                                                                                                                  userId);
                ViewDeviceType vdt = _deviceTypeRepository.GetDeviceType(viewcosemlogicaldevice.DeviceTypeID, GetUserId());
                ViewBag.DeviceTypeID = vdt.ID;
                ViewBag.DeviceTypeName = vdt.Description.TrimEnd();
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ViewResult Attributes(long id /*the identifier of COSEM object*/)
        {
            try
            {
                FillCommonViewBag(id);
                List<ViewCOSEMAttributeDataType> v = _cosemAttributeDataTypeRepository.GetCosemAttributeDataTypeList(id,
                                                                                                                    GetUserId
                                                                                                                        ());
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        private void FillAssignIdentifierViewBag(long objectid)
        {
            Guid userId = GetUserId();
            ViewCOSEMObject viewcosemobject = _cosemObjectRepository.GetCosemObject(objectid, userId);
            ViewDeviceType vdt = _deviceTypeRepository.GetDeviceType(viewcosemobject.DeviceTypeID, userId);
            ViewBag.DeviceTypeName = vdt.Description.TrimEnd();
            ViewBag.COSEMObjectName = viewcosemobject.COSEMLogicalName.TrimEnd();
            ViewBag.COSEMObjectID = objectid;
        }

        public ActionResult AssignIdentifier(long id /*the identifier of attribute*/, long objectid)
        {
            try
            {
                FillAssignIdentifierViewBag(objectid);
                ViewCOSEMAttributeDataType viewcosemattributedatatype =
                    _cosemAttributeDataTypeRepository.GetCosemAttributeDataType(objectid, id, GetUserId());
                return View(viewcosemattributedatatype);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult AssignIdentifier(ViewCOSEMAttributeDataType viewcosemattributedatatype)
        {
            try
            {
                if (viewcosemattributedatatype != null)
                {
                    if (ModelState.IsValid)
                    {
                        _cosemAttributeDataTypeRepository.UpdateAttrIdentifier(viewcosemattributedatatype, GetUserId());
                        return RedirectToAction("Attributes", new {id = viewcosemattributedatatype.COSEMObjectID});
                    }
                    FillAssignIdentifierViewBag(viewcosemattributedatatype.COSEMObjectID);
                }
                return View(viewcosemattributedatatype);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ViewResult Details(long id /*the identifier of COSEM object*/)
        {
            try
            {
                ViewCOSEMObject viewcosemobject = _cosemObjectRepository.GetCosemObject(id, GetUserId());
                return View(viewcosemobject);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Create(long id /*the identifier of COSEM logical device*/)
        {
            try
            {
                FillCreateEditViewBag(id);
                //  all necessary fields should be filled here, because this is suitable for filling hidden form fields.
                var viewcosemobject = new ViewCOSEMObject {COSEMLogicalDeviceID = id};
                Guid userId = GetUserId();
                ViewCOSEMLogicalDevice viewcosemlogicaldevice = _cosemLogicaDeviceRepository.GetCosemLogicalDevice(id,
                                                                                                                  userId);
                ViewDeviceType vdt = _deviceTypeRepository.GetDeviceType(viewcosemlogicaldevice.DeviceTypeID, userId);
                viewcosemobject.DeviceTypeID = vdt.ID;
                return View(viewcosemobject);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(long id /*the identifier of COSEM logical device*/, ViewCOSEMObject viewcosemobject)
        {
            try
            {
                if (viewcosemobject != null)
                {
                    if (ModelState.IsValid)
                    {
                        _cosemObjectRepository.AddCosemObject(viewcosemobject, GetUserId());
                        return RedirectToAction("Index/" + id.ToString(CultureInfo.InvariantCulture));
                    }

                    FillCreateEditViewBag(viewcosemobject.COSEMLogicalDeviceID);
                }
                return View(viewcosemobject);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Edit(long id /*the identifier of COSEM object*/)
        {
            try
            {
                ViewCOSEMObject viewcosemobject = _cosemObjectRepository.GetCosemObject(id, GetUserId());
                FillCreateEditViewBag(viewcosemobject.COSEMLogicalDeviceID);
                return View(viewcosemobject);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewCOSEMObject viewcosemobject)
        {
            try
            {
                if (viewcosemobject != null)
                {
                    if (ModelState.IsValid)
                    {
                        _cosemObjectRepository.UpdateCosemObject(viewcosemobject, GetUserId());
                        return RedirectToAction("Index/" + viewcosemobject.COSEMLogicalDeviceID.ToString(CultureInfo.InvariantCulture));
                    }
                    FillCreateEditViewBag(viewcosemobject.COSEMLogicalDeviceID);
                }
                return View(viewcosemobject);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Delete(long id /*the identifier of COSEM object*/)
        {
            try
            {
                ViewCOSEMObject viewcosemobject = _cosemObjectRepository.GetCosemObject(id, GetUserId());
                return View(viewcosemobject);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(long id /*the identifier of COSEM object*/)
        {
            try
            {
                Guid userId = GetUserId();
                ViewCOSEMObject viewcosemobject = _cosemObjectRepository.GetCosemObject(id, userId);
                _cosemObjectRepository.DeleteCosemObject(id, userId);
                return RedirectToAction("Index/" + viewcosemobject.COSEMLogicalDeviceID);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }
    }
}