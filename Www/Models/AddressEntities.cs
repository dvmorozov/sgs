using System;
using System.Collections.Generic;
using System.Data.Objects;
using System.Diagnostics;
using System.Linq;

namespace web.Models
{
    public interface IAddressRepository
    {
        List<ViewAddress> GetAddressList(Guid userId);
        List<ViewCountry> GetCountryList(Guid userId);
        List<ViewState> GetStateList(Int64 countryId, Guid userId);
        List<ViewCity> GetCityList(Int64 stateId, Int64 countryId, Guid userId);
        List<ViewStreet> GetStreetList(Int64 cityId, Int64 stateId, Int64 countryId, Guid userId);
        List<ViewBuilding> GetBuildingList(Int64 streetId, Int64 cityId, Int64 stateId, Int64 countryId, Guid userId);

        List<ViewApartament> GetApartamentList(Int64 buildingId, Int64 streetId, Int64 cityId, Int64 stateId,
                                               Int64 countryId, Guid userId);

        List<ViewZipCode> GetZipCodeList(Int64 countryId, Guid userId);
        ViewAddress GetAddress(Int64 id, Guid userId);
        long? AddAddress(ViewAddress viewAddress, Guid userId);
        long? AddAddressSet(ViewAddress viewAddress, Guid userId);
        long? AddCountry(ViewAddress viewAddress, Guid userId);
        long? AddState(ViewAddress viewAddress, Guid userId);
        long? AddCity(ViewAddress viewAddress, Guid userId);
        long? AddStreet(ViewAddress viewAddress, Guid userId);
        long? AddBuilding(ViewAddress viewAddress, Guid userId);
        long? AddApartament(ViewAddress viewAddress, Guid userId);
        long? AddZipCode(ViewAddress viewAddress, Guid userId);
        void DeleteAddress(Int64 id, Guid userId);
        void UpdateAddress(ViewAddress viewAddresstype, Guid userId);
        void SetEntities(SGMasterBaseEntities entities);
    }

    public class AddressRepository : IAddressRepository
    {
        private SGMasterBaseEntities _db; // = new SGMasterBaseEntities();

        public List<ViewAddress> GetAddressList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewAddress> os = _db.ViewAddress;
            return os.Where(t => (t.DataOwnerID == userId)).ToList();
        }

        public List<ViewCountry> GetCountryList(Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCountry> os = _db.ViewCountry;
            return os.Where(t => (t.DataOwnerID == userId)).ToList();
        }

        public List<ViewState> GetStateList(Int64 countryId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewState> os = _db.ViewState;
            return os.Where(t => (t.DataOwnerID == userId) && (t.CountryID == countryId)).ToList();
        }

        public List<ViewCity> GetCityList(Int64 stateId, Int64 countryId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewCity> os = _db.ViewCity;
            return
                os.Where(t => (t.DataOwnerID == userId) && (t.CountryID == countryId) && (t.StateID == stateId))
                  .ToList();
        }

        public List<ViewStreet> GetStreetList(Int64 cityId, Int64 stateId, Int64 countryId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewStreet> os = _db.ViewStreet;
            return
                os.Where(
                    t =>
                    (t.DataOwnerID == userId) && (t.CountryID == countryId) && (t.StateID == stateId) &&
                    (t.CityID == cityId)).ToList();
        }

        public List<ViewBuilding> GetBuildingList(Int64 streetId, Int64 cityId, Int64 stateId, Int64 countryId,
                                                  Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewBuilding> os = _db.ViewBuilding;
            return
                os.Where(
                    t =>
                    (t.DataOwnerID == userId) && (t.CountryID == countryId) && (t.StateID == stateId) &&
                    (t.CityID == cityId) &&
                    (t.StreetID == streetId)).ToList();
        }

        public List<ViewApartament> GetApartamentList(Int64 buildingId, Int64 streetId, Int64 cityId, Int64 stateId,
                                                      Int64 countryId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewApartament> os = _db.ViewApartament;
            return
                os.Where(
                    t =>
                    (t.DataOwnerID == userId) && (t.CountryID == countryId) && (t.StateID == stateId) &&
                    (t.CityID == cityId) &&
                    (t.StreetID == streetId) && (t.BuildingID == buildingId)).ToList();
        }

        public List<ViewZipCode> GetZipCodeList(Int64 countryId, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewZipCode> os = _db.ViewZipCode;
            return os.Where(t => (t.DataOwnerID == userId) && (t.CountryID == countryId)).ToList();
        }

        public ViewAddress GetAddress(Int64 id, Guid userId)
        {
            Trace.Assert(_db != null);
            ObjectSet<ViewAddress> os = _db.ViewAddress;
            ViewAddress result = os.Single(t => (t.ID == id) && (t.DataOwnerID == userId));
            return result;
        }

