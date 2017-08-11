using System;
using System.Collections.Generic;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface IDeviceTypeRepository
    {
        List<ViewDeviceType> GetDeviceTypeList(Guid userId, string description);
        ViewDeviceType GetDeviceType(Int64 id, Guid userId);
        SelectList GetDeviceTypes(Guid userId, Int64 selected, string description);
        SelectList GetDeviceTypes(Guid userId, string description);
        void CreateCustomDeviceType(Int64 id, Guid userId);
        void AddDeviceType(ViewDeviceType v, Guid userId);
        void DeleteDeviceType(Int64 id, Guid userId);
        void UpdateDeviceType(ViewDeviceType v, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class DeviceTypeRepository : IDeviceTypeRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewDeviceType> GetDeviceTypeList(Guid userId, string description)
        {
            var os = _db.ViewDeviceType;
            return os.Where(t => ((t.DataOwnerID == userId) || t.Standard) &&
                                 ((description == null) || (description.ToLower() == t.Description.ToLower()))).ToList();
        }

        public ViewDeviceType GetDeviceType(Int64 id, Guid userId)
        {
            var os = _db.ViewDeviceType;
            var result = os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || t.Standard));
            return result;
        }

        public void AddDeviceType(ViewDeviceType v, Guid userId)
        {
            _db.AddDeviceType(v.Description, userId, v.Standard);
        }

        public void DeleteDeviceType(Int64 id, Guid userId)
        {
            _db.DeleteDeviceType(id, userId);
        }

        public void UpdateDeviceType(ViewDeviceType v, Guid userId)
        {
            _db.UpdateDeviceType(v.ID, v.Description, userId, v.Standard);
        }

        public SelectList GetDeviceTypes(Guid userId, Int64 selected, string description)
        {
            var os = _db.ViewDeviceType;
            return new SelectList(os.Where(t => ((t.DataOwnerID == userId) || t.Standard) &&
                                                ((description == null) ||
                                                 (description.ToLower() == t.Description.ToLower()))), "ID",
                                  "Description", selected);
        }

        public SelectList GetDeviceTypes(Guid userId, string description)
        {
            return GetDeviceTypes(userId, 0, description);
        }

        public void CreateCustomDeviceType(Int64 id, Guid userId)
        {
            _db.CreateCustomDeviceType(id, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestDeviceTypeRepository : IDeviceTypeRepository
    {
        public List<ViewDeviceType> GetDeviceTypeList(Guid userId, string description)
        {
            return new List<ViewDeviceType>();
        }

        public ViewDeviceType GetDeviceType(Int64 id, Guid userId)
        {
            return new ViewDeviceType();
        }

        public SelectList GetDeviceTypes(Guid userId, Int64 selected, string description)
        {
            return new SelectList(new List<String>(), "", "");
        }

        public SelectList GetDeviceTypes(Guid userId, string description)
        {
            return GetDeviceTypes(userId, 0, description);
        }

        public void AddDeviceType(ViewDeviceType v, Guid userId)
        {
        }

        public void DeleteDeviceType(Int64 id, Guid userId)
        {
        }

        public void UpdateDeviceType(ViewDeviceType v, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }

        public void CreateCustomDeviceType(Int64 id, Guid userId)
        {
        }
    }
}