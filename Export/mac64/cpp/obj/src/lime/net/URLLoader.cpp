#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_net_URLLoader_Int_Int_Void
#include <lime/app/Event_lime_net_URLLoader_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_net_URLLoader_Int_Void
#include <lime/app/Event_lime_net_URLLoader_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_net_URLLoader_String_Void
#include <lime/app/Event_lime_net_URLLoader_String_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_net_URLLoader_Void
#include <lime/app/Event_lime_net_URLLoader_Void.h>
#endif
#ifndef INCLUDED_lime_net_URLLoader
#include <lime/net/URLLoader.h>
#endif
#ifndef INCLUDED_lime_net_URLLoaderDataFormat
#include <lime/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_lime_net_URLRequest
#include <lime/net/URLRequest.h>
#endif
#ifndef INCLUDED_lime_net_URLRequestHeader
#include <lime/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net_URLVariables
#include <lime/net/URLVariables.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace net{

Void URLLoader_obj::__construct(::lime::net::URLRequest request)
{
HX_STACK_FRAME("lime.net.URLLoader","new",0x8339d34a,"lime.net.URLLoader.new","lime/net/URLLoader.hx",24,0x97edf2e8)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(36)
	this->onSecurityError = ::lime::app::Event_lime_net_URLLoader_String_Void_obj::__new();
	HX_STACK_LINE(35)
	this->onProgress = ::lime::app::Event_lime_net_URLLoader_Int_Int_Void_obj::__new();
	HX_STACK_LINE(34)
	this->onOpen = ::lime::app::Event_lime_net_URLLoader_Void_obj::__new();
	HX_STACK_LINE(33)
	this->onIOError = ::lime::app::Event_lime_net_URLLoader_String_Void_obj::__new();
	HX_STACK_LINE(32)
	this->onHTTPStatus = ::lime::app::Event_lime_net_URLLoader_Int_Void_obj::__new();
	HX_STACK_LINE(31)
	this->onComplete = ::lime::app::Event_lime_net_URLLoader_Void_obj::__new();
	HX_STACK_LINE(45)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(46)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(47)
	this->set_dataFormat(::lime::net::URLLoaderDataFormat_obj::TEXT);
	HX_STACK_LINE(50)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	this->__data = tmp;
	HX_STACK_LINE(51)
	Float tmp1 = ::lime::net::curl::CURLEasy_obj::init();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	this->__curl = tmp1;
	HX_STACK_LINE(54)
	bool tmp2 = (request != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	if ((tmp2)){
		HX_STACK_LINE(56)
		::lime::net::URLRequest tmp3 = request;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		this->load(tmp3);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::lime::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(request);
	return _result_;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("lime.net.URLLoader","close",0xd2ff2922,"lime.net.URLLoader.close","lime/net/URLLoader.hx",63,0x97edf2e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		Float tmp = this->__curl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::lime::net::curl::CURLEasy_obj::cleanup(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

HX_BEGIN_DEFAULT_FUNC(__default_getData,URLLoader_obj)
Dynamic run(){
	HX_STACK_FRAME("lime.net.URLLoader","getData",0x8bb8c5ca,"lime.net.URLLoader.getData","lime/net/URLLoader.hx",74,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return null();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Void URLLoader_obj::load( ::lime::net::URLRequest request){
{
		HX_STACK_FRAME("lime.net.URLLoader","load",0x4e1423fc,"lime.net.URLLoader.load","lime/net/URLLoader.hx",79,0x97edf2e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(84)
		::String tmp = request->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		::String tmp1 = request->method;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		Dynamic tmp2 = request->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		this->requestUrl(tmp,tmp1,tmp2,request->formatRequestHeaders());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

::lime::utils::ByteArray URLLoader_obj::prepareData( Dynamic data){
	HX_STACK_FRAME("lime.net.URLLoader","prepareData",0x7930e03b,"lime.net.URLLoader.prepareData","lime/net/URLLoader.hx",254,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(256)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::lime::utils::ByteArray uri = tmp;		HX_STACK_VAR(uri,"uri");
	HX_STACK_LINE(257)
	Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::lime::utils::ByteArray >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(257)
	if ((tmp2)){
		HX_STACK_LINE(259)
		::lime::utils::ByteArray data1 = ((::lime::utils::ByteArray)(data));		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(260)
		uri = data1;
	}
	else{
		HX_STACK_LINE(262)
		Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::lime::net::URLVariables >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		if ((tmp4)){
			HX_STACK_LINE(264)
			::lime::net::URLVariables data1 = ((::lime::net::URLVariables)(data));		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(265)
			::String tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(266)
				::lime::net::URLVariables tmp6 = data1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp6);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(266)
				while((true)){
					HX_STACK_LINE(266)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(266)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(266)
					if ((tmp8)){
						HX_STACK_LINE(266)
						break;
					}
					HX_STACK_LINE(266)
					::String tmp9 = _g1->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(266)
					::String p = tmp9;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(266)
					++(_g);
					HX_STACK_LINE(268)
					bool tmp10 = (tmp5.length != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(268)
					if ((tmp10)){
						HX_STACK_LINE(268)
						hx::AddEq(tmp5,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(269)
					::String tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(269)
					::String tmp12 = ::StringTools_obj::urlEncode(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(269)
					::String tmp13 = (tmp12 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(269)
					::lime::net::URLVariables tmp14 = data1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(269)
					::String tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(269)
					Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(269)
					::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(269)
					::String tmp18 = ::StringTools_obj::urlEncode(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(269)
					::String tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(269)
					hx::AddEq(tmp5,tmp19);
				}
			}
			HX_STACK_LINE(273)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			uri->writeUTFBytes(tmp6);
		}
		else{
			HX_STACK_LINE(278)
			bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(278)
			if ((tmp5)){
				HX_STACK_LINE(280)
				Dynamic tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				uri->writeUTFBytes(tmp7);
			}
		}
	}
	HX_STACK_LINE(286)
	::lime::utils::ByteArray tmp3 = uri;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,prepareData,return )

Void URLLoader_obj::requestUrl( ::String url,::String method,Dynamic data,Array< ::Dynamic > requestHeaders){
{
		HX_STACK_FRAME("lime.net.URLLoader","requestUrl",0xf3e3cdb6,"lime.net.URLLoader.requestUrl","lime/net/URLLoader.hx",290,0x97edf2e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(method,"method")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(requestHeaders,"requestHeaders")
		HX_STACK_LINE(292)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		::lime::utils::ByteArray tmp1 = this->prepareData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		::lime::utils::ByteArray uri = tmp1;		HX_STACK_VAR(uri,"uri");
		HX_STACK_LINE(293)
		uri->position = (int)0;
		HX_STACK_LINE(295)
		::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		this->__data = tmp2;
		HX_STACK_LINE(296)
		this->bytesLoaded = (int)0;
		HX_STACK_LINE(297)
		this->bytesTotal = (int)0;
		HX_STACK_LINE(299)
		Float tmp3 = this->__curl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		::lime::net::curl::CURLEasy_obj::reset(tmp3);
		HX_STACK_LINE(300)
		Float tmp4 = this->__curl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(300)
		::String tmp5 = url;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(300)
		::lime::net::curl::CURLEasy_obj::setopt(tmp4,(int)10002,tmp5);
		HX_STACK_LINE(302)
		::String tmp6 = method;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"))){
			HX_STACK_LINE(304)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(304)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)44,true);
		}
		else if (  ( _switch_1==HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"))){
			HX_STACK_LINE(306)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)80,true);
			HX_STACK_LINE(307)
			bool tmp8 = (uri->length > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			if ((tmp8)){
				HX_STACK_LINE(307)
				Float tmp9 = this->__curl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				::String tmp10 = (url + HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(307)
				int tmp11 = uri->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(307)
				::String tmp12 = uri->readUTFBytes(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(307)
				::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(307)
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)10002,tmp13);
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"))){
			HX_STACK_LINE(309)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)47,true);
			HX_STACK_LINE(310)
			Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(310)
			Dynamic tmp9 = this->readFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(310)
			::lime::utils::ByteArray tmp10 = uri;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(310)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(310)
				::lime::utils::ByteArray a2 = tmp10;		HX_STACK_VAR(a2,"a2");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::lime::utils::ByteArray,a2)
				int __ArgCount() const { return 1; }
				::haxe::io::Bytes run(int a1){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/net/URLLoader.hx",310,0x97edf2e8)
					HX_STACK_ARG(a1,"a1")
					{
						HX_STACK_LINE(310)
						int tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(310)
						::lime::utils::ByteArray tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(310)
						::haxe::io::Bytes tmp14 = f(tmp12,tmp13).Cast< ::haxe::io::Bytes >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(310)
						return tmp14;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(310)
				tmp11 =  Dynamic(new _Function_3_1(f,a2));
			}
			HX_STACK_LINE(310)
			::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20012,tmp11);
			HX_STACK_LINE(311)
			Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(311)
			int tmp13 = uri->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(311)
			::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)60,tmp13);
			HX_STACK_LINE(312)
			Float tmp14 = this->__curl;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(312)
			int tmp15 = uri->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(312)
			::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)14,tmp15);
		}
		else if (  ( _switch_1==HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"))){
			HX_STACK_LINE(314)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(314)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)46,true);
			HX_STACK_LINE(315)
			Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(315)
			Dynamic tmp9 = this->readFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(315)
			::lime::utils::ByteArray tmp10 = uri;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(315)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(315)
				Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(315)
				::lime::utils::ByteArray a2 = tmp10;		HX_STACK_VAR(a2,"a2");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::lime::utils::ByteArray,a2)
				int __ArgCount() const { return 1; }
				::haxe::io::Bytes run(int a1){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/net/URLLoader.hx",315,0x97edf2e8)
					HX_STACK_ARG(a1,"a1")
					{
						HX_STACK_LINE(315)
						int tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(315)
						::lime::utils::ByteArray tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(315)
						::haxe::io::Bytes tmp14 = f(tmp12,tmp13).Cast< ::haxe::io::Bytes >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(315)
						return tmp14;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(315)
				tmp11 =  Dynamic(new _Function_3_1(f,a2));
			}
			HX_STACK_LINE(315)
			::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20012,tmp11);
			HX_STACK_LINE(316)
			Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(316)
			int tmp13 = uri->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(316)
			::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)14,tmp13);
		}
		else  {
			HX_STACK_LINE(318)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			Dynamic tmp8 = ((Dynamic)(method));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(318)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)10036,tmp8);
			HX_STACK_LINE(319)
			Float tmp9 = this->__curl;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(319)
			Dynamic tmp10 = this->readFunction_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(319)
			::lime::utils::ByteArray tmp11 = uri;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(319)
			Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(319)
				::lime::utils::ByteArray a2 = tmp11;		HX_STACK_VAR(a2,"a2");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::lime::utils::ByteArray,a2)
				int __ArgCount() const { return 1; }
				::haxe::io::Bytes run(int a1){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/net/URLLoader.hx",319,0x97edf2e8)
					HX_STACK_ARG(a1,"a1")
					{
						HX_STACK_LINE(319)
						int tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(319)
						::lime::utils::ByteArray tmp14 = a2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(319)
						::haxe::io::Bytes tmp15 = f(tmp13,tmp14).Cast< ::haxe::io::Bytes >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(319)
						return tmp15;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(319)
				tmp12 =  Dynamic(new _Function_3_1(f,a2));
			}
			HX_STACK_LINE(319)
			::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)20012,tmp12);
			HX_STACK_LINE(320)
			Float tmp13 = this->__curl;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(320)
			int tmp14 = uri->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(320)
			::lime::net::curl::CURLEasy_obj::setopt(tmp13,(int)14,tmp14);
		}
;
;
		HX_STACK_LINE(323)
		Array< ::String > headers = Array_obj< ::String >::__new();		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(324)
		headers->push(HX_HCSTRING("Expect: ","\xdf","\xc4","\xe1","\x19"));
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(325)
			while((true)){
				HX_STACK_LINE(325)
				bool tmp7 = (_g < requestHeaders->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(325)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(325)
				if ((tmp8)){
					HX_STACK_LINE(325)
					break;
				}
				HX_STACK_LINE(325)
				::lime::net::URLRequestHeader tmp9 = requestHeaders->__get(_g).StaticCast< ::lime::net::URLRequestHeader >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(325)
				::lime::net::URLRequestHeader requestHeader = tmp9;		HX_STACK_VAR(requestHeader,"requestHeader");
				HX_STACK_LINE(325)
				++(_g);
				HX_STACK_LINE(327)
				::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + requestHeader->name);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(327)
				::String tmp11 = (tmp10 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(327)
				::String tmp12 = requestHeader->value;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(327)
				::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(327)
				headers->push(tmp13);
			}
		}
		HX_STACK_LINE(331)
		Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(331)
		::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)10023,headers);
		HX_STACK_LINE(333)
		Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(333)
		Dynamic tmp9 = this->progressFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(333)
		::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20056,tmp9);
		HX_STACK_LINE(335)
		Float tmp10 = this->__curl;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(335)
		Dynamic tmp11 = this->writeFunction_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(335)
		::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)20011,tmp11);
		HX_STACK_LINE(336)
		Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(336)
		Dynamic tmp13 = this->headerFunction_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(336)
		::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)20079,tmp13);
		HX_STACK_LINE(338)
		Float tmp14 = this->__curl;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(338)
		::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)64,false);
		HX_STACK_LINE(339)
		Float tmp15 = this->__curl;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(339)
		::lime::net::curl::CURLEasy_obj::setopt(tmp15,(int)81,false);
		HX_STACK_LINE(340)
		Float tmp16 = this->__curl;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(340)
		::lime::net::curl::CURLEasy_obj::setopt(tmp16,(int)10018,HX_HCSTRING("libcurl-agent/1.0","\x4d","\x41","\xcc","\xd3"));
		HX_STACK_LINE(341)
		Float tmp17 = this->__curl;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(341)
		::lime::net::curl::CURLEasy_obj::setopt(tmp17,(int)78,(int)30);
		HX_STACK_LINE(343)
		Float tmp18 = this->__curl;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(343)
		int tmp19 = ::lime::net::curl::CURLEasy_obj::perform(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(343)
		int result = tmp19;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(346)
		Float tmp20 = this->__curl;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(346)
		Dynamic tmp21 = ::lime::net::curl::CURLEasy_obj::getinfo(tmp20,(int)2097154);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(346)
		::String responseCode = tmp21;		HX_STACK_VAR(responseCode,"responseCode");
		HX_STACK_LINE(348)
		bool tmp22 = (result == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(348)
		if ((tmp22)){
			HX_STACK_LINE(356)
			::lime::utils::ByteArray tmp23 = this->__data;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(356)
			tmp23->position = (int)0;
			HX_STACK_LINE(357)
			::lime::utils::ByteArray tmp24 = this->__data;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(357)
			::lime::utils::ByteArray tmp25 = this->__data;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(357)
			int tmp26 = tmp25->length;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(357)
			::String tmp27 = tmp24->readUTFBytes(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(357)
			this->data = tmp27;
			HX_STACK_LINE(358)
			::lime::app::Event_lime_net_URLLoader_Int_Void tmp28 = this->onHTTPStatus;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(358)
			::String tmp29 = responseCode;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(358)
			Dynamic tmp30 = ::Std_obj::parseInt(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(358)
			tmp28->dispatch(hx::ObjectPtr<OBJ_>(this),tmp30);
			HX_STACK_LINE(359)
			::lime::app::Event_lime_net_URLLoader_Void tmp31 = this->onComplete;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(359)
			tmp31->dispatch(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(361)
			::lime::app::Event_lime_net_URLLoader_String_Void tmp23 = this->onIOError;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(361)
			::String tmp24 = (HX_HCSTRING("Problem with curl: ","\x0b","\xcd","\x8d","\x69") + result);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(361)
			tmp23->dispatch(hx::ObjectPtr<OBJ_>(this),tmp24);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,requestUrl,(void))

int URLLoader_obj::writeFunction( ::haxe::io::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("lime.net.URLLoader","writeFunction",0xbe7ed681,"lime.net.URLLoader.writeFunction","lime/net/URLLoader.hx",366,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(368)
	::lime::utils::ByteArray tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	::haxe::io::Bytes tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	tmp->writeBytes(tmp2,null(),null());
	HX_STACK_LINE(369)
	int tmp3 = (size * nmemb);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(369)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,writeFunction,return )

int URLLoader_obj::headerFunction( ::haxe::io::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("lime.net.URLLoader","headerFunction",0x695bb71b,"lime.net.URLLoader.headerFunction","lime/net/URLLoader.hx",373,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(376)
	int tmp = (size * nmemb);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,headerFunction,return )

int URLLoader_obj::progressFunction( Float dltotal,Float dlnow,Float uptotal,Float upnow){
	HX_STACK_FRAME("lime.net.URLLoader","progressFunction",0x9a1146bb,"lime.net.URLLoader.progressFunction","lime/net/URLLoader.hx",380,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dltotal,"dltotal")
	HX_STACK_ARG(dlnow,"dlnow")
	HX_STACK_ARG(uptotal,"uptotal")
	HX_STACK_ARG(upnow,"upnow")
	HX_STACK_LINE(382)
	Float tmp = upnow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	int tmp1 = this->bytesLoaded;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(382)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(382)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(382)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(382)
	if ((tmp4)){
		HX_STACK_LINE(382)
		Float tmp6 = dlnow;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		int tmp7 = this->bytesLoaded;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(382)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(382)
		tmp5 = (tmp6 > tmp9);
	}
	else{
		HX_STACK_LINE(382)
		tmp5 = true;
	}
	HX_STACK_LINE(382)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(382)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(382)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(382)
	if ((tmp7)){
		HX_STACK_LINE(382)
		Float tmp9 = uptotal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(382)
		int tmp10 = this->bytesTotal;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(382)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(382)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(382)
		tmp8 = (tmp9 > tmp12);
	}
	else{
		HX_STACK_LINE(382)
		tmp8 = true;
	}
	HX_STACK_LINE(382)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(382)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(382)
	if ((tmp9)){
		HX_STACK_LINE(382)
		Float tmp11 = dltotal;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(382)
		int tmp12 = this->bytesTotal;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(382)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(382)
		tmp10 = (tmp11 > tmp13);
	}
	else{
		HX_STACK_LINE(382)
		tmp10 = true;
	}
	HX_STACK_LINE(382)
	if ((tmp10)){
		HX_STACK_LINE(383)
		Float tmp11 = upnow;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(383)
		int tmp12 = this->bytesLoaded;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(383)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(383)
		if ((tmp13)){
			HX_STACK_LINE(383)
			Float tmp14 = upnow;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(383)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(383)
			this->bytesLoaded = tmp15;
		}
		HX_STACK_LINE(384)
		Float tmp14 = dlnow;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(384)
		int tmp15 = this->bytesLoaded;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(384)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(384)
		if ((tmp16)){
			HX_STACK_LINE(384)
			Float tmp17 = dlnow;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(384)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(384)
			this->bytesLoaded = tmp18;
		}
		HX_STACK_LINE(385)
		Float tmp17 = uptotal;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(385)
		int tmp18 = this->bytesTotal;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(385)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(385)
		if ((tmp19)){
			HX_STACK_LINE(385)
			Float tmp20 = uptotal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(385)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(385)
			this->bytesTotal = tmp21;
		}
		HX_STACK_LINE(386)
		Float tmp20 = dltotal;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(386)
		int tmp21 = this->bytesTotal;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(386)
		bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(386)
		if ((tmp22)){
			HX_STACK_LINE(386)
			Float tmp23 = dltotal;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(386)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(386)
			this->bytesTotal = tmp24;
		}
		HX_STACK_LINE(387)
		::lime::app::Event_lime_net_URLLoader_Int_Int_Void tmp23 = this->onProgress;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(387)
		int tmp24 = this->bytesLoaded;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(387)
		int tmp25 = this->bytesTotal;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(387)
		tmp23->dispatch(hx::ObjectPtr<OBJ_>(this),tmp24,tmp25);
	}
	HX_STACK_LINE(389)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,progressFunction,return )

::haxe::io::Bytes URLLoader_obj::readFunction( int max,::lime::utils::ByteArray input){
	HX_STACK_FRAME("lime.net.URLLoader","readFunction",0x98e34864,"lime.net.URLLoader.readFunction","lime/net/URLLoader.hx",392,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(393)
	::lime::utils::ByteArray tmp = input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,readFunction,return )

Void URLLoader_obj::__onData( Dynamic _){
{
		HX_STACK_FRAME("lime.net.URLLoader","__onData",0x0eb1f6df,"lime.net.URLLoader.__onData","lime/net/URLLoader.hx",406,0x97edf2e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(419)
		::lime::app::Event_lime_net_URLLoader_Void tmp = this->onComplete;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		tmp->dispatch(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,__onData,(void))

Void URLLoader_obj::__onProgress( Dynamic event){
{
		HX_STACK_FRAME("lime.net.URLLoader","__onProgress",0xe5d096e2,"lime.net.URLLoader.__onProgress","lime/net/URLLoader.hx",424,0x97edf2e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(426)
		this->bytesLoaded = event->__Field(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"), hx::paccDynamic );
		HX_STACK_LINE(427)
		this->bytesTotal = event->__Field(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"), hx::paccDynamic );
		HX_STACK_LINE(429)
		::lime::app::Event_lime_net_URLLoader_Int_Int_Void tmp = this->onProgress;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		int tmp1 = this->bytesLoaded;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		int tmp2 = this->bytesTotal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(429)
		tmp->dispatch(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,__onProgress,(void))

::lime::net::URLLoaderDataFormat URLLoader_obj::set_dataFormat( ::lime::net::URLLoaderDataFormat inputVal){
	HX_STACK_FRAME("lime.net.URLLoader","set_dataFormat",0x51f53714,"lime.net.URLLoader.set_dataFormat","lime/net/URLLoader.hx",442,0x97edf2e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inputVal,"inputVal")
	HX_STACK_LINE(460)
	::lime::net::URLLoaderDataFormat tmp = inputVal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,set_dataFormat,return )


URLLoader_obj::URLLoader_obj()
{
	getData = new __default_getData(this);
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onHTTPStatus,"onHTTPStatus");
	HX_MARK_MEMBER_NAME(onIOError,"onIOError");
	HX_MARK_MEMBER_NAME(onOpen,"onOpen");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(onSecurityError,"onSecurityError");
	HX_MARK_MEMBER_NAME(__curl,"__curl");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(getData,"getData");
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onHTTPStatus,"onHTTPStatus");
	HX_VISIT_MEMBER_NAME(onIOError,"onIOError");
	HX_VISIT_MEMBER_NAME(onOpen,"onOpen");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(onSecurityError,"onSecurityError");
	HX_VISIT_MEMBER_NAME(__curl,"__curl");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(getData,"getData");
}

Dynamic URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onOpen") ) { return onOpen; }
		if (HX_FIELD_EQ(inName,"__curl") ) { return __curl; }
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__onData") ) { return __onData_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onIOError") ) { return onIOError; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		if (HX_FIELD_EQ(inName,"requestUrl") ) { return requestUrl_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"prepareData") ) { return prepareData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onHTTPStatus") ) { return onHTTPStatus; }
		if (HX_FIELD_EQ(inName,"readFunction") ) { return readFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"__onProgress") ) { return __onProgress_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeFunction") ) { return writeFunction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headerFunction") ) { return headerFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataFormat") ) { return set_dataFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSecurityError") ) { return onSecurityError; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"progressFunction") ) { return progressFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onOpen") ) { onOpen=inValue.Cast< ::lime::app::Event_lime_net_URLLoader_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__curl") ) { __curl=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { getData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onIOError") ) { onIOError=inValue.Cast< ::lime::app::Event_lime_net_URLLoader_String_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { if (inCallProp == hx::paccAlways) return set_dataFormat(inValue);dataFormat=inValue.Cast< ::lime::net::URLLoaderDataFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event_lime_net_URLLoader_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::lime::app::Event_lime_net_URLLoader_Int_Int_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onHTTPStatus") ) { onHTTPStatus=inValue.Cast< ::lime::app::Event_lime_net_URLLoader_Int_Void >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSecurityError") ) { onSecurityError=inValue.Cast< ::lime::app::Event_lime_net_URLLoader_String_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onHTTPStatus","\xb9","\xb2","\x8d","\x2b"));
	outFields->push(HX_HCSTRING("onIOError","\xc3","\x2a","\x81","\x82"));
	outFields->push(HX_HCSTRING("onOpen","\x89","\x0c","\x3e","\xec"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	outFields->push(HX_HCSTRING("onSecurityError","\x49","\x90","\x00","\x2a"));
	outFields->push(HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::lime::net::URLLoaderDataFormat*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsObject /*::lime::app::Event_lime_net_URLLoader_Void*/ ,(int)offsetof(URLLoader_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::Event_lime_net_URLLoader_Int_Void*/ ,(int)offsetof(URLLoader_obj,onHTTPStatus),HX_HCSTRING("onHTTPStatus","\xb9","\xb2","\x8d","\x2b")},
	{hx::fsObject /*::lime::app::Event_lime_net_URLLoader_String_Void*/ ,(int)offsetof(URLLoader_obj,onIOError),HX_HCSTRING("onIOError","\xc3","\x2a","\x81","\x82")},
	{hx::fsObject /*::lime::app::Event_lime_net_URLLoader_Void*/ ,(int)offsetof(URLLoader_obj,onOpen),HX_HCSTRING("onOpen","\x89","\x0c","\x3e","\xec")},
	{hx::fsObject /*::lime::app::Event_lime_net_URLLoader_Int_Int_Void*/ ,(int)offsetof(URLLoader_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{hx::fsObject /*::lime::app::Event_lime_net_URLLoader_String_Void*/ ,(int)offsetof(URLLoader_obj,onSecurityError),HX_HCSTRING("onSecurityError","\x49","\x90","\x00","\x2a")},
	{hx::fsFloat,(int)offsetof(URLLoader_obj,__curl),HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(URLLoader_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,getData),HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onHTTPStatus","\xb9","\xb2","\x8d","\x2b"),
	HX_HCSTRING("onIOError","\xc3","\x2a","\x81","\x82"),
	HX_HCSTRING("onOpen","\x89","\x0c","\x3e","\xec"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("onSecurityError","\x49","\x90","\x00","\x2a"),
	HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("prepareData","\x51","\xe3","\xce","\xec"),
	HX_HCSTRING("requestUrl","\x60","\x3f","\x09","\x01"),
	HX_HCSTRING("writeFunction","\x17","\x4b","\xf4","\xd7"),
	HX_HCSTRING("headerFunction","\xc5","\x45","\xac","\x96"),
	HX_HCSTRING("progressFunction","\xe5","\x53","\xa2","\x27"),
	HX_HCSTRING("readFunction","\x8e","\xf8","\x87","\x4f"),
	HX_HCSTRING("__onData","\x09","\xca","\x1c","\x8d"),
	HX_HCSTRING("__onProgress","\x0c","\x47","\x75","\x9c"),
	HX_HCSTRING("set_dataFormat","\xbe","\xc5","\x45","\x7f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
};

#endif

hx::Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.URLLoader","\x58","\x26","\x30","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
