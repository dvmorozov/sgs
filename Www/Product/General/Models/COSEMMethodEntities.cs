using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface ICosemMethodRepository
    {
        List<ViewCOSEMMethod> GetCosemMethodList(Int64 cosemClassId, Guid userId);
        ViewCOSEMMethod GetCosemMethod(Int64 id, Guid userId);
        void AddCosemMethod(ViewCOSEMMethod viewCosemMethod, Guid userId);
        void DeleteCosemMethod(Int64 id, Guid userId);
        void UpdateCosemMethod(ViewCOSEMMethod viewCosemMethodtype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemMethodRepository : ICosemMethodRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMMethod> GetCosemMethodList(Int64 cosemClassId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMMethod> os = _db.ViewCOSEMMethod;
            return os.Where(t => (t.COSEMClassID == cosemClassId) && ((t.DataOwnerID == userId) || t.Standard)).ToList();
        }

        public ViewCOSEMMethod GetCosemMethod(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMMethod> os = _db.ViewCOSEMMethod;
            ViewCOSEMMethod result = os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || t.Standard));
            return result;
        }

        public void AddCosemMethod(ViewCOSEMMethod viewCosemMethod, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewCosemMethod != null);
            _db.AddCOSEMMethod(viewCosemMethod.COSEMClassID, viewCosemMethod.Name, viewCosemMethod.Mandatory, userId);
        }

        public void DeleteCosemMethod(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteCOSEMMethod(id, userId);
        }

        public void UpdateCosemMethod(ViewCOSEMMethod viewCosemMethodtype, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewCosemMethodtype != null);
            _db.UpdateCOSEMMethod(viewCosemMethodtype.ID, viewCosemMethodtype.COSEMClassID, viewCosemMethodtype.Name, viewCosemMethodtype.Mandatory, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemMethodRepository : ICosemMethodRepository
    {
        public int CosemMethodRowAffected;

        public List<ViewCOSEMMethod> GetCosemMethodList(Int64 cosemClassId, Guid userId)
        {
            return new List<ViewCOSEMMethod>();
        }

        public ViewCOSEMMethod GetCosemMethod(Int64 id, Guid userId)
        {
            return new ViewCOSEMMethod();
        }

        public void AddCosemMethod(ViewCOSEMMethod viewCosemMethod, Guid userId)
        {
            CosemMethodRowAffected++;
        }

        public void DeleteCosemMethod(Int64 id, Guid userId)
        {
        }

        public void UpdateCosemMethod(ViewCOSEMMethod viewCosemMethodtype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}