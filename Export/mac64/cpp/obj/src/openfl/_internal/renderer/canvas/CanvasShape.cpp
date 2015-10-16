#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasShape
#include <openfl/_internal/renderer/canvas/CanvasShape.h>
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
namespace _internal{
namespace renderer{
namespace canvas{

Void CanvasShape_obj::__construct()
{
	return null();
}

//CanvasShape_obj::~CanvasShape_obj() { }

Dynamic CanvasShape_obj::__CreateEmpty() { return  new CanvasShape_obj; }
hx::ObjectPtr< CanvasShape_obj > CanvasShape_obj::__new()
{  hx::ObjectPtr< CanvasShape_obj > _result_ = new CanvasShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasShape_obj > _result_ = new CanvasShape_obj();
	_result_->__construct();
	return _result_;}

Void CanvasShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasShape","render",0x1f16b136,"openfl._internal.renderer.canvas.CanvasShape.render","openfl/_internal/renderer/canvas/CanvasShape.hx",13,0x418319d2)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasShape_obj,render,(void))


CanvasShape_obj::CanvasShape_obj()
{
}

bool CanvasShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CanvasShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasShape","\x8e","\x1e","\x69","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasShape_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
