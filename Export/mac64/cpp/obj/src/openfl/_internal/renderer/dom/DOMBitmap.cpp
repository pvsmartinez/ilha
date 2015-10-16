#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMBitmap
#include <openfl/_internal/renderer/dom/DOMBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
namespace dom{

Void DOMBitmap_obj::__construct()
{
	return null();
}

//DOMBitmap_obj::~DOMBitmap_obj() { }

Dynamic DOMBitmap_obj::__CreateEmpty() { return  new DOMBitmap_obj; }
hx::ObjectPtr< DOMBitmap_obj > DOMBitmap_obj::__new()
{  hx::ObjectPtr< DOMBitmap_obj > _result_ = new DOMBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic DOMBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMBitmap_obj > _result_ = new DOMBitmap_obj();
	_result_->__construct();
	return _result_;}

Void DOMBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMBitmap","render",0x729dea7a,"openfl._internal.renderer.dom.DOMBitmap.render","openfl/_internal/renderer/dom/DOMBitmap.hx",20,0x32124034)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,render,(void))

Void DOMBitmap_obj::renderCanvas( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMBitmap","renderCanvas",0x22facaf2,"openfl._internal.renderer.dom.DOMBitmap.renderCanvas","openfl/_internal/renderer/dom/DOMBitmap.hx",59,0x32124034)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderCanvas,(void))

Void DOMBitmap_obj::renderImage( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMBitmap","renderImage",0x8ed26a81,"openfl._internal.renderer.dom.DOMBitmap.renderImage","openfl/_internal/renderer/dom/DOMBitmap.hx",101,0x32124034)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderImage,(void))


DOMBitmap_obj::DOMBitmap_obj()
{
}

bool DOMBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderImage") ) { outValue = renderImage_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderCanvas") ) { outValue = renderCanvas_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderCanvas","\xce","\x58","\x98","\x27"),
	HX_HCSTRING("renderImage","\x25","\x4c","\x1a","\x89"),
	::String(null()) };

void DOMBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMBitmap","\xca","\x64","\xe9","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMBitmap_obj >;
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
} // end namespace dom
