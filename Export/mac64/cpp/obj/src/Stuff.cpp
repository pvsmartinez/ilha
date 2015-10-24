#include <hxcpp.h>

#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_Person
#include <Person.h>
#endif
#ifndef INCLUDED_Stuff
#include <Stuff.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterQuality
#include <openfl/filters/BitmapFilterQuality.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif

Void Stuff_obj::__construct(::String img,int width,int height)
{
HX_STACK_FRAME("Stuff","new",0xf271a1c6,"Stuff.new","Stuff.hx",16,0x2944386a)
HX_STACK_THIS(this)
HX_STACK_ARG(img,"img")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(17)
	::String tmp = img;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//Stuff_obj::~Stuff_obj() { }

Dynamic Stuff_obj::__CreateEmpty() { return  new Stuff_obj; }
hx::ObjectPtr< Stuff_obj > Stuff_obj::__new(::String img,int width,int height)
{  hx::ObjectPtr< Stuff_obj > _result_ = new Stuff_obj();
	_result_->__construct(img,width,height);
	return _result_;}

Dynamic Stuff_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stuff_obj > _result_ = new Stuff_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Stuff_obj::focus( ::Person target){
{
		HX_STACK_FRAME("Stuff","focus",0x16cad6be,"Stuff.focus","Stuff.hx",20,0x2944386a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(21)
		Array< ::Dynamic > fters = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(fters,"fters");
		HX_STACK_LINE(22)
		::Person tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = this->hitTestObject(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		if ((tmp1)){
			HX_STACK_LINE(23)
			int tmp2 = ::openfl::filters::BitmapFilterQuality_obj::HIGH;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			::openfl::filters::GlowFilter tmp3 = ::openfl::filters::GlowFilter_obj::__new((int)65535,(int)1,(int)10,(int)10,(int)10,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			fters->push(tmp3);
		}
		HX_STACK_LINE(25)
		::openfl::display::Bitmap tmp2 = this->bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		tmp2->set_filters(fters);
		HX_STACK_LINE(26)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Stuff.hx","\x6a","\x38","\x44","\x29"),26,HX_HCSTRING("Stuff","\xd4","\x06","\x48","\x17"),HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		::haxe::Log_obj::trace(fters,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stuff_obj,focus,(void))


Stuff_obj::Stuff_obj()
{
}

void Stuff_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stuff);
	HX_MARK_MEMBER_NAME(shine,"shine");
	::Body_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stuff_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shine,"shine");
	::Body_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stuff_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shine") ) { return shine; }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stuff_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shine") ) { shine=inValue.Cast< ::openfl::filters::GlowFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stuff_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shine","\x6b","\xf3","\x22","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::GlowFilter*/ ,(int)offsetof(Stuff_obj,shine),HX_HCSTRING("shine","\x6b","\xf3","\x22","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shine","\x6b","\xf3","\x22","\x7c"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stuff_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stuff_obj::__mClass,"__mClass");
};

#endif

hx::Class Stuff_obj::__mClass;

void Stuff_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Stuff","\xd4","\x06","\x48","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stuff_obj >;
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

