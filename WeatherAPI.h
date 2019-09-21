#pragma once
#include"soapWeatherWSSoapProxy.h"
#include"WeatherWSSoap.nsmap"

#include <iostream>
#include "string"
#include <locale>
#include<vector>
#include<map>
using namespace std;

class  __declspec(dllexport) WeatherAPI
{
public:
	WeatherAPI();
	void getRegionCountry(map<wstring,wstring>&);
	void getRegionProvince(map<wstring, wstring>&);
	void getSupportCityString(wstring, map<wstring, wstring>&);
	void getWeather(wstring, vector<wstring>&);
	~WeatherAPI();

};

