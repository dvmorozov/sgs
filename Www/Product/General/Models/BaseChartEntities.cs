using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Globalization;
using System.Linq;

namespace web.Models
{
    public class ViewSeriesItem
    {
        public string Name { get; set; }

        public DateTime StartTime { get; set; }

        public DateTime EndTime { get; set; }

        public long Count { get; set; }

        public string Id { get; set; }
    };

    public interface IBaseChartRepository
    {
        List<ViewChart> GetChartList(Guid userId);
        List<ViewSeriesItem> GetSerieList(Int64 chartId, Guid userId);
        List<ViewElementOwner> GetElementOwnerList(Guid userId);
        List<ViewElementInstanceName> GetElementInstanceNameList();
        List<ViewElementLocation> GetElementLocationList(Guid userId);
        List<ViewElementGroup> GetElementGroupList(Guid userId);

        List<ViewElementFiltered> GetElementFilteredList(String elementLogicalName, long? ownerId, long? groupId,
                                                         long? locationId, Guid userId, long? chartId);

        List<ViewElementFiltered> GetFilteredByDeviceTypeElements(long? ownerId, long? groupId, long? locationId,
                                                                  Guid userId, long? chartId);

        List<long?> GetChartElements(Int64 chartId, Guid userId);
        ViewChart GetChart(Int64 id, Guid userId);
        void AddChart(ViewChart v, Guid userId);
        void DeleteChart(Int64 id, Guid userId);
        void UpdateChart(ViewChart v, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
        List<ViewFile> GetPointsVsAcqTime_Stat_Last(Int64 chartId, Guid dataOwnerId, Int64 lastPointCount);
        List<ViewFile> GetPointsVsAcqTime_Stat_LastSeconds(Int64 chartId, Guid dataOwnerId, Int64 lastSecondCount);
    }

    public class BaseChartRepository : IBaseChartRepository
    {
        protected SGMasterBaseEntities Db; // = new SGMasterBaseEntities();

        public List<ViewChart> GetChartList(Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectSet<ViewChart> os = Db.ViewChart;
            return os.Where(t => t.DataOwnerID == userId).ToList();
        }

        public List<ViewSeriesItem> GetSerieList(Int64 chartId, Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewSeries> os = Db.GetSnapshotSerieList(chartId, userId);

            List<ViewSeries> result = os.ToList();

            var result2 = new List<ViewSeriesItem>();

            for (int i = 0; i < result.Count(); i++)
            {
                ViewSeries vs = result[i];
                var item = new ViewSeriesItem
                    {
                        Name = (i + 1).ToString(CultureInfo.InvariantCulture),
                        StartTime = vs.StartTime,
                        EndTime = vs.EndTime,
                        Count = vs.Count,
                        Id = vs.Units
                    };
                result2.Add(item);
            }

            return result2;
        }

        public ViewChart GetChart(Int64 id, Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectSet<ViewChart> os = Db.ViewChart;
            ViewChart result = os.Single(t => (t.ID == id) && (t.DataOwnerID == userId));
            return result;
        }

        public void AddChart(ViewChart v, Guid userId)
        {
            Trace.Assert(Db != null);
            Db.AddChart(v.Name, v.Width, v.Height, userId, v.DataSetType, v.DataSetMaxCount, v.ChartType);
        }

        public void DeleteChart(Int64 id, Guid userId)
        {
            Trace.Assert(Db != null);
            Db.DeleteChart(id, userId);
        }

        public void UpdateChart(ViewChart v, Guid userId)
        {
            Trace.Assert(Db != null);
            Db.UpdateChart(v.ID, v.Name, v.Width, v.Height, userId, v.DataSetType, v.DataSetMaxCount, v.ChartType);
        }

        public List<ViewElementInstanceName> GetElementInstanceNameList()
        {
            Trace.Assert(Db != null);
            ObjectSet<ViewElementInstanceName> os = Db.ViewElementInstanceName;
            return os.ToList();
        }

        public List<ViewElementOwner> GetElementOwnerList(Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewElementOwner> os = Db.GetElementOwners(userId);
            return os.ToList();
        }

        public List<ViewElementLocation> GetElementLocationList(Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewElementLocation> os = Db.GetElementLocations(userId);
            return os.ToList();
        }

        public List<ViewElementGroup> GetElementGroupList(Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewElementGroup> os = Db.GetElementGroups(userId);
            return os.ToList();
        }

        public List<ViewFile> GetPointsVsAcqTime_Stat_Last(Int64 chartId, Guid dataOwnerId, Int64 lastPointCount)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewFile> os = Db.GetPointsVsAcqTime_Stat_Last(chartId, dataOwnerId, lastPointCount);
            return os.ToList();
        }

        public List<ViewFile> GetPointsVsAcqTime_Stat_LastSeconds(Int64 chartId, Guid dataOwnerId,
                                                                   Int64 lastSecondCount)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewFile> os = Db.GetPointsVsAcqTime_Stat_LastSeconds(chartId, dataOwnerId, lastSecondCount);
            return os.ToList();
        }

        public List<ViewElementFiltered> GetElementFilteredList(String elementLogicalName, long? ownerId, long? groupId,
                                                                long? locationId, Guid userId, long? chartId)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewElementFiltered> os = Db.GetFilteredElements(elementLogicalName, ownerId, groupId,
                                                                          locationId, userId, chartId);
            List<ViewElementFiltered> l = os.ToList();
            return l;
        }

        public List<ViewElementFiltered> GetFilteredByDeviceTypeElements(long? ownerId, long? groupId, long? locationId,
                                                                         Guid userId, long? chartId)
        {
            Trace.Assert(Db != null);
            ObjectResult<ViewElementFiltered> os = Db.GetFilteredByDeviceTypeElements("Video Recorder", ownerId, groupId,
                                                                                      locationId, userId, chartId);
            List<ViewElementFiltered> l = os.ToList();
            return l;
        }

        public List<long?> GetChartElements(Int64 chartId, Guid userId)
        {
            Trace.Assert(Db != null);
            ObjectResult<long?> os = Db.GetChartElements(chartId, userId);
            return os.ToList();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            Db = entities;
        }
    }
}