#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
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
#ifndef INCLUDED_openfl__internal_renderer_GraphicsPaths
#include <openfl/_internal/renderer/GraphicsPaths.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PathBuiler_obj::__construct()
{
	return null();
}

//PathBuiler_obj::~PathBuiler_obj() { }

Dynamic PathBuiler_obj::__CreateEmpty() { return  new PathBuiler_obj; }
hx::ObjectPtr< PathBuiler_obj > PathBuiler_obj::__new()
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

Dynamic PathBuiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathBuiler_obj > _result_ = new PathBuiler_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::opengl::utils::DrawPath PathBuiler_obj::__currentPath;

int PathBuiler_obj::__currentWinding;

Array< ::Dynamic > PathBuiler_obj::__drawPaths;

::openfl::_internal::renderer::opengl::utils::LineStyle PathBuiler_obj::__line;

::openfl::_internal::renderer::opengl::utils::FillType PathBuiler_obj::__fill;

int PathBuiler_obj::__fillIndex;

Void PathBuiler_obj::closePath( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","closePath",0x65da1ed8,"openfl._internal.renderer.opengl.utils.PathBuiler.closePath","openfl/_internal/renderer/opengl/utils/DrawPath.hx",82,0xf0fd7951)
		HX_STACK_LINE(83)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = (tmp->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(83)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(83)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			tmp2 = tmp3->points->length;
		}
		HX_STACK_LINE(83)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(84)
		bool tmp3 = (l <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(86)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		::openfl::_internal::renderer::opengl::utils::GraphicType tmp5 = tmp4->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		bool tmp6 = (tmp5 == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		if ((tmp6)){
			HX_STACK_LINE(86)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(86)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			::openfl::_internal::renderer::opengl::utils::FillType tmp10 = tmp9->fill;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			tmp7 = (tmp10 != ::openfl::_internal::renderer::opengl::utils::FillType_obj::None);
		}
		else{
			HX_STACK_LINE(86)
			tmp7 = false;
		}
		HX_STACK_LINE(86)
		if ((tmp7)){
			HX_STACK_LINE(87)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			Float tmp9 = tmp8->points->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			Float sx = tmp9;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(88)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			Float tmp11 = tmp10->points->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			Float sy = tmp11;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(89)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			int tmp13 = (l - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(89)
			Float tmp14 = tmp12->points->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(89)
			Float ex = tmp14;		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(90)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp15 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(90)
			int tmp16 = (l - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(90)
			Float tmp17 = tmp15->points->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(90)
			Float ey = tmp17;		HX_STACK_VAR(ey,"ey");
			HX_STACK_LINE(92)
			bool tmp18 = (sx == ex);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(92)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(92)
			if ((tmp18)){
				HX_STACK_LINE(92)
				tmp19 = (sy == ey);
			}
			else{
				HX_STACK_LINE(92)
				tmp19 = false;
			}
			HX_STACK_LINE(92)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(92)
			if ((tmp20)){
				HX_STACK_LINE(93)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp21 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(93)
				Array< Float > points = tmp21->points;		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(93)
				bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
				HX_STACK_LINE(93)
				bool tmp22 = (points->length > (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(93)
				if ((tmp22)){
					HX_STACK_LINE(93)
					int tmp23 = (points->length - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(93)
					Float tmp24 = points->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(93)
					Float lastX = tmp24;		HX_STACK_VAR(lastX,"lastX");
					HX_STACK_LINE(93)
					int tmp25 = (points->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(93)
					Float tmp26 = points->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(93)
					Float lastY = tmp26;		HX_STACK_VAR(lastY,"lastY");
					HX_STACK_LINE(93)
					bool tmp27 = (lastX == sx);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(93)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(93)
					if ((tmp27)){
						HX_STACK_LINE(93)
						tmp28 = (lastY == sy);
					}
					else{
						HX_STACK_LINE(93)
						tmp28 = false;
					}
					HX_STACK_LINE(93)
					if ((tmp28)){
						HX_STACK_LINE(93)
						push_point = false;
					}
				}
				HX_STACK_LINE(93)
				bool tmp23 = (push_point == true);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(93)
				if ((tmp23)){
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(93)
					Float tmp25 = sx;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(93)
					tmp24->points->push(tmp25);
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(93)
					Float tmp27 = sy;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(93)
					tmp26->points->push(tmp27);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,closePath,(void))

Void PathBuiler_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","endFill",0xe6a5a499,"openfl._internal.renderer.opengl.utils.PathBuiler.endFill","openfl/_internal/renderer/opengl/utils/DrawPath.hx",98,0xf0fd7951)
		HX_STACK_LINE(100)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
		HX_STACK_LINE(101)
		(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,endFill,(void))

Void PathBuiler_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","moveTo",0x360182b1,"openfl._internal.renderer.opengl.utils.PathBuiler.moveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",105,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			if ((tmp1)){
				HX_STACK_LINE(107)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(107)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(107)
				bool tmp5 = (tmp4->points == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(107)
				if ((tmp10)){
					HX_STACK_LINE(107)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(107)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(107)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(107)
					int tmp14 = tmp13->points->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(107)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(107)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(107)
					tmp2 = (tmp16 == (int)0);
				}
				else{
					HX_STACK_LINE(107)
					tmp2 = true;
				}
			}
			else{
				HX_STACK_LINE(107)
				tmp2 = false;
			}
			HX_STACK_LINE(107)
			if ((tmp2)){
				HX_STACK_LINE(107)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
			}
			else{
				HX_STACK_LINE(107)
				::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
			}
		}
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
		HX_STACK_LINE(109)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp1 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp2 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		::openfl::_internal::renderer::opengl::utils::FillType tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		int tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		int tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		tmp1->update(tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(110)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		tmp6->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
		HX_STACK_LINE(111)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		tmp7->points->push(tmp8);
		HX_STACK_LINE(112)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(112)
		tmp9->points->push(tmp10);
		HX_STACK_LINE(114)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,moveTo,(void))

Void PathBuiler_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","lineTo",0x55f4f654,"openfl._internal.renderer.opengl.utils.PathBuiler.lineTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",118,0xf0fd7951)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(119)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		Array< Float > points = tmp->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(120)
		bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
		HX_STACK_LINE(123)
		bool tmp1 = (points->length > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(124)
			int tmp2 = (points->length - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			Float lastX = tmp3;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(125)
			int tmp4 = (points->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			Float lastY = tmp5;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(126)
			bool tmp6 = (lastX == x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			if ((tmp6)){
				HX_STACK_LINE(126)
				tmp7 = (lastY == y);
			}
			else{
				HX_STACK_LINE(126)
				tmp7 = false;
			}
			HX_STACK_LINE(126)
			if ((tmp7)){
				HX_STACK_LINE(127)
				push_point = false;
			}
		}
		HX_STACK_LINE(131)
		bool tmp2 = (push_point == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		if ((tmp2)){
			HX_STACK_LINE(132)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			tmp3->points->push(tmp4);
			HX_STACK_LINE(133)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			tmp5->points->push(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,lineTo,(void))

Void PathBuiler_obj::curveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","curveTo",0x8f4d7ca5,"openfl._internal.renderer.opengl.utils.PathBuiler.curveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",137,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(139)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = (tmp->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		if ((tmp2)){
			HX_STACK_LINE(139)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			int tmp6 = tmp5->points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(139)
			tmp3 = (tmp7 == (int)0);
		}
		else{
			HX_STACK_LINE(139)
			tmp3 = true;
		}
		HX_STACK_LINE(139)
		if ((tmp3)){
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				bool tmp5 = tmp4->isRemovable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				if ((tmp5)){
					HX_STACK_LINE(140)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					bool tmp9 = (tmp8->points == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(140)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(140)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(140)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(140)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(140)
					if ((tmp14)){
						HX_STACK_LINE(140)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp15 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(140)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(140)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(140)
						int tmp18 = tmp17->points->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(140)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(140)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(140)
						tmp6 = (tmp20 == (int)0);
					}
					else{
						HX_STACK_LINE(140)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(140)
					tmp6 = false;
				}
				HX_STACK_LINE(140)
				if ((tmp6)){
					HX_STACK_LINE(140)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(140)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp4;
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::FillType tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			int tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			tmp5->update(tmp6,tmp7,tmp8,tmp9);
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			tmp10->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(140)
			tmp11->points->push((int)0);
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(140)
			tmp12->points->push((int)0);
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(140)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp13);
		}
		HX_STACK_LINE(143)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		Float tmp5 = cx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		Float tmp6 = cy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp4->points,tmp5,tmp6,tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(PathBuiler_obj,curveTo,(void))

Void PathBuiler_obj::cubicCurveTo( Float cx,Float cy,Float cx2,Float cy2,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","cubicCurveTo",0x7b165965,"openfl._internal.renderer.opengl.utils.PathBuiler.cubicCurveTo","openfl/_internal/renderer/opengl/utils/DrawPath.hx",147,0xf0fd7951)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(cx2,"cx2")
		HX_STACK_ARG(cy2,"cy2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(149)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = (tmp->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		if ((tmp2)){
			HX_STACK_LINE(149)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			int tmp6 = tmp5->points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			tmp3 = (tmp7 == (int)0);
		}
		else{
			HX_STACK_LINE(149)
			tmp3 = true;
		}
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(150)
			{
				HX_STACK_LINE(150)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				bool tmp5 = tmp4->isRemovable;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(150)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(150)
				if ((tmp5)){
					HX_STACK_LINE(150)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(150)
					::openfl::_internal::renderer::opengl::utils::DrawPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(150)
					bool tmp9 = (tmp8->points == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(150)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(150)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(150)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(150)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(150)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(150)
					if ((tmp14)){
						HX_STACK_LINE(150)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp15 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(150)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(150)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(150)
						int tmp18 = tmp17->points->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(150)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(150)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(150)
						tmp6 = (tmp20 == (int)0);
					}
					else{
						HX_STACK_LINE(150)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(150)
					tmp6 = false;
				}
				HX_STACK_LINE(150)
				if ((tmp6)){
					HX_STACK_LINE(150)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
				}
				else{
					HX_STACK_LINE(150)
					::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
				}
			}
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp4;
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::LineStyle tmp6 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::FillType tmp7 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			int tmp8 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			int tmp9 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			tmp5->update(tmp6,tmp7,tmp8,tmp9);
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			tmp10->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			tmp11->points->push((int)0);
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(150)
			tmp12->points->push((int)0);
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(150)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp13);
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			Array< Float > points = tmp4->points;		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(153)
			int n = (int)20;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(153)
			Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
			HX_STACK_LINE(153)
			Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
			HX_STACK_LINE(153)
			Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
			HX_STACK_LINE(153)
			Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(153)
			Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
			HX_STACK_LINE(153)
			int tmp5 = (points->length - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			Float tmp6 = points->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			Float fromX = tmp6;		HX_STACK_VAR(fromX,"fromX");
			HX_STACK_LINE(153)
			int tmp7 = (points->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			Float tmp8 = points->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(153)
			Float fromY = tmp8;		HX_STACK_VAR(fromY,"fromY");
			HX_STACK_LINE(153)
			Float px = (int)0;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(153)
			Float py = (int)0;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(153)
			Float tmp9 = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(153)
				int tmp10 = (n + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				int _g = tmp10;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(153)
				while((true)){
					HX_STACK_LINE(153)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(153)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(153)
					if ((tmp12)){
						HX_STACK_LINE(153)
						break;
					}
					HX_STACK_LINE(153)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(153)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(153)
					Float tmp14 = (Float(i) / Float(n));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(153)
					tmp9 = tmp14;
					HX_STACK_LINE(153)
					Float tmp15 = ((int)1 - tmp9);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(153)
					dt = tmp15;
					HX_STACK_LINE(153)
					Float tmp16 = (dt * dt);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(153)
					dt2 = tmp16;
					HX_STACK_LINE(153)
					Float tmp17 = (dt2 * dt);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(153)
					dt3 = tmp17;
					HX_STACK_LINE(153)
					Float tmp18 = (tmp9 * tmp9);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(153)
					t2 = tmp18;
					HX_STACK_LINE(153)
					Float tmp19 = (t2 * tmp9);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(153)
					t3 = tmp19;
					HX_STACK_LINE(153)
					Float tmp20 = (dt3 * fromX);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(153)
					Float tmp21 = ((int)3 * dt2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(153)
					Float tmp22 = tmp9;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(153)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(153)
					Float tmp24 = cx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(153)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(153)
					Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(153)
					Float tmp27 = ((int)3 * dt);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(153)
					Float tmp28 = t2;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(153)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(153)
					Float tmp30 = cx2;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(153)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(153)
					Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(153)
					Float tmp33 = (t3 * x);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(153)
					Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(153)
					px = tmp34;
					HX_STACK_LINE(153)
					Float tmp35 = (dt3 * fromY);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(153)
					Float tmp36 = ((int)3 * dt2);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(153)
					Float tmp37 = tmp9;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(153)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(153)
					Float tmp39 = cy;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(153)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(153)
					Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(153)
					Float tmp42 = ((int)3 * dt);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(153)
					Float tmp43 = t2;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(153)
					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(153)
					Float tmp45 = cy2;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(153)
					Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(153)
					Float tmp47 = (tmp41 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(153)
					Float tmp48 = (t3 * y);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(153)
					Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(153)
					py = tmp49;
					HX_STACK_LINE(153)
					Float tmp50 = px;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(153)
					points->push(tmp50);
					HX_STACK_LINE(153)
					Float tmp51 = py;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(153)
					points->push(tmp51);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(PathBuiler_obj,cubicCurveTo,(void))

Void PathBuiler_obj::graphicDataPop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","graphicDataPop",0x871be484,"openfl._internal.renderer.opengl.utils.PathBuiler.graphicDataPop","openfl/_internal/renderer/opengl/utils/DrawPath.hx",157,0xf0fd7951)
		HX_STACK_LINE(159)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		bool tmp1 = tmp->isRemovable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		if ((tmp1)){
			HX_STACK_LINE(159)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			bool tmp5 = (tmp4->points == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(159)
			if ((tmp10)){
				HX_STACK_LINE(159)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(159)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(159)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(159)
				int tmp14 = tmp13->points->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(159)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(159)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(159)
				tmp2 = (tmp16 == (int)0);
			}
			else{
				HX_STACK_LINE(159)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(159)
			tmp2 = false;
		}
		HX_STACK_LINE(159)
		if ((tmp2)){
			HX_STACK_LINE(160)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
		}
		else{
			HX_STACK_LINE(162)
			::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathBuiler_obj,graphicDataPop,(void))

::openfl::_internal::renderer::opengl::utils::GLStack PathBuiler_obj::build( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PathBuiler","build",0xe0200b09,"openfl._internal.renderer.opengl.utils.PathBuiler.build","openfl/_internal/renderer/opengl/utils/DrawPath.hx",167,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(169)
	::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
	HX_STACK_LINE(170)
	::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(172)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(173)
	::openfl::_internal::renderer::opengl::utils::DrawPath tmp = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp;
	HX_STACK_LINE(174)
	::openfl::_internal::renderer::opengl::utils::LineStyle tmp1 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp1;
	HX_STACK_LINE(175)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
	HX_STACK_LINE(176)
	::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex = (int)0;
	HX_STACK_LINE(178)
	int tmp2 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp3 = graphics->__glStack->__get(tmp2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	glStack = tmp3;
	HX_STACK_LINE(180)
	bool tmp4 = (glStack == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	if ((tmp4)){
		HX_STACK_LINE(182)
		int tmp5 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = ::openfl::_internal::renderer::opengl::utils::GLStack_obj::__new(gl);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp7 = graphics->__glStack[tmp5] = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(182)
		glStack = tmp7;
	}
	HX_STACK_LINE(186)
	bool tmp5 = graphics->__visible;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(186)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(186)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(186)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(186)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(186)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(186)
	if ((tmp9)){
		HX_STACK_LINE(186)
		int tmp11 = graphics->__commands->get_length();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(186)
		tmp10 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(186)
		tmp10 = true;
	}
	HX_STACK_LINE(186)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(186)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(186)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(186)
	if ((tmp12)){
		HX_STACK_LINE(186)
		tmp13 = (bounds == null());
	}
	else{
		HX_STACK_LINE(186)
		tmp13 = true;
	}
	HX_STACK_LINE(186)
	bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(186)
	bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(186)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(186)
	if ((tmp15)){
		HX_STACK_LINE(186)
		tmp16 = (bounds->width == (int)0);
	}
	else{
		HX_STACK_LINE(186)
		tmp16 = true;
	}
	HX_STACK_LINE(186)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(186)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(186)
	if ((tmp17)){
		HX_STACK_LINE(186)
		tmp18 = (bounds->height == (int)0);
	}
	else{
		HX_STACK_LINE(186)
		tmp18 = true;
	}
	HX_STACK_LINE(186)
	if ((tmp18)){
	}
	else{
		HX_STACK_LINE(192)
		::openfl::_internal::renderer::DrawCommandReader tmp19 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(192)
		::openfl::_internal::renderer::DrawCommandReader data = tmp19;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			while((true)){
				HX_STACK_LINE(194)
				bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(194)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(194)
				if ((tmp21)){
					HX_STACK_LINE(194)
					break;
				}
				HX_STACK_LINE(194)
				::openfl::_internal::renderer::DrawCommandType tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(194)
				::openfl::_internal::renderer::DrawCommandType type = tmp22;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(194)
				++(_g);
				HX_STACK_LINE(196)
				switch( (int)(type->__Index())){
					case (int)0: {
						HX_STACK_LINE(200)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(200)
						{
							HX_STACK_LINE(200)
							{
								HX_STACK_LINE(200)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(200)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(200)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(200)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(200)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(200)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(200)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(200)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(200)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(200)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(200)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(200)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(200)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(200)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(200)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(200)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(200)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(200)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(200)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
							HX_STACK_LINE(200)
							tmp23 = data;
						}
						HX_STACK_LINE(200)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(201)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
						HX_STACK_LINE(202)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(202)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(202)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(202)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(202)
						::openfl::display::BitmapData tmp28 = ((::openfl::display::BitmapData)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(202)
						bool tmp29 = (tmp28 != null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(202)
						::openfl::_internal::renderer::opengl::utils::FillType tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(202)
						if ((tmp29)){
							HX_STACK_LINE(202)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(202)
							int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(202)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(202)
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(202)
							::openfl::display::BitmapData tmp35 = ((::openfl::display::BitmapData)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(202)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(202)
							int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(202)
							int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(202)
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(202)
							::openfl::geom::Matrix tmp40 = ((::openfl::geom::Matrix)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(202)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(202)
							int tmp42 = c->bPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(202)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(202)
							bool tmp44 = tmp41->b->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(202)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(202)
							int tmp46 = c->bPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(202)
							int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(202)
							bool tmp48 = tmp45->b->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(202)
							tmp30 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Texture(tmp35,tmp40,tmp44,tmp48);
						}
						else{
							HX_STACK_LINE(202)
							tmp30 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
						}
						HX_STACK_LINE(202)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp30;
						HX_STACK_LINE(204)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(204)
						bool tmp32 = (tmp31->points == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(204)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(204)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(204)
						if ((tmp33)){
							HX_STACK_LINE(204)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(204)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(204)
							int tmp37 = tmp36->points->length;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(204)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(204)
							tmp34 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(204)
							tmp34 = true;
						}
						HX_STACK_LINE(204)
						if ((tmp34)){
							HX_STACK_LINE(206)
							{
								HX_STACK_LINE(206)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(206)
								bool tmp36 = tmp35->isRemovable;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(206)
								bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(206)
								if ((tmp36)){
									HX_STACK_LINE(206)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(206)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(206)
									bool tmp40 = (tmp39->points == null());		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(206)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(206)
									bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(206)
									bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(206)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(206)
									bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(206)
									if ((tmp45)){
										HX_STACK_LINE(206)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(206)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(206)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(206)
										int tmp49 = tmp48->points->length;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(206)
										int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(206)
										int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(206)
										tmp37 = (tmp51 == (int)0);
									}
									else{
										HX_STACK_LINE(206)
										tmp37 = true;
									}
								}
								else{
									HX_STACK_LINE(206)
									tmp37 = false;
								}
								HX_STACK_LINE(206)
								if ((tmp37)){
									HX_STACK_LINE(206)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(206)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(207)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(207)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp35;
							HX_STACK_LINE(208)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(208)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(208)
							::openfl::_internal::renderer::opengl::utils::FillType tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(208)
							int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(208)
							int tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(208)
							tmp36->update(tmp37,tmp38,tmp39,tmp40);
							HX_STACK_LINE(209)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(209)
							tmp41->points = Array_obj< Float >::__new();
							HX_STACK_LINE(210)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(210)
							tmp42->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(211)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(211)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp43);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(217)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(217)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(217)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(217)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(217)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(217)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(217)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(217)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(217)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(217)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(217)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(217)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(217)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(217)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(217)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(217)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(217)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(217)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(217)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
							HX_STACK_LINE(217)
							tmp23 = data;
						}
						HX_STACK_LINE(217)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(218)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
						HX_STACK_LINE(219)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(219)
						int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(219)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(219)
						Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(219)
						bool tmp28 = (tmp27 > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(219)
						::openfl::_internal::renderer::opengl::utils::FillType tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(219)
						if ((tmp28)){
							HX_STACK_LINE(219)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(219)
							int tmp31 = c->iPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(219)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(219)
							int tmp33 = tmp30->i->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(219)
							int tmp34 = (int(tmp33) & int((int)16777215));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(219)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(219)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(219)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(219)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(219)
							tmp29 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::Color(tmp34,tmp38);
						}
						else{
							HX_STACK_LINE(219)
							tmp29 = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
						}
						HX_STACK_LINE(219)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill = tmp29;
						HX_STACK_LINE(221)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(221)
						bool tmp31 = (tmp30->points == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(221)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(221)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(221)
						if ((tmp32)){
							HX_STACK_LINE(221)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(221)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(221)
							int tmp36 = tmp35->points->length;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(221)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(221)
							tmp33 = (tmp37 == (int)0);
						}
						else{
							HX_STACK_LINE(221)
							tmp33 = true;
						}
						HX_STACK_LINE(221)
						if ((tmp33)){
							HX_STACK_LINE(223)
							{
								HX_STACK_LINE(223)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(223)
								bool tmp35 = tmp34->isRemovable;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(223)
								bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(223)
								if ((tmp35)){
									HX_STACK_LINE(223)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(223)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(223)
									bool tmp39 = (tmp38->points == null());		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(223)
									bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(223)
									bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(223)
									bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(223)
									bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(223)
									bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(223)
									if ((tmp44)){
										HX_STACK_LINE(223)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp45 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(223)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(223)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(223)
										int tmp48 = tmp47->points->length;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(223)
										int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(223)
										int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(223)
										tmp36 = (tmp50 == (int)0);
									}
									else{
										HX_STACK_LINE(223)
										tmp36 = true;
									}
								}
								else{
									HX_STACK_LINE(223)
									tmp36 = false;
								}
								HX_STACK_LINE(223)
								if ((tmp36)){
									HX_STACK_LINE(223)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(223)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(224)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(224)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp34;
							HX_STACK_LINE(225)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(225)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(225)
							::openfl::_internal::renderer::opengl::utils::FillType tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(225)
							int tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(225)
							int tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(225)
							tmp35->update(tmp36,tmp37,tmp38,tmp39);
							HX_STACK_LINE(226)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(226)
							tmp40->points = Array_obj< Float >::__new();
							HX_STACK_LINE(227)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(227)
							tmp41->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(228)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(228)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp42);
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(234)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							{
								HX_STACK_LINE(234)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(234)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(234)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(234)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(234)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(234)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(234)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(234)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(234)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(234)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(234)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(234)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(234)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(234)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(234)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(234)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(234)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(234)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(234)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							HX_STACK_LINE(234)
							tmp23 = data;
						}
						HX_STACK_LINE(234)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(235)
							int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(235)
							Float tmp26 = tmp24->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(235)
							Float cx = tmp26;		HX_STACK_VAR(cx,"cx");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(235)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(235)
							int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(235)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(235)
							Float cy = tmp30;		HX_STACK_VAR(cy,"cy");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(235)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(235)
							int tmp33 = (tmp32 + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(235)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(235)
							Float cx2 = tmp34;		HX_STACK_VAR(cx2,"cx2");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(235)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(235)
							int tmp37 = (tmp36 + (int)4);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(235)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(235)
							Float cy2 = tmp38;		HX_STACK_VAR(cy2,"cy2");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(235)
							int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(235)
							int tmp41 = (tmp40 + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(235)
							Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(235)
							Float x = tmp42;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(235)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(235)
							int tmp45 = (tmp44 + (int)6);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(235)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(235)
							Float y = tmp46;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(235)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(235)
							bool tmp48 = (tmp47->points == null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(235)
							bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(235)
							bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(235)
							if ((tmp49)){
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(235)
								int tmp53 = tmp52->points->length;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(235)
								int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(235)
								tmp50 = (tmp54 == (int)0);
							}
							else{
								HX_STACK_LINE(235)
								tmp50 = true;
							}
							HX_STACK_LINE(235)
							if ((tmp50)){
								HX_STACK_LINE(235)
								{
									HX_STACK_LINE(235)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(235)
									bool tmp52 = tmp51->isRemovable;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(235)
									bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(235)
									if ((tmp52)){
										HX_STACK_LINE(235)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(235)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(235)
										bool tmp56 = (tmp55->points == null());		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(235)
										bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(235)
										bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(235)
										bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(235)
										bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(235)
										bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(235)
										if ((tmp61)){
											HX_STACK_LINE(235)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(235)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(235)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(235)
											int tmp65 = tmp64->points->length;		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(235)
											int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(235)
											int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(235)
											tmp53 = (tmp67 == (int)0);
										}
										else{
											HX_STACK_LINE(235)
											tmp53 = true;
										}
									}
									else{
										HX_STACK_LINE(235)
										tmp53 = false;
									}
									HX_STACK_LINE(235)
									if ((tmp53)){
										HX_STACK_LINE(235)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(235)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp51;
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::FillType tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(235)
								int tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(235)
								int tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(235)
								tmp52->update(tmp53,tmp54,tmp55,tmp56);
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(235)
								tmp57->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(235)
								tmp58->points->push((int)0);
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(235)
								tmp59->points->push((int)0);
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp60 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp60);
							}
							HX_STACK_LINE(235)
							{
								HX_STACK_LINE(235)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(235)
								Array< Float > points = tmp51->points;		HX_STACK_VAR(points,"points");
								HX_STACK_LINE(235)
								int n = (int)20;		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(235)
								Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
								HX_STACK_LINE(235)
								Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
								HX_STACK_LINE(235)
								Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
								HX_STACK_LINE(235)
								Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(235)
								Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
								HX_STACK_LINE(235)
								int tmp52 = (points->length - (int)2);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(235)
								Float tmp53 = points->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(235)
								Float fromX = tmp53;		HX_STACK_VAR(fromX,"fromX");
								HX_STACK_LINE(235)
								int tmp54 = (points->length - (int)1);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(235)
								Float tmp55 = points->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(235)
								Float fromY = tmp55;		HX_STACK_VAR(fromY,"fromY");
								HX_STACK_LINE(235)
								Float px = (int)0;		HX_STACK_VAR(px,"px");
								HX_STACK_LINE(235)
								Float py = (int)0;		HX_STACK_VAR(py,"py");
								HX_STACK_LINE(235)
								Float tmp56 = (int)0;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(235)
								{
									HX_STACK_LINE(235)
									int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(235)
									int tmp57 = (n + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(235)
									int _g2 = tmp57;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(235)
									while((true)){
										HX_STACK_LINE(235)
										bool tmp58 = (_g11 < _g2);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(235)
										bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(235)
										if ((tmp59)){
											HX_STACK_LINE(235)
											break;
										}
										HX_STACK_LINE(235)
										int tmp60 = (_g11)++;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(235)
										int i = tmp60;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(235)
										Float tmp61 = (Float(i) / Float(n));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(235)
										tmp56 = tmp61;
										HX_STACK_LINE(235)
										Float tmp62 = ((int)1 - tmp56);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(235)
										dt = tmp62;
										HX_STACK_LINE(235)
										Float tmp63 = (dt * dt);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(235)
										dt2 = tmp63;
										HX_STACK_LINE(235)
										Float tmp64 = (dt2 * dt);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(235)
										dt3 = tmp64;
										HX_STACK_LINE(235)
										Float tmp65 = (tmp56 * tmp56);		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(235)
										t2 = tmp65;
										HX_STACK_LINE(235)
										Float tmp66 = (t2 * tmp56);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(235)
										t3 = tmp66;
										HX_STACK_LINE(235)
										Float tmp67 = (dt3 * fromX);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(235)
										Float tmp68 = ((int)3 * dt2);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(235)
										Float tmp69 = tmp56;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(235)
										Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(235)
										Float tmp71 = cx;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(235)
										Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(235)
										Float tmp73 = (tmp67 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(235)
										Float tmp74 = ((int)3 * dt);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(235)
										Float tmp75 = t2;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(235)
										Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(235)
										Float tmp77 = cx2;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(235)
										Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(235)
										Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(235)
										Float tmp80 = (t3 * x);		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(235)
										Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(235)
										px = tmp81;
										HX_STACK_LINE(235)
										Float tmp82 = (dt3 * fromY);		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(235)
										Float tmp83 = ((int)3 * dt2);		HX_STACK_VAR(tmp83,"tmp83");
										HX_STACK_LINE(235)
										Float tmp84 = tmp56;		HX_STACK_VAR(tmp84,"tmp84");
										HX_STACK_LINE(235)
										Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
										HX_STACK_LINE(235)
										Float tmp86 = cy;		HX_STACK_VAR(tmp86,"tmp86");
										HX_STACK_LINE(235)
										Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
										HX_STACK_LINE(235)
										Float tmp88 = (tmp82 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
										HX_STACK_LINE(235)
										Float tmp89 = ((int)3 * dt);		HX_STACK_VAR(tmp89,"tmp89");
										HX_STACK_LINE(235)
										Float tmp90 = t2;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(235)
										Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(235)
										Float tmp92 = cy2;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(235)
										Float tmp93 = (tmp91 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(235)
										Float tmp94 = (tmp88 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(235)
										Float tmp95 = (t3 * y);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(235)
										Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(235)
										py = tmp96;
										HX_STACK_LINE(235)
										Float tmp97 = px;		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(235)
										points->push(tmp97);
										HX_STACK_LINE(235)
										Float tmp98 = py;		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(235)
										points->push(tmp98);
									}
								}
							}
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(239)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(239)
						{
							HX_STACK_LINE(239)
							{
								HX_STACK_LINE(239)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(239)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(239)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(239)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(239)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(239)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(239)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(239)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(239)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(239)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(239)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(239)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(239)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(239)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(239)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(239)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(239)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(239)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(239)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							HX_STACK_LINE(239)
							tmp23 = data;
						}
						HX_STACK_LINE(239)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(240)
							bool tmp25 = (tmp24->points == null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(240)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(240)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(240)
							if ((tmp26)){
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(240)
								int tmp30 = tmp29->points->length;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(240)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(240)
								tmp27 = (tmp31 == (int)0);
							}
							else{
								HX_STACK_LINE(240)
								tmp27 = true;
							}
							HX_STACK_LINE(240)
							if ((tmp27)){
								HX_STACK_LINE(240)
								{
									HX_STACK_LINE(240)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(240)
									bool tmp29 = tmp28->isRemovable;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(240)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(240)
									if ((tmp29)){
										HX_STACK_LINE(240)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(240)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(240)
										bool tmp33 = (tmp32->points == null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(240)
										bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(240)
										bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(240)
										bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(240)
										bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(240)
										bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(240)
										if ((tmp38)){
											HX_STACK_LINE(240)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(240)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(240)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(240)
											int tmp42 = tmp41->points->length;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(240)
											int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(240)
											int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(240)
											tmp30 = (tmp44 == (int)0);
										}
										else{
											HX_STACK_LINE(240)
											tmp30 = true;
										}
									}
									else{
										HX_STACK_LINE(240)
										tmp30 = false;
									}
									HX_STACK_LINE(240)
									if ((tmp30)){
										HX_STACK_LINE(240)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
									}
									else{
										HX_STACK_LINE(240)
										::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
									}
								}
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp28;
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::FillType tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(240)
								int tmp32 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(240)
								int tmp33 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(240)
								tmp29->update(tmp30,tmp31,tmp32,tmp33);
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(240)
								tmp34->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(240)
								tmp35->points->push((int)0);
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(240)
								tmp36->points->push((int)0);
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(240)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp37);
							}
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(240)
							int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(240)
							Float tmp31 = tmp29->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(240)
							int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(240)
							int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(240)
							Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(240)
							int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(240)
							int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(240)
							Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(240)
							int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(240)
							int tmp42 = (tmp41 + (int)3);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(240)
							Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(240)
							::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp28->points,tmp31,tmp35,tmp39,tmp43);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(244)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(244)
						{
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(244)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(244)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(244)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(244)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(244)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(244)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(244)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(244)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(244)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(244)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(244)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(244)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(244)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(244)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(244)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(244)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(244)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(244)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							HX_STACK_LINE(244)
							tmp23 = data;
						}
						HX_STACK_LINE(244)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(245)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(245)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(245)
							if ((tmp25)){
								HX_STACK_LINE(245)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(245)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(245)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(245)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(245)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(245)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(245)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(245)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(245)
								if ((tmp34)){
									HX_STACK_LINE(245)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(245)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(245)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(245)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(245)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(245)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(245)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(245)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(245)
								tmp26 = false;
							}
							HX_STACK_LINE(245)
							if ((tmp26)){
								HX_STACK_LINE(245)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(245)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(247)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(248)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(248)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(248)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(248)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(248)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(248)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(249)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(249)
						tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Circle;
						HX_STACK_LINE(250)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(250)
						int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(250)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(250)
						Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(250)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(250)
						int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(250)
						int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(250)
						Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(250)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(250)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(250)
						int tmp41 = (tmp40 + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(250)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(250)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(250)
						tmp43->points = Array_obj< Float >::__new().Add(tmp34).Add(tmp38).Add(tmp42);
						HX_STACK_LINE(252)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp44 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(252)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp44);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(256)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							{
								HX_STACK_LINE(256)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(256)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(256)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(256)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(256)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(256)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(256)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(256)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(256)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(256)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(256)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(256)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(256)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(256)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(256)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(256)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(256)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(256)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(256)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(256)
							tmp23 = data;
						}
						HX_STACK_LINE(256)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(257)
						{
							HX_STACK_LINE(257)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(257)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(257)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(257)
							if ((tmp25)){
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(257)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(257)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(257)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(257)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(257)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(257)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(257)
								if ((tmp34)){
									HX_STACK_LINE(257)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(257)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(257)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(257)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(257)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(257)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(257)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(257)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(257)
								tmp26 = false;
							}
							HX_STACK_LINE(257)
							if ((tmp26)){
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(257)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(259)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(260)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(260)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(260)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(260)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(261)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(261)
						tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse;
						HX_STACK_LINE(262)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(262)
						int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(262)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(262)
						Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(262)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(262)
						int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(262)
						int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(262)
						Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(262)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(262)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(262)
						int tmp41 = (tmp40 + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(262)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(262)
						::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(262)
						int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(262)
						int tmp45 = (tmp44 + (int)3);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(262)
						Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(262)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(262)
						tmp47->points = Array_obj< Float >::__new().Add(tmp34).Add(tmp38).Add(tmp42).Add(tmp46);
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(264)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp48);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(268)
						{
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(268)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(268)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(268)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(268)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(268)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(268)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(268)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(268)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(268)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(268)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(268)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(268)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(268)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(268)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(268)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(268)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(268)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(268)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
							HX_STACK_LINE(268)
							tmp23 = data;
						}
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(269)
						{
							HX_STACK_LINE(269)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(269)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(269)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(269)
							if ((tmp25)){
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(269)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(269)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(269)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(269)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(269)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(269)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(269)
								if ((tmp34)){
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(269)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(269)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(269)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(269)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(269)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(269)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(269)
								tmp26 = false;
							}
							HX_STACK_LINE(269)
							if ((tmp26)){
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(269)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(271)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(272)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(272)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(272)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp30 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(false);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(273)
						tmp31->type = tmp30;
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(274)
						int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(274)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(274)
						Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(274)
						int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(274)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(274)
						Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(274)
						int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(274)
						int tmp42 = (tmp41 + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(274)
						Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(274)
						int tmp45 = c->fPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(274)
						int tmp46 = (tmp45 + (int)3);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(274)
						Float tmp47 = tmp44->f->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(274)
						tmp48->points = Array_obj< Float >::__new().Add(tmp35).Add(tmp39).Add(tmp43).Add(tmp47);
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(276)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp49);
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(280)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(280)
						{
							HX_STACK_LINE(280)
							{
								HX_STACK_LINE(280)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(280)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(280)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(280)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(280)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(280)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(280)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(280)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(280)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(280)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(280)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(280)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(280)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(280)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(280)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(280)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(280)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(280)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(280)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
							HX_STACK_LINE(280)
							tmp23 = data;
						}
						HX_STACK_LINE(280)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(282)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(282)
						int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(282)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(282)
						Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(282)
						Float x = tmp27;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(283)
						::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(283)
						int tmp29 = c->fPos;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(283)
						int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(283)
						Float tmp31 = tmp28->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(283)
						Float y = tmp31;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(284)
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(284)
						int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(284)
						int tmp34 = (tmp33 + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(284)
						Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(284)
						Float width = tmp35;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(285)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(285)
						int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(285)
						int tmp38 = (tmp37 + (int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(285)
						Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(285)
						Float height = tmp39;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(286)
						int tmp41 = c->fPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(286)
						int tmp42 = (tmp41 + (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(286)
						Float tmp43 = tmp40->f->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(286)
						Float rx = tmp43;		HX_STACK_VAR(rx,"rx");
						HX_STACK_LINE(287)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(287)
						int tmp45 = c->fPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(287)
						int tmp46 = (tmp45 + (int)5);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(287)
						Float tmp47 = tmp44->f->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(287)
						Float ry = tmp47;		HX_STACK_VAR(ry,"ry");
						HX_STACK_LINE(289)
						bool tmp48 = (ry == (int)-1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(289)
						if ((tmp48)){
							HX_STACK_LINE(289)
							ry = rx;
						}
						HX_STACK_LINE(291)
						hx::MultEq(rx,((Float)0.5));
						HX_STACK_LINE(292)
						hx::MultEq(ry,((Float)0.5));
						HX_STACK_LINE(294)
						Float tmp49 = rx;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(294)
						Float tmp50 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(294)
						bool tmp51 = (tmp49 > tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(294)
						if ((tmp51)){
							HX_STACK_LINE(294)
							Float tmp52 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(294)
							rx = tmp52;
						}
						HX_STACK_LINE(295)
						Float tmp52 = ry;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(295)
						Float tmp53 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(295)
						bool tmp54 = (tmp52 > tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(295)
						if ((tmp54)){
							HX_STACK_LINE(295)
							Float tmp55 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(295)
							ry = tmp55;
						}
						HX_STACK_LINE(297)
						{
							HX_STACK_LINE(297)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(297)
							bool tmp56 = tmp55->isRemovable;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(297)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(297)
							if ((tmp56)){
								HX_STACK_LINE(297)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(297)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(297)
								bool tmp60 = (tmp59->points == null());		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(297)
								bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(297)
								bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(297)
								bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(297)
								bool tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(297)
								bool tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(297)
								if ((tmp65)){
									HX_STACK_LINE(297)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp66 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(297)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(297)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(297)
									int tmp69 = tmp68->points->length;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(297)
									int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(297)
									int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(297)
									tmp57 = (tmp71 == (int)0);
								}
								else{
									HX_STACK_LINE(297)
									tmp57 = true;
								}
							}
							else{
								HX_STACK_LINE(297)
								tmp57 = false;
							}
							HX_STACK_LINE(297)
							if ((tmp57)){
								HX_STACK_LINE(297)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(297)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(299)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(299)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp55;
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::opengl::utils::FillType tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(300)
						int tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(300)
						int tmp60 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(300)
						tmp56->update(tmp57,tmp58,tmp59,tmp60);
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp61 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Rectangle(true);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(301)
						tmp62->type = tmp61;
						HX_STACK_LINE(302)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(302)
						tmp63->points = Array_obj< Float >::__new().Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry);
						HX_STACK_LINE(304)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(304)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp64);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(308)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(308)
						{
							HX_STACK_LINE(308)
							{
								HX_STACK_LINE(308)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(308)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(308)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(308)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(308)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(308)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(308)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(308)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(308)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(308)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(308)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(308)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(308)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(308)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(308)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(308)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(308)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(308)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(308)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							HX_STACK_LINE(308)
							tmp23 = data;
						}
						HX_STACK_LINE(308)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(309)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::endFill();
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(313)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							{
								HX_STACK_LINE(313)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(313)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(313)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(313)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(313)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(313)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(313)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(313)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(313)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(313)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(313)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(313)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(313)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(313)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(313)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(313)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(313)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(313)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(313)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							HX_STACK_LINE(313)
							tmp23 = data;
						}
						HX_STACK_LINE(313)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(314)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp24 = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(314)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line = tmp24;
						HX_STACK_LINE(316)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(316)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(316)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(316)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(316)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(316)
						bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(316)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(316)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(316)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(316)
						if ((tmp32)){
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(316)
							int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(316)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(316)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(316)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(316)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(316)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(316)
							Dynamic tmp43 = tmp36->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(316)
							Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(316)
							Dynamic tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(316)
							Dynamic tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(316)
							Dynamic tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(316)
							Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(316)
							tmp33 = ::Math_obj::isNaN(tmp48);
						}
						else{
							HX_STACK_LINE(316)
							tmp33 = true;
						}
						HX_STACK_LINE(316)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(316)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(316)
						if ((tmp34)){
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(316)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(316)
							int tmp38 = c->oPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(316)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(316)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(316)
							int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(316)
							Dynamic tmp42 = tmp37->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(316)
							Dynamic tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(316)
							Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(316)
							tmp35 = (tmp44 < (int)0);
						}
						else{
							HX_STACK_LINE(316)
							tmp35 = true;
						}
						HX_STACK_LINE(316)
						if ((tmp35)){
							HX_STACK_LINE(318)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(318)
							tmp36->width = (int)0;
						}
						else{
							HX_STACK_LINE(320)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(320)
							int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(320)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(320)
							Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(320)
							Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(320)
							bool tmp41 = (tmp40 == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(320)
							if ((tmp41)){
								HX_STACK_LINE(322)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp42 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(322)
								tmp42->width = (int)1;
							}
							else{
								HX_STACK_LINE(326)
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(326)
								int tmp43 = c->oPos;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(326)
								int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(326)
								Dynamic tmp45 = tmp42->o->__GetItem(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(326)
								::openfl::_internal::renderer::opengl::utils::LineStyle tmp46 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(326)
								tmp46->width = tmp45;
							}
						}
						HX_STACK_LINE(330)
						{
							HX_STACK_LINE(330)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(330)
							bool tmp37 = tmp36->isRemovable;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(330)
							bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(330)
							if ((tmp37)){
								HX_STACK_LINE(330)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp39 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(330)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(330)
								bool tmp41 = (tmp40->points == null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(330)
								bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(330)
								bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(330)
								bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(330)
								bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(330)
								bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(330)
								if ((tmp46)){
									HX_STACK_LINE(330)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp47 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(330)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(330)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(330)
									int tmp50 = tmp49->points->length;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(330)
									int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(330)
									int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(330)
									tmp38 = (tmp52 == (int)0);
								}
								else{
									HX_STACK_LINE(330)
									tmp38 = true;
								}
							}
							else{
								HX_STACK_LINE(330)
								tmp38 = false;
							}
							HX_STACK_LINE(330)
							if ((tmp38)){
								HX_STACK_LINE(330)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(330)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(332)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(332)
						int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(332)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(332)
						Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(332)
						Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(332)
						bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(332)
						int tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(332)
						if ((tmp41)){
							HX_STACK_LINE(332)
							tmp42 = (int)0;
						}
						else{
							HX_STACK_LINE(332)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(332)
							int tmp44 = c->oPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(332)
							int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(332)
							Dynamic tmp46 = tmp43->o->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(332)
							tmp42 = tmp46;
						}
						HX_STACK_LINE(332)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp43 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(332)
						tmp43->color = tmp42;
						HX_STACK_LINE(333)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(333)
						int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(333)
						int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(333)
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(333)
						Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(333)
						bool tmp49 = (tmp48 == null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(333)
						Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(333)
						if ((tmp49)){
							HX_STACK_LINE(333)
							tmp50 = (int)1;
						}
						else{
							HX_STACK_LINE(333)
							::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(333)
							int tmp52 = c->oPos;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(333)
							int tmp53 = (tmp52 + (int)2);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(333)
							Dynamic tmp54 = tmp51->o->__GetItem(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(333)
							tmp50 = tmp54;
						}
						HX_STACK_LINE(333)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(333)
						tmp51->alpha = tmp50;
						HX_STACK_LINE(334)
						::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(334)
						int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(334)
						int tmp54 = (tmp53 + (int)4);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(334)
						Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(334)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(334)
						tmp56->scaleMode = ((::openfl::display::LineScaleMode)(tmp55));
						HX_STACK_LINE(335)
						::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(335)
						int tmp58 = c->oPos;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(335)
						int tmp59 = (tmp58 + (int)5);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(335)
						Dynamic tmp60 = tmp57->o->__GetItem(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(335)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp61 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(335)
						tmp61->caps = ((::openfl::display::CapsStyle)(tmp60));
						HX_STACK_LINE(336)
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(336)
						int tmp63 = c->oPos;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(336)
						int tmp64 = (tmp63 + (int)6);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(336)
						Dynamic tmp65 = tmp62->o->__GetItem(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(336)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp66 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(336)
						tmp66->joints = ((::openfl::display::JointStyle)(tmp65));
						HX_STACK_LINE(337)
						::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(337)
						int tmp68 = c->oPos;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(337)
						int tmp69 = (tmp68 + (int)7);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(337)
						Dynamic tmp70 = tmp67->o->__GetItem(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(337)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp71 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(337)
						tmp71->miterLimit = tmp70;
						HX_STACK_LINE(339)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp72 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(339)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp72;
						HX_STACK_LINE(340)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp73 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(340)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp74 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(340)
						::openfl::_internal::renderer::opengl::utils::FillType tmp75 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(340)
						int tmp76 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(340)
						int tmp77 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(340)
						tmp73->update(tmp74,tmp75,tmp76,tmp77);
						HX_STACK_LINE(341)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp78 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(341)
						tmp78->points = Array_obj< Float >::__new();
						HX_STACK_LINE(342)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp79 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(342)
						tmp79->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
						HX_STACK_LINE(344)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(344)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp80);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(348)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(348)
						{
							HX_STACK_LINE(348)
							{
								HX_STACK_LINE(348)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(348)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(348)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(348)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(348)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(348)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(348)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(348)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(348)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(348)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(348)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(348)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(348)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(348)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(348)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(348)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(348)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(348)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(348)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							HX_STACK_LINE(348)
							tmp23 = data;
						}
						HX_STACK_LINE(348)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(349)
							int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(349)
							Float tmp26 = tmp24->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(349)
							Float x = tmp26;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(349)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(349)
							int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(349)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(349)
							Float y = tmp30;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(349)
							Array< Float > points = tmp31->points;		HX_STACK_VAR(points,"points");
							HX_STACK_LINE(349)
							bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
							HX_STACK_LINE(349)
							bool tmp32 = (points->length > (int)1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(349)
							if ((tmp32)){
								HX_STACK_LINE(349)
								int tmp33 = (points->length - (int)2);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(349)
								Float tmp34 = points->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(349)
								Float lastX = tmp34;		HX_STACK_VAR(lastX,"lastX");
								HX_STACK_LINE(349)
								int tmp35 = (points->length - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(349)
								Float tmp36 = points->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(349)
								Float lastY = tmp36;		HX_STACK_VAR(lastY,"lastY");
								HX_STACK_LINE(349)
								bool tmp37 = (lastX == x);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(349)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(349)
								if ((tmp37)){
									HX_STACK_LINE(349)
									tmp38 = (lastY == y);
								}
								else{
									HX_STACK_LINE(349)
									tmp38 = false;
								}
								HX_STACK_LINE(349)
								if ((tmp38)){
									HX_STACK_LINE(349)
									push_point = false;
								}
							}
							HX_STACK_LINE(349)
							bool tmp33 = (push_point == true);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(349)
							if ((tmp33)){
								HX_STACK_LINE(349)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp34 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(349)
								Float tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(349)
								tmp34->points->push(tmp35);
								HX_STACK_LINE(349)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(349)
								Float tmp37 = y;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(349)
								tmp36->points->push(tmp37);
							}
						}
					}
					;break;
					case (int)17: {
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
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							HX_STACK_LINE(353)
							tmp23 = data;
						}
						HX_STACK_LINE(353)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(354)
						{
							HX_STACK_LINE(354)
							{
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(354)
								bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(354)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(354)
								if ((tmp25)){
									HX_STACK_LINE(354)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(354)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(354)
									bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(354)
									bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(354)
									bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(354)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(354)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(354)
									bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(354)
									if ((tmp34)){
										HX_STACK_LINE(354)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(354)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(354)
										::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(354)
										int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(354)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(354)
										int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(354)
										tmp26 = (tmp40 == (int)0);
									}
									else{
										HX_STACK_LINE(354)
										tmp26 = true;
									}
								}
								else{
									HX_STACK_LINE(354)
									tmp26 = false;
								}
								HX_STACK_LINE(354)
								if ((tmp26)){
									HX_STACK_LINE(354)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
								}
								else{
									HX_STACK_LINE(354)
									::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
								}
							}
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(354)
							int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(354)
							int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(354)
							tmp25->update(tmp26,tmp27,tmp28,tmp29);
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp30 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(354)
							tmp30->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp31 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(354)
							int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(354)
							Float tmp34 = tmp32->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(354)
							tmp31->points->push(tmp34);
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(354)
							int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(354)
							int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(354)
							Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(354)
							tmp35->points->push(tmp39);
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp40 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(354)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp40);
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(358)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(358)
						{
							HX_STACK_LINE(358)
							{
								HX_STACK_LINE(358)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(358)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(358)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(358)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(358)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(358)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(358)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(358)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(358)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(358)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(358)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(358)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(358)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(358)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(358)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(358)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(358)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(358)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(358)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
							HX_STACK_LINE(358)
							tmp23 = data;
						}
						HX_STACK_LINE(358)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(360)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(360)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(360)
						int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(360)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(360)
						Array< Float > uvtData = ((Array< Float >)(tmp27));		HX_STACK_VAR(uvtData,"uvtData");
						HX_STACK_LINE(361)
						::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(361)
						int tmp29 = c->oPos;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(361)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(361)
						Dynamic tmp31 = tmp28->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(361)
						Array< Float > vertices = ((Array< Float >)(tmp31));		HX_STACK_VAR(vertices,"vertices");
						HX_STACK_LINE(362)
						::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(362)
						int tmp33 = c->oPos;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(362)
						int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(362)
						Dynamic tmp35 = tmp32->o->__GetItem(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(362)
						Array< int > indices = ((Array< int >)(tmp35));		HX_STACK_VAR(indices,"indices");
						HX_STACK_LINE(363)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(363)
						int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(363)
						int tmp38 = (tmp37 + (int)3);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(363)
						Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(363)
						::openfl::display::TriangleCulling culling = ((::openfl::display::TriangleCulling)(tmp39));		HX_STACK_VAR(culling,"culling");
						HX_STACK_LINE(364)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(364)
						int tmp41 = c->oPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(364)
						int tmp42 = (tmp41 + (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(364)
						Dynamic tmp43 = tmp40->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(364)
						Array< int > colors = ((Array< int >)(tmp43));		HX_STACK_VAR(colors,"colors");
						HX_STACK_LINE(365)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(365)
						int tmp45 = c->iPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(365)
						int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(365)
						int tmp47 = tmp44->i->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(365)
						int blendMode = tmp47;		HX_STACK_VAR(blendMode,"blendMode");
						HX_STACK_LINE(367)
						bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							::openfl::_internal::renderer::opengl::utils::FillType tmp49 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(367)
							::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp49;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(367)
							switch( (int)(_g2->__Index())){
								case (int)1: {
									HX_STACK_LINE(367)
									tmp48 = true;
								}
								;break;
								default: {
									HX_STACK_LINE(367)
									tmp48 = false;
								}
							}
						}
						HX_STACK_LINE(367)
						bool isColor = tmp48;		HX_STACK_VAR(isColor,"isColor");
						HX_STACK_LINE(368)
						bool tmp49 = isColor;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(368)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(368)
						if ((tmp49)){
							HX_STACK_LINE(368)
							tmp50 = (uvtData != null());
						}
						else{
							HX_STACK_LINE(368)
							tmp50 = false;
						}
						HX_STACK_LINE(368)
						if ((tmp50)){
							HX_STACK_LINE(370)
							continue;
						}
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(373)
							bool tmp52 = tmp51->isRemovable;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(373)
							bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(373)
							if ((tmp52)){
								HX_STACK_LINE(373)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(373)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(373)
								bool tmp56 = (tmp55->points == null());		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(373)
								bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(373)
								bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(373)
								bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(373)
								bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(373)
								bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(373)
								if ((tmp61)){
									HX_STACK_LINE(373)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(373)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(373)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(373)
									int tmp65 = tmp64->points->length;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(373)
									int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(373)
									int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(373)
									tmp53 = (tmp67 == (int)0);
								}
								else{
									HX_STACK_LINE(373)
									tmp53 = true;
								}
							}
							else{
								HX_STACK_LINE(373)
								tmp53 = false;
							}
							HX_STACK_LINE(373)
							if ((tmp53)){
								HX_STACK_LINE(373)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(373)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp51;
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(376)
						::openfl::_internal::renderer::opengl::utils::FillType tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(376)
						int tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(376)
						int tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(376)
						tmp52->update(tmp53,tmp54,tmp55,tmp56);
						HX_STACK_LINE(377)
						bool tmp57 = (uvtData == null());		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(377)
						if ((tmp57)){
							HX_STACK_LINE(378)
							Array< Float > tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(378)
							{
								HX_STACK_LINE(378)
								Array< Float > this1;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(378)
								this1 = Array_obj< Float >::__new()->__SetSizeExact(null());
								HX_STACK_LINE(378)
								tmp58 = this1;
							}
							HX_STACK_LINE(378)
							uvtData = tmp58;
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::openfl::_internal::renderer::opengl::utils::FillType tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(379)
								::openfl::_internal::renderer::opengl::utils::FillType _g2 = tmp59;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(379)
								switch( (int)(_g2->__Index())){
									case (int)2: {
										HX_STACK_LINE(379)
										::openfl::display::BitmapData tmp60 = (::openfl::_internal::renderer::opengl::utils::FillType(_g2))->__Param(0);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(379)
										::openfl::display::BitmapData b = tmp60;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(381)
										{
											HX_STACK_LINE(381)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(381)
											int tmp61 = vertices->length;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(381)
											Float tmp62 = (Float(tmp61) / Float((int)2));		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(381)
											int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(381)
											int _g3 = tmp63;		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(381)
											while((true)){
												HX_STACK_LINE(381)
												bool tmp64 = (_g4 < _g3);		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(381)
												bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(381)
												if ((tmp65)){
													HX_STACK_LINE(381)
													break;
												}
												HX_STACK_LINE(381)
												int tmp66 = (_g4)++;		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(381)
												int i = tmp66;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(382)
												int tmp67 = (i * (int)2);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(382)
												Float tmp68 = vertices->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(382)
												Dynamic tmp69 = ((Dynamic)(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(382)
												int tmp70 = b->width;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(382)
												Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(382)
												uvtData->push(tmp71);
												HX_STACK_LINE(383)
												int tmp72 = (i * (int)2);		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(383)
												int tmp73 = (tmp72 + (int)1);		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(383)
												Float tmp74 = vertices->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(383)
												Dynamic tmp75 = ((Dynamic)(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(383)
												int tmp76 = b->height;		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(383)
												Float tmp77 = (Float(tmp75) / Float(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(383)
												uvtData->push(tmp77);
											}
										}
									}
									;break;
									default: {
									}
								}
							}
						}
						HX_STACK_LINE(388)
						Array< Float > tmp58 = vertices;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(388)
						Array< int > tmp59 = indices;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(388)
						Array< Float > tmp60 = uvtData;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(388)
						::openfl::display::TriangleCulling tmp61 = culling;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(388)
						Array< int > tmp62 = colors;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(388)
						int tmp63 = blendMode;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(388)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp64 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTriangles(tmp58,tmp59,tmp60,tmp61,tmp62,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(388)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp65 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(388)
						tmp65->type = tmp64;
						HX_STACK_LINE(389)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp66 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(389)
						tmp66->isRemovable = false;
						HX_STACK_LINE(390)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp67 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(390)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp67);
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(394)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(394)
						{
							HX_STACK_LINE(394)
							{
								HX_STACK_LINE(394)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(394)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(394)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(394)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(394)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(394)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(394)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(394)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(394)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(394)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(394)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(394)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(394)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(394)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(394)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(394)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(394)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(394)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(394)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES;
							HX_STACK_LINE(394)
							tmp23 = data;
						}
						HX_STACK_LINE(394)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(395)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(395)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(395)
							if ((tmp25)){
								HX_STACK_LINE(395)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(395)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(395)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(395)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(395)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(395)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(395)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(395)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(395)
								if ((tmp34)){
									HX_STACK_LINE(395)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(395)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(395)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(395)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(395)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(395)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(395)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(395)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(395)
								tmp26 = false;
							}
							HX_STACK_LINE(395)
							if ((tmp26)){
								HX_STACK_LINE(395)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(395)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(397)
						(::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex)++;
						HX_STACK_LINE(398)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(false);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(398)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(399)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(399)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(399)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(399)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(399)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(399)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(400)
						int tmp31 = c->tsPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(400)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(400)
						::openfl::display::Tilesheet tmp33 = tmp30->ts->__get(tmp32).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(400)
						int tmp35 = c->ffPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(400)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(400)
						int tmp38 = c->bPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(400)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(400)
						bool tmp40 = tmp37->b->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(400)
						int tmp42 = c->iPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(400)
						int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(400)
						int tmp44 = tmp41->i->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(400)
						int tmp46 = c->iPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(400)
						int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(400)
						int tmp48 = tmp45->i->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp49 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::DrawTiles(tmp33,tmp34->ff->__get(tmp36).StaticCast< Array< Float > >(),tmp40,tmp44,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(400)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp50 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(400)
						tmp50->type = tmp49;
						HX_STACK_LINE(401)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp51 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(401)
						tmp51->isRemovable = false;
						HX_STACK_LINE(402)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(402)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp52);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(406)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(406)
						{
							HX_STACK_LINE(406)
							{
								HX_STACK_LINE(406)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(406)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(406)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(406)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(406)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(406)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(406)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(406)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(406)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(406)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(406)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(406)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(406)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(406)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(406)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(406)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(406)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(406)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(406)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_PATH;
							HX_STACK_LINE(406)
							tmp23 = data;
						}
						HX_STACK_LINE(406)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(407)
						{
							HX_STACK_LINE(407)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(407)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(407)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(407)
							if ((tmp25)){
								HX_STACK_LINE(407)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(407)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(407)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(407)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(407)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(407)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(407)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(407)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(407)
								if ((tmp34)){
									HX_STACK_LINE(407)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(407)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(407)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(407)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(407)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(407)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(407)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(407)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(407)
								tmp26 = false;
							}
							HX_STACK_LINE(407)
							if ((tmp26)){
								HX_STACK_LINE(407)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(407)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(409)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(409)
						int tmp25 = c->oPos;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(409)
						int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(409)
						Dynamic tmp27 = tmp24->o->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(409)
						::openfl::display::GraphicsPathWinding tmp28 = ((::openfl::display::GraphicsPathWinding)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(409)
						::openfl::display::GraphicsPathWinding _switch_1 = (tmp28);
						if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::EVEN_ODD)){
							HX_STACK_LINE(411)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
						else if (  ( _switch_1==::openfl::display::GraphicsPathWinding_obj::NON_ZERO)){
							HX_STACK_LINE(413)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)1;
						}
						else  {
							HX_STACK_LINE(415)
							::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
						}
;
;
						HX_STACK_LINE(418)
						int command;		HX_STACK_VAR(command,"command");
						HX_STACK_LINE(419)
						Float cx;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(419)
						Float cy;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(420)
						Float cx2;		HX_STACK_VAR(cx2,"cx2");
						HX_STACK_LINE(420)
						Float cy2;		HX_STACK_VAR(cy2,"cy2");
						HX_STACK_LINE(421)
						Float ax;		HX_STACK_VAR(ax,"ax");
						HX_STACK_LINE(421)
						Float ay;		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(422)
						int idx = (int)0;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(423)
						{
							HX_STACK_LINE(423)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(423)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(423)
							int tmp30 = c->oPos;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(423)
							Dynamic tmp31 = tmp29->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(423)
							int tmp32 = ((Array< int >)(tmp31))->length;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(423)
							int _g2 = tmp32;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(423)
							while((true)){
								HX_STACK_LINE(423)
								bool tmp33 = (_g3 < _g2);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(423)
								bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(423)
								if ((tmp34)){
									HX_STACK_LINE(423)
									break;
								}
								HX_STACK_LINE(423)
								int tmp35 = (_g3)++;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(423)
								int i = tmp35;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(424)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(424)
								int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(424)
								Dynamic tmp38 = tmp36->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(424)
								int tmp39 = ((Array< int >)(tmp38))->__get(i);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(424)
								command = ((Dynamic)(tmp39));
								HX_STACK_LINE(425)
								int tmp40 = command;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(425)
								switch( (int)(tmp40)){
									case (int)1: {
										HX_STACK_LINE(427)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(427)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(427)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(427)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(427)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(427)
										ax = ((Dynamic)(tmp45));
										HX_STACK_LINE(428)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(428)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(428)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(428)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(428)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(428)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(428)
										ay = ((Dynamic)(tmp51));
										HX_STACK_LINE(429)
										hx::AddEq(idx,(int)2);
										HX_STACK_LINE(430)
										{
											HX_STACK_LINE(430)
											{
												HX_STACK_LINE(430)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(430)
												bool tmp53 = tmp52->isRemovable;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(430)
												bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(430)
												if ((tmp53)){
													HX_STACK_LINE(430)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(430)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(430)
													bool tmp57 = (tmp56->points == null());		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(430)
													bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(430)
													bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(430)
													bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(430)
													bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(430)
													bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(430)
													if ((tmp62)){
														HX_STACK_LINE(430)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(430)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(430)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(430)
														int tmp66 = tmp65->points->length;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(430)
														int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(430)
														int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(430)
														tmp54 = (tmp68 == (int)0);
													}
													else{
														HX_STACK_LINE(430)
														tmp54 = true;
													}
												}
												else{
													HX_STACK_LINE(430)
													tmp54 = false;
												}
												HX_STACK_LINE(430)
												if ((tmp54)){
													HX_STACK_LINE(430)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
												}
												else{
													HX_STACK_LINE(430)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
												}
											}
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp52;
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::LineStyle tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::FillType tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(430)
											int tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(430)
											int tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(430)
											tmp53->update(tmp54,tmp55,tmp56,tmp57);
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(430)
											tmp58->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(430)
											Float tmp60 = ax;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(430)
											tmp59->points->push(tmp60);
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp61 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(430)
											Float tmp62 = ay;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(430)
											tmp61->points->push(tmp62);
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp63 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(430)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp63);
										}
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(432)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(432)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(432)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(432)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(432)
										int tmp45 = (idx + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(432)
										Float tmp46 = ((Array< Float >)(tmp44))->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(432)
										ax = ((Dynamic)(tmp46));
										HX_STACK_LINE(433)
										::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(433)
										int tmp48 = c->oPos;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(433)
										int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(433)
										Dynamic tmp50 = tmp47->o->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(433)
										int tmp51 = (idx + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(433)
										Float tmp52 = ((Array< Float >)(tmp50))->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(433)
										ay = ((Dynamic)(tmp52));
										HX_STACK_LINE(434)
										hx::AddEq(idx,(int)4);
										HX_STACK_LINE(435)
										{
											HX_STACK_LINE(435)
											{
												HX_STACK_LINE(435)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(435)
												bool tmp54 = tmp53->isRemovable;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(435)
												bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(435)
												if ((tmp54)){
													HX_STACK_LINE(435)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(435)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(435)
													bool tmp58 = (tmp57->points == null());		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(435)
													bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(435)
													bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(435)
													bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(435)
													bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(435)
													bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(435)
													if ((tmp63)){
														HX_STACK_LINE(435)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(435)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(435)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(435)
														int tmp67 = tmp66->points->length;		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(435)
														int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(435)
														int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(435)
														tmp55 = (tmp69 == (int)0);
													}
													else{
														HX_STACK_LINE(435)
														tmp55 = true;
													}
												}
												else{
													HX_STACK_LINE(435)
													tmp55 = false;
												}
												HX_STACK_LINE(435)
												if ((tmp55)){
													HX_STACK_LINE(435)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
												}
												else{
													HX_STACK_LINE(435)
													::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
												}
											}
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp53;
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp54 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::LineStyle tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::FillType tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(435)
											int tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(435)
											int tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(435)
											tmp54->update(tmp55,tmp56,tmp57,tmp58);
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp59 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(435)
											tmp59->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp60 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(435)
											Float tmp61 = ax;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(435)
											tmp60->points->push(tmp61);
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp62 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(435)
											Float tmp63 = ay;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(435)
											tmp62->points->push(tmp63);
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(435)
											::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp64);
										}
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(437)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(437)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(437)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(437)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(437)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(437)
										ax = ((Dynamic)(tmp45));
										HX_STACK_LINE(438)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(438)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(438)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(438)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(438)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(438)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(438)
										ay = ((Dynamic)(tmp51));
										HX_STACK_LINE(439)
										hx::AddEq(idx,(int)2);
										HX_STACK_LINE(440)
										{
											HX_STACK_LINE(440)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp52 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(440)
											Array< Float > points = tmp52->points;		HX_STACK_VAR(points,"points");
											HX_STACK_LINE(440)
											bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
											HX_STACK_LINE(440)
											bool tmp53 = (points->length > (int)1);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(440)
											if ((tmp53)){
												HX_STACK_LINE(440)
												int tmp54 = (points->length - (int)2);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(440)
												Float tmp55 = points->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(440)
												Float lastX = tmp55;		HX_STACK_VAR(lastX,"lastX");
												HX_STACK_LINE(440)
												int tmp56 = (points->length - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(440)
												Float tmp57 = points->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(440)
												Float lastY = tmp57;		HX_STACK_VAR(lastY,"lastY");
												HX_STACK_LINE(440)
												bool tmp58 = (lastX == ax);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(440)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(440)
												if ((tmp58)){
													HX_STACK_LINE(440)
													tmp59 = (lastY == ay);
												}
												else{
													HX_STACK_LINE(440)
													tmp59 = false;
												}
												HX_STACK_LINE(440)
												if ((tmp59)){
													HX_STACK_LINE(440)
													push_point = false;
												}
											}
											HX_STACK_LINE(440)
											bool tmp54 = (push_point == true);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(440)
											if ((tmp54)){
												HX_STACK_LINE(440)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp55 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(440)
												Float tmp56 = ax;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(440)
												tmp55->points->push(tmp56);
												HX_STACK_LINE(440)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp57 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(440)
												Float tmp58 = ay;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(440)
												tmp57->points->push(tmp58);
											}
										}
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(442)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(442)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(442)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(442)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(442)
										int tmp45 = (idx + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(442)
										Float tmp46 = ((Array< Float >)(tmp44))->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(442)
										ax = ((Dynamic)(tmp46));
										HX_STACK_LINE(443)
										::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(443)
										int tmp48 = c->oPos;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(443)
										int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(443)
										Dynamic tmp50 = tmp47->o->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(443)
										int tmp51 = (idx + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(443)
										Float tmp52 = ((Array< Float >)(tmp50))->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(443)
										ay = ((Dynamic)(tmp52));
										HX_STACK_LINE(444)
										hx::AddEq(idx,(int)4);
										HX_STACK_LINE(445)
										{
											HX_STACK_LINE(445)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp53 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(445)
											Array< Float > points = tmp53->points;		HX_STACK_VAR(points,"points");
											HX_STACK_LINE(445)
											bool push_point = true;		HX_STACK_VAR(push_point,"push_point");
											HX_STACK_LINE(445)
											bool tmp54 = (points->length > (int)1);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(445)
											if ((tmp54)){
												HX_STACK_LINE(445)
												int tmp55 = (points->length - (int)2);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(445)
												Float tmp56 = points->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(445)
												Float lastX = tmp56;		HX_STACK_VAR(lastX,"lastX");
												HX_STACK_LINE(445)
												int tmp57 = (points->length - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(445)
												Float tmp58 = points->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(445)
												Float lastY = tmp58;		HX_STACK_VAR(lastY,"lastY");
												HX_STACK_LINE(445)
												bool tmp59 = (lastX == ax);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(445)
												bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(445)
												if ((tmp59)){
													HX_STACK_LINE(445)
													tmp60 = (lastY == ay);
												}
												else{
													HX_STACK_LINE(445)
													tmp60 = false;
												}
												HX_STACK_LINE(445)
												if ((tmp60)){
													HX_STACK_LINE(445)
													push_point = false;
												}
											}
											HX_STACK_LINE(445)
											bool tmp55 = (push_point == true);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(445)
											if ((tmp55)){
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp56 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(445)
												Float tmp57 = ax;		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(445)
												tmp56->points->push(tmp57);
												HX_STACK_LINE(445)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp58 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(445)
												Float tmp59 = ay;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(445)
												tmp58->points->push(tmp59);
											}
										}
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(447)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(447)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(447)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(447)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(447)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(447)
										cx = ((Dynamic)(tmp45));
										HX_STACK_LINE(448)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(448)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(448)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(448)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(448)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(448)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(448)
										cy = ((Dynamic)(tmp51));
										HX_STACK_LINE(449)
										::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(449)
										int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(449)
										int tmp54 = (tmp53 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(449)
										Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(449)
										int tmp56 = (idx + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(449)
										Float tmp57 = ((Array< Float >)(tmp55))->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(449)
										ax = ((Dynamic)(tmp57));
										HX_STACK_LINE(450)
										::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(450)
										int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(450)
										int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(450)
										Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(450)
										int tmp62 = (idx + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(450)
										Float tmp63 = ((Array< Float >)(tmp61))->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(450)
										ay = ((Dynamic)(tmp63));
										HX_STACK_LINE(451)
										hx::AddEq(idx,(int)4);
										HX_STACK_LINE(452)
										{
											HX_STACK_LINE(452)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp64 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(452)
											bool tmp65 = (tmp64->points == null());		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(452)
											bool tmp66 = !(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(452)
											bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(452)
											if ((tmp66)){
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(452)
												int tmp70 = tmp69->points->length;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(452)
												int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(452)
												tmp67 = (tmp71 == (int)0);
											}
											else{
												HX_STACK_LINE(452)
												tmp67 = true;
											}
											HX_STACK_LINE(452)
											if ((tmp67)){
												HX_STACK_LINE(452)
												{
													HX_STACK_LINE(452)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(452)
													bool tmp69 = tmp68->isRemovable;		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(452)
													bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(452)
													if ((tmp69)){
														HX_STACK_LINE(452)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp71 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(452)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(452)
														bool tmp73 = (tmp72->points == null());		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(452)
														bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(452)
														bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(452)
														bool tmp76 = !(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(452)
														bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(452)
														bool tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(452)
														if ((tmp78)){
															HX_STACK_LINE(452)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp79 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp79,"tmp79");
															HX_STACK_LINE(452)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
															HX_STACK_LINE(452)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
															HX_STACK_LINE(452)
															int tmp82 = tmp81->points->length;		HX_STACK_VAR(tmp82,"tmp82");
															HX_STACK_LINE(452)
															int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
															HX_STACK_LINE(452)
															int tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(452)
															tmp70 = (tmp84 == (int)0);
														}
														else{
															HX_STACK_LINE(452)
															tmp70 = true;
														}
													}
													else{
														HX_STACK_LINE(452)
														tmp70 = false;
													}
													HX_STACK_LINE(452)
													if ((tmp70)){
														HX_STACK_LINE(452)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(452)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp68;
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp69 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp70 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::FillType tmp71 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(452)
												int tmp72 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(452)
												int tmp73 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(452)
												tmp69->update(tmp70,tmp71,tmp72,tmp73);
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp74 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(452)
												tmp74->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp75 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(452)
												tmp75->points->push((int)0);
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp76 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(452)
												tmp76->points->push((int)0);
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp77 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(452)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp77);
											}
											HX_STACK_LINE(452)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp68 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(452)
											Float tmp69 = cx;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(452)
											Float tmp70 = cy;		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(452)
											Float tmp71 = ax;		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(452)
											Float tmp72 = ay;		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(452)
											::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(tmp68->points,tmp69,tmp70,tmp71,tmp72);
										}
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(454)
										::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(454)
										int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(454)
										int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(454)
										Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(454)
										Float tmp45 = ((Array< Float >)(tmp44))->__get(idx);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(454)
										cx = ((Dynamic)(tmp45));
										HX_STACK_LINE(455)
										::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(455)
										int tmp47 = c->oPos;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(455)
										int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(455)
										Dynamic tmp49 = tmp46->o->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(455)
										int tmp50 = (idx + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(455)
										Float tmp51 = ((Array< Float >)(tmp49))->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(455)
										cy = ((Dynamic)(tmp51));
										HX_STACK_LINE(456)
										::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(456)
										int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(456)
										int tmp54 = (tmp53 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(456)
										Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(456)
										int tmp56 = (idx + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(456)
										Float tmp57 = ((Array< Float >)(tmp55))->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(456)
										cx2 = ((Dynamic)(tmp57));
										HX_STACK_LINE(457)
										::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(457)
										int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(457)
										int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(457)
										Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(457)
										int tmp62 = (idx + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(457)
										Float tmp63 = ((Array< Float >)(tmp61))->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(457)
										cy2 = ((Dynamic)(tmp63));
										HX_STACK_LINE(458)
										::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(458)
										int tmp65 = c->oPos;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(458)
										int tmp66 = (tmp65 + (int)1);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(458)
										Dynamic tmp67 = tmp64->o->__GetItem(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(458)
										int tmp68 = (idx + (int)4);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(458)
										Float tmp69 = ((Array< Float >)(tmp67))->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(458)
										ax = ((Dynamic)(tmp69));
										HX_STACK_LINE(459)
										::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(459)
										int tmp71 = c->oPos;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(459)
										int tmp72 = (tmp71 + (int)1);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(459)
										Dynamic tmp73 = tmp70->o->__GetItem(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(459)
										int tmp74 = (idx + (int)5);		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(459)
										Float tmp75 = ((Array< Float >)(tmp73))->__get(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(459)
										ay = ((Dynamic)(tmp75));
										HX_STACK_LINE(460)
										hx::AddEq(idx,(int)6);
										HX_STACK_LINE(461)
										{
											HX_STACK_LINE(461)
											::openfl::_internal::renderer::opengl::utils::DrawPath tmp76 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(461)
											bool tmp77 = (tmp76->points == null());		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(461)
											bool tmp78 = !(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(461)
											bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(461)
											if ((tmp78)){
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(461)
												int tmp82 = tmp81->points->length;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(461)
												int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(461)
												tmp79 = (tmp83 == (int)0);
											}
											else{
												HX_STACK_LINE(461)
												tmp79 = true;
											}
											HX_STACK_LINE(461)
											if ((tmp79)){
												HX_STACK_LINE(461)
												{
													HX_STACK_LINE(461)
													::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
													HX_STACK_LINE(461)
													bool tmp81 = tmp80->isRemovable;		HX_STACK_VAR(tmp81,"tmp81");
													HX_STACK_LINE(461)
													bool tmp82;		HX_STACK_VAR(tmp82,"tmp82");
													HX_STACK_LINE(461)
													if ((tmp81)){
														HX_STACK_LINE(461)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp83 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(461)
														::openfl::_internal::renderer::opengl::utils::DrawPath tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(461)
														bool tmp85 = (tmp84->points == null());		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(461)
														bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(461)
														bool tmp87 = tmp86;		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(461)
														bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(461)
														bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(461)
														bool tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(461)
														if ((tmp90)){
															HX_STACK_LINE(461)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp91 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp91,"tmp91");
															HX_STACK_LINE(461)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
															HX_STACK_LINE(461)
															::openfl::_internal::renderer::opengl::utils::DrawPath tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
															HX_STACK_LINE(461)
															int tmp94 = tmp93->points->length;		HX_STACK_VAR(tmp94,"tmp94");
															HX_STACK_LINE(461)
															int tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
															HX_STACK_LINE(461)
															int tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
															HX_STACK_LINE(461)
															tmp82 = (tmp96 == (int)0);
														}
														else{
															HX_STACK_LINE(461)
															tmp82 = true;
														}
													}
													else{
														HX_STACK_LINE(461)
														tmp82 = false;
													}
													HX_STACK_LINE(461)
													if ((tmp82)){
														HX_STACK_LINE(461)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
													}
													else{
														HX_STACK_LINE(461)
														::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
													}
												}
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp80;
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp81 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::LineStyle tmp82 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::FillType tmp83 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(461)
												int tmp84 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(461)
												int tmp85 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(461)
												tmp81->update(tmp82,tmp83,tmp84,tmp85);
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp86 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp86,"tmp86");
												HX_STACK_LINE(461)
												tmp86->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp87 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp87,"tmp87");
												HX_STACK_LINE(461)
												tmp87->points->push((int)0);
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp88 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp88,"tmp88");
												HX_STACK_LINE(461)
												tmp88->points->push((int)0);
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp89 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp89,"tmp89");
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp89);
											}
											HX_STACK_LINE(461)
											{
												HX_STACK_LINE(461)
												::openfl::_internal::renderer::opengl::utils::DrawPath tmp80 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(461)
												Array< Float > points = tmp80->points;		HX_STACK_VAR(points,"points");
												HX_STACK_LINE(461)
												int n = (int)20;		HX_STACK_VAR(n,"n");
												HX_STACK_LINE(461)
												Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
												HX_STACK_LINE(461)
												Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
												HX_STACK_LINE(461)
												Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
												HX_STACK_LINE(461)
												Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
												HX_STACK_LINE(461)
												Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
												HX_STACK_LINE(461)
												int tmp81 = (points->length - (int)2);		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(461)
												Float tmp82 = points->__get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(461)
												Float fromX = tmp82;		HX_STACK_VAR(fromX,"fromX");
												HX_STACK_LINE(461)
												int tmp83 = (points->length - (int)1);		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(461)
												Float tmp84 = points->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(461)
												Float fromY = tmp84;		HX_STACK_VAR(fromY,"fromY");
												HX_STACK_LINE(461)
												Float px = (int)0;		HX_STACK_VAR(px,"px");
												HX_STACK_LINE(461)
												Float py = (int)0;		HX_STACK_VAR(py,"py");
												HX_STACK_LINE(461)
												Float tmp85 = (int)0;		HX_STACK_VAR(tmp85,"tmp85");
												HX_STACK_LINE(461)
												{
													HX_STACK_LINE(461)
													int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(461)
													int tmp86 = (n + (int)1);		HX_STACK_VAR(tmp86,"tmp86");
													HX_STACK_LINE(461)
													int _g4 = tmp86;		HX_STACK_VAR(_g4,"_g4");
													HX_STACK_LINE(461)
													while((true)){
														HX_STACK_LINE(461)
														bool tmp87 = (_g11 < _g4);		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(461)
														bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(461)
														if ((tmp88)){
															HX_STACK_LINE(461)
															break;
														}
														HX_STACK_LINE(461)
														int tmp89 = (_g11)++;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(461)
														int i1 = tmp89;		HX_STACK_VAR(i1,"i1");
														HX_STACK_LINE(461)
														Float tmp90 = (Float(i1) / Float(n));		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(461)
														tmp85 = tmp90;
														HX_STACK_LINE(461)
														Float tmp91 = ((int)1 - tmp85);		HX_STACK_VAR(tmp91,"tmp91");
														HX_STACK_LINE(461)
														dt = tmp91;
														HX_STACK_LINE(461)
														Float tmp92 = (dt * dt);		HX_STACK_VAR(tmp92,"tmp92");
														HX_STACK_LINE(461)
														dt2 = tmp92;
														HX_STACK_LINE(461)
														Float tmp93 = (dt2 * dt);		HX_STACK_VAR(tmp93,"tmp93");
														HX_STACK_LINE(461)
														dt3 = tmp93;
														HX_STACK_LINE(461)
														Float tmp94 = (tmp85 * tmp85);		HX_STACK_VAR(tmp94,"tmp94");
														HX_STACK_LINE(461)
														t2 = tmp94;
														HX_STACK_LINE(461)
														Float tmp95 = (t2 * tmp85);		HX_STACK_VAR(tmp95,"tmp95");
														HX_STACK_LINE(461)
														t3 = tmp95;
														HX_STACK_LINE(461)
														Float tmp96 = (dt3 * fromX);		HX_STACK_VAR(tmp96,"tmp96");
														HX_STACK_LINE(461)
														Float tmp97 = ((int)3 * dt2);		HX_STACK_VAR(tmp97,"tmp97");
														HX_STACK_LINE(461)
														Float tmp98 = tmp85;		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(461)
														Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(461)
														Float tmp100 = cx;		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(461)
														Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(461)
														Float tmp102 = (tmp96 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(461)
														Float tmp103 = ((int)3 * dt);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(461)
														Float tmp104 = t2;		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(461)
														Float tmp105 = (tmp103 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(461)
														Float tmp106 = cx2;		HX_STACK_VAR(tmp106,"tmp106");
														HX_STACK_LINE(461)
														Float tmp107 = (tmp105 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
														HX_STACK_LINE(461)
														Float tmp108 = (tmp102 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
														HX_STACK_LINE(461)
														Float tmp109 = (t3 * ax);		HX_STACK_VAR(tmp109,"tmp109");
														HX_STACK_LINE(461)
														Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
														HX_STACK_LINE(461)
														px = tmp110;
														HX_STACK_LINE(461)
														Float tmp111 = (dt3 * fromY);		HX_STACK_VAR(tmp111,"tmp111");
														HX_STACK_LINE(461)
														Float tmp112 = ((int)3 * dt2);		HX_STACK_VAR(tmp112,"tmp112");
														HX_STACK_LINE(461)
														Float tmp113 = tmp85;		HX_STACK_VAR(tmp113,"tmp113");
														HX_STACK_LINE(461)
														Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
														HX_STACK_LINE(461)
														Float tmp115 = cy;		HX_STACK_VAR(tmp115,"tmp115");
														HX_STACK_LINE(461)
														Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
														HX_STACK_LINE(461)
														Float tmp117 = (tmp111 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
														HX_STACK_LINE(461)
														Float tmp118 = ((int)3 * dt);		HX_STACK_VAR(tmp118,"tmp118");
														HX_STACK_LINE(461)
														Float tmp119 = t2;		HX_STACK_VAR(tmp119,"tmp119");
														HX_STACK_LINE(461)
														Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
														HX_STACK_LINE(461)
														Float tmp121 = cy2;		HX_STACK_VAR(tmp121,"tmp121");
														HX_STACK_LINE(461)
														Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
														HX_STACK_LINE(461)
														Float tmp123 = (tmp117 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
														HX_STACK_LINE(461)
														Float tmp124 = (t3 * ay);		HX_STACK_VAR(tmp124,"tmp124");
														HX_STACK_LINE(461)
														Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
														HX_STACK_LINE(461)
														py = tmp125;
														HX_STACK_LINE(461)
														Float tmp126 = px;		HX_STACK_VAR(tmp126,"tmp126");
														HX_STACK_LINE(461)
														points->push(tmp126);
														HX_STACK_LINE(461)
														Float tmp127 = py;		HX_STACK_VAR(tmp127,"tmp127");
														HX_STACK_LINE(461)
														points->push(tmp127);
													}
												}
											}
										}
									}
									;break;
									default: {
									}
								}
							}
						}
						HX_STACK_LINE(467)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding = (int)0;
					}
					;break;
					case (int)18: {
						HX_STACK_LINE(471)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(471)
						{
							HX_STACK_LINE(471)
							{
								HX_STACK_LINE(471)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(471)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(471)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(471)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(471)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(471)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)3);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)9: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(471)
										hx::AddEq(data->tsPos,(int)1);
										HX_STACK_LINE(471)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(471)
										hx::AddEq(data->bPos,(int)1);
										HX_STACK_LINE(471)
										hx::AddEq(data->iPos,(int)2);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(471)
										hx::AddEq(data->iPos,(int)1);
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(471)
										Dynamic();
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(471)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)5);
										HX_STACK_LINE(471)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(471)
										hx::AddEq(data->ffPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)8);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(471)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)18: {
										HX_STACK_LINE(471)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(471)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(471)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
							HX_STACK_LINE(471)
							tmp23 = data;
						}
						HX_STACK_LINE(471)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(472)
						{
							HX_STACK_LINE(472)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(472)
							bool tmp25 = tmp24->isRemovable;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(472)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(472)
							if ((tmp25)){
								HX_STACK_LINE(472)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(472)
								::openfl::_internal::renderer::opengl::utils::DrawPath tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(472)
								bool tmp29 = (tmp28->points == null());		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(472)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(472)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(472)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(472)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(472)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(472)
								if ((tmp34)){
									HX_STACK_LINE(472)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp35 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(472)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(472)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(472)
									int tmp38 = tmp37->points->length;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(472)
									int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(472)
									int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(472)
									tmp26 = (tmp40 == (int)0);
								}
								else{
									HX_STACK_LINE(472)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(472)
								tmp26 = false;
							}
							HX_STACK_LINE(472)
							if ((tmp26)){
								HX_STACK_LINE(472)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();
							}
							else{
								HX_STACK_LINE(472)
								::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
							}
						}
						HX_STACK_LINE(474)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp24 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::__new(null());		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(474)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath = tmp24;
						HX_STACK_LINE(475)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp25 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(475)
						::openfl::_internal::renderer::opengl::utils::LineStyle tmp26 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__line;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(475)
						::openfl::_internal::renderer::opengl::utils::FillType tmp27 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fill;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(475)
						int tmp28 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__fillIndex;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(475)
						int tmp29 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentWinding;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(475)
						tmp25->update(tmp26,tmp27,tmp28,tmp29);
						HX_STACK_LINE(476)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(476)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(476)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(476)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(476)
						::openfl::geom::Matrix tmp34 = ((::openfl::geom::Matrix)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(476)
						::openfl::_internal::renderer::opengl::utils::GraphicType tmp35 = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::OverrideMatrix(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(476)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp36 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(476)
						tmp36->type = tmp35;
						HX_STACK_LINE(477)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp37 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(477)
						tmp37->isRemovable = false;
						HX_STACK_LINE(478)
						::openfl::_internal::renderer::opengl::utils::DrawPath tmp38 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__currentPath;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(478)
						::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths->push(tmp38);
					}
					;break;
					default: {
						HX_STACK_LINE(482)
						{
							HX_STACK_LINE(482)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(482)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(482)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(482)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(482)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(482)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)3);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)9: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(482)
									hx::AddEq(data->tsPos,(int)1);
									HX_STACK_LINE(482)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(482)
									hx::AddEq(data->bPos,(int)1);
									HX_STACK_LINE(482)
									hx::AddEq(data->iPos,(int)2);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(482)
									hx::AddEq(data->iPos,(int)1);
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(482)
									Dynamic();
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(482)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)5);
									HX_STACK_LINE(482)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(482)
									hx::AddEq(data->ffPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)8);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(482)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)18: {
									HX_STACK_LINE(482)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(482)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(482)
						data->prev = type;
					}
				}
			}
		}
		HX_STACK_LINE(488)
		::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::closePath();
		HX_STACK_LINE(489)
		data->destroy();
	}
	HX_STACK_LINE(493)
	graphics->__drawPaths = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::__drawPaths;
	HX_STACK_LINE(495)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp19 = glStack;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(495)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathBuiler_obj,build,return )


PathBuiler_obj::PathBuiler_obj()
{
}

bool PathBuiler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = build_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { outValue = __line; return true;  }
		if (HX_FIELD_EQ(inName,"__fill") ) { outValue = __fill; return true;  }
		if (HX_FIELD_EQ(inName,"moveTo") ) { outValue = moveTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineTo") ) { outValue = lineTo_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"curveTo") ) { outValue = curveTo_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { outValue = __drawPaths; return true;  }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { outValue = __fillIndex; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { outValue = cubicCurveTo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { outValue = __currentPath; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"graphicDataPop") ) { outValue = graphicDataPop_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { outValue = __currentWinding; return true;  }
	}
	return false;
}

bool PathBuiler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__line") ) { __line=ioValue.Cast< ::openfl::_internal::renderer::opengl::utils::LineStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"__fill") ) { __fill=ioValue.Cast< ::openfl::_internal::renderer::opengl::utils::FillType >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { __drawPaths=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"__fillIndex") ) { __fillIndex=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__currentPath") ) { __currentPath=ioValue.Cast< ::openfl::_internal::renderer::opengl::utils::DrawPath >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__currentWinding") ) { __currentWinding=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::DrawPath*/ ,(void *) &PathBuiler_obj::__currentPath,HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb")},
	{hx::fsInt,(void *) &PathBuiler_obj::__currentWinding,HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &PathBuiler_obj::__drawPaths,HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(void *) &PathBuiler_obj::__line,HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(void *) &PathBuiler_obj::__fill,HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2")},
	{hx::fsInt,(void *) &PathBuiler_obj::__fillIndex,HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_MARK_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentPath,"__currentPath");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__currentWinding,"__currentWinding");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__line,"__line");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fill,"__fill");
	HX_VISIT_MEMBER_NAME(PathBuiler_obj::__fillIndex,"__fillIndex");
};

#endif

hx::Class PathBuiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__currentPath","\x5e","\xff","\x5b","\xcb"),
	HX_HCSTRING("__currentWinding","\x01","\x49","\x44","\x2a"),
	HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"),
	HX_HCSTRING("__line","\x14","\x7b","\xab","\xf6"),
	HX_HCSTRING("__fill","\xa3","\x31","\xb4","\xf2"),
	HX_HCSTRING("__fillIndex","\x6f","\x0a","\xe8","\xba"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("graphicDataPop","\xbf","\x67","\x3a","\x4f"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	::String(null()) };

void PathBuiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.PathBuiler","\x09","\xea","\x3d","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PathBuiler_obj::__GetStatic;
	__mClass->mSetStaticField = &PathBuiler_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PathBuiler_obj >;
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

void PathBuiler_obj::__boot()
{
	__currentWinding= (int)0;
	__fillIndex= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
