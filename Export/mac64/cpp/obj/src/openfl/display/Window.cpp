#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void Window_obj::__construct(Dynamic config)
{
HX_STACK_FRAME("openfl.display.Window","new",0x253949cc,"openfl.display.Window.new","openfl/display/Window.hx",15,0x156e59e2)
HX_STACK_THIS(this)
HX_STACK_ARG(config,"config")
{
	HX_STACK_LINE(17)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic config)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(config);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Window_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("openfl.display.Window","create",0xf67e9910,"openfl.display.Window.create","openfl/display/Window.hx",22,0x156e59e2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(24)
		::lime::app::Application tmp = application;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->super::create(tmp);
		HX_STACK_LINE(28)
		Dynamic tmp1 = this->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		if ((tmp2)){
			HX_STACK_LINE(28)
			Dynamic tmp4 = this->config;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			tmp3 = tmp4->__Field(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(28)
			tmp3 = (int)16777215;
		}
		HX_STACK_LINE(28)
		::openfl::display::Stage tmp4 = ::openfl::display::Stage_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		this->stage = tmp4;
		HX_STACK_LINE(29)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		application->addModule(tmp5);
	}
return null();
}



Window_obj::Window_obj()
{
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Window","\xda","\xb3","\xcd","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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
