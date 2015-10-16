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
#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif
#ifndef INCLUDED_lime_system_BackgroundWorker
#include <lime/system/BackgroundWorker.h>
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
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoaderDataFormat
#include <openfl/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace net{

Void URLLoader_obj::__construct(::openfl::net::URLRequest request)
{
HX_STACK_FRAME("openfl.net.URLLoader","new",0xb8a6da85,"openfl.net.URLLoader.new","openfl/net/URLLoader.hx",178,0x11daec0d)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(180)
	super::__construct(null());
	HX_STACK_LINE(182)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(183)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(184)
	this->set_dataFormat(::openfl::net::URLLoaderDataFormat_obj::TEXT);
	HX_STACK_LINE(187)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	this->__data = tmp;
	HX_STACK_LINE(188)
	Float tmp1 = ::lime::net::curl::CURLEasy_obj::init();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	this->__curl = tmp1;
	HX_STACK_LINE(191)
	bool tmp2 = (request != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	if ((tmp2)){
		HX_STACK_LINE(193)
		::openfl::net::URLRequest tmp3 = request;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		this->load(tmp3);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::openfl::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(request);
	return _result_;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("openfl.net.URLLoader","close",0x0328b51d,"openfl.net.URLLoader.close","openfl/net/URLLoader.hx",206,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		Float tmp = this->__curl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::lime::net::curl::CURLEasy_obj::cleanup(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

HX_BEGIN_DEFAULT_FUNC(__default_getData,URLLoader_obj)
Dynamic run(){
	HX_STACK_FRAME("openfl.net.URLLoader","getData",0x42598685,"openfl.net.URLLoader.getData","openfl/net/URLLoader.hx",217,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	return null();
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Void URLLoader_obj::load( ::openfl::net::URLRequest request){
{
		HX_STACK_FRAME("openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",323,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(323)
		::openfl::net::URLLoader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		bool tmp = (request->url != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		if ((tmp1)){
			HX_STACK_LINE(328)
			int tmp3 = request->url.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(328)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(328)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(328)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(328)
			tmp2 = (tmp5 == tmp8);
		}
		else{
			HX_STACK_LINE(328)
			tmp2 = false;
		}
		HX_STACK_LINE(328)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		if ((tmp2)){
			HX_STACK_LINE(328)
			int tmp4 = request->url.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(328)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			tmp3 = (tmp5 == (int)-1);
		}
		else{
			HX_STACK_LINE(328)
			tmp3 = false;
		}
		HX_STACK_LINE(328)
		if ((tmp3)){
			HX_STACK_LINE(330)
			::lime::_system::BackgroundWorker tmp4 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			::lime::_system::BackgroundWorker worker = tmp4;		HX_STACK_VAR(worker,"worker");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::_system::BackgroundWorker,worker,::openfl::net::URLRequest,request)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/net/URLLoader.hx",331,0x11daec0d)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(333)
					::String path = request->url;		HX_STACK_VAR(path,"path");
					HX_STACK_LINE(334)
					int tmp5 = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(334)
					int index = tmp5;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(336)
					bool tmp6 = (index > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(336)
					if ((tmp6)){
						HX_STACK_LINE(338)
						int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(338)
						::String tmp8 = path.substring((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(338)
						path = tmp8;
					}
					HX_STACK_LINE(342)
					::String tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(342)
					::lime::utils::ByteArray tmp8 = ::lime::utils::ByteArray_obj::readFile(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(342)
					::lime::utils::ByteArray bytes = tmp8;		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(343)
					::lime::utils::ByteArray tmp9 = bytes;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(343)
					worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp9);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(331)
			worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_1(worker,request)),null(),null());

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::openfl::net::URLLoader,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic bytes){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","openfl/net/URLLoader.hx",346,0x11daec0d)
				HX_STACK_ARG(bytes,"bytes")
				{
					HX_STACK_LINE(348)
					{
						HX_STACK_LINE(348)
						::openfl::net::URLLoaderDataFormat _g1 = _g->dataFormat;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(348)
						switch( (int)(_g1->__Index())){
							case (int)0: {
								HX_STACK_LINE(350)
								_g->data = bytes;
							}
							;break;
							default: {
								HX_STACK_LINE(351)
								Dynamic tmp5 = bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(351)
								Dynamic tmp6 = bytes->__Field(HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"), hx::paccDynamic )(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(351)
								_g->data = tmp6;
							}
						}
					}
					HX_STACK_LINE(355)
					::String tmp5 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(355)
					::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(355)
					::openfl::events::Event evt = tmp6;		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(356)
					evt->currentTarget = _g;
					HX_STACK_LINE(357)
					::openfl::events::Event tmp7 = evt;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(357)
					_g->dispatchEvent(tmp7);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(346)
			worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_2(_g)),null(),null());
			HX_STACK_LINE(360)
			worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
		}
		else{
			HX_STACK_LINE(366)
			::String tmp4 = request->url;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(366)
			::String tmp5 = request->method;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(366)
			Dynamic tmp6 = request->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(366)
			this->requestUrl(tmp4,tmp5,tmp6,request->formatRequestHeaders());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

::lime::utils::ByteArray URLLoader_obj::prepareData( Dynamic data){
	HX_STACK_FRAME("openfl.net.URLLoader","prepareData",0x9b201a76,"openfl.net.URLLoader.prepareData","openfl/net/URLLoader.hx",541,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(543)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(543)
	::lime::utils::ByteArray uri = tmp;		HX_STACK_VAR(uri,"uri");
	HX_STACK_LINE(545)
	Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(545)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::lime::utils::ByteArray >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(545)
	if ((tmp2)){
		HX_STACK_LINE(547)
		::lime::utils::ByteArray data1 = ((::lime::utils::ByteArray)(data));		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(548)
		uri = data1;
	}
	else{
		HX_STACK_LINE(550)
		Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(550)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::net::URLVariables >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(550)
		if ((tmp4)){
			HX_STACK_LINE(552)
			::openfl::net::URLVariables data1 = ((::openfl::net::URLVariables)(data));		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(553)
			::String tmp5 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(555)
			{
				HX_STACK_LINE(555)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(555)
				::openfl::net::URLVariables tmp6 = data1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(555)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp6);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(555)
				while((true)){
					HX_STACK_LINE(555)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(555)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(555)
					if ((tmp8)){
						HX_STACK_LINE(555)
						break;
					}
					HX_STACK_LINE(555)
					::String tmp9 = _g1->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(555)
					::String p = tmp9;		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(555)
					++(_g);
					HX_STACK_LINE(557)
					bool tmp10 = (tmp5.length != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(557)
					if ((tmp10)){
						HX_STACK_LINE(557)
						hx::AddEq(tmp5,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(558)
					::String tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(558)
					::String tmp12 = ::StringTools_obj::urlEncode(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(558)
					::String tmp13 = (tmp12 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(558)
					::openfl::net::URLVariables tmp14 = data1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(558)
					::String tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(558)
					Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(558)
					::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(558)
					::String tmp18 = ::StringTools_obj::urlEncode(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(558)
					::String tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(558)
					hx::AddEq(tmp5,tmp19);
				}
			}
			HX_STACK_LINE(562)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(562)
			uri->writeUTFBytes(tmp6);
		}
		else{
			HX_STACK_LINE(566)
			bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(566)
			if ((tmp5)){
				HX_STACK_LINE(568)
				Dynamic tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(568)
				::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(568)
				uri->writeUTFBytes(tmp7);
			}
		}
	}
	HX_STACK_LINE(574)
	::lime::utils::ByteArray tmp3 = uri;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(574)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,prepareData,return )

Void URLLoader_obj::requestUrl( ::String url,::String method,Dynamic data,Array< ::Dynamic > requestHeaders){
{
		HX_STACK_FRAME("openfl.net.URLLoader","requestUrl",0x85d5f3db,"openfl.net.URLLoader.requestUrl","openfl/net/URLLoader.hx",579,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(method,"method")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(requestHeaders,"requestHeaders")
		HX_STACK_LINE(579)
		::openfl::net::URLLoader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(581)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(581)
		::lime::utils::ByteArray tmp1 = this->prepareData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(581)
		::lime::utils::ByteArray uri = tmp1;		HX_STACK_VAR(uri,"uri");
		HX_STACK_LINE(582)
		uri->position = (int)0;
		HX_STACK_LINE(584)
		::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		this->__data = tmp2;
		HX_STACK_LINE(585)
		this->bytesLoaded = (int)0;
		HX_STACK_LINE(586)
		this->bytesTotal = (int)0;
		HX_STACK_LINE(588)
		Float tmp3 = this->__curl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(588)
		::lime::net::curl::CURLEasy_obj::reset(tmp3);
		HX_STACK_LINE(589)
		Float tmp4 = this->__curl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(589)
		::String tmp5 = url;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(589)
		::lime::net::curl::CURLEasy_obj::setopt(tmp4,(int)10002,tmp5);
		HX_STACK_LINE(591)
		::String tmp6 = method;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(591)
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("HEAD","\x20","\xf1","\xcb","\x2f"))){
			HX_STACK_LINE(595)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(595)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)44,true);
		}
		else if (  ( _switch_1==HX_HCSTRING("GET","\x76","\x1c","\x36","\x00"))){
			HX_STACK_LINE(599)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(599)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)80,true);
			HX_STACK_LINE(601)
			bool tmp8 = (uri->length > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(601)
			if ((tmp8)){
				HX_STACK_LINE(603)
				Float tmp9 = this->__curl;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(603)
				::String tmp10 = (url + HX_HCSTRING("?","\x3f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(603)
				int tmp11 = uri->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(603)
				::String tmp12 = uri->readUTFBytes(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)10002,tmp13);
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("POST","\x60","\x4c","\x1d","\x35"))){
			HX_STACK_LINE(609)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(609)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)47,true);
			HX_STACK_LINE(610)
			Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(610)
			Dynamic tmp9 = this->readFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(610)
			::lime::utils::ByteArray tmp10 = uri;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(610)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(610)
			{
				HX_STACK_LINE(610)
				Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(610)
				::lime::utils::ByteArray a2 = tmp10;		HX_STACK_VAR(a2,"a2");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::lime::utils::ByteArray,a2)
				int __ArgCount() const { return 1; }
				::haxe::io::Bytes run(int a1){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/net/URLLoader.hx",610,0x11daec0d)
					HX_STACK_ARG(a1,"a1")
					{
						HX_STACK_LINE(610)
						int tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(610)
						::lime::utils::ByteArray tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(610)
						::haxe::io::Bytes tmp14 = f(tmp12,tmp13).Cast< ::haxe::io::Bytes >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(610)
						return tmp14;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(610)
				tmp11 =  Dynamic(new _Function_3_1(f,a2));
			}
			HX_STACK_LINE(610)
			::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20012,tmp11);
			HX_STACK_LINE(611)
			Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(611)
			int tmp13 = uri->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(611)
			::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)60,tmp13);
			HX_STACK_LINE(612)
			Float tmp14 = this->__curl;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(612)
			int tmp15 = uri->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(612)
			::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)14,tmp15);
		}
		else if (  ( _switch_1==HX_HCSTRING("PUT","\xaf","\xfe","\x3c","\x00"))){
			HX_STACK_LINE(616)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(616)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)46,true);
			HX_STACK_LINE(617)
			Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(617)
			Dynamic tmp9 = this->readFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(617)
			::lime::utils::ByteArray tmp10 = uri;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(617)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(617)
			{
				HX_STACK_LINE(617)
				Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(617)
				::lime::utils::ByteArray a2 = tmp10;		HX_STACK_VAR(a2,"a2");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::lime::utils::ByteArray,a2)
				int __ArgCount() const { return 1; }
				::haxe::io::Bytes run(int a1){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/net/URLLoader.hx",617,0x11daec0d)
					HX_STACK_ARG(a1,"a1")
					{
						HX_STACK_LINE(617)
						int tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(617)
						::lime::utils::ByteArray tmp13 = a2;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(617)
						::haxe::io::Bytes tmp14 = f(tmp12,tmp13).Cast< ::haxe::io::Bytes >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(617)
						return tmp14;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(617)
				tmp11 =  Dynamic(new _Function_3_1(f,a2));
			}
			HX_STACK_LINE(617)
			::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20012,tmp11);
			HX_STACK_LINE(618)
			Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(618)
			int tmp13 = uri->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(618)
			::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)14,tmp13);
		}
		else  {
			HX_STACK_LINE(622)
			Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(622)
			Dynamic tmp8 = ((Dynamic)(method));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(622)
			::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)10036,tmp8);
			HX_STACK_LINE(623)
			Float tmp9 = this->__curl;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(623)
			Dynamic tmp10 = this->readFunction_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(623)
			::lime::utils::ByteArray tmp11 = uri;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(623)
			Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(623)
			{
				HX_STACK_LINE(623)
				Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(623)
				::lime::utils::ByteArray a2 = tmp11;		HX_STACK_VAR(a2,"a2");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,f,::lime::utils::ByteArray,a2)
				int __ArgCount() const { return 1; }
				::haxe::io::Bytes run(int a1){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/net/URLLoader.hx",623,0x11daec0d)
					HX_STACK_ARG(a1,"a1")
					{
						HX_STACK_LINE(623)
						int tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(623)
						::lime::utils::ByteArray tmp14 = a2;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(623)
						::haxe::io::Bytes tmp15 = f(tmp13,tmp14).Cast< ::haxe::io::Bytes >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(623)
						return tmp15;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(623)
				tmp12 =  Dynamic(new _Function_3_1(f,a2));
			}
			HX_STACK_LINE(623)
			::lime::net::curl::CURLEasy_obj::setopt(tmp9,(int)20012,tmp12);
			HX_STACK_LINE(624)
			Float tmp13 = this->__curl;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(624)
			int tmp14 = uri->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(624)
			::lime::net::curl::CURLEasy_obj::setopt(tmp13,(int)14,tmp14);
		}
;
;
		HX_STACK_LINE(628)
		Array< ::String > headers = Array_obj< ::String >::__new();		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(629)
		headers->push(HX_HCSTRING("Expect: ","\xdf","\xc4","\xe1","\x19"));
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(631)
			while((true)){
				HX_STACK_LINE(631)
				bool tmp7 = (_g1 < requestHeaders->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(631)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(631)
				if ((tmp8)){
					HX_STACK_LINE(631)
					break;
				}
				HX_STACK_LINE(631)
				::openfl::net::URLRequestHeader tmp9 = requestHeaders->__get(_g1).StaticCast< ::openfl::net::URLRequestHeader >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(631)
				::openfl::net::URLRequestHeader requestHeader = tmp9;		HX_STACK_VAR(requestHeader,"requestHeader");
				HX_STACK_LINE(631)
				++(_g1);
				HX_STACK_LINE(633)
				::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + requestHeader->name);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(633)
				::String tmp11 = (tmp10 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(633)
				::String tmp12 = requestHeader->value;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(633)
				::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(633)
				headers->push(tmp13);
			}
		}
		HX_STACK_LINE(637)
		Float tmp7 = this->__curl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(637)
		::lime::net::curl::CURLEasy_obj::setopt(tmp7,(int)10023,headers);
		HX_STACK_LINE(639)
		Float tmp8 = this->__curl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(639)
		Dynamic tmp9 = this->progressFunction_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(639)
		::lime::net::curl::CURLEasy_obj::setopt(tmp8,(int)20056,tmp9);
		HX_STACK_LINE(641)
		Float tmp10 = this->__curl;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(641)
		Dynamic tmp11 = this->writeFunction_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(641)
		::lime::net::curl::CURLEasy_obj::setopt(tmp10,(int)20011,tmp11);
		HX_STACK_LINE(642)
		Float tmp12 = this->__curl;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(642)
		Dynamic tmp13 = this->headerFunction_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(642)
		::lime::net::curl::CURLEasy_obj::setopt(tmp12,(int)20079,tmp13);
		HX_STACK_LINE(644)
		Float tmp14 = this->__curl;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(644)
		::lime::net::curl::CURLEasy_obj::setopt(tmp14,(int)64,false);
		HX_STACK_LINE(645)
		Float tmp15 = this->__curl;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(645)
		::lime::net::curl::CURLEasy_obj::setopt(tmp15,(int)81,false);
		HX_STACK_LINE(646)
		Float tmp16 = this->__curl;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(646)
		::lime::net::curl::CURLEasy_obj::setopt(tmp16,(int)10018,HX_HCSTRING("libcurl-agent/1.0","\x4d","\x41","\xcc","\xd3"));
		HX_STACK_LINE(647)
		Float tmp17 = this->__curl;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(647)
		::lime::net::curl::CURLEasy_obj::setopt(tmp17,(int)78,(int)30);
		HX_STACK_LINE(648)
		Float tmp18 = this->__curl;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(648)
		::openfl::net::URLLoaderDataFormat tmp19 = this->dataFormat;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(648)
		bool tmp20 = (tmp19 == ::openfl::net::URLLoaderDataFormat_obj::BINARY);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(648)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(648)
		if ((tmp20)){
			HX_STACK_LINE(648)
			tmp21 = (int)0;
		}
		else{
			HX_STACK_LINE(648)
			tmp21 = (int)1;
		}
		HX_STACK_LINE(648)
		::lime::net::curl::CURLEasy_obj::setopt(tmp18,(int)53,tmp21);
		HX_STACK_LINE(650)
		::lime::_system::BackgroundWorker tmp22 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(650)
		::lime::_system::BackgroundWorker worker = tmp22;		HX_STACK_VAR(worker,"worker");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::net::URLLoader,_g,::lime::_system::BackgroundWorker,worker)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/net/URLLoader.hx",651,0x11daec0d)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(653)
				Float tmp23 = _g->__curl;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(653)
				int tmp24 = ::lime::net::curl::CURLEasy_obj::perform(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(653)
				int result = tmp24;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(654)
				int tmp25 = result;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(654)
				worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp25);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(651)
		worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_1(_g,worker)),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::openfl::net::URLLoader,_g)
		int __ArgCount() const { return 1; }
		Void run(int result){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/net/URLLoader.hx",657,0x11daec0d)
			HX_STACK_ARG(result,"result")
			{
				HX_STACK_LINE(659)
				Float tmp23 = _g->__curl;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(659)
				Dynamic tmp24 = ::lime::net::curl::CURLEasy_obj::getinfo(tmp23,(int)2097154);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(659)
				::String responseCode = tmp24;		HX_STACK_VAR(responseCode,"responseCode");
				HX_STACK_LINE(661)
				bool tmp25 = (result == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(661)
				if ((tmp25)){
					HX_STACK_LINE(663)
					{
						HX_STACK_LINE(663)
						::openfl::net::URLLoaderDataFormat _g1 = _g->dataFormat;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(663)
						switch( (int)(_g1->__Index())){
							case (int)0: {
								HX_STACK_LINE(667)
								_g->data = _g->__data;
							}
							;break;
							default: {
								HX_STACK_LINE(671)
								_g->__data->position = (int)0;
								HX_STACK_LINE(672)
								int tmp26 = _g->__data->length;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(672)
								::String tmp27 = _g->__data->readUTFBytes(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(672)
								_g->data = tmp27;
							}
						}
					}
					HX_STACK_LINE(676)
					::String tmp26 = responseCode;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(676)
					Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(676)
					_g->onStatus(tmp27);
					HX_STACK_LINE(678)
					::String tmp28 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(678)
					::openfl::events::Event tmp29 = ::openfl::events::Event_obj::__new(tmp28,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(678)
					::openfl::events::Event evt = tmp29;		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(679)
					evt->currentTarget = _g;
					HX_STACK_LINE(680)
					::openfl::events::Event tmp30 = evt;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(680)
					_g->dispatchEvent(tmp30);
				}
				else{
					HX_STACK_LINE(684)
					::String tmp26 = (HX_HCSTRING("Problem with curl: ","\x0b","\xcd","\x8d","\x69") + result);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(684)
					_g->onError(tmp26);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(657)
		worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_2(_g)),null(),null());
		HX_STACK_LINE(689)
		worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,requestUrl,(void))

int URLLoader_obj::writeFunction( ::haxe::io::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("openfl.net.URLLoader","writeFunction",0xa65d557c,"openfl.net.URLLoader.writeFunction","openfl/net/URLLoader.hx",694,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(696)
	::lime::utils::ByteArray tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	::haxe::io::Bytes tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(696)
	::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(696)
	tmp->writeBytes(tmp2,null(),null());
	HX_STACK_LINE(697)
	int tmp3 = (size * nmemb);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(697)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,writeFunction,return )

int URLLoader_obj::headerFunction( ::haxe::io::Bytes output,int size,int nmemb){
	HX_STACK_FRAME("openfl.net.URLLoader","headerFunction",0x642c53c0,"openfl.net.URLLoader.headerFunction","openfl/net/URLLoader.hx",702,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(nmemb,"nmemb")
	HX_STACK_LINE(705)
	int tmp = (size * nmemb);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(705)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(URLLoader_obj,headerFunction,return )

int URLLoader_obj::progressFunction( Float dltotal,Float dlnow,Float uptotal,Float upnow){
	HX_STACK_FRAME("openfl.net.URLLoader","progressFunction",0x5fbe16a0,"openfl.net.URLLoader.progressFunction","openfl/net/URLLoader.hx",710,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dltotal,"dltotal")
	HX_STACK_ARG(dlnow,"dlnow")
	HX_STACK_ARG(uptotal,"uptotal")
	HX_STACK_ARG(upnow,"upnow")
	HX_STACK_LINE(712)
	Float tmp = upnow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(712)
	int tmp1 = this->bytesLoaded;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(712)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(712)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(712)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(712)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(712)
	if ((tmp4)){
		HX_STACK_LINE(712)
		Float tmp6 = dlnow;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(712)
		int tmp7 = this->bytesLoaded;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(712)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(712)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(712)
		tmp5 = (tmp6 > tmp9);
	}
	else{
		HX_STACK_LINE(712)
		tmp5 = true;
	}
	HX_STACK_LINE(712)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(712)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(712)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(712)
	if ((tmp7)){
		HX_STACK_LINE(712)
		Float tmp9 = uptotal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(712)
		int tmp10 = this->bytesTotal;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(712)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(712)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(712)
		tmp8 = (tmp9 > tmp12);
	}
	else{
		HX_STACK_LINE(712)
		tmp8 = true;
	}
	HX_STACK_LINE(712)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(712)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(712)
	if ((tmp9)){
		HX_STACK_LINE(712)
		Float tmp11 = dltotal;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(712)
		int tmp12 = this->bytesTotal;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(712)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(712)
		tmp10 = (tmp11 > tmp13);
	}
	else{
		HX_STACK_LINE(712)
		tmp10 = true;
	}
	HX_STACK_LINE(712)
	if ((tmp10)){
		HX_STACK_LINE(714)
		Float tmp11 = upnow;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(714)
		int tmp12 = this->bytesLoaded;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(714)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(714)
		if ((tmp13)){
			HX_STACK_LINE(714)
			Float tmp14 = upnow;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(714)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(714)
			this->bytesLoaded = tmp15;
		}
		HX_STACK_LINE(715)
		Float tmp14 = dlnow;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(715)
		int tmp15 = this->bytesLoaded;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(715)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(715)
		if ((tmp16)){
			HX_STACK_LINE(715)
			Float tmp17 = dlnow;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(715)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(715)
			this->bytesLoaded = tmp18;
		}
		HX_STACK_LINE(716)
		Float tmp17 = uptotal;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(716)
		int tmp18 = this->bytesTotal;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(716)
		bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(716)
		if ((tmp19)){
			HX_STACK_LINE(716)
			Float tmp20 = uptotal;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(716)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(716)
			this->bytesTotal = tmp21;
		}
		HX_STACK_LINE(717)
		Float tmp20 = dltotal;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(717)
		int tmp21 = this->bytesTotal;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(717)
		bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(717)
		if ((tmp22)){
			HX_STACK_LINE(717)
			Float tmp23 = dltotal;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(717)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(717)
			this->bytesTotal = tmp24;
		}
		HX_STACK_LINE(719)
		::String tmp23 = ::openfl::events::ProgressEvent_obj::PROGRESS;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(719)
		::openfl::events::ProgressEvent tmp24 = ::openfl::events::ProgressEvent_obj::__new(tmp23,null(),null(),null(),null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(719)
		::openfl::events::ProgressEvent evt = tmp24;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(720)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(721)
		int tmp25 = this->bytesLoaded;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(721)
		evt->bytesLoaded = tmp25;
		HX_STACK_LINE(722)
		int tmp26 = this->bytesTotal;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(722)
		evt->bytesTotal = tmp26;
		HX_STACK_LINE(723)
		::openfl::events::ProgressEvent tmp27 = evt;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(723)
		this->dispatchEvent(tmp27);
	}
	HX_STACK_LINE(727)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC4(URLLoader_obj,progressFunction,return )

::haxe::io::Bytes URLLoader_obj::readFunction( int max,::lime::utils::ByteArray input){
	HX_STACK_FRAME("openfl.net.URLLoader","readFunction",0x284701c9,"openfl.net.URLLoader.readFunction","openfl/net/URLLoader.hx",732,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(735)
	::lime::utils::ByteArray tmp = input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(735)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,readFunction,return )

Void URLLoader_obj::onData( Dynamic _){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onData",0x971179e4,"openfl.net.URLLoader.onData","openfl/net/URLLoader.hx",750,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(763)
		::String tmp = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(763)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(763)
		::openfl::events::Event evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(764)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(765)
		::openfl::events::Event tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(765)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onData,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onError",0x36daeace,"openfl.net.URLLoader.onError","openfl/net/URLLoader.hx",770,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(772)
		::String tmp = ::openfl::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(772)
		::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(tmp,null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(772)
		::openfl::events::IOErrorEvent evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(773)
		evt->text = msg;
		HX_STACK_LINE(774)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(775)
		::openfl::events::IOErrorEvent tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(775)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::onOpen( ){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onOpen",0x9e622784,"openfl.net.URLLoader.onOpen","openfl/net/URLLoader.hx",780,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(782)
		::String tmp = ::openfl::events::Event_obj::OPEN;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(782)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(782)
		::openfl::events::Event evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(783)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(784)
		::openfl::events::Event tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(784)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,onOpen,(void))

Void URLLoader_obj::onProgress( Dynamic event){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onProgress",0xe8ae8067,"openfl.net.URLLoader.onProgress","openfl/net/URLLoader.hx",789,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(791)
		::String tmp = ::openfl::events::ProgressEvent_obj::PROGRESS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(791)
		::openfl::events::ProgressEvent tmp1 = ::openfl::events::ProgressEvent_obj::__new(tmp,null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(791)
		::openfl::events::ProgressEvent evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(792)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(793)
		evt->bytesLoaded = event->__Field(HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"), hx::paccDynamic );
		HX_STACK_LINE(794)
		evt->bytesTotal = event->__Field(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"), hx::paccDynamic );
		HX_STACK_LINE(795)
		::openfl::events::ProgressEvent tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(795)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onProgress,(void))

Void URLLoader_obj::onSecurityError( ::String msg){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onSecurityError",0x2c8cbdee,"openfl.net.URLLoader.onSecurityError","openfl/net/URLLoader.hx",800,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(802)
		::String tmp = ::openfl::events::SecurityErrorEvent_obj::SECURITY_ERROR;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(802)
		::openfl::events::SecurityErrorEvent tmp1 = ::openfl::events::SecurityErrorEvent_obj::__new(tmp,null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(802)
		::openfl::events::SecurityErrorEvent evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(803)
		evt->text = msg;
		HX_STACK_LINE(804)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(805)
		::openfl::events::SecurityErrorEvent tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(805)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onSecurityError,(void))

Void URLLoader_obj::onStatus( int status){
{
		HX_STACK_FRAME("openfl.net.URLLoader","onStatus",0x7d45ed6c,"openfl.net.URLLoader.onStatus","openfl/net/URLLoader.hx",810,0x11daec0d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
		HX_STACK_LINE(812)
		::String tmp = ::openfl::events::HTTPStatusEvent_obj::HTTP_STATUS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		int tmp1 = status;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		::openfl::events::HTTPStatusEvent tmp2 = ::openfl::events::HTTPStatusEvent_obj::__new(tmp,false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(812)
		::openfl::events::HTTPStatusEvent evt = tmp2;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(813)
		evt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(814)
		::openfl::events::HTTPStatusEvent tmp3 = evt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(814)
		this->dispatchEvent(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onStatus,(void))

::openfl::net::URLLoaderDataFormat URLLoader_obj::set_dataFormat( ::openfl::net::URLLoaderDataFormat inputVal){
	HX_STACK_FRAME("openfl.net.URLLoader","set_dataFormat",0x4cc5d3b9,"openfl.net.URLLoader.set_dataFormat","openfl/net/URLLoader.hx",826,0x11daec0d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inputVal,"inputVal")
	HX_STACK_LINE(844)
	::openfl::net::URLLoaderDataFormat tmp = this->dataFormat = inputVal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(844)
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
	HX_MARK_MEMBER_NAME(__curl,"__curl");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(getData,"getData");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(__curl,"__curl");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(getData,"getData");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
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
		if (HX_FIELD_EQ(inName,"__curl") ) { return __curl; }
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpen") ) { return onOpen_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onStatus") ) { return onStatus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"requestUrl") ) { return requestUrl_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"prepareData") ) { return prepareData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readFunction") ) { return readFunction_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeFunction") ) { return writeFunction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"headerFunction") ) { return headerFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataFormat") ) { return set_dataFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSecurityError") ) { return onSecurityError_dyn(); }
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
		if (HX_FIELD_EQ(inName,"__curl") ) { __curl=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { getData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { if (inCallProp == hx::paccAlways) return set_dataFormat(inValue);dataFormat=inValue.Cast< ::openfl::net::URLLoaderDataFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("__curl","\x0c","\xae","\xc1","\xf0"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::openfl::net::URLLoaderDataFormat*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
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
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onOpen","\x89","\x0c","\x3e","\xec"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("onSecurityError","\x49","\x90","\x00","\x2a"),
	HX_HCSTRING("onStatus","\xb1","\xdd","\xa8","\xe5"),
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
	__mClass->mName = HX_HCSTRING("openfl.net.URLLoader","\x13","\x34","\x24","\x71");
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

} // end namespace openfl
} // end namespace net
