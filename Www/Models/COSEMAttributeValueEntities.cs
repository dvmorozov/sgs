using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface ICosemAttributeValueRepository
    {
        List<ViewCOSEMAttributeValue> GetCosemAttributeValueList(Int64 physicalDeviceId, Guid userId);

        List<ViewCOSEMAttributeValue> GetCosemAttributeValueList(Int64 physicalDeviceId, Int64 cosemObjectId,
                                                                 Int64 cosemClassId, Guid userId);

        ViewCOSEMAttributeValue GetCosemAttributeValue(Int64 attributeId, Guid userId);
        void UpdateAttrIdentifier(ViewCOSEMAttributeValue v, Guid userId);

        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemAttributeValueRepository : ICosemAttributeValueRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMAttributeValue> GetCosemAttributeValueList(Int64 physicalDeviceId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMAttributeValue> os = _db.ViewCOSEMAttributeValue;
            return os.Where(t =>
                            ((t.DeviceID == physicalDeviceId) && (t.DataOwnerID == userId))
                ).ToList();
        }

        public List<ViewCOSEMAttributeValue> GetCosemAttributeValueList(Int64 physicalDeviceId, Int64 cosemObjectId,
                                                                        Int64 cosemClassId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMAttributeValue> os = _db.ViewCOSEMAttributeValue;
            return os.Where(t => (t.COSEMClassID == cosemClassId) && (t.COSEMObjectID == cosemObjectId) &&
                                 ((t.DeviceID == physicalDeviceId) && (t.DataOwnerID == userId) ||
                                  ((t.DataOwnerID == userId) || t.Standard) && (t.ValueIdentifier == null))
                ).ToList();
        }

        public ViewCOSEMAttributeValue GetCosemAttributeValue(Int64 attributeId, Guid userId)
        {
            Trace.Assert(_db != null);
            return
                _db.ViewCOSEMAttributeValue.Single(
                    t => (t.AttributeID == attributeId) && ((t.DataOwnerID == userId) || t.Standard));
        }

        public void UpdateAttrIdentifier(ViewCOSEMAttributeValue v, Guid userId)
        {
            Trace.Assert(v != null);
            _db.UpdateAttrIdentifier(v.Identifier, v.AttributeID, v.COSEMObjectID, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemAttributeValueRepository : ICosemAttributeValueRepository
    {
        public List<ViewCOSEMAttributeValue> GetCosemAttributeValueList(Int64 physicalDeviceId, Int64 cosemObjectId,
                                                                        Int64 cosemClassId, Guid userId)
        {
            return new List<ViewCOSEMAttributeValue>();
        }

        public List<ViewCOSEMAttributeValue> GetCosemAttributeValueList(Int64 physicalDeviceId, Guid userId)
        {
            return new List<ViewCOSEMAttributeValue>();
        }

        public ViewCOSEMAttributeValue GetCosemAttributeValue(Int64 attributeId, Guid userId)
        {
            return new ViewCOSEMAttributeValue();
        }

        public void UpdateAttrIdentifier(ViewCOSEMAttributeValue v, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}