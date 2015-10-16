#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMTextField
#include <openfl/_internal/renderer/dom/DOMTextField.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

Void DOMTextField_obj::__construct()
{
	return null();
}

//DOMTextField_obj::~DOMTextField_obj() { }

Dynamic DOMTextField_obj::__CreateEmpty() { return  new DOMTextField_obj; }
hx::ObjectPtr< DOMTextField_obj > DOMTextField_obj::__new()
{  hx::ObjectPtr< DOMTextField_obj > _result_ = new DOMTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic DOMTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMTextField_obj > _result_ = new DOMTextField_obj();
	_result_->__construct();
	return _result_;}

Void DOMTextField_obj::measureText( ::openfl::text::TextField textField){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","measureText",0x2926ab8f,"openfl._internal.renderer.dom.DOMTextField.measureText","openfl/_internal/renderer/dom/DOMTextField.hx",23,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DOMTextField_obj,measureText,(void))

Void DOMTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMTextField","render",0xcba99572,"openfl._internal.renderer.dom.DOMTextField.render","openfl/_internal/renderer/dom/DOMTextField.hx",66,0xc9b27f2c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMTextField_obj,render,(void))


DOMTextField_obj::DOMTextField_obj()
{
}

bool DOMTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void DOMTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMTextField","\xd2","\x0a","\x72","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMTextField_obj >;
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
