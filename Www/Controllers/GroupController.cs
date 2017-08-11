using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Transactions;
using System.Web.Mvc;
using web.Models;

namespace web.Controllers
{
    [Authorize(Roles = "Administrator, User")]
    public class GroupController : PersonalizedController
    {
        public enum AddForBuildingsResults
        {
            MetersAddedSuccessfully,
            DeviceNamePrefixError,
            NameError,
            StartingIpError,
            StartingIpPortError,
            SecondaryStartingIpError,
            SecondaryStartingPortError,
            StartingBuildingError,
            EndingBuildingError,
            StartingApartamentError,
            EndingApartamentError,
            ModelStateIsNotValid,
            StreetError,
            CityError,
            StateError,
            CountryError,
            ZipCodeError,
            ExceptionRaised
        };

        public enum AddForIPsResults
        {
            MetersAddedSuccessfully,
            DeviceNamePrefixError,
            NameError,
            StartingIpError,
            StartingIpPortError,
            EndingIpError,
            EndingIpPortError,
            SecondaryStartingIpError,
            SecondaryStartingPortError,
            ModelStateIsNotValid,
            ExceptionRaised
        };

        public enum DeleteResults
        {
            DeleteViewCreatedSuccessfully,
            GroupDeletedSuccessfully,
            DeleteInternalError
        };

        public enum EditResults
        {
            GroupUpdatedSuccessfully,
            MinutesEError,
            MinutesGError,
            HoursEError,
            HoursGError,
            DaysEError,
            DaysGError,
            WeeksGError,
            UpdateInternalError,
            MinModeError,
            HourModeError,
            DayModeError,
            WeekModeError,
            ModelStateIsInvalid
        };

        public static String[] AdmissibleMinutesE = {"1", "2", "3", "5", "10", "20", "30"};

        public static String[] AdmissibleMinutesG =
            {
                "00", "05", "10", "15", "20", "25", "30", "35", "40", "45", "50",
                "55"
            };

        public static String[] AdmissibleHoursE = {"1", "3", "4", "6", "12"};

        public static String[] AdmissibleHoursG =
            {
                "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10",
                "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"
            };

        public static String[] AdmissibleDaysE = {"1", "2", "3", "5", "10", "20", "30"};

        public static String[] AdmissibleDaysG =
            {
                "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13",
                "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28"
            };

        public static String[] AdmissibleWeeksG = {"1", "2", "3", "4"};
        public static String[] AdmissibleMinModes = {"ENM", "AGM"};
        public static String[] AdmissibleHourModes = {"ENH", "AGH"};
        public static String[] AdmissibleDayModes = {"END", "AGD", "AGDW"};
        public static String[] AdmissibleWeekModes = {"EW", "AGW"};
        public AddForBuildingsResults AddForBuildingsResult;
        public AddForIPsResults AddForIPsResult;
        public DeleteResults DeleteResult;
        private IDeviceLogicalDeviceRepository _deviceLogicalDeviceRepository;
        private IDeviceRepository _deviceRepository;
        private IDeviceTypeRepository _deviceTypeRepository;
        public EditResults EditResult;
        private IGroupRepository _groupRepository; //  data isolation level

        public GroupController()
        {
            Entities = new SGMasterBaseEntities();
            SetRepository(new GroupRepository(), new DeviceTypeRepository(), new DeviceRepository(),
                          new DeviceLogicalDeviceRepository(), Entities);
        }

        public GroupController(IGroupRepository r, IDeviceTypeRepository dtr, IDeviceRepository dr,
                               IDeviceLogicalDeviceRepository or)
        {
            //  for tests over real database
            //  does not work...
            //db = new SGMasterBaseEntities("metadata=res://*/Models.SGMasterBase.csdl|res://*/Models.SGMasterBase.ssdl|res://*/Models.SGMasterBase.msl;provider=System.Data.SqlClient;provider connection string=\"Data Source=.\\SQLEXPRESS;Initial Catalog=SGMasterBase;Integrated Security=True;MultipleActiveResultSets=True;Application Name=EntityFramework\"");
            SetRepository(r, dtr, dr, or, null);
        }

        private void SetRepository(IGroupRepository r, IDeviceTypeRepository dtr, IDeviceRepository dr,
                                   IDeviceLogicalDeviceRepository or, SGMasterBaseEntities e)
        {
            _groupRepository = r;
            _groupRepository.SetEntities(e);
            _deviceTypeRepository = dtr;
            _deviceTypeRepository.SetEntities(e);
            _deviceRepository = dr;
            _deviceRepository.SetEntities(e);
            _deviceLogicalDeviceRepository = or;
            _deviceLogicalDeviceRepository.SetEntities(e);
        }

