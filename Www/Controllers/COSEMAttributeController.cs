﻿using System;
using System.Collections.Generic;
using System.Globalization;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator")]
    public class CosemAttributeController : PersonalizedController
    {
        private ICosemAttributeRepository _cosemAttributeRepository;
        private ICosemClassRepository _cosemClassRepository;
        private ICosemDataTypeRepository _cosemDataTypeRepository;

        public CosemAttributeController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new CosemAttributeRepository(), new CosemClassRepository(), new CosemDataTypeRepository(),
                          Entities);
        }

        public CosemAttributeController(ICosemAttributeRepository r, ICosemClassRepository cr,
                                        ICosemDataTypeRepository cdt)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, cr, cdt, null);
        }

        private void SetRepository(ICosemAttributeRepository r, ICosemClassRepository cr, ICosemDataTypeRepository cdt,
                                   SGMasterBaseEntities e)
        {
            _cosemAttributeRepository = r;
            _cosemAttributeRepository.SetEntities(e);
            _cosemClassRepository = cr;
            _cosemClassRepository.SetEntities(e);
            _cosemDataTypeRepository = cdt;
            _cosemDataTypeRepository.SetEntities(e);
        }

        public ViewResult Index(long id /*COSEM-class identifier*/)
        {
            try
            {
                Guid userId = GetUserId();
                List<ViewCOSEMAttribute> v = _cosemAttributeRepository.GetCosemAttributeList(id, userId);

                ViewCOSEMClass vcc = _cosemClassRepository.GetCosemClass(id, userId);
                ViewBag.COSEMClassID = id;
                ViewBag.COSEMClassName = vcc.ClassName.TrimEnd();
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
                ViewCOSEMAttribute v = _cosemAttributeRepository.GetCosemAttribute(id, GetUserId());
                ViewBag.COSEMClassID = v.COSEMClassID;
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        private void FillAuxData(Guid userId, Int64 selectedCosemClass, Int64 selectedCosemDataType)
        {
            ViewBag.COSEMClassID = selectedCosemClass;
            ViewBag.COSEMDataTypeID = _cosemDataTypeRepository.GetCosemDataTypes(userId, selectedCosemDataType);
        }

        //
        // GET: /COSEMAttribute/Create

        public ActionResult Create(long id /*COSEM-class identifier*/)
        {
            try
            {
                FillAuxData(GetUserId(), id, 0);
                var v = new ViewCOSEMAttribute {COSEMClassID = id};
                return View(v);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Create(long id /*COSEM-class identifier*/, ViewCOSEMAttribute viewcosemattribute)
        {
            try
            {
                if (viewcosemattribute == null) throw new Exception("object should not be null");

                Guid userId = GetUserId();
                if (ModelState.IsValid)
                {
                    viewcosemattribute.COSEMClassID = id;
                    _cosemAttributeRepository.AddCosemAttribute(viewcosemattribute, userId);
                    return RedirectToAction("Index/" + viewcosemattribute.COSEMClassID.ToString(CultureInfo.InvariantCulture));
                }

                FillAuxData(userId, viewcosemattribute.COSEMClassID, viewcosemattribute.COSEMDataTypeID);
                return View(viewcosemattribute);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Edit(long id /*attribute identifier*/)
        {
            try
            {
                Guid userId = GetUserId();
                ViewCOSEMAttribute viewcosemattribute = _cosemAttributeRepository.GetCosemAttribute(id, userId);
                FillAuxData(userId, viewcosemattribute.COSEMClassID, viewcosemattribute.COSEMDataTypeID);
                return View(viewcosemattribute);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewCOSEMAttribute viewcosemattribute)
        {
            try
            {
                if (viewcosemattribute == null) throw new Exception("object should not be null");

                Guid userId = GetUserId();
                if (ModelState.IsValid)
                {
                    _cosemAttributeRepository.UpdateCosemAttribute(viewcosemattribute, userId);
                    return RedirectToAction("Index/" + viewcosemattribute.COSEMClassID.ToString(CultureInfo.InvariantCulture));
                }
                FillAuxData(userId, viewcosemattribute.COSEMClassID, viewcosemattribute.COSEMDataTypeID);
                return View(viewcosemattribute);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Delete(long id /*attribute identifier*/)
        {
            try
            {
                ViewCOSEMAttribute viewcosemattribute = _cosemAttributeRepository.GetCosemAttribute(id, GetUserId());
                ViewBag.COSEMClassID = viewcosemattribute.COSEMClassID;
                return View(viewcosemattribute);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(long id /*attribute identifier*/)
        {
            try
            {
                ViewCOSEMAttribute viewcosemattribute = _cosemAttributeRepository.GetCosemAttribute(id, GetUserId());
                _cosemAttributeRepository.DeleteCosemAttribute(id, GetUserId());
                return RedirectToAction("Index/" + viewcosemattribute.COSEMClassID.ToString(CultureInfo.InvariantCulture));
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }
    }
}