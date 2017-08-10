using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface ICosemLogicalDeviceRepository
    {
        List<ViewCOSEMLogicalDevice> GetCosemLogicalDeviceList(Int64 deviceTypeId, Guid userId);
        ViewCOSEMLogicalDevice GetCosemLogicalDevice(Int64 id, Guid userId);
        String GetCosemLogicalDeviceName(Int64 deviceTypeId);
        void AddCosemLogicalDevice(ViewCOSEMLogicalDevice viewCosemLogicalDevice, Guid userId);
        void DeleteCosemLogicalDevice(Int64 id, Guid userId);
        void UpdateCosemLogicalDevice(ViewCOSEMLogicalDevice viewCosemLogicalDevicetype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class CosemLogicalDeviceRepository : ICosemLogicalDeviceRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewCOSEMLogicalDevice> GetCosemLogicalDeviceList(Int64 deviceTypeId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMLogicalDevice> os = _db.ViewCOSEMLogicalDevice;
            return
                os.Where(t => ((t.DataOwnerID == userId) || (t.Standard == true)) && (t.DeviceTypeID == deviceTypeId))
                  .ToList();
        }

        public ViewCOSEMLogicalDevice GetCosemLogicalDevice(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCOSEMLogicalDevice> os = _db.ViewCOSEMLogicalDevice;
            ViewCOSEMLogicalDevice result =
                os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || (t.Standard == true)));
            return result;
        }

        public void AddCosemLogicalDevice(ViewCOSEMLogicalDevice viewCosemLogicalDevice, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewCosemLogicalDevice != null);
            _db.AddCOSEMLogicalDevice(viewCosemLogicalDevice.DeviceTypeID, userId, viewCosemLogicalDevice.Name);
        }

        public void DeleteCosemLogicalDevice(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteCOSEMLogicalDevice(id, userId);
        }

        public void UpdateCosemLogicalDevice(ViewCOSEMLogicalDevice viewCosemLogicalDevicetype, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewCosemLogicalDevicetype != null);
            _db.UpdateCOSEMLogicalDevice(viewCosemLogicalDevicetype.ID, viewCosemLogicalDevicetype.DeviceTypeID, userId, viewCosemLogicalDevicetype.Name);
        }

        public String GetCosemLogicalDeviceName(Int64 deviceTypeId)
        {
            Trace.Assert(_db != null);
            ObjectResult<String> s = _db.GetLogicalDeviceName(deviceTypeId);
            return s.First();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestCosemLogicalDeviceRepository : ICosemLogicalDeviceRepository
    {
        public int CosemLogicalDeviceRowAffected;

        public List<ViewCOSEMLogicalDevice> GetCosemLogicalDeviceList(Int64 deviceTypeId, Guid userId)
        {
            return new List<ViewCOSEMLogicalDevice>();
        }

        public ViewCOSEMLogicalDevice GetCosemLogicalDevice(Int64 id, Guid userId)
        {
            return new ViewCOSEMLogicalDevice();
        }

        public String GetCosemLogicalDeviceName(Int64 deviceTypeId)
        {
            return "undefined";
        }

        public void AddCosemLogicalDevice(ViewCOSEMLogicalDevice viewCosemLogicalDevice, Guid userId)
        {
            CosemLogicalDeviceRowAffected++;
        }

        public void DeleteCosemLogicalDevice(Int64 id, Guid userId)
        {
        }

        public void UpdateCosemLogicalDevice(ViewCOSEMLogicalDevice viewCosemLogicalDevicetype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}