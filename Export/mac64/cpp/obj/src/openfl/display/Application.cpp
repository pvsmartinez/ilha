#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
namespace openfl{
namespace display{

Void Application_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Application","new",0x436ec718,"openfl.display.Application.new","openfl/display/Application.hx",12,0xe1d30bda)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(16)
	::openfl::display::Application tmp = ::openfl::Lib_obj::application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	if ((tmp1)){
		HX_STACK_LINE(18)
		::openfl::Lib_obj::application = hx::ObjectPtr<OBJ_>(this);
	}
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("openfl.display.Application","create",0xb9517344,"openfl.display.Application.create","openfl/display/Application.hx",25,0xe1d30bda)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(27)
		this->config = config;
		HX_STACK_LINE(29)
		::lime::_backend::native::NativeApplication tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		tmp->create(tmp1);
		HX_STACK_LINE(31)
		bool tmp2 = (config != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(33)
			Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			if ((tmp4)){
				HX_STACK_LINE(35)
				Float value = config->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(35)
				::lime::_backend::native::NativeApplication tmp5 = this->backend;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(35)
				tmp5->setFrameRate(tmp6);
			}
			HX_STACK_LINE(39)
			Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			if ((tmp6)){
				HX_STACK_LINE(41)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				cpp::ArrayBase _g1 = config->__Field(HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(41)
				while((true)){
					HX_STACK_LINE(41)
					bool tmp7 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(41)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(41)
					if ((tmp8)){
						HX_STACK_LINE(41)
						break;
					}
					HX_STACK_LINE(41)
					Dynamic tmp9 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(41)
					Dynamic windowConfig = tmp9;		HX_STACK_VAR(windowConfig,"windowConfig");
					HX_STACK_LINE(41)
					++(_g);
					HX_STACK_LINE(43)
					::openfl::display::Window tmp10 = ::openfl::display::Window_obj::__new(windowConfig);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(43)
					::openfl::display::Window window = tmp10;		HX_STACK_VAR(window,"window");
					HX_STACK_LINE(44)
					::openfl::display::Window tmp11 = window;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(44)
					this->createWindow(tmp11);
				}
			}
			HX_STACK_LINE(54)
			::lime::app::Preloader tmp7 = this->preloader;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(54)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			if ((tmp9)){
				HX_STACK_LINE(54)
				::lime::app::Preloader tmp11 = this->preloader;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(54)
				::lime::app::Preloader tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(54)
				tmp10 = tmp12->complete;
			}
			else{
				HX_STACK_LINE(54)
				tmp10 = true;
			}
			HX_STACK_LINE(54)
			if ((tmp10)){
				HX_STACK_LINE(56)
				this->onPreloadComplete();
			}
		}
	}
return null();
}



Application_obj::Application_obj()
{
}

Dynamic Application_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
};

#endif

hx::Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Application","\x26","\x9b","\x0f","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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
