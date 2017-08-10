using System;
using System.Text;
using System.Collections.Generic;
using System.Linq;
using System.Web.Mvc;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using TownBreathTest.Models;
using web.Models;

namespace TownBreathTest
{
    /// <summary>
    /// Summary description for GroupTest
    /// </summary>
    [TestClass]
    public class GroupControllerTest
    {
        public GroupControllerTest()
        {
            //
            // TODO: Add constructor logic here
            //
        }

        private TestContext testContextInstance;

        /// <summary>
        ///Gets or sets the test context which provides
        ///information about and functionality for the current test run.
        ///</summary>
        public TestContext TestContext
        {
            get
            {
                return testContextInstance;
            }
            set
            {
                testContextInstance = value;
            }
        }

        #region Additional test attributes
        //
        // You can use the following additional attributes as you write your tests:
        //
        // Use ClassInitialize to run code before running the first test in the class
        // [ClassInitialize()]
        // public static void MyClassInitialize(TestContext testContext) { }
        //
        // Use ClassCleanup to run code after all tests in a class have run
        // [ClassCleanup()]
        // public static void MyClassCleanup() { }
        //
        // Use TestInitialize to run code before running each test 
        // [TestInitialize()]
        // public void MyTestInitialize() { }
        //
        // Use TestCleanup to run code after each test has run
        // [TestCleanup()]
        // public void MyTestCleanup() { }
        //
        #endregion

        ViewGroup Get_AddMetersForIPs_Post_GoodData()
        {
            ViewGroup viewgroup = new ViewGroup();
            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            viewgroup.StartingIPPort = "1024";
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "118";
            viewgroup.EndingIPPort = "1024";
            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            viewgroup.SecondaryStartingIPPort = "1024";
            viewgroup.DeviceNamePrefix = "pref";
            viewgroup.Name = "testgroup";
            viewgroup.DeviceTypeID = 1;
            return viewgroup;
        }

        ViewGroup Get_AddMetersForBuildings_Post_GoodData()
        {
            ViewGroup viewgroup = new ViewGroup();
            //  class A address
            viewgroup.StartingIP1 = "92"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.StartingIPPort = "1024";
            //  class C address
            viewgroup.SecondaryStartingIP1 = "192"; viewgroup.SecondaryStartingIP2 = "255"; viewgroup.SecondaryStartingIP3 = "254"; viewgroup.SecondaryStartingIP4 = "253";
            viewgroup.SecondaryStartingIPPort = "1024";

            viewgroup.DeviceNamePrefix = "bld";
            viewgroup.Name = "testaddbld";
            viewgroup.DeviceTypeID = 1;
            viewgroup.StartingApartment = "35";
            viewgroup.EndingApartment = "35";
            viewgroup.StartingBuilding = "84";
            viewgroup.EndingBuilding = "84";
            viewgroup.Street = "Shaumyana";
            viewgroup.City = "Yekaterinburg";
            viewgroup.State = "Sverdlovskaya";
            viewgroup.Country = "Russian Federation";
            viewgroup.ZipCode = "620102";
            return viewgroup;
        }

