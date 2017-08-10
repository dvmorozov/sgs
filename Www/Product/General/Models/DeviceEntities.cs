using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface IDeviceRepository
    {
        List<ViewDevice> GetDeviceList(Guid userId);
        ViewDevice GetDevice(Int64 id, Guid userId);
        long? AddDevice(ViewDevice viewdevice, Guid userId);
        long? AddDeviceWithAddress(ViewDevice d, ViewAddress a, Guid userId);
        List<String> ExportXmlTemplate(Int64 deviceId, Guid dataOwnerId);
        void DeleteDevice(Int64 id, Guid userId);
        void UpdateDevice(ViewDevice viewdevicetype, Guid userId);
        void UpdateDeviceAddress(ViewDevice v, Guid userId);
        void UpdateDeviceOwnerId(ViewDevice v, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceRepository : IDeviceRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewDevice> GetDeviceList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewDevice> os = _db.ViewDevice;
            return os.Where(t => t.DataOwnerID == userId).ToList();
        }

        public ViewDevice GetDevice(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewDevice> os = _db.ViewDevice;
            ViewDevice result = os.Single(t => (t.ID == id) && (t.DataOwnerID == userId));
            return result;
        }

        public long? AddDevice(ViewDevice v, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectResult<long?> result =
                _db.AddDevice(v.Name, v.InternalAddress, v.AddressType, v.Port,
                             v.GroupID, v.TypeID, v.OwnerID, v.IP1, v.IP2, v.IP3, v.IP4, v.SecondaryPort,
                             v.SecondaryIP1, v.SecondaryIP2, v.SecondaryIP3, v.SecondaryIP4, userId, null, false);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? deviceId = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return deviceId;
        }

        public long? AddDeviceWithAddress(ViewDevice d, ViewAddress a, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectResult<long?> result =
                _db.AddDeviceWithAddress(d.Name, d.InternalAddress, d.AddressType, d.Port,
                                        d.GroupID, d.TypeID, d.OwnerID,
                                        d.IP1, d.IP2, d.IP3, d.IP4, d.SecondaryPort,
                                        d.SecondaryIP1, d.SecondaryIP2, d.SecondaryIP3, d.SecondaryIP4,
                                        a.Apartament, a.Building, a.Street, a.City, a.State, a.Country, a.ZipCode,
                                        userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? deviceId = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return deviceId;
        }

        public void DeleteDevice(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteDevice(id, userId);
        }

        public void UpdateDevice(ViewDevice viewdevice, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateDevice(viewdevice.ID, viewdevice.Name, viewdevice.InternalAddress, viewdevice.AddressType,
                            viewdevice.Port,
                            viewdevice.GroupID, viewdevice.TypeID, viewdevice.OwnerID,
                            viewdevice.IP1, viewdevice.IP2, viewdevice.IP3, viewdevice.IP4, viewdevice.SecondaryPort,
                            viewdevice.SecondaryIP1, viewdevice.SecondaryIP2, viewdevice.SecondaryIP3,
                            viewdevice.SecondaryIP4, userId);
        }

        public void UpdateDeviceAddress(ViewDevice v, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateDeviceAddress(v.ID, v.LocationAddressID, userId);
        }

        public void UpdateDeviceOwnerId(ViewDevice v, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateDeviceOwnerID(v.ID, v.OwnerID, userId);
        }

        public List<String> ExportXmlTemplate(Int64 deviceId, Guid dataOwnerId)
        {
            Trace.Assert(_db != null);
            ObjectResult<String> os = _db.ExportXMLTemplate(deviceId, dataOwnerId);
            return os.ToList();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceRepository : IDeviceRepository
    {
        public int DeviceRowAffected;
        public String FirstIpAddress;
        private Boolean _firstIpAddressAssigned;
        public String FirstIpPort;
        private Boolean _firstIpPortAssigned;
        public String FirstSecIpAddress;
        private Boolean _firstSecIpAddressAssigned;
        public String FirstSecIpPort;
        private Boolean _firstSecIpPortAssigned;
        public String LastIpAddress;
        public String LastIpPort;
        public String LastSecIpAddress;
        public String LastSecIpPort;

        public TestDeviceRepository()
        {
            DeviceRowAffected = 0;
        }

        public List<ViewDevice> GetDeviceList(Guid userId)
        {
            return new List<ViewDevice>();
        }

        public ViewDevice GetDevice(Int64 id, Guid userId)
        {
            return new ViewDevice();
        }

        public long? AddDevice(ViewDevice viewdevice, Guid userId)
        {
            DeviceRowAffected++;
            if (!_firstIpPortAssigned)
            {
                FirstIpPort = viewdevice.Port;
                _firstIpPortAssigned = true;
            }
            if (!_firstIpAddressAssigned)
            {
                FirstIpAddress = viewdevice.IP1 + "." + viewdevice.IP2 + "." + viewdevice.IP3 + "." + viewdevice.IP4;
                _firstIpAddressAssigned = true;
            }
            if (!_firstSecIpAddressAssigned && viewdevice.SecondaryIP1 != null)
            {
                FirstSecIpAddress = viewdevice.SecondaryIP1 + "." + viewdevice.SecondaryIP2 + "." +
                                    viewdevice.SecondaryIP3 + "." + viewdevice.SecondaryIP4;
                _firstSecIpAddressAssigned = true;
            }
            if (!_firstSecIpPortAssigned)
            {
                FirstSecIpPort = viewdevice.SecondaryPort;
                _firstSecIpPortAssigned = true;
            }
            LastIpPort = viewdevice.Port;
            LastIpAddress = viewdevice.IP1 + "." + viewdevice.IP2 + "." + viewdevice.IP3 + "." + viewdevice.IP4;
            if (viewdevice.SecondaryIP1 != null)
            {
                LastSecIpAddress = viewdevice.SecondaryIP1 + "." + viewdevice.SecondaryIP2 + "." +
                                   viewdevice.SecondaryIP3 + "." + viewdevice.SecondaryIP4;
            }
            LastSecIpPort = viewdevice.SecondaryPort;
            return DeviceRowAffected;
        }

        public long? AddDeviceWithAddress(ViewDevice d, ViewAddress a, Guid userId)
        {
            if (!_firstIpPortAssigned)
            {
                FirstIpPort = d.Port;
                _firstIpPortAssigned = true;
            }
            if (!_firstIpAddressAssigned)
            {
                FirstIpAddress = d.IP1 + "." + d.IP2 + "." + d.IP3 + "." + d.IP4;
                _firstIpAddressAssigned = true;
            }
            if (!_firstSecIpAddressAssigned && d.SecondaryIP1 != null)
            {
                FirstSecIpAddress = d.SecondaryIP1 + "." + d.SecondaryIP2 + "." + d.SecondaryIP3 + "." + d.SecondaryIP4;
                _firstSecIpAddressAssigned = true;
            }
            if (!_firstSecIpPortAssigned)
            {
                FirstSecIpPort = d.SecondaryPort;
                _firstSecIpPortAssigned = true;
            }
            LastIpPort = d.Port;
            LastIpAddress = d.IP1 + "." + d.IP2 + "." + d.IP3 + "." + d.IP4;
            if (d.SecondaryIP1 != null)
            {
                LastSecIpAddress = d.SecondaryIP1 + "." + d.SecondaryIP2 + "." + d.SecondaryIP3 + "." + d.SecondaryIP4;
            }
            LastSecIpPort = d.SecondaryPort;

            DeviceRowAffected++;
            return DeviceRowAffected;
        }

        public void DeleteDevice(Int64 id, Guid userId)
        {
        }

        public void UpdateDevice(ViewDevice viewdevicetype, Guid userId)
        {
        }

        public void UpdateDeviceAddress(ViewDevice v, Guid userId)
        {
        }

        public void UpdateDeviceOwnerId(ViewDevice v, Guid userId)
        {
        }

        public List<String> ExportXmlTemplate(Int64 deviceId, Guid dataOwnerId)
        {
            return new List<String>();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }

        public SelectList GetDevices(Guid userId)
        {
            return new SelectList(new List<String>(), "", "");
        }
    }
}