        public ViewResult Index()
        {
            try
            {
                List<ViewGroup> viewgroupList = _groupRepository.GetGroupList(GetUserId());
                return View(viewgroupList);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ViewResult Details(long id)
        {
            try
            {
                ViewGroup viewgroup = _groupRepository.GetGroup(id, GetUserId());
                FillGroupCreateViewAuxData(viewgroup);
                return View("DetailsWithoutSchedule" /*temporarily schedule input disabled !!!*/, viewgroup);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        private void FillGroupCreateViewAuxData(ViewGroup vg)
        {
            //  заполнение элементов выбора
            ViewData["MinutesE"] = new SelectList(AdmissibleMinutesE,
                                                  vg != null ? vg.MinutesE.ToString() : AdmissibleMinutesE[0]);
            ViewData["MinutesG"] = new SelectList(AdmissibleMinutesG,
                                                  vg != null ? vg.MinutesG.ToString() : AdmissibleMinutesG[0]);
            ViewData["HoursE"] = new SelectList(AdmissibleHoursE,
                                                vg != null ? vg.HoursE.ToString() : AdmissibleHoursE[0]);
            ViewData["HoursG"] = new SelectList(AdmissibleHoursG,
                                                vg != null ? vg.HoursG.ToString() : AdmissibleHoursG[0]);
            ViewData["DaysE"] = new SelectList(AdmissibleDaysE, vg != null ? vg.DaysE.ToString() : AdmissibleDaysE[0]);
            ViewData["DaysG"] = new SelectList(AdmissibleDaysG, vg != null ? vg.DaysG.ToString() : AdmissibleDaysG[0]);
            ViewData["WeeksG"] = new SelectList(AdmissibleWeeksG,
                                                vg != null ? vg.WeeksG.ToString() : AdmissibleWeeksG[0]);
        }

        private void FillViewsAuxData(ViewGroup vg)
        {
            ViewBag.DeviceTypeID = _deviceTypeRepository.GetDeviceTypes(GetUserId(), null);
            FillGroupCreateViewAuxData(vg);
        }

        public ActionResult AddMetersForIPs()
        {
            try
            {
                FillViewsAuxData(null);
                return View("AddMetersForIPs", new ViewGroup());
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        private static bool IsValidIpClass(UInt32 ip1, UInt32 ip2, UInt32 ip3, UInt32 ip4)
        {
            return ((ip1 >= 1) && (ip1 <= 126)) || ((ip1 >= 128) && (ip1 <= 191)) ||
                   ((ip1 >= 192) && (ip1 <= 223)) ||
                   ((ip1 == 127) && (ip2 == 0) && (ip3 == 0) && (ip4 == 1));
        }

        private IpClass GetIPClass(UInt32 startingIp)
        {
            if (startingIp <= 126)
            {
                return IpClass.A;
            }
            if (startingIp <= 191)
            {
                return IpClass.B;
            }
            return startingIp <= 223 ? IpClass.C : IpClass.Invalid;
        }

        [HttpPost]
        public ActionResult AddMetersForIPs(ViewGroup viewgroup)
        {
            try
            {
                if (viewgroup.DeviceNamePrefix == null)
                {
                    AddForIPsResult = AddForIPsResults.DeviceNamePrefixError;
                    return AddMetersForIPs();
                }
                if (string.IsNullOrEmpty(viewgroup.Name))
                {
                    AddForIPsResult = AddForIPsResults.NameError;
                    return AddMetersForIPs();
                }

                UInt32 startingIp1 = 0, startingIp2 = 0, startingIp3 = 0, startingIp4 = 0, startingIpPort = 0;
                Boolean startingIpUndefined = false;

                if (String.IsNullOrWhiteSpace(viewgroup.StartingIP1) && String.IsNullOrWhiteSpace(viewgroup.StartingIP2) &&
                    String.IsNullOrWhiteSpace(viewgroup.StartingIP3) && String.IsNullOrWhiteSpace(viewgroup.StartingIP4))
                    startingIpUndefined = true;
                else
                {
                    if (String.IsNullOrWhiteSpace(viewgroup.StartingIP1) ||
                        (!UInt32.TryParse(viewgroup.StartingIP1, out startingIp1)) ||
                        String.IsNullOrWhiteSpace(viewgroup.StartingIP2) ||
                        (!UInt32.TryParse(viewgroup.StartingIP2, out startingIp2)) ||
                        String.IsNullOrWhiteSpace(viewgroup.StartingIP3) ||
                        (!UInt32.TryParse(viewgroup.StartingIP3, out startingIp3)) ||
                        String.IsNullOrWhiteSpace(viewgroup.StartingIP4) ||
                        (!UInt32.TryParse(viewgroup.StartingIP4, out startingIp4)))
                    {
                        AddForIPsResult = AddForIPsResults.StartingIpError;
                        return AddMetersForIPs();
                    }
                    if (!IsValidIpClass(startingIp1, startingIp2, startingIp3, startingIp4))
                    {
                        AddForIPsResult = AddForIPsResults.StartingIpError;
                        return AddMetersForIPs();
                    }
                    if (String.IsNullOrWhiteSpace(viewgroup.StartingIPPort) ||
                        (!UInt32.TryParse(viewgroup.StartingIPPort, out startingIpPort))
                        || !(startingIpPort <= 65535))
                    {
                        AddForIPsResult = AddForIPsResults.StartingIpPortError;
                        return AddMetersForIPs();
                    }
                }

                UInt32 endingIp1 = 0, endingIp2 = 0, endingIp3 = 0, endingIp4 = 0, endingIpPort = 0;

                if (String.IsNullOrWhiteSpace(viewgroup.EndingIP1) && String.IsNullOrWhiteSpace(viewgroup.EndingIP2) &&
                    String.IsNullOrWhiteSpace(viewgroup.EndingIP3) && String.IsNullOrWhiteSpace(viewgroup.EndingIP4))
                {
                }
                else
                {
                    if (String.IsNullOrWhiteSpace(viewgroup.EndingIP1) ||
                        (!UInt32.TryParse(viewgroup.EndingIP1, out endingIp1)) ||
                        String.IsNullOrWhiteSpace(viewgroup.EndingIP2) ||
                        (!UInt32.TryParse(viewgroup.EndingIP2, out endingIp2)) ||
                        String.IsNullOrWhiteSpace(viewgroup.EndingIP3) ||
                        (!UInt32.TryParse(viewgroup.EndingIP3, out endingIp3)) ||
                        String.IsNullOrWhiteSpace(viewgroup.EndingIP4) ||
                        (!UInt32.TryParse(viewgroup.EndingIP4, out endingIp4)))
                    {
                        AddForIPsResult = AddForIPsResults.EndingIpError;
                        return AddMetersForIPs();
                    }
                    if (!IsValidIpClass(endingIp1, endingIp2, endingIp3, endingIp4))
                    {
                        AddForIPsResult = AddForIPsResults.EndingIpError;
                        return AddMetersForIPs();
                    }
                    if (String.IsNullOrWhiteSpace(viewgroup.EndingIPPort) ||
                        (!UInt32.TryParse(viewgroup.EndingIPPort, out endingIpPort))
                        || !(endingIpPort <= 65535))
                    {
                        AddForIPsResult = AddForIPsResults.EndingIpPortError;
                        return AddMetersForIPs();
                    }
                }

                UInt32 secondaryStartingIp1 = 0,
                       secondaryStartingIp2 = 0,
                       secondaryStartingIp3 = 0,
                       secondaryStartingIp4 = 0,
                       secondaryStartingIpPort = 0;
                Boolean secondaryStartingIpUndefined = false;

                if (String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP1) &&
                    String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP2) &&
                    String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP3) &&
                    String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP4)) secondaryStartingIpUndefined = true;
                else
                {
                    if (String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP1) ||
                        (!UInt32.TryParse(viewgroup.SecondaryStartingIP1, out secondaryStartingIp1)) ||
                        String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP2) ||
                        (!UInt32.TryParse(viewgroup.SecondaryStartingIP2, out secondaryStartingIp2)) ||
                        String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP3) ||
                        (!UInt32.TryParse(viewgroup.SecondaryStartingIP3, out secondaryStartingIp3)) ||
                        String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP4) ||
                        (!UInt32.TryParse(viewgroup.SecondaryStartingIP4, out secondaryStartingIp4)))
                    {
                        AddForIPsResult = AddForIPsResults.SecondaryStartingIpError;
                        return AddMetersForIPs();
                    }
                    if (!IsValidIpClass(secondaryStartingIp1, secondaryStartingIp2, secondaryStartingIp3, secondaryStartingIp4))
                    {
                        AddForIPsResult = AddForIPsResults.SecondaryStartingIpError;
                        return AddMetersForIPs();
                    }
                    if (String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIPPort) ||
                        (!UInt32.TryParse(viewgroup.SecondaryStartingIPPort, out secondaryStartingIpPort))
                        || !(secondaryStartingIpPort <= 65535))
                    {
                        AddForIPsResult = AddForIPsResults.SecondaryStartingPortError;
                        return AddMetersForIPs();
                    }
                }
                if (ModelState.IsValid)
                {
                    UInt32 netShift = 0, netSecShift = 0;

                    if (!startingIpUndefined && GetIPClass(startingIp1) == IpClass.A)
                    {
                        if (GetIPClass(endingIp1) != IpClass.A)
                        {
                            AddForIPsResult = AddForIPsResults.EndingIpError;
                            return AddMetersForIPs();
                        }
                        netShift = 24; //  class-A
                    }
                    else if (!startingIpUndefined && GetIPClass(startingIp1) == IpClass.B)
                    {
                        if (GetIPClass(endingIp1) != IpClass.B)
                        {
                            AddForIPsResult = AddForIPsResults.EndingIpError;
                            return AddMetersForIPs();
                        }
                        netShift = 16; //   class-B
                    }
                    else if (!startingIpUndefined && GetIPClass(startingIp1) == IpClass.C)
                    {
                        if (GetIPClass(endingIp1) != IpClass.C)
                        {
                            AddForIPsResult = AddForIPsResults.EndingIpError;
                            return AddMetersForIPs();
                        }
                        netShift = 8; //    class-C
                    }

                    if (!secondaryStartingIpUndefined && GetIPClass(secondaryStartingIp1) == IpClass.A)
                    {
                        netSecShift = 24; //  class-A
                    }
                    else if (!secondaryStartingIpUndefined && GetIPClass(secondaryStartingIp1) == IpClass.B)
                    {
                        netSecShift = 16; //   class-B
                    }
                    else if (!secondaryStartingIpUndefined && GetIPClass(secondaryStartingIp1) == IpClass.C)
                    {
                        netSecShift = 8; //    class-C
                    }

                    UInt32 startingIpAddr = startingIp1 << 24 | startingIp2 << 16 | startingIp3 << 8 | startingIp4;
                    UInt32 endingIpAddr = endingIp1 << 24 | endingIp2 << 16 | endingIp3 << 8 | endingIp4;
                    UInt32 secondaryStartingIpAddr = secondaryStartingIp1 << 24 | secondaryStartingIp2 << 16 |
                                                     secondaryStartingIp3 << 8 | secondaryStartingIp4;
                    var ipMask = (UInt32) ((1 << (Int32) netShift) - 1);
                    var ipSecMask = (UInt32) ((1 << (Int32) netSecShift) - 1);

                    Guid userId = GetUserId();
                    using (var transaction = new TransactionScope())
                    {
                        //  сначала нужно добавить группу, чтобы получить идентификатор
                        long? groupId = _groupRepository.AddGroup(viewgroup, userId);
                        Int32 serNum = 1;
                        UInt32 sIp, eIp, sPort, ePort;
                        if (startingIpAddr <= endingIpAddr)
                        {
                            sIp = startingIpAddr;
                            eIp = endingIpAddr;
                        }
                        else
                        {
                            sIp = endingIpAddr;
                            eIp = startingIpAddr;
                        }

                        if (startingIpPort <= endingIpPort)
                        {
                            sPort = startingIpPort;
                            ePort = endingIpPort;
                        }
                        else
                        {
                            ePort = startingIpPort;
                            sPort = endingIpPort;
                        }
                        UInt32 netPart = (sIp >> (Int32) netShift);
                        UInt32 ipPart = sIp & ipMask;

                        uint sSecIp = secondaryStartingIpAddr;
                        uint sSecPort = secondaryStartingIpPort;

                        UInt32 netSecPart = (sSecIp >> (Int32) netSecShift);
                        UInt32 ipSecPart = sSecIp & ipSecMask;

                        if (startingIpUndefined)
                        {
                            var td = new ViewDevice
                                {
                                    InternalAddress = "1",
                                    AddressType = "IP",
                                    GroupID = groupId.Value,
                                    TypeID = viewgroup.DeviceTypeID
                                };

                            if (0 != viewgroup.DeviceNamePrefix.Trim().Length)
                                td.Name = viewgroup.DeviceNamePrefix.Trim() + (serNum).ToString(CultureInfo.InvariantCulture);

                            long? deviceId = _deviceRepository.AddDevice(td, userId);
                            _deviceLogicalDeviceRepository.AddAllDeviceAttrToCollectList((long) deviceId, userId);
                        }
                        else
                        {
                            for (UInt32 ipAddr = sIp, ipSecAddr = sSecIp; ipAddr <= eIp;)
                            {
                                for (UInt32 ipPort = sPort, ipSecPort = sSecPort; ipPort <= ePort;)
                                {
                                    var td = new ViewDevice
                                        {
                                            InternalAddress = "1",
                                            AddressType = "IP",
                                            GroupID = groupId.Value,
                                            TypeID = viewgroup.DeviceTypeID
                                        };

                                    if (0 != viewgroup.DeviceNamePrefix.Trim().Length)
                                        td.Name = viewgroup.DeviceNamePrefix.Trim() + (serNum++).ToString(CultureInfo.InvariantCulture);

                                    td.IP1 = (ipAddr >> 24).ToString(CultureInfo.InvariantCulture);
                                    td.IP2 = ((ipAddr >> 16) & 0xff).ToString(CultureInfo.InvariantCulture);
                                    td.IP3 = ((ipAddr >> 8) & 0xff).ToString(CultureInfo.InvariantCulture);
                                    td.IP4 = (ipAddr & 0xff).ToString(CultureInfo.InvariantCulture);
                                    td.Port = ipPort.ToString(CultureInfo.InvariantCulture);

                                    if (!secondaryStartingIpUndefined)
                                    {
                                        td.SecondaryIP1 = (ipSecAddr >> 24).ToString(CultureInfo.InvariantCulture);
                                        td.SecondaryIP2 = ((ipSecAddr >> 16) & 0xff).ToString(CultureInfo.InvariantCulture);
                                        td.SecondaryIP3 = ((ipSecAddr >> 8) & 0xff).ToString(CultureInfo.InvariantCulture);
                                        td.SecondaryIP4 = (ipSecAddr & 0xff).ToString(CultureInfo.InvariantCulture);
                                        td.SecondaryPort = ipSecPort.ToString(CultureInfo.InvariantCulture);
                                    }

                                    _deviceRepository.AddDevice(td, userId);

                                    ipPort++;
                                    ipSecPort++;
                                    if (ipPort > ePort)
                                    {
                                        ipPart++;
                                        if (ipPart == ipMask)
                                        {
                                            ipPart = 1;
                                            netPart++;
                                        }
                                        ipAddr = (netPart << (Int32) netShift) | ipPart;

                                        ipSecPart++;
                                        if (ipSecPart == ipSecMask)
                                        {
                                            ipSecPart = 1;
                                            netSecPart++;
                                        }
                                        ipSecAddr = (netSecPart << (Int32) netSecShift) | ipSecPart;

                                        break;
                                    }
                                }
                            }
                        }
                        transaction.Complete();
                    }
                    AddForIPsResult = AddForIPsResults.MetersAddedSuccessfully;
                    return RedirectToAction("Index");
                }

