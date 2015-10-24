#include <hxcpp.h>

#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_Source
#include <Source.h>
#endif
#ifndef INCLUDED_Sources
#include <Sources.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Stuff
#include <Stuff.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Source_obj::__construct(::Sources kind)
{
HX_STACK_FRAME("Source","new",0x52f75f6d,"Source.new","Source.hx",12,0x0ab42ca3)
HX_STACK_THIS(this)
HX_STACK_ARG(kind,"kind")
{
	HX_STACK_LINE(13)
	::Sources tmp = kind;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String tmp2 = (HX_HCSTRING("sources/","\xf7","\x41","\xa4","\x66") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	::String png = tmp2;		HX_STACK_VAR(png,"png");
	HX_STACK_LINE(14)
	::String tmp3 = png;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	super::__construct(tmp3,(int)180,(int)180);
	HX_STACK_LINE(15)
	this->kind = kind;
}
;
	return null();
}

//Source_obj::~Source_obj() { }

Dynamic Source_obj::__CreateEmpty() { return  new Source_obj; }
hx::ObjectPtr< Source_obj > Source_obj::__new(::Sources kind)
{  hx::ObjectPtr< Source_obj > _result_ = new Source_obj();
	_result_->__construct(kind);
	return _result_;}

Dynamic Source_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Source_obj > _result_ = new Source_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Source_obj::Source_obj()
{
}

void Source_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Source);
	HX_MARK_MEMBER_NAME(kind,"kind");
	::Stuff_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Source_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(kind,"kind");
	::Stuff_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Source_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kind") ) { return kind; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Source_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kind") ) { kind=inValue.Cast< ::Sources >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Source_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Sources*/ ,(int)offsetof(Source_obj,kind),HX_HCSTRING("kind","\x54","\xe1","\x09","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("kind","\x54","\xe1","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Source_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Source_obj::__mClass,"__mClass");
};

#endif

hx::Class Source_obj::__mClass;

void Source_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Source","\xfb","\x24","\xc6","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Source_obj >;
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

