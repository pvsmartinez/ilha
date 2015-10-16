#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace _system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

::lime::_system::Endian System_obj::endianness;

::String System_obj::fontsDirectory;

int System_obj::numDisplays;

::String System_obj::userDirectory;

Void System_obj::exit( int code){
{
		HX_STACK_FRAME("lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",111,0x6434b429)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(128)
		::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		if ((tmp1)){
			HX_STACK_LINE(132)
			::lime::app::Application tmp2 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			int tmp3 = code;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			tmp2->onExit->dispatch(tmp3);
		}
		HX_STACK_LINE(136)
		int tmp2 = code;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		::Sys_obj::exit(tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

::lime::_system::Display System_obj::getDisplay( int id){
	HX_STACK_FRAME("lime.system.System","getDisplay",0x2e892085,"lime.system.System.getDisplay","lime/system/System.hx",143,0x6434b429)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(146)
	Dynamic displayInfo = ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_display.call(id)));		HX_STACK_VAR(displayInfo,"displayInfo");
	HX_STACK_LINE(148)
	bool tmp = (displayInfo != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	if ((tmp)){
		HX_STACK_LINE(150)
		::lime::_system::Display tmp1 = ::lime::_system::Display_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		::lime::_system::Display display = tmp1;		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(151)
		display->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = id;
		HX_STACK_LINE(152)
		display->__FieldRef(HX_HCSTRING("name","\x4b","\x72","\xff","\x48")) = displayInfo->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
		HX_STACK_LINE(153)
		::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new(displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),displayInfo->__Field(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		display->__FieldRef(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")) = tmp2;
		HX_STACK_LINE(154)
		display->__FieldRef(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7")) = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(156)
		::lime::_system::DisplayMode displayMode;		HX_STACK_VAR(displayMode,"displayMode");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			cpp::ArrayBase _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			_g1 = hx::TCastToArray(displayInfo->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic ));
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				if ((tmp4)){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(158)
				Dynamic mode = tmp5;		HX_STACK_VAR(mode,"mode");
				HX_STACK_LINE(158)
				++(_g);
				HX_STACK_LINE(160)
				::lime::_system::DisplayMode tmp6 = ::lime::_system::DisplayMode_obj::__new(mode->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic ),mode->__Field(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				displayMode = tmp6;
				HX_STACK_LINE(161)
				::lime::_system::DisplayMode tmp7 = displayMode;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				display->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
			}
		}
		HX_STACK_LINE(165)
		::lime::_system::DisplayMode tmp3 = display->__Field(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"), hx::paccDynamic )->__GetItem(displayInfo->__Field(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		display->__FieldRef(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80")) = tmp3;
		HX_STACK_LINE(166)
		::lime::_system::Display tmp4 = display;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		return tmp4;
	}
	HX_STACK_LINE(189)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getDisplay,return )

int System_obj::getTimer( ){
	HX_STACK_FRAME("lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",201,0x6434b429)
	HX_STACK_LINE(201)
	return ((int)(::lime::_system::System_obj::cffi_lime_system_get_timer.call()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",213,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(216)
		::String tmp = library;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		::String tmp1 = method;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		bool tmp3 = lazy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		Dynamic tmp4 = ::lime::_system::CFFI_obj::load(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

bool System_obj::get_allowScreenTimeout( ){
	HX_STACK_FRAME("lime.system.System","get_allowScreenTimeout",0x287e314e,"lime.system.System.get_allowScreenTimeout","lime/system/System.hx",234,0x6434b429)
	HX_STACK_LINE(234)
	return ::lime::_system::System_obj::cffi_lime_system_get_allow_screen_timeout.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_allowScreenTimeout,return )

bool System_obj::set_allowScreenTimeout( bool value){
	HX_STACK_FRAME("lime.system.System","set_allowScreenTimeout",0x5c29adc2,"lime.system.System.set_allowScreenTimeout","lime/system/System.hx",245,0x6434b429)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(245)
	return ::lime::_system::System_obj::cffi_lime_system_set_allow_screen_timeout.call(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,set_allowScreenTimeout,return )

::String System_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",256,0x6434b429)
	HX_STACK_LINE(256)
	return ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_directory.call((int)0,null(),null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",274,0x6434b429)
	HX_STACK_LINE(276)
	::String company = HX_HCSTRING("MyCompany","\x11","\xc3","\x2e","\xcc");		HX_STACK_VAR(company,"company");
	HX_STACK_LINE(277)
	::String file = HX_HCSTRING("MyApplication","\x24","\xd3","\xd1","\x1c");		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(279)
	::lime::app::Application tmp = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(279)
	if ((tmp1)){
		HX_STACK_LINE(279)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		::lime::app::Application tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		Dynamic tmp5 = tmp4->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(279)
		tmp2 = false;
	}
	HX_STACK_LINE(279)
	if ((tmp2)){
		HX_STACK_LINE(281)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		::String tmp4 = tmp3->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		if ((tmp5)){
			HX_STACK_LINE(283)
			::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(283)
			::String tmp7 = tmp6->config->__Field(HX_HCSTRING("company","\x3d","\x15","\x69","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			company = tmp7;
		}
		HX_STACK_LINE(287)
		::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		::String tmp7 = tmp6->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(287)
		if ((tmp8)){
			HX_STACK_LINE(289)
			::lime::app::Application tmp9 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(289)
			::String tmp10 = tmp9->config->__Field(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			file = tmp10;
		}
	}
	HX_STACK_LINE(296)
	return ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_directory.call((int)1,company,file)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",317,0x6434b429)
	HX_STACK_LINE(317)
	return ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_directory.call((int)2,null(),null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",338,0x6434b429)
	HX_STACK_LINE(338)
	return ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_directory.call((int)3,null(),null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",359,0x6434b429)
	HX_STACK_LINE(359)
	return ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_directory.call((int)4,null(),null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

int System_obj::get_numDisplays( ){
	HX_STACK_FRAME("lime.system.System","get_numDisplays",0x5056f915,"lime.system.System.get_numDisplays","lime/system/System.hx",370,0x6434b429)
	HX_STACK_LINE(370)
	return ::lime::_system::System_obj::cffi_lime_system_get_num_displays.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_numDisplays,return )

::String System_obj::get_userDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",381,0x6434b429)
	HX_STACK_LINE(381)
	return ((Dynamic)(::lime::_system::System_obj::cffi_lime_system_get_directory.call((int)5,null(),null())));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

::lime::_system::Endian System_obj::get_endianness( ){
	HX_STACK_FRAME("lime.system.System","get_endianness",0x4df50bb4,"lime.system.System.get_endianness","lime/system/System.hx",406,0x6434b429)
	HX_STACK_LINE(406)
	return ::lime::_system::Endian_obj::_LITTLE_ENDIAN;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_endianness,return )

bool System_obj::lime_system_get_allow_screen_timeout( ){
	HX_STACK_FRAME("lime.system.System","lime_system_get_allow_screen_timeout",0x4db31cec,"lime.system.System.lime_system_get_allow_screen_timeout","lime/system/System.hx",420,0x6434b429)
	HX_STACK_LINE(420)
	return ::lime::_system::System_obj::cffi_lime_system_get_allow_screen_timeout.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,lime_system_get_allow_screen_timeout,return )

bool System_obj::lime_system_set_allow_screen_timeout( bool value){
	HX_STACK_FRAME("lime.system.System","lime_system_set_allow_screen_timeout",0x608d9e60,"lime.system.System.lime_system_set_allow_screen_timeout","lime/system/System.hx",421,0x6434b429)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(421)
	return ::lime::_system::System_obj::cffi_lime_system_set_allow_screen_timeout.call(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,lime_system_set_allow_screen_timeout,return )

Dynamic System_obj::lime_system_get_directory( int type,::String company,::String title){
	HX_STACK_FRAME("lime.system.System","lime_system_get_directory",0xa47e5645,"lime.system.System.lime_system_get_directory","lime/system/System.hx",422,0x6434b429)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(company,"company")
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(422)
	return ::lime::_system::System_obj::cffi_lime_system_get_directory.call(type,company,title);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(System_obj,lime_system_get_directory,return )

Dynamic System_obj::lime_system_get_display( int index){
	HX_STACK_FRAME("lime.system.System","lime_system_get_display",0xf596681a,"lime.system.System.lime_system_get_display","lime/system/System.hx",423,0x6434b429)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(423)
	return ::lime::_system::System_obj::cffi_lime_system_get_display.call(index);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,lime_system_get_display,return )

int System_obj::lime_system_get_num_displays( ){
	HX_STACK_FRAME("lime.system.System","lime_system_get_num_displays",0x871a8372,"lime.system.System.lime_system_get_num_displays","lime/system/System.hx",424,0x6434b429)
	HX_STACK_LINE(424)
	return ::lime::_system::System_obj::cffi_lime_system_get_num_displays.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,lime_system_get_num_displays,return )

Float System_obj::lime_system_get_timer( ){
	HX_STACK_FRAME("lime.system.System","lime_system_get_timer",0x2a4a579d,"lime.system.System.lime_system_get_timer","lime/system/System.hx",425,0x6434b429)
	HX_STACK_LINE(425)
	return ::lime::_system::System_obj::cffi_lime_system_get_timer.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,lime_system_get_timer,return )

::cpp::Function< bool ( ) > System_obj::cffi_lime_system_get_allow_screen_timeout;

::cpp::Function< bool ( bool ) > System_obj::cffi_lime_system_set_allow_screen_timeout;

::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > System_obj::cffi_lime_system_get_directory;

::cpp::Function< ::hx::Object * ( int ) > System_obj::cffi_lime_system_get_display;

::cpp::Function< int ( ) > System_obj::cffi_lime_system_get_num_displays;

::cpp::Function< Float ( ) > System_obj::cffi_lime_system_get_timer;


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { outValue = inCallProp == hx::paccAlways ? get_endianness() : endianness; return true; }
		if (HX_FIELD_EQ(inName,"getDisplay") ) { outValue = getDisplay_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = disableCFFI; return true;  }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { outValue = inCallProp == hx::paccAlways ? get_numDisplays() : numDisplays; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_userDirectory() : userDirectory; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_fontsDirectory() : fontsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_endianness") ) { outValue = get_endianness_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numDisplays") ) { outValue = get_numDisplays_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_desktopDirectory() : desktopDirectory; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == hx::paccAlways) { outValue = get_allowScreenTimeout(); return true; } }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_documentsDirectory() : documentsDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationDirectory() : applicationDirectory; return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { outValue = lime_system_get_timer_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_allowScreenTimeout") ) { outValue = get_allowScreenTimeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_allowScreenTimeout") ) { outValue = set_allowScreenTimeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_system_get_display") ) { outValue = lime_system_get_display_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { outValue = lime_system_get_directory_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_timer") ) { outValue = cffi_lime_system_get_timer; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { outValue = inCallProp == hx::paccAlways ? get_applicationStorageDirectory() : applicationStorageDirectory; return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_system_get_num_displays") ) { outValue = lime_system_get_num_displays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_display") ) { outValue = cffi_lime_system_get_display; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_directory") ) { outValue = cffi_lime_system_get_directory; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_num_displays") ) { outValue = cffi_lime_system_get_num_displays; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_system_get_allow_screen_timeout") ) { outValue = lime_system_get_allow_screen_timeout_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_system_set_allow_screen_timeout") ) { outValue = lime_system_set_allow_screen_timeout_dyn(); return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_allow_screen_timeout") ) { outValue = cffi_lime_system_get_allow_screen_timeout; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_set_allow_screen_timeout") ) { outValue = cffi_lime_system_set_allow_screen_timeout; return true;  }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { endianness=ioValue.Cast< ::lime::_system::Endian >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { numDisplays=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { fontsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == hx::paccAlways)  ioValue = set_allowScreenTimeout(ioValue); }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_timer") ) { cffi_lime_system_get_timer=ioValue.Cast< ::cpp::Function< Float ( ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_display") ) { cffi_lime_system_get_display=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_directory") ) { cffi_lime_system_get_directory=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_num_displays") ) { cffi_lime_system_get_num_displays=ioValue.Cast< ::cpp::Function< int ( ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_system_get_allow_screen_timeout") ) { cffi_lime_system_get_allow_screen_timeout=ioValue.Cast< ::cpp::Function< bool ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_system_set_allow_screen_timeout") ) { cffi_lime_system_set_allow_screen_timeout=ioValue.Cast< ::cpp::Function< bool ( bool ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &System_obj::applicationDirectory,HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25")},
	{hx::fsString,(void *) &System_obj::applicationStorageDirectory,HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1")},
	{hx::fsString,(void *) &System_obj::desktopDirectory,HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf")},
	{hx::fsBool,(void *) &System_obj::disableCFFI,HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11")},
	{hx::fsString,(void *) &System_obj::documentsDirectory,HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36")},
	{hx::fsObject /*::lime::_system::Endian*/ ,(void *) &System_obj::endianness,HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e")},
	{hx::fsString,(void *) &System_obj::fontsDirectory,HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88")},
	{hx::fsInt,(void *) &System_obj::numDisplays,HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11")},
	{hx::fsString,(void *) &System_obj::userDirectory,HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94")},
	{hx::fsObject /*::cpp::Function< bool ( ) >*/ ,(void *) &System_obj::cffi_lime_system_get_allow_screen_timeout,HX_HCSTRING("cffi_lime_system_get_allow_screen_timeout","\xec","\x70","\x0c","\x2b")},
	{hx::fsObject /*::cpp::Function< bool ( bool ) >*/ ,(void *) &System_obj::cffi_lime_system_set_allow_screen_timeout,HX_HCSTRING("cffi_lime_system_set_allow_screen_timeout","\x60","\xf2","\xe6","\x3d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >*/ ,(void *) &System_obj::cffi_lime_system_get_directory,HX_HCSTRING("cffi_lime_system_get_directory","\x45","\x82","\xbc","\xfa")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &System_obj::cffi_lime_system_get_display,HX_HCSTRING("cffi_lime_system_get_display","\x1a","\x94","\xb1","\xad")},
	{hx::fsObject /*::cpp::Function< int ( ) >*/ ,(void *) &System_obj::cffi_lime_system_get_num_displays,HX_HCSTRING("cffi_lime_system_get_num_displays","\x72","\xd7","\xff","\x40")},
	{hx::fsObject /*::cpp::Function< Float ( ) >*/ ,(void *) &System_obj::cffi_lime_system_get_timer,HX_HCSTRING("cffi_lime_system_get_timer","\x9d","\x83","\x02","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::cffi_lime_system_get_allow_screen_timeout,"cffi_lime_system_get_allow_screen_timeout");
	HX_MARK_MEMBER_NAME(System_obj::cffi_lime_system_set_allow_screen_timeout,"cffi_lime_system_set_allow_screen_timeout");
	HX_MARK_MEMBER_NAME(System_obj::cffi_lime_system_get_directory,"cffi_lime_system_get_directory");
	HX_MARK_MEMBER_NAME(System_obj::cffi_lime_system_get_display,"cffi_lime_system_get_display");
	HX_MARK_MEMBER_NAME(System_obj::cffi_lime_system_get_num_displays,"cffi_lime_system_get_num_displays");
	HX_MARK_MEMBER_NAME(System_obj::cffi_lime_system_get_timer,"cffi_lime_system_get_timer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::endianness,"endianness");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::numDisplays,"numDisplays");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::cffi_lime_system_get_allow_screen_timeout,"cffi_lime_system_get_allow_screen_timeout");
	HX_VISIT_MEMBER_NAME(System_obj::cffi_lime_system_set_allow_screen_timeout,"cffi_lime_system_set_allow_screen_timeout");
	HX_VISIT_MEMBER_NAME(System_obj::cffi_lime_system_get_directory,"cffi_lime_system_get_directory");
	HX_VISIT_MEMBER_NAME(System_obj::cffi_lime_system_get_display,"cffi_lime_system_get_display");
	HX_VISIT_MEMBER_NAME(System_obj::cffi_lime_system_get_num_displays,"cffi_lime_system_get_num_displays");
	HX_VISIT_MEMBER_NAME(System_obj::cffi_lime_system_get_timer,"cffi_lime_system_get_timer");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applicationDirectory","\xfd","\x3c","\x71","\x25"),
	HX_HCSTRING("applicationStorageDirectory","\x22","\xdb","\xb5","\xb1"),
	HX_HCSTRING("desktopDirectory","\xf1","\x70","\x41","\xaf"),
	HX_HCSTRING("disableCFFI","\x8e","\x24","\xb6","\x11"),
	HX_HCSTRING("documentsDirectory","\x55","\xaa","\xb4","\x36"),
	HX_HCSTRING("endianness","\xb2","\x02","\xd3","\x4e"),
	HX_HCSTRING("fontsDirectory","\x09","\x02","\x1b","\x88"),
	HX_HCSTRING("numDisplays","\x57","\x20","\xb1","\x11"),
	HX_HCSTRING("userDirectory","\xa2","\x1e","\xf9","\x94"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("get_allowScreenTimeout","\x95","\xcf","\x5c","\x6e"),
	HX_HCSTRING("set_allowScreenTimeout","\x09","\x4c","\x08","\xa2"),
	HX_HCSTRING("get_applicationDirectory","\x86","\x5a","\x0d","\x68"),
	HX_HCSTRING("get_applicationStorageDirectory","\xb9","\x70","\x86","\x8d"),
	HX_HCSTRING("get_desktopDirectory","\xfa","\xd5","\xab","\xcd"),
	HX_HCSTRING("get_documentsDirectory","\x9e","\x23","\x49","\x90"),
	HX_HCSTRING("get_fontsDirectory","\xd2","\xe2","\xb4","\x23"),
	HX_HCSTRING("get_numDisplays","\xee","\xd7","\x92","\xd2"),
	HX_HCSTRING("get_userDirectory","\xf9","\x29","\x69","\x9b"),
	HX_HCSTRING("get_endianness","\xfb","\x8a","\xc8","\xc4"),
	HX_HCSTRING("lime_system_get_allow_screen_timeout","\x73","\x89","\x73","\x7a"),
	HX_HCSTRING("lime_system_set_allow_screen_timeout","\xe7","\x0a","\x4e","\x8d"),
	HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),
	HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2"),
	HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f"),
	HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),
	HX_HCSTRING("cffi_lime_system_get_allow_screen_timeout","\xec","\x70","\x0c","\x2b"),
	HX_HCSTRING("cffi_lime_system_set_allow_screen_timeout","\x60","\xf2","\xe6","\x3d"),
	HX_HCSTRING("cffi_lime_system_get_directory","\x45","\x82","\xbc","\xfa"),
	HX_HCSTRING("cffi_lime_system_get_display","\x1a","\x94","\xb1","\xad"),
	HX_HCSTRING("cffi_lime_system_get_num_displays","\x72","\xd7","\xff","\x40"),
	HX_HCSTRING("cffi_lime_system_get_timer","\x9d","\x83","\x02","\x23"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.System","\x95","\x83","\xbd","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	cffi_lime_system_get_allow_screen_timeout= ::cpp::Function< bool ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_allow_screen_timeout","\x73","\x89","\x73","\x7a"),HX_HCSTRING("b","\x62","\x00","\x00","\x00"),false));
	cffi_lime_system_set_allow_screen_timeout= ::cpp::Function< bool ( bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_set_allow_screen_timeout","\xe7","\x0a","\x4e","\x8d"),HX_HCSTRING("bb","\xc0","\x55","\x00","\x00"),false));
	cffi_lime_system_get_directory= ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_directory","\x5e","\x9e","\x04","\x7c"),HX_HCSTRING("isso","\x06","\x0f","\xbf","\x45"),false));
	cffi_lime_system_get_display= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_display","\xf3","\x47","\x82","\xd2"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_system_get_num_displays= ::cpp::Function< int ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_num_displays","\xf9","\x90","\x37","\x4f"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"),false));
	cffi_lime_system_get_timer= ::cpp::Function< Float ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_system_get_timer","\x36","\x5f","\x72","\x67"),HX_HCSTRING("d","\x64","\x00","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace system
