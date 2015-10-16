#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
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
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace openfl{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",180,0x7a569d9f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(182)
	super::__construct();
	HX_STACK_LINE(184)
	::openfl::display::LoaderInfo tmp = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	this->contentLoaderInfo = tmp;
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Void Loader_obj::close( ){
{
		HX_STACK_FRAME("openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",196,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Loader.close","\x3d","\x15","\x0d","\x6a"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

Void Loader_obj::load( ::openfl::net::URLRequest request,::openfl::_system::LoaderContext context){
{
		HX_STACK_FRAME("openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",362,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(362)
		::openfl::display::Loader _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(364)
		::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(365)
		Array< ::String > parts = request->url.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(367)
		bool tmp = (parts->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		if ((tmp)){
			HX_STACK_LINE(369)
			int tmp1 = (parts->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(369)
			::String tmp2 = parts->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(369)
			::String tmp3 = tmp2.toLowerCase();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			extension = tmp3;
		}
		HX_STACK_LINE(373)
		int tmp1 = extension.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(373)
		if ((tmp2)){
			HX_STACK_LINE(375)
			::String tmp3 = extension.split(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			extension = tmp3;
		}
		HX_STACK_LINE(379)
		bool transparent = true;		HX_STACK_VAR(transparent,"transparent");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			tmp3->url = request->url;
		}
		HX_STACK_LINE(383)
		bool tmp3 = (request->contentType == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(383)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(383)
		if ((tmp3)){
			HX_STACK_LINE(383)
			tmp4 = (request->contentType != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(383)
			tmp4 = false;
		}
		HX_STACK_LINE(383)
		if ((tmp4)){
			HX_STACK_LINE(387)
			::String tmp5 = extension;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			::String _switch_1 = (tmp5);
			if (  ( _switch_1==HX_HCSTRING("swf","\x42","\xab","\x57","\x00"))){
				HX_STACK_LINE(389)
				tmp6 = HX_HCSTRING("application/x-shockwave-flash","\xea","\xf3","\x47","\x4a");
			}
			else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
				HX_STACK_LINE(390)
				transparent = false;
				HX_STACK_LINE(390)
				tmp6 = HX_HCSTRING("image/jpeg","\x1c","\x8d","\xdb","\xce");
			}
			else if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
				HX_STACK_LINE(391)
				tmp6 = HX_HCSTRING("image/png","\xb5","\xcc","\xc1","\x16");
			}
			else if (  ( _switch_1==HX_HCSTRING("gif","\x04","\x84","\x4e","\x00"))){
				HX_STACK_LINE(392)
				tmp6 = HX_HCSTRING("image/gif","\x10","\xf4","\xba","\x16");
			}
			else  {
				HX_STACK_LINE(393)
				tmp6 = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
			}
;
;
			HX_STACK_LINE(387)
			::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			tmp7->contentType = tmp6;
		}
		else{
			HX_STACK_LINE(401)
			::openfl::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(401)
			tmp5->contentType = request->contentType;
		}
		HX_STACK_LINE(407)
		bool tmp5 = (request->url != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(407)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(407)
		if ((tmp6)){
			HX_STACK_LINE(407)
			int tmp8 = request->url.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(407)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(407)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(407)
			int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(407)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(407)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(407)
			tmp7 = (tmp10 > tmp13);
		}
		else{
			HX_STACK_LINE(407)
			tmp7 = false;
		}
		HX_STACK_LINE(407)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(407)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(407)
		if ((tmp8)){
			HX_STACK_LINE(407)
			int tmp10 = request->url.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(407)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(407)
			tmp9 = (tmp11 > (int)-1);
		}
		else{
			HX_STACK_LINE(407)
			tmp9 = true;
		}
		HX_STACK_LINE(407)
		if ((tmp9)){
			HX_STACK_LINE(409)
			::openfl::net::URLLoader tmp10 = ::openfl::net::URLLoader_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			::openfl::net::URLLoader loader = tmp10;		HX_STACK_VAR(loader,"loader");
			HX_STACK_LINE(410)
			::String tmp11 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp11,"tmp11");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::Loader,_g,::openfl::net::URLLoader,loader)
			int __ArgCount() const { return 1; }
			Void run(Dynamic e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Loader.hx",410,0x7a569d9f)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(412)
					Dynamic tmp12 = loader->data;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(412)
					::openfl::display::BitmapData tmp13 = ::openfl::display::BitmapData_obj::fromBytes(tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(412)
					_g->BitmapData_onLoad(tmp13);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(410)
			loader->addEventListener(tmp11, Dynamic(new _Function_2_1(_g,loader)),null(),null(),null());
			HX_STACK_LINE(415)
			::String tmp12 = ::openfl::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp12,"tmp12");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::openfl::display::Loader,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic e){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","openfl/display/Loader.hx",415,0x7a569d9f)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(417)
					Dynamic tmp13 = e;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(417)
					_g->BitmapData_onError(tmp13);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(415)
			loader->addEventListener(tmp12, Dynamic(new _Function_2_2(_g)),null(),null(),null());
			HX_STACK_LINE(420)
			loader->set_dataFormat(::openfl::net::URLLoaderDataFormat_obj::BINARY);
			HX_STACK_LINE(421)
			::openfl::net::URLRequest tmp13 = request;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(421)
			loader->load(tmp13);
			HX_STACK_LINE(422)
			return null();
		}
		HX_STACK_LINE(428)
		::lime::_system::BackgroundWorker tmp10 = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(428)
		::lime::_system::BackgroundWorker worker = tmp10;		HX_STACK_VAR(worker,"worker");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::_system::BackgroundWorker,worker,::openfl::net::URLRequest,request)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/Loader.hx",430,0x7a569d9f)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(432)
				::String path = request->url;		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(433)
				int tmp11 = path.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(433)
				int index = tmp11;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(435)
				bool tmp12 = (index > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(435)
				if ((tmp12)){
					HX_STACK_LINE(437)
					int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(437)
					::String tmp14 = path.substring((int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(437)
					path = tmp14;
				}
				HX_STACK_LINE(441)
				::String tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::_system::BackgroundWorker,worker)
				int __ArgCount() const { return 1; }
				Void run(::openfl::display::BitmapData bitmapData){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Loader.hx",441,0x7a569d9f)
					HX_STACK_ARG(bitmapData,"bitmapData")
					{
						HX_STACK_LINE(441)
						::openfl::display::BitmapData tmp14 = bitmapData;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(441)
						worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp14);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))


				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::lime::_system::BackgroundWorker,worker)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","openfl/display/Loader.hx",441,0x7a569d9f)
					{
						HX_STACK_LINE(441)
						::String tmp14 = ::openfl::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(441)
						worker->__Field(HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"), hx::paccDynamic )(tmp14);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(441)
				::openfl::display::BitmapData_obj::fromFile(tmp13, Dynamic(new _Function_2_1(worker)), Dynamic(new _Function_2_2(worker)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(430)
		worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_1(worker,request)),null(),null());
		HX_STACK_LINE(445)
		Dynamic tmp11 = this->BitmapData_onError_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(445)
		worker->__Field(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11,null(),null());
		HX_STACK_LINE(446)
		Dynamic tmp12 = this->BitmapData_onLoad_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(446)
		worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp12,null(),null());
		HX_STACK_LINE(447)
		worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::lime::utils::ByteArray buffer){
{
		HX_STACK_FRAME("openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",538,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(540)
		::lime::_system::BackgroundWorker tmp = ::lime::_system::BackgroundWorker_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		::lime::_system::BackgroundWorker worker = tmp;		HX_STACK_VAR(worker,"worker");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::utils::ByteArray,buffer,::lime::_system::BackgroundWorker,worker)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/Loader.hx",542,0x7a569d9f)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(544)
				::lime::utils::ByteArray tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::_system::BackgroundWorker,worker)
				int __ArgCount() const { return 1; }
				Void run(::openfl::display::BitmapData bitmapData){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Loader.hx",544,0x7a569d9f)
					HX_STACK_ARG(bitmapData,"bitmapData")
					{
						HX_STACK_LINE(544)
						::openfl::display::BitmapData tmp2 = bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(544)
						worker->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp2);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(544)
				::openfl::display::BitmapData_obj::fromBytes(tmp1,null(), Dynamic(new _Function_2_1(worker)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(542)
		worker->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_1_1(buffer,worker)),null(),null());
		HX_STACK_LINE(548)
		Dynamic tmp1 = this->BitmapData_onLoad_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(548)
		worker->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,null(),null());
		HX_STACK_LINE(549)
		worker->__Field(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"), hx::paccDynamic )(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",577,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(579)
		int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		if ((tmp1)){
			HX_STACK_LINE(581)
			while((true)){
				HX_STACK_LINE(581)
				int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(581)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(581)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(581)
				if ((tmp4)){
					HX_STACK_LINE(581)
					break;
				}
				HX_STACK_LINE(583)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(587)
			this->content = null();
			HX_STACK_LINE(588)
			::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(588)
			tmp2->url = null();
			HX_STACK_LINE(589)
			::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(589)
			tmp3->contentType = null();
			HX_STACK_LINE(590)
			::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(590)
			tmp4->content = null();
			HX_STACK_LINE(591)
			::openfl::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			tmp5->bytesLoaded = (int)0;
			HX_STACK_LINE(592)
			::openfl::display::LoaderInfo tmp6 = this->contentLoaderInfo;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			tmp6->bytesTotal = (int)0;
			HX_STACK_LINE(593)
			::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(593)
			tmp7->width = (int)0;
			HX_STACK_LINE(594)
			::openfl::display::LoaderInfo tmp8 = this->contentLoaderInfo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(594)
			tmp8->height = (int)0;
			HX_STACK_LINE(596)
			::String tmp9 = ::openfl::events::Event_obj::UNLOAD;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(596)
			::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(596)
			::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(597)
			event->currentTarget = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(598)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(598)
			this->__dispatchEvent(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::unloadAndStop( hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(true);
	HX_STACK_FRAME("openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",635,0x7a569d9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gc,"gc")
{
		HX_STACK_LINE(635)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Loader.unloadAndStop","\xbf","\x8d","\xdd","\x18"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

Void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",647,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(649)
		::openfl::display::Bitmap tmp = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		tmp1->content = tmp;
		HX_STACK_LINE(650)
		::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(650)
		this->content = tmp2->content;
		HX_STACK_LINE(651)
		::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(651)
		::openfl::display::DisplayObject tmp4 = tmp3->content;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		this->addChild(tmp4);
		HX_STACK_LINE(653)
		::String tmp5 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(653)
		::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(653)
		::openfl::events::Event event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(654)
		::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(654)
		event->target = tmp7;
		HX_STACK_LINE(655)
		::openfl::display::LoaderInfo tmp8 = this->contentLoaderInfo;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(655)
		event->currentTarget = tmp8;
		HX_STACK_LINE(656)
		::openfl::display::LoaderInfo tmp9 = this->contentLoaderInfo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(656)
		::openfl::events::Event tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(656)
		tmp9->dispatchEvent(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

Void Loader_obj::BitmapData_onError( Dynamic _){
{
		HX_STACK_FRAME("openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",661,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(663)
		::String tmp = ::openfl::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(tmp,null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(663)
		::openfl::events::IOErrorEvent event = tmp1;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(664)
		::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		event->target = tmp2;
		HX_STACK_LINE(665)
		::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(665)
		event->currentTarget = tmp3;
		HX_STACK_LINE(666)
		::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(666)
		::openfl::events::IOErrorEvent tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(666)
		tmp4->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onError,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(mImage,"mImage");
	HX_MARK_MEMBER_NAME(mShape,"mShape");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(mImage,"mImage");
	HX_VISIT_MEMBER_NAME(mShape,"mShape");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mImage") ) { return mImage; }
		if (HX_FIELD_EQ(inName,"mShape") ) { return mShape; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return unloadAndStop_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return BitmapData_onLoad_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return BitmapData_onError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mImage") ) { mImage=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mShape") ) { mShape=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("mImage","\xae","\xe3","\x7c","\xe5"));
	outFields->push(HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Loader_obj,mImage),HX_HCSTRING("mImage","\xae","\xe3","\x7c","\xe5")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(Loader_obj,mShape),HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("mImage","\xae","\xe3","\x7c","\xe5"),
	HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("unloadAndStop","\x3a","\x03","\x03","\x7a"),
	HX_HCSTRING("BitmapData_onLoad","\xcb","\xd7","\xa2","\xbe"),
	HX_HCSTRING("BitmapData_onError","\x83","\x7e","\x14","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Loader","\xfd","\x67","\xb0","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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
} // end namespace display
