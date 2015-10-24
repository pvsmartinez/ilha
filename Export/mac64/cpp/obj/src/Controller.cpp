#include <hxcpp.h>

#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_Controller
#include <Controller.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif

Void Controller_obj::__construct()
{
HX_STACK_FRAME("Controller","new",0xbf7e4bae,"Controller.new","Controller.hx",8,0x2da14382)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	this->keys = Array_obj< bool >::__new();
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	::String tmp1 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	Dynamic tmp2 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	tmp->stage->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(16)
	::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	::String tmp4 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	Dynamic tmp5 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(16)
	tmp3->stage->addEventListener(tmp4,tmp5,null(),null(),null());
}
;
	return null();
}

//Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new()
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct();
	return _result_;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > _result_ = new Controller_obj();
	_result_->__construct();
	return _result_;}

Void Controller_obj::move( ::Body target){
{
		HX_STACK_FRAME("Controller","move",0xce624c03,"Controller.move","Controller.hx",23,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(24)
		bool tmp = this->keys->__get((int)37);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		bool tmp1 = this->keys->__get((int)38);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		bool tmp2 = this->keys->__get((int)39);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		bool tmp3 = this->keys->__get((int)40);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		target->move(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,move,(void))

Void Controller_obj::onKeyDown( ::openfl::events::KeyboardEvent evt){
{
		HX_STACK_FRAME("Controller","onKeyDown",0x6a350c10,"Controller.onKeyDown","Controller.hx",28,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(28)
		this->keys[evt->keyCode] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,onKeyDown,(void))

Void Controller_obj::onKeyUp( ::openfl::events::KeyboardEvent evt){
{
		HX_STACK_FRAME("Controller","onKeyUp",0x44019289,"Controller.onKeyUp","Controller.hx",32,0x2da14382)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(32)
		this->keys[evt->keyCode] = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,onKeyUp,(void))


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(keys,"keys");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keys,"keys");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Controller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Controller_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#endif

hx::Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Controller_obj >;
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