        /// <summary>
        ///Checks various combinations of parameters
        /// </summary>
        [TestMethod]
        public void AddMetersForIPs_Post_ParametersChecking()
        {
            TestGroupRepository testGroupRepository = new TestGroupRepository();
            TestDeviceRepository testDeviceRepository = new TestDeviceRepository();
            GroupController gc = new GroupController(testGroupRepository, new TestDeviceTypeRepository(), testDeviceRepository);
            ViewGroup viewgroup = new ViewGroup();
            //////////////////////////////////////////
            //  DeviceNamePrefix == null => error page
            viewgroup.DeviceNamePrefix = null;
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.DeviceNamePrefixError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //  let set up correct state
            viewgroup.DeviceNamePrefix = "pref";
            //////////////////////////////////////////
            //  Name == null or empty => error page
            viewgroup.Name = null;
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.NameError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.Name = "";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.NameError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //  let set up correct state
            viewgroup.Name = "testgroup";
            //////////////////////////////////////////
            //  all fields of starting IP-address should be filled
            //  test with null field values of starting IP address
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = ""; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = ""; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = ""; viewgroup.StartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  all fields of starting IP-address should contain only digits
            viewgroup.StartingIP1 = "0aB"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "xbc"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "xyz"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "00a";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //  let set up correct state
            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            //////////////////////////////////////////
            //  starting IP-port should be filled
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  starting IP-port should contain only digits
            viewgroup.StartingIPPort = "0xab";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  starting IP-port should have valid value
            viewgroup.StartingIPPort = "-10";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  starting IP-port should have valid value
            viewgroup.StartingIPPort = "777777777";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //  let set up correct state
            viewgroup.StartingIPPort = "1024";
            //////////////////////////////////////////
            //  all fields of ending IP-address should be filled
            viewgroup.EndingIP1 = ""; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = ""; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = ""; viewgroup.EndingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  all fields of ending IP-address should contain only digits
            viewgroup.EndingIP1 = "0aB"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "xbc"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "xyz"; viewgroup.EndingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "00a";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  ending IP-port should contain only digits
            //  let set up correct state for ending IP-address
            viewgroup.EndingIP1 = "172"; viewgroup.EndingIP2 = "25"; viewgroup.EndingIP3 = "102"; viewgroup.EndingIP4 = "118";
            viewgroup.EndingIPPort = "0xab";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  ending IP-port should have valid value
            viewgroup.EndingIPPort = "-10";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  ending IP-port should have valid value
            viewgroup.EndingIPPort = "777777777";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //  let set up correct state
            viewgroup.EndingIPPort = "1024";
            //////////////////////////////////////////
            //  all fields of starting secondary IP-address should be filled
            viewgroup.SecondaryStartingIP1 = ""; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  all fields of secondary IP-address should contain only digits
            viewgroup.SecondaryStartingIP1 = "0aB"; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "xbc";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "xyz";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "00a";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  secondary IP-port should be assigned when secondary IP-address is
            //  let set up correct state for secondary IP-address
            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            Assert.AreEqual(viewgroup.SecondaryStartingIPPort, null);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  secondary IP-port should contain only digits
            viewgroup.SecondaryStartingIPPort = "0xab";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  secondary IP-port should have valid value
            viewgroup.SecondaryStartingIPPort = "-10";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //////////////////////////////////////////
            //  secondary IP-port should have valid value
            viewgroup.SecondaryStartingIPPort = "777777777";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingPortError, gc.addMetersForIPsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            
            //  let set up correct state
            viewgroup.SecondaryStartingIPPort = "1024";
            //////////////////////////////////////////
            //  if all fields of ending IP-address are empty then it means that ending IP-address was not specified
            //  let set up correct state
            viewgroup.EndingIP1 = ""; viewgroup.EndingIP2 = ""; viewgroup.EndingIP3 = ""; viewgroup.EndingIP4 = "";
            //  next test...
        }