        public long? AddAddress(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result =
                _db.AddAddress(v.Apartament, v.Building, v.Street, v.City, v.State, v.Country, v.ZipCode, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddCountry(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddCountry(v.Country, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddState(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddState(v.State, v.CountryID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddCity(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddCity(v.City, v.StateID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddStreet(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddStreet(v.Street, v.CityID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddBuilding(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddBuilding(v.Building, v.StreetID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddApartament(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddApartament(v.Apartament, v.BuildingID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddZipCode(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result = _db.AddZipCode(v.ZipCode, v.CountryID, userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public long? AddAddressSet(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            ObjectResult<long?> result =
                _db.AddAddressSet(v.ApartamentID, v.BuildingID, v.StreetID, v.CityID, v.StateID, v.CountryID, v.ZipCodeID,
                                 userId);
            Trace.Assert(result != null);
            IEnumerator<long?> resultList = result.GetEnumerator();
            Trace.Assert(resultList != null);
            resultList.MoveNext();
            long? id = resultList.Current;
            resultList.Dispose(); //  for transaction to be able to complete
            return id;
        }

        public void DeleteAddress(Int64 id, Guid userId)

        {
            Trace.Assert(_db != null);
            _db.DeleteAddress(id, userId);
        }

        public void UpdateAddress(ViewAddress v, Guid userId)
        {
            Trace.Assert(_db != null);
            Trace.Assert(v != null);
            _db.UpdateAddress(v.ID, v.Apartament, v.Building, v.Street, v.City, v.State, v.Country, v.ZipCode, userId);
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
            _db = entities;
        }
    }

    public class TestAddressRepository : IAddressRepository
    {
        public int AddressRowAffected;
        public int ApartamentRowAffected;
        public int BuildingRowAffected;
        public int CityRowAffected;
        public int CountryRowAffected;
        public int StateRowAffected;
        public int StreetRowAffected;
        public int ZipCodeRowAffected;

        public List<ViewAddress> GetAddressList(Guid userId)
        {
            return new List<ViewAddress>();
        }

        public List<ViewCountry> GetCountryList(Guid userId)
        {
            return new List<ViewCountry>();
        }

        public List<ViewCity> GetCityList(Int64 stateId, Int64 countryId, Guid userId)
        {
            return new List<ViewCity>();
        }

        public List<ViewStreet> GetStreetList(Int64 cityId, Int64 stateId, Int64 countryId, Guid userId)
        {
            return new List<ViewStreet>();
        }

        public List<ViewBuilding> GetBuildingList(Int64 streetId, Int64 cityId, Int64 stateId, Int64 countryId,
                                                  Guid userId)
        {
            return new List<ViewBuilding>();
        }

        public List<ViewApartament> GetApartamentList(Int64 buildingId, Int64 streetId, Int64 cityId, Int64 stateId,
                                                      Int64 countryId, Guid userId)
        {
            return new List<ViewApartament>();
        }

        public List<ViewZipCode> GetZipCodeList(Int64 countryId, Guid userId)
        {
            return new List<ViewZipCode>();
        }

        public List<ViewState> GetStateList(Int64 countryId, Guid userId)
        {
            return new List<ViewState>();
        }

        public ViewAddress GetAddress(Int64 id, Guid userId)
        {
            return new ViewAddress();
        }

        public long? AddAddress(ViewAddress v, Guid userId)
        {
            return AddressRowAffected++;
        }

        public long? AddAddressSet(ViewAddress v, Guid userId)
        {
            return AddressRowAffected++;
        }

        public long? AddCountry(ViewAddress viewAddress, Guid userId)
        {
            return CountryRowAffected++;
        }

        public long? AddState(ViewAddress viewAddress, Guid userId)
        {
            return StateRowAffected++;
        }

        public long? AddCity(ViewAddress viewAddress, Guid userId)
        {
            return CityRowAffected++;
        }

        public long? AddStreet(ViewAddress viewAddress, Guid userId)
        {
            return StreetRowAffected++;
        }

        public long? AddBuilding(ViewAddress viewAddress, Guid userId)
        {
            return BuildingRowAffected++;
        }

        public long? AddApartament(ViewAddress viewAddress, Guid userId)
        {
            return ApartamentRowAffected++;
        }

        public long? AddZipCode(ViewAddress viewAddress, Guid userId)
        {
            return ZipCodeRowAffected++;
        }

        public void DeleteAddress(Int64 id, Guid userId)
        {
        }

        public void UpdateAddress(ViewAddress viewAddresstype, Guid userId)
        {
        }

        public void SetEntities(SGMasterBaseEntities entities)
        {
        }
    }
}