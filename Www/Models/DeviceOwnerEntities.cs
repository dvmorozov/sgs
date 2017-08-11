using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface IDeviceOwnerRepository
    {
        long? AddDeviceOwner(ViewDeviceOwner v, Guid userId);
        void DeleteDeviceOwner(Int64 id, Guid userId);
        void UpdateDeviceOwner(ViewDeviceOwner v, Guid userId);
        List<ViewDeviceOwner> GetDeviceOwnerList(Guid userId);
        SelectList GetDeviceOwners(Guid userId, Int64 selected);
        SelectList GetDeviceOwners(Guid userId);
        ViewDeviceOwner GetDeviceOwner(Int64 id, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceOwnerRepository : IDeviceOwnerRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewDeviceOwner> GetDeviceOwnerList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewDeviceOwner> os = _db.ViewDeviceOwner;
            return os.Where(t => t.DataOwnerID == userId).ToList();
        }

        public SelectList GetDeviceOwners(Guid userId, Int64 selected)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewDeviceOwner> os = _db.ViewDeviceOwner;
            return new SelectList(os.Where(t => t.DataOwnerID == userId), "ID", "FirstName", selected);
        }

        public ViewDeviceOwner GetDeviceOwner(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            return _db.ViewDeviceOwner.Single(t => (t.ID == id) && (t.DataOwnerID == userId));
        }

        public long? AddDeviceOwner(ViewDeviceOwner v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddDeviceOwner(
                v.FirstName, v.LastName, v.Company, v.Apartament, v.Building, v.Street, v.City,
                v.State, v.Country, v.ZipCode, v.EMail, v.Phone, v.Cell, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public void DeleteDeviceOwner(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteDeviceOwner(id, userId);
        }

        public void UpdateDeviceOwner(ViewDeviceOwner v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            _db.UpdateDeviceOwner(
                v.ID, v.FirstName, v.LastName, v.Company, v.Apartament, v.Building, v.Street, v.City,
                v.State, v.Country, v.ZipCode, v.EMail, v.Phone, v.Cell, userId);
        }

        public SelectList GetDeviceOwners(Guid userId)
        {
            return GetDeviceOwners(userId, 0);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceOwnerRepository : IDeviceOwnerRepository
    {
        public List<ViewDeviceOwner> GetDeviceOwnerList(Guid userId)
        {
            return new List<ViewDeviceOwner>();
        }

        public SelectList GetDeviceOwners(Guid userId, Int64 selected)
        {
            return new SelectList("", "");
        }

        public SelectList GetDeviceOwners(Guid userId)
        {
            return GetDeviceOwners(userId, 0);
        }

        public ViewDeviceOwner GetDeviceOwner(Int64 id, Guid userId)
        {
            return new ViewDeviceOwner();
        }

        public long? AddDeviceOwner(ViewDeviceOwner v, Guid userId)
        {
            return null;
        }

        public void DeleteDeviceOwner(Int64 id, Guid userId)
        {
        }

        public void UpdateDeviceOwner(ViewDeviceOwner v, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}