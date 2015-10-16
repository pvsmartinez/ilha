#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
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
namespace canvas{

Void CanvasTextField_obj::__construct()
{
	return null();
}

//CanvasTextField_obj::~CanvasTextField_obj() { }

Dynamic CanvasTextField_obj::__CreateEmpty() { return  new CanvasTextField_obj; }
hx::ObjectPtr< CanvasTextField_obj > CanvasTextField_obj::__new()
{  hx::ObjectPtr< CanvasTextField_obj > _result_ = new CanvasTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CanvasTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasTextField_obj > _result_ = new CanvasTextField_obj();
	_result_->__construct();
	return _result_;}

Void CanvasTextField_obj::disableInputMode( ::openfl::_internal::text::TextEngine textEngine){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","disableInputMode",0x782779b9,"openfl._internal.renderer.canvas.CanvasTextField.disableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",38,0xcdf61a26)
		HX_STACK_ARG(textEngine,"textEngine")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,disableInputMode,(void))

Void CanvasTextField_obj::enableInputMode( ::openfl::_internal::text::TextEngine textEngine){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","enableInputMode",0x5a626bd6,"openfl._internal.renderer.canvas.CanvasTextField.enableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",47,0xcdf61a26)
		HX_STACK_ARG(textEngine,"textEngine")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,enableInputMode,(void))

Void CanvasTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","render",0xbf0ed28a,"openfl._internal.renderer.canvas.CanvasTextField.render","openfl/_internal/renderer/canvas/CanvasTextField.hx",110,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,render,(void))


CanvasTextField_obj::CanvasTextField_obj()
{
}

bool CanvasTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableInputMode") ) { outValue = enableInputMode_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableInputMode") ) { outValue = disableInputMode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("disableInputMode","\x85","\x89","\xad","\xe3"),
	HX_HCSTRING("enableInputMode","\x8a","\x59","\x8c","\xf3"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CanvasTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasTextField","\xba","\x1a","\xb4","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasTextField_obj >;
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
