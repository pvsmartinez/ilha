#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void DocumentClass_obj::__construct()
{
HX_STACK_FRAME("DocumentClass","new",0x4aeb0a6f,"DocumentClass.new","ApplicationMain.hx",231,0x0780ded5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(233)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	tmp->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(234)
	super::__construct();
	HX_STACK_LINE(235)
	::String tmp1 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(tmp1,false,false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	this->dispatchEvent(tmp2);
}
;
	return null();
}

//DocumentClass_obj::~DocumentClass_obj() { }

Dynamic DocumentClass_obj::__CreateEmpty() { return  new DocumentClass_obj; }
hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__new()
{  hx::ObjectPtr< DocumentClass_obj > _result_ = new DocumentClass_obj();
	_result_->__construct();
	return _result_;}

Dynamic DocumentClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DocumentClass_obj > _result_ = new DocumentClass_obj();
	_result_->__construct();
	return _result_;}


DocumentClass_obj::DocumentClass_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#endif

hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DocumentClass","\xfd","\xa6","\x03","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DocumentClass_obj >;
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

