using System;
using System.Collections.Generic;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator")]
    public class CosemDataTypeController : PersonalizedController
    {
        private ICosemDataTypeRepository _cosemDataTypeRepository;

        public CosemDataTypeController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new CosemDataTypeRepository(), Entities);
        }

        public CosemDataTypeController(ICosemDataTypeRepository r)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, null);
        }

        private void SetRepository(ICosemDataTypeRepository r, SGMasterBaseEntities e)
        {
            _cosemDataTypeRepository = r;
            _cosemDataTypeRepository.SetEntities(e);
        }

        public ViewResult Index()
        {
            try
            {
                List<ViewCOSEMDataType> viewcosemdatatype = _cosemDataTypeRepository.GetCosemDataTypeList(GetUserId());
                return View(viewcosemdatatype);
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
                ViewCOSEMDataType viewcosemdatatype = _cosemDataTypeRepository.GetCosemDataType(id, GetUserId());
                return View(viewcosemdatatype);
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
                ViewBag.AncestorTypeID = _cosemDataTypeRepository.GetCosemDataTypes(GetUserId(), 0);
                return View();
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(ViewCOSEMDataType viewcosemdatatype)
        {
            try
            {
                if (viewcosemdatatype != null)
                {
                    if (ModelState.IsValid)
                    {
                        _cosemDataTypeRepository.AddCosemDataType(viewcosemdatatype, GetUserId());
                        return RedirectToAction("Index");
                    }
                    ViewBag.AncestorTypeID = _cosemDataTypeRepository.GetCosemDataTypes(GetUserId(),
                                                                                       viewcosemdatatype.AncestorTypeID !=
                                                                                       null
                                                                                           ? (Int64)
                                                                                             viewcosemdatatype
                                                                                                 .AncestorTypeID
                                                                                           : 0);
                }
                return View(viewcosemdatatype);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        //
        // GET: /COSEMDataType/Edit/5

        public ActionResult Edit(long id)
        {
            try
            {
                ViewCOSEMDataType viewcosemdatatype = _cosemDataTypeRepository.GetCosemDataType(id, GetUserId());
                ViewBag.AncestorTypeID = _cosemDataTypeRepository.GetCosemDataTypes(GetUserId(),
                                                                                   viewcosemdatatype.AncestorTypeID !=
                                                                                   null
                                                                                       ? (Int64)
                                                                                         viewcosemdatatype
                                                                                             .AncestorTypeID
                                                                                       : 0);
                return View(viewcosemdatatype);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewCOSEMDataType viewcosemdatatype)
        {
            try
            {
                if (viewcosemdatatype != null)
                {
                    if (ModelState.IsValid)
                    {
                        _cosemDataTypeRepository.UpdateCosemDataType(viewcosemdatatype, GetUserId());
                        return RedirectToAction("Index");
                    }
                    ViewBag.AncestorTypeID = _cosemDataTypeRepository.GetCosemDataTypes(GetUserId(),
                                                                                       viewcosemdatatype.AncestorTypeID !=
                                                                                       null
                                                                                           ? (Int64)
                                                                                             viewcosemdatatype
                                                                                                 .AncestorTypeID
                                                                                           : 0);
                }
                return View(viewcosemdatatype);
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
                ViewCOSEMDataType viewcosemdatatype = _cosemDataTypeRepository.GetCosemDataType(id, GetUserId());
                return View(viewcosemdatatype);
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
                _cosemDataTypeRepository.DeleteCosemDataType(id, GetUserId());
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