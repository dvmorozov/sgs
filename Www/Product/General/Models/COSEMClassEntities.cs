using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface ICosemClassRepository
    {
        List<ViewCOSEMClass> GetCosemClassList(Guid userId);
        ViewCOSEMClass GetCosemClass(Int64 id, Guid userId);
        SelectList GetCosemClasses(Guid userId, Int64 selected);
        void AddCosemClass(ViewCOSEMClass viewCosemClass, Guid userId);
        void DeleteCosemClass(Int64 id, Guid userId);
        void UpdateCosemClass(ViewCOSEMClass viewCosemClasstype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemClassRepository : ICosemClassRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMClass> GetCosemClassList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMClass> os = _db.ViewCOSEMClass;
            return os.Where(t => (t.DataOwnerID == userId) || t.Standard).ToList();
        }

        public SelectList GetCosemClasses(Guid userId, Int64 selected)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMClass> os = _db.ViewCOSEMClass;
            return new SelectList(os.Where(t => (t.DataOwnerID == userId) || t.Standard), "ID", "ClassName", selected);
        }

        public ViewCOSEMClass GetCosemClass(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMClass> os = _db.ViewCOSEMClass;
            ViewCOSEMClass result = os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || t.Standard));
            return result;
        }

        public void AddCosemClass(ViewCOSEMClass viewCosemClass, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddCOSEMClass(viewCosemClass.ClassName, viewCosemClass.CardinalityMin, viewCosemClass.CardinalityMax,
                             viewCosemClass.COSEMClassID,
                             viewCosemClass.Version, userId, viewCosemClass.Standard);
        }

        public void DeleteCosemClass(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteCOSEMClass(id, userId);
        }

        public void UpdateCosemClass(ViewCOSEMClass viewCosemClasstype, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateCOSEMClass(
                viewCosemClasstype.ID, viewCosemClasstype.ClassName, viewCosemClasstype.CardinalityMin,
                viewCosemClasstype.CardinalityMax, viewCosemClasstype.COSEMClassID,
                viewCosemClasstype.Version, userId, viewCosemClasstype.Standard);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemClassRepository : ICosemClassRepository
    {
        public int CosemClassRowAffected;

        public List<ViewCOSEMClass> GetCosemClassList(Guid userId)
        {
            return new List<ViewCOSEMClass>();
        }

        public ViewCOSEMClass GetCosemClass(Int64 id, Guid userId)
        {
            return new ViewCOSEMClass();
        }

        public SelectList GetCosemClasses(Guid userId, Int64 selected)
        {
            return new SelectList(new List<String>(), "", "");
        }

        public void AddCosemClass(ViewCOSEMClass viewCosemClass, Guid userId)
        {
            CosemClassRowAffected++;
        }

        public void DeleteCosemClass(Int64 id, Guid userId)
        {
        }

        public void UpdateCosemClass(ViewCOSEMClass viewCosemClasstype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}