        /// <summary>
        /// Tests device creation in various modes of IP-address manipulation
        /// </summary>
        [TestMethod]
        public void AddMetersForIPs_Post_SingleIPAddress()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "92"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "92"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "255"; viewgroup.EndingIP4 = "253";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(1, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_IPAddressCrossesASubnetBoundary()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "92"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "93"; viewgroup.EndingIP2 = "0"; viewgroup.EndingIP3 = "0"; viewgroup.EndingIP4 = "1";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(3, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_IPAddressCrossesASubnetBoundaryInBackwardDirection()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.EndingIP1 = "92"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "255"; viewgroup.EndingIP4 = "253";
            viewgroup.StartingIP1 = "93"; viewgroup.StartingIP2 = "0"; viewgroup.StartingIP3 = "0"; viewgroup.StartingIP4 = "1";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(3, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_IPAddressCrossesBSubnetBoundary()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "190"; viewgroup.StartingIP2 = "254"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "190"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "0"; viewgroup.EndingIP4 = "2";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(4, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_IPAddressCrossesCSubnetBoundary()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "192"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "254"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "192"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "255"; viewgroup.EndingIP4 = "2";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(4, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_InvalidStartingIPClass()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "127"; viewgroup.StartingIP2 = "0"; viewgroup.StartingIP3 = "0"; viewgroup.StartingIP4 = "0";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.StartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(0, deviceRepository.deviceRowAffected);
            Assert.AreEqual(0, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_InvalidEndingIPClass()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "223"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "224"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "255"; viewgroup.EndingIP4 = "2";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(0, deviceRepository.deviceRowAffected);
            Assert.AreEqual(0, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_InvalidSecondaryIPClass()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "222"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "223"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "2";
            viewgroup.SecondaryStartingIP1 = "224"; viewgroup.SecondaryStartingIP2 = "255"; viewgroup.SecondaryStartingIP3 = "255"; viewgroup.SecondaryStartingIP4 = "2";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.SecondaryStartingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(0, deviceRepository.deviceRowAffected);
            Assert.AreEqual(0, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_EndingIPShouldHaveTheSameClassAsStarting()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "128"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "223"; viewgroup.StartingIP2 = "255"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "2";
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.EndingIPError, gc.addMetersForIPsResult);
            Assert.AreEqual(0, deviceRepository.deviceRowAffected);
            Assert.AreEqual(0, groupRepository.GroupRowAffected);
        }

        /// <summary>
        /// Tests device creation in various modes of IP-port manipulation 
        /// </summary>
        [TestMethod]
        public void AddMetersForIPs_Post_IPAddressCrossesBSubnetBoundaryAndIPPortGoesUpward()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "190"; viewgroup.StartingIP2 = "254"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "190"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "0"; viewgroup.EndingIP4 = "2";
            viewgroup.StartingIPPort = (1111).ToString();
            viewgroup.EndingIPPort = (1113).ToString();
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(4 * 3, deviceRepository.deviceRowAffected);
            Assert.AreEqual("1111", deviceRepository.firstIPPort);
            Assert.AreEqual("1113", deviceRepository.lastIPPort);
            Assert.AreEqual("190.254.255.253", deviceRepository.firstIPAddress);
            Assert.AreEqual("190.255.0.2", deviceRepository.lastIPAddress);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_IPAddressCrossesBSubnetBoundaryAndIPPortGoesDown()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "190"; viewgroup.StartingIP2 = "254"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "190"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "0"; viewgroup.EndingIP4 = "2";
            viewgroup.StartingIPPort = (1113).ToString();
            viewgroup.EndingIPPort = (1111).ToString();
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(4 * 3, deviceRepository.deviceRowAffected);
            // ports change in upward direction
            Assert.AreEqual("1111", deviceRepository.firstIPPort);
            Assert.AreEqual("1113", deviceRepository.lastIPPort);
            Assert.AreEqual("190.254.255.253", deviceRepository.firstIPAddress);
            Assert.AreEqual("190.255.0.2", deviceRepository.lastIPAddress);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        [TestMethod]
        public void AddMetersForIPs_Post_SecondaryIPAddressIsGiven()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForIPs_Post_GoodData();

            viewgroup.StartingIP1 = "190"; viewgroup.StartingIP2 = "254"; viewgroup.StartingIP3 = "255"; viewgroup.StartingIP4 = "253";
            viewgroup.EndingIP1 = "190"; viewgroup.EndingIP2 = "255"; viewgroup.EndingIP3 = "0"; viewgroup.EndingIP4 = "2";
            viewgroup.SecondaryStartingIP1 = "10"; viewgroup.SecondaryStartingIP2 = "0"; viewgroup.SecondaryStartingIP3 = "0"; viewgroup.SecondaryStartingIP4 = "1";
            viewgroup.StartingIPPort = (1113).ToString();
            viewgroup.EndingIPPort = (1111).ToString();
            viewgroup.SecondaryStartingIPPort = (100).ToString();
            gc.AddMetersForIPs(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForIPsResult.MetersAddedSuccessfully, gc.addMetersForIPsResult);
            Assert.AreEqual(4 * 3, deviceRepository.deviceRowAffected);
            // ports change in upward direction
            Assert.AreEqual("1111", deviceRepository.firstIPPort);
            Assert.AreEqual("1113", deviceRepository.lastIPPort);
            Assert.AreEqual("190.254.255.253", deviceRepository.firstIPAddress);
            Assert.AreEqual("190.255.0.2", deviceRepository.lastIPAddress);
            Assert.AreEqual("10.0.0.1", deviceRepository.firstSecIPAddress);
            Assert.AreEqual("10.0.0.4", deviceRepository.lastSecIPAddress);
            Assert.AreEqual("100", deviceRepository.firstSecIPPort);
            Assert.AreEqual("102", deviceRepository.lastSecIPPort);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
        }

        /// <summary>
        /// Checks for various combinations of parameters
        /// </summary>
        [TestMethod]
        public void AddMetersForBuildings_Post_ParametersChecking()
        { 
            TestGroupRepository testGroupRepository = new TestGroupRepository();
            TestDeviceRepository testDeviceRepository = new TestDeviceRepository();
            GroupController gc = new GroupController(testGroupRepository, new TestDeviceTypeRepository(), testDeviceRepository);
            ViewGroup viewgroup = new ViewGroup();
            //////////////////////////////////////////
            //  DeviceNamePrefix == null => error page
            viewgroup.DeviceNamePrefix = null;
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.DeviceNamePrefixError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //  let set up correct state
            viewgroup.DeviceNamePrefix = "bld";
            //////////////////////////////////////////
            //  Name == null or empty => error page
            viewgroup.Name = null;
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.NameError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.Name = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.NameError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //  let set up correct state
            viewgroup.Name = "testgroup";
            //////////////////////////////////////////
            //  all fields of starting IP-address should be filled
            //  test with null field values of starting IP address
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = ""; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = ""; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = ""; viewgroup.StartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  all fields of starting IP-address should contain only digits
            viewgroup.StartingIP1 = "0aB"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "xbc"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "xyz"; viewgroup.StartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "00a";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //  let set up correct state
            viewgroup.StartingIP1 = "172"; viewgroup.StartingIP2 = "25"; viewgroup.StartingIP3 = "102"; viewgroup.StartingIP4 = "118";
            //////////////////////////////////////////
            //  starting IP-port should be filled
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  starting IP-port should contain only digits
            viewgroup.StartingIPPort = "0xab";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  starting IP-port should have valid value
            viewgroup.StartingIPPort = "-10";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  starting IP-port should have valid value
            viewgroup.StartingIPPort = "777777777";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingIPPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //  let set up correct state
            viewgroup.StartingIPPort = "1024";

            //////////////////////////////////////////
            //  all fields of starting secondary IP-address should be filled
            viewgroup.SecondaryStartingIP1 = ""; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  all fields of secondary IP-address should contain only digits
            viewgroup.SecondaryStartingIP1 = "0aB"; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "xbc";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "xyz";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "00a";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingIPError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  secondary IP-port should be assigned when secondary IP-address is
            //  let set up correct state for secondary IP-address
            viewgroup.SecondaryStartingIP1 = "172"; viewgroup.SecondaryStartingIP2 = "25"; viewgroup.SecondaryStartingIP3 = "102"; viewgroup.SecondaryStartingIP4 = "118";
            Assert.AreEqual(viewgroup.SecondaryStartingIPPort, null);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  secondary IP-port should contain only digits
            viewgroup.SecondaryStartingIPPort = "0xab";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  secondary IP-port should have valid value
            viewgroup.SecondaryStartingIPPort = "-10";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //////////////////////////////////////////
            //  secondary IP-port should have valid value
            viewgroup.SecondaryStartingIPPort = "777777777";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.SecondaryStartingPortError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            //  let set up correct state
            viewgroup.SecondaryStartingIPPort = "1024";
            //////////////////////////////////////////
            //  if all fields of ending IP-address are empty then it means that ending IP-address was not specified
            //  let set up correct state
            viewgroup.EndingIP1 = ""; viewgroup.EndingIP2 = ""; viewgroup.EndingIP3 = ""; viewgroup.EndingIP4 = "";

            //////////////////////////////////////////
            //  zip code should contain only numbers
            viewgroup.ZipCode = "123xyz";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.ZipCodeError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            //  let set up correct state
            viewgroup.ZipCode = "620102";

            //////////////////////////////////////////
            //  "initial building number", "final building number",
            //  "initial apartment number", "final apartment number"
            //  should be right number, greater than zero and should not be empty or null
            String[] badValues = new[] {"123a", "", null};
            for (int i = 0; i < badValues.Count(); i++)
            {
                viewgroup.StartingBuilding = badValues[i];
                gc.AddMetersForBuildings(viewgroup);
                Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingBuildingError, gc.addMetersForBuildingsResult);
                Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
                Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            }
            //  let set up correct state
            viewgroup.StartingBuilding = "123";

            for (int i = 0; i < badValues.Count(); i++)
            {
                viewgroup.EndingBuilding = badValues[i];
                gc.AddMetersForBuildings(viewgroup);
                Assert.AreEqual(GroupController.AddMetersForBuildingsResult.EndingBuildingError, gc.addMetersForBuildingsResult);
                Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
                Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            }
            //  let set up correct state
            viewgroup.EndingBuilding = "123";

            for (int i = 0; i < badValues.Count(); i++)
            {
                viewgroup.StartingApartment = badValues[i];
                gc.AddMetersForBuildings(viewgroup);
                Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StartingApartamentError, gc.addMetersForBuildingsResult);
                Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
                Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            }
            //  let set up correct state
            viewgroup.StartingApartment = "11";

            for (int i = 0; i < badValues.Count(); i++)
            {
                viewgroup.EndingApartment = badValues[i];
                gc.AddMetersForBuildings(viewgroup);
                Assert.AreEqual(GroupController.AddMetersForBuildingsResult.EndingApartamentError, gc.addMetersForBuildingsResult);
                Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
                Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);
            }
            //  let set up correct state
            viewgroup.EndingApartment = "11";

            //////////////////////////////////////////
            //  static parameters should not be empty
            viewgroup.Street = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StreetError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.Street = "Belorechenskaya";
            viewgroup.City = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.CityError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.Street = "Belorechenskaya";
            viewgroup.City = "Yekaterinburg";
            viewgroup.State = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.StateError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.Street = "Dovatora";
            viewgroup.City = "Chelyabinsk";
            viewgroup.State = "Chelyabinskaya";
            viewgroup.Country = "";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.CountryError, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 0);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 0);

            viewgroup.Country = "Russian Federation";

            //////////////////////////////////////////
            //  next test...

            //////////////////////////////////////////
            //  successfull device creation
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.MetersAddedSuccessfully, gc.addMetersForBuildingsResult);
            Assert.AreEqual(testDeviceRepository.deviceRowAffected, 1);
            Assert.AreEqual(testGroupRepository.GroupRowAffected, 1);
        }

