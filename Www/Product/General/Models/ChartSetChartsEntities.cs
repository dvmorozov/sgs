using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface IChartSetChartsRepository
    {
        List<ViewChartSetsCharts> GetChartSetChartsList(long? chartSetId, Guid userId);
        ViewChartSetsCharts GetChartSetChart(long? chartSetId, Int64 chartId, Guid userId);
        void AddChartSetsCharts(ViewChartSetsCharts v, Guid userId);
        void DeleteChartSetsCharts(Int64 chartSetId, Int64 chartId, Guid userId);
        void UpdateChartSetsCharts(ViewChartSetsCharts v, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class ChartSetChartsRepository : IChartSetChartsRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewChartSetsCharts> GetChartSetChartsList(long? chartSetId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectResult<ViewChartSetsCharts> os = _db.GetChartSetCharts(chartSetId, userId);
            return os.ToList();
        }

        public ViewChartSetsCharts GetChartSetChart(long? chartSetId, Int64 chartId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewChartSetsCharts> os = _db.ViewChartSetsCharts;
            ViewChartSetsCharts result =
                os.Single(
                    t =>
                    (t.ChartID == chartId) && (chartSetId == null || t.ChartSetID == chartSetId) &&
                    (t.DataOwnerID == userId));
            return result;
        }

        public void AddChartSetsCharts(ViewChartSetsCharts v, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.AddChartSetsCharts(v.ChartSetID, v.ChartID, v.ColIndex, v.RowIndex, userId);
        }

        public void DeleteChartSetsCharts(Int64 chartSetId, Int64 chartId, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.DeleteChartSetsCharts(chartSetId, chartId, userId);
        }

        public void UpdateChartSetsCharts(ViewChartSetsCharts v, Guid userId)
        {
            Trace.Assert(_db != null);
            _db.UpdateChartSetsCharts(v.ChartSetID, v.ChartID, v.ColIndex, v.RowIndex, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestChartSetChartsRepository : IChartSetChartsRepository
    {
        public int DeviceRowAffected;

        public TestChartSetChartsRepository()
        {
            DeviceRowAffected = 0;
        }

        public List<ViewChartSetsCharts> GetChartSetChartsList(long? chartSetId, Guid userId)
        {
            return new List<ViewChartSetsCharts>();
        }

        public ViewChartSetsCharts GetChartSetChart(long? chartSetId, Int64 chartId, Guid userId)
        {
            return new ViewChartSetsCharts();
        }

        public void AddChartSetsCharts(ViewChartSetsCharts v, Guid userId)
        {
            DeviceRowAffected++;
        }

        public void DeleteChartSetsCharts(Int64 chartSetId, Int64 chartId, Guid userId)
        {
        }

        public void UpdateChartSetsCharts(ViewChartSetsCharts v, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}