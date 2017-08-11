using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface IObisSetRepository
    {
        List<ViewOBISSet> GetObisSetList(Guid userId);
        ViewOBISSet GetObisSet(Int64 id, Guid userId);
        void AddObisSet(ViewOBISSet viewObisSet, Guid userId);
        void DeleteObisSet(Int64 id, Guid userId);
        void UpdateObisSet(ViewOBISSet viewObisSettype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class ObisSetRepository : IObisSetRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewOBISSet> GetObisSetList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewOBISSet> os = _db.ViewOBISSet;
            return os.Where(t => t.DataOwnerID == userId).ToList();
        }

        public ViewOBISSet GetObisSet(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewOBISSet> os = _db.ViewOBISSet;
            ViewOBISSet result = os.Single(t => (t.ID == id) && (t.DataOwnerID == userId));
            return result;
        }

        public void AddObisSet(ViewOBISSet viewObisSet, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewObisSet != null);
            _db.AddOBISSet(viewObisSet.AID, viewObisSet.BID, viewObisSet.CID, viewObisSet.DID, viewObisSet.EID, viewObisSet.FID, viewObisSet.DeviceTypeID, userId, viewObisSet.Standard);
        }

        public void DeleteObisSet(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteOBISSet(id, userId);
        }

        public void UpdateObisSet(ViewOBISSet viewObisSettype, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(viewObisSettype != null);
            _db.UpdateOBISSet(viewObisSettype.ID, viewObisSettype.AID, viewObisSettype.BID, viewObisSettype.CID, viewObisSettype.DID, viewObisSettype.EID, viewObisSettype.FID, viewObisSettype.DeviceTypeID, userId, viewObisSettype.Standard);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            Trace.Assert(entities != null);
            _db = entities;
        }
    }

    public class TestObisSetRepository : IObisSetRepository
    {
        public int ObisSetRowAffected;

        public List<ViewOBISSet> GetObisSetList(Guid userId)
        {
            return new List<ViewOBISSet>();
        }

        public ViewOBISSet GetObisSet(Int64 id, Guid userId)
        {
            return new ViewOBISSet();
        }

        public void AddObisSet(ViewOBISSet viewObisSet, Guid userId)
        {
            ObisSetRowAffected++;
        }

        public void DeleteObisSet(Int64 id, Guid userId)
        {
        }

        public void UpdateObisSet(ViewOBISSet viewObisSettype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }

        public SelectList GetObisSets(Guid userId)
        {
            return new SelectList(new List<String>(), "", "");
        }
    }
}