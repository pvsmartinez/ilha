#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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

Void CairoShape_obj::__construct()
{
	return null();
}

//CairoShape_obj::~CairoShape_obj() { }

Dynamic CairoShape_obj::__CreateEmpty() { return  new CairoShape_obj; }
hx::ObjectPtr< CairoShape_obj > CairoShape_obj::__new()
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Void CairoShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoShape","render",0x363dce2a,"openfl._internal.renderer.cairo.CairoShape.render","openfl/_internal/renderer/cairo/CairoShape.hx",14,0xfc9b2624)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(17)
		bool tmp = shape->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		if ((tmp3)){
			HX_STACK_LINE(17)
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(17)
			tmp4 = true;
		}
		HX_STACK_LINE(17)
		if ((tmp4)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(19)
		::openfl::display::Graphics graphics = shape->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(21)
		bool tmp5 = (graphics != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		if ((tmp5)){
			HX_STACK_LINE(23)
			::openfl::display::Graphics tmp6 = graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(23)
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(23)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7);
			HX_STACK_LINE(25)
			bool tmp8 = (graphics->__cairo != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(25)
			if ((tmp8)){
				HX_STACK_LINE(27)
				bool tmp9 = (shape->__mask != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(27)
				if ((tmp9)){
					HX_STACK_LINE(29)
					::openfl::display::DisplayObject tmp10 = shape->__mask;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(29)
					renderSession->maskManager->pushMask(tmp10);
				}
				HX_STACK_LINE(33)
				::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
				HX_STACK_LINE(34)
				::openfl::geom::Rectangle tmp10 = shape->get_scrollRect();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				::openfl::geom::Rectangle scrollRect = tmp10;		HX_STACK_VAR(scrollRect,"scrollRect");
				HX_STACK_LINE(35)
				::openfl::geom::Matrix transform = shape->__worldTransform;		HX_STACK_VAR(transform,"transform");
				HX_STACK_LINE(37)
				bool tmp11 = renderSession->roundPixels;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(37)
				if ((tmp11)){
					HX_STACK_LINE(39)
					::lime::math::Matrix3 tmp12 = transform->__toMatrix3();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(39)
					::lime::math::Matrix3 matrix = tmp12;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(40)
					Float tmp13 = matrix->tx;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(40)
					int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(40)
					matrix->tx = tmp14;
					HX_STACK_LINE(41)
					Float tmp15 = matrix->ty;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(41)
					int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(41)
					matrix->ty = tmp16;
					HX_STACK_LINE(42)
					::lime::math::Matrix3 tmp17 = matrix;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(42)
					cairo->set_matrix(tmp17);
				}
				else{
					HX_STACK_LINE(46)
					::lime::math::Matrix3 tmp12 = transform->__toMatrix3();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					cairo->set_matrix(tmp12);
				}
				HX_STACK_LINE(50)
				Dynamic tmp12 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(50)
				Float tmp13 = graphics->__bounds->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(50)
				Float tmp14 = graphics->__bounds->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(50)
				cairo->setSourceSurface(tmp12,tmp13,tmp14);
				HX_STACK_LINE(52)
				bool tmp15 = (scrollRect != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(52)
				if ((tmp15)){
					HX_STACK_LINE(54)
					cairo->pushGroup();
					HX_STACK_LINE(55)
					cairo->newPath();
					HX_STACK_LINE(56)
					Float tmp16 = graphics->__bounds->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(56)
					Float tmp17 = scrollRect->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(56)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(56)
					Float tmp19 = graphics->__bounds->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(56)
					Float tmp20 = scrollRect->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(56)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(56)
					Float tmp22 = scrollRect->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(56)
					Float tmp23 = scrollRect->height;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(56)
					cairo->rectangle(tmp18,tmp21,tmp22,tmp23);
					HX_STACK_LINE(57)
					cairo->fill();
					HX_STACK_LINE(58)
					cairo->popGroupToSource();
				}
				HX_STACK_LINE(62)
				Float tmp16 = shape->__worldAlpha;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				cairo->paintWithAlpha(tmp16);
				HX_STACK_LINE(64)
				bool tmp17 = (shape->__mask != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(64)
				if ((tmp17)){
					HX_STACK_LINE(66)
					renderSession->maskManager->popMask();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoShape","\x1a","\xeb","\xc9","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoShape_obj >;
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
