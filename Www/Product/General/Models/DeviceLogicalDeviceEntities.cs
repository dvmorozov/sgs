using System;
using System.Diagnostics;

namespace web.Models
{
    public interface IDeviceLogicalDeviceRepository
    {
        void AddAllAttrToCollectList(Int64 logicalDeviceId, Int64 deviceId /*physical device identifier*/, Guid userId);

        void DeleteAllAttrFromCollectList(Int64 logicalDeviceId, Int64 deviceId /*physical device identifier*/,
                                          Guid userId);

        void AddAllDeviceAttrToCollectList(Int64 physicalDeviceId, Guid userId);
        void DeleteAllDeviceAttrFromCollectList(Int64 logicalDeviceId, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceLogicalDeviceRepository : IDeviceLogicalDeviceRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public void AddAllAttrToCollectList(Int64 logicalDeviceId, Int64 deviceId /*physical device identifier*/,
                                            Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddAllAttrToCollectList(deviceId, logicalDeviceId, userId);
        }

        public void DeleteAllAttrFromCollectList(Int64 logicalDeviceId, Int64 deviceId /*physical device identifier*/,
                                                 Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteAllAttrFromCollectList(deviceId, logicalDeviceId, userId);
        }

        public void AddAllDeviceAttrToCollectList(Int64 physicalDeviceId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddAllDeviceAttrToCollectList(physicalDeviceId, userId);
        }

        public void DeleteAllDeviceAttrFromCollectList(Int64 logicalDeviceId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteAllDeviceAttrFromCollectList(logicalDeviceId, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceLogicalDeviceRepository : IDeviceLogicalDeviceRepository
    {
        public void AddAllAttrToCollectList(Int64 logicalDeviceId, Int64 deviceId /*physical device identifier*/,
                                            Guid userId)
        {
        }

        public void DeleteAllAttrFromCollectList(Int64 logicalDeviceId, Int64 deviceId /*physical device identifier*/,
                                                 Guid userId)
        {
        }

        public void AddAllDeviceAttrToCollectList(Int64 physicalDeviceId, Guid userId)
        {
        }

        public void DeleteAllDeviceAttrFromCollectList(Int64 logicalDeviceId, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}