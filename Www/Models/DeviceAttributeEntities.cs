using System;
using System.Diagnostics;

namespace web.Models
{
    public interface IDeviceAttributeRepository
    {
        void AddAllAttrToCollectList(Int64 logicalDeviceId, Int64 objectId, Guid userId);
        void DeleteAllAttrFromCollectList(Int64 logicalDeviceId, Int64 objectId, Guid userId);
        void AddAttrToCollectList(Int64 deviceId, Int64 cOsemAttributeId, Int64 cOsemObjectId, Guid userId);
        void DeleteAttrFromCollectList(Int64 cOsemAttributeId, Int64 cOsemObjectId, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceAttributeRepository : IDeviceAttributeRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public void AddAllAttrToCollectList(Int64 logicalDeviceId, Int64 objectId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddAllAttrToCollectList(logicalDeviceId, objectId, userId);
        }

        public void DeleteAllAttrFromCollectList(Int64 logicalDeviceId, Int64 objectId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteAllAttrFromCollectList(logicalDeviceId, objectId, userId);
        }

        public void AddAttrToCollectList(Int64 deviceId, Int64 cOsemAttributeId, Int64 cOsemObjectId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddAttrToCollectList(deviceId, cOsemAttributeId, cOsemObjectId, userId);
        }

        public void DeleteAttrFromCollectList(Int64 cOsemAttributeId, Int64 cOsemObjectId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteAttrFromCollectList(cOsemAttributeId, cOsemObjectId, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceAttributeRepository : IDeviceAttributeRepository
    {
        public void AddAllAttrToCollectList(Int64 logicalDeviceId, Int64 objectId, Guid userId)
        {
        }

        public void DeleteAllAttrFromCollectList(Int64 logicalDeviceId, Int64 objectId, Guid userId)
        {
        }

        public void AddAttrToCollectList(Int64 deviceId, Int64 cOsemAttributeId, Int64 cOsemObjectId, Guid userId)
        {
        }

        public void DeleteAttrFromCollectList(Int64 cOsemAttributeId, Int64 cOsemObjectId, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}