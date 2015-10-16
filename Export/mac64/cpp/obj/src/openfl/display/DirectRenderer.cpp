#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void DirectRenderer_obj::__construct(::String __o_type)
{
HX_STACK_FRAME("openfl.display.DirectRenderer","new",0xe4324b68,"openfl.display.DirectRenderer.new","openfl/display/DirectRenderer.hx",18,0x16986dc6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
::String type = __o_type.Default(HX_HCSTRING("DirectRenderer","\xac","\x31","\xba","\xef"));
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//DirectRenderer_obj::~DirectRenderer_obj() { }

Dynamic DirectRenderer_obj::__CreateEmpty() { return  new DirectRenderer_obj; }
hx::ObjectPtr< DirectRenderer_obj > DirectRenderer_obj::__new(::String __o_type)
{  hx::ObjectPtr< DirectRenderer_obj > _result_ = new DirectRenderer_obj();
	_result_->__construct(__o_type);
	return _result_;}

Dynamic DirectRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectRenderer_obj > _result_ = new DirectRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic DirectRenderer_obj::get_render( ){
	HX_STACK_FRAME("openfl.display.DirectRenderer","get_render",0x6ffb5117,"openfl.display.DirectRenderer.get_render","openfl/display/DirectRenderer.hx",30,0x16986dc6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	Dynamic tmp = this->__render;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectRenderer_obj,get_render,return )

Dynamic DirectRenderer_obj::set_render( Dynamic value){
	HX_STACK_FRAME("openfl.display.DirectRenderer","set_render",0x7378ef8b,"openfl.display.DirectRenderer.set_render","openfl/display/DirectRenderer.hx",37,0x16986dc6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(39)
	Dynamic tmp = this->__render = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,set_render,return )


DirectRenderer_obj::DirectRenderer_obj()
{
}

void DirectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectRenderer);
	HX_MARK_MEMBER_NAME(__render,"__render");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__render,"__render");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DirectRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { if (inCallProp == hx::paccAlways) return get_render(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return __render; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_render") ) { return get_render_dyn(); }
		if (HX_FIELD_EQ(inName,"set_render") ) { return set_render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { if (inCallProp == hx::paccAlways) return set_render(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { __render=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));
	outFields->push(HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DirectRenderer_obj,__render),HX_HCSTRING("__render","\x76","\xd6","\x58","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	HX_HCSTRING("get_render","\x1f","\xdb","\xb0","\xf5"),
	HX_HCSTRING("set_render","\x93","\x79","\x2e","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class DirectRenderer_obj::__mClass;

void DirectRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DirectRenderer","\x76","\xb7","\x06","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DirectRenderer_obj >;
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
