using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface IChartRepository
    {
        List<String> ExportSvgElements(Int64 docId, Guid dataOwnerId);
        List<String> ExportDataElementStates(Int64 docId, Guid dataOwnerId);
        void AddElementToChart(Int64 elementId, Int64 chartId, Guid dataOwnerId);
        void DeleteElementFromChart(Int64 elementId, Int64 chartId, Guid dataOwnerId);
        List<long?> GetChartElements(Int64 chartId, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class ChartRepository : IChartRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<String> ExportSvgElements(Int64 docId, Guid dataOwnerId)
        {
            Trace.Assert(_db != null);
            ObjectResult<String> os = _db.ExportSVGElements(docId, dataOwnerId);
            return os.ToList();
        }

        public List<String> ExportDataElementStates(Int64 docId, Guid dataOwnerId)
        {
            Trace.Assert(_db != null);
            ObjectResult<String> os = _db.ExportDataElementStates(docId, dataOwnerId);
            return os.ToList();
        }

        public void AddElementToChart(Int64 elementId, Int64 chartId, Guid dataOwnerId)
        {
            Trace.Assert(_db != null);
            _db.AddElementToChart(elementId, chartId, dataOwnerId);
        }

        public void DeleteElementFromChart(Int64 elementId, Int64 chartId, Guid dataOwnerId)
        {
            Trace.Assert(_db != null);
            _db.DeleteElementFromChart(chartId, elementId, dataOwnerId);
        }

        public List<long?> GetChartElements(Int64 chartId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectResult<long?> os = _db.GetChartElements(chartId, userId);
            return os.ToList();
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestChartRepository : IChartRepository
    {
        public int DeviceRowAffected;

        public TestChartRepository()
        {
            DeviceRowAffected = 0;
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }

        public List<String> ExportSvgElements(Int64 docId, Guid dataOwnerId)
        {
            return new List<String>();
        }

        public List<String> ExportDataElementStates(Int64 docId, Guid dataOwnerId)
        {
            return new List<String>();
        }

        public void AddElementToChart(Int64 elementId, Int64 chartId, Guid dataOwnerId)
        {
        }

        public void DeleteElementFromChart(Int64 elementId, Int64 chartId, Guid dataOwnerId)
        {
        }

        public List<long?> GetChartElements(Int64 chartId, Guid userId)
        {
            return new List<long?>();
        }
    }
}