#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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

Void CairoBitmap_obj::__construct()
{
	return null();
}

//CairoBitmap_obj::~CairoBitmap_obj() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return  new CairoBitmap_obj; }
hx::ObjectPtr< CairoBitmap_obj > CairoBitmap_obj::__new()
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBitmap","render",0xa19c46ee,"openfl._internal.renderer.cairo.CairoBitmap.render","openfl/_internal/renderer/cairo/CairoBitmap.hx",20,0x03302068)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(22)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		if ((tmp3)){
			HX_STACK_LINE(22)
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(22)
			tmp4 = true;
		}
		HX_STACK_LINE(22)
		if ((tmp4)){
			HX_STACK_LINE(22)
			return null();
		}
		HX_STACK_LINE(25)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(27)
		bool tmp5 = (bitmap->bitmapData != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		if ((tmp5)){
			HX_STACK_LINE(27)
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			HX_STACK_LINE(27)
			tmp6 = false;
		}
		HX_STACK_LINE(27)
		if ((tmp6)){
			HX_STACK_LINE(29)
			bool tmp7 = (bitmap->__mask != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			if ((tmp7)){
				HX_STACK_LINE(31)
				::openfl::display::DisplayObject tmp8 = bitmap->__mask;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(31)
				renderSession->maskManager->pushMask(tmp8);
			}
			HX_STACK_LINE(38)
			::openfl::geom::Matrix transform = bitmap->__worldTransform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(39)
			::openfl::geom::Rectangle tmp8 = bitmap->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			::openfl::geom::Rectangle scrollRect = tmp8;		HX_STACK_VAR(scrollRect,"scrollRect");
			HX_STACK_LINE(41)
			bool tmp9 = renderSession->roundPixels;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			if ((tmp9)){
				HX_STACK_LINE(43)
				::lime::math::Matrix3 tmp10 = transform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(43)
				::lime::math::Matrix3 matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(44)
				Float tmp11 = matrix->tx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(44)
				matrix->tx = tmp12;
				HX_STACK_LINE(45)
				Float tmp13 = matrix->ty;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				matrix->ty = tmp14;
				HX_STACK_LINE(46)
				::lime::math::Matrix3 tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(46)
				cairo->set_matrix(tmp15);
			}
			else{
				HX_STACK_LINE(51)
				::lime::math::Matrix3 tmp10 = transform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(51)
				cairo->set_matrix(tmp10);
			}
			HX_STACK_LINE(56)
			Dynamic tmp10 = bitmap->bitmapData->getSurface();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			Dynamic surface = tmp10;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(58)
			bool tmp11 = (surface != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			if ((tmp11)){
				HX_STACK_LINE(60)
				Dynamic tmp12 = surface;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				Dynamic tmp13 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				Dynamic pattern = tmp13;		HX_STACK_VAR(pattern,"pattern");
				HX_STACK_LINE(61)
				Dynamic tmp14 = pattern;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				bool tmp15 = bitmap->smoothing;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(61)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(61)
				if ((tmp15)){
					HX_STACK_LINE(61)
					tmp16 = (int)1;
				}
				else{
					HX_STACK_LINE(61)
					tmp16 = (int)3;
				}
				HX_STACK_LINE(61)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp14,tmp16);
				HX_STACK_LINE(63)
				bool tmp17 = (scrollRect != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				if ((tmp17)){
					HX_STACK_LINE(65)
					cairo->pushGroup();
					HX_STACK_LINE(66)
					Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(66)
					cairo->set_source(tmp18);
					HX_STACK_LINE(67)
					cairo->newPath();
					HX_STACK_LINE(68)
					Float tmp19 = scrollRect->x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(68)
					Float tmp20 = scrollRect->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(68)
					Float tmp21 = scrollRect->width;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(68)
					Float tmp22 = scrollRect->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(68)
					cairo->rectangle(tmp19,tmp20,tmp21,tmp22);
					HX_STACK_LINE(69)
					cairo->fill();
					HX_STACK_LINE(70)
					cairo->popGroupToSource();
				}
				else{
					HX_STACK_LINE(74)
					Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(74)
					cairo->set_source(tmp18);
				}
				HX_STACK_LINE(78)
				bool tmp18 = (bitmap->__worldAlpha == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(78)
				if ((tmp18)){
					HX_STACK_LINE(80)
					cairo->paint();
				}
				else{
					HX_STACK_LINE(84)
					Float tmp19 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(84)
					cairo->paintWithAlpha(tmp19);
				}
			}
			HX_STACK_LINE(90)
			bool tmp12 = (bitmap->__mask != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			if ((tmp12)){
				HX_STACK_LINE(92)
				renderSession->maskManager->popMask();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBitmap","\xd6","\x01","\xc6","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmap_obj >;
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
