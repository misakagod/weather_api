#include "WeatherAPI.h"



WeatherAPI::WeatherAPI()
{
}

void WeatherAPI::getRegionCountry(map<wstring, wstring>& Data)
{
	Data.clear();
	wstring code;
	wstring name;
	wstring _string;
	map<wstring, wstring> _data;
	int index;
	WeatherWSSoapProxy proxy("http://ws.webxml.com.cn/WebServices/WeatherWS.asmx");
	_ns1__getRegionCountry RegionCountry;
	_ns1__getRegionCountryResponse RegionRes;
	proxy.getRegionCountry(&RegionCountry, RegionRes);
	for (size_t i = 0; i < RegionRes.getRegionCountryResult->string.size(); ++i)
	{
		 _string = RegionRes.getRegionCountryResult->string[i];
		index = _string.find(L",");
		name = _string.substr(0, index);
		code = _string.substr(index);
		_data.insert(pair<wstring, wstring>(name, code));
	}
	Data = _data;
}

void WeatherAPI::getRegionProvince(map<wstring, wstring>& Data)
{
	Data.clear();
	wstring code;
	wstring name;
	wstring _string;
	map<wstring, wstring> _data;
	int index;
	WeatherWSSoapProxy proxy("http://ws.webxml.com.cn/WebServices/WeatherWS.asmx");
	_ns1__getRegionProvince RegionCity;
	_ns1__getRegionProvinceResponse RegionRes;
	proxy.getRegionProvince(&RegionCity, RegionRes);
	for (size_t i = 0; i < RegionRes.getRegionProvinceResult->string.size(); ++i)
	{
		_string = RegionRes.getRegionProvinceResult->string[i];
		index = _string.find(L",");
		name = _string.substr(0, index);
		code = _string.substr(index+1);
		_data.insert(pair<wstring, wstring>(name, code));
	}
	Data = _data;
}

void WeatherAPI::getSupportCityString(wstring code, map<wstring, wstring>& Data)
{
	Data.clear();
	wstring number;
	wstring name;
	wstring _string;
	map<wstring, wstring> _data;
	int index;
	WeatherWSSoapProxy proxy("http://ws.webxml.com.cn/WebServices/WeatherWS.asmx");
	_ns1__getSupportCityString City;
	City.theRegionCode = &code;
	_ns1__getSupportCityStringResponse CityRes;
	proxy.getSupportCityString(&City, CityRes);
	for (size_t i = 0; i < CityRes.getSupportCityStringResult->string.size(); ++i)
	{
		_string = CityRes.getSupportCityStringResult->string[i];
		index = _string.find(L",");
		name = _string.substr(0, index);
		number = _string.substr(index);
		_data.insert(pair<wstring,wstring>(name, number));
	}
	Data = _data;
}

void WeatherAPI::getWeather(wstring code, vector<wstring>& Data)
{
	Data.clear();
	WeatherWSSoapProxy proxy("http://ws.webxml.com.cn/WebServices/WeatherWS.asmx");
	wstring userID = L"";
	_ns1__getWeather Weather;
	_ns1__getWeatherResponse WeatherRes;
	Weather.theCityCode = &code;
	Weather.theUserID = &userID;
	proxy.getWeather(&Weather, WeatherRes);
	Data = WeatherRes.getWeatherResult->string;
}


WeatherAPI::~WeatherAPI()
{
}