                AddForIPsResult = AddForIPsResults.ModelStateIsNotValid;
                return AddMetersForIPs();
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                AddForIPsResult = AddForIPsResults.ExceptionRaised;
                return View("Error");
            }
        }

        public ActionResult AddMetersForBuildings()
        {
            try
            {
                ViewBag.DeviceTypeID = _deviceTypeRepository.GetDeviceTypes(GetUserId(), null);
                FillGroupCreateViewAuxData(null);
                return View("AddMetersForBuildings", new ViewGroup());
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult AddMetersForBuildings(ViewGroup viewgroup)
        {
            try
            {
                try
                {
                    // parameters checking
                    if (viewgroup.DeviceNamePrefix == null)
                    {
                        AddForBuildingsResult = AddForBuildingsResults.DeviceNamePrefixError;
                        return AddMetersForBuildings();
                    }
                    if (string.IsNullOrEmpty(viewgroup.Name))
                    {
                        AddForBuildingsResult = AddForBuildingsResults.NameError;
                        return AddMetersForBuildings();
                    }

                    UInt32 startingIp1 = 0, startingIp2 = 0, startingIp3 = 0, startingIp4 = 0;
                    Boolean startingIpUndefined = false;

                    if (String.IsNullOrWhiteSpace(viewgroup.StartingIP1) &&
                        String.IsNullOrWhiteSpace(viewgroup.StartingIP2) &&
                        String.IsNullOrWhiteSpace(viewgroup.StartingIP3) &&
                        String.IsNullOrWhiteSpace(viewgroup.StartingIP4)) startingIpUndefined = true;
                    else
                    {
                        if (String.IsNullOrWhiteSpace(viewgroup.StartingIP1) ||
                            (!UInt32.TryParse(viewgroup.StartingIP1, out startingIp1)) ||
                            String.IsNullOrWhiteSpace(viewgroup.StartingIP2) ||
                            (!UInt32.TryParse(viewgroup.StartingIP2, out startingIp2)) ||
                            String.IsNullOrWhiteSpace(viewgroup.StartingIP3) ||
                            (!UInt32.TryParse(viewgroup.StartingIP3, out startingIp3)) ||
                            String.IsNullOrWhiteSpace(viewgroup.StartingIP4) ||
                            (!UInt32.TryParse(viewgroup.StartingIP4, out startingIp4)))
                        {
                            AddForBuildingsResult = AddForBuildingsResults.StartingIpError;
                            return AddMetersForBuildings();
                        }
                        if (!IsValidIpClass(startingIp1, startingIp2, startingIp3, startingIp4))
                        {
                            AddForBuildingsResult = AddForBuildingsResults.StartingIpError;
                            return AddMetersForBuildings();
                        }
                        UInt32 startingIpPort;
                        if (String.IsNullOrWhiteSpace(viewgroup.StartingIPPort) ||
                            (!UInt32.TryParse(viewgroup.StartingIPPort, out startingIpPort))
                            || !(startingIpPort <= 65535))
                        {
                            AddForBuildingsResult = AddForBuildingsResults.StartingIpPortError;
                            return AddMetersForBuildings();
                        }
                    }

                    UInt32 secondaryStartingIp1 = 0,
                           secondaryStartingIp2 = 0,
                           secondaryStartingIp3 = 0,
                           secondaryStartingIp4 = 0;
                    Boolean secondaryStartingIpUndefined = false;

                    if (String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP1) &&
                        String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP2) &&
                        String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP3) &&
                        String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP4)) secondaryStartingIpUndefined = true;
                    else
                    {
                        if (String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP1) ||
                            (!UInt32.TryParse(viewgroup.SecondaryStartingIP1, out secondaryStartingIp1)) ||
                            String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP2) ||
                            (!UInt32.TryParse(viewgroup.SecondaryStartingIP2, out secondaryStartingIp2)) ||
                            String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP3) ||
                            (!UInt32.TryParse(viewgroup.SecondaryStartingIP3, out secondaryStartingIp3)) ||
                            String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIP4) ||
                            (!UInt32.TryParse(viewgroup.SecondaryStartingIP4, out secondaryStartingIp4)))
                        {
                            AddForBuildingsResult = AddForBuildingsResults.SecondaryStartingIpError;
                            return AddMetersForBuildings();
                        }
                        if (!IsValidIpClass(secondaryStartingIp1, secondaryStartingIp2, secondaryStartingIp3, secondaryStartingIp4))
                        {
                            AddForBuildingsResult = AddForBuildingsResults.SecondaryStartingIpError;
                            return AddMetersForBuildings();
                        }
                        UInt32 secondaryStartingIpPort;
                        if (String.IsNullOrWhiteSpace(viewgroup.SecondaryStartingIPPort) ||
                            (!UInt32.TryParse(viewgroup.SecondaryStartingIPPort, out secondaryStartingIpPort))
                            || !(secondaryStartingIpPort <= 65535))
                        {
                            AddForBuildingsResult = AddForBuildingsResults.SecondaryStartingPortError;
                            return AddMetersForBuildings();
                        }
                    }

                    uint zipCode, startingBuilding, endingBuilding, startingApartament, endingApartament;
                    if (!UInt32.TryParse(viewgroup.ZipCode, out zipCode))
                    {
                        AddForBuildingsResult = AddForBuildingsResults.ZipCodeError;
                        return AddMetersForBuildings();
                    }
                    if (!UInt32.TryParse(viewgroup.StartingBuilding, out startingBuilding))
                    {
                        AddForBuildingsResult = AddForBuildingsResults.StartingBuildingError;
                        return AddMetersForBuildings();
                    }
                    if (!UInt32.TryParse(viewgroup.EndingBuilding, out endingBuilding))
                    {
                        AddForBuildingsResult = AddForBuildingsResults.EndingBuildingError;
                        return AddMetersForBuildings();
                    }
                    if (!UInt32.TryParse(viewgroup.StartingApartment, out startingApartament))
                    {
                        AddForBuildingsResult = AddForBuildingsResults.StartingApartamentError;
                        return AddMetersForBuildings();
                    }
                    if (!UInt32.TryParse(viewgroup.EndingApartment, out endingApartament))
                    {
                        AddForBuildingsResult = AddForBuildingsResults.EndingApartamentError;
                        return AddMetersForBuildings();
                    }
                    if (viewgroup.Street == "")
                    {
                        AddForBuildingsResult = AddForBuildingsResults.StreetError;
                        return AddMetersForBuildings();
                    }
                    if (viewgroup.City == "")
                    {
                        AddForBuildingsResult = AddForBuildingsResults.CityError;
                        return AddMetersForBuildings();
                    }
                    if (viewgroup.State == "")
                    {
                        AddForBuildingsResult = AddForBuildingsResults.StateError;
                        return AddMetersForBuildings();
                    }
                    if (viewgroup.Country == "")
                    {
                        AddForBuildingsResult = AddForBuildingsResults.CountryError;
                        return AddMetersForBuildings();
                    }

                    //////////////////////////////////////////
                    //  devices creating
                    if (ModelState.IsValid)
                    {
                        UInt32 netShift = 0, netSecShift = 0;

                        if (!startingIpUndefined && GetIPClass(startingIp1) == IpClass.A)
                        {
                            netShift = 24; //  class-A
                        }
                        else if (!startingIpUndefined && GetIPClass(startingIp1) == IpClass.B)
                        {
                            netShift = 16; //   class-B
                        }
                        else if (!startingIpUndefined && GetIPClass(startingIp1) == IpClass.C)
                        {
                            netShift = 8; //    class-C
                        }

                        if (!secondaryStartingIpUndefined && GetIPClass(secondaryStartingIp1) == IpClass.A)
                        {
                            netSecShift = 24; //  class-A
                        }
                        else if (!secondaryStartingIpUndefined && GetIPClass(secondaryStartingIp1) == IpClass.B)
                        {
                            netSecShift = 16; //   class-B
                        }
                        else if (!secondaryStartingIpUndefined && GetIPClass(secondaryStartingIp1) == IpClass.C)
                        {
                            netSecShift = 8; //    class-C
                        }

                        UInt32 startingIpAddr = startingIp1 << 24 | startingIp2 << 16 | startingIp3 << 8 | startingIp4;
                        UInt32 secondaryStartingIpAddr = secondaryStartingIp1 << 24 | secondaryStartingIp2 << 16 |
                                                         secondaryStartingIp3 << 8 | secondaryStartingIp4;
                        var ipMask = (UInt32) ((1 << (Int32) netShift) - 1);
                        var ipSecMask = (UInt32) ((1 << (Int32) netSecShift) - 1);

                        Guid userId = GetUserId();
                        using (var transaction = new TransactionScope())
                        {
                            //  сначала нужно добавить группу, чтобы получить идентификатор
                            long? groupId = _groupRepository.AddGroup(viewgroup, userId);
                            Int32 serNum = 1;
                            uint sIp = startingIpAddr;
                            uint sSecIp = secondaryStartingIpAddr;

                            UInt32 sBuilding, eBuilding, sApartament, eApartament;
                            if (startingBuilding <= endingBuilding)
                            {
                                sBuilding = startingBuilding;
                                eBuilding = endingBuilding;
                            }
                            else
                            {
                                sBuilding = endingBuilding;
                                eBuilding = startingBuilding;
                            }

                            if (startingApartament <= endingApartament)
                            {
                                sApartament = startingApartament;
                                eApartament = endingApartament;
                            }
                            else
                            {
                                sApartament = endingApartament;
                                eApartament = startingApartament;
                            }

                            UInt32 netPart = (sIp >> (Int32) netShift);
                            UInt32 ipPart = sIp & ipMask;

                            UInt32 netSecPart = (sSecIp >> (Int32) netSecShift);
                            UInt32 ipSecPart = sSecIp & ipSecMask;

                            if (startingIpUndefined)
                            {
                                var td = new ViewDevice
                                    {
                                        InternalAddress = "1",
                                        AddressType = "IP",
                                        GroupID = groupId.Value,
                                        TypeID = viewgroup.DeviceTypeID
                                    };

                                UInt32 building = sBuilding;
                                UInt32 apartament = sApartament;

                                if (0 != viewgroup.DeviceNamePrefix.Trim().Length)
                                    td.Name = viewgroup.DeviceNamePrefix.Trim() + (serNum).ToString(CultureInfo.InvariantCulture);

                                var a = new ViewAddress
                                    {
                                        Apartament = apartament.ToString(CultureInfo.InvariantCulture),
                                        Building = building.ToString(CultureInfo.InvariantCulture),
                                        Street = viewgroup.Street,
                                        City = viewgroup.City,
                                        State = viewgroup.State,
                                        Country = viewgroup.Country,
                                        ZipCode = viewgroup.ZipCode
                                    };

                                _deviceRepository.AddDeviceWithAddress(td, a, userId);
                            }
                            else
                            {
                                for (UInt32 building = sBuilding, ipAddr = sIp, ipSecAddr = sSecIp;
                                     building <= eBuilding;
                                     building++)
                                    for (UInt32 apartament = sApartament; apartament <= eApartament; apartament++)
                                    {
                                        var td = new ViewDevice
                                            {
                                                InternalAddress = "1",
                                                AddressType = "IP",
                                                GroupID = groupId.Value,
                                                TypeID = viewgroup.DeviceTypeID
                                            };

                                        if (0 != viewgroup.DeviceNamePrefix.Trim().Length)
                                            td.Name = viewgroup.DeviceNamePrefix.Trim() + (serNum++).ToString(CultureInfo.InvariantCulture);

                                        td.IP1 = (ipAddr >> 24).ToString(CultureInfo.InvariantCulture);
                                        td.IP2 = ((ipAddr >> 16) & 0xff).ToString(CultureInfo.InvariantCulture);
                                        td.IP3 = ((ipAddr >> 8) & 0xff).ToString(CultureInfo.InvariantCulture);
                                        td.IP4 = (ipAddr & 0xff).ToString(CultureInfo.InvariantCulture);
                                        td.Port = viewgroup.StartingIPPort;

                                        if (!secondaryStartingIpUndefined)
                                        {
                                            td.SecondaryIP1 = (ipSecAddr >> 24).ToString(CultureInfo.InvariantCulture);
                                            td.SecondaryIP2 = ((ipSecAddr >> 16) & 0xff).ToString(CultureInfo.InvariantCulture);
                                            td.SecondaryIP3 = ((ipSecAddr >> 8) & 0xff).ToString(CultureInfo.InvariantCulture);
                                            td.SecondaryIP4 = (ipSecAddr & 0xff).ToString(CultureInfo.InvariantCulture);
                                            td.SecondaryPort = viewgroup.SecondaryStartingIPPort;
                                        }

                                        var a = new ViewAddress
                                            {
                                                Apartament = apartament.ToString(CultureInfo.InvariantCulture),
                                                Building = building.ToString(CultureInfo.InvariantCulture),
                                                Street = viewgroup.Street,
                                                City = viewgroup.City,
                                                State = viewgroup.State,
                                                Country = viewgroup.Country,
                                                ZipCode = viewgroup.ZipCode
                                            };

                                        _deviceRepository.AddDeviceWithAddress(td, a, userId);

                                        ipPart++;
                                        if (ipPart == ipMask)
                                        {
                                            ipPart = 1;
                                            netPart++;
                                        }
                                        ipAddr = (netPart << (Int32) netShift) | ipPart;

                                        ipSecPart++;
                                        if (ipSecPart == ipSecMask)
                                        {
                                            ipSecPart = 1;
                                            netSecPart++;
                                        }
                                        ipSecAddr = (netSecPart << (Int32) netSecShift) | ipSecPart;
                                    }
                            }
                            transaction.Complete();
                        }
                        AddForBuildingsResult = AddForBuildingsResults.MetersAddedSuccessfully;
                        return RedirectToAction("Index");
                    }

                    AddForBuildingsResult = AddForBuildingsResults.ModelStateIsNotValid;
                    return AddMetersForBuildings();
                }
                catch (Exception e)
                {
                    ExceptionMessageToViewBag(e);
                    AddForBuildingsResult = AddForBuildingsResults.ExceptionRaised;
                    return View("Error");
                }
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        public ActionResult Edit(long id)
        {
            try
            {
                ViewGroup viewgroup = _groupRepository.GetGroup(id, GetUserId());
                FillViewsAuxData(viewgroup);
                return View("EditWithoutSchedule" /*temporarily schedule input disabled !!!*/, viewgroup);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost]
        public ActionResult Edit(ViewGroup viewgroup)
        {
            try
            {
                if (ModelState.IsValid)
                {
                    var l = AdmissibleMinutesE.Select(Int32.Parse).ToList();

                    if ((viewgroup.MinutesE != null) && (-1 == l.IndexOf((Int32) viewgroup.MinutesE, 0)))
                    {
                        EditResult = EditResults.MinutesEError;
                        return Edit(viewgroup.ID);
                    }

                    l = AdmissibleMinutesG.Select(Int32.Parse).ToList();
                    if ((viewgroup.MinutesG != null) && (-1 == l.IndexOf((Int32) viewgroup.MinutesG, 0)))
                    {
                        EditResult = EditResults.MinutesGError;
                        return Edit(viewgroup.ID);
                    }

                    l = AdmissibleHoursE.Select(Int32.Parse).ToList();
                    if ((viewgroup.HoursE != null) && (-1 == l.IndexOf((Int32) viewgroup.HoursE, 0)))
                    {
                        EditResult = EditResults.HoursEError;
                        return Edit(viewgroup.ID);
                    }

                    l = AdmissibleHoursG.Select(Int32.Parse).ToList();
                    if ((viewgroup.HoursG != null) && (-1 == l.IndexOf((Int32) viewgroup.HoursG, 0)))
                    {
                        EditResult = EditResults.HoursGError;
                        return Edit(viewgroup.ID);
                    }

                    l = AdmissibleDaysE.Select(Int32.Parse).ToList();
                    if ((viewgroup.DaysE != null) && (-1 == l.IndexOf((Int32) viewgroup.DaysE, 0)))
                    {
                        EditResult = EditResults.DaysEError;
                        return Edit(viewgroup.ID);
                    }

                    l = AdmissibleDaysG.Select(Int32.Parse).ToList();
                    if ((viewgroup.DaysG != null) && (-1 == l.IndexOf((Int32) viewgroup.DaysG, 0)))
                    {
                        EditResult = EditResults.DaysGError;
                        return Edit(viewgroup.ID);
                    }

                    l = AdmissibleWeeksG.Select(Int32.Parse).ToList();
                    if ((viewgroup.WeeksG != null) && (-1 == l.IndexOf((Int32) viewgroup.WeeksG, 0)))
                    {
                        EditResult = EditResults.WeeksGError;
                        return Edit(viewgroup.ID);
                    }

                    var ls = new List<String>(AdmissibleWeekModes);
                    if ((viewgroup.WeekMode != null) && (-1 == ls.IndexOf(viewgroup.WeekMode, 0)))
                    {
                        EditResult = EditResults.WeekModeError;
                        return Edit(viewgroup.ID);
                    }

                    ls = new List<String>(AdmissibleDayModes);
                    if ((viewgroup.DayMode != null) && (-1 == ls.IndexOf(viewgroup.DayMode, 0)))
                    {
                        EditResult = EditResults.DayModeError;
                        return Edit(viewgroup.ID);
                    }

                    ls = new List<String>(AdmissibleMinModes);
                    if ((viewgroup.MinMode != null) && (-1 == ls.IndexOf(viewgroup.MinMode, 0)))
                    {
                        EditResult = EditResults.MinModeError;
                        return Edit(viewgroup.ID);
                    }

                    ls = new List<String>(AdmissibleHourModes);
                    if ((viewgroup.HourMode != null) && (-1 == ls.IndexOf(viewgroup.HourMode, 0)))
                    {
                        EditResult = EditResults.HourModeError;
                        return Edit(viewgroup.ID);
                    }

                    _groupRepository.UpdateGroup(viewgroup, GetUserId());
                    EditResult = EditResults.GroupUpdatedSuccessfully;
                    return RedirectToAction("Index");
                }
                //  return to properties editing
                EditResult = EditResults.ModelStateIsInvalid;
                return Edit(viewgroup.ID);
            }
            catch (Exception e)
            {
                ExceptionMessageToViewBag(e);
                EditResult = EditResults.UpdateInternalError;
                return View("Error");
            }
        }

        //
        // GET: /Group/Delete/5
        public ActionResult Delete(long id)
        {
            try
            {
                ViewGroup viewgroup = _groupRepository.GetGroup(id, GetUserId());
                DeleteResult = DeleteResults.DeleteViewCreatedSuccessfully;
                return View(viewgroup);
            }
            catch (Exception e)
            {
                DeleteResult = DeleteResults.DeleteInternalError;
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        [HttpPost, ActionName("Delete")]
        public ActionResult DeleteConfirmed(long id)
        {
            try
            {
                _groupRepository.DeleteGroup(id, GetUserId());
                DeleteResult = DeleteResults.GroupDeletedSuccessfully;
                return RedirectToAction("Index");
            }
            catch (Exception e)
            {
                DeleteResult = DeleteResults.DeleteInternalError;
                ExceptionMessageToViewBag(e);
                return View("Error");
            }
        }

        private enum IpClass
        {
            A,
            B,
            C,
            Invalid
        }
    }
}