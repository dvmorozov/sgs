using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface ICosemDataTypeRepository
    {
        List<ViewCOSEMDataType> GetCosemDataTypeList(Guid userId);
        ViewCOSEMDataType GetCosemDataType(Int64 id, Guid userId);
        SelectList GetCosemDataTypes(Guid userId, Int64 selected);
        void AddCosemDataType(ViewCOSEMDataType viewCosemDataType, Guid userId);
        void DeleteCosemDataType(Int64 id, Guid userId);
        void UpdateCosemDataType(ViewCOSEMDataType viewCosemDataTypetype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemDataTypeRepository : ICosemDataTypeRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMDataType> GetCosemDataTypeList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMDataType> os = _db.ViewCOSEMDataType;
            return os.Where(t => (t.DataOwnerID == userId) || t.Standard).ToList();
        }

        public ViewCOSEMDataType GetCosemDataType(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMDataType> os = _db.ViewCOSEMDataType;
            ViewCOSEMDataType result = os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || t.Standard));
            return result;
        }

        public SelectList GetCosemDataTypes(Guid userId, Int64 selected)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMDataType> os = _db.ViewCOSEMDataType;
            return new SelectList(os.Where(t => (t.DataOwnerID == userId) || t.Standard), "ID", "Name", selected);
        }

        public void AddCosemDataType(ViewCOSEMDataType viewCosemDataType, Guid userId)
        {
            Trace.Assert(_db != null);

            _db.AddCOSEMDataType(
                viewCosemDataType.Name, viewCosemDataType.AncestorTypeID, viewCosemDataType.ItemBitSize,
                viewCosemDataType.ItemCount,
                userId, viewCosemDataType.Standard);
        }

        public void DeleteCosemDataType(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteCOSEMDataType(id, userId);
        }

        public void UpdateCosemDataType(ViewCOSEMDataType viewCosemDataTypetype, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateCOSEMDataType(
                viewCosemDataTypetype.ID, viewCosemDataTypetype.Name, viewCosemDataTypetype.AncestorTypeID,
                viewCosemDataTypetype.ItemBitSize,
                viewCosemDataTypetype.ItemCount, userId, viewCosemDataTypetype.Standard);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemDataTypeRepository : ICosemDataTypeRepository
    {
        public int CosemDataTypeRowAffected;

        public List<ViewCOSEMDataType> GetCosemDataTypeList(Guid userId)
        {
            return new List<ViewCOSEMDataType>();
        }

        public ViewCOSEMDataType GetCosemDataType(Int64 id, Guid userId)
        {
            return new ViewCOSEMDataType();
        }

        public SelectList GetCosemDataTypes(Guid userId, Int64 selected)
        {
            return new SelectList(new List<String>(), "", "");
        }

        public void AddCosemDataType(ViewCOSEMDataType viewCosemDataType, Guid userId)
        {
            CosemDataTypeRowAffected++;
        }

        public void DeleteCosemDataType(Int64 id, Guid userId)
        {
        }

        public void UpdateCosemDataType(ViewCOSEMDataType viewCosemDataTypetype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}