using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface IObisGroupRepository
    {
        List<ViewOBISGroup> GetObisGroupList(Guid userId);
        List<ViewOBISGroup> GetObisGroupList(String type, Guid userId);
        ViewOBISGroup GetObisGroup(Int64 id, Guid userId);
        SelectList GetObisGroups(String type, Guid userId, Int64 selected);
        void AddObisGroup(ViewOBISGroup viewObisGroup, Int64 deviceTypeId, Guid userId);
        void DeleteObisGroup(Int64 id, Guid userId);
        void UpdateObisGroup(ViewOBISGroup viewObisGrouptype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class ObisGroupRepository : IObisGroupRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewOBISGroup> GetObisGroupList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewOBISGroup> os = _db.ViewOBISGroup;
            return os.Where(t => (t.DataOwnerID == userId) || t.Standard).ToList();
        }

        public List<ViewOBISGroup> GetObisGroupList(String type, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewOBISGroup> os = _db.ViewOBISGroup;
            return os.Where(t => ((t.DataOwnerID == userId) || t.Standard) && (t.Type == type)).ToList();
        }

        public ViewOBISGroup GetObisGroup(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewOBISGroup> os = _db.ViewOBISGroup;
            ViewOBISGroup result = os.Single(t => (t.ID == id) && ((t.DataOwnerID == userId) || t.Standard));
            return result;
        }

        public SelectList GetObisGroups(String type, Guid userId, Int64 selected)
        {
            Trace.Assert(_db != null);
            IQueryable<ViewOBISGroup> v =
                _db.ViewOBISGroup.Where(t => ((t.DataOwnerID == userId) || (t.Standard)) && (t.Type == type));
            Trace.Assert(v != null);
            return new SelectList(v, "ID", "Value", selected);
        }

        public void AddObisGroup(ViewOBISGroup viewObisGroup, Int64 deviceTypeId, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewObisGroup != null);
            _db.AddOBISGroup(viewObisGroup.Type, viewObisGroup.Value, viewObisGroup.Description, viewObisGroup.Standard, viewObisGroup.Reserved, viewObisGroup.Unusable, viewObisGroup.Context, deviceTypeId,
                            userId);
        }

        public void DeleteObisGroup(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteOBISGroup(id, userId);
        }

        public void UpdateObisGroup(ViewOBISGroup viewObisGrouptype, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewObisGrouptype != null);
            _db.UpdateOBISGroup(viewObisGrouptype.ID, viewObisGrouptype.Type, viewObisGrouptype.Value, viewObisGrouptype.Description, viewObisGrouptype.Standard, viewObisGrouptype.Reserved, viewObisGrouptype.Unusable, viewObisGrouptype.Context,
                               userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            Trace.Assert(entities != null);
            _db = entities;
        }
    }

    public class TestObisGroupRepository : IObisGroupRepository
    {
        public int ObisGroupRowAffected;

        public List<ViewOBISGroup> GetObisGroupList(Guid userId)
        {
            return new List<ViewOBISGroup>();
        }

        public List<ViewOBISGroup> GetObisGroupList(String type, Guid userId)
        {
            return new List<ViewOBISGroup>();
        }

        public ViewOBISGroup GetObisGroup(Int64 id, Guid userId)
        {
            return new ViewOBISGroup();
        }

        public SelectList GetObisGroups(String type, Guid userId, Int64 selected)
        {
            return new SelectList(new List<String>(), "", "");
        }

        public void AddObisGroup(ViewOBISGroup viewObisGroup, Int64 deviceTypeId, Guid userId)
        {
            ObisGroupRowAffected++;
        }

        public void DeleteObisGroup(Int64 id, Guid userId)
        {
        }

        public void UpdateObisGroup(ViewOBISGroup viewObisGrouptype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}