        [TestMethod]
        public void AddMetersForBuildings_Post_SingleBuildingSingleApartament()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForBuildings_Post_GoodData();
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.MetersAddedSuccessfully, gc.addMetersForBuildingsResult);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);
            Assert.AreEqual(1, deviceRepository.deviceRowAffected);
        }

        [TestMethod]
        public void AddMetersForBuildings_Post_RangeOfApartaments()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForBuildings_Post_GoodData();

            viewgroup.StartingApartment = "1";
            viewgroup.EndingApartment = "54";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.MetersAddedSuccessfully, gc.addMetersForBuildingsResult);
            Assert.AreEqual(54, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);

            Assert.AreEqual("1024", deviceRepository.firstIPPort);
            Assert.AreEqual("1024", deviceRepository.lastIPPort);
            Assert.AreEqual("92.255.255.253", deviceRepository.firstIPAddress);
            Assert.AreEqual("93.0.0.52", deviceRepository.lastIPAddress);
            Assert.AreEqual("192.255.254.253", deviceRepository.firstSecIPAddress);
            Assert.AreEqual("192.255.255.52", deviceRepository.lastSecIPAddress);
            Assert.AreEqual("1024", deviceRepository.firstSecIPPort);
            Assert.AreEqual("1024", deviceRepository.lastSecIPPort);
        }

        [TestMethod]
        public void AddMetersForBuildings_Post_RangeOfBuildingsRangeOfApartaments()
        {
            TestGroupRepository groupRepository = new TestGroupRepository();
            TestDeviceRepository deviceRepository = new TestDeviceRepository();
            TestDeviceTypeRepository deviceTypeRepository = new TestDeviceTypeRepository();

            GroupController gc = new GroupController(groupRepository, deviceTypeRepository, deviceRepository);
            ViewGroup viewgroup = Get_AddMetersForBuildings_Post_GoodData();

            viewgroup.StartingBuilding = "82";
            viewgroup.EndingBuilding = "84";
            viewgroup.StartingApartment = "1";
            viewgroup.EndingApartment = "54";
            gc.AddMetersForBuildings(viewgroup);
            Assert.AreEqual(GroupController.AddMetersForBuildingsResult.MetersAddedSuccessfully, gc.addMetersForBuildingsResult);
            Assert.AreEqual(3 * 54, deviceRepository.deviceRowAffected);
            Assert.AreEqual(1, groupRepository.GroupRowAffected);

            Assert.AreEqual("1024", deviceRepository.firstIPPort);
            Assert.AreEqual("1024", deviceRepository.lastIPPort);
            Assert.AreEqual("92.255.255.253", deviceRepository.firstIPAddress);
            Assert.AreEqual("93.0.0.160", deviceRepository.lastIPAddress);
            Assert.AreEqual("192.255.254.253", deviceRepository.firstSecIPAddress);
            Assert.AreEqual("192.255.255.160", deviceRepository.lastSecIPAddress);
            Assert.AreEqual("1024", deviceRepository.firstSecIPPort);
            Assert.AreEqual("1024", deviceRepository.lastSecIPPort);
        }

        [TestMethod]
        public void Delete_ParametersChecking()
        {
            //GroupRepository repository = new GroupRepository();
            TestGroupRepository repository = new TestGroupRepository();
            //  tests over real database (do not work today)
            GroupController gc = new GroupController(repository, new TestDeviceTypeRepository(), new TestDeviceRepository());
            gc.Delete(-1);
            Assert.AreEqual(GroupController.DeleteResult.DeleteInternalError, gc.deleteResult);

            gc = new GroupController(repository, new TestDeviceTypeRepository(), new TestDeviceRepository());
            gc.Delete(0);
            Assert.AreEqual(GroupController.DeleteResult.DeleteInternalError, gc.deleteResult);

            gc = new GroupController(repository, new TestDeviceTypeRepository(), new TestDeviceRepository());
            gc.Delete(0x7fffffffffffffff);
            Assert.AreEqual(GroupController.DeleteResult.DeleteInternalError, gc.deleteResult);
            //  tests over fake database
            TestGroupRepository repository2 = new TestGroupRepository();
            gc = new GroupController(repository2, new TestDeviceTypeRepository(), new TestDeviceRepository());
            gc.Delete(0x12081975);
            Assert.AreEqual(GroupController.DeleteResult.DeleteViewCreatedSuccessfully, gc.deleteResult);
        }

        [TestMethod]
        public void Delete_Post_ParametersChecking()
        {
            TestGroupRepository repository = new TestGroupRepository();
            GroupController gc = new GroupController(repository, new TestDeviceTypeRepository(), new TestDeviceRepository());
            gc.DeleteConfirmed(0x12081975);
            Assert.AreEqual(GroupController.DeleteResult.GroupDeletedSuccessfully, gc.deleteResult);

            gc = new GroupController(repository, new TestDeviceTypeRepository(), new TestDeviceRepository());
            gc.DeleteConfirmed(0x07082011);
            Assert.AreEqual(GroupController.DeleteResult.DeleteInternalError, gc.deleteResult);
        }

        [TestMethod]
        public void Edit_ParametersChecking()
        { 
        }

        [TestMethod]
        public void Edit_Post_ParametersChecking()
        {
            TestGroupRepository repository = new TestGroupRepository();
            GroupController gc = new GroupController(repository, new TestDeviceTypeRepository(), new TestDeviceRepository());
            //  inadmissible parameter value results in error page
            ViewGroup vg = new ViewGroup();
            vg.MinutesE = 77;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.MinutesEError, gc.editResult);

            vg = new ViewGroup();
            vg.MinutesE = 1;
            vg.MinutesG = 77;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.MinutesGError, gc.editResult);

            vg = new ViewGroup();
            vg.MinutesE = 1;
            vg.MinutesG = 5;
            vg.HoursE = 100;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.HoursEError, gc.editResult);

            vg = new ViewGroup();
            vg.MinutesE = 1;
            vg.MinutesG = 5;
            vg.HoursE = 3;
            vg.HoursG = 100;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.HoursGError, gc.editResult);

            vg = new ViewGroup();
            vg.MinutesE = 1;
            vg.MinutesG = 5;
            vg.HoursE = 3;
            vg.HoursG = 1;
            vg.DaysE = 32;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.DaysEError, gc.editResult);

            vg = new ViewGroup();
            vg.MinutesE = 1;
            vg.MinutesG = 5;
            vg.HoursE = 3;
            vg.HoursG = 1;
            vg.DaysE = 1;
            vg.DaysG = 32;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.DaysGError, gc.editResult);

            vg = new ViewGroup();
            vg.MinutesE = 1;
            vg.MinutesG = 5;
            vg.HoursE = 3;
            vg.HoursG = 1;
            vg.DaysE = 1;
            vg.DaysG = 1;
            vg.WeeksG = 5;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.WeeksGError, gc.editResult);

            //  all admissible parameter values are stored correctly and the application goes to the group list page
            vg = new ViewGroup();
            vg.MinutesE = Byte.Parse(GroupController.admissibleMinutesE[0]);
            vg.MinutesG = Byte.Parse(GroupController.admissibleMinutesG[0]);
            vg.HoursE = Byte.Parse(GroupController.admissibleHoursE[0]);
            vg.HoursG = Byte.Parse(GroupController.admissibleHoursG[0]);
            vg.DaysE = Byte.Parse(GroupController.admissibleDaysE[0]);
            vg.DaysG = Byte.Parse(GroupController.admissibleDaysG[0]);
            vg.WeeksG = Byte.Parse(GroupController.admissibleWeeksG[0]);
            vg.WeekMode = GroupController.admissibleWeekModes[0];
            vg.DayMode = GroupController.admissibleDayModes[0];
            vg.HourMode = GroupController.admissibleHourModes[0];
            vg.MinMode = GroupController.admissibleMinModes[0];
            vg.ID = 0x12081975;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            for (Int32 i = 1; i < GroupController.admissibleMinutesE.Length; i++)
            {
                vg.MinutesE = Byte.Parse(GroupController.admissibleMinutesE[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleMinutesG.Length; i++)
            {
                vg.MinutesG = Byte.Parse(GroupController.admissibleMinutesG[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleHoursE.Length; i++)
            {
                vg.HoursE = Byte.Parse(GroupController.admissibleHoursE[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleHoursG.Length; i++)
            {
                vg.HoursG = Byte.Parse(GroupController.admissibleHoursG[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleDaysE.Length; i++)
            {
                vg.DaysE = Byte.Parse(GroupController.admissibleDaysE[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleDaysG.Length; i++)
            {
                vg.DaysG = Byte.Parse(GroupController.admissibleDaysG[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleWeeksG.Length; i++)
            {
                vg.WeeksG = Byte.Parse(GroupController.admissibleWeeksG[i]);
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleWeekModes.Length; i++)
            {
                vg.WeekMode = GroupController.admissibleWeekModes[i];
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleDayModes.Length; i++)
            {
                vg.DayMode = GroupController.admissibleDayModes[i];
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleHourModes.Length; i++)
            {
                vg.HourMode = GroupController.admissibleHourModes[i];
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            for (Int32 i = 1; i < GroupController.admissibleMinModes.Length; i++)
            {
                vg.MinMode = GroupController.admissibleMinModes[i];
                gc.Edit(vg);
                Assert.AreEqual(GroupController.EditResult.GroupUpdatedSuccessfully, gc.editResult);
            }
            //  inadmissible group identifier results in error page
            //  repository internal exception results in error page
            vg.ID = 0x09082011;
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.UpdateInternalError, gc.editResult);
            //  inadmissible modes result in error page
            vg.WeekMode = "xyz";
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.WeekModeError, gc.editResult);

            vg.WeekMode = GroupController.admissibleWeekModes[0];
            vg.DayMode = "xyz";
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.DayModeError, gc.editResult);

            vg.DayMode = GroupController.admissibleDayModes[0];
            vg.HourMode = "xyz";
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.HourModeError, gc.editResult);

            vg.HourMode = GroupController.admissibleHourModes[0];
            vg.MinMode = "xyz";
            gc.Edit(vg);
            Assert.AreEqual(GroupController.EditResult.MinModeError, gc.editResult);
        }
    }
}
