using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface ICosemComplexTypeFieldRepository
    {
        List<ViewCOSEMComplexTypeField> GetCosemComplexTypeFieldList(Int64 typeId, Guid userId);
        ViewCOSEMComplexTypeField GetCosemComplexTypeField(Int64 id, Guid userId);
        SelectList GetCosemComplexTypeFields(Guid userId, Int64 selected);
        void AddCosemComplexTypeField(ViewCOSEMComplexTypeField viewCosemComplexTypeField, Guid userId);
        void DeleteCosemComplexTypeField(Int64 id, Guid userId);
        void UpdateCosemComplexTypeField(ViewCOSEMComplexTypeField viewCosemComplexTypeFieldtype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemComplexTypeFieldRepository : ICosemComplexTypeFieldRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMComplexTypeField> GetCosemComplexTypeFieldList(Int64 typeId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMComplexTypeField> os = _db.ViewCOSEMComplexTypeField;
            return os.Where(t => ((t.DataOwnerID == userId) || t.Standard) && (t.AggregateTypeID == typeId)).ToList();
        }

        public SelectList GetCosemComplexTypeFields(Guid userId, Int64 selected)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMComplexTypeField> os = _db.ViewCOSEMComplexTypeField;
            return new SelectList(os.Where(t => (t.DataOwnerID == userId) || t.Standard), "ID", "ClassName", selected);
        }

        public ViewCOSEMComplexTypeField GetCosemComplexTypeField(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMComplexTypeField> os = _db.ViewCOSEMComplexTypeField;
            ViewCOSEMComplexTypeField result = os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || t.Standard));
            return result;
        }

        public void AddCosemComplexTypeField(ViewCOSEMComplexTypeField viewCosemComplexTypeField, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewCosemComplexTypeField != null);
            _db.AddCOSEMComplexTypeField(viewCosemComplexTypeField.Name, viewCosemComplexTypeField.AggregateTypeID, viewCosemComplexTypeField.TypeID, userId, viewCosemComplexTypeField.Standard);
        }

        public void DeleteCosemComplexTypeField(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteCOSEMComplexTypeField(id, userId);
        }

        public void UpdateCosemComplexTypeField(ViewCOSEMComplexTypeField viewCosemComplexTypeFieldtype, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewCosemComplexTypeFieldtype != null);
            _db.UpdateCOSEMComplexTypeField(viewCosemComplexTypeFieldtype.ID, viewCosemComplexTypeFieldtype.Name, viewCosemComplexTypeFieldtype.AggregateTypeID, viewCosemComplexTypeFieldtype.TypeID, userId, viewCosemComplexTypeFieldtype.Standard);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemComplexTypeFieldRepository : ICosemComplexTypeFieldRepository
    {
        public int CosemComplexTypeFieldRowAffected;

        public List<ViewCOSEMComplexTypeField> GetCosemComplexTypeFieldList(Int64 typeId, Guid userId)
        {
            return new List<ViewCOSEMComplexTypeField>();
        }

        public ViewCOSEMComplexTypeField GetCosemComplexTypeField(Int64 id, Guid userId)
        {
            return new ViewCOSEMComplexTypeField();
        }

        public SelectList GetCosemComplexTypeFields(Guid userId, Int64 selected)
        {
            return new SelectList(new List<String>(), "", "");
        }

        public void AddCosemComplexTypeField(ViewCOSEMComplexTypeField viewCosemComplexTypeField, Guid userId)
        {
            CosemComplexTypeFieldRowAffected++;
        }

        public void DeleteCosemComplexTypeField(Int64 id, Guid userId)
        {
        }

        public void UpdateCosemComplexTypeField(ViewCOSEMComplexTypeField viewCosemComplexTypeFieldtype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}