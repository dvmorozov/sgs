using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface IDeviceTypeAndOwnerRepository
    {
        List<ViewDeviceTypeAndOwner> GetDeviceTypeAndOwnerList(Int64 groupId, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceTypeAndOwnerRepository : IDeviceTypeAndOwnerRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewDeviceTypeAndOwner> GetDeviceTypeAndOwnerList(Int64 groupId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewDeviceTypeAndOwner> os = _db.ViewDeviceTypeAndOwner;
            return os.Where(t => (t.DataOwnerID == userId) && (t.GroupID == groupId)).ToList();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceTypeAndOwnerRepository : IDeviceTypeAndOwnerRepository
    {
        public List<ViewDeviceTypeAndOwner> GetDeviceTypeAndOwnerList(Int64 groupId, Guid userId)
        {
            return new List<ViewDeviceTypeAndOwner>();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}