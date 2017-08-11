using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface ICosemAttributeDataTypeRepository
    {
        List<ViewCOSEMAttributeDataType> GetCosemAttributeDataTypeList(Int64 cosemObjectId, Guid userId);
        ViewCOSEMAttributeDataType GetCosemAttributeDataType(Int64 cosemObjectId, Int64 attributeId, Guid userId);
        void UpdateAttrIdentifier(ViewCOSEMAttributeDataType v, Guid userId);

        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemAttributeDataTypeRepository : ICosemAttributeDataTypeRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMAttributeDataType> GetCosemAttributeDataTypeList(Int64 cosemObjectId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMAttributeDataType> os = _db.ViewCOSEMAttributeDataType;
            return os.Where(t => (t.DataOwnerID == userId || t.Standard) && (t.COSEMObjectID == cosemObjectId)).ToList();
        }

        public ViewCOSEMAttributeDataType GetCosemAttributeDataType(Int64 cosemObjectId, Int64 attributeId, Guid userId)
        {
            Trace.Assert(_db != null);
            return
                _db.ViewCOSEMAttributeDataType.Single(
                    t =>
                    (t.COSEMObjectID == cosemObjectId) && (t.AttributeID == attributeId) &&
                    (t.DataOwnerID == userId || t.Standard));
        }

        public void UpdateAttrIdentifier(ViewCOSEMAttributeDataType v, Guid userId)
        {
            Trace.Assert(v != null);
            _db.UpdateAttrIdentifier(v.Identifier, v.AttributeID, v.COSEMObjectID, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemAttributeDataTypeRepository : ICosemAttributeDataTypeRepository
    {
        public List<ViewCOSEMAttributeDataType> GetCosemAttributeDataTypeList(Int64 cosemObjectId, Guid userId)
        {
            return new List<ViewCOSEMAttributeDataType>();
        }

        public ViewCOSEMAttributeDataType GetCosemAttributeDataType(Int64 cosemObjectId, Int64 attributeId, Guid userId)
        {
            return new ViewCOSEMAttributeDataType();
        }

        public void UpdateAttrIdentifier(ViewCOSEMAttributeDataType v, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}