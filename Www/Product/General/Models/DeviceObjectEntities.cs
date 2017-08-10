using System;
using System.Diagnostics;

namespace web.Models
{
    public interface IDeviceObjectRepository
    {
        void AddAllAttrToCollectList(Int64 objectId, Int64 deviceId /*physical device identifier*/, Guid userId);
        void DeleteAllAttrFromCollectList(Int64 objectId, Int64 deviceId /*physical device identifier*/, Guid userId);

        void AddAllObjectAttrToCollectList(Int64 deviceId /*physical device identifier*/, Int64 logicalDeviceId,
                                           Guid userId);

        void DeleteAllObjectAttrFromCollectList(Int64 deviceId /*physical device identifier*/, Int64 logicalDeviceId,
                                                Guid userId);

        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceObjectRepository : IDeviceObjectRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public void AddAllAttrToCollectList(Int64 objectId, Int64 deviceId /*physical device identifier*/, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddAllAttrToCollectList(deviceId, objectId, userId);
        }

        public void DeleteAllAttrFromCollectList(Int64 objectId, Int64 deviceId /*physical device identifier*/,
                                                 Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteAllAttrFromCollectList(deviceId, objectId, userId);
        }

        public void AddAllObjectAttrToCollectList(Int64 deviceId /*physical device identifier*/, Int64 logicalDeviceId,
                                                  Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddAllObjectAttrToCollectList(deviceId, logicalDeviceId, userId);
        }

        public void DeleteAllObjectAttrFromCollectList(Int64 deviceId /*physical device identifier*/,
                                                       Int64 logicalDeviceId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteAllObjectAttrFromCollectList(deviceId, logicalDeviceId, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceObjectRepository : IDeviceObjectRepository
    {
        public void AddAllAttrToCollectList(Int64 objectId, Int64 deviceId /*physical device identifier*/, Guid userId)
        {
        }

        public void DeleteAllAttrFromCollectList(Int64 objectId, Int64 deviceId /*physical device identifier*/,
                                                 Guid userId)
        {
        }

        public void AddAllObjectAttrToCollectList(Int64 deviceId /*physical device identifier*/, Int64 logicalDeviceId,
                                                  Guid userId)
        {
        }

        public void DeleteAllObjectAttrFromCollectList(Int64 deviceId /*physical device identifier*/,
                                                       Int64 logicalDeviceId, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}