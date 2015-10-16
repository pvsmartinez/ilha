#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

Void DOMMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","new",0x8d658c18,"openfl._internal.renderer.dom.DOMMaskManager.new","openfl/_internal/renderer/dom/DOMMaskManager.hx",15,0x08bbb658)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(17)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
}
;
	return null();
}

//DOMMaskManager_obj::~DOMMaskManager_obj() { }

Dynamic DOMMaskManager_obj::__CreateEmpty() { return  new DOMMaskManager_obj; }
hx::ObjectPtr< DOMMaskManager_obj > DOMMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< DOMMaskManager_obj > _result_ = new DOMMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic DOMMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMMaskManager_obj > _result_ = new DOMMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DOMMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushMask",0xdaba3d2e,"openfl._internal.renderer.dom.DOMMaskManager.pushMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",22,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
	}
return null();
}


Void DOMMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushRect",0xde0b4966,"openfl._internal.renderer.dom.DOMMaskManager.pushRect","openfl/_internal/renderer/dom/DOMMaskManager.hx",43,0x08bbb658)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
	}
return null();
}


Void DOMMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","popMask",0x0cd75ed5,"openfl._internal.renderer.dom.DOMMaskManager.popMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",57,0x08bbb658)
		HX_STACK_THIS(this)
	}
return null();
}



DOMMaskManager_obj::DOMMaskManager_obj()
{
}

Dynamic DOMMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMMaskManager_obj::__mClass;

void DOMMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMMaskManager","\x26","\xe0","\xff","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMMaskManager_obj >;
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
