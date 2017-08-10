using System;
using System.Globalization;
using System.Linq;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator, User")]
    public class BaseDeviceController : PersonalizedController
    {
        protected IDeviceLogicalDeviceRepository DeviceLogicalDeviceRepository;
        protected IDeviceOwnerRepository DeviceOwnerRepository;
        protected IDeviceRepository DeviceRepository;
        protected IDeviceTypeAndOwnerRepository DeviceTypeAndOwnerRepository;
        protected IDeviceTypeRepository DeviceTypeRepository;
        protected IGroupRepository GroupRepository; //  data isolation level

        public BaseDeviceController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new GroupRepository(), new DeviceRepository(), new DeviceTypeAndOwnerRepository(),
                          new DeviceTypeRepository(), new DeviceOwnerRepository(), new DeviceLogicalDeviceRepository(),
                          Entities);
        }

        public BaseDeviceController(IGroupRepository r, IDeviceRepository dr, IDeviceTypeAndOwnerRepository dt,
                                    IDeviceTypeRepository dtr, IDeviceOwnerRepository dor,
                                    IDeviceLogicalDeviceRepository or)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, dr, dt, dtr, dor, or, null);
        }

        private void SetRepository(IGroupRepository r, IDeviceRepository dr, IDeviceTypeAndOwnerRepository dt,
                                   IDeviceTypeRepository dtr, IDeviceOwnerRepository dor,
                                   IDeviceLogicalDeviceRepository or, SGMasterBaseEntities e)
        {
            DeviceTypeAndOwnerRepository = dt;
            DeviceTypeAndOwnerRepository.SetEntities(e);
            DeviceTypeRepository = dtr;
            DeviceTypeRepository.SetEntities(e);
            GroupRepository = r;
            GroupRepository.SetEntities(e);
            DeviceRepository = dr;
            DeviceRepository.SetEntities(e);
            DeviceOwnerRepository = dor;
            DeviceOwnerRepository.SetEntities(e);
            DeviceLogicalDeviceRepository = or;
            DeviceLogicalDeviceRepository.SetEntities(e);
        }

        protected void FillAuxData(Guid userId, Int64 groupId, Int64 selectedOwner, Int64 selectedType,
                                   Int64 selectedGroup)
        {
            ViewBag.OwnerID = DeviceOwnerRepository.GetDeviceOwners(userId, selectedOwner);
            ViewBag.TypeID = DeviceTypeRepository.GetDeviceTypes(userId, selectedType, null);
            ViewBag.GroupID = GroupRepository.GetGroups(userId, selectedGroup);
            var vg = GroupRepository.GetGroup(groupId, userId);
            ViewBag.GroupName = vg.Name.TrimEnd();
        }

        protected void FillEditViewBag(ViewDevice viewdevice)
        {
            var userId = GetUserId();
            //  should have the same name as viewdevice field for automatic data filling
            ViewBag.TypeID = DeviceTypeRepository.GetDeviceTypes(userId, viewdevice.TypeID, null);
            ViewBag.GroupID = GroupRepository.GetGroups(userId, viewdevice.GroupID);
            ViewBag.CurrentGroupID = viewdevice.GroupID;
        }

        /// <summary>
        /// Requests the data repository for XML-template for given device (camera).
        /// </summary>
        /// <param name="deviceId"></param>
        /// <param name="userId"></param>
        /// <returns>A single string containing the XML-template.</returns>
        protected string GetXmlTemplate(long deviceId, Guid userId)
        {
            var l = DeviceRepository.ExportXmlTemplate(deviceId, userId);
            var xml = l.Aggregate("", (current, s) => current + s);
            if (string.IsNullOrEmpty(xml)) throw new Exception("Template is empty.");
            return xml;
        }
    }
}
