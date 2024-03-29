/* soapWeatherWSSoapProxy.cpp
   Generated by gSOAP 2.8.70 for weather.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapWeatherWSSoapProxy.h"

WeatherWSSoapProxy::WeatherWSSoapProxy() : soap(SOAP_IO_DEFAULT)
{	WeatherWSSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

WeatherWSSoapProxy::WeatherWSSoapProxy(const WeatherWSSoapProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

WeatherWSSoapProxy::WeatherWSSoapProxy(const struct soap &_soap) : soap(_soap)
{ }

WeatherWSSoapProxy::WeatherWSSoapProxy(const struct soap &_soap, const char *endpoint) : soap(_soap)
{
	soap_endpoint = endpoint;
}

WeatherWSSoapProxy::WeatherWSSoapProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	WeatherWSSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

WeatherWSSoapProxy::WeatherWSSoapProxy(soap_mode iomode) : soap(iomode)
{	WeatherWSSoapProxy_init(iomode, iomode);
}

WeatherWSSoapProxy::WeatherWSSoapProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	WeatherWSSoapProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

WeatherWSSoapProxy::WeatherWSSoapProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	WeatherWSSoapProxy_init(imode, omode);
}

WeatherWSSoapProxy::~WeatherWSSoapProxy()
{
	this->destroy();
	}

void WeatherWSSoapProxy::WeatherWSSoapProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"ns1", "http://WebXml.com.cn/", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this, namespaces);
}

WeatherWSSoapProxy *WeatherWSSoapProxy::copy()
{	WeatherWSSoapProxy *dup = SOAP_NEW_UNMANAGED(WeatherWSSoapProxy(*(struct soap*)this));
	return dup;
}

WeatherWSSoapProxy& WeatherWSSoapProxy::operator=(const WeatherWSSoapProxy& rhs)
{	soap_done(this);
	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void WeatherWSSoapProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void WeatherWSSoapProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	WeatherWSSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void WeatherWSSoapProxy::soap_noheader()
{	this->header = NULL;
}

::SOAP_ENV__Header *WeatherWSSoapProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *WeatherWSSoapProxy::soap_fault()
{	return this->fault;
}

const char *WeatherWSSoapProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *WeatherWSSoapProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int WeatherWSSoapProxy::soap_close_socket()
{	return soap_closesock(this);
}

int WeatherWSSoapProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void WeatherWSSoapProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void WeatherWSSoapProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *WeatherWSSoapProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int WeatherWSSoapProxy::getRegionDataset(const char *endpoint, const char *soap_action, _ns1__getRegionDataset *ns1__getRegionDataset, _ns1__getRegionDatasetResponse &ns1__getRegionDatasetResponse)
{	struct soap *soap = this;
	struct __ns1__getRegionDataset soap_tmp___ns1__getRegionDataset;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getRegionDataset";
	soap_tmp___ns1__getRegionDataset.ns1__getRegionDataset = ns1__getRegionDataset;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getRegionDataset(soap, &soap_tmp___ns1__getRegionDataset);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRegionDataset(soap, &soap_tmp___ns1__getRegionDataset, "-ns1:getRegionDataset", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRegionDataset(soap, &soap_tmp___ns1__getRegionDataset, "-ns1:getRegionDataset", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getRegionDatasetResponse*>(&ns1__getRegionDatasetResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getRegionDatasetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRegionDatasetResponse.soap_get(soap, "ns1:getRegionDatasetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getRegionProvince(const char *endpoint, const char *soap_action, _ns1__getRegionProvince *ns1__getRegionProvince, _ns1__getRegionProvinceResponse &ns1__getRegionProvinceResponse)
{	struct soap *soap = this;
	struct __ns1__getRegionProvince soap_tmp___ns1__getRegionProvince;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getRegionProvince";
	soap_tmp___ns1__getRegionProvince.ns1__getRegionProvince = ns1__getRegionProvince;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getRegionProvince(soap, &soap_tmp___ns1__getRegionProvince);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRegionProvince(soap, &soap_tmp___ns1__getRegionProvince, "-ns1:getRegionProvince", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRegionProvince(soap, &soap_tmp___ns1__getRegionProvince, "-ns1:getRegionProvince", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getRegionProvinceResponse*>(&ns1__getRegionProvinceResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getRegionProvinceResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRegionProvinceResponse.soap_get(soap, "ns1:getRegionProvinceResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getRegionCountry(const char *endpoint, const char *soap_action, _ns1__getRegionCountry *ns1__getRegionCountry, _ns1__getRegionCountryResponse &ns1__getRegionCountryResponse)
{	struct soap *soap = this;
	struct __ns1__getRegionCountry soap_tmp___ns1__getRegionCountry;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getRegionCountry";
	soap_tmp___ns1__getRegionCountry.ns1__getRegionCountry = ns1__getRegionCountry;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getRegionCountry(soap, &soap_tmp___ns1__getRegionCountry);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRegionCountry(soap, &soap_tmp___ns1__getRegionCountry, "-ns1:getRegionCountry", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRegionCountry(soap, &soap_tmp___ns1__getRegionCountry, "-ns1:getRegionCountry", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getRegionCountryResponse*>(&ns1__getRegionCountryResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getRegionCountryResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRegionCountryResponse.soap_get(soap, "ns1:getRegionCountryResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getSupportCityDataset(const char *endpoint, const char *soap_action, _ns1__getSupportCityDataset *ns1__getSupportCityDataset, _ns1__getSupportCityDatasetResponse &ns1__getSupportCityDatasetResponse)
{	struct soap *soap = this;
	struct __ns1__getSupportCityDataset soap_tmp___ns1__getSupportCityDataset;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCityDataset";
	soap_tmp___ns1__getSupportCityDataset.ns1__getSupportCityDataset = ns1__getSupportCityDataset;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportCityDataset(soap, &soap_tmp___ns1__getSupportCityDataset);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportCityDataset(soap, &soap_tmp___ns1__getSupportCityDataset, "-ns1:getSupportCityDataset", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportCityDataset(soap, &soap_tmp___ns1__getSupportCityDataset, "-ns1:getSupportCityDataset", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportCityDatasetResponse*>(&ns1__getSupportCityDatasetResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportCityDatasetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportCityDatasetResponse.soap_get(soap, "ns1:getSupportCityDatasetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getSupportCityString(const char *endpoint, const char *soap_action, _ns1__getSupportCityString *ns1__getSupportCityString, _ns1__getSupportCityStringResponse &ns1__getSupportCityStringResponse)
{	struct soap *soap = this;
	struct __ns1__getSupportCityString soap_tmp___ns1__getSupportCityString;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCityString";
	soap_tmp___ns1__getSupportCityString.ns1__getSupportCityString = ns1__getSupportCityString;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportCityString(soap, &soap_tmp___ns1__getSupportCityString);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportCityString(soap, &soap_tmp___ns1__getSupportCityString, "-ns1:getSupportCityString", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportCityString(soap, &soap_tmp___ns1__getSupportCityString, "-ns1:getSupportCityString", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportCityStringResponse*>(&ns1__getSupportCityStringResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportCityStringResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportCityStringResponse.soap_get(soap, "ns1:getSupportCityStringResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getWeather(const char *endpoint, const char *soap_action, _ns1__getWeather *ns1__getWeather, _ns1__getWeatherResponse &ns1__getWeatherResponse)
{	struct soap *soap = this;
	struct __ns1__getWeather soap_tmp___ns1__getWeather;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeather";
	soap_tmp___ns1__getWeather.ns1__getWeather = ns1__getWeather;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getWeather(soap, &soap_tmp___ns1__getWeather);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getWeather(soap, &soap_tmp___ns1__getWeather, "-ns1:getWeather", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getWeather(soap, &soap_tmp___ns1__getWeather, "-ns1:getWeather", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getWeatherResponse*>(&ns1__getWeatherResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getWeatherResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getWeatherResponse.soap_get(soap, "ns1:getWeatherResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getRegionDataset_(const char *endpoint, const char *soap_action, _ns1__getRegionDataset *ns1__getRegionDataset, _ns1__getRegionDatasetResponse &ns1__getRegionDatasetResponse)
{	struct soap *soap = this;
	struct __ns1__getRegionDataset_ soap_tmp___ns1__getRegionDataset_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getRegionDataset";
	soap_tmp___ns1__getRegionDataset_.ns1__getRegionDataset = ns1__getRegionDataset;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getRegionDataset_(soap, &soap_tmp___ns1__getRegionDataset_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRegionDataset_(soap, &soap_tmp___ns1__getRegionDataset_, "-ns1:getRegionDataset", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRegionDataset_(soap, &soap_tmp___ns1__getRegionDataset_, "-ns1:getRegionDataset", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getRegionDatasetResponse*>(&ns1__getRegionDatasetResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getRegionDatasetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRegionDatasetResponse.soap_get(soap, "ns1:getRegionDatasetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getRegionProvince_(const char *endpoint, const char *soap_action, _ns1__getRegionProvince *ns1__getRegionProvince, _ns1__getRegionProvinceResponse &ns1__getRegionProvinceResponse)
{	struct soap *soap = this;
	struct __ns1__getRegionProvince_ soap_tmp___ns1__getRegionProvince_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getRegionProvince";
	soap_tmp___ns1__getRegionProvince_.ns1__getRegionProvince = ns1__getRegionProvince;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getRegionProvince_(soap, &soap_tmp___ns1__getRegionProvince_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRegionProvince_(soap, &soap_tmp___ns1__getRegionProvince_, "-ns1:getRegionProvince", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRegionProvince_(soap, &soap_tmp___ns1__getRegionProvince_, "-ns1:getRegionProvince", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getRegionProvinceResponse*>(&ns1__getRegionProvinceResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getRegionProvinceResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRegionProvinceResponse.soap_get(soap, "ns1:getRegionProvinceResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getRegionCountry_(const char *endpoint, const char *soap_action, _ns1__getRegionCountry *ns1__getRegionCountry, _ns1__getRegionCountryResponse &ns1__getRegionCountryResponse)
{	struct soap *soap = this;
	struct __ns1__getRegionCountry_ soap_tmp___ns1__getRegionCountry_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getRegionCountry";
	soap_tmp___ns1__getRegionCountry_.ns1__getRegionCountry = ns1__getRegionCountry;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getRegionCountry_(soap, &soap_tmp___ns1__getRegionCountry_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getRegionCountry_(soap, &soap_tmp___ns1__getRegionCountry_, "-ns1:getRegionCountry", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getRegionCountry_(soap, &soap_tmp___ns1__getRegionCountry_, "-ns1:getRegionCountry", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getRegionCountryResponse*>(&ns1__getRegionCountryResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getRegionCountryResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getRegionCountryResponse.soap_get(soap, "ns1:getRegionCountryResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getSupportCityDataset_(const char *endpoint, const char *soap_action, _ns1__getSupportCityDataset *ns1__getSupportCityDataset, _ns1__getSupportCityDatasetResponse &ns1__getSupportCityDatasetResponse)
{	struct soap *soap = this;
	struct __ns1__getSupportCityDataset_ soap_tmp___ns1__getSupportCityDataset_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCityDataset";
	soap_tmp___ns1__getSupportCityDataset_.ns1__getSupportCityDataset = ns1__getSupportCityDataset;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportCityDataset_(soap, &soap_tmp___ns1__getSupportCityDataset_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportCityDataset_(soap, &soap_tmp___ns1__getSupportCityDataset_, "-ns1:getSupportCityDataset", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportCityDataset_(soap, &soap_tmp___ns1__getSupportCityDataset_, "-ns1:getSupportCityDataset", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportCityDatasetResponse*>(&ns1__getSupportCityDatasetResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportCityDatasetResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportCityDatasetResponse.soap_get(soap, "ns1:getSupportCityDatasetResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getSupportCityString_(const char *endpoint, const char *soap_action, _ns1__getSupportCityString *ns1__getSupportCityString, _ns1__getSupportCityStringResponse &ns1__getSupportCityStringResponse)
{	struct soap *soap = this;
	struct __ns1__getSupportCityString_ soap_tmp___ns1__getSupportCityString_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getSupportCityString";
	soap_tmp___ns1__getSupportCityString_.ns1__getSupportCityString = ns1__getSupportCityString;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getSupportCityString_(soap, &soap_tmp___ns1__getSupportCityString_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getSupportCityString_(soap, &soap_tmp___ns1__getSupportCityString_, "-ns1:getSupportCityString", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getSupportCityString_(soap, &soap_tmp___ns1__getSupportCityString_, "-ns1:getSupportCityString", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getSupportCityStringResponse*>(&ns1__getSupportCityStringResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getSupportCityStringResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getSupportCityStringResponse.soap_get(soap, "ns1:getSupportCityStringResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WeatherWSSoapProxy::getWeather_(const char *endpoint, const char *soap_action, _ns1__getWeather *ns1__getWeather, _ns1__getWeatherResponse &ns1__getWeatherResponse)
{	struct soap *soap = this;
	struct __ns1__getWeather_ soap_tmp___ns1__getWeather_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ws.webxml.com.cn/WebServices/WeatherWS.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getWeather";
	soap_tmp___ns1__getWeather_.ns1__getWeather = ns1__getWeather;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__getWeather_(soap, &soap_tmp___ns1__getWeather_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getWeather_(soap, &soap_tmp___ns1__getWeather_, "-ns1:getWeather", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getWeather_(soap, &soap_tmp___ns1__getWeather_, "-ns1:getWeather", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns1__getWeatherResponse*>(&ns1__getWeatherResponse)) // NULL ref?
		return soap_closesock(soap);
	ns1__getWeatherResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getWeatherResponse.soap_get(soap, "ns1:getWeatherResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
