using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;
using System.Web.Mvc;

namespace web.Models
{
    public interface IGroupRepository
    {
        long? AddGroup(ViewGroup viewgroup, Guid userId);
        List<ViewGroup> GetGroupList(Guid userId);
        SelectList GetGroups(Guid userId, Int64 selected);
        SelectList GetGroups(Guid userId);
        ViewGroup GetGroup(Int64 id, Guid userId);
        void DeleteGroup(Int64 id, Guid userId);
        void UpdateGroupShedule(ViewGroup viewgroup, Guid userId);
        void UpdateGroup(ViewGroup viewgroup, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class GroupRepository : IGroupRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public long? AddGroup(ViewGroup viewgroup, Guid userId)
        {
            Trace.Assert(_db != null);
            /*
            ObjectResult<Int64> result = db.ExecuteFunction<Int64>("AddGroup", new ObjectParameter[] {
                    //new ObjectParameter("GroupID", viewgroup.ID),
                    new ObjectParameter("Name", viewgroup.Name),
                    new ObjectParameter("UserID", viewgroup.UserID),
                    new ObjectParameter("DeviceNamePrefix", viewgroup.DeviceNamePrefix),
                    new ObjectParameter("StartingIP1", viewgroup.StartingIP1),
                    new ObjectParameter("StartingIP2", viewgroup.StartingIP2),
                    new ObjectParameter("StartingIP3", viewgroup.StartingIP3),
                    new ObjectParameter("StartingIP4", viewgroup.StartingIP4),
                    new ObjectParameter("EndingIP1", viewgroup.EndingIP1),
                    new ObjectParameter("EndingIP2", viewgroup.EndingIP2),
                    new ObjectParameter("EndingIP3", viewgroup.EndingIP3),
                    new ObjectParameter("EndingIP4", viewgroup.EndingIP4),
                    new ObjectParameter("SecondaryStartingIP1", viewgroup.SecondaryStartingIP1),
                    new ObjectParameter("SecondaryStartingIP2", viewgroup.SecondaryStartingIP2),
                    new ObjectParameter("SecondaryStartingIP3", viewgroup.SecondaryStartingIP3),
                    new ObjectParameter("SecondaryStartingIP4", viewgroup.SecondaryStartingIP4),
                    new ObjectParameter("StartingIPPort", viewgroup.StartingIPPort),
                    new ObjectParameter("EndingIPPort", viewgroup.EndingIPPort),
                    new ObjectParameter("SecondaryStartingIPPort", viewgroup.SecondaryStartingIPPort),
                    new ObjectParameter("DeviceTypeID", viewgroup.DeviceTypeID)
                    });
            */

            ObjectResult<long?> result =
                _db.AddGroup(viewgroup.Name, viewgroup.DeviceNamePrefix,
                            viewgroup.StartingIP1, viewgroup.StartingIP2, viewgroup.StartingIP3, viewgroup.StartingIP4,
                            viewgroup.EndingIP1, viewgroup.EndingIP2, viewgroup.EndingIP3, viewgroup.EndingIP4,
                            viewgroup.SecondaryStartingIP1, viewgroup.SecondaryStartingIP2,
                            viewgroup.SecondaryStartingIP3, viewgroup.SecondaryStartingIP4,
                            viewgroup.StartingIPPort, viewgroup.EndingIPPort, viewgroup.SecondaryStartingIPPort,
                            viewgroup.DeviceTypeID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? groupId = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return groupId;
        }

        public List<ViewGroup> GetGroupList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewGroup> os = _db.ViewGroup;
            return os.Where(t => t.DataOwnerID == userId).ToList();
        }

        public SelectList GetGroups(Guid userId, Int64 selected)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewGroup> os = _db.ViewGroup;
            return new SelectList(os.Where(t => t.DataOwnerID == userId), "ID", "Name", selected);
        }

        public SelectList GetGroups(Guid userId)
        {
            return GetGroups(userId, 0);
        }

        public ViewGroup GetGroup(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewGroup> os = _db.ViewGroup;
            ViewGroup viewgroup = os.Single(t => (t.ID == id) && (t.DataOwnerID == userId));
            return viewgroup;
        }

        public void DeleteGroup(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteGroup(id, userId);
        }

        public void UpdateGroupShedule(ViewGroup viewgroup, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateGroupShedule(viewgroup.ID, viewgroup.MinutesE, viewgroup.MinutesG, viewgroup.MinMode,
                                  viewgroup.HoursE, viewgroup.HoursG, viewgroup.HourMode, viewgroup.DaysE,
                                  viewgroup.DaysG,
                                  viewgroup.DayMode, viewgroup.WeeksG, viewgroup.WeekMode, viewgroup.Monday,
                                  viewgroup.Tuesday,
                                  viewgroup.Wednesday, viewgroup.Thursday, viewgroup.Friday, viewgroup.Saturday,
                                  viewgroup.Sunday, userId);
        }

        public void UpdateGroup(ViewGroup viewgroup, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateGroup(viewgroup.ID, viewgroup.MinutesE, viewgroup.MinutesG, viewgroup.MinMode,
                           viewgroup.HoursE, viewgroup.HoursG, viewgroup.HourMode, viewgroup.DaysE, viewgroup.DaysG,
                           viewgroup.DayMode, viewgroup.WeeksG, viewgroup.WeekMode, viewgroup.Monday, viewgroup.Tuesday,
                           viewgroup.Wednesday, viewgroup.Thursday, viewgroup.Friday, viewgroup.Saturday,
                           viewgroup.Sunday, userId, viewgroup.Name);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestGroupRepository : IGroupRepository
    {
        public int GroupRowAffected;

        public long? AddGroup(ViewGroup viewgroup, Guid userId)
        {
            GroupRowAffected++;
            return GroupRowAffected;
        }

        public List<ViewGroup> GetGroupList(Guid userId)
        {
            return new List<ViewGroup>();
        }

        public SelectList GetGroups(Guid userId, Int64 selected)
        {
            return new SelectList("", "");
        }

        public SelectList GetGroups(Guid userId)
        {
            return GetGroups(userId, 0);
        }

        public ViewGroup GetGroup(Int64 id, Guid userId)
        {
            if (id != 0x12081975)
                throw new Exception("test exception - invalid group number");

            var viewgroup = new ViewGroup {Name = "test group"};
            return viewgroup;
        }

        public void DeleteGroup(Int64 id, Guid userId)
        {
            if (id != 0x12081975)
                throw new Exception("test exception - invalid group number");
        }

        public void UpdateGroupShedule(ViewGroup viewgroup, Guid userId)
        {
            if (viewgroup.ID != 0x12081975)
                throw new Exception("test exception - invalid group number");
        }

        public void UpdateGroup(ViewGroup viewgroup, Guid userId)
        {
            if (viewgroup.ID != 0x12081975)
                throw new Exception("test exception - invalid group number");
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}