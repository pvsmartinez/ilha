#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

Void CairoGraphics_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","closePath",0x6dffa481,"openfl._internal.renderer.cairo.CairoGraphics.closePath","openfl/_internal/renderer/cairo/CairoGraphics.hx",58,0x744ae94c)
		HX_STACK_LINE(60)
		Dynamic tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		if ((tmp1)){
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(66)
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		tmp2->closePath();
		HX_STACK_LINE(67)
		::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		Dynamic tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		tmp3->set_source(tmp4);
		HX_STACK_LINE(68)
		bool tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		if ((tmp6)){
			HX_STACK_LINE(68)
			::lime::graphics::cairo::Cairo tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			tmp7->strokePreserve();
		}
		HX_STACK_LINE(69)
		::lime::graphics::cairo::Cairo tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		tmp7->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,closePath,(void))

Dynamic CairoGraphics_obj::createGradientPattern( ::openfl::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,Dynamic focalPointRatio){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createGradientPattern",0x9888a3a8,"openfl._internal.renderer.cairo.CairoGraphics.createGradientPattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",74,0x744ae94c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	HX_STACK_LINE(76)
	Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(78)
	switch( (int)(type->__Index())){
		case (int)0: {
			HX_STACK_LINE(82)
			bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(82)
			if ((tmp)){
				HX_STACK_LINE(82)
				::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(82)
				matrix = tmp1;
			}
			HX_STACK_LINE(84)
			::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(((Float)1638.4),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			::openfl::geom::Point tmp2 = matrix->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			::openfl::geom::Point point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(86)
			Float tmp3 = matrix->tx;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			::openfl::display::Graphics tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(86)
			Float tmp5 = tmp4->__bounds->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			Float x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(87)
			Float tmp7 = matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			::openfl::display::Graphics tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			Float tmp9 = tmp8->__bounds->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			Float y = tmp10;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(89)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(89)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(89)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(89)
			Float tmp15 = (point->x - matrix->tx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(89)
			Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(89)
			Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(tmp11,tmp12,(int)0,tmp13,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(89)
			pattern = tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(93)
			bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(93)
			if ((tmp)){
				HX_STACK_LINE(93)
				::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(93)
				matrix = tmp1;
			}
			HX_STACK_LINE(95)
			::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(((Float)-819.2),(int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			::openfl::geom::Point tmp2 = matrix->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			::openfl::geom::Point point1 = tmp2;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(96)
			::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(((Float)819.2),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			::openfl::geom::Point tmp4 = matrix->transformPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::openfl::geom::Point point2 = tmp4;		HX_STACK_VAR(point2,"point2");
			HX_STACK_LINE(98)
			::openfl::display::Graphics tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			Float tmp6 = tmp5->__bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			hx::AddEq(point1->x,tmp6);
			HX_STACK_LINE(99)
			::openfl::display::Graphics tmp7 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			Float tmp8 = tmp7->__bounds->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			hx::AddEq(point2->x,tmp8);
			HX_STACK_LINE(100)
			::openfl::display::Graphics tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Float tmp10 = tmp9->__bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			hx::AddEq(point1->y,tmp10);
			HX_STACK_LINE(101)
			::openfl::display::Graphics tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			Float tmp12 = tmp11->__bounds->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(101)
			hx::AddEq(point2->y,tmp12);
			HX_STACK_LINE(103)
			Float tmp13 = point1->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			Float tmp14 = point1->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(103)
			Float tmp15 = point2->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(103)
			Float tmp16 = point2->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(103)
			Dynamic tmp17 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(103)
			pattern = tmp17;
		}
		;break;
	}
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		int _g = colors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			if ((tmp1)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(107)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(109)
			Dynamic tmp3 = colors->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			int rgb = tmp3;		HX_STACK_VAR(rgb,"rgb");
			HX_STACK_LINE(110)
			Dynamic tmp4 = alphas->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			Float alpha = tmp4;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(111)
			int tmp5 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			int tmp6 = hx::UShr(tmp5,(int)16);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			Float tmp7 = (Float(tmp6) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			Float r = tmp7;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(112)
			int tmp8 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			int tmp9 = hx::UShr(tmp8,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(112)
			Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(112)
			Float g = tmp10;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(113)
			int tmp11 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			Float b = tmp12;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(115)
			Dynamic tmp13 = ratios->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(115)
			Float ratio = tmp14;		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(116)
			bool tmp15 = (ratio < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			if ((tmp15)){
				HX_STACK_LINE(116)
				ratio = (int)0;
			}
			HX_STACK_LINE(117)
			bool tmp16 = (ratio > (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			if ((tmp16)){
				HX_STACK_LINE(117)
				ratio = (int)1;
			}
			HX_STACK_LINE(119)
			Dynamic tmp17 = pattern;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(119)
			Float tmp18 = ratio;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			Float tmp19 = r;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(119)
			Float tmp20 = g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(119)
			Float tmp21 = b;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(119)
			Float tmp22 = alpha;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(119)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
		}
	}
	HX_STACK_LINE(123)
	Dynamic tmp = pattern;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	::lime::math::Matrix3 tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	::lime::math::Matrix3 mat = tmp1;		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(125)
	::openfl::geom::Rectangle tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	mat->tx = tmp2->x;
	HX_STACK_LINE(126)
	::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	mat->ty = tmp3->y;
	HX_STACK_LINE(128)
	Dynamic tmp4 = pattern;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	::lime::math::Matrix3 tmp5 = mat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp4,tmp5);
	HX_STACK_LINE(130)
	Dynamic tmp6 = pattern;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(130)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createImagePattern",0x42487dcd,"openfl._internal.renderer.cairo.CairoGraphics.createImagePattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",135,0x744ae94c)
	HX_STACK_ARG(bitmapFill,"bitmapFill")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(137)
	Dynamic tmp = bitmapFill->getSurface();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	Dynamic pattern = tmp1;		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(139)
	bool tmp2 = bitmapRepeat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	if ((tmp2)){
		HX_STACK_LINE(141)
		Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(tmp3,(int)1);
	}
	HX_STACK_LINE(145)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	HX_STACK_LINE(147)
	Dynamic tmp3 = pattern;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,createImagePattern,return )

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",152,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(154)
		bool tmp = (ry == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		if ((tmp)){
			HX_STACK_LINE(154)
			ry = rx;
		}
		HX_STACK_LINE(156)
		hx::MultEq(rx,((Float)0.5));
		HX_STACK_LINE(157)
		hx::MultEq(ry,((Float)0.5));
		HX_STACK_LINE(159)
		Float tmp1 = rx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		Float tmp2 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		if ((tmp3)){
			HX_STACK_LINE(159)
			Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			rx = tmp4;
		}
		HX_STACK_LINE(160)
		Float tmp4 = ry;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		Float tmp5 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		if ((tmp6)){
			HX_STACK_LINE(160)
			Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			ry = tmp7;
		}
		HX_STACK_LINE(162)
		Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(162)
		Float xe = tmp7;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(163)
		Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		Float ye = tmp8;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(164)
		Float tmp9 = rx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		Float tmp11 = rx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		Float tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(164)
		Float cx1 = tmp14;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(165)
		Float tmp15 = rx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(165)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(165)
		Float tmp17 = rx;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(165)
		Float tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(165)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(165)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(165)
		Float cx2 = tmp20;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(166)
		Float tmp21 = ry;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(166)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(166)
		Float tmp23 = ry;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(166)
		Float tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(166)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(166)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(166)
		Float cy1 = tmp26;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(167)
		Float tmp27 = ry;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(167)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(167)
		Float tmp29 = ry;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(167)
		Float tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(167)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(167)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(167)
		Float cy2 = tmp32;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(169)
		::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(169)
		Float tmp34 = xe;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(169)
		Float tmp35 = (ye - ry);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(169)
		tmp33->moveTo(tmp34,tmp35);
		HX_STACK_LINE(170)
		Float tmp36 = xe;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(170)
		Float tmp37 = (ye + cy2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(170)
		Float tmp38 = (xe + cx1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(170)
		Float tmp39 = (ye + cy1);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(170)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp36,tmp37,tmp38,tmp39);
		HX_STACK_LINE(171)
		Float tmp40 = (xe + cx2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(171)
		Float tmp41 = ye;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(171)
		Float tmp42 = (xe - rx);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(171)
		Float tmp43 = ye;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(171)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(172)
		::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(172)
		Float tmp45 = (x + rx);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(172)
		Float tmp46 = ye;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(172)
		tmp44->lineTo(tmp45,tmp46);
		HX_STACK_LINE(173)
		Float tmp47 = (x - cx2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(173)
		Float tmp48 = ye;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(173)
		Float tmp49 = (x - cx1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(173)
		Float tmp50 = (ye + cy1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(173)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp47,tmp48,tmp49,tmp50);
		HX_STACK_LINE(174)
		Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(174)
		Float tmp52 = (ye + cy2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(174)
		Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(174)
		Float tmp54 = (ye - ry);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(174)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp51,tmp52,tmp53,tmp54);
		HX_STACK_LINE(175)
		::lime::graphics::cairo::Cairo tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(175)
		Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(175)
		Float tmp57 = (y + ry);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(175)
		tmp55->lineTo(tmp56,tmp57);
		HX_STACK_LINE(176)
		Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(176)
		Float tmp59 = (y - cy2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(176)
		Float tmp60 = (x - cx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(176)
		Float tmp61 = (y - cy1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(176)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(177)
		Float tmp62 = (x - cx2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(177)
		Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(177)
		Float tmp64 = (x + rx);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(177)
		Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(177)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(178)
		::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(178)
		Float tmp67 = (xe - rx);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(178)
		Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(178)
		tmp66->lineTo(tmp67,tmp68);
		HX_STACK_LINE(179)
		Float tmp69 = (xe + cx2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(179)
		Float tmp70 = y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(179)
		Float tmp71 = (xe + cx1);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(179)
		Float tmp72 = (y - cy1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(179)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(180)
		Float tmp73 = xe;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(180)
		Float tmp74 = (y - cy2);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(180)
		Float tmp75 = xe;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(180)
		Float tmp76 = (y + ry);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(180)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp73,tmp74,tmp75,tmp76);
		HX_STACK_LINE(181)
		::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(181)
		Float tmp78 = xe;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(181)
		Float tmp79 = (ye - ry);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(181)
		tmp77->lineTo(tmp78,tmp79);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",186,0x744ae94c)
		HX_STACK_LINE(188)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		tmp->newPath();
		HX_STACK_LINE(189)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,false);
		HX_STACK_LINE(190)
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		tmp2->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",195,0x744ae94c)
		HX_STACK_LINE(197)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		tmp->newPath();
		HX_STACK_LINE(198)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,true);
		HX_STACK_LINE(199)
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		tmp2->closePath();
		HX_STACK_LINE(200)
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		tmp3->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","hitTest",0xddc21649,"openfl._internal.renderer.cairo.CairoGraphics.hitTest","openfl/_internal/renderer/cairo/CairoGraphics.hx",205,0x744ae94c)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(208)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
	HX_STACK_LINE(209)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
	HX_STACK_LINE(211)
	int tmp = graphics->__commands->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	if ((tmp3)){
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(211)
		tmp4 = true;
	}
	HX_STACK_LINE(211)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(211)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(211)
	if ((tmp6)){
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		tmp7 = (tmp11 == (int)0);
	}
	else{
		HX_STACK_LINE(211)
		tmp7 = true;
	}
	HX_STACK_LINE(211)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(211)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(211)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(211)
	if ((tmp9)){
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(211)
		Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(211)
		tmp10 = (tmp14 == (int)0);
	}
	else{
		HX_STACK_LINE(211)
		tmp10 = true;
	}
	HX_STACK_LINE(211)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(211)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(211)
	if ((tmp11)){
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(211)
		::openfl::geom::Rectangle tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(211)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(211)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(211)
		Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(211)
		bool tmp19 = tmp14->contains(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(211)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(211)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(211)
		tmp12 = !(tmp21);
	}
	else{
		HX_STACK_LINE(211)
		tmp12 = true;
	}
	HX_STACK_LINE(211)
	if ((tmp12)){
		HX_STACK_LINE(213)
		return false;
	}
	else{
		HX_STACK_LINE(217)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = true;
		HX_STACK_LINE(219)
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(219)
		hx::SubEq(x,tmp13->x);
		HX_STACK_LINE(220)
		::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(220)
		hx::SubEq(y,tmp14->y);
		HX_STACK_LINE(222)
		bool tmp15 = (graphics->__cairo == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(222)
		if ((tmp15)){
			HX_STACK_LINE(224)
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(224)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(224)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(224)
			::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(224)
			Float tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(224)
			int tmp21 = ::Math_obj::floor(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(224)
			::openfl::display::BitmapData tmp22 = ::openfl::display::BitmapData_obj::__new(tmp18,tmp21,true,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(224)
			::openfl::display::BitmapData bitmap = tmp22;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(225)
			Dynamic tmp23 = bitmap->getSurface();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(225)
			Dynamic surface = tmp23;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(226)
			::lime::graphics::cairo::Cairo tmp24 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(226)
			graphics->__cairo = tmp24;
			HX_STACK_LINE(227)
			graphics->__bitmap = bitmap;
		}
		HX_STACK_LINE(231)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
		HX_STACK_LINE(233)
		::openfl::_internal::renderer::DrawCommandBuffer tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(233)
		tmp16->clear();
		HX_STACK_LINE(234)
		::openfl::_internal::renderer::DrawCommandBuffer tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(234)
		tmp17->clear();
		HX_STACK_LINE(236)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
		HX_STACK_LINE(237)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
		HX_STACK_LINE(239)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
		HX_STACK_LINE(240)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
		HX_STACK_LINE(242)
		::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(242)
		tmp18->newPath();
		HX_STACK_LINE(244)
		::openfl::_internal::renderer::DrawCommandReader tmp19 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(244)
		::openfl::_internal::renderer::DrawCommandReader data = tmp19;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(246)
			Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(246)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(246)
				if ((tmp21)){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(246)
				::openfl::_internal::renderer::DrawCommandType tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(246)
				::openfl::_internal::renderer::DrawCommandType type = tmp22;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(246)
				++(_g);
				HX_STACK_LINE(248)
				switch( (int)(type->__Index())){
					case (int)3: {
						HX_STACK_LINE(252)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(252)
						{
							HX_STACK_LINE(252)
							{
								HX_STACK_LINE(252)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(252)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(252)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(252)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(252)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(252)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(252)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(252)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(252)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(252)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(252)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(252)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(252)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(252)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(252)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(252)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(252)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(252)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(252)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							HX_STACK_LINE(252)
							tmp23 = data;
						}
						HX_STACK_LINE(252)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(253)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(253)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(253)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(253)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(253)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(253)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(253)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(253)
						int tmp35 = (tmp34 + (int)3);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(253)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(253)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(253)
						int tmp39 = (tmp38 + (int)4);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(253)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(253)
						int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(253)
						int tmp43 = (tmp42 + (int)5);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(253)
						Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(253)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(253)
						int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(253)
						int tmp47 = (tmp46 + (int)6);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(253)
						Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(253)
						tmp24->cubicCurveTo(tmp28,tmp32,tmp36,tmp40,tmp44,tmp48);
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(254)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(254)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(254)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(254)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(254)
						int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(254)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(254)
						int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(254)
						int tmp60 = (tmp59 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(254)
						Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(254)
						int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(254)
						int tmp64 = (tmp63 + (int)4);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(254)
						Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(254)
						int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(254)
						int tmp68 = (tmp67 + (int)5);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(254)
						Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(254)
						::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(254)
						int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(254)
						int tmp72 = (tmp71 + (int)6);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(254)
						Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(254)
						tmp49->cubicCurveTo(tmp53,tmp57,tmp61,tmp65,tmp69,tmp73);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(258)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(258)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(258)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(258)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(258)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(258)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(258)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(258)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(258)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(258)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(258)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(258)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(258)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(258)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(258)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(258)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(258)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(258)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(258)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							HX_STACK_LINE(258)
							tmp23 = data;
						}
						HX_STACK_LINE(258)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(259)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(259)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(259)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(259)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(259)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(259)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(259)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(259)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(259)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(259)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(259)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(259)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(259)
						tmp24->curveTo(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(260)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(260)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(260)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(260)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(260)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(260)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(260)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(260)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(260)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(260)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(260)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(260)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(260)
						tmp41->curveTo(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(264)
						{
							HX_STACK_LINE(264)
							{
								HX_STACK_LINE(264)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(264)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(264)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(264)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(264)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(264)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(264)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(264)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(264)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(264)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(264)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(264)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(264)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(264)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(264)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(264)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(264)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(264)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(264)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							HX_STACK_LINE(264)
							tmp23 = data;
						}
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(265)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(265)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(265)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(265)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(265)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(265)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(265)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(265)
						tmp24->lineTo(tmp28,tmp32);
						HX_STACK_LINE(266)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(266)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(266)
						int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(266)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(266)
						Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(266)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(266)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(266)
						int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(266)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(266)
						tmp33->lineTo(tmp37,tmp41);
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(270)
						{
							HX_STACK_LINE(270)
							{
								HX_STACK_LINE(270)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(270)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(270)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(270)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(270)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(270)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(270)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(270)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(270)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(270)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(270)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(270)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(270)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(270)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(270)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(270)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(270)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(270)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(270)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							HX_STACK_LINE(270)
							tmp23 = data;
						}
						HX_STACK_LINE(270)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(271)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(271)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(271)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(271)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(271)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(271)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(271)
						tmp24->moveTo(tmp28,tmp32);
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(272)
						int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(272)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(272)
						Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(272)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(272)
						int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(272)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(272)
						tmp33->moveTo(tmp37,tmp41);
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(276)
						{
							HX_STACK_LINE(276)
							{
								HX_STACK_LINE(276)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(276)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(276)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(276)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(276)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(276)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(276)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(276)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(276)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(276)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(276)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(276)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(276)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(276)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(276)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(276)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(276)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(276)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(276)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							HX_STACK_LINE(276)
							tmp23 = data;
						}
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(277)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(277)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(277)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(277)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(277)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(277)
						int tmp32 = (tmp31 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(277)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(277)
						Dynamic tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(277)
						int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(277)
						int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(277)
						Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(277)
						Dynamic tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(277)
						int tmp41 = c->oPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(277)
						int tmp42 = (tmp41 + (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(277)
						Dynamic tmp43 = tmp40->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(277)
						::openfl::display::LineScaleMode tmp44 = ((::openfl::display::LineScaleMode)(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(277)
						int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(277)
						int tmp47 = (tmp46 + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(277)
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(277)
						::openfl::display::CapsStyle tmp49 = ((::openfl::display::CapsStyle)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(277)
						int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(277)
						int tmp52 = (tmp51 + (int)6);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(277)
						Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(277)
						::openfl::display::JointStyle tmp54 = ((::openfl::display::JointStyle)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(277)
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(277)
						int tmp56 = c->oPos;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(277)
						int tmp57 = (tmp56 + (int)7);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(277)
						Dynamic tmp58 = tmp55->o->__GetItem(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(277)
						Dynamic tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(277)
						tmp24->lineStyle(tmp29,tmp34,(int)1,tmp39,tmp44,tmp49,tmp54,tmp59);
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(281)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(281)
						{
							HX_STACK_LINE(281)
							{
								HX_STACK_LINE(281)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(281)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(281)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(281)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(281)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(281)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(281)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(281)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(281)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(281)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
							HX_STACK_LINE(281)
							tmp23 = data;
						}
						HX_STACK_LINE(281)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(282)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(282)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(282)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(282)
						::openfl::display::GradientType tmp29 = ((::openfl::display::GradientType)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(282)
						int tmp31 = c->iiPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(282)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(282)
						int tmp34 = c->ffPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(282)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(282)
						int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(282)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(282)
						int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(282)
						int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(282)
						Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(282)
						::openfl::geom::Matrix tmp43 = ((::openfl::geom::Matrix)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(282)
						int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(282)
						int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(282)
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(282)
						::openfl::display::SpreadMethod tmp48 = ((::openfl::display::SpreadMethod)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(282)
						int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(282)
						int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(282)
						Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(282)
						::openfl::display::InterpolationMethod tmp53 = ((::openfl::display::InterpolationMethod)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(282)
						int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(282)
						int tmp56 = (tmp55 + (int)4);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(282)
						Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(282)
						Dynamic tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(282)
						tmp24->lineGradientStyle(tmp29,tmp30->ii->__get(tmp32).StaticCast< Array< int > >(),tmp33->ff->__get(tmp35).StaticCast< Array< Float > >(),tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp43,tmp48,tmp53,tmp58);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(286)
						{
							HX_STACK_LINE(286)
							{
								HX_STACK_LINE(286)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(286)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(286)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(286)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(286)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(286)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(286)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(286)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(286)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(286)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(286)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(286)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(286)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(286)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(286)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(286)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(286)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(286)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(286)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
							HX_STACK_LINE(286)
							tmp23 = data;
						}
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(287)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(287)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(287)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(287)
						::openfl::display::BitmapData tmp29 = ((::openfl::display::BitmapData)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(287)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(287)
						int tmp32 = (tmp31 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(287)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(287)
						::openfl::geom::Matrix tmp34 = ((::openfl::geom::Matrix)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(287)
						int tmp36 = c->bPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(287)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(287)
						bool tmp38 = tmp35->b->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(287)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(287)
						int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(287)
						int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(287)
						bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(287)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(287)
						tmp24->lineBitmapStyle(tmp29,tmp34,tmp39,tmp44);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(291)
						{
							HX_STACK_LINE(291)
							{
								HX_STACK_LINE(291)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(291)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(291)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(291)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(291)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(291)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(291)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(291)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(291)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(291)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(291)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(291)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(291)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(291)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(291)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(291)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(291)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(291)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(291)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							HX_STACK_LINE(291)
							data;
						}
						HX_STACK_LINE(292)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						HX_STACK_LINE(293)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						HX_STACK_LINE(295)
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(295)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(295)
						if ((tmp23)){
							HX_STACK_LINE(295)
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(295)
							::lime::graphics::cairo::Cairo tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(295)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(295)
							Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(295)
							Float tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(295)
							Float tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(295)
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(295)
							tmp24 = false;
						}
						HX_STACK_LINE(295)
						if ((tmp24)){
							HX_STACK_LINE(297)
							data->destroy();
							HX_STACK_LINE(298)
							return true;
						}
						HX_STACK_LINE(302)
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(302)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(302)
						if ((tmp25)){
							HX_STACK_LINE(302)
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(302)
							::lime::graphics::cairo::Cairo tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(302)
							Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(302)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(302)
							Float tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(302)
							Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(302)
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(302)
							tmp26 = false;
						}
						HX_STACK_LINE(302)
						if ((tmp26)){
							HX_STACK_LINE(304)
							data->destroy();
							HX_STACK_LINE(305)
							return true;
						}
						HX_STACK_LINE(309)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						HX_STACK_LINE(310)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
					;break;
					case (int)0: case (int)1: case (int)2: {
						HX_STACK_LINE(314)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						HX_STACK_LINE(315)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						HX_STACK_LINE(317)
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(317)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(317)
						if ((tmp23)){
							HX_STACK_LINE(317)
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(317)
							::lime::graphics::cairo::Cairo tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(317)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(317)
							Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(317)
							Float tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(317)
							Float tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(317)
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(317)
							tmp24 = false;
						}
						HX_STACK_LINE(317)
						if ((tmp24)){
							HX_STACK_LINE(319)
							data->destroy();
							HX_STACK_LINE(320)
							return true;
						}
						HX_STACK_LINE(324)
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(324)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(324)
						if ((tmp25)){
							HX_STACK_LINE(324)
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(324)
							::lime::graphics::cairo::Cairo tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(324)
							Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(324)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(324)
							Float tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(324)
							Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(324)
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(324)
							tmp26 = false;
						}
						HX_STACK_LINE(324)
						if ((tmp26)){
							HX_STACK_LINE(326)
							data->destroy();
							HX_STACK_LINE(327)
							return true;
						}
						HX_STACK_LINE(331)
						bool tmp27 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(331)
						if ((tmp27)){
							HX_STACK_LINE(333)
							::openfl::_internal::renderer::DrawCommandReader tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(333)
							{
								HX_STACK_LINE(333)
								{
									HX_STACK_LINE(333)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(333)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(333)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(333)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(333)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(333)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(333)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(333)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(333)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(333)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(333)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(333)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(333)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(333)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(333)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(333)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(333)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(333)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(333)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
								HX_STACK_LINE(333)
								tmp28 = data;
							}
							HX_STACK_LINE(333)
							::openfl::_internal::renderer::DrawCommandReader c = tmp28;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(334)
							int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(334)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(334)
							Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(334)
							::openfl::display::BitmapData tmp34 = ((::openfl::display::BitmapData)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(334)
							int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(334)
							int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(334)
							Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(334)
							::openfl::geom::Matrix tmp39 = ((::openfl::geom::Matrix)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(334)
							int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(334)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(334)
							bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(334)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(334)
							int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(334)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(334)
							bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(334)
							tmp29->beginBitmapFill(tmp34,tmp39,tmp43,tmp47);
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(335)
							int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(335)
							int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(335)
							Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(335)
							::openfl::display::BitmapData tmp53 = ((::openfl::display::BitmapData)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(335)
							int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(335)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(335)
							Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(335)
							::openfl::geom::Matrix tmp58 = ((::openfl::geom::Matrix)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(335)
							int tmp60 = c->bPos;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(335)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(335)
							bool tmp62 = tmp59->b->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(335)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(335)
							int tmp64 = c->bPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(335)
							int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(335)
							bool tmp66 = tmp63->b->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(335)
							tmp48->beginBitmapFill(tmp53,tmp58,tmp62,tmp66);
						}
						else{
							HX_STACK_LINE(337)
							bool tmp28 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(337)
							if ((tmp28)){
								HX_STACK_LINE(339)
								::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(339)
								{
									HX_STACK_LINE(339)
									{
										HX_STACK_LINE(339)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(339)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(339)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(339)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(339)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(339)
												hx::AddEq(data->ffPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)3);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)9: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(339)
												hx::AddEq(data->tsPos,(int)1);
												HX_STACK_LINE(339)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(339)
												hx::AddEq(data->bPos,(int)1);
												HX_STACK_LINE(339)
												hx::AddEq(data->iPos,(int)2);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(339)
												hx::AddEq(data->iPos,(int)1);
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(339)
												Dynamic();
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(339)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(339)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(339)
												hx::AddEq(data->ffPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)8);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(339)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)18: {
												HX_STACK_LINE(339)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(339)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(339)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
									HX_STACK_LINE(339)
									tmp29 = data;
								}
								HX_STACK_LINE(339)
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(340)
								int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(340)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(340)
								Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(340)
								::openfl::display::GradientType tmp35 = ((::openfl::display::GradientType)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(340)
								int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(340)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(340)
								int tmp40 = c->ffPos;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(340)
								int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(340)
								int tmp43 = c->iiPos;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(340)
								int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(340)
								int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(340)
								int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(340)
								Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(340)
								::openfl::geom::Matrix tmp49 = ((::openfl::geom::Matrix)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(340)
								int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(340)
								int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(340)
								Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(340)
								::openfl::display::SpreadMethod tmp54 = ((::openfl::display::SpreadMethod)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(340)
								int tmp56 = c->oPos;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(340)
								int tmp57 = (tmp56 + (int)3);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(340)
								Dynamic tmp58 = tmp55->o->__GetItem(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(340)
								::openfl::display::InterpolationMethod tmp59 = ((::openfl::display::InterpolationMethod)(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(340)
								::openfl::_internal::renderer::DrawCommandBuffer tmp60 = c->buffer;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(340)
								int tmp61 = c->oPos;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(340)
								int tmp62 = (tmp61 + (int)4);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(340)
								Dynamic tmp63 = tmp60->o->__GetItem(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(340)
								Dynamic tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(340)
								tmp30->beginGradientFill(tmp35,tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp39->ff->__get(tmp41).StaticCast< Array< Float > >(),tmp42->ii->__get(tmp44).StaticCast< Array< int > >(),tmp49,tmp54,tmp59,tmp64);
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(341)
								int tmp67 = c->oPos;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(341)
								int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(341)
								Dynamic tmp69 = tmp66->o->__GetItem(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(341)
								::openfl::display::GradientType tmp70 = ((::openfl::display::GradientType)(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(341)
								int tmp72 = c->iiPos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(341)
								int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(341)
								int tmp75 = c->ffPos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(341)
								int tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(341)
								int tmp78 = c->iiPos;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(341)
								int tmp79 = (tmp78 + (int)1);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(341)
								int tmp81 = c->oPos;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(341)
								int tmp82 = (tmp81 + (int)1);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(341)
								Dynamic tmp83 = tmp80->o->__GetItem(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(341)
								::openfl::geom::Matrix tmp84 = ((::openfl::geom::Matrix)(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp85 = c->buffer;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(341)
								int tmp86 = c->oPos;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(341)
								int tmp87 = (tmp86 + (int)2);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(341)
								Dynamic tmp88 = tmp85->o->__GetItem(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(341)
								::openfl::display::SpreadMethod tmp89 = ((::openfl::display::SpreadMethod)(tmp88));		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp90 = c->buffer;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(341)
								int tmp91 = c->oPos;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(341)
								int tmp92 = (tmp91 + (int)3);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(341)
								Dynamic tmp93 = tmp90->o->__GetItem(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(341)
								::openfl::display::InterpolationMethod tmp94 = ((::openfl::display::InterpolationMethod)(tmp93));		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(341)
								::openfl::_internal::renderer::DrawCommandBuffer tmp95 = c->buffer;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(341)
								int tmp96 = c->oPos;		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(341)
								int tmp97 = (tmp96 + (int)4);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(341)
								Dynamic tmp98 = tmp95->o->__GetItem(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(341)
								Dynamic tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(341)
								tmp65->beginGradientFill(tmp70,tmp71->ii->__get(tmp73).StaticCast< Array< int > >(),tmp74->ff->__get(tmp76).StaticCast< Array< Float > >(),tmp77->ii->__get(tmp79).StaticCast< Array< int > >(),tmp84,tmp89,tmp94,tmp99);
							}
							else{
								HX_STACK_LINE(345)
								::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(345)
								{
									HX_STACK_LINE(345)
									{
										HX_STACK_LINE(345)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(345)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(345)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(345)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(345)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(345)
												hx::AddEq(data->ffPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)3);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)9: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(345)
												hx::AddEq(data->tsPos,(int)1);
												HX_STACK_LINE(345)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(345)
												hx::AddEq(data->bPos,(int)1);
												HX_STACK_LINE(345)
												hx::AddEq(data->iPos,(int)2);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(345)
												hx::AddEq(data->iPos,(int)1);
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(345)
												Dynamic();
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(345)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(345)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(345)
												hx::AddEq(data->ffPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)8);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(345)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)18: {
												HX_STACK_LINE(345)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(345)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(345)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
									HX_STACK_LINE(345)
									tmp29 = data;
								}
								HX_STACK_LINE(345)
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(346)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(346)
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(346)
								int tmp32 = c->iPos;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(346)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(346)
								int tmp34 = tmp31->i->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(346)
								tmp30->beginFill(tmp34,(int)1);
								HX_STACK_LINE(347)
								::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(347)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(347)
								int tmp37 = c->iPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(347)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(347)
								int tmp39 = tmp36->i->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(347)
								tmp35->beginFill(tmp39,(int)1);
							}
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(353)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(353)
						{
							HX_STACK_LINE(353)
							{
								HX_STACK_LINE(353)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(353)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(353)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(353)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(353)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(353)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(353)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(353)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(353)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(353)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(353)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(353)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(353)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(353)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(353)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(353)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(353)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(353)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(353)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							HX_STACK_LINE(353)
							tmp23 = data;
						}
						HX_STACK_LINE(353)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(354)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(354)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(354)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(354)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(354)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(354)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(354)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(354)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(354)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(354)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(354)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(354)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(354)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(354)
						tmp24->drawCircle(tmp28,tmp32,tmp36);
						HX_STACK_LINE(355)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(355)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(355)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(355)
						int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(355)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(355)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(355)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(355)
						int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(355)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(355)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(355)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(355)
						int tmp48 = (tmp47 + (int)2);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(355)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(355)
						tmp37->drawCircle(tmp41,tmp45,tmp49);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(359)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							{
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(359)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(359)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(359)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(359)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(359)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(359)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(359)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(359)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(359)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(359)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(359)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(359)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(359)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(359)
							tmp23 = data;
						}
						HX_STACK_LINE(359)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(360)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(360)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(360)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(360)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(360)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(360)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(360)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(360)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(360)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(360)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(360)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(360)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(360)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(360)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(360)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(360)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(360)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(360)
						tmp24->drawEllipse(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(361)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(361)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(361)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(361)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(361)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(361)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(361)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(361)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(361)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(361)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(361)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(361)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(361)
						tmp41->drawEllipse(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(365)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(365)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(365)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(365)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(365)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(365)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(365)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(365)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(365)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(365)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(365)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(365)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(365)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(365)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(365)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(365)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(365)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(365)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
							HX_STACK_LINE(365)
							tmp23 = data;
						}
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(366)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(366)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(366)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(366)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(366)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(366)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(366)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(366)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(366)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(366)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(366)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(366)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(366)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(366)
						tmp24->drawRect(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(367)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(367)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(367)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(367)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(367)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(367)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(367)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(367)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(367)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(367)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(367)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(367)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(367)
						tmp41->drawRect(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(371)
							{
								HX_STACK_LINE(371)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(371)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(371)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(371)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(371)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(371)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(371)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(371)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(371)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(371)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(371)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(371)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(371)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(371)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(371)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(371)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(371)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(371)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(371)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
							HX_STACK_LINE(371)
							tmp23 = data;
						}
						HX_STACK_LINE(371)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(372)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(372)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(372)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(372)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(372)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(372)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(372)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(372)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(372)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(372)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(372)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(372)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(372)
						int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(372)
						int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(372)
						Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(372)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(372)
						int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(372)
						int tmp47 = (tmp46 + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(372)
						Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(372)
						tmp24->drawRoundRect(tmp28,tmp32,tmp36,tmp40,tmp44,tmp48);
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(373)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(373)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(373)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(373)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(373)
						int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(373)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(373)
						int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(373)
						int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(373)
						Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(373)
						int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(373)
						int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(373)
						Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(373)
						int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(373)
						int tmp68 = (tmp67 + (int)4);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(373)
						Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(373)
						int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(373)
						int tmp72 = (tmp71 + (int)5);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(373)
						Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(373)
						tmp49->drawRoundRect(tmp53,tmp57,tmp61,tmp65,tmp69,tmp73);
					}
					;break;
					default: {
						HX_STACK_LINE(377)
						{
							HX_STACK_LINE(377)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(377)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(377)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(377)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(377)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(377)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(377)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(377)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(377)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(377)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(377)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(377)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(377)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(377)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(377)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(377)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(377)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(377)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(377)
						data->prev = type;
					}
				}
			}
		}
		HX_STACK_LINE(383)
		::openfl::_internal::renderer::DrawCommandBuffer tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(383)
		int tmp21 = tmp20->get_length();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(383)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(383)
		if ((tmp22)){
			HX_STACK_LINE(385)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
		}
		HX_STACK_LINE(389)
		::openfl::_internal::renderer::DrawCommandBuffer tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(389)
		int tmp24 = tmp23->get_length();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(389)
		bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(389)
		if ((tmp25)){
			HX_STACK_LINE(391)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
		}
		HX_STACK_LINE(395)
		data->destroy();
		HX_STACK_LINE(397)
		bool tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(397)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(397)
		if ((tmp26)){
			HX_STACK_LINE(397)
			::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(397)
			::lime::graphics::cairo::Cairo tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(397)
			Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(397)
			Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(397)
			Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(397)
			Float tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(397)
			tmp27 = tmp29->inFill(tmp32,tmp33);
		}
		else{
			HX_STACK_LINE(397)
			tmp27 = false;
		}
		HX_STACK_LINE(397)
		if ((tmp27)){
			HX_STACK_LINE(399)
			return true;
		}
		HX_STACK_LINE(403)
		bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(403)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(403)
		if ((tmp28)){
			HX_STACK_LINE(403)
			::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(403)
			::lime::graphics::cairo::Cairo tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(403)
			Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(403)
			Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(403)
			Float tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(403)
			Float tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(403)
			tmp29 = tmp31->inStroke(tmp34,tmp35);
		}
		else{
			HX_STACK_LINE(403)
			tmp29 = false;
		}
		HX_STACK_LINE(403)
		if ((tmp29)){
			HX_STACK_LINE(405)
			return true;
		}
	}
	HX_STACK_LINE(412)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",417,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(419)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(419)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(419)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(419)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(419)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(419)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(419)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(419)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( Array< Float > uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",424,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(426)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(426)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(427)
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		int tmp3 = uvt->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(430)
		{
			HX_STACK_LINE(430)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(430)
			int tmp4 = (len + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(430)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(430)
			while((true)){
				HX_STACK_LINE(430)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(430)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(430)
				if ((tmp6)){
					HX_STACK_LINE(430)
					break;
				}
				HX_STACK_LINE(430)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(430)
				int t = tmp7;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(432)
				bool tmp8 = skipT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(432)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(432)
				if ((tmp8)){
					HX_STACK_LINE(432)
					int tmp10 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(432)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(432)
					tmp9 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(432)
					tmp9 = false;
				}
				HX_STACK_LINE(432)
				if ((tmp9)){
					HX_STACK_LINE(434)
					continue;
				}
				HX_STACK_LINE(438)
				int tmp10 = (t - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(438)
				Float tmp11 = uvt->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(438)
				tmp2 = ((Dynamic)(tmp11));
				HX_STACK_LINE(440)
				bool tmp12 = (max < tmp2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(440)
				if ((tmp12)){
					HX_STACK_LINE(442)
					max = tmp2;
				}
			}
		}
		HX_STACK_LINE(448)
		Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(448)
			this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
			HX_STACK_LINE(448)
			tmp4 = this1;
		}
		HX_STACK_LINE(448)
		Array< Float > result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(450)
			int tmp5 = (len + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(450)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(450)
			while((true)){
				HX_STACK_LINE(450)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(450)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(450)
				if ((tmp7)){
					HX_STACK_LINE(450)
					break;
				}
				HX_STACK_LINE(450)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(450)
				int t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(452)
				bool tmp9 = skipT;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(452)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(452)
				if ((tmp9)){
					HX_STACK_LINE(452)
					int tmp11 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(452)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(452)
					tmp10 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(452)
					tmp10 = false;
				}
				HX_STACK_LINE(452)
				if ((tmp10)){
					HX_STACK_LINE(454)
					continue;
				}
				HX_STACK_LINE(458)
				int tmp11 = (t - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(458)
				Float tmp12 = uvt->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(458)
				Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				Float tmp14 = max;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				result->push(tmp15);
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< Float > &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",462,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(462)
		Dynamic tmp5 = _Function_1_1::Block(result,max);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Void CairoGraphics_obj::playCommands( ::openfl::_internal::renderer::DrawCommandBuffer commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",467,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(469)
		int tmp = commands->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(469)
		if ((tmp1)){
			HX_STACK_LINE(469)
			return null();
		}
		HX_STACK_LINE(471)
		::openfl::display::Graphics tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = tmp2->__bounds;
		HX_STACK_LINE(473)
		::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(473)
		Float offsetX = tmp3->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(474)
		::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		Float offsetY = tmp4->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(476)
		Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(477)
		Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(479)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(480)
		Float startX = ((Float)0.0);		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(481)
		Float startY = ((Float)0.0);		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(483)
		::lime::graphics::cairo::Cairo tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		tmp5->set_fillRule((int)1);
		HX_STACK_LINE(484)
		::lime::graphics::cairo::Cairo tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		tmp6->set_antialias((int)3);
		HX_STACK_LINE(486)
		bool hasPath = false;		HX_STACK_VAR(hasPath,"hasPath");
		HX_STACK_LINE(488)
		::openfl::_internal::renderer::DrawCommandReader tmp7 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(commands);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(488)
		::openfl::_internal::renderer::DrawCommandReader data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(490)
			Array< ::Dynamic > _g1 = commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(490)
			while((true)){
				HX_STACK_LINE(490)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(490)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(490)
				if ((tmp9)){
					HX_STACK_LINE(490)
					break;
				}
				HX_STACK_LINE(490)
				::openfl::_internal::renderer::DrawCommandType tmp10 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(490)
				::openfl::_internal::renderer::DrawCommandType type = tmp10;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(490)
				++(_g);
				HX_STACK_LINE(492)
				int _switch_1 = (type->__Index());
				if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(496)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(496)
					{
						HX_STACK_LINE(496)
						{
							HX_STACK_LINE(496)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(496)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(496)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(496)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(496)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(496)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(496)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(496)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(496)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(496)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(496)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(496)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(496)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(496)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(496)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(496)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(496)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(496)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(496)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
						HX_STACK_LINE(496)
						tmp11 = data;
					}
					HX_STACK_LINE(496)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(497)
					hasPath = true;
					HX_STACK_LINE(498)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(498)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(498)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(498)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(498)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(498)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(498)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(498)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(498)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(498)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(498)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(498)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(498)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(498)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(498)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(498)
					int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(498)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(498)
					Float tmp29 = offsetX;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(498)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(498)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(498)
					int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(498)
					int tmp33 = (tmp32 + (int)4);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(498)
					Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(498)
					Float tmp35 = offsetY;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(498)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(498)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(498)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(498)
					int tmp39 = (tmp38 + (int)5);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(498)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(498)
					Float tmp41 = offsetX;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(498)
					Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(498)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(498)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(498)
					int tmp45 = (tmp44 + (int)6);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(498)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(498)
					Float tmp47 = offsetY;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(498)
					Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(498)
					tmp12->curveTo(tmp18,tmp24,tmp30,tmp36,tmp42,tmp48);
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(502)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(502)
					{
						HX_STACK_LINE(502)
						{
							HX_STACK_LINE(502)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(502)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(502)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(502)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(502)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(502)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(502)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(502)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(502)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(502)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(502)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(502)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(502)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(502)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(502)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(502)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(502)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(502)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(502)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
						HX_STACK_LINE(502)
						tmp11 = data;
					}
					HX_STACK_LINE(502)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(503)
					hasPath = true;
					HX_STACK_LINE(504)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(504)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(504)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(504)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(504)
					Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(504)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(504)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(504)
					int tmp19 = c->fPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(504)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(504)
					Float tmp21 = tmp18->f->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(504)
					Float tmp22 = offsetY;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(504)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(504)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(504)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(504)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(504)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(504)
					Float tmp28 = offsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(504)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(504)
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(504)
					int tmp31 = c->fPos;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(504)
					int tmp32 = (tmp31 + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(504)
					Float tmp33 = tmp30->f->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(504)
					Float tmp34 = offsetY;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(504)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(504)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp17,tmp23,tmp29,tmp35);
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(508)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(508)
					{
						HX_STACK_LINE(508)
						{
							HX_STACK_LINE(508)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(508)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(508)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(508)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(508)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(508)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(508)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(508)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(508)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(508)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(508)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(508)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(508)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(508)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(508)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(508)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(508)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(508)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(508)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
						HX_STACK_LINE(508)
						tmp11 = data;
					}
					HX_STACK_LINE(508)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(509)
					hasPath = true;
					HX_STACK_LINE(510)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(510)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(510)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(510)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(510)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(510)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(510)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(510)
					int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(510)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(510)
					Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(510)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(510)
					int tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(510)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(510)
					Float tmp28 = offsetY;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(510)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(510)
					tmp12->moveTo(tmp23,tmp29);
					HX_STACK_LINE(511)
					::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(511)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(511)
					int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(511)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(511)
					Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(511)
					Float tmp35 = offsetX;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(511)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(511)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(511)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(511)
					int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(511)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(511)
					Float tmp41 = offsetY;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(511)
					Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(511)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(511)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(511)
					int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(511)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(511)
					Float tmp47 = ::Math_obj::PI;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(511)
					Float tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(511)
					tmp30->arc(tmp36,tmp42,tmp46,(int)0,tmp48);
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(515)
					{
						HX_STACK_LINE(515)
						{
							HX_STACK_LINE(515)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(515)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(515)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(515)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(515)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(515)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(515)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(515)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(515)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(515)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(515)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(515)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(515)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(515)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(515)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(515)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(515)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(515)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(515)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
						HX_STACK_LINE(515)
						tmp11 = data;
					}
					HX_STACK_LINE(515)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(516)
					hasPath = true;
					HX_STACK_LINE(517)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(517)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(517)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(517)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(517)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(517)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(517)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(517)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(517)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(517)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(517)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(517)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(517)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(517)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(517)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(517)
					int tmp27 = (tmp26 + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(517)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(517)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(517)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(517)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(517)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(517)
					tmp12->rectangle(tmp18,tmp24,tmp28,tmp32);
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(521)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(521)
					{
						HX_STACK_LINE(521)
						{
							HX_STACK_LINE(521)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(521)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(521)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(521)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(521)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(521)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(521)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(521)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(521)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(521)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(521)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(521)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(521)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(521)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(521)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(521)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(521)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(521)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(521)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
						HX_STACK_LINE(521)
						tmp11 = data;
					}
					HX_STACK_LINE(521)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(522)
					hasPath = true;
					HX_STACK_LINE(524)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(524)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(524)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(524)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(524)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(525)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(525)
					int tmp17 = c->fPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(525)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(525)
					Float tmp19 = tmp16->f->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(525)
					Float y = tmp19;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(526)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(526)
					int tmp21 = c->fPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(526)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(526)
					Float tmp23 = tmp20->f->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(526)
					Float width = tmp23;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(527)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(527)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(527)
					int tmp26 = (tmp25 + (int)3);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(527)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(527)
					Float height = tmp27;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(529)
					hx::SubEq(x,offsetX);
					HX_STACK_LINE(530)
					hx::SubEq(y,offsetY);
					HX_STACK_LINE(532)
					Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
					HX_STACK_LINE(533)
					Float tmp28 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(533)
					Float tmp29 = kappa;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(533)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(533)
					Float ox = tmp30;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(534)
					Float tmp31 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(534)
					Float tmp32 = kappa;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(534)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(534)
					Float oy = tmp33;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(535)
					Float tmp34 = (x + width);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(535)
					Float xe = tmp34;		HX_STACK_VAR(xe,"xe");
					HX_STACK_LINE(536)
					Float tmp35 = (y + height);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(536)
					Float ye = tmp35;		HX_STACK_VAR(ye,"ye");
					HX_STACK_LINE(537)
					Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(537)
					Float tmp37 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(537)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(537)
					Float xm = tmp38;		HX_STACK_VAR(xm,"xm");
					HX_STACK_LINE(538)
					Float tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(538)
					Float tmp40 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(538)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(538)
					Float ym = tmp41;		HX_STACK_VAR(ym,"ym");
					HX_STACK_LINE(540)
					::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(540)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(540)
					Float tmp44 = ym;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(540)
					tmp42->moveTo(tmp43,tmp44);
					HX_STACK_LINE(541)
					::lime::graphics::cairo::Cairo tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(541)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(541)
					Float tmp47 = (ym - oy);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(541)
					Float tmp48 = (xm - ox);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(541)
					Float tmp49 = y;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(541)
					Float tmp50 = xm;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(541)
					Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(541)
					tmp45->curveTo(tmp46,tmp47,tmp48,tmp49,tmp50,tmp51);
					HX_STACK_LINE(542)
					::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(542)
					Float tmp53 = (xm + ox);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(542)
					Float tmp54 = y;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(542)
					Float tmp55 = xe;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(542)
					Float tmp56 = (ym - oy);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(542)
					Float tmp57 = xe;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(542)
					Float tmp58 = ym;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(542)
					tmp52->curveTo(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58);
					HX_STACK_LINE(543)
					::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(543)
					Float tmp60 = xe;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(543)
					Float tmp61 = (ym + oy);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(543)
					Float tmp62 = (xm + ox);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(543)
					Float tmp63 = ye;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(543)
					Float tmp64 = xm;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(543)
					Float tmp65 = ye;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(543)
					tmp59->curveTo(tmp60,tmp61,tmp62,tmp63,tmp64,tmp65);
					HX_STACK_LINE(544)
					::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(544)
					Float tmp67 = (xm - ox);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(544)
					Float tmp68 = ye;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(544)
					Float tmp69 = x;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(544)
					Float tmp70 = (ym + oy);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(544)
					Float tmp71 = x;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(544)
					Float tmp72 = ym;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(544)
					tmp66->curveTo(tmp67,tmp68,tmp69,tmp70,tmp71,tmp72);
				}
				else if (  ( _switch_1==(int)9)){
					HX_STACK_LINE(548)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(548)
					{
						HX_STACK_LINE(548)
						{
							HX_STACK_LINE(548)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(548)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(548)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(548)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(548)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(548)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(548)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(548)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(548)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(548)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(548)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(548)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(548)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(548)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(548)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(548)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(548)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(548)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(548)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
						HX_STACK_LINE(548)
						tmp11 = data;
					}
					HX_STACK_LINE(548)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(549)
					hasPath = true;
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(550)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(550)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(550)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(550)
					Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(550)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(550)
					int tmp19 = c->fPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(550)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(550)
					Float tmp21 = tmp18->f->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(550)
					Float tmp22 = offsetY;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(550)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(550)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(550)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(550)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(550)
					int tmp29 = c->fPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(550)
					int tmp30 = (tmp29 + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(550)
					Float tmp31 = tmp28->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(550)
					int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(550)
					int tmp34 = (tmp33 + (int)4);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(550)
					Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(550)
					int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(550)
					int tmp38 = (tmp37 + (int)5);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(550)
					Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(550)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp17,tmp23,tmp27,tmp31,tmp35,tmp39);
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(554)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(554)
					{
						HX_STACK_LINE(554)
						{
							HX_STACK_LINE(554)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(554)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(554)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(554)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(554)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(554)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(554)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(554)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(554)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(554)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(554)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(554)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(554)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(554)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(554)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(554)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(554)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(554)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(554)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
						HX_STACK_LINE(554)
						tmp11 = data;
					}
					HX_STACK_LINE(554)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(555)
					hasPath = true;
					HX_STACK_LINE(556)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(556)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(556)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(556)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(556)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(556)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(556)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(556)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(556)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(556)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(556)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(556)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(556)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(556)
					tmp12->lineTo(tmp18,tmp24);
					HX_STACK_LINE(558)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(558)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(558)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(558)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(558)
					positionX = tmp28;
					HX_STACK_LINE(559)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(559)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(559)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(559)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(559)
					positionY = tmp32;
				}
				else if (  ( _switch_1==(int)17)){
					HX_STACK_LINE(563)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(563)
					{
						HX_STACK_LINE(563)
						{
							HX_STACK_LINE(563)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(563)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(563)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(563)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(563)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(563)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(563)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(563)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(563)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(563)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(563)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(563)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(563)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(563)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(563)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(563)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(563)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(563)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(563)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
						HX_STACK_LINE(563)
						tmp11 = data;
					}
					HX_STACK_LINE(563)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(564)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(564)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(564)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(564)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(564)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(564)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(564)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(564)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(564)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(564)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(564)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(564)
					tmp12->moveTo(tmp18,tmp24);
					HX_STACK_LINE(566)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(566)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(566)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(566)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(566)
					positionX = tmp28;
					HX_STACK_LINE(567)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(567)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(567)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(567)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(567)
					positionY = tmp32;
					HX_STACK_LINE(569)
					closeGap = true;
					HX_STACK_LINE(570)
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(570)
					int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(570)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(570)
					Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(570)
					startX = tmp36;
					HX_STACK_LINE(571)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(571)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(571)
					int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(571)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(571)
					startY = tmp40;
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(575)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(575)
					{
						HX_STACK_LINE(575)
						{
							HX_STACK_LINE(575)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(575)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(575)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(575)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(575)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(575)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(575)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(575)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(575)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(575)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(575)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(575)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(575)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(575)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(575)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(575)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(575)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(575)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(575)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
						HX_STACK_LINE(575)
						tmp11 = data;
					}
					HX_STACK_LINE(575)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(576)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(576)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(576)
					if ((tmp12)){
						HX_STACK_LINE(576)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(576)
						tmp13 = false;
					}
					HX_STACK_LINE(576)
					if ((tmp13)){
						HX_STACK_LINE(578)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
					}
					HX_STACK_LINE(582)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(582)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(582)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(582)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(584)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(584)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(584)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(584)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(584)
					Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(584)
					bool tmp22 = (tmp21 == null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(584)
					if ((tmp22)){
						HX_STACK_LINE(586)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
					}
					else{
						HX_STACK_LINE(590)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
						HX_STACK_LINE(592)
						::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(592)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(592)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(592)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(592)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(592)
						Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(592)
						bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(592)
						Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(592)
						if ((tmp29)){
							HX_STACK_LINE(592)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(592)
							int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(592)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(592)
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(592)
							tmp30 = tmp34;
						}
						else{
							HX_STACK_LINE(592)
							tmp30 = (int)1;
						}
						HX_STACK_LINE(592)
						tmp23->set_lineWidth(tmp30);
						HX_STACK_LINE(594)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(594)
						int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(594)
						int tmp33 = (tmp32 + (int)6);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(594)
						Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(594)
						::openfl::display::JointStyle tmp35 = ((::openfl::display::JointStyle)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(594)
						bool tmp36 = (tmp35 == null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(594)
						if ((tmp36)){
							HX_STACK_LINE(596)
							::lime::graphics::cairo::Cairo tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(596)
							tmp37->set_lineJoin((int)1);
						}
						else{
							HX_STACK_LINE(600)
							::lime::graphics::cairo::Cairo tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(600)
							int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(600)
							{
								HX_STACK_LINE(600)
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(600)
								int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(600)
								int tmp41 = (tmp40 + (int)6);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(600)
								Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(600)
								::openfl::display::JointStyle _g2 = ((::openfl::display::JointStyle)(tmp42));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(600)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(602)
										tmp38 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(603)
										tmp38 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(604)
										tmp38 = (int)1;
									}
								}
							}
							HX_STACK_LINE(600)
							tmp37->set_lineJoin(tmp38);
						}
						HX_STACK_LINE(610)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(610)
						int tmp38 = c->oPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(610)
						int tmp39 = (tmp38 + (int)5);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(610)
						Dynamic tmp40 = tmp37->o->__GetItem(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(610)
						::openfl::display::CapsStyle tmp41 = ((::openfl::display::CapsStyle)(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(610)
						bool tmp42 = (tmp41 == null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(610)
						if ((tmp42)){
							HX_STACK_LINE(612)
							::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(612)
							tmp43->set_lineCap((int)1);
						}
						else{
							HX_STACK_LINE(616)
							::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(616)
							int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(616)
							{
								HX_STACK_LINE(616)
								::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(616)
								int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(616)
								int tmp47 = (tmp46 + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(616)
								Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(616)
								::openfl::display::CapsStyle _g2 = ((::openfl::display::CapsStyle)(tmp48));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(616)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(618)
										tmp44 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(619)
										tmp44 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(620)
										tmp44 = (int)1;
									}
								}
							}
							HX_STACK_LINE(616)
							tmp43->set_lineCap(tmp44);
						}
						HX_STACK_LINE(626)
						::lime::graphics::cairo::Cairo tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(626)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(626)
						int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(626)
						int tmp46 = (tmp45 + (int)7);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(626)
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(626)
						Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(626)
						bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(626)
						Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(626)
						if ((tmp49)){
							HX_STACK_LINE(626)
							tmp50 = (int)3;
						}
						else{
							HX_STACK_LINE(626)
							::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(626)
							int tmp52 = c->oPos;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(626)
							int tmp53 = (tmp52 + (int)7);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(626)
							Dynamic tmp54 = tmp51->o->__GetItem(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(626)
							tmp50 = tmp54;
						}
						HX_STACK_LINE(626)
						tmp43->set_miterLimit(tmp50);
						HX_STACK_LINE(628)
						::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(628)
						int tmp52 = c->oPos;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(628)
						int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(628)
						Dynamic tmp54 = tmp51->o->__GetItem(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(628)
						Dynamic tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(628)
						bool tmp56 = (tmp55 != null());		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(628)
						if ((tmp56)){
							HX_STACK_LINE(630)
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(630)
							int tmp58 = c->oPos;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(630)
							int tmp59 = (tmp58 + (int)1);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(630)
							Dynamic tmp60 = tmp57->o->__GetItem(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(630)
							Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(630)
							int tmp62 = (int(tmp61) & int((int)16711680));		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(630)
							int tmp63 = hx::UShr(tmp62,(int)16);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(630)
							Float tmp64 = (Float(tmp63) / Float((int)255));		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(630)
							Float r = tmp64;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(631)
							::openfl::_internal::renderer::DrawCommandBuffer tmp65 = c->buffer;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(631)
							int tmp66 = c->oPos;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(631)
							int tmp67 = (tmp66 + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(631)
							Dynamic tmp68 = tmp65->o->__GetItem(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(631)
							Dynamic tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(631)
							int tmp70 = (int(tmp69) & int((int)65280));		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(631)
							int tmp71 = hx::UShr(tmp70,(int)8);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(631)
							Float tmp72 = (Float(tmp71) / Float((int)255));		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(631)
							Float g = tmp72;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(632)
							::openfl::_internal::renderer::DrawCommandBuffer tmp73 = c->buffer;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(632)
							int tmp74 = c->oPos;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(632)
							int tmp75 = (tmp74 + (int)1);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(632)
							Dynamic tmp76 = tmp73->o->__GetItem(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(632)
							Dynamic tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(632)
							int tmp78 = (int(tmp77) & int((int)255));		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(632)
							Float tmp79 = (Float(tmp78) / Float((int)255));		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(632)
							Float b = tmp79;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(634)
							::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(634)
							int tmp81 = c->oPos;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(634)
							int tmp82 = (tmp81 + (int)2);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(634)
							Dynamic tmp83 = tmp80->o->__GetItem(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(634)
							Dynamic tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(634)
							bool tmp85 = (tmp84 == (int)1);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(634)
							bool tmp86 = !(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(634)
							bool tmp87;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(634)
							if ((tmp86)){
								HX_STACK_LINE(634)
								::openfl::_internal::renderer::DrawCommandBuffer tmp88 = c->buffer;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(634)
								::openfl::_internal::renderer::DrawCommandBuffer tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(634)
								int tmp90 = c->oPos;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(634)
								int tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(634)
								int tmp92 = (tmp91 + (int)2);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(634)
								int tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(634)
								Dynamic tmp94 = tmp89->o->__GetItem(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(634)
								Dynamic tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(634)
								Dynamic tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(634)
								tmp87 = (tmp96 == null());
							}
							else{
								HX_STACK_LINE(634)
								tmp87 = true;
							}
							HX_STACK_LINE(634)
							if ((tmp87)){
								HX_STACK_LINE(636)
								Float tmp88 = r;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(636)
								Float tmp89 = g;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(636)
								Float tmp90 = b;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(636)
								Dynamic tmp91 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(tmp88,tmp89,tmp90);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(636)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp91;
							}
							else{
								HX_STACK_LINE(640)
								Float tmp88 = r;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(640)
								Float tmp89 = g;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(640)
								Float tmp90 = b;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(640)
								::openfl::_internal::renderer::DrawCommandBuffer tmp91 = c->buffer;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(640)
								int tmp92 = c->oPos;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(640)
								int tmp93 = (tmp92 + (int)2);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(640)
								Dynamic tmp94 = tmp91->o->__GetItem(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(640)
								Dynamic tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(640)
								Dynamic tmp96 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp88,tmp89,tmp90,tmp95);		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(640)
								::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp96;
							}
						}
					}
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(650)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(650)
					{
						HX_STACK_LINE(650)
						{
							HX_STACK_LINE(650)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(650)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(650)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(650)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(650)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(650)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(650)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(650)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(650)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(650)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(650)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(650)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(650)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(650)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(650)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(650)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(650)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(650)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(650)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
						HX_STACK_LINE(650)
						tmp11 = data;
					}
					HX_STACK_LINE(650)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(651)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(651)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(651)
					if ((tmp12)){
						HX_STACK_LINE(651)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(651)
						tmp13 = false;
					}
					HX_STACK_LINE(651)
					if ((tmp13)){
						HX_STACK_LINE(653)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
					}
					HX_STACK_LINE(657)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(657)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(657)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(657)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(658)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(658)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(658)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(658)
					::openfl::display::GradientType tmp21 = ((::openfl::display::GradientType)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(658)
					int tmp23 = c->iiPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(658)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(658)
					int tmp26 = c->ffPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(658)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(658)
					int tmp29 = c->iiPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(658)
					int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(658)
					int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(658)
					int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(658)
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(658)
					::openfl::geom::Matrix tmp35 = ((::openfl::geom::Matrix)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(658)
					int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(658)
					int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(658)
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(658)
					::openfl::display::SpreadMethod tmp40 = ((::openfl::display::SpreadMethod)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(658)
					int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(658)
					int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(658)
					Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(658)
					::openfl::display::InterpolationMethod tmp45 = ((::openfl::display::InterpolationMethod)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(658)
					int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(658)
					int tmp48 = (tmp47 + (int)4);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(658)
					Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(658)
					Dynamic tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(658)
					Dynamic tmp51 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp21,tmp22->ii->__get(tmp24).StaticCast< Array< int > >(),tmp25->ff->__get(tmp27).StaticCast< Array< Float > >(),tmp28->ii->__get(tmp30).StaticCast< Array< int > >(),tmp35,tmp40,tmp45,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(658)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp51;
					HX_STACK_LINE(660)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(664)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(664)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(664)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(664)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(664)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(664)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(664)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(664)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(664)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(664)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(664)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(664)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(664)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(664)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(664)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(664)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(664)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(664)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(664)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
						HX_STACK_LINE(664)
						tmp11 = data;
					}
					HX_STACK_LINE(664)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(665)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(665)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(665)
					if ((tmp12)){
						HX_STACK_LINE(665)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(665)
						tmp13 = false;
					}
					HX_STACK_LINE(665)
					if ((tmp13)){
						HX_STACK_LINE(667)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath();
					}
					HX_STACK_LINE(671)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(671)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(671)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(671)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(672)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(672)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(672)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(672)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(672)
					::openfl::display::BitmapData tmp21 = ((::openfl::display::BitmapData)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(672)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(672)
					int tmp23 = c->oPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(672)
					int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(672)
					Dynamic tmp25 = tmp22->o->__GetItem(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(672)
					::openfl::geom::Matrix tmp26 = ((::openfl::geom::Matrix)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(672)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(672)
					int tmp28 = c->bPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(672)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(672)
					bool tmp30 = tmp27->b->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(672)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(672)
					Dynamic tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp21,tmp26,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(672)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp32;
					HX_STACK_LINE(674)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(678)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(678)
					{
						HX_STACK_LINE(678)
						{
							HX_STACK_LINE(678)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(678)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(678)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(678)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(678)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(678)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(678)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(678)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(678)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(678)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(678)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(678)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(678)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(678)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(678)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(678)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(678)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(678)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(678)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
						HX_STACK_LINE(678)
						tmp11 = data;
					}
					HX_STACK_LINE(678)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(679)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(679)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(679)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(679)
					::openfl::display::BitmapData tmp16 = ((::openfl::display::BitmapData)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(679)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(679)
					int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(679)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(679)
					::openfl::geom::Matrix tmp21 = ((::openfl::geom::Matrix)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(679)
					int tmp23 = c->bPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(679)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(679)
					bool tmp25 = tmp22->b->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(679)
					Dynamic tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp16,tmp21,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(679)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp26;
					HX_STACK_LINE(681)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(681)
					int tmp28 = c->oPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(681)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(681)
					Dynamic tmp30 = tmp27->o->__GetItem(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(681)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = ((::openfl::display::BitmapData)(tmp30));
					HX_STACK_LINE(682)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(682)
					int tmp32 = c->bPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(682)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(682)
					bool tmp34 = tmp31->b->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(682)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = tmp34;
					HX_STACK_LINE(684)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(688)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(688)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(688)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(688)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(688)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(688)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(688)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(688)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(688)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(688)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
						HX_STACK_LINE(688)
						tmp11 = data;
					}
					HX_STACK_LINE(688)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(689)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(689)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(689)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(689)
					bool tmp16 = (tmp15 < ((Float)0.005));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(689)
					if ((tmp16)){
						HX_STACK_LINE(691)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
					}
					else{
						HX_STACK_LINE(695)
						Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(695)
						bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(695)
						if ((tmp18)){
							HX_STACK_LINE(697)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						HX_STACK_LINE(701)
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(701)
						int tmp20 = c->iPos;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(701)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(701)
						int tmp22 = tmp19->i->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(701)
						int tmp23 = (int(tmp22) & int((int)16711680));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(701)
						int tmp24 = hx::UShr(tmp23,(int)16);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(701)
						Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(701)
						::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(701)
						int tmp27 = c->iPos;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(701)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(701)
						int tmp29 = tmp26->i->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(701)
						int tmp30 = (int(tmp29) & int((int)65280));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(701)
						int tmp31 = hx::UShr(tmp30,(int)8);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(701)
						Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(701)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(701)
						int tmp34 = c->iPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(701)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(701)
						int tmp36 = tmp33->i->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(701)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(701)
						Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(701)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(701)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(701)
						int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(701)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(701)
						Dynamic tmp43 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp25,tmp32,tmp38,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(701)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp43;
						HX_STACK_LINE(702)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
					HX_STACK_LINE(706)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(710)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(710)
					{
						HX_STACK_LINE(710)
						{
							HX_STACK_LINE(710)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(710)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(710)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(710)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(710)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(710)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(710)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(710)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(710)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(710)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(710)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(710)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(710)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(710)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(710)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(710)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(710)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(710)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(710)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
						HX_STACK_LINE(710)
						tmp11 = data;
					}
					HX_STACK_LINE(710)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(711)
					Dynamic tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(711)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(711)
					if ((tmp13)){
						HX_STACK_LINE(713)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
					}
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp14 = c->buffer;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(717)
					int tmp15 = c->oPos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(717)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(717)
					Dynamic tmp17 = tmp14->o->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(717)
					::openfl::display::GradientType tmp18 = ((::openfl::display::GradientType)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(717)
					int tmp20 = c->iiPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(717)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(717)
					int tmp23 = c->ffPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(717)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(717)
					int tmp26 = c->iiPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(717)
					int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(717)
					int tmp29 = c->oPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(717)
					int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(717)
					Dynamic tmp31 = tmp28->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(717)
					::openfl::geom::Matrix tmp32 = ((::openfl::geom::Matrix)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(717)
					int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(717)
					int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(717)
					Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(717)
					::openfl::display::SpreadMethod tmp37 = ((::openfl::display::SpreadMethod)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(717)
					int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(717)
					int tmp40 = (tmp39 + (int)3);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(717)
					Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(717)
					::openfl::display::InterpolationMethod tmp42 = ((::openfl::display::InterpolationMethod)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(717)
					int tmp44 = c->oPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(717)
					int tmp45 = (tmp44 + (int)4);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(717)
					Dynamic tmp46 = tmp43->o->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(717)
					Dynamic tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(717)
					Dynamic tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp18,tmp19->ii->__get(tmp21).StaticCast< Array< int > >(),tmp22->ff->__get(tmp24).StaticCast< Array< Float > >(),tmp25->ii->__get(tmp27).StaticCast< Array< int > >(),tmp32,tmp37,tmp42,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(717)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp48;
					HX_STACK_LINE(719)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					HX_STACK_LINE(720)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)11)){
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(724)
					{
						HX_STACK_LINE(724)
						{
							HX_STACK_LINE(724)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(724)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(724)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(724)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(724)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(724)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(724)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(724)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(724)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(724)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(724)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(724)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(724)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(724)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(724)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(724)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(724)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(724)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(724)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						HX_STACK_LINE(724)
						tmp11 = data;
					}
					HX_STACK_LINE(724)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(725)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(725)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(725)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(725)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(725)
					Array< Float > v = ((Array< Float >)(tmp15));		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(726)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(726)
					int tmp17 = c->oPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(726)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(726)
					Dynamic tmp19 = tmp16->o->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(726)
					Array< int > ind = ((Array< int >)(tmp19));		HX_STACK_VAR(ind,"ind");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(727)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(727)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(727)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(727)
					Array< Float > uvt = ((Array< Float >)(tmp23));		HX_STACK_VAR(uvt,"uvt");
					HX_STACK_LINE(728)
					::openfl::display::BitmapData tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(728)
					bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(728)
					bool colorFill = tmp25;		HX_STACK_VAR(colorFill,"colorFill");
					HX_STACK_LINE(730)
					bool tmp26 = colorFill;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(730)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(730)
					if ((tmp26)){
						HX_STACK_LINE(730)
						tmp27 = (uvt != null());
					}
					else{
						HX_STACK_LINE(730)
						tmp27 = false;
					}
					HX_STACK_LINE(730)
					if ((tmp27)){
						HX_STACK_LINE(732)
						break;
					}
					HX_STACK_LINE(736)
					int width = (int)0;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(737)
					int height = (int)0;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(739)
					bool tmp28 = colorFill;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(739)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(739)
					if ((tmp29)){
						HX_STACK_LINE(743)
						bool tmp30 = (uvt == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(743)
						if ((tmp30)){
							HX_STACK_LINE(745)
							Array< Float > tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								Array< Float > this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(745)
								this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
								HX_STACK_LINE(745)
								tmp31 = this1;
							}
							HX_STACK_LINE(745)
							uvt = tmp31;
							HX_STACK_LINE(747)
							{
								HX_STACK_LINE(747)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(747)
								int tmp32 = v->length;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(747)
								Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(747)
								int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(747)
								int _g2 = tmp34;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(747)
								while((true)){
									HX_STACK_LINE(747)
									bool tmp35 = (_g3 < _g2);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(747)
									bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(747)
									if ((tmp36)){
										HX_STACK_LINE(747)
										break;
									}
									HX_STACK_LINE(747)
									int tmp37 = (_g3)++;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(747)
									int i = tmp37;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(749)
									int tmp38 = (i * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(749)
									Float tmp39 = v->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(749)
									Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(749)
									::openfl::display::BitmapData tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(749)
									int tmp42 = tmp41->width;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(749)
									Float tmp43 = (Float(tmp40) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(749)
									uvt->push(tmp43);
									HX_STACK_LINE(750)
									int tmp44 = (i * (int)2);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(750)
									int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(750)
									Float tmp46 = v->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(750)
									Dynamic tmp47 = ((Dynamic)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(750)
									::openfl::display::BitmapData tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(750)
									int tmp49 = tmp48->height;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(750)
									Float tmp50 = (Float(tmp47) / Float(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(750)
									uvt->push(tmp50);
								}
							}
						}
						HX_STACK_LINE(756)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(756)
						int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(756)
						int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(756)
						Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(756)
						int tmp35 = ((Array< Float >)(tmp34))->length;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(756)
						int tmp36 = v->length;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(756)
						bool tmp37 = (tmp35 != tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(756)
						bool skipT = tmp37;		HX_STACK_VAR(skipT,"skipT");
						HX_STACK_LINE(757)
						Array< Float > tmp38 = uvt;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(757)
						bool tmp39 = skipT;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(757)
						Dynamic tmp40 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(757)
						Dynamic normalizedUVT = tmp40;		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
						HX_STACK_LINE(758)
						Float maxUVT = normalizedUVT->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxUVT,"maxUVT");
						HX_STACK_LINE(759)
						uvt = normalizedUVT->__Field(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00"), hx::paccDynamic );
						HX_STACK_LINE(761)
						bool tmp41 = (maxUVT > (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(761)
						if ((tmp41)){
							HX_STACK_LINE(762)
							::openfl::geom::Rectangle tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(762)
							Float tmp43 = tmp42->width;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(762)
							int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(762)
							width = tmp44;
							HX_STACK_LINE(763)
							::openfl::geom::Rectangle tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(763)
							Float tmp46 = tmp45->height;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(763)
							int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(763)
							height = tmp47;
						}
						else{
							HX_STACK_LINE(768)
							::openfl::display::BitmapData tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(768)
							width = tmp42->width;
							HX_STACK_LINE(769)
							::openfl::display::BitmapData tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(769)
							height = tmp43->height;
						}
					}
					HX_STACK_LINE(775)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(776)
					int tmp30 = ind->length;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(776)
					int l = tmp30;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(778)
					int a_;		HX_STACK_VAR(a_,"a_");
					HX_STACK_LINE(778)
					int b_;		HX_STACK_VAR(b_,"b_");
					HX_STACK_LINE(778)
					int c_;		HX_STACK_VAR(c_,"c_");
					HX_STACK_LINE(779)
					int iax;		HX_STACK_VAR(iax,"iax");
					HX_STACK_LINE(779)
					int iay;		HX_STACK_VAR(iay,"iay");
					HX_STACK_LINE(779)
					int ibx;		HX_STACK_VAR(ibx,"ibx");
					HX_STACK_LINE(779)
					int iby;		HX_STACK_VAR(iby,"iby");
					HX_STACK_LINE(779)
					int icx;		HX_STACK_VAR(icx,"icx");
					HX_STACK_LINE(779)
					int icy;		HX_STACK_VAR(icy,"icy");
					HX_STACK_LINE(780)
					Float x1;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(780)
					Float y1;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(780)
					Float x2;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(780)
					Float y2;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(780)
					Float x3;		HX_STACK_VAR(x3,"x3");
					HX_STACK_LINE(780)
					Float y3;		HX_STACK_VAR(y3,"y3");
					HX_STACK_LINE(781)
					Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
					HX_STACK_LINE(781)
					Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
					HX_STACK_LINE(781)
					Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
					HX_STACK_LINE(781)
					Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
					HX_STACK_LINE(781)
					Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
					HX_STACK_LINE(781)
					Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
					HX_STACK_LINE(782)
					Float denom;		HX_STACK_VAR(denom,"denom");
					HX_STACK_LINE(783)
					Float t1;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(783)
					Float t2;		HX_STACK_VAR(t2,"t2");
					HX_STACK_LINE(783)
					Float t3;		HX_STACK_VAR(t3,"t3");
					HX_STACK_LINE(783)
					Float t4;		HX_STACK_VAR(t4,"t4");
					HX_STACK_LINE(784)
					Float dx;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(784)
					Float dy;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(786)
					::lime::graphics::cairo::Cairo tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(786)
					tmp31->set_antialias((int)1);
					HX_STACK_LINE(788)
					while((true)){
						HX_STACK_LINE(788)
						bool tmp32 = (i < l);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(788)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(788)
						if ((tmp33)){
							HX_STACK_LINE(788)
							break;
						}
						HX_STACK_LINE(790)
						a_ = i;
						HX_STACK_LINE(791)
						int tmp34 = (i + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(791)
						b_ = tmp34;
						HX_STACK_LINE(792)
						int tmp35 = (i + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(792)
						c_ = tmp35;
						HX_STACK_LINE(794)
						int tmp36 = ind->__get(a_);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(794)
						Dynamic tmp37 = ((Dynamic)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(794)
						int tmp38 = (tmp37 * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(794)
						iax = tmp38;
						HX_STACK_LINE(795)
						int tmp39 = ind->__get(a_);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(795)
						Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(795)
						int tmp41 = (tmp40 * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(795)
						int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(795)
						iay = tmp42;
						HX_STACK_LINE(796)
						int tmp43 = ind->__get(b_);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(796)
						Dynamic tmp44 = ((Dynamic)(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(796)
						int tmp45 = (tmp44 * (int)2);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(796)
						ibx = tmp45;
						HX_STACK_LINE(797)
						int tmp46 = ind->__get(b_);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(797)
						Dynamic tmp47 = ((Dynamic)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(797)
						int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(797)
						int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(797)
						iby = tmp49;
						HX_STACK_LINE(798)
						int tmp50 = ind->__get(c_);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(798)
						Dynamic tmp51 = ((Dynamic)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(798)
						int tmp52 = (tmp51 * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(798)
						icx = tmp52;
						HX_STACK_LINE(799)
						int tmp53 = ind->__get(c_);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(799)
						Dynamic tmp54 = ((Dynamic)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(799)
						int tmp55 = (tmp54 * (int)2);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(799)
						int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(799)
						icy = tmp56;
						HX_STACK_LINE(801)
						Float tmp57 = v->__get(iax);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(801)
						x1 = ((Dynamic)(tmp57));
						HX_STACK_LINE(802)
						Float tmp58 = v->__get(iay);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(802)
						y1 = ((Dynamic)(tmp58));
						HX_STACK_LINE(803)
						Float tmp59 = v->__get(ibx);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(803)
						x2 = ((Dynamic)(tmp59));
						HX_STACK_LINE(804)
						Float tmp60 = v->__get(iby);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(804)
						y2 = ((Dynamic)(tmp60));
						HX_STACK_LINE(805)
						Float tmp61 = v->__get(icx);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(805)
						x3 = ((Dynamic)(tmp61));
						HX_STACK_LINE(806)
						Float tmp62 = v->__get(icy);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(806)
						y3 = ((Dynamic)(tmp62));
						HX_STACK_LINE(808)
						{
							HX_STACK_LINE(808)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(808)
							int tmp64 = c->oPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(808)
							int tmp65 = (tmp64 + (int)3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(808)
							Dynamic tmp66 = tmp63->o->__GetItem(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(808)
							::openfl::display::TriangleCulling _g2 = ((::openfl::display::TriangleCulling)(tmp66));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(808)
							switch( (int)(_g2->__Index())){
								case (int)2: {
									HX_STACK_LINE(812)
									Float tmp67 = (x2 - x1);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(812)
									Float tmp68 = (y3 - y1);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(812)
									Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(812)
									Float tmp70 = (y2 - y1);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(812)
									Float tmp71 = (x3 - x1);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(812)
									Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(812)
									Float tmp73 = (tmp69 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(812)
									bool tmp74 = (tmp73 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(812)
									bool tmp75 = !(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(812)
									if ((tmp75)){
										HX_STACK_LINE(814)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(815)
										continue;
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(821)
									Float tmp67 = (x2 - x1);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(821)
									Float tmp68 = (y3 - y1);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(821)
									Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(821)
									Float tmp70 = (y2 - y1);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(821)
									Float tmp71 = (x3 - x1);		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(821)
									Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(821)
									Float tmp73 = (tmp69 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(821)
									bool tmp74 = (tmp73 < (int)0);		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(821)
									if ((tmp74)){
										HX_STACK_LINE(823)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(824)
										continue;
									}
								}
								;break;
								default: {
								}
							}
						}
						HX_STACK_LINE(832)
						bool tmp63 = colorFill;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(832)
						if ((tmp63)){
							HX_STACK_LINE(834)
							::lime::graphics::cairo::Cairo tmp64 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(834)
							tmp64->newPath();
							HX_STACK_LINE(835)
							::lime::graphics::cairo::Cairo tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(835)
							Float tmp66 = x1;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(835)
							Float tmp67 = y1;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(835)
							tmp65->moveTo(tmp66,tmp67);
							HX_STACK_LINE(836)
							::lime::graphics::cairo::Cairo tmp68 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(836)
							Float tmp69 = x2;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(836)
							Float tmp70 = y2;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(836)
							tmp68->lineTo(tmp69,tmp70);
							HX_STACK_LINE(837)
							::lime::graphics::cairo::Cairo tmp71 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(837)
							Float tmp72 = x3;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(837)
							Float tmp73 = y3;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(837)
							tmp71->lineTo(tmp72,tmp73);
							HX_STACK_LINE(838)
							::lime::graphics::cairo::Cairo tmp74 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(838)
							tmp74->closePath();
							HX_STACK_LINE(839)
							bool tmp75 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(839)
							bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(839)
							if ((tmp76)){
								HX_STACK_LINE(839)
								::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(839)
								tmp77->fillPreserve();
							}
							HX_STACK_LINE(840)
							hx::AddEq(i,(int)3);
							HX_STACK_LINE(841)
							continue;
						}
						HX_STACK_LINE(845)
						::lime::graphics::cairo::Cairo tmp64 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(845)
						tmp64->identityMatrix();
						HX_STACK_LINE(848)
						::lime::graphics::cairo::Cairo tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(848)
						tmp65->newPath();
						HX_STACK_LINE(849)
						::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(849)
						Float tmp67 = x1;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(849)
						Float tmp68 = y1;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(849)
						tmp66->moveTo(tmp67,tmp68);
						HX_STACK_LINE(850)
						::lime::graphics::cairo::Cairo tmp69 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(850)
						Float tmp70 = x2;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(850)
						Float tmp71 = y2;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(850)
						tmp69->lineTo(tmp70,tmp71);
						HX_STACK_LINE(851)
						::lime::graphics::cairo::Cairo tmp72 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(851)
						Float tmp73 = x3;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(851)
						Float tmp74 = y3;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(851)
						tmp72->lineTo(tmp73,tmp74);
						HX_STACK_LINE(852)
						::lime::graphics::cairo::Cairo tmp75 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(852)
						tmp75->closePath();
						HX_STACK_LINE(855)
						Float tmp76 = uvt->__get(iax);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(855)
						Dynamic tmp77 = ((Dynamic)(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(855)
						int tmp78 = width;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(855)
						Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(855)
						uvx1 = tmp79;
						HX_STACK_LINE(856)
						Float tmp80 = uvt->__get(ibx);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(856)
						Dynamic tmp81 = ((Dynamic)(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(856)
						int tmp82 = width;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(856)
						Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(856)
						uvx2 = tmp83;
						HX_STACK_LINE(857)
						Float tmp84 = uvt->__get(icx);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(857)
						Dynamic tmp85 = ((Dynamic)(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(857)
						int tmp86 = width;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(857)
						Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(857)
						uvx3 = tmp87;
						HX_STACK_LINE(858)
						Float tmp88 = uvt->__get(iay);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(858)
						Dynamic tmp89 = ((Dynamic)(tmp88));		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(858)
						int tmp90 = height;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(858)
						Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(858)
						uvy1 = tmp91;
						HX_STACK_LINE(859)
						Float tmp92 = uvt->__get(iby);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(859)
						Dynamic tmp93 = ((Dynamic)(tmp92));		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(859)
						int tmp94 = height;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(859)
						Float tmp95 = (tmp93 * tmp94);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(859)
						uvy2 = tmp95;
						HX_STACK_LINE(860)
						Float tmp96 = uvt->__get(icy);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(860)
						Dynamic tmp97 = ((Dynamic)(tmp96));		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(860)
						int tmp98 = height;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(860)
						Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(860)
						uvy3 = tmp99;
						HX_STACK_LINE(862)
						Float tmp100 = uvx1;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(862)
						Float tmp101 = (uvy3 - uvy2);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(862)
						Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(862)
						Float tmp103 = (uvx2 * uvy3);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(862)
						Float tmp104 = (tmp102 - tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(862)
						Float tmp105 = (uvx3 * uvy2);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(862)
						Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(862)
						Float tmp107 = (uvx2 - uvx3);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(862)
						Float tmp108 = uvy1;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(862)
						Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(862)
						Float tmp110 = (tmp106 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(862)
						denom = tmp110;
						HX_STACK_LINE(864)
						bool tmp111 = (denom == (int)0);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(864)
						if ((tmp111)){
							HX_STACK_LINE(866)
							hx::AddEq(i,(int)3);
							HX_STACK_LINE(867)
							continue;
						}
						HX_STACK_LINE(871)
						Float tmp112 = uvy1;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(871)
						Float tmp113 = (x3 - x2);		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(871)
						Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(871)
						Float tmp115 = (uvy2 * x3);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(871)
						Float tmp116 = (tmp114 - tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(871)
						Float tmp117 = (uvy3 * x2);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(871)
						Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(871)
						Float tmp119 = (uvy2 - uvy3);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(871)
						Float tmp120 = x1;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(871)
						Float tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(871)
						Float tmp122 = (tmp118 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(871)
						Float tmp123 = -(tmp122);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(871)
						Float tmp124 = denom;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(871)
						Float tmp125 = (Float(tmp123) / Float(tmp124));		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(871)
						t1 = tmp125;
						HX_STACK_LINE(872)
						Float tmp126 = (uvy2 * y3);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(872)
						Float tmp127 = uvy1;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(872)
						Float tmp128 = (y2 - y3);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(872)
						Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(872)
						Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(872)
						Float tmp131 = (uvy3 * y2);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(872)
						Float tmp132 = (tmp130 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(872)
						Float tmp133 = (uvy3 - uvy2);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(872)
						Float tmp134 = y1;		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(872)
						Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(872)
						Float tmp136 = (tmp132 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(872)
						Float tmp137 = denom;		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(872)
						Float tmp138 = (Float(tmp136) / Float(tmp137));		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(872)
						t2 = tmp138;
						HX_STACK_LINE(873)
						Float tmp139 = uvx1;		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(873)
						Float tmp140 = (x3 - x2);		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(873)
						Float tmp141 = (tmp139 * tmp140);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(873)
						Float tmp142 = (uvx2 * x3);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(873)
						Float tmp143 = (tmp141 - tmp142);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(873)
						Float tmp144 = (uvx3 * x2);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(873)
						Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(873)
						Float tmp146 = (uvx2 - uvx3);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(873)
						Float tmp147 = x1;		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(873)
						Float tmp148 = (tmp146 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(873)
						Float tmp149 = (tmp145 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(873)
						Float tmp150 = denom;		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(873)
						Float tmp151 = (Float(tmp149) / Float(tmp150));		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(873)
						t3 = tmp151;
						HX_STACK_LINE(874)
						Float tmp152 = (uvx2 * y3);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(874)
						Float tmp153 = uvx1;		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(874)
						Float tmp154 = (y2 - y3);		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(874)
						Float tmp155 = (tmp153 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(874)
						Float tmp156 = (tmp152 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(874)
						Float tmp157 = (uvx3 * y2);		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(874)
						Float tmp158 = (tmp156 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(874)
						Float tmp159 = (uvx3 - uvx2);		HX_STACK_VAR(tmp159,"tmp159");
						HX_STACK_LINE(874)
						Float tmp160 = y1;		HX_STACK_VAR(tmp160,"tmp160");
						HX_STACK_LINE(874)
						Float tmp161 = (tmp159 * tmp160);		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(874)
						Float tmp162 = (tmp158 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(874)
						Float tmp163 = -(tmp162);		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(874)
						Float tmp164 = denom;		HX_STACK_VAR(tmp164,"tmp164");
						HX_STACK_LINE(874)
						Float tmp165 = (Float(tmp163) / Float(tmp164));		HX_STACK_VAR(tmp165,"tmp165");
						HX_STACK_LINE(874)
						t4 = tmp165;
						HX_STACK_LINE(875)
						Float tmp166 = uvx1;		HX_STACK_VAR(tmp166,"tmp166");
						HX_STACK_LINE(875)
						Float tmp167 = (uvy3 * x2);		HX_STACK_VAR(tmp167,"tmp167");
						HX_STACK_LINE(875)
						Float tmp168 = (uvy2 * x3);		HX_STACK_VAR(tmp168,"tmp168");
						HX_STACK_LINE(875)
						Float tmp169 = (tmp167 - tmp168);		HX_STACK_VAR(tmp169,"tmp169");
						HX_STACK_LINE(875)
						Float tmp170 = (tmp166 * tmp169);		HX_STACK_VAR(tmp170,"tmp170");
						HX_STACK_LINE(875)
						Float tmp171 = uvy1;		HX_STACK_VAR(tmp171,"tmp171");
						HX_STACK_LINE(875)
						Float tmp172 = (uvx2 * x3);		HX_STACK_VAR(tmp172,"tmp172");
						HX_STACK_LINE(875)
						Float tmp173 = (uvx3 * x2);		HX_STACK_VAR(tmp173,"tmp173");
						HX_STACK_LINE(875)
						Float tmp174 = (tmp172 - tmp173);		HX_STACK_VAR(tmp174,"tmp174");
						HX_STACK_LINE(875)
						Float tmp175 = (tmp171 * tmp174);		HX_STACK_VAR(tmp175,"tmp175");
						HX_STACK_LINE(875)
						Float tmp176 = (tmp170 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
						HX_STACK_LINE(875)
						Float tmp177 = (uvx3 * uvy2);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(875)
						Float tmp178 = (uvx2 * uvy3);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(875)
						Float tmp179 = (tmp177 - tmp178);		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(875)
						Float tmp180 = x1;		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(875)
						Float tmp181 = (tmp179 * tmp180);		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(875)
						Float tmp182 = (tmp176 + tmp181);		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(875)
						Float tmp183 = denom;		HX_STACK_VAR(tmp183,"tmp183");
						HX_STACK_LINE(875)
						Float tmp184 = (Float(tmp182) / Float(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(875)
						dx = tmp184;
						HX_STACK_LINE(876)
						Float tmp185 = uvx1;		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(876)
						Float tmp186 = (uvy3 * y2);		HX_STACK_VAR(tmp186,"tmp186");
						HX_STACK_LINE(876)
						Float tmp187 = (uvy2 * y3);		HX_STACK_VAR(tmp187,"tmp187");
						HX_STACK_LINE(876)
						Float tmp188 = (tmp186 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
						HX_STACK_LINE(876)
						Float tmp189 = (tmp185 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
						HX_STACK_LINE(876)
						Float tmp190 = uvy1;		HX_STACK_VAR(tmp190,"tmp190");
						HX_STACK_LINE(876)
						Float tmp191 = (uvx2 * y3);		HX_STACK_VAR(tmp191,"tmp191");
						HX_STACK_LINE(876)
						Float tmp192 = (uvx3 * y2);		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(876)
						Float tmp193 = (tmp191 - tmp192);		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(876)
						Float tmp194 = (tmp190 * tmp193);		HX_STACK_VAR(tmp194,"tmp194");
						HX_STACK_LINE(876)
						Float tmp195 = (tmp189 + tmp194);		HX_STACK_VAR(tmp195,"tmp195");
						HX_STACK_LINE(876)
						Float tmp196 = (uvx3 * uvy2);		HX_STACK_VAR(tmp196,"tmp196");
						HX_STACK_LINE(876)
						Float tmp197 = (uvx2 * uvy3);		HX_STACK_VAR(tmp197,"tmp197");
						HX_STACK_LINE(876)
						Float tmp198 = (tmp196 - tmp197);		HX_STACK_VAR(tmp198,"tmp198");
						HX_STACK_LINE(876)
						Float tmp199 = y1;		HX_STACK_VAR(tmp199,"tmp199");
						HX_STACK_LINE(876)
						Float tmp200 = (tmp198 * tmp199);		HX_STACK_VAR(tmp200,"tmp200");
						HX_STACK_LINE(876)
						Float tmp201 = (tmp195 + tmp200);		HX_STACK_VAR(tmp201,"tmp201");
						HX_STACK_LINE(876)
						Float tmp202 = denom;		HX_STACK_VAR(tmp202,"tmp202");
						HX_STACK_LINE(876)
						Float tmp203 = (Float(tmp201) / Float(tmp202));		HX_STACK_VAR(tmp203,"tmp203");
						HX_STACK_LINE(876)
						dy = tmp203;
						HX_STACK_LINE(878)
						::lime::math::Matrix3 tmp204 = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(tmp204,"tmp204");
						HX_STACK_LINE(878)
						::lime::math::Matrix3 matrix = tmp204;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(879)
						::lime::graphics::cairo::Cairo tmp205 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp205,"tmp205");
						HX_STACK_LINE(879)
						::lime::math::Matrix3 tmp206 = matrix;		HX_STACK_VAR(tmp206,"tmp206");
						HX_STACK_LINE(879)
						tmp205->set_matrix(tmp206);
						HX_STACK_LINE(880)
						::lime::graphics::cairo::Cairo tmp207 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp207,"tmp207");
						HX_STACK_LINE(880)
						Dynamic tmp208 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp208,"tmp208");
						HX_STACK_LINE(880)
						tmp207->set_source(tmp208);
						HX_STACK_LINE(881)
						bool tmp209 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp209,"tmp209");
						HX_STACK_LINE(881)
						bool tmp210 = !(tmp209);		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(881)
						if ((tmp210)){
							HX_STACK_LINE(881)
							::lime::graphics::cairo::Cairo tmp211 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp211,"tmp211");
							HX_STACK_LINE(881)
							tmp211->fill();
						}
						HX_STACK_LINE(883)
						hx::AddEq(i,(int)3);
					}
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(889)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(889)
					{
						HX_STACK_LINE(889)
						{
							HX_STACK_LINE(889)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(889)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(889)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(889)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(889)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(889)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(889)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(889)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(889)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(889)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(889)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(889)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(889)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(889)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(889)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(889)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(889)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(889)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(889)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES;
						HX_STACK_LINE(889)
						tmp11 = data;
					}
					HX_STACK_LINE(889)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(890)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(890)
					int tmp13 = c->iPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(890)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(890)
					int tmp15 = tmp12->i->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(890)
					int tmp16 = (int(tmp15) & int((int)1));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(890)
					bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(890)
					bool useScale = tmp17;		HX_STACK_VAR(useScale,"useScale");
					HX_STACK_LINE(891)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(891)
					int tmp19 = c->iPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(891)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(891)
					int tmp21 = tmp18->i->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(891)
					int tmp22 = (int(tmp21) & int((int)2));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(891)
					bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(891)
					bool useRotation = tmp23;		HX_STACK_VAR(useRotation,"useRotation");
					HX_STACK_LINE(892)
					::openfl::geom::Rectangle tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(892)
					Float offsetX1 = tmp24->x;		HX_STACK_VAR(offsetX1,"offsetX1");
					HX_STACK_LINE(893)
					::openfl::geom::Rectangle tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(893)
					Float offsetY1 = tmp25->y;		HX_STACK_VAR(offsetY1,"offsetY1");
					HX_STACK_LINE(895)
					::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(895)
					int tmp27 = c->iPos;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(895)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(895)
					int tmp29 = tmp26->i->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(895)
					int tmp30 = (int(tmp29) & int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(895)
					bool tmp31 = (tmp30 > (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(895)
					bool useTransform = tmp31;		HX_STACK_VAR(useTransform,"useTransform");
					HX_STACK_LINE(896)
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(896)
					int tmp33 = c->iPos;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(896)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(896)
					int tmp35 = tmp32->i->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(896)
					int tmp36 = (int(tmp35) & int((int)4));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(896)
					bool tmp37 = (tmp36 > (int)0);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(896)
					bool useRGB = tmp37;		HX_STACK_VAR(useRGB,"useRGB");
					HX_STACK_LINE(897)
					::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(897)
					int tmp39 = c->iPos;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(897)
					int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(897)
					int tmp41 = tmp38->i->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(897)
					int tmp42 = (int(tmp41) & int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(897)
					bool tmp43 = (tmp42 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(897)
					bool useAlpha = tmp43;		HX_STACK_VAR(useAlpha,"useAlpha");
					HX_STACK_LINE(898)
					::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(898)
					int tmp45 = c->iPos;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(898)
					int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(898)
					int tmp47 = tmp44->i->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(898)
					int tmp48 = (int(tmp47) & int((int)32));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(898)
					bool tmp49 = (tmp48 > (int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(898)
					bool useRect = tmp49;		HX_STACK_VAR(useRect,"useRect");
					HX_STACK_LINE(899)
					::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(899)
					int tmp51 = c->iPos;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(899)
					int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(899)
					int tmp53 = tmp50->i->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(899)
					int tmp54 = (int(tmp53) & int((int)64));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(899)
					bool tmp55 = (tmp54 > (int)0);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(899)
					bool useOrigin = tmp55;		HX_STACK_VAR(useOrigin,"useOrigin");
					HX_STACK_LINE(900)
					::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(900)
					int tmp57 = c->iPos;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(900)
					int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(900)
					int tmp59 = tmp56->i->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(900)
					int tmp60 = (int(tmp59) & int((int)65536));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(900)
					bool tmp61 = (tmp60 > (int)0);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(900)
					bool useBlendAdd = tmp61;		HX_STACK_VAR(useBlendAdd,"useBlendAdd");
					HX_STACK_LINE(901)
					::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(901)
					int tmp63 = c->iPos;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(901)
					int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(901)
					int tmp65 = tmp62->i->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(901)
					int tmp66 = (int(tmp65) & int((int)4194304));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(901)
					bool tmp67 = (tmp66 > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(901)
					bool useBlendOverlay = tmp67;		HX_STACK_VAR(useBlendOverlay,"useBlendOverlay");
					HX_STACK_LINE(903)
					bool tmp68 = useTransform;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(903)
					if ((tmp68)){
						HX_STACK_LINE(903)
						useScale = false;
						HX_STACK_LINE(903)
						useRotation = false;
					}
					HX_STACK_LINE(905)
					int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
					HX_STACK_LINE(906)
					int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
					HX_STACK_LINE(907)
					int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
					HX_STACK_LINE(908)
					int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
					HX_STACK_LINE(909)
					int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
					HX_STACK_LINE(911)
					int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
					HX_STACK_LINE(913)
					bool tmp69 = useRect;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(913)
					if ((tmp69)){
						HX_STACK_LINE(913)
						bool tmp70 = useOrigin;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(913)
						int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(913)
						if ((tmp70)){
							HX_STACK_LINE(913)
							tmp71 = (int)8;
						}
						else{
							HX_STACK_LINE(913)
							tmp71 = (int)6;
						}
						HX_STACK_LINE(913)
						numValues = tmp71;
					}
					HX_STACK_LINE(914)
					bool tmp70 = useScale;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(914)
					if ((tmp70)){
						HX_STACK_LINE(914)
						scaleIndex = numValues;
						HX_STACK_LINE(914)
						(numValues)++;
					}
					HX_STACK_LINE(915)
					bool tmp71 = useRotation;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(915)
					if ((tmp71)){
						HX_STACK_LINE(915)
						rotationIndex = numValues;
						HX_STACK_LINE(915)
						(numValues)++;
					}
					HX_STACK_LINE(916)
					bool tmp72 = useTransform;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(916)
					if ((tmp72)){
						HX_STACK_LINE(916)
						transformIndex = numValues;
						HX_STACK_LINE(916)
						hx::AddEq(numValues,(int)4);
					}
					HX_STACK_LINE(917)
					bool tmp73 = useRGB;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(917)
					if ((tmp73)){
						HX_STACK_LINE(917)
						rgbIndex = numValues;
						HX_STACK_LINE(917)
						hx::AddEq(numValues,(int)3);
					}
					HX_STACK_LINE(918)
					bool tmp74 = useAlpha;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(918)
					if ((tmp74)){
						HX_STACK_LINE(918)
						alphaIndex = numValues;
						HX_STACK_LINE(918)
						(numValues)++;
					}
					HX_STACK_LINE(920)
					::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(920)
					int tmp76 = c->ffPos;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(920)
					int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(920)
					int tmp78 = tmp75->ff->__get(tmp77).StaticCast< Array< Float > >()->length;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(920)
					int totalCount = tmp78;		HX_STACK_VAR(totalCount,"totalCount");
					HX_STACK_LINE(921)
					::openfl::_internal::renderer::DrawCommandBuffer tmp79 = c->buffer;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(921)
					int tmp80 = c->iPos;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(921)
					int tmp81 = (tmp80 + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(921)
					int tmp82 = tmp79->i->__get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(921)
					bool tmp83 = (tmp82 >= (int)0);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(921)
					bool tmp84;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(921)
					if ((tmp83)){
						HX_STACK_LINE(921)
						int tmp85 = totalCount;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(921)
						::openfl::_internal::renderer::DrawCommandBuffer tmp86 = c->buffer;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(921)
						::openfl::_internal::renderer::DrawCommandBuffer tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(921)
						int tmp88 = c->iPos;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(921)
						int tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(921)
						int tmp90 = (tmp89 + (int)1);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(921)
						int tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(921)
						int tmp92 = tmp87->i->__get(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(921)
						int tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(921)
						tmp84 = (tmp85 > tmp93);
					}
					else{
						HX_STACK_LINE(921)
						tmp84 = false;
					}
					HX_STACK_LINE(921)
					if ((tmp84)){
						HX_STACK_LINE(921)
						::openfl::_internal::renderer::DrawCommandBuffer tmp85 = c->buffer;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(921)
						int tmp86 = c->iPos;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(921)
						int tmp87 = (tmp86 + (int)1);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(921)
						int tmp88 = tmp85->i->__get(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(921)
						totalCount = tmp88;
					}
					HX_STACK_LINE(922)
					Float tmp85 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(922)
					int tmp86 = ::Std_obj::_int(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(922)
					int itemCount = tmp86;		HX_STACK_VAR(itemCount,"itemCount");
					HX_STACK_LINE(923)
					int index = (int)0;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(925)
					::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(926)
					::openfl::geom::Point center = null();		HX_STACK_VAR(center,"center");
					HX_STACK_LINE(927)
					int previousTileID = (int)-1;		HX_STACK_VAR(previousTileID,"previousTileID");
					HX_STACK_LINE(929)
					Dynamic surface;		HX_STACK_VAR(surface,"surface");
					HX_STACK_LINE(930)
					::openfl::_internal::renderer::DrawCommandBuffer tmp87 = c->buffer;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(930)
					int tmp88 = c->tsPos;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(930)
					int tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(930)
					::openfl::display::Tilesheet tmp90 = tmp87->ts->__get(tmp89).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(930)
					tmp90->__bitmap->__sync();
					HX_STACK_LINE(931)
					::openfl::_internal::renderer::DrawCommandBuffer tmp91 = c->buffer;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(931)
					int tmp92 = c->tsPos;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(931)
					int tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(931)
					::openfl::display::Tilesheet tmp94 = tmp91->ts->__get(tmp93).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(931)
					Dynamic tmp95 = tmp94->__bitmap->getSurface();		HX_STACK_VAR(tmp95,"tmp95");
					HX_STACK_LINE(931)
					surface = tmp95;
					HX_STACK_LINE(933)
					::lime::graphics::cairo::Cairo tmp96 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(933)
					tmp96->save();
					HX_STACK_LINE(935)
					bool tmp97 = useBlendAdd;		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(935)
					if ((tmp97)){
						HX_STACK_LINE(937)
						::lime::graphics::cairo::Cairo tmp98 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(937)
						tmp98->set_operator((int)12);
					}
					HX_STACK_LINE(941)
					bool tmp98 = useBlendOverlay;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(941)
					if ((tmp98)){
						HX_STACK_LINE(943)
						::lime::graphics::cairo::Cairo tmp99 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(943)
						tmp99->set_operator((int)16);
					}
					HX_STACK_LINE(947)
					while((true)){
						HX_STACK_LINE(947)
						bool tmp99 = (index < totalCount);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(947)
						bool tmp100 = !(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(947)
						if ((tmp100)){
							HX_STACK_LINE(947)
							break;
						}
						HX_STACK_LINE(962)
						::openfl::_internal::renderer::DrawCommandBuffer tmp101 = c->buffer;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(962)
						int tmp102 = c->ffPos;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(962)
						int tmp103 = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(962)
						int tmp104 = (index + (int)2);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(962)
						Float tmp105 = tmp101->ff->__get(tmp103).StaticCast< Array< Float > >()->__get(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(962)
						int tmp106 = ::Std_obj::_int(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(962)
						int i = tmp106;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(966)
						bool tmp107 = useRect;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(966)
						bool tmp108 = !(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(966)
						int tmp109;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(966)
						if ((tmp108)){
							HX_STACK_LINE(966)
							tmp109 = i;
						}
						else{
							HX_STACK_LINE(966)
							tmp109 = (int)-1;
						}
						HX_STACK_LINE(966)
						int tileID = tmp109;		HX_STACK_VAR(tileID,"tileID");
						HX_STACK_LINE(968)
						bool tmp110 = useRect;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(968)
						bool tmp111 = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(968)
						bool tmp112 = !(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(968)
						bool tmp113;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(968)
						if ((tmp112)){
							HX_STACK_LINE(968)
							tmp113 = (tileID != previousTileID);
						}
						else{
							HX_STACK_LINE(968)
							tmp113 = false;
						}
						HX_STACK_LINE(968)
						if ((tmp113)){
							HX_STACK_LINE(970)
							::openfl::_internal::renderer::DrawCommandBuffer tmp114 = c->buffer;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(970)
							int tmp115 = c->tsPos;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(970)
							int tmp116 = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(970)
							::openfl::display::Tilesheet tmp117 = tmp114->ts->__get(tmp116).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(970)
							::openfl::geom::Rectangle tmp118 = tmp117->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(970)
							rect = tmp118;
							HX_STACK_LINE(971)
							::openfl::_internal::renderer::DrawCommandBuffer tmp119 = c->buffer;		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(971)
							int tmp120 = c->tsPos;		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(971)
							int tmp121 = tmp120;		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(971)
							::openfl::display::Tilesheet tmp122 = tmp119->ts->__get(tmp121).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(971)
							::openfl::geom::Point tmp123 = tmp122->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(971)
							center = tmp123;
							HX_STACK_LINE(973)
							previousTileID = tileID;
						}
						else{
							HX_STACK_LINE(975)
							bool tmp114 = useRect;		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(975)
							if ((tmp114)){
								HX_STACK_LINE(977)
								::openfl::_internal::renderer::DrawCommandBuffer tmp115 = c->buffer;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(977)
								int tmp116 = c->tsPos;		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(977)
								int tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(977)
								::openfl::display::Tilesheet tmp118 = tmp115->ts->__get(tmp117).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(977)
								rect = tmp118->__rectTile;
								HX_STACK_LINE(978)
								::openfl::_internal::renderer::DrawCommandBuffer tmp119 = c->buffer;		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(978)
								int tmp120 = c->ffPos;		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(978)
								int tmp121 = tmp120;		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(978)
								int tmp122 = (index + (int)2);		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(978)
								Float tmp123 = tmp119->ff->__get(tmp121).StaticCast< Array< Float > >()->__get(tmp122);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(978)
								::openfl::_internal::renderer::DrawCommandBuffer tmp124 = c->buffer;		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(978)
								int tmp125 = c->ffPos;		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(978)
								int tmp126 = tmp125;		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(978)
								int tmp127 = (index + (int)3);		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(978)
								Float tmp128 = tmp124->ff->__get(tmp126).StaticCast< Array< Float > >()->__get(tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(978)
								::openfl::_internal::renderer::DrawCommandBuffer tmp129 = c->buffer;		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(978)
								int tmp130 = c->ffPos;		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(978)
								int tmp131 = tmp130;		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(978)
								int tmp132 = (index + (int)4);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(978)
								Float tmp133 = tmp129->ff->__get(tmp131).StaticCast< Array< Float > >()->__get(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(978)
								::openfl::_internal::renderer::DrawCommandBuffer tmp134 = c->buffer;		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(978)
								int tmp135 = c->ffPos;		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(978)
								int tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(978)
								int tmp137 = (index + (int)5);		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(978)
								Float tmp138 = tmp134->ff->__get(tmp136).StaticCast< Array< Float > >()->__get(tmp137);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(978)
								rect->setTo(tmp123,tmp128,tmp133,tmp138);
								HX_STACK_LINE(979)
								::openfl::_internal::renderer::DrawCommandBuffer tmp139 = c->buffer;		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(979)
								int tmp140 = c->tsPos;		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(979)
								int tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(979)
								::openfl::display::Tilesheet tmp142 = tmp139->ts->__get(tmp141).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(979)
								center = tmp142->__point;
								HX_STACK_LINE(981)
								bool tmp143 = useOrigin;		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(981)
								if ((tmp143)){
									HX_STACK_LINE(983)
									::openfl::_internal::renderer::DrawCommandBuffer tmp144 = c->buffer;		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(983)
									int tmp145 = c->ffPos;		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(983)
									int tmp146 = (index + (int)6);		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(983)
									Float tmp147 = tmp144->ff->__get(tmp145).StaticCast< Array< Float > >()->__get(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(983)
									center->x = tmp147;
									HX_STACK_LINE(983)
									::openfl::_internal::renderer::DrawCommandBuffer tmp148 = c->buffer;		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(983)
									int tmp149 = c->ffPos;		HX_STACK_VAR(tmp149,"tmp149");
									HX_STACK_LINE(983)
									int tmp150 = (index + (int)7);		HX_STACK_VAR(tmp150,"tmp150");
									HX_STACK_LINE(983)
									Float tmp151 = tmp148->ff->__get(tmp149).StaticCast< Array< Float > >()->__get(tmp150);		HX_STACK_VAR(tmp151,"tmp151");
									HX_STACK_LINE(983)
									center->y = tmp151;
								}
								else{
									HX_STACK_LINE(987)
									center->x = (int)0;
									HX_STACK_LINE(987)
									center->y = (int)0;
								}
							}
						}
						HX_STACK_LINE(993)
						bool tmp114 = (rect != null());		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(993)
						bool tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(993)
						bool tmp116;		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(993)
						if ((tmp115)){
							HX_STACK_LINE(993)
							tmp116 = (rect->width > (int)0);
						}
						else{
							HX_STACK_LINE(993)
							tmp116 = false;
						}
						HX_STACK_LINE(993)
						bool tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(993)
						bool tmp118;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(993)
						if ((tmp117)){
							HX_STACK_LINE(993)
							tmp118 = (rect->height > (int)0);
						}
						else{
							HX_STACK_LINE(993)
							tmp118 = false;
						}
						HX_STACK_LINE(993)
						bool tmp119;		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(993)
						if ((tmp118)){
							HX_STACK_LINE(993)
							tmp119 = (center != null());
						}
						else{
							HX_STACK_LINE(993)
							tmp119 = false;
						}
						HX_STACK_LINE(993)
						if ((tmp119)){
							HX_STACK_LINE(999)
							::lime::graphics::cairo::Cairo tmp120 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(999)
							tmp120->identityMatrix();
							HX_STACK_LINE(1001)
							bool tmp121 = useTransform;		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(1001)
							if ((tmp121)){
								HX_STACK_LINE(1003)
								::openfl::_internal::renderer::DrawCommandBuffer tmp122 = c->buffer;		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(1003)
								int tmp123 = c->ffPos;		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(1003)
								int tmp124 = tmp123;		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(1003)
								int tmp125 = (index + transformIndex);		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(1003)
								Float tmp126 = tmp122->ff->__get(tmp124).StaticCast< Array< Float > >()->__get(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(1003)
								::openfl::_internal::renderer::DrawCommandBuffer tmp127 = c->buffer;		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(1003)
								int tmp128 = c->ffPos;		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(1003)
								int tmp129 = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(1003)
								int tmp130 = (index + transformIndex);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(1003)
								int tmp131 = (tmp130 + (int)1);		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(1003)
								Float tmp132 = tmp127->ff->__get(tmp129).StaticCast< Array< Float > >()->__get(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(1003)
								::openfl::_internal::renderer::DrawCommandBuffer tmp133 = c->buffer;		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(1003)
								int tmp134 = c->ffPos;		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(1003)
								int tmp135 = tmp134;		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(1003)
								int tmp136 = (index + transformIndex);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(1003)
								int tmp137 = (tmp136 + (int)2);		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(1003)
								Float tmp138 = tmp133->ff->__get(tmp135).StaticCast< Array< Float > >()->__get(tmp137);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(1003)
								::openfl::_internal::renderer::DrawCommandBuffer tmp139 = c->buffer;		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(1003)
								int tmp140 = c->ffPos;		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(1003)
								int tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(1003)
								int tmp142 = (index + transformIndex);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(1003)
								int tmp143 = (tmp142 + (int)3);		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(1003)
								Float tmp144 = tmp139->ff->__get(tmp141).StaticCast< Array< Float > >()->__get(tmp143);		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(1003)
								::lime::math::Matrix3 tmp145 = ::lime::math::Matrix3_obj::__new(tmp126,tmp132,tmp138,tmp144,(int)0,(int)0);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(1003)
								::lime::math::Matrix3 matrix = tmp145;		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(1004)
								::lime::graphics::cairo::Cairo tmp146 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(1004)
								::lime::math::Matrix3 tmp147 = matrix;		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(1004)
								tmp146->set_matrix(tmp147);
							}
							HX_STACK_LINE(1008)
							::lime::graphics::cairo::Cairo tmp122 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(1008)
							::openfl::_internal::renderer::DrawCommandBuffer tmp123 = c->buffer;		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(1008)
							int tmp124 = c->ffPos;		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(1008)
							int tmp125 = tmp124;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(1008)
							Float tmp126 = tmp123->ff->__get(tmp125).StaticCast< Array< Float > >()->__get(index);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(1008)
							Float tmp127 = offsetX1;		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(1008)
							Float tmp128 = (tmp126 - tmp127);		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(1008)
							::openfl::_internal::renderer::DrawCommandBuffer tmp129 = c->buffer;		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(1008)
							int tmp130 = c->ffPos;		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(1008)
							int tmp131 = tmp130;		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(1008)
							int tmp132 = (index + (int)1);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(1008)
							Float tmp133 = tmp129->ff->__get(tmp131).StaticCast< Array< Float > >()->__get(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(1008)
							Float tmp134 = offsetY1;		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(1008)
							Float tmp135 = (tmp133 - tmp134);		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(1008)
							tmp122->translate(tmp128,tmp135);
							HX_STACK_LINE(1010)
							bool tmp136 = useRotation;		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(1010)
							if ((tmp136)){
								HX_STACK_LINE(1012)
								::lime::graphics::cairo::Cairo tmp137 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(1012)
								::openfl::_internal::renderer::DrawCommandBuffer tmp138 = c->buffer;		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(1012)
								int tmp139 = c->ffPos;		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(1012)
								int tmp140 = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(1012)
								int tmp141 = (index + rotationIndex);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(1012)
								Float tmp142 = tmp138->ff->__get(tmp140).StaticCast< Array< Float > >()->__get(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(1012)
								tmp137->rotate(tmp142);
							}
							HX_STACK_LINE(1016)
							bool tmp137 = useScale;		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(1016)
							if ((tmp137)){
								HX_STACK_LINE(1018)
								::openfl::_internal::renderer::DrawCommandBuffer tmp138 = c->buffer;		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(1018)
								int tmp139 = c->ffPos;		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(1018)
								int tmp140 = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(1018)
								int tmp141 = (index + scaleIndex);		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(1018)
								Float tmp142 = tmp138->ff->__get(tmp140).StaticCast< Array< Float > >()->__get(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(1018)
								Float scale = tmp142;		HX_STACK_VAR(scale,"scale");
								HX_STACK_LINE(1019)
								::lime::graphics::cairo::Cairo tmp143 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(1019)
								Float tmp144 = scale;		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(1019)
								Float tmp145 = scale;		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(1019)
								tmp143->scale(tmp144,tmp145);
							}
							HX_STACK_LINE(1023)
							::lime::graphics::cairo::Cairo tmp138 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(1023)
							Dynamic tmp139 = surface;		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(1023)
							tmp138->setSourceSurface(tmp139,(int)0,(int)0);
							HX_STACK_LINE(1025)
							bool tmp140 = useAlpha;		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(1025)
							if ((tmp140)){
								HX_STACK_LINE(1027)
								bool tmp141 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(1027)
								bool tmp142 = !(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(1027)
								if ((tmp142)){
									HX_STACK_LINE(1027)
									::lime::graphics::cairo::Cairo tmp143 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(1027)
									::openfl::_internal::renderer::DrawCommandBuffer tmp144 = c->buffer;		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(1027)
									int tmp145 = c->ffPos;		HX_STACK_VAR(tmp145,"tmp145");
									HX_STACK_LINE(1027)
									int tmp146 = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
									HX_STACK_LINE(1027)
									int tmp147 = (index + alphaIndex);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(1027)
									Float tmp148 = tmp144->ff->__get(tmp146).StaticCast< Array< Float > >()->__get(tmp147);		HX_STACK_VAR(tmp148,"tmp148");
									HX_STACK_LINE(1027)
									tmp143->paintWithAlpha(tmp148);
								}
							}
							else{
								HX_STACK_LINE(1031)
								bool tmp141 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(1031)
								bool tmp142 = !(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(1031)
								if ((tmp142)){
									HX_STACK_LINE(1031)
									::lime::graphics::cairo::Cairo tmp143 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp143,"tmp143");
									HX_STACK_LINE(1031)
									tmp143->paint();
								}
							}
						}
						HX_STACK_LINE(1039)
						hx::AddEq(index,numValues);
					}
					HX_STACK_LINE(1043)
					bool tmp99 = useBlendAdd;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(1043)
					bool tmp100 = !(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(1043)
					bool tmp101;		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(1043)
					if ((tmp100)){
						HX_STACK_LINE(1043)
						tmp101 = useBlendOverlay;
					}
					else{
						HX_STACK_LINE(1043)
						tmp101 = true;
					}
					HX_STACK_LINE(1043)
					if ((tmp101)){
						HX_STACK_LINE(1045)
						::lime::graphics::cairo::Cairo tmp102 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(1045)
						tmp102->set_operator((int)2);
					}
					HX_STACK_LINE(1049)
					::lime::graphics::cairo::Cairo tmp102 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(1049)
					tmp102->restore();
				}
				else  {
					HX_STACK_LINE(1053)
					{
						HX_STACK_LINE(1053)
						::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1053)
						switch( (int)(_g2->__Index())){
							case (int)0: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)2);
								HX_STACK_LINE(1053)
								hx::AddEq(data->bPos,(int)2);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->iPos,(int)1);
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)5);
								HX_STACK_LINE(1053)
								hx::AddEq(data->iiPos,(int)2);
								HX_STACK_LINE(1053)
								hx::AddEq(data->ffPos,(int)1);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)6);
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)3);
							}
							;break;
							case (int)6: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)7: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)3);
							}
							;break;
							case (int)8: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)9: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)6);
							}
							;break;
							case (int)10: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->tsPos,(int)1);
								HX_STACK_LINE(1053)
								hx::AddEq(data->ffPos,(int)1);
								HX_STACK_LINE(1053)
								hx::AddEq(data->bPos,(int)1);
								HX_STACK_LINE(1053)
								hx::AddEq(data->iPos,(int)2);
							}
							;break;
							case (int)11: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)5);
								HX_STACK_LINE(1053)
								hx::AddEq(data->iPos,(int)1);
							}
							;break;
							case (int)12: {
								HX_STACK_LINE(1053)
								Dynamic();
							}
							;break;
							case (int)13: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)2);
								HX_STACK_LINE(1053)
								hx::AddEq(data->bPos,(int)2);
							}
							;break;
							case (int)14: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)5);
								HX_STACK_LINE(1053)
								hx::AddEq(data->iiPos,(int)2);
								HX_STACK_LINE(1053)
								hx::AddEq(data->ffPos,(int)1);
							}
							;break;
							case (int)15: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)8);
							}
							;break;
							case (int)16: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)2);
							}
							;break;
							case (int)17: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->fPos,(int)2);
							}
							;break;
							case (int)18: {
								HX_STACK_LINE(1053)
								hx::AddEq(data->oPos,(int)1);
							}
							;break;
							default: {
								HX_STACK_LINE(1053)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(1053)
					data->prev = type;
				}
;
;
			}
		}
		HX_STACK_LINE(1059)
		data->destroy();
		HX_STACK_LINE(1061)
		bool tmp8 = hasPath;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1061)
		if ((tmp8)){
			HX_STACK_LINE(1063)
			bool tmp9 = stroke;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1063)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1063)
			if ((tmp9)){
				HX_STACK_LINE(1063)
				tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
			}
			else{
				HX_STACK_LINE(1063)
				tmp10 = false;
			}
			HX_STACK_LINE(1063)
			if ((tmp10)){
				HX_STACK_LINE(1065)
				bool tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1065)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1065)
				if ((tmp11)){
					HX_STACK_LINE(1065)
					tmp12 = closeGap;
				}
				else{
					HX_STACK_LINE(1065)
					tmp12 = false;
				}
				HX_STACK_LINE(1065)
				if ((tmp12)){
					HX_STACK_LINE(1067)
					::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1067)
					Float tmp14 = (startX - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1067)
					Float tmp15 = (startY - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1067)
					tmp13->lineTo(tmp14,tmp15);
				}
				else{
					HX_STACK_LINE(1069)
					bool tmp13 = closeGap;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1069)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1069)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1069)
					if ((tmp14)){
						HX_STACK_LINE(1069)
						tmp15 = (positionX == startX);
					}
					else{
						HX_STACK_LINE(1069)
						tmp15 = false;
					}
					HX_STACK_LINE(1069)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1069)
					if ((tmp15)){
						HX_STACK_LINE(1069)
						tmp16 = (positionY == startY);
					}
					else{
						HX_STACK_LINE(1069)
						tmp16 = false;
					}
					HX_STACK_LINE(1069)
					if ((tmp16)){
						HX_STACK_LINE(1071)
						::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1071)
						tmp17->closePath();
					}
				}
				HX_STACK_LINE(1075)
				::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1075)
				Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1075)
				tmp13->set_source(tmp14);
				HX_STACK_LINE(1076)
				bool tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1076)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1076)
				if ((tmp16)){
					HX_STACK_LINE(1076)
					::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1076)
					tmp17->strokePreserve();
				}
			}
			HX_STACK_LINE(1080)
			bool tmp11 = stroke;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1080)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1080)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1080)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1080)
			if ((tmp13)){
				HX_STACK_LINE(1080)
				tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
			}
			else{
				HX_STACK_LINE(1080)
				tmp14 = false;
			}
			HX_STACK_LINE(1080)
			if ((tmp14)){
				HX_STACK_LINE(1082)
				::lime::graphics::cairo::Cairo tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1082)
				::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1082)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1082)
				Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1082)
				::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1082)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1082)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1082)
				tmp15->translate(tmp18,tmp21);
				HX_STACK_LINE(1084)
				::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1084)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1084)
				if ((tmp23)){
					HX_STACK_LINE(1086)
					::openfl::geom::Matrix tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1086)
					{
						HX_STACK_LINE(1086)
						::openfl::geom::Matrix tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1086)
						::openfl::geom::Matrix _this = tmp25;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1086)
						tmp24 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
					}
					HX_STACK_LINE(1086)
					::openfl::geom::Matrix matrix = tmp24;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(1087)
					matrix->invert();
					HX_STACK_LINE(1089)
					::openfl::geom::Matrix tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1089)
					bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1089)
					if ((tmp26)){
						HX_STACK_LINE(1091)
						::openfl::geom::Matrix tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1091)
						matrix->concat(tmp27);
					}
					HX_STACK_LINE(1095)
					Dynamic tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1095)
					::lime::math::Matrix3 tmp28 = matrix->__toMatrix3();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1095)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp27,tmp28);
				}
				HX_STACK_LINE(1099)
				::lime::graphics::cairo::Cairo tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1099)
				Dynamic tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1099)
				tmp24->set_source(tmp25);
				HX_STACK_LINE(1101)
				::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1101)
				bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1101)
				if ((tmp27)){
					HX_STACK_LINE(1103)
					::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1103)
					::openfl::geom::Matrix tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1103)
					::lime::math::Matrix3 tmp30 = tmp29->__toMatrix3();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1103)
					tmp28->transform(tmp30);
					HX_STACK_LINE(1104)
					bool tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1104)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1104)
					if ((tmp32)){
						HX_STACK_LINE(1104)
						::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1104)
						tmp33->fillPreserve();
					}
					HX_STACK_LINE(1105)
					::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1105)
					::openfl::geom::Matrix tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1105)
					::lime::math::Matrix3 tmp35 = tmp34->__toMatrix3();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1105)
					tmp33->transform(tmp35);
				}
				else{
					HX_STACK_LINE(1109)
					bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1109)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1109)
					if ((tmp29)){
						HX_STACK_LINE(1109)
						::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1109)
						tmp30->fillPreserve();
					}
				}
				HX_STACK_LINE(1113)
				::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1113)
				::openfl::geom::Rectangle tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1113)
				Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1113)
				::openfl::geom::Rectangle tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1113)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1113)
				tmp28->translate(tmp30,tmp32);
				HX_STACK_LINE(1114)
				::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1114)
				tmp33->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",1122,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1124)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1126)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1126)
		bool tmp1 = tmp->get_hasCurrentPoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1126)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1126)
		if ((tmp2)){
			HX_STACK_LINE(1128)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1128)
			Float tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1128)
			Float tmp5 = cy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1128)
			tmp3->moveTo(tmp4,tmp5);
			HX_STACK_LINE(1129)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1129)
			current = tmp6;
		}
		else{
			HX_STACK_LINE(1133)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1133)
			::lime::math::Vector2 tmp4 = tmp3->get_currentPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1133)
			current = tmp4;
		}
		HX_STACK_LINE(1137)
		Float tmp3 = current->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1137)
		Float tmp4 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1137)
		Float tmp5 = (cx - current->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1137)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1137)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1137)
		Float cx1 = tmp7;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(1138)
		Float tmp8 = current->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1138)
		Float tmp9 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1138)
		Float tmp10 = (cy - current->y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1138)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1138)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1138)
		Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(1139)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1139)
		Float tmp14 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1139)
		Float tmp15 = (cx - x);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1139)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1139)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1139)
		Float cx2 = tmp17;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(1140)
		Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1140)
		Float tmp19 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1140)
		Float tmp20 = (cy - y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1140)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1140)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1140)
		Float cy2 = tmp22;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(1142)
		::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1142)
		Float tmp24 = cx1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1142)
		Float tmp25 = cy1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1142)
		Float tmp26 = cx2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1142)
		Float tmp27 = cy2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1142)
		Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1142)
		Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1142)
		tmp23->curveTo(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",1147,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1150)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		HX_STACK_LINE(1152)
		bool tmp = graphics->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1152)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1152)
		if ((tmp1)){
			HX_STACK_LINE(1152)
			return null();
		}
		HX_STACK_LINE(1154)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		HX_STACK_LINE(1156)
		bool tmp2 = graphics->__visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1156)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1156)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1156)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1156)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1156)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1156)
		if ((tmp6)){
			HX_STACK_LINE(1156)
			int tmp8 = graphics->__commands->get_length();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1156)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1156)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1156)
			tmp7 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(1156)
			tmp7 = true;
		}
		HX_STACK_LINE(1156)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1156)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1156)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1156)
		if ((tmp9)){
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1156)
			tmp10 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(1156)
			tmp10 = true;
		}
		HX_STACK_LINE(1156)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1156)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1156)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1156)
		if ((tmp12)){
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1156)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1156)
			tmp13 = (tmp17 == (int)0);
		}
		else{
			HX_STACK_LINE(1156)
			tmp13 = true;
		}
		HX_STACK_LINE(1156)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1156)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1156)
		if ((tmp14)){
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1156)
			::openfl::geom::Rectangle tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1156)
			Float tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1156)
			tmp15 = (tmp18 == (int)0);
		}
		else{
			HX_STACK_LINE(1156)
			tmp15 = true;
		}
		HX_STACK_LINE(1156)
		if ((tmp15)){
			HX_STACK_LINE(1158)
			graphics->__cairo = null();
		}
		else{
			HX_STACK_LINE(1162)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = false;
			HX_STACK_LINE(1164)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1164)
			if ((tmp16)){
				HX_STACK_LINE(1166)
				Dynamic tmp17 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1166)
				Dynamic surface = tmp17;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(1168)
				::openfl::geom::Rectangle tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1168)
				Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1168)
				Dynamic tmp20 = surface;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1168)
				int tmp21 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1168)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1168)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1168)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1168)
				if ((tmp23)){
					HX_STACK_LINE(1168)
					::openfl::geom::Rectangle tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1168)
					::openfl::geom::Rectangle tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1168)
					Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1168)
					Dynamic tmp28 = surface;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1168)
					Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1168)
					int tmp30 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1168)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1168)
					tmp24 = (tmp27 != tmp31);
				}
				else{
					HX_STACK_LINE(1168)
					tmp24 = true;
				}
				HX_STACK_LINE(1168)
				if ((tmp24)){
					HX_STACK_LINE(1170)
					graphics->__cairo = null();
				}
			}
			HX_STACK_LINE(1176)
			bool tmp17 = (graphics->__cairo == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1176)
			if ((tmp17)){
				HX_STACK_LINE(1178)
				::openfl::geom::Rectangle tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1178)
				Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1178)
				int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1178)
				::openfl::geom::Rectangle tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1178)
				Float tmp22 = tmp21->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1178)
				int tmp23 = ::Math_obj::floor(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1178)
				::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__new(tmp20,tmp23,true,(int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1178)
				::openfl::display::BitmapData bitmap = tmp24;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(1179)
				Dynamic tmp25 = bitmap->getSurface();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1179)
				Dynamic surface = tmp25;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(1180)
				::lime::graphics::cairo::Cairo tmp26 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1180)
				graphics->__cairo = tmp26;
				HX_STACK_LINE(1181)
				graphics->__bitmap = bitmap;
			}
			HX_STACK_LINE(1185)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			HX_STACK_LINE(1187)
			::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1187)
			tmp18->set_operator((int)0);
			HX_STACK_LINE(1188)
			::lime::graphics::cairo::Cairo tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1188)
			tmp19->paint();
			HX_STACK_LINE(1189)
			::lime::graphics::cairo::Cairo tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1189)
			tmp20->set_operator((int)2);
			HX_STACK_LINE(1191)
			::openfl::_internal::renderer::DrawCommandBuffer tmp21 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1191)
			tmp21->clear();
			HX_STACK_LINE(1192)
			::openfl::_internal::renderer::DrawCommandBuffer tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1192)
			tmp22->clear();
			HX_STACK_LINE(1194)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			HX_STACK_LINE(1195)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			HX_STACK_LINE(1197)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			HX_STACK_LINE(1198)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			HX_STACK_LINE(1200)
			::openfl::_internal::renderer::DrawCommandReader tmp23 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1200)
			::openfl::_internal::renderer::DrawCommandReader data = tmp23;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1202)
			{
				HX_STACK_LINE(1202)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1202)
				Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1202)
				while((true)){
					HX_STACK_LINE(1202)
					bool tmp24 = (_g < _g1->length);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1202)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1202)
					if ((tmp25)){
						HX_STACK_LINE(1202)
						break;
					}
					HX_STACK_LINE(1202)
					::openfl::_internal::renderer::DrawCommandType tmp26 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1202)
					::openfl::_internal::renderer::DrawCommandType type = tmp26;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1202)
					++(_g);
					HX_STACK_LINE(1204)
					switch( (int)(type->__Index())){
						case (int)3: {
							HX_STACK_LINE(1208)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1208)
							{
								HX_STACK_LINE(1208)
								{
									HX_STACK_LINE(1208)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1208)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1208)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1208)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1208)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1208)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1208)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1208)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1208)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1208)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1208)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1208)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1208)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1208)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1208)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1208)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
								HX_STACK_LINE(1208)
								tmp27 = data;
							}
							HX_STACK_LINE(1208)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1209)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1209)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1209)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1209)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1209)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1209)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1209)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1209)
							int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1209)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1209)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1209)
							int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1209)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1209)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1209)
							int tmp47 = (tmp46 + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1209)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1209)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1209)
							int tmp50 = c->fPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1209)
							int tmp51 = (tmp50 + (int)6);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1209)
							Float tmp52 = tmp49->f->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1209)
							tmp28->cubicCurveTo(tmp32,tmp36,tmp40,tmp44,tmp48,tmp52);
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1210)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1210)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1210)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1210)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1210)
							int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1210)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1210)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1210)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1210)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1210)
							int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1210)
							int tmp68 = (tmp67 + (int)4);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1210)
							Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1210)
							int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1210)
							int tmp72 = (tmp71 + (int)5);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1210)
							Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1210)
							::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1210)
							int tmp75 = c->fPos;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1210)
							int tmp76 = (tmp75 + (int)6);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1210)
							Float tmp77 = tmp74->f->__get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1210)
							tmp53->cubicCurveTo(tmp57,tmp61,tmp65,tmp69,tmp73,tmp77);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1214)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1214)
							{
								HX_STACK_LINE(1214)
								{
									HX_STACK_LINE(1214)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1214)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1214)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1214)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1214)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1214)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1214)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1214)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1214)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1214)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1214)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1214)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1214)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1214)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1214)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1214)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
								HX_STACK_LINE(1214)
								tmp27 = data;
							}
							HX_STACK_LINE(1214)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1215)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1215)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1215)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1215)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1215)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1215)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1215)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1215)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1215)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1215)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1215)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1215)
							int tmp39 = (tmp38 + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1215)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1215)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1215)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1215)
							int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1215)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1215)
							tmp28->curveTo(tmp32,tmp36,tmp40,tmp44);
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1216)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1216)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1216)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1216)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1216)
							int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1216)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1216)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1216)
							int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1216)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1216)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1216)
							int tmp60 = (tmp59 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1216)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1216)
							tmp45->curveTo(tmp49,tmp53,tmp57,tmp61);
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1220)
							{
								HX_STACK_LINE(1220)
								{
									HX_STACK_LINE(1220)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1220)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1220)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1220)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1220)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1220)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1220)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1220)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1220)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1220)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1220)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1220)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1220)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1220)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1220)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1220)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
								HX_STACK_LINE(1220)
								tmp27 = data;
							}
							HX_STACK_LINE(1220)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1221)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1221)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1221)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1221)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1221)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1221)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1221)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1221)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1221)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1221)
							tmp28->lineTo(tmp32,tmp36);
							HX_STACK_LINE(1222)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1222)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1222)
							int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1222)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1222)
							Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1222)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1222)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1222)
							int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1222)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1222)
							tmp37->lineTo(tmp41,tmp45);
						}
						;break;
						case (int)17: {
							HX_STACK_LINE(1226)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1226)
							{
								HX_STACK_LINE(1226)
								{
									HX_STACK_LINE(1226)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1226)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1226)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1226)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1226)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1226)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1226)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1226)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
								HX_STACK_LINE(1226)
								tmp27 = data;
							}
							HX_STACK_LINE(1226)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1227)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1227)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1227)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1227)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1227)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1227)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1227)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1227)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1227)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1227)
							tmp28->moveTo(tmp32,tmp36);
							HX_STACK_LINE(1228)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1228)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1228)
							int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1228)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1228)
							Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1228)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1228)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1228)
							int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1228)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1228)
							tmp37->moveTo(tmp41,tmp45);
						}
						;break;
						case (int)12: {
							HX_STACK_LINE(1232)
							{
								HX_STACK_LINE(1232)
								{
									HX_STACK_LINE(1232)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1232)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1232)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1232)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1232)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1232)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1232)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1232)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1232)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1232)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1232)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1232)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1232)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1232)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1232)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1232)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
								HX_STACK_LINE(1232)
								data;
							}
							HX_STACK_LINE(1233)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(1234)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1235)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							HX_STACK_LINE(1236)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)14: {
							HX_STACK_LINE(1240)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1240)
							{
								HX_STACK_LINE(1240)
								{
									HX_STACK_LINE(1240)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1240)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1240)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1240)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1240)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1240)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1240)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1240)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1240)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1240)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1240)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1240)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1240)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1240)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1240)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1240)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
								HX_STACK_LINE(1240)
								tmp27 = data;
							}
							HX_STACK_LINE(1240)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1241)
							int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1241)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1241)
							Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1241)
							::openfl::display::GradientType tmp33 = ((::openfl::display::GradientType)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1241)
							int tmp35 = c->iiPos;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1241)
							int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1241)
							int tmp38 = c->ffPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1241)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1241)
							int tmp41 = c->iiPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1241)
							int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1241)
							int tmp44 = c->oPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1241)
							int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1241)
							Dynamic tmp46 = tmp43->o->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1241)
							::openfl::geom::Matrix tmp47 = ((::openfl::geom::Matrix)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1241)
							int tmp49 = c->oPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1241)
							int tmp50 = (tmp49 + (int)2);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1241)
							Dynamic tmp51 = tmp48->o->__GetItem(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1241)
							::openfl::display::SpreadMethod tmp52 = ((::openfl::display::SpreadMethod)(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1241)
							int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1241)
							int tmp55 = (tmp54 + (int)3);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1241)
							Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1241)
							::openfl::display::InterpolationMethod tmp57 = ((::openfl::display::InterpolationMethod)(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1241)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1241)
							int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1241)
							int tmp60 = (tmp59 + (int)4);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1241)
							Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1241)
							Dynamic tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1241)
							tmp28->lineGradientStyle(tmp33,tmp34->ii->__get(tmp36).StaticCast< Array< int > >(),tmp37->ff->__get(tmp39).StaticCast< Array< Float > >(),tmp40->ii->__get(tmp42).StaticCast< Array< int > >(),tmp47,tmp52,tmp57,tmp62);
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(1245)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1245)
							{
								HX_STACK_LINE(1245)
								{
									HX_STACK_LINE(1245)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1245)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1245)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1245)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1245)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1245)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1245)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1245)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1245)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1245)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1245)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1245)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1245)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1245)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1245)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1245)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
								HX_STACK_LINE(1245)
								tmp27 = data;
							}
							HX_STACK_LINE(1245)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1246)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1246)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1246)
							int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1246)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1246)
							Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1246)
							::openfl::display::BitmapData tmp33 = ((::openfl::display::BitmapData)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1246)
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1246)
							int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1246)
							int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1246)
							Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1246)
							::openfl::geom::Matrix tmp38 = ((::openfl::geom::Matrix)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1246)
							::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1246)
							int tmp40 = c->bPos;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1246)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1246)
							bool tmp42 = tmp39->b->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1246)
							bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1246)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1246)
							int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1246)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1246)
							bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1246)
							bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1246)
							tmp28->lineBitmapStyle(tmp33,tmp38,tmp43,tmp48);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1250)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1250)
							{
								HX_STACK_LINE(1250)
								{
									HX_STACK_LINE(1250)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1250)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1250)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1250)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1250)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1250)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1250)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1250)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1250)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1250)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1250)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1250)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1250)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1250)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1250)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1250)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
								HX_STACK_LINE(1250)
								tmp27 = data;
							}
							HX_STACK_LINE(1250)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1251)
							int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1251)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1251)
							Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1251)
							Dynamic tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1251)
							int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1251)
							int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1251)
							Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1251)
							Dynamic tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1251)
							int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1251)
							int tmp41 = (tmp40 + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1251)
							Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1251)
							Dynamic tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1251)
							int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1251)
							int tmp46 = (tmp45 + (int)3);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1251)
							Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1251)
							Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1251)
							int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1251)
							int tmp51 = (tmp50 + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1251)
							Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1251)
							::openfl::display::LineScaleMode tmp53 = ((::openfl::display::LineScaleMode)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1251)
							int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1251)
							int tmp56 = (tmp55 + (int)5);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1251)
							Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1251)
							::openfl::display::CapsStyle tmp58 = ((::openfl::display::CapsStyle)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1251)
							int tmp60 = c->oPos;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1251)
							int tmp61 = (tmp60 + (int)6);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1251)
							Dynamic tmp62 = tmp59->o->__GetItem(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1251)
							::openfl::display::JointStyle tmp63 = ((::openfl::display::JointStyle)(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1251)
							::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1251)
							int tmp65 = c->oPos;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1251)
							int tmp66 = (tmp65 + (int)7);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1251)
							Dynamic tmp67 = tmp64->o->__GetItem(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1251)
							Dynamic tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1251)
							tmp28->lineStyle(tmp33,tmp38,tmp43,tmp48,tmp53,tmp58,tmp63,tmp68);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							HX_STACK_LINE(1255)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(1256)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1258)
							bool tmp27 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1258)
							if ((tmp27)){
								HX_STACK_LINE(1260)
								::openfl::_internal::renderer::DrawCommandReader tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1260)
								{
									HX_STACK_LINE(1260)
									{
										HX_STACK_LINE(1260)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(1260)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(1260)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(1260)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(1260)
												hx::AddEq(data->ffPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)3);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)9: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->tsPos,(int)1);
												HX_STACK_LINE(1260)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(1260)
												hx::AddEq(data->bPos,(int)1);
												HX_STACK_LINE(1260)
												hx::AddEq(data->iPos,(int)2);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(1260)
												hx::AddEq(data->iPos,(int)1);
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(1260)
												Dynamic();
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(1260)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)5);
												HX_STACK_LINE(1260)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(1260)
												hx::AddEq(data->ffPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)8);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)18: {
												HX_STACK_LINE(1260)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(1260)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(1260)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
									HX_STACK_LINE(1260)
									tmp28 = data;
								}
								HX_STACK_LINE(1260)
								::openfl::_internal::renderer::DrawCommandReader c = tmp28;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(1261)
								::openfl::_internal::renderer::DrawCommandBuffer tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1261)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1261)
								int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1261)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1261)
								Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1261)
								::openfl::display::BitmapData tmp34 = ((::openfl::display::BitmapData)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1261)
								::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1261)
								int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1261)
								int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1261)
								Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1261)
								::openfl::geom::Matrix tmp39 = ((::openfl::geom::Matrix)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1261)
								::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1261)
								int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1261)
								int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1261)
								bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1261)
								::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1261)
								int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1261)
								int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1261)
								bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1261)
								tmp29->beginBitmapFill(tmp34,tmp39,tmp43,tmp47);
								HX_STACK_LINE(1262)
								::openfl::_internal::renderer::DrawCommandBuffer tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1262)
								::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1262)
								int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1262)
								int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1262)
								Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1262)
								::openfl::display::BitmapData tmp53 = ((::openfl::display::BitmapData)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1262)
								::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1262)
								int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1262)
								int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1262)
								Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1262)
								::openfl::geom::Matrix tmp58 = ((::openfl::geom::Matrix)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1262)
								::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1262)
								int tmp60 = c->bPos;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1262)
								int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1262)
								bool tmp62 = tmp59->b->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1262)
								::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1262)
								int tmp64 = c->bPos;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1262)
								int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1262)
								bool tmp66 = tmp63->b->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1262)
								tmp48->beginBitmapFill(tmp53,tmp58,tmp62,tmp66);
							}
							else{
								HX_STACK_LINE(1264)
								bool tmp28 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1264)
								if ((tmp28)){
									HX_STACK_LINE(1266)
									::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1266)
									{
										HX_STACK_LINE(1266)
										{
											HX_STACK_LINE(1266)
											::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1266)
											switch( (int)(_g2->__Index())){
												case (int)0: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1266)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)2: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)5);
													HX_STACK_LINE(1266)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1266)
													hx::AddEq(data->ffPos,(int)1);
												}
												;break;
												case (int)3: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)4: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)5: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)3);
												}
												;break;
												case (int)6: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)7: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)3);
												}
												;break;
												case (int)8: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)9: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)10: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->tsPos,(int)1);
													HX_STACK_LINE(1266)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1266)
													hx::AddEq(data->bPos,(int)1);
													HX_STACK_LINE(1266)
													hx::AddEq(data->iPos,(int)2);
												}
												;break;
												case (int)11: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)5);
													HX_STACK_LINE(1266)
													hx::AddEq(data->iPos,(int)1);
												}
												;break;
												case (int)12: {
													HX_STACK_LINE(1266)
													Dynamic();
												}
												;break;
												case (int)13: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1266)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)14: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)5);
													HX_STACK_LINE(1266)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1266)
													hx::AddEq(data->ffPos,(int)1);
												}
												;break;
												case (int)15: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)8);
												}
												;break;
												case (int)16: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)17: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)18: {
													HX_STACK_LINE(1266)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												default: {
													HX_STACK_LINE(1266)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1266)
										data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
										HX_STACK_LINE(1266)
										tmp29 = data;
									}
									HX_STACK_LINE(1266)
									::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1267)
									int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1267)
									int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1267)
									Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1267)
									::openfl::display::GradientType tmp35 = ((::openfl::display::GradientType)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1267)
									int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1267)
									int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1267)
									int tmp40 = c->ffPos;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1267)
									int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1267)
									int tmp43 = c->iiPos;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1267)
									int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1267)
									int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1267)
									int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1267)
									Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1267)
									::openfl::geom::Matrix tmp49 = ((::openfl::geom::Matrix)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1267)
									int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1267)
									int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1267)
									Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1267)
									::openfl::display::SpreadMethod tmp54 = ((::openfl::display::SpreadMethod)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1267)
									int tmp56 = c->oPos;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1267)
									int tmp57 = (tmp56 + (int)3);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1267)
									Dynamic tmp58 = tmp55->o->__GetItem(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1267)
									::openfl::display::InterpolationMethod tmp59 = ((::openfl::display::InterpolationMethod)(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1267)
									::openfl::_internal::renderer::DrawCommandBuffer tmp60 = c->buffer;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1267)
									int tmp61 = c->oPos;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1267)
									int tmp62 = (tmp61 + (int)4);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1267)
									Dynamic tmp63 = tmp60->o->__GetItem(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1267)
									Dynamic tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(1267)
									tmp30->beginGradientFill(tmp35,tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp39->ff->__get(tmp41).StaticCast< Array< Float > >(),tmp42->ii->__get(tmp44).StaticCast< Array< int > >(),tmp49,tmp54,tmp59,tmp64);
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1268)
									int tmp67 = c->oPos;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1268)
									int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1268)
									Dynamic tmp69 = tmp66->o->__GetItem(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(1268)
									::openfl::display::GradientType tmp70 = ((::openfl::display::GradientType)(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(1268)
									int tmp72 = c->iiPos;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1268)
									int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(1268)
									int tmp75 = c->ffPos;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(1268)
									int tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(1268)
									int tmp78 = c->iiPos;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(1268)
									int tmp79 = (tmp78 + (int)1);		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(1268)
									int tmp81 = c->oPos;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(1268)
									int tmp82 = (tmp81 + (int)1);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(1268)
									Dynamic tmp83 = tmp80->o->__GetItem(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(1268)
									::openfl::geom::Matrix tmp84 = ((::openfl::geom::Matrix)(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp85 = c->buffer;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(1268)
									int tmp86 = c->oPos;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(1268)
									int tmp87 = (tmp86 + (int)2);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(1268)
									Dynamic tmp88 = tmp85->o->__GetItem(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(1268)
									::openfl::display::SpreadMethod tmp89 = ((::openfl::display::SpreadMethod)(tmp88));		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp90 = c->buffer;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(1268)
									int tmp91 = c->oPos;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(1268)
									int tmp92 = (tmp91 + (int)3);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(1268)
									Dynamic tmp93 = tmp90->o->__GetItem(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(1268)
									::openfl::display::InterpolationMethod tmp94 = ((::openfl::display::InterpolationMethod)(tmp93));		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(1268)
									::openfl::_internal::renderer::DrawCommandBuffer tmp95 = c->buffer;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(1268)
									int tmp96 = c->oPos;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1268)
									int tmp97 = (tmp96 + (int)4);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1268)
									Dynamic tmp98 = tmp95->o->__GetItem(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(1268)
									Dynamic tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(1268)
									tmp65->beginGradientFill(tmp70,tmp71->ii->__get(tmp73).StaticCast< Array< int > >(),tmp74->ff->__get(tmp76).StaticCast< Array< Float > >(),tmp77->ii->__get(tmp79).StaticCast< Array< int > >(),tmp84,tmp89,tmp94,tmp99);
								}
								else{
									HX_STACK_LINE(1272)
									::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1272)
									{
										HX_STACK_LINE(1272)
										{
											HX_STACK_LINE(1272)
											::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1272)
											switch( (int)(_g2->__Index())){
												case (int)0: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1272)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)2: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)5);
													HX_STACK_LINE(1272)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1272)
													hx::AddEq(data->ffPos,(int)1);
												}
												;break;
												case (int)3: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)4: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)5: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)3);
												}
												;break;
												case (int)6: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)7: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)3);
												}
												;break;
												case (int)8: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)9: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)10: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->tsPos,(int)1);
													HX_STACK_LINE(1272)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1272)
													hx::AddEq(data->bPos,(int)1);
													HX_STACK_LINE(1272)
													hx::AddEq(data->iPos,(int)2);
												}
												;break;
												case (int)11: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)5);
													HX_STACK_LINE(1272)
													hx::AddEq(data->iPos,(int)1);
												}
												;break;
												case (int)12: {
													HX_STACK_LINE(1272)
													Dynamic();
												}
												;break;
												case (int)13: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1272)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)14: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)5);
													HX_STACK_LINE(1272)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1272)
													hx::AddEq(data->ffPos,(int)1);
												}
												;break;
												case (int)15: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)8);
												}
												;break;
												case (int)16: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)17: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)18: {
													HX_STACK_LINE(1272)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												default: {
													HX_STACK_LINE(1272)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1272)
										data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
										HX_STACK_LINE(1272)
										tmp29 = data;
									}
									HX_STACK_LINE(1272)
									::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1273)
									::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1273)
									::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1273)
									int tmp32 = c->iPos;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1273)
									int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1273)
									int tmp34 = tmp31->i->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1273)
									::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1273)
									int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1273)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1273)
									Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1273)
									tmp30->beginFill(tmp34,tmp38);
									HX_STACK_LINE(1274)
									::openfl::_internal::renderer::DrawCommandBuffer tmp39 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1274)
									::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1274)
									int tmp41 = c->iPos;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1274)
									int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1274)
									int tmp43 = tmp40->i->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1274)
									::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1274)
									int tmp45 = c->fPos;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1274)
									int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1274)
									Float tmp47 = tmp44->f->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1274)
									tmp39->beginFill(tmp43,tmp47);
								}
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1280)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1280)
							{
								HX_STACK_LINE(1280)
								{
									HX_STACK_LINE(1280)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1280)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1280)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1280)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1280)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1280)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1280)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1280)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1280)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1280)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1280)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1280)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1280)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1280)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1280)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1280)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
								HX_STACK_LINE(1280)
								tmp27 = data;
							}
							HX_STACK_LINE(1280)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1281)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1281)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1281)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1281)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1281)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1281)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1281)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1281)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1281)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1281)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1281)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1281)
							int tmp39 = (tmp38 + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1281)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1281)
							tmp28->drawCircle(tmp32,tmp36,tmp40);
							HX_STACK_LINE(1282)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1282)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1282)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1282)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1282)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1282)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1282)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1282)
							int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1282)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1282)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1282)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1282)
							int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1282)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1282)
							tmp41->drawCircle(tmp45,tmp49,tmp53);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1286)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1286)
							{
								HX_STACK_LINE(1286)
								{
									HX_STACK_LINE(1286)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1286)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1286)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1286)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1286)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1286)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1286)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1286)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1286)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1286)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1286)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1286)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1286)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1286)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1286)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1286)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
								HX_STACK_LINE(1286)
								tmp27 = data;
							}
							HX_STACK_LINE(1286)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1287)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1287)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1287)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1287)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1287)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1287)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1287)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1287)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1287)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1287)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1287)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1287)
							int tmp39 = (tmp38 + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1287)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1287)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1287)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1287)
							int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1287)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1287)
							tmp28->drawEllipse(tmp32,tmp36,tmp40,tmp44);
							HX_STACK_LINE(1288)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1288)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1288)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1288)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1288)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1288)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1288)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1288)
							int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1288)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1288)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1288)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1288)
							int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1288)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1288)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1288)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1288)
							int tmp60 = (tmp59 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1288)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1288)
							tmp45->drawEllipse(tmp49,tmp53,tmp57,tmp61);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1292)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1292)
							{
								HX_STACK_LINE(1292)
								{
									HX_STACK_LINE(1292)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1292)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1292)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1292)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1292)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1292)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1292)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1292)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1292)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1292)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1292)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1292)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1292)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1292)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1292)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1292)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
								HX_STACK_LINE(1292)
								tmp27 = data;
							}
							HX_STACK_LINE(1292)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1293)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1293)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1293)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1293)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1293)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1293)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1293)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1293)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1293)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1293)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1293)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1293)
							int tmp39 = (tmp38 + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1293)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1293)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1293)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1293)
							int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1293)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1293)
							tmp28->drawRect(tmp32,tmp36,tmp40,tmp44);
							HX_STACK_LINE(1294)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1294)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1294)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1294)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1294)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1294)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1294)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1294)
							int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1294)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1294)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1294)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1294)
							int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1294)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1294)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1294)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1294)
							int tmp60 = (tmp59 + (int)3);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1294)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1294)
							tmp45->drawRect(tmp49,tmp53,tmp57,tmp61);
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(1298)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1298)
							{
								HX_STACK_LINE(1298)
								{
									HX_STACK_LINE(1298)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1298)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1298)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1298)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1298)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1298)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1298)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1298)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1298)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1298)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1298)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1298)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1298)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1298)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1298)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1298)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
								HX_STACK_LINE(1298)
								tmp27 = data;
							}
							HX_STACK_LINE(1298)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1299)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1299)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1299)
							Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1299)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1299)
							int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1299)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1299)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1299)
							int tmp39 = (tmp38 + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1299)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1299)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1299)
							int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1299)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1299)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1299)
							int tmp47 = (tmp46 + (int)4);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1299)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1299)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1299)
							int tmp50 = c->fPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1299)
							int tmp51 = (tmp50 + (int)5);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1299)
							Float tmp52 = tmp49->f->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1299)
							tmp28->drawRoundRect(tmp32,tmp36,tmp40,tmp44,tmp48,tmp52);
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1300)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1300)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1300)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1300)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1300)
							int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1300)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1300)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1300)
							int tmp64 = (tmp63 + (int)2);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1300)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1300)
							int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1300)
							int tmp68 = (tmp67 + (int)3);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1300)
							Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1300)
							int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1300)
							int tmp72 = (tmp71 + (int)4);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1300)
							Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1300)
							::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1300)
							int tmp75 = c->fPos;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1300)
							int tmp76 = (tmp75 + (int)5);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1300)
							Float tmp77 = tmp74->f->__get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1300)
							tmp53->drawRoundRect(tmp57,tmp61,tmp65,tmp69,tmp73,tmp77);
						}
						;break;
						case (int)10: {
							HX_STACK_LINE(1304)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1304)
							{
								HX_STACK_LINE(1304)
								{
									HX_STACK_LINE(1304)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1304)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1304)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1304)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1304)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1304)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1304)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1304)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1304)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1304)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1304)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1304)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1304)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1304)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1304)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1304)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES;
								HX_STACK_LINE(1304)
								tmp27 = data;
							}
							HX_STACK_LINE(1304)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1305)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1305)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1305)
							int tmp30 = c->tsPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1305)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1305)
							::openfl::display::Tilesheet tmp32 = tmp29->ts->__get(tmp31).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1305)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1305)
							int tmp34 = c->ffPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1305)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1305)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1305)
							int tmp37 = c->bPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1305)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1305)
							bool tmp39 = tmp36->b->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1305)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1305)
							int tmp41 = c->iPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1305)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1305)
							int tmp43 = tmp40->i->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1305)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1305)
							int tmp45 = c->iPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1305)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1305)
							int tmp47 = tmp44->i->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1305)
							tmp28->drawTiles(tmp32,tmp33->ff->__get(tmp35).StaticCast< Array< Float > >(),tmp39,tmp43,tmp47);
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(1309)
							::openfl::_internal::renderer::DrawCommandReader tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1309)
							{
								HX_STACK_LINE(1309)
								{
									HX_STACK_LINE(1309)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1309)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1309)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1309)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1309)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1309)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1309)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1309)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1309)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1309)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1309)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1309)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1309)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1309)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1309)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1309)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
								HX_STACK_LINE(1309)
								tmp27 = data;
							}
							HX_STACK_LINE(1309)
							::openfl::_internal::renderer::DrawCommandReader c = tmp27;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1310)
							int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1310)
							int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1310)
							Dynamic tmp32 = tmp29->o->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1310)
							Array< Float > tmp33 = ((Array< Float >)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1310)
							int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1310)
							int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1310)
							Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1310)
							Array< int > tmp38 = ((Array< int >)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1310)
							int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1310)
							int tmp41 = (tmp40 + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1310)
							Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1310)
							Array< Float > tmp43 = ((Array< Float >)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1310)
							int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1310)
							int tmp46 = (tmp45 + (int)3);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1310)
							Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1310)
							::openfl::display::TriangleCulling tmp48 = ((::openfl::display::TriangleCulling)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1310)
							int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1310)
							int tmp51 = (tmp50 + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1310)
							Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1310)
							Array< int > tmp53 = ((Array< int >)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1310)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1310)
							int tmp55 = c->iPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1310)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1310)
							int tmp57 = tmp54->i->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1310)
							tmp28->drawTriangles(tmp33,tmp38,tmp43,tmp48,tmp53,tmp57);
						}
						;break;
						default: {
							HX_STACK_LINE(1314)
							{
								HX_STACK_LINE(1314)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1314)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1314)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(1314)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1314)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(1314)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1314)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(1314)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(1314)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(1314)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1314)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(1314)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1314)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(1314)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(1314)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1314)
							data->prev = type;
						}
					}
				}
			}
			HX_STACK_LINE(1320)
			::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1320)
			int tmp25 = tmp24->get_length();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1320)
			bool tmp26 = (tmp25 > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1320)
			if ((tmp26)){
				HX_STACK_LINE(1322)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(1326)
			::openfl::_internal::renderer::DrawCommandBuffer tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1326)
			int tmp28 = tmp27->get_length();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1326)
			bool tmp29 = (tmp28 > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1326)
			if ((tmp29)){
				HX_STACK_LINE(1328)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
			HX_STACK_LINE(1332)
			data->destroy();
			HX_STACK_LINE(1334)
			::lime::graphics::Image tmp30 = graphics->__bitmap->image;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1334)
			tmp30->dirty = true;
		}
		HX_STACK_LINE(1338)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",1345,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1347)
		int tmp = graphics->__commands->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1347)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1347)
		if ((tmp1)){
			HX_STACK_LINE(1349)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(1351)
			Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(1352)
			Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1354)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1355)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1357)
			::openfl::_internal::renderer::DrawCommandReader tmp2 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1357)
			::openfl::_internal::renderer::DrawCommandReader data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1359)
			{
				HX_STACK_LINE(1359)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1359)
				Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1359)
				while((true)){
					HX_STACK_LINE(1359)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1359)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1359)
					if ((tmp4)){
						HX_STACK_LINE(1359)
						break;
					}
					HX_STACK_LINE(1359)
					::openfl::_internal::renderer::DrawCommandType tmp5 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1359)
					::openfl::_internal::renderer::DrawCommandType type = tmp5;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1359)
					++(_g);
					HX_STACK_LINE(1361)
					switch( (int)(type->__Index())){
						case (int)3: {
							HX_STACK_LINE(1365)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1365)
							{
								HX_STACK_LINE(1365)
								{
									HX_STACK_LINE(1365)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1365)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1365)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1365)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1365)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1365)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1365)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1365)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1365)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1365)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1365)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1365)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1365)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1365)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1365)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1365)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
								HX_STACK_LINE(1365)
								tmp6 = data;
							}
							HX_STACK_LINE(1365)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1366)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1366)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1366)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1366)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1366)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1366)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1366)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1366)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1366)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1366)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1366)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1366)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1366)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1366)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1366)
							int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1366)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1366)
							int tmp23 = offsetX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1366)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1366)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1366)
							int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1366)
							int tmp27 = (tmp26 + (int)4);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1366)
							Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1366)
							int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1366)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1366)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1366)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1366)
							int tmp33 = (tmp32 + (int)5);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1366)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1366)
							int tmp35 = offsetX;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1366)
							Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1366)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1366)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1366)
							int tmp39 = (tmp38 + (int)6);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1366)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1366)
							int tmp41 = offsetY;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1366)
							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1366)
							cairo->curveTo(tmp12,tmp18,tmp24,tmp30,tmp36,tmp42);
							HX_STACK_LINE(1367)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1367)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1367)
							int tmp45 = (tmp44 + (int)5);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1367)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1367)
							positionX = tmp46;
							HX_STACK_LINE(1368)
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1368)
							int tmp48 = c->fPos;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1368)
							int tmp49 = (tmp48 + (int)5);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1368)
							Float tmp50 = tmp47->f->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1368)
							positionY = tmp50;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1372)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1372)
							{
								HX_STACK_LINE(1372)
								{
									HX_STACK_LINE(1372)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1372)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1372)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1372)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1372)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1372)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1372)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1372)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1372)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1372)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1372)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1372)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1372)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1372)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1372)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1372)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
								HX_STACK_LINE(1372)
								tmp6 = data;
							}
							HX_STACK_LINE(1372)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1373)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1373)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1373)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1373)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1373)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1373)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1373)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1373)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1373)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1373)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1373)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1373)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1373)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1373)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1373)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1373)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1373)
							int tmp23 = offsetX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1373)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1373)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1373)
							int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1373)
							int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1373)
							Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1373)
							int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1373)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1373)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp12,tmp18,tmp24,tmp30);
							HX_STACK_LINE(1374)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1374)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1374)
							int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1374)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1374)
							positionX = tmp34;
							HX_STACK_LINE(1375)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1375)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1375)
							int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1375)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1375)
							positionY = tmp38;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1379)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1379)
							{
								HX_STACK_LINE(1379)
								{
									HX_STACK_LINE(1379)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1379)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1379)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1379)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1379)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1379)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1379)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1379)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1379)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1379)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1379)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1379)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1379)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1379)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1379)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1379)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
								HX_STACK_LINE(1379)
								tmp6 = data;
							}
							HX_STACK_LINE(1379)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1380)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1380)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1380)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1380)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1380)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1380)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1380)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1380)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1380)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1380)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1380)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1380)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1380)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1380)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1380)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1380)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1380)
							Float tmp23 = ::Math_obj::PI;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1380)
							Float tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1380)
							cairo->arc(tmp12,tmp18,tmp22,(int)0,tmp24);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1384)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1384)
							{
								HX_STACK_LINE(1384)
								{
									HX_STACK_LINE(1384)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1384)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1384)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1384)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1384)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1384)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1384)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1384)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1384)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1384)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1384)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1384)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1384)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1384)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1384)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1384)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
								HX_STACK_LINE(1384)
								tmp6 = data;
							}
							HX_STACK_LINE(1384)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1386)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1386)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1386)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1386)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1386)
							Float x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1387)
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1387)
							int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1387)
							int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1387)
							Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1387)
							Float y = tmp14;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1388)
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1388)
							int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1388)
							int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1388)
							Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1388)
							Float width = tmp18;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1389)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1389)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1389)
							int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1389)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1389)
							Float height = tmp22;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1391)
							hx::SubEq(x,offsetX);
							HX_STACK_LINE(1392)
							hx::SubEq(y,offsetY);
							HX_STACK_LINE(1394)
							Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
							HX_STACK_LINE(1395)
							Float tmp23 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1395)
							Float tmp24 = kappa;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1395)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1395)
							Float ox = tmp25;		HX_STACK_VAR(ox,"ox");
							HX_STACK_LINE(1396)
							Float tmp26 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1396)
							Float tmp27 = kappa;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1396)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1396)
							Float oy = tmp28;		HX_STACK_VAR(oy,"oy");
							HX_STACK_LINE(1397)
							Float tmp29 = (x + width);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1397)
							Float xe = tmp29;		HX_STACK_VAR(xe,"xe");
							HX_STACK_LINE(1398)
							Float tmp30 = (y + height);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1398)
							Float ye = tmp30;		HX_STACK_VAR(ye,"ye");
							HX_STACK_LINE(1399)
							Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1399)
							Float tmp32 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1399)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1399)
							Float xm = tmp33;		HX_STACK_VAR(xm,"xm");
							HX_STACK_LINE(1400)
							Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1400)
							Float tmp35 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1400)
							Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1400)
							Float ym = tmp36;		HX_STACK_VAR(ym,"ym");
							HX_STACK_LINE(1404)
							Float tmp37 = x;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1404)
							Float tmp38 = ym;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1404)
							cairo->moveTo(tmp37,tmp38);
							HX_STACK_LINE(1405)
							Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1405)
							Float tmp40 = (ym - oy);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1405)
							Float tmp41 = (xm - ox);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1405)
							Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1405)
							Float tmp43 = xm;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1405)
							Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1405)
							cairo->curveTo(tmp39,tmp40,tmp41,tmp42,tmp43,tmp44);
							HX_STACK_LINE(1406)
							Float tmp45 = (xm + ox);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1406)
							Float tmp46 = y;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1406)
							Float tmp47 = xe;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1406)
							Float tmp48 = (ym - oy);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1406)
							Float tmp49 = xe;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1406)
							Float tmp50 = ym;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1406)
							cairo->curveTo(tmp45,tmp46,tmp47,tmp48,tmp49,tmp50);
							HX_STACK_LINE(1407)
							Float tmp51 = xe;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1407)
							Float tmp52 = (ym + oy);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1407)
							Float tmp53 = (xm + ox);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1407)
							Float tmp54 = ye;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1407)
							Float tmp55 = xm;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1407)
							Float tmp56 = ye;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1407)
							cairo->curveTo(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
							HX_STACK_LINE(1408)
							Float tmp57 = (xm - ox);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1408)
							Float tmp58 = ye;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1408)
							Float tmp59 = x;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1408)
							Float tmp60 = (ym + oy);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1408)
							Float tmp61 = x;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1408)
							Float tmp62 = ym;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1408)
							cairo->curveTo(tmp57,tmp58,tmp59,tmp60,tmp61,tmp62);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1413)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1413)
							{
								HX_STACK_LINE(1413)
								{
									HX_STACK_LINE(1413)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1413)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1413)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1413)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1413)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1413)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1413)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1413)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1413)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1413)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1413)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1413)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1413)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1413)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1413)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1413)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
								HX_STACK_LINE(1413)
								tmp6 = data;
							}
							HX_STACK_LINE(1413)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1414)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1414)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1414)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1414)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1414)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1414)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1414)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1414)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1414)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1414)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1414)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1414)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1414)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1414)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1414)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1414)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1414)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1414)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1414)
							int tmp25 = (tmp24 + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1414)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1414)
							cairo->rectangle(tmp12,tmp18,tmp22,tmp26);
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(1418)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1418)
							{
								HX_STACK_LINE(1418)
								{
									HX_STACK_LINE(1418)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1418)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1418)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1418)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1418)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1418)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1418)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1418)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1418)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1418)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1418)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1418)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1418)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1418)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1418)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1418)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
								HX_STACK_LINE(1418)
								tmp6 = data;
							}
							HX_STACK_LINE(1418)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1419)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1419)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1419)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1419)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1419)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1419)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1419)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1419)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1419)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1419)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1419)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1419)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1419)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1419)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1419)
							int tmp25 = (tmp24 + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1419)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1419)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1419)
							int tmp29 = (tmp28 + (int)4);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1419)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1419)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1419)
							int tmp33 = (tmp32 + (int)5);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1419)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1419)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp12,tmp18,tmp22,tmp26,tmp30,tmp34);
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1423)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1423)
							{
								HX_STACK_LINE(1423)
								{
									HX_STACK_LINE(1423)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1423)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1423)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1423)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1423)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1423)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1423)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1423)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1423)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1423)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1423)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1423)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1423)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1423)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1423)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1423)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
								HX_STACK_LINE(1423)
								tmp6 = data;
							}
							HX_STACK_LINE(1423)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1424)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1424)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1424)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1424)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1424)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1424)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1424)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1424)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1424)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1424)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1424)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1424)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1424)
							cairo->lineTo(tmp12,tmp18);
							HX_STACK_LINE(1425)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1425)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1425)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1425)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1425)
							positionX = tmp22;
							HX_STACK_LINE(1426)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1426)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1426)
							int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1426)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1426)
							positionY = tmp26;
						}
						;break;
						case (int)17: {
							HX_STACK_LINE(1430)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1430)
							{
								HX_STACK_LINE(1430)
								{
									HX_STACK_LINE(1430)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1430)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1430)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1430)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1430)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)3);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)9: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->tsPos,(int)1);
											HX_STACK_LINE(1430)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1430)
											hx::AddEq(data->bPos,(int)1);
											HX_STACK_LINE(1430)
											hx::AddEq(data->iPos,(int)2);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1430)
											hx::AddEq(data->iPos,(int)1);
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1430)
											Dynamic();
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1430)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)5);
											HX_STACK_LINE(1430)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1430)
											hx::AddEq(data->ffPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)8);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)18: {
											HX_STACK_LINE(1430)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1430)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1430)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
								HX_STACK_LINE(1430)
								tmp6 = data;
							}
							HX_STACK_LINE(1430)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1431)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1431)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1431)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1431)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1431)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1431)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1431)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1431)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1431)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1431)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1431)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1431)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1431)
							cairo->moveTo(tmp12,tmp18);
							HX_STACK_LINE(1432)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1432)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1432)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1432)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1432)
							positionX = tmp22;
							HX_STACK_LINE(1433)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1433)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1433)
							int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1433)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1433)
							positionY = tmp26;
						}
						;break;
						default: {
							HX_STACK_LINE(1437)
							{
								HX_STACK_LINE(1437)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1437)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1437)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(1437)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1437)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(1437)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1437)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(1437)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(1437)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(1437)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1437)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(1437)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1437)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(1437)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(1437)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1437)
							data->prev = type;
						}
					}
				}
			}
			HX_STACK_LINE(1443)
			data->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = cairo; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = hasFill; return true;  }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = graphics; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = hasStroke; return true;  }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = bitmapFill; return true;  }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = hitTesting; return true;  }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = fillPattern; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = strokePattern; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = fillPatternMatrix; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast< ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast< ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CairoGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CairoGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(void *) &CairoGraphics_obj::cairo,HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::fillPattern,HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CairoGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::strokePattern,HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#endif

hx::Class CairoGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35"),
	HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("createImagePattern","\x51","\xbd","\x5d","\xfb"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoGraphics","\x72","\x72","\xef","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoGraphics_obj >;
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

void CairoGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
	fillCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
	strokeCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
