#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
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
namespace cairo{

Void CairoMaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","new",0x3e0aed8c,"openfl._internal.renderer.cairo.CairoMaskManager.new","openfl/_internal/renderer/cairo/CairoMaskManager.hx",17,0xc9e099a4)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(tmp);
}
;
	return null();
}

//CairoMaskManager_obj::~CairoMaskManager_obj() { }

Dynamic CairoMaskManager_obj::__CreateEmpty() { return  new CairoMaskManager_obj; }
hx::ObjectPtr< CairoMaskManager_obj > CairoMaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< CairoMaskManager_obj > _result_ = new CairoMaskManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic CairoMaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoMaskManager_obj > _result_ = new CairoMaskManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CairoMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushMask",0xb35b173a,"openfl._internal.renderer.cairo.CairoMaskManager.pushMask","openfl/_internal/renderer/cairo/CairoMaskManager.hx",24,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(26)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::lime::graphics::cairo::Cairo cairo = tmp->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(28)
		cairo->save();
		HX_STACK_LINE(31)
		::openfl::geom::Matrix tmp1 = mask->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		::openfl::geom::Matrix transform = tmp1;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(33)
		::lime::math::Matrix3 tmp2 = transform->__toMatrix3();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		cairo->set_matrix(tmp2);
		HX_STACK_LINE(35)
		cairo->newPath();
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		mask->__renderCairoMask(tmp3);
		HX_STACK_LINE(37)
		cairo->clip();
	}
return null();
}


Void CairoMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushRect",0xb6ac2372,"openfl._internal.renderer.cairo.CairoMaskManager.pushRect","openfl/_internal/renderer/cairo/CairoMaskManager.hx",44,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(46)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::lime::graphics::cairo::Cairo cairo = tmp->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(47)
		cairo->save();
		HX_STACK_LINE(49)
		::lime::math::Matrix3 tmp1 = ::lime::math::Matrix3_obj::__new(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		cairo->set_matrix(tmp1);
		HX_STACK_LINE(51)
		cairo->newPath();
		HX_STACK_LINE(52)
		Float tmp2 = rect->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		Float tmp3 = rect->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		Float tmp4 = rect->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		Float tmp5 = rect->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		cairo->rectangle(tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(53)
		cairo->clip();
	}
return null();
}


Void CairoMaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","popMask",0x1cbc8a49,"openfl._internal.renderer.cairo.CairoMaskManager.popMask","openfl/_internal/renderer/cairo/CairoMaskManager.hx",58,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		tmp->cairo->restore();
	}
return null();
}


Void CairoMaskManager_obj::popRect( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","popRect",0x200d9681,"openfl._internal.renderer.cairo.CairoMaskManager.popRect","openfl/_internal/renderer/cairo/CairoMaskManager.hx",65,0xc9e099a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		::openfl::_internal::renderer::RenderSession tmp = this->renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		tmp->context->restore();
	}
return null();
}



CairoMaskManager_obj::CairoMaskManager_obj()
{
}

Dynamic CairoMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return popRect_dyn(); }
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
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoMaskManager_obj::__mClass;

void CairoMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoMaskManager","\x9a","\x77","\x92","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoMaskManager_obj >;
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
} // end namespace cairo
