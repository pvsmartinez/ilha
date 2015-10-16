#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void Shape_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Shape","new",0x7b6756e9,"openfl.display.Shape.new","openfl/display/Shape.hx",35,0xe963f3a9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	super::__construct();
}
;
	return null();
}

//Shape_obj::~Shape_obj() { }

Dynamic Shape_obj::__CreateEmpty() { return  new Shape_obj; }
hx::ObjectPtr< Shape_obj > Shape_obj::__new()
{  hx::ObjectPtr< Shape_obj > _result_ = new Shape_obj();
	_result_->__construct();
	return _result_;}

Dynamic Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shape_obj > _result_ = new Shape_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::Graphics Shape_obj::get_graphics( ){
	HX_STACK_FRAME("openfl.display.Shape","get_graphics",0xb4a78d2b,"openfl.display.Shape.get_graphics","openfl/display/Shape.hx",47,0xe963f3a9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(51)
		::openfl::display::Graphics tmp2 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		this->__graphics = tmp2;
		HX_STACK_LINE(52)
		::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp3->__owner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(56)
	::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Shape_obj,get_graphics,return )


Shape_obj::Shape_obj()
{
}

void Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shape);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp == hx::paccAlways ? get_graphics() : graphics; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(Shape_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shape_obj::__mClass,"__mClass");
};

#endif

hx::Class Shape_obj::__mClass;

void Shape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shape","\x77","\xae","\x8d","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shape_obj >;
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
