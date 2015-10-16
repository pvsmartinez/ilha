#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_GraphicsPaths
#include <openfl/_internal/renderer/GraphicsPaths.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_PolyK
#include <openfl/_internal/renderer/PolyK.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PrimitiveShader
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
namespace opengl{
namespace utils{

Void GraphicsRenderer_obj::__construct()
{
	return null();
}

//GraphicsRenderer_obj::~GraphicsRenderer_obj() { }

Dynamic GraphicsRenderer_obj::__CreateEmpty() { return  new GraphicsRenderer_obj; }
hx::ObjectPtr< GraphicsRenderer_obj > GraphicsRenderer_obj::__new()
{  hx::ObjectPtr< GraphicsRenderer_obj > _result_ = new GraphicsRenderer_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsRenderer_obj > _result_ = new GraphicsRenderer_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > GraphicsRenderer_obj::fillVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::drawTrianglesVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::primitiveVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::graphicsDataPool;

Array< ::Dynamic > GraphicsRenderer_obj::bucketPool;

Float GraphicsRenderer_obj::SIN45;

Float GraphicsRenderer_obj::TAN22;

::openfl::geom::Point GraphicsRenderer_obj::objectPosition;

::openfl::geom::Rectangle GraphicsRenderer_obj::objectBounds;

::lime::graphics::opengl::GLBuffer GraphicsRenderer_obj::lastVertsBuffer;

::openfl::_internal::renderer::opengl::utils::BucketMode GraphicsRenderer_obj::lastBucketMode;

::lime::graphics::opengl::GLTexture GraphicsRenderer_obj::lastTexture;

bool GraphicsRenderer_obj::lastTextureRepeat;

bool GraphicsRenderer_obj::lastTextureSmooth;

::openfl::geom::Matrix GraphicsRenderer_obj::overrideMatrix;

Void GraphicsRenderer_obj::buildCircle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildCircle",0x5396c8ff,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildCircle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",78,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(79)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(81)
		Float tmp = rectData->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(82)
		Float tmp1 = rectData->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(83)
		Float tmp2 = rectData->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Float rx = tmp2;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(84)
		bool tmp3 = (rectData->length == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(84)
			tmp4 = rx;
		}
		else{
			HX_STACK_LINE(84)
			tmp4 = rectData->__get((int)3);
		}
		HX_STACK_LINE(84)
		Float ry = tmp4;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(86)
		bool tmp5 = (path->type == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp5)){
			HX_STACK_LINE(87)
			hx::DivEq(rx,(int)2);
			HX_STACK_LINE(88)
			hx::DivEq(ry,(int)2);
			HX_STACK_LINE(89)
			hx::AddEq(x,rx);
			HX_STACK_LINE(90)
			hx::AddEq(y,ry);
		}
		HX_STACK_LINE(93)
		bool tmp6 = localCoords;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		if ((tmp6)){
			HX_STACK_LINE(94)
			::openfl::geom::Rectangle tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			hx::SubEq(x,tmp7->x);
			HX_STACK_LINE(95)
			::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			hx::SubEq(y,tmp8->y);
		}
		HX_STACK_LINE(98)
		int totalSegs = (int)40;		HX_STACK_VAR(totalSegs,"totalSegs");
		HX_STACK_LINE(99)
		Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		Float tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		int tmp9 = totalSegs;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		Float seg = tmp10;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp11 = path;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp12 = glStack;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp13 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp13;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp14 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp14;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(104)
		bool tmp15 = (fill != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(104)
		if ((tmp15)){
			HX_STACK_LINE(105)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(106)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(108)
			Float tmp16 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(108)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(108)
			int vertPos = tmp17;		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(110)
			int tmp18 = vertPos;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(110)
			indices->push(tmp18);
			HX_STACK_LINE(112)
			{
				HX_STACK_LINE(112)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(112)
				int tmp19 = (totalSegs + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(112)
				int _g = tmp19;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(112)
				while((true)){
					HX_STACK_LINE(112)
					bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(112)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(112)
					if ((tmp21)){
						HX_STACK_LINE(112)
						break;
					}
					HX_STACK_LINE(112)
					int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(112)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(114)
					Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(114)
					verts->push(tmp23);
					HX_STACK_LINE(115)
					Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(115)
					verts->push(tmp24);
					HX_STACK_LINE(117)
					Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(117)
					Float tmp26 = (seg * i);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(117)
					Float tmp27 = ::Math_obj::sin(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(117)
					Float tmp28 = rx;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(117)
					Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(117)
					Float tmp30 = (tmp25 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(117)
					verts->push(tmp30);
					HX_STACK_LINE(118)
					Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(118)
					Float tmp32 = (seg * i);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(118)
					Float tmp33 = ::Math_obj::cos(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(118)
					Float tmp34 = ry;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(118)
					Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(118)
					Float tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(118)
					verts->push(tmp36);
					HX_STACK_LINE(120)
					int tmp37 = (vertPos)++;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(120)
					indices->push(tmp37);
					HX_STACK_LINE(121)
					int tmp38 = (vertPos)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(121)
					indices->push(tmp38);
				}
			}
			HX_STACK_LINE(125)
			int tmp19 = (vertPos - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(125)
			indices->push(tmp19);
		}
		HX_STACK_LINE(130)
		Float tmp16 = path->line->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(130)
		bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(130)
		if ((tmp17)){
			HX_STACK_LINE(132)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(133)
			path->points = Array_obj< Float >::__new();
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(135)
				Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(135)
				Float tmp19 = (tmp18 * (int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(135)
				int tmp20 = totalSegs;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(135)
				Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				Float seg1 = tmp21;		HX_STACK_VAR(seg1,"seg1");
				HX_STACK_LINE(135)
				{
					HX_STACK_LINE(135)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(135)
					int tmp22 = (totalSegs + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(135)
					int _g = tmp22;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(135)
					while((true)){
						HX_STACK_LINE(135)
						bool tmp23 = (_g1 < _g);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(135)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(135)
						if ((tmp24)){
							HX_STACK_LINE(135)
							break;
						}
						HX_STACK_LINE(135)
						int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(135)
						int i = tmp25;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(135)
						Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(135)
						Float tmp27 = (seg1 * i);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(135)
						Float tmp28 = ::Math_obj::sin(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(135)
						Float tmp29 = rx;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(135)
						Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(135)
						Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(135)
						points->push(tmp31);
						HX_STACK_LINE(135)
						Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(135)
						Float tmp33 = (seg1 * i);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(135)
						Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(135)
						Float tmp35 = ry;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(135)
						Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(135)
						Float tmp37 = (tmp32 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(135)
						points->push(tmp37);
					}
				}
			}
			HX_STACK_LINE(137)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp18 = path;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp19 = bucket;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(137)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp18,tmp19,null());
			HX_STACK_LINE(138)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildCircle,(void))

Void GraphicsRenderer_obj::buildComplexPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildComplexPoly",0xd9b80f4d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildComplexPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",144,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(146)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(148)
		int tmp = path->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		bool tmp1 = (tmp >= (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(149)
			Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(151)
			bool tmp2 = localCoords;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			if ((tmp2)){
				HX_STACK_LINE(152)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				Float tmp3 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(152)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(152)
				while((true)){
					HX_STACK_LINE(152)
					bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(152)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(152)
					if ((tmp6)){
						HX_STACK_LINE(152)
						break;
					}
					HX_STACK_LINE(152)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(152)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(153)
					int tmp8 = (i * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(153)
					::openfl::geom::Rectangle tmp9 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(153)
					Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(153)
					hx::SubEq(points[tmp8],tmp10);
					HX_STACK_LINE(154)
					int tmp11 = (i * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(154)
					int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(154)
					Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(154)
					hx::SubEq(points[tmp12],tmp14);
				}
			}
			HX_STACK_LINE(159)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			::openfl::_internal::renderer::opengl::utils::GLStack tmp4 = glStack;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp5 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			bucket = tmp5;
			HX_STACK_LINE(160)
			::openfl::_internal::renderer::opengl::utils::GLBucketData tmp6 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp6;		HX_STACK_VAR(fill,"fill");
			HX_STACK_LINE(161)
			int tmp7 = glStack->gl->TRIANGLE_FAN;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			fill->drawMode = tmp7;
			HX_STACK_LINE(162)
			fill->verts = points;
			HX_STACK_LINE(164)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(165)
			Float tmp8 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			int length = tmp9;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(166)
				while((true)){
					HX_STACK_LINE(166)
					bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(166)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(166)
					if ((tmp11)){
						HX_STACK_LINE(166)
						break;
					}
					HX_STACK_LINE(166)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(166)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(168)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(168)
					indices->push(tmp13);
				}
			}
		}
		HX_STACK_LINE(173)
		Float tmp2 = path->line->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		if ((tmp3)){
			HX_STACK_LINE(175)
			bool tmp4 = (bucket == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			if ((tmp4)){
				HX_STACK_LINE(176)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = glStack;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				bucket = tmp7;
			}
			HX_STACK_LINE(178)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp6 = bucket;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			bool tmp7 = localCoords;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp5,tmp6,tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildComplexPoly,(void))

Void GraphicsRenderer_obj::buildLine( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLBucket bucket,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildLine",0xe6638523,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildLine","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",183,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(185)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(186)
		bool tmp = (points->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		if ((tmp)){
			HX_STACK_LINE(186)
			return null();
		}
		HX_STACK_LINE(188)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp1 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Line);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		::openfl::_internal::renderer::opengl::utils::GLBucketData line = tmp1;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(190)
		bool tmp2 = localCoords;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		if ((tmp2)){
			HX_STACK_LINE(191)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(191)
			Float tmp3 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(191)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(191)
				if ((tmp6)){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(191)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(192)
				int tmp8 = (i * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(192)
				::openfl::geom::Rectangle tmp9 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(192)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(192)
				hx::SubEq(points[tmp8],tmp10);
				HX_STACK_LINE(193)
				int tmp11 = (i * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(193)
				::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(193)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(193)
				hx::SubEq(points[tmp12],tmp14);
			}
		}
		HX_STACK_LINE(210)
		Float tmp3 = points->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		Float tmp4 = points->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		::openfl::geom::Point firstPoint = tmp5;		HX_STACK_VAR(firstPoint,"firstPoint");
		HX_STACK_LINE(211)
		int tmp6 = (points->length - (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		Float tmp8 = points->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		int tmp9 = (points->length - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		Float tmp11 = points->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		::openfl::geom::Point tmp12 = ::openfl::geom::Point_obj::__new(tmp8,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(211)
		::openfl::geom::Point lastPoint = tmp12;		HX_STACK_VAR(lastPoint,"lastPoint");
		HX_STACK_LINE(213)
		bool tmp13 = (firstPoint->x == lastPoint->x);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(213)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(213)
		if ((tmp13)){
			HX_STACK_LINE(213)
			tmp14 = (firstPoint->y == lastPoint->y);
		}
		else{
			HX_STACK_LINE(213)
			tmp14 = false;
		}
		HX_STACK_LINE(213)
		if ((tmp14)){
			HX_STACK_LINE(215)
			points = points->copy();
			HX_STACK_LINE(217)
			points->pop();
			HX_STACK_LINE(218)
			points->pop();
			HX_STACK_LINE(220)
			int tmp15 = (points->length - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(220)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(220)
			Float tmp17 = points->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(220)
			int tmp18 = (points->length - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(220)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(220)
			Float tmp20 = points->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(220)
			::openfl::geom::Point tmp21 = ::openfl::geom::Point_obj::__new(tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(220)
			lastPoint = tmp21;
			HX_STACK_LINE(222)
			Float tmp22 = lastPoint->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(222)
			Float tmp23 = (firstPoint->x - lastPoint->x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(222)
			Float tmp24 = (tmp23 * ((Float)0.5));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(222)
			Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(222)
			Float midPointX = tmp25;		HX_STACK_VAR(midPointX,"midPointX");
			HX_STACK_LINE(223)
			Float tmp26 = lastPoint->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(223)
			Float tmp27 = (firstPoint->y - lastPoint->y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(223)
			Float tmp28 = (tmp27 * ((Float)0.5));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(223)
			Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(223)
			Float midPointY = tmp29;		HX_STACK_VAR(midPointY,"midPointY");
			HX_STACK_LINE(225)
			Float tmp30 = midPointY;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(225)
			points->unshift(tmp30);
			HX_STACK_LINE(226)
			Float tmp31 = midPointX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(226)
			points->unshift(tmp31);
			HX_STACK_LINE(227)
			Float tmp32 = midPointX;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(227)
			points->push(tmp32);
			HX_STACK_LINE(228)
			Float tmp33 = midPointY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(228)
			points->push(tmp33);
		}
		HX_STACK_LINE(232)
		Array< Float > verts = line->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(233)
		Array< int > indices = line->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(234)
		Float tmp15 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(234)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(234)
		int length = tmp16;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(235)
		int indexCount = points->length;		HX_STACK_VAR(indexCount,"indexCount");
		HX_STACK_LINE(236)
		Float tmp17 = (Float(verts->length) / Float((int)6));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(236)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(236)
		int indexStart = tmp18;		HX_STACK_VAR(indexStart,"indexStart");
		HX_STACK_LINE(238)
		Float tmp19 = path->line->width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(238)
		Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(238)
		Float width = tmp20;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(240)
		Array< Float > color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			int tmp21 = path->line->color;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(240)
			Dynamic hex = tmp21;		HX_STACK_VAR(hex,"hex");
			HX_STACK_LINE(240)
			bool tmp22 = (hex == null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(240)
			if ((tmp22)){
				HX_STACK_LINE(240)
				color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
			}
			else{
				HX_STACK_LINE(240)
				int tmp23 = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(240)
				int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(240)
				Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(240)
				int tmp26 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(240)
				int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(240)
				Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(240)
				int tmp29 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(240)
				Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(240)
				color = Array_obj< Float >::__new().Add(tmp25).Add(tmp28).Add(tmp30);
			}
		}
		HX_STACK_LINE(241)
		Dynamic tmp21 = path->line->alpha;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(241)
		Dynamic alpha = tmp21;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(242)
		Float tmp22 = color->__get((int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(242)
		Float r = tmp22;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(243)
		Float tmp23 = color->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(243)
		Float g = tmp23;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(244)
		Float tmp24 = color->__get((int)2);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(244)
		Float b = tmp24;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(246)
		Float px;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(246)
		Float py;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(246)
		Float p1x;		HX_STACK_VAR(p1x,"p1x");
		HX_STACK_LINE(246)
		Float p1y;		HX_STACK_VAR(p1y,"p1y");
		HX_STACK_LINE(246)
		Float p2x;		HX_STACK_VAR(p2x,"p2x");
		HX_STACK_LINE(246)
		Float p2y;		HX_STACK_VAR(p2y,"p2y");
		HX_STACK_LINE(246)
		Float p3x;		HX_STACK_VAR(p3x,"p3x");
		HX_STACK_LINE(246)
		Float p3y;		HX_STACK_VAR(p3y,"p3y");
		HX_STACK_LINE(247)
		Float perpx;		HX_STACK_VAR(perpx,"perpx");
		HX_STACK_LINE(247)
		Float perpy;		HX_STACK_VAR(perpy,"perpy");
		HX_STACK_LINE(247)
		Float perp2x;		HX_STACK_VAR(perp2x,"perp2x");
		HX_STACK_LINE(247)
		Float perp2y;		HX_STACK_VAR(perp2y,"perp2y");
		HX_STACK_LINE(247)
		Float perp3x;		HX_STACK_VAR(perp3x,"perp3x");
		HX_STACK_LINE(247)
		Float perp3y;		HX_STACK_VAR(perp3y,"perp3y");
		HX_STACK_LINE(248)
		Float a1;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(248)
		Float b1;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(248)
		Float c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(248)
		Float a2;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(248)
		Float b2;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(248)
		Float c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(249)
		Float denom;		HX_STACK_VAR(denom,"denom");
		HX_STACK_LINE(249)
		Float pdist;		HX_STACK_VAR(pdist,"pdist");
		HX_STACK_LINE(249)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(251)
		Float tmp25 = points->__get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(251)
		p1x = tmp25;
		HX_STACK_LINE(252)
		Float tmp26 = points->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(252)
		p1y = tmp26;
		HX_STACK_LINE(254)
		Float tmp27 = points->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(254)
		p2x = tmp27;
		HX_STACK_LINE(255)
		Float tmp28 = points->__get((int)3);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(255)
		p2y = tmp28;
		HX_STACK_LINE(257)
		Float tmp29 = (p1y - p2y);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(257)
		Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(257)
		perpx = tmp30;
		HX_STACK_LINE(258)
		Float tmp31 = (p1x - p2x);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(258)
		perpy = tmp31;
		HX_STACK_LINE(260)
		Float tmp32 = (perpx * perpx);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(260)
		Float tmp33 = (perpy * perpy);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(260)
		Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(260)
		Float tmp35 = ::Math_obj::abs(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(260)
		Float tmp36 = ::Math_obj::sqrt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(260)
		dist = tmp36;
		HX_STACK_LINE(262)
		Float tmp37 = (Float(perpx) / Float(dist));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(262)
		perpx = tmp37;
		HX_STACK_LINE(263)
		Float tmp38 = (Float(perpy) / Float(dist));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(263)
		perpy = tmp38;
		HX_STACK_LINE(264)
		Float tmp39 = (perpx * width);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(264)
		perpx = tmp39;
		HX_STACK_LINE(265)
		Float tmp40 = (perpy * width);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(265)
		perpy = tmp40;
		HX_STACK_LINE(267)
		Float tmp41 = (p1x - perpx);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(267)
		verts->push(tmp41);
		HX_STACK_LINE(268)
		Float tmp42 = (p1y - perpy);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(268)
		verts->push(tmp42);
		HX_STACK_LINE(269)
		Float tmp43 = r;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(269)
		verts->push(tmp43);
		HX_STACK_LINE(270)
		Float tmp44 = g;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(270)
		verts->push(tmp44);
		HX_STACK_LINE(271)
		Float tmp45 = b;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(271)
		verts->push(tmp45);
		HX_STACK_LINE(272)
		Dynamic tmp46 = alpha;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(272)
		verts->push(tmp46);
		HX_STACK_LINE(274)
		Float tmp47 = (p1x + perpx);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(274)
		verts->push(tmp47);
		HX_STACK_LINE(275)
		Float tmp48 = (p1y + perpy);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(275)
		verts->push(tmp48);
		HX_STACK_LINE(276)
		Float tmp49 = r;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(276)
		verts->push(tmp49);
		HX_STACK_LINE(277)
		Float tmp50 = g;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(277)
		verts->push(tmp50);
		HX_STACK_LINE(278)
		Float tmp51 = b;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(278)
		verts->push(tmp51);
		HX_STACK_LINE(279)
		Dynamic tmp52 = alpha;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(279)
		verts->push(tmp52);
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(281)
			int tmp53 = (length - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(281)
			int _g = tmp53;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				bool tmp54 = (_g1 < _g);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(281)
				bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(281)
				if ((tmp55)){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(281)
				int tmp56 = (_g1)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(281)
				int i = tmp56;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(283)
				int tmp57 = (i - (int)1);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(283)
				int tmp58 = (tmp57 * (int)2);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(283)
				Float tmp59 = points->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(283)
				p1x = tmp59;
				HX_STACK_LINE(284)
				int tmp60 = (i - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(284)
				int tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(284)
				int tmp62 = (tmp61 + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(284)
				Float tmp63 = points->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(284)
				p1y = tmp63;
				HX_STACK_LINE(285)
				int tmp64 = (i * (int)2);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(285)
				Float tmp65 = points->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(285)
				p2x = tmp65;
				HX_STACK_LINE(286)
				int tmp66 = (i * (int)2);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(286)
				int tmp67 = (tmp66 + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(286)
				Float tmp68 = points->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(286)
				p2y = tmp68;
				HX_STACK_LINE(287)
				int tmp69 = (i + (int)1);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(287)
				int tmp70 = (tmp69 * (int)2);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(287)
				Float tmp71 = points->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(287)
				p3x = tmp71;
				HX_STACK_LINE(288)
				int tmp72 = (i + (int)1);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(288)
				int tmp73 = (tmp72 * (int)2);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(288)
				int tmp74 = (tmp73 + (int)1);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(288)
				Float tmp75 = points->__get(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(288)
				p3y = tmp75;
				HX_STACK_LINE(290)
				Float tmp76 = (p1y - p2y);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(290)
				Float tmp77 = -(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(290)
				perpx = tmp77;
				HX_STACK_LINE(291)
				Float tmp78 = (p1x - p2x);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(291)
				perpy = tmp78;
				HX_STACK_LINE(293)
				Float tmp79 = (perpx * perpx);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(293)
				Float tmp80 = (perpy * perpy);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(293)
				Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(293)
				Float tmp82 = ::Math_obj::abs(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(293)
				Float tmp83 = ::Math_obj::sqrt(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(293)
				dist = tmp83;
				HX_STACK_LINE(294)
				Float tmp84 = (Float(perpx) / Float(dist));		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(294)
				perpx = tmp84;
				HX_STACK_LINE(295)
				Float tmp85 = (Float(perpy) / Float(dist));		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(295)
				perpy = tmp85;
				HX_STACK_LINE(296)
				Float tmp86 = (perpx * width);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(296)
				perpx = tmp86;
				HX_STACK_LINE(297)
				Float tmp87 = (perpy * width);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(297)
				perpy = tmp87;
				HX_STACK_LINE(299)
				Float tmp88 = (p2y - p3y);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(299)
				Float tmp89 = -(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(299)
				perp2x = tmp89;
				HX_STACK_LINE(300)
				Float tmp90 = (p2x - p3x);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(300)
				perp2y = tmp90;
				HX_STACK_LINE(302)
				Float tmp91 = (perp2x * perp2x);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(302)
				Float tmp92 = (perp2y * perp2y);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(302)
				Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(302)
				Float tmp94 = ::Math_obj::abs(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(302)
				Float tmp95 = ::Math_obj::sqrt(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(302)
				dist = tmp95;
				HX_STACK_LINE(303)
				Float tmp96 = (Float(perp2x) / Float(dist));		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(303)
				perp2x = tmp96;
				HX_STACK_LINE(304)
				Float tmp97 = (Float(perp2y) / Float(dist));		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(304)
				perp2y = tmp97;
				HX_STACK_LINE(305)
				Float tmp98 = (perp2x * width);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(305)
				perp2x = tmp98;
				HX_STACK_LINE(306)
				Float tmp99 = (perp2y * width);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(306)
				perp2y = tmp99;
				HX_STACK_LINE(308)
				Float tmp100 = perpy;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(308)
				Float tmp101 = -(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(308)
				Float tmp102 = p1y;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(308)
				Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(308)
				Float tmp104 = perpy;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(308)
				Float tmp105 = -(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(308)
				Float tmp106 = p2y;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(308)
				Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(308)
				Float tmp108 = (tmp103 - tmp107);		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(308)
				a1 = tmp108;
				HX_STACK_LINE(309)
				Float tmp109 = perpx;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(309)
				Float tmp110 = -(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(309)
				Float tmp111 = p2x;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(309)
				Float tmp112 = (tmp110 + tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(309)
				Float tmp113 = perpx;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(309)
				Float tmp114 = -(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(309)
				Float tmp115 = p1x;		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(309)
				Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(309)
				Float tmp117 = (tmp112 - tmp116);		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(309)
				b1 = tmp117;
				HX_STACK_LINE(310)
				Float tmp118 = perpx;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(310)
				Float tmp119 = -(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(310)
				Float tmp120 = p1x;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(310)
				Float tmp121 = (tmp119 + tmp120);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(310)
				Float tmp122 = perpy;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(310)
				Float tmp123 = -(tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(310)
				Float tmp124 = p2y;		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(310)
				Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(310)
				Float tmp126 = (tmp121 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(310)
				Float tmp127 = perpx;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(310)
				Float tmp128 = -(tmp127);		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(310)
				Float tmp129 = p2x;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(310)
				Float tmp130 = (tmp128 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(310)
				Float tmp131 = perpy;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(310)
				Float tmp132 = -(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(310)
				Float tmp133 = p1y;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(310)
				Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(310)
				Float tmp135 = (tmp130 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(310)
				Float tmp136 = (tmp126 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(310)
				c1 = tmp136;
				HX_STACK_LINE(311)
				Float tmp137 = perp2y;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(311)
				Float tmp138 = -(tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(311)
				Float tmp139 = p3y;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(311)
				Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(311)
				Float tmp141 = perp2y;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(311)
				Float tmp142 = -(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(311)
				Float tmp143 = p2y;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(311)
				Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(311)
				Float tmp145 = (tmp140 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(311)
				a2 = tmp145;
				HX_STACK_LINE(312)
				Float tmp146 = perp2x;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(312)
				Float tmp147 = -(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(312)
				Float tmp148 = p2x;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(312)
				Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(312)
				Float tmp150 = perp2x;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(312)
				Float tmp151 = -(tmp150);		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(312)
				Float tmp152 = p3x;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(312)
				Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(312)
				Float tmp154 = (tmp149 - tmp153);		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(312)
				b2 = tmp154;
				HX_STACK_LINE(313)
				Float tmp155 = perp2x;		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(313)
				Float tmp156 = -(tmp155);		HX_STACK_VAR(tmp156,"tmp156");
				HX_STACK_LINE(313)
				Float tmp157 = p3x;		HX_STACK_VAR(tmp157,"tmp157");
				HX_STACK_LINE(313)
				Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
				HX_STACK_LINE(313)
				Float tmp159 = perp2y;		HX_STACK_VAR(tmp159,"tmp159");
				HX_STACK_LINE(313)
				Float tmp160 = -(tmp159);		HX_STACK_VAR(tmp160,"tmp160");
				HX_STACK_LINE(313)
				Float tmp161 = p2y;		HX_STACK_VAR(tmp161,"tmp161");
				HX_STACK_LINE(313)
				Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
				HX_STACK_LINE(313)
				Float tmp163 = (tmp158 * tmp162);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(313)
				Float tmp164 = perp2x;		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(313)
				Float tmp165 = -(tmp164);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(313)
				Float tmp166 = p2x;		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(313)
				Float tmp167 = (tmp165 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(313)
				Float tmp168 = perp2y;		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(313)
				Float tmp169 = -(tmp168);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(313)
				Float tmp170 = p3y;		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(313)
				Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(313)
				Float tmp172 = (tmp167 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(313)
				Float tmp173 = (tmp163 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(313)
				c2 = tmp173;
				HX_STACK_LINE(315)
				Float tmp174 = (a1 * b2);		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(315)
				Float tmp175 = (a2 * b1);		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(315)
				Float tmp176 = (tmp174 - tmp175);		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(315)
				denom = tmp176;
				HX_STACK_LINE(317)
				Float tmp177 = denom;		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(317)
				Float tmp178 = ::Math_obj::abs(tmp177);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(317)
				bool tmp179 = (tmp178 < ((Float)0.1));		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(317)
				if ((tmp179)){
					HX_STACK_LINE(319)
					hx::AddEq(denom,((Float)10.1));
					HX_STACK_LINE(321)
					Float tmp180 = (p2x - perpx);		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(321)
					verts->push(tmp180);
					HX_STACK_LINE(322)
					Float tmp181 = (p2y - perpy);		HX_STACK_VAR(tmp181,"tmp181");
					HX_STACK_LINE(322)
					verts->push(tmp181);
					HX_STACK_LINE(323)
					Float tmp182 = r;		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(323)
					verts->push(tmp182);
					HX_STACK_LINE(324)
					Float tmp183 = g;		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(324)
					verts->push(tmp183);
					HX_STACK_LINE(325)
					Float tmp184 = b;		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(325)
					verts->push(tmp184);
					HX_STACK_LINE(326)
					Dynamic tmp185 = alpha;		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(326)
					verts->push(tmp185);
					HX_STACK_LINE(328)
					Float tmp186 = (p2x + perpx);		HX_STACK_VAR(tmp186,"tmp186");
					HX_STACK_LINE(328)
					verts->push(tmp186);
					HX_STACK_LINE(329)
					Float tmp187 = (p2y + perpy);		HX_STACK_VAR(tmp187,"tmp187");
					HX_STACK_LINE(329)
					verts->push(tmp187);
					HX_STACK_LINE(330)
					Float tmp188 = r;		HX_STACK_VAR(tmp188,"tmp188");
					HX_STACK_LINE(330)
					verts->push(tmp188);
					HX_STACK_LINE(331)
					Float tmp189 = g;		HX_STACK_VAR(tmp189,"tmp189");
					HX_STACK_LINE(331)
					verts->push(tmp189);
					HX_STACK_LINE(332)
					Float tmp190 = b;		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(332)
					verts->push(tmp190);
					HX_STACK_LINE(333)
					Dynamic tmp191 = alpha;		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(333)
					verts->push(tmp191);
					HX_STACK_LINE(335)
					continue;
				}
				HX_STACK_LINE(339)
				Float tmp180 = (b1 * c2);		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(339)
				Float tmp181 = (b2 * c1);		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(339)
				Float tmp182 = (tmp180 - tmp181);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(339)
				Float tmp183 = denom;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(339)
				Float tmp184 = (Float(tmp182) / Float(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(339)
				px = tmp184;
				HX_STACK_LINE(340)
				Float tmp185 = (a2 * c1);		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(340)
				Float tmp186 = (a1 * c2);		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(340)
				Float tmp187 = (tmp185 - tmp186);		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(340)
				Float tmp188 = denom;		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(340)
				Float tmp189 = (Float(tmp187) / Float(tmp188));		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(340)
				py = tmp189;
				HX_STACK_LINE(342)
				Float tmp190 = (px - p2x);		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(342)
				Float tmp191 = (px - p2x);		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(342)
				Float tmp192 = (tmp190 * tmp191);		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(342)
				Float tmp193 = (py - p2y);		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(342)
				Float tmp194 = (tmp192 + tmp193);		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(342)
				Float tmp195 = (py - p2y);		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(342)
				Float tmp196 = (tmp194 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
				HX_STACK_LINE(342)
				pdist = tmp196;
				HX_STACK_LINE(344)
				Float tmp197 = pdist;		HX_STACK_VAR(tmp197,"tmp197");
				HX_STACK_LINE(344)
				int tmp198 = (int)19600;		HX_STACK_VAR(tmp198,"tmp198");
				HX_STACK_LINE(344)
				bool tmp199 = (tmp197 > tmp198);		HX_STACK_VAR(tmp199,"tmp199");
				HX_STACK_LINE(344)
				if ((tmp199)){
					HX_STACK_LINE(346)
					Float tmp200 = (perpx - perp2x);		HX_STACK_VAR(tmp200,"tmp200");
					HX_STACK_LINE(346)
					perp3x = tmp200;
					HX_STACK_LINE(347)
					Float tmp201 = (perpy - perp2y);		HX_STACK_VAR(tmp201,"tmp201");
					HX_STACK_LINE(347)
					perp3y = tmp201;
					HX_STACK_LINE(349)
					Float tmp202 = (perp3x * perp3x);		HX_STACK_VAR(tmp202,"tmp202");
					HX_STACK_LINE(349)
					Float tmp203 = (perp3y * perp3y);		HX_STACK_VAR(tmp203,"tmp203");
					HX_STACK_LINE(349)
					Float tmp204 = (tmp202 + tmp203);		HX_STACK_VAR(tmp204,"tmp204");
					HX_STACK_LINE(349)
					Float tmp205 = ::Math_obj::abs(tmp204);		HX_STACK_VAR(tmp205,"tmp205");
					HX_STACK_LINE(349)
					Float tmp206 = ::Math_obj::sqrt(tmp205);		HX_STACK_VAR(tmp206,"tmp206");
					HX_STACK_LINE(349)
					dist = tmp206;
					HX_STACK_LINE(350)
					Float tmp207 = (Float(perp3x) / Float(dist));		HX_STACK_VAR(tmp207,"tmp207");
					HX_STACK_LINE(350)
					perp3x = tmp207;
					HX_STACK_LINE(351)
					Float tmp208 = (Float(perp3y) / Float(dist));		HX_STACK_VAR(tmp208,"tmp208");
					HX_STACK_LINE(351)
					perp3y = tmp208;
					HX_STACK_LINE(352)
					Float tmp209 = (perp3x * width);		HX_STACK_VAR(tmp209,"tmp209");
					HX_STACK_LINE(352)
					perp3x = tmp209;
					HX_STACK_LINE(353)
					Float tmp210 = (perp3y * width);		HX_STACK_VAR(tmp210,"tmp210");
					HX_STACK_LINE(353)
					perp3y = tmp210;
					HX_STACK_LINE(355)
					Float tmp211 = (p2x - perp3x);		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(355)
					verts->push(tmp211);
					HX_STACK_LINE(356)
					Float tmp212 = (p2y - perp3y);		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(356)
					verts->push(tmp212);
					HX_STACK_LINE(357)
					Float tmp213 = r;		HX_STACK_VAR(tmp213,"tmp213");
					HX_STACK_LINE(357)
					verts->push(tmp213);
					HX_STACK_LINE(358)
					Float tmp214 = g;		HX_STACK_VAR(tmp214,"tmp214");
					HX_STACK_LINE(358)
					verts->push(tmp214);
					HX_STACK_LINE(359)
					Float tmp215 = b;		HX_STACK_VAR(tmp215,"tmp215");
					HX_STACK_LINE(359)
					verts->push(tmp215);
					HX_STACK_LINE(360)
					Dynamic tmp216 = alpha;		HX_STACK_VAR(tmp216,"tmp216");
					HX_STACK_LINE(360)
					verts->push(tmp216);
					HX_STACK_LINE(362)
					Float tmp217 = (p2x + perp3x);		HX_STACK_VAR(tmp217,"tmp217");
					HX_STACK_LINE(362)
					verts->push(tmp217);
					HX_STACK_LINE(363)
					Float tmp218 = (p2y + perp3y);		HX_STACK_VAR(tmp218,"tmp218");
					HX_STACK_LINE(363)
					verts->push(tmp218);
					HX_STACK_LINE(364)
					Float tmp219 = r;		HX_STACK_VAR(tmp219,"tmp219");
					HX_STACK_LINE(364)
					verts->push(tmp219);
					HX_STACK_LINE(365)
					Float tmp220 = g;		HX_STACK_VAR(tmp220,"tmp220");
					HX_STACK_LINE(365)
					verts->push(tmp220);
					HX_STACK_LINE(366)
					Float tmp221 = b;		HX_STACK_VAR(tmp221,"tmp221");
					HX_STACK_LINE(366)
					verts->push(tmp221);
					HX_STACK_LINE(367)
					Dynamic tmp222 = alpha;		HX_STACK_VAR(tmp222,"tmp222");
					HX_STACK_LINE(367)
					verts->push(tmp222);
					HX_STACK_LINE(369)
					Float tmp223 = (p2x - perp3x);		HX_STACK_VAR(tmp223,"tmp223");
					HX_STACK_LINE(369)
					verts->push(tmp223);
					HX_STACK_LINE(370)
					Float tmp224 = (p2y - perp3y);		HX_STACK_VAR(tmp224,"tmp224");
					HX_STACK_LINE(370)
					verts->push(tmp224);
					HX_STACK_LINE(371)
					Float tmp225 = r;		HX_STACK_VAR(tmp225,"tmp225");
					HX_STACK_LINE(371)
					verts->push(tmp225);
					HX_STACK_LINE(372)
					Float tmp226 = g;		HX_STACK_VAR(tmp226,"tmp226");
					HX_STACK_LINE(372)
					verts->push(tmp226);
					HX_STACK_LINE(373)
					Float tmp227 = b;		HX_STACK_VAR(tmp227,"tmp227");
					HX_STACK_LINE(373)
					verts->push(tmp227);
					HX_STACK_LINE(374)
					Dynamic tmp228 = alpha;		HX_STACK_VAR(tmp228,"tmp228");
					HX_STACK_LINE(374)
					verts->push(tmp228);
					HX_STACK_LINE(376)
					(indexCount)++;
				}
				else{
					HX_STACK_LINE(380)
					Float tmp200 = px;		HX_STACK_VAR(tmp200,"tmp200");
					HX_STACK_LINE(380)
					verts->push(tmp200);
					HX_STACK_LINE(381)
					Float tmp201 = py;		HX_STACK_VAR(tmp201,"tmp201");
					HX_STACK_LINE(381)
					verts->push(tmp201);
					HX_STACK_LINE(382)
					Float tmp202 = r;		HX_STACK_VAR(tmp202,"tmp202");
					HX_STACK_LINE(382)
					verts->push(tmp202);
					HX_STACK_LINE(383)
					Float tmp203 = g;		HX_STACK_VAR(tmp203,"tmp203");
					HX_STACK_LINE(383)
					verts->push(tmp203);
					HX_STACK_LINE(384)
					Float tmp204 = b;		HX_STACK_VAR(tmp204,"tmp204");
					HX_STACK_LINE(384)
					verts->push(tmp204);
					HX_STACK_LINE(385)
					Dynamic tmp205 = alpha;		HX_STACK_VAR(tmp205,"tmp205");
					HX_STACK_LINE(385)
					verts->push(tmp205);
					HX_STACK_LINE(387)
					Float tmp206 = p2x;		HX_STACK_VAR(tmp206,"tmp206");
					HX_STACK_LINE(387)
					Float tmp207 = (px - p2x);		HX_STACK_VAR(tmp207,"tmp207");
					HX_STACK_LINE(387)
					Float tmp208 = (tmp206 - tmp207);		HX_STACK_VAR(tmp208,"tmp208");
					HX_STACK_LINE(387)
					verts->push(tmp208);
					HX_STACK_LINE(388)
					Float tmp209 = p2y;		HX_STACK_VAR(tmp209,"tmp209");
					HX_STACK_LINE(388)
					Float tmp210 = (py - p2y);		HX_STACK_VAR(tmp210,"tmp210");
					HX_STACK_LINE(388)
					Float tmp211 = (tmp209 - tmp210);		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(388)
					verts->push(tmp211);
					HX_STACK_LINE(389)
					Float tmp212 = r;		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(389)
					verts->push(tmp212);
					HX_STACK_LINE(390)
					Float tmp213 = g;		HX_STACK_VAR(tmp213,"tmp213");
					HX_STACK_LINE(390)
					verts->push(tmp213);
					HX_STACK_LINE(391)
					Float tmp214 = b;		HX_STACK_VAR(tmp214,"tmp214");
					HX_STACK_LINE(391)
					verts->push(tmp214);
					HX_STACK_LINE(392)
					Dynamic tmp215 = alpha;		HX_STACK_VAR(tmp215,"tmp215");
					HX_STACK_LINE(392)
					verts->push(tmp215);
				}
			}
		}
		HX_STACK_LINE(398)
		int tmp53 = (length - (int)2);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(398)
		int tmp54 = (tmp53 * (int)2);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(398)
		Float tmp55 = points->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(398)
		p1x = tmp55;
		HX_STACK_LINE(399)
		int tmp56 = (length - (int)2);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(399)
		int tmp57 = (tmp56 * (int)2);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(399)
		int tmp58 = (tmp57 + (int)1);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(399)
		Float tmp59 = points->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(399)
		p1y = tmp59;
		HX_STACK_LINE(400)
		int tmp60 = (length - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(400)
		int tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(400)
		Float tmp62 = points->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(400)
		p2x = tmp62;
		HX_STACK_LINE(401)
		int tmp63 = (length - (int)1);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(401)
		int tmp64 = (tmp63 * (int)2);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(401)
		int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(401)
		Float tmp66 = points->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(401)
		p2y = tmp66;
		HX_STACK_LINE(402)
		Float tmp67 = (p1y - p2y);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(402)
		Float tmp68 = -(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(402)
		perpx = tmp68;
		HX_STACK_LINE(403)
		Float tmp69 = (p1x - p2x);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(403)
		perpy = tmp69;
		HX_STACK_LINE(405)
		Float tmp70 = (perpx * perpx);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(405)
		Float tmp71 = (perpy * perpy);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(405)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(405)
		Float tmp73 = ::Math_obj::abs(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(405)
		Float tmp74 = ::Math_obj::sqrt(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(405)
		dist = tmp74;
		HX_STACK_LINE(406)
		Float tmp75 = dist;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(406)
		bool tmp76 = ::Math_obj::isFinite(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(406)
		bool tmp77 = !(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(406)
		if ((tmp77)){
			HX_STACK_LINE(406)
			Float tmp78 = (perpx * perpx);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(406)
			Float tmp79 = (perpy * perpy);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(406)
			Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(406)
			Dynamic tmp81 = hx::SourceInfo(HX_HCSTRING("GraphicsRenderer.hx","\x30","\xee","\x00","\xcc"),406,HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer","\x0f","\x64","\xe5","\xd1"),HX_HCSTRING("buildLine","\x42","\x4e","\xef","\xe7"));		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(406)
			::haxe::Log_obj::trace(tmp80,tmp81);
		}
		HX_STACK_LINE(407)
		Float tmp78 = (Float(perpx) / Float(dist));		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(407)
		perpx = tmp78;
		HX_STACK_LINE(408)
		Float tmp79 = (Float(perpy) / Float(dist));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(408)
		perpy = tmp79;
		HX_STACK_LINE(409)
		Float tmp80 = (perpx * width);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(409)
		perpx = tmp80;
		HX_STACK_LINE(410)
		Float tmp81 = (perpy * width);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(410)
		perpy = tmp81;
		HX_STACK_LINE(412)
		Float tmp82 = (p2x - perpx);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(412)
		verts->push(tmp82);
		HX_STACK_LINE(413)
		Float tmp83 = (p2y - perpy);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(413)
		verts->push(tmp83);
		HX_STACK_LINE(414)
		Float tmp84 = r;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(414)
		verts->push(tmp84);
		HX_STACK_LINE(415)
		Float tmp85 = g;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(415)
		verts->push(tmp85);
		HX_STACK_LINE(416)
		Float tmp86 = b;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(416)
		verts->push(tmp86);
		HX_STACK_LINE(417)
		Dynamic tmp87 = alpha;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(417)
		verts->push(tmp87);
		HX_STACK_LINE(419)
		Float tmp88 = (p2x + perpx);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(419)
		verts->push(tmp88);
		HX_STACK_LINE(420)
		Float tmp89 = (p2y + perpy);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(420)
		verts->push(tmp89);
		HX_STACK_LINE(421)
		Float tmp90 = r;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(421)
		verts->push(tmp90);
		HX_STACK_LINE(422)
		Float tmp91 = g;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(422)
		verts->push(tmp91);
		HX_STACK_LINE(423)
		Float tmp92 = b;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(423)
		verts->push(tmp92);
		HX_STACK_LINE(424)
		Dynamic tmp93 = alpha;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(424)
		verts->push(tmp93);
		HX_STACK_LINE(426)
		int tmp94 = indexStart;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(426)
		indices->push(tmp94);
		HX_STACK_LINE(428)
		{
			HX_STACK_LINE(428)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(428)
			while((true)){
				HX_STACK_LINE(428)
				bool tmp95 = (_g < indexCount);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(428)
				bool tmp96 = !(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(428)
				if ((tmp96)){
					HX_STACK_LINE(428)
					break;
				}
				HX_STACK_LINE(428)
				int tmp97 = (_g)++;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(428)
				int i = tmp97;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(430)
				int tmp98 = (indexStart)++;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(430)
				indices->push(tmp98);
			}
		}
		HX_STACK_LINE(434)
		int tmp95 = (indexStart - (int)1);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(434)
		indices->push(tmp95);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildLine,(void))

Void GraphicsRenderer_obj::buildPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildPoly",0xe90ceb7b,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",437,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(438)
		int tmp = path->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		bool tmp1 = (tmp < (int)6);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		if ((tmp1)){
			HX_STACK_LINE(438)
			return null();
		}
		HX_STACK_LINE(439)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(441)
		int l = points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(442)
		Float tmp2 = points->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(442)
		Float tmp3 = points->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(443)
		int tmp4 = (l - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		Float tmp5 = points->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		Float ex = tmp5;		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(443)
		int tmp6 = (l - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		Float tmp7 = points->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(443)
		Float ey = tmp7;		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(445)
		bool tmp8 = (sx != ex);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(445)
		if ((tmp9)){
			HX_STACK_LINE(445)
			tmp10 = (sy != ey);
		}
		else{
			HX_STACK_LINE(445)
			tmp10 = true;
		}
		HX_STACK_LINE(445)
		if ((tmp10)){
			HX_STACK_LINE(446)
			Float tmp11 = sx;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(446)
			points->push(tmp11);
			HX_STACK_LINE(447)
			Float tmp12 = sy;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(447)
			points->push(tmp12);
		}
		HX_STACK_LINE(450)
		Float tmp11 = (Float(points->length) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(450)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(450)
		int length = tmp12;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(452)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(452)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp14 = glStack;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(452)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp15 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(452)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp15;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(453)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp16 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(453)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp16;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(454)
		Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(455)
		Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(457)
		bool tmp17 = (fill != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(457)
		if ((tmp17)){
			HX_STACK_LINE(458)
			Array< int > triangles = Array_obj< int >::__new();		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(459)
			::openfl::_internal::renderer::PolyK_obj::triangulate(triangles,points);
			HX_STACK_LINE(460)
			Float tmp18 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(460)
			Float vertPos = tmp18;		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(462)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(463)
			while((true)){
				HX_STACK_LINE(463)
				bool tmp19 = (i < triangles->length);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(463)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(463)
				if ((tmp20)){
					HX_STACK_LINE(463)
					break;
				}
				HX_STACK_LINE(465)
				int tmp21 = triangles->__get(i);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(465)
				Float tmp22 = vertPos;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(465)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(465)
				int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(465)
				indices->push(tmp24);
				HX_STACK_LINE(466)
				int tmp25 = triangles->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(466)
				Float tmp26 = vertPos;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(466)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(466)
				int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(466)
				indices->push(tmp28);
				HX_STACK_LINE(467)
				int tmp29 = (i + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(467)
				int tmp30 = triangles->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(467)
				Float tmp31 = vertPos;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(467)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(467)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(467)
				indices->push(tmp33);
				HX_STACK_LINE(468)
				int tmp34 = (i + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(468)
				int tmp35 = triangles->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(468)
				Float tmp36 = vertPos;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(468)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(468)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(468)
				indices->push(tmp38);
				HX_STACK_LINE(469)
				int tmp39 = (i + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(469)
				int tmp40 = triangles->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(469)
				Float tmp41 = vertPos;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(469)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(469)
				int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(469)
				indices->push(tmp43);
				HX_STACK_LINE(470)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(474)
				while((true)){
					HX_STACK_LINE(474)
					bool tmp19 = (_g < length);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(474)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(474)
					if ((tmp20)){
						HX_STACK_LINE(474)
						break;
					}
					HX_STACK_LINE(474)
					int tmp21 = (_g)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(474)
					int i1 = tmp21;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(476)
					int tmp22 = (i1 * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(476)
					Float tmp23 = points->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(476)
					verts->push(tmp23);
					HX_STACK_LINE(477)
					int tmp24 = (i1 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(477)
					int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(477)
					Float tmp26 = points->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(477)
					verts->push(tmp26);
				}
			}
		}
		HX_STACK_LINE(482)
		Float tmp18 = path->line->width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(482)
		bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(482)
		if ((tmp19)){
			HX_STACK_LINE(484)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp20 = path;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(484)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp21 = bucket;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(484)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp20,tmp21,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildPoly,(void))

Void GraphicsRenderer_obj::buildRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRectangle",0xede73ca0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",489,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(490)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(491)
		Float tmp = rectData->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(492)
		Float tmp1 = rectData->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(493)
		Float tmp2 = rectData->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(493)
		Float width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(494)
		Float tmp3 = rectData->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(494)
		Float height = tmp3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(496)
		bool tmp4 = localCoords;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(496)
		if ((tmp4)){
			HX_STACK_LINE(497)
			::openfl::geom::Rectangle tmp5 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(497)
			hx::SubEq(x,tmp5->x);
			HX_STACK_LINE(498)
			::openfl::geom::Rectangle tmp6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(498)
			hx::SubEq(y,tmp6->y);
		}
		HX_STACK_LINE(501)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp6 = glStack;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp7;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(502)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp8 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(502)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp8;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(504)
		bool tmp9 = (fill != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(504)
		if ((tmp9)){
			HX_STACK_LINE(505)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(506)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(508)
			Float tmp10 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(508)
			int vertPos = tmp11;		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(510)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(510)
			verts->push(tmp12);
			HX_STACK_LINE(511)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(511)
			verts->push(tmp13);
			HX_STACK_LINE(512)
			Float tmp14 = (x + width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(512)
			verts->push(tmp14);
			HX_STACK_LINE(513)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(513)
			verts->push(tmp15);
			HX_STACK_LINE(514)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(514)
			verts->push(tmp16);
			HX_STACK_LINE(515)
			Float tmp17 = (y + height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(515)
			verts->push(tmp17);
			HX_STACK_LINE(516)
			Float tmp18 = (x + width);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(516)
			verts->push(tmp18);
			HX_STACK_LINE(517)
			Float tmp19 = (y + height);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(517)
			verts->push(tmp19);
			HX_STACK_LINE(519)
			int tmp20 = vertPos;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(519)
			indices->push(tmp20);
			HX_STACK_LINE(520)
			int tmp21 = vertPos;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(520)
			indices->push(tmp21);
			HX_STACK_LINE(521)
			int tmp22 = (vertPos + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(521)
			indices->push(tmp22);
			HX_STACK_LINE(522)
			int tmp23 = (vertPos + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(522)
			indices->push(tmp23);
			HX_STACK_LINE(523)
			int tmp24 = (vertPos + (int)3);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(523)
			indices->push(tmp24);
			HX_STACK_LINE(524)
			int tmp25 = (vertPos + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(524)
			indices->push(tmp25);
		}
		HX_STACK_LINE(528)
		Float tmp10 = path->line->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(528)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(528)
		if ((tmp11)){
			HX_STACK_LINE(530)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(531)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(531)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(531)
			Float tmp14 = (x + width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(531)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(531)
			Float tmp16 = (x + width);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(531)
			Float tmp17 = (y + height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(531)
			Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(531)
			Float tmp19 = (y + height);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(531)
			Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(531)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(531)
			path->points = Array_obj< Float >::__new().Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15).Add(tmp16).Add(tmp17).Add(tmp18).Add(tmp19).Add(tmp20).Add(tmp21);
			HX_STACK_LINE(532)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp22 = path;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(532)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp23 = bucket;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(532)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp22,tmp23,null());
			HX_STACK_LINE(533)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRectangle,(void))

Void GraphicsRenderer_obj::buildRoundedRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRoundedRectangle",0x47de3df1,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRoundedRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",538,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(539)
		Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(540)
		Float tmp = points->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(541)
		Float tmp1 = points->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(542)
		Float tmp2 = points->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		Float width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(543)
		Float tmp3 = points->__get((int)3);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(543)
		Float height = tmp3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(544)
		Float tmp4 = points->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(544)
		Float rx = tmp4;		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(545)
		Float tmp5 = points->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(545)
		Float ry = tmp5;		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(547)
		bool tmp6 = localCoords;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(547)
		if ((tmp6)){
			HX_STACK_LINE(548)
			::openfl::geom::Rectangle tmp7 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(548)
			hx::SubEq(x,tmp7->x);
			HX_STACK_LINE(549)
			::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(549)
			hx::SubEq(y,tmp8->y);
		}
		HX_STACK_LINE(552)
		Array< Float > recPoints = Array_obj< Float >::__new();		HX_STACK_VAR(recPoints,"recPoints");
		HX_STACK_LINE(553)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(553)
		Float tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(553)
		Float tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(553)
		Float tmp11 = rx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(553)
		Float tmp12 = ry;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(553)
		::openfl::_internal::renderer::GraphicsPaths_obj::roundRectangle(recPoints,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(555)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(555)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp14 = glStack;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(555)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp15 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(555)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp15;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(556)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp16 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(556)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp16;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(558)
		bool tmp17 = (fill != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(558)
		if ((tmp17)){
			HX_STACK_LINE(559)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(560)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(562)
			Float tmp18 = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(562)
			Float vecPos = tmp18;		HX_STACK_VAR(vecPos,"vecPos");
			HX_STACK_LINE(564)
			Array< int > triangles = Array_obj< int >::__new();		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(565)
			::openfl::_internal::renderer::PolyK_obj::triangulate(triangles,recPoints);
			HX_STACK_LINE(567)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(568)
			while((true)){
				HX_STACK_LINE(568)
				bool tmp19 = (i < triangles->length);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(568)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(568)
				if ((tmp20)){
					HX_STACK_LINE(568)
					break;
				}
				HX_STACK_LINE(570)
				int tmp21 = triangles->__get(i);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(570)
				Float tmp22 = vecPos;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(570)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(570)
				int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(570)
				indices->push(tmp24);
				HX_STACK_LINE(571)
				int tmp25 = triangles->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(571)
				Float tmp26 = vecPos;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(571)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(571)
				int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(571)
				indices->push(tmp28);
				HX_STACK_LINE(572)
				int tmp29 = (i + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(572)
				int tmp30 = triangles->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(572)
				Float tmp31 = vecPos;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(572)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(572)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(572)
				indices->push(tmp33);
				HX_STACK_LINE(573)
				int tmp34 = (i + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(573)
				int tmp35 = triangles->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(573)
				Float tmp36 = vecPos;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(573)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(573)
				int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(573)
				indices->push(tmp38);
				HX_STACK_LINE(574)
				int tmp39 = (i + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(574)
				int tmp40 = triangles->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(574)
				Float tmp41 = vecPos;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(574)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(574)
				int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(574)
				indices->push(tmp43);
				HX_STACK_LINE(575)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(579)
			i = (int)0;
			HX_STACK_LINE(580)
			while((true)){
				HX_STACK_LINE(580)
				bool tmp19 = (i < recPoints->length);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(580)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(580)
				if ((tmp20)){
					HX_STACK_LINE(580)
					break;
				}
				HX_STACK_LINE(582)
				Float tmp21 = recPoints->__get(i);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(582)
				verts->push(tmp21);
				HX_STACK_LINE(583)
				int tmp22 = ++(i);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(583)
				Float tmp23 = recPoints->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(583)
				verts->push(tmp23);
				HX_STACK_LINE(584)
				(i)++;
			}
		}
		HX_STACK_LINE(588)
		Float tmp18 = path->line->width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(588)
		bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(588)
		if ((tmp19)){
			HX_STACK_LINE(590)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(591)
			path->points = recPoints;
			HX_STACK_LINE(592)
			::openfl::_internal::renderer::opengl::utils::DrawPath tmp20 = path;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(592)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp21 = bucket;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(592)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(tmp20,tmp21,null());
			HX_STACK_LINE(593)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRoundedRectangle,(void))

Void GraphicsRenderer_obj::buildDrawTriangles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTriangles",0xec6e38f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",598,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(600)
		::openfl::_internal::renderer::opengl::utils::GraphicType tmp = path->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		cpp::ArrayBase args = ::Type_obj::enumParameters(tmp);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(602)
		Dynamic tmp1 = args->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(602)
		Array< Float > vertices = ((Array< Float >)(tmp1));		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(603)
		Dynamic tmp2 = args->__GetItem((int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		Array< int > indices = ((Array< int >)(tmp2));		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(604)
		Dynamic tmp3 = args->__GetItem((int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(604)
		Array< Float > uvtData = ((Array< Float >)(tmp3));		HX_STACK_VAR(uvtData,"uvtData");
		HX_STACK_LINE(605)
		Dynamic tmp4 = args->__GetItem((int)3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(605)
		::openfl::display::TriangleCulling culling = ((::openfl::display::TriangleCulling)(tmp4));		HX_STACK_VAR(culling,"culling");
		HX_STACK_LINE(606)
		Dynamic tmp5 = args->__GetItem((int)4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(606)
		Array< int > colors = ((Array< int >)(tmp5));		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(607)
		Dynamic tmp6 = args->__GetItem((int)5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(607)
		int blendMode = tmp6;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(609)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(609)
		Float b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(609)
		Float c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(609)
		Float d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(609)
		Float tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(609)
		Float ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(611)
		bool tmp7 = localCoords;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(611)
		if ((tmp7)){
			HX_STACK_LINE(612)
			a = ((Float)1.0);
			HX_STACK_LINE(613)
			b = ((Float)0.0);
			HX_STACK_LINE(614)
			c = ((Float)0.0);
			HX_STACK_LINE(615)
			d = ((Float)1.0);
			HX_STACK_LINE(616)
			tx = ((Float)0.0);
			HX_STACK_LINE(617)
			ty = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(619)
			Float tmp8 = object->__worldTransform->a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(619)
			a = tmp8;
			HX_STACK_LINE(620)
			Float tmp9 = object->__worldTransform->b;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(620)
			b = tmp9;
			HX_STACK_LINE(621)
			Float tmp10 = object->__worldTransform->c;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(621)
			c = tmp10;
			HX_STACK_LINE(622)
			Float tmp11 = object->__worldTransform->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(622)
			d = tmp11;
			HX_STACK_LINE(623)
			Float tmp12 = object->__worldTransform->tx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(623)
			tx = tmp12;
			HX_STACK_LINE(624)
			Float tmp13 = object->__worldTransform->ty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(624)
			ty = tmp13;
		}
		HX_STACK_LINE(627)
		bool tmp8 = (colors != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(627)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(627)
		if ((tmp8)){
			HX_STACK_LINE(627)
			int tmp10 = colors->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(627)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(627)
			tmp9 = (tmp11 > (int)0);
		}
		else{
			HX_STACK_LINE(627)
			tmp9 = false;
		}
		HX_STACK_LINE(627)
		bool hasColors = tmp9;		HX_STACK_VAR(hasColors,"hasColors");
		HX_STACK_LINE(629)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp10 = path;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(629)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp11 = glStack;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(629)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp12 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(629)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp12;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(630)
		::openfl::_internal::renderer::opengl::utils::GLBucketData tmp13 = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(630)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp13;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(631)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp14 = fill->vertexArray->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(631)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute colorAttrib = tmp14;		HX_STACK_VAR(colorAttrib,"colorAttrib");
		HX_STACK_LINE(632)
		colorAttrib->enabled = hasColors;
		HX_STACK_LINE(633)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			cpp::ArrayBase array = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(633)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(633)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(633)
			if ((tmp16)){
				HX_STACK_LINE(633)
				::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(633)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(633)
				bool tmp17 = (array != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(633)
				if ((tmp17)){
					HX_STACK_LINE(633)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(633)
					{
						HX_STACK_LINE(633)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(633)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(633)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(633)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(633)
						int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(633)
						_this->byteLength = tmp20;
						HX_STACK_LINE(633)
						::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(633)
							int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(633)
							this2 = tmp23;
							HX_STACK_LINE(633)
							tmp21 = this2;
						}
						HX_STACK_LINE(633)
						_this->buffer = tmp21;
						HX_STACK_LINE(633)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(633)
						tmp18 = _this;
					}
					HX_STACK_LINE(633)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(633)
					bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(633)
					if ((tmp18)){
						HX_STACK_LINE(633)
						::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(633)
						{
							HX_STACK_LINE(633)
							::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(633)
							::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(633)
							::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(633)
							::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(633)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(633)
							int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(633)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(633)
							int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(633)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(633)
							int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(633)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(633)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(633)
							int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(633)
							bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(633)
							if ((tmp27)){
								HX_STACK_LINE(633)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(633)
								int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(633)
								int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(633)
								::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(633)
								{
									HX_STACK_LINE(633)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(633)
									int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(633)
									::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(633)
									this2 = tmp31;
									HX_STACK_LINE(633)
									tmp29 = this2;
								}
								HX_STACK_LINE(633)
								_this->buffer = tmp29;
								HX_STACK_LINE(633)
								::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(633)
								int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(633)
								int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(633)
								_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
							}
							else{
								HX_STACK_LINE(633)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(633)
							int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(633)
							_this->byteLength = tmp28;
							HX_STACK_LINE(633)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(633)
							_this->length = srcLength;
							HX_STACK_LINE(633)
							tmp19 = _this;
						}
						HX_STACK_LINE(633)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(633)
						bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(633)
						if ((tmp19)){
							HX_STACK_LINE(633)
							::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(633)
							{
								HX_STACK_LINE(633)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(633)
								::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(633)
								bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(633)
								if ((tmp22)){
									HX_STACK_LINE(633)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(633)
								int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(633)
								bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(633)
								if ((tmp24)){
									HX_STACK_LINE(633)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(633)
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(633)
								int bufferByteLength = tmp25;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(633)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(633)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(633)
								bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(633)
								if ((tmp26)){
									HX_STACK_LINE(633)
									int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(633)
									newByteLength = tmp27;
									HX_STACK_LINE(633)
									int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(633)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(633)
									if ((tmp29)){
										HX_STACK_LINE(633)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(633)
									bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(633)
									if ((tmp30)){
										HX_STACK_LINE(633)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(633)
									int tmp27 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(633)
									newByteLength = tmp27;
									HX_STACK_LINE(633)
									int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(633)
									int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(633)
									bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(633)
									if ((tmp29)){
										HX_STACK_LINE(633)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(633)
								_this->buffer = null();
								HX_STACK_LINE(633)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(633)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(633)
								Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(633)
								int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(633)
								_this->length = tmp28;
								HX_STACK_LINE(633)
								tmp20 = _this;
							}
							HX_STACK_LINE(633)
							this1 = tmp20;
						}
						else{
							HX_STACK_LINE(633)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(633)
			tmp15 = this1;
		}
		HX_STACK_LINE(633)
		colorAttrib->defaultValue = tmp15;
		HX_STACK_LINE(635)
		fill->rawVerts = true;
		HX_STACK_LINE(636)
		int tmp16 = indices->length;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(636)
		fill->glLength = tmp16;
		HX_STACK_LINE(637)
		int tmp17 = fill->vertexArray->get_stride();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(637)
		Float tmp18 = (Float(tmp17) / Float((int)4));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(637)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(637)
		fill->stride = tmp19;
		HX_STACK_LINE(639)
		int tmp20 = (fill->glLength * fill->stride);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(639)
		int vertsLength = tmp20;		HX_STACK_VAR(vertsLength,"vertsLength");
		HX_STACK_LINE(640)
		::lime::utils::ArrayBufferView verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(642)
		bool tmp21 = (fill->glVerts == null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(642)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(642)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(642)
		if ((tmp22)){
			HX_STACK_LINE(642)
			int tmp24 = fill->glVerts->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(642)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(642)
			int tmp26 = vertsLength;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(642)
			tmp23 = (tmp25 < tmp26);
		}
		else{
			HX_STACK_LINE(642)
			tmp23 = true;
		}
		HX_STACK_LINE(642)
		if ((tmp23)){
			HX_STACK_LINE(643)
			::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(643)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(643)
				bool tmp25 = (vertsLength != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(643)
				if ((tmp25)){
					HX_STACK_LINE(643)
					::lime::utils::ArrayBufferView tmp26 = ::lime::utils::ArrayBufferView_obj::__new(vertsLength,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(643)
					this1 = tmp26;
				}
				else{
					HX_STACK_LINE(643)
					bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(643)
					if ((tmp26)){
						HX_STACK_LINE(643)
						::lime::utils::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(643)
						{
							HX_STACK_LINE(643)
							::lime::utils::ArrayBufferView tmp28 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(643)
							::lime::utils::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(643)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(643)
							int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(643)
							_this->length = tmp29;
							HX_STACK_LINE(643)
							int tmp30 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(643)
							_this->byteLength = tmp30;
							HX_STACK_LINE(643)
							::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(643)
							{
								HX_STACK_LINE(643)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(643)
								int tmp32 = _this->byteLength;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(643)
								::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(643)
								this2 = tmp33;
								HX_STACK_LINE(643)
								tmp31 = this2;
							}
							HX_STACK_LINE(643)
							_this->buffer = tmp31;
							HX_STACK_LINE(643)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(643)
							tmp27 = _this;
						}
						HX_STACK_LINE(643)
						this1 = tmp27;
					}
					else{
						HX_STACK_LINE(643)
						bool tmp27 = false;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(643)
						if ((tmp27)){
							HX_STACK_LINE(643)
							::lime::utils::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(643)
							{
								HX_STACK_LINE(643)
								::lime::utils::ArrayBufferView tmp29 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(643)
								::lime::utils::ArrayBufferView _this = tmp29;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(643)
								::haxe::io::Bytes tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(643)
								::haxe::io::Bytes srcData = tmp30;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(643)
								int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(643)
								int srcLength = tmp31;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(643)
								int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(643)
								int srcByteOffset = tmp32;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(643)
								int tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(643)
								int srcElementSize = tmp33;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(643)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(643)
								int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(643)
								int tmp35 = _this->type;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(643)
								bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(643)
								if ((tmp36)){
									HX_STACK_LINE(643)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(643)
									int tmp37 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(643)
									int cloneLength = tmp37;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(643)
									::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(643)
									{
										HX_STACK_LINE(643)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(643)
										int tmp39 = cloneLength;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(643)
										::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(643)
										this2 = tmp40;
										HX_STACK_LINE(643)
										tmp38 = this2;
									}
									HX_STACK_LINE(643)
									_this->buffer = tmp38;
									HX_STACK_LINE(643)
									::haxe::io::Bytes tmp39 = srcData;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(643)
									int tmp40 = srcByteOffset;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(643)
									int tmp41 = cloneLength;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(643)
									_this->buffer->blit((int)0,tmp39,tmp40,tmp41);
								}
								else{
									HX_STACK_LINE(643)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(643)
								int tmp37 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(643)
								_this->byteLength = tmp37;
								HX_STACK_LINE(643)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(643)
								_this->length = srcLength;
								HX_STACK_LINE(643)
								tmp28 = _this;
							}
							HX_STACK_LINE(643)
							this1 = tmp28;
						}
						else{
							HX_STACK_LINE(643)
							bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(643)
							if ((tmp28)){
								HX_STACK_LINE(643)
								::lime::utils::ArrayBufferView tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(643)
								{
									HX_STACK_LINE(643)
									::lime::utils::ArrayBufferView tmp30 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(643)
									::lime::utils::ArrayBufferView _this = tmp30;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(643)
									bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(643)
									if ((tmp31)){
										HX_STACK_LINE(643)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(643)
									int tmp32 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(643)
									bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(643)
									if ((tmp33)){
										HX_STACK_LINE(643)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(643)
									int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(643)
									int bufferByteLength = tmp34;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(643)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(643)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(643)
									bool tmp35 = true;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(643)
									if ((tmp35)){
										HX_STACK_LINE(643)
										int tmp36 = bufferByteLength;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(643)
										newByteLength = tmp36;
										HX_STACK_LINE(643)
										int tmp37 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(643)
										bool tmp38 = (tmp37 != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(643)
										if ((tmp38)){
											HX_STACK_LINE(643)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(643)
										bool tmp39 = (newByteLength < (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(643)
										if ((tmp39)){
											HX_STACK_LINE(643)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(643)
										int tmp36 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(643)
										newByteLength = tmp36;
										HX_STACK_LINE(643)
										int tmp37 = newByteLength;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(643)
										int newRange = tmp37;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(643)
										bool tmp38 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(643)
										if ((tmp38)){
											HX_STACK_LINE(643)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(643)
									_this->buffer = null();
									HX_STACK_LINE(643)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(643)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(643)
									Float tmp36 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(643)
									int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(643)
									_this->length = tmp37;
									HX_STACK_LINE(643)
									tmp29 = _this;
								}
								HX_STACK_LINE(643)
								this1 = tmp29;
							}
							else{
								HX_STACK_LINE(643)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(643)
				tmp24 = this1;
			}
			HX_STACK_LINE(643)
			verts = tmp24;
			HX_STACK_LINE(644)
			fill->glVerts = verts;
		}
		else{
			HX_STACK_LINE(646)
			verts = fill->glVerts;
		}
		HX_STACK_LINE(649)
		::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(649)
		{
			HX_STACK_LINE(649)
			::haxe::io::Bytes buffer = verts->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(649)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(649)
			bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(649)
			if ((tmp25)){
				HX_STACK_LINE(649)
				::lime::utils::ArrayBufferView tmp26 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(649)
				this1 = tmp26;
			}
			else{
				HX_STACK_LINE(649)
				bool tmp26 = false;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(649)
				if ((tmp26)){
					HX_STACK_LINE(649)
					::lime::utils::ArrayBufferView tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(649)
					{
						HX_STACK_LINE(649)
						::lime::utils::ArrayBufferView tmp28 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(649)
						::lime::utils::ArrayBufferView _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(649)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(649)
						int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(649)
						_this->length = tmp29;
						HX_STACK_LINE(649)
						int tmp30 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(649)
						_this->byteLength = tmp30;
						HX_STACK_LINE(649)
						::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(649)
						{
							HX_STACK_LINE(649)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(649)
							int tmp32 = _this->byteLength;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(649)
							::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(649)
							this2 = tmp33;
							HX_STACK_LINE(649)
							tmp31 = this2;
						}
						HX_STACK_LINE(649)
						_this->buffer = tmp31;
						HX_STACK_LINE(649)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(649)
						tmp27 = _this;
					}
					HX_STACK_LINE(649)
					this1 = tmp27;
				}
				else{
					HX_STACK_LINE(649)
					bool tmp27 = false;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(649)
					if ((tmp27)){
						HX_STACK_LINE(649)
						::lime::utils::ArrayBufferView tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(649)
						{
							HX_STACK_LINE(649)
							::lime::utils::ArrayBufferView tmp29 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(649)
							::lime::utils::ArrayBufferView _this = tmp29;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(649)
							::haxe::io::Bytes tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(649)
							::haxe::io::Bytes srcData = tmp30;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(649)
							int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(649)
							int srcLength = tmp31;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(649)
							int tmp32 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(649)
							int srcByteOffset = tmp32;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(649)
							int tmp33 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(649)
							int srcElementSize = tmp33;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(649)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(649)
							int tmp34 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(649)
							int tmp35 = _this->type;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(649)
							bool tmp36 = (tmp34 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(649)
							if ((tmp36)){
								HX_STACK_LINE(649)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(649)
								int tmp37 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(649)
								int cloneLength = tmp37;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(649)
								::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(649)
								{
									HX_STACK_LINE(649)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(649)
									int tmp39 = cloneLength;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(649)
									::haxe::io::Bytes tmp40 = ::haxe::io::Bytes_obj::alloc(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(649)
									this2 = tmp40;
									HX_STACK_LINE(649)
									tmp38 = this2;
								}
								HX_STACK_LINE(649)
								_this->buffer = tmp38;
								HX_STACK_LINE(649)
								::haxe::io::Bytes tmp39 = srcData;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(649)
								int tmp40 = srcByteOffset;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(649)
								int tmp41 = cloneLength;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(649)
								_this->buffer->blit((int)0,tmp39,tmp40,tmp41);
							}
							else{
								HX_STACK_LINE(649)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(649)
							int tmp37 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(649)
							_this->byteLength = tmp37;
							HX_STACK_LINE(649)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(649)
							_this->length = srcLength;
							HX_STACK_LINE(649)
							tmp28 = _this;
						}
						HX_STACK_LINE(649)
						this1 = tmp28;
					}
					else{
						HX_STACK_LINE(649)
						bool tmp28 = (buffer != null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(649)
						if ((tmp28)){
							HX_STACK_LINE(649)
							::lime::utils::ArrayBufferView tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(649)
							{
								HX_STACK_LINE(649)
								::lime::utils::ArrayBufferView tmp30 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(649)
								::lime::utils::ArrayBufferView _this = tmp30;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(649)
								bool tmp31 = false;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(649)
								if ((tmp31)){
									HX_STACK_LINE(649)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(649)
								int tmp32 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(649)
								bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(649)
								if ((tmp33)){
									HX_STACK_LINE(649)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(649)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(649)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(649)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(649)
								bool tmp34 = true;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(649)
								if ((tmp34)){
									HX_STACK_LINE(649)
									int tmp35 = bufferByteLength;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(649)
									newByteLength = tmp35;
									HX_STACK_LINE(649)
									int tmp36 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(649)
									bool tmp37 = (tmp36 != (int)0);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(649)
									if ((tmp37)){
										HX_STACK_LINE(649)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(649)
									bool tmp38 = (newByteLength < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(649)
									if ((tmp38)){
										HX_STACK_LINE(649)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(649)
									int tmp35 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(649)
									newByteLength = tmp35;
									HX_STACK_LINE(649)
									int tmp36 = newByteLength;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(649)
									int newRange = tmp36;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(649)
									bool tmp37 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(649)
									if ((tmp37)){
										HX_STACK_LINE(649)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(649)
								_this->buffer = buffer;
								HX_STACK_LINE(649)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(649)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(649)
								Float tmp35 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(649)
								int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(649)
								_this->length = tmp36;
								HX_STACK_LINE(649)
								tmp29 = _this;
							}
							HX_STACK_LINE(649)
							this1 = tmp29;
						}
						else{
							HX_STACK_LINE(649)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
						}
					}
				}
			}
			HX_STACK_LINE(649)
			tmp24 = this1;
		}
		HX_STACK_LINE(649)
		::lime::utils::ArrayBufferView glColors = tmp24;		HX_STACK_VAR(glColors,"glColors");
		HX_STACK_LINE(651)
		int v0 = (int)0;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(651)
		int v1 = (int)0;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(651)
		int v2 = (int)0;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(652)
		int i0 = (int)0;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(652)
		int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(652)
		int i2 = (int)0;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(654)
		Float x0 = ((Float)0.0);		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(654)
		Float y0 = ((Float)0.0);		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(655)
		Float x1 = ((Float)0.0);		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(655)
		Float y1 = ((Float)0.0);		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(656)
		Float x2 = ((Float)0.0);		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(656)
		Float y2 = ((Float)0.0);		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(658)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(659)
			int tmp25 = indices->length;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(659)
			Float tmp26 = (Float(tmp25) / Float((int)3));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(659)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(659)
			int _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(659)
			while((true)){
				HX_STACK_LINE(659)
				bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(659)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(659)
				if ((tmp29)){
					HX_STACK_LINE(659)
					break;
				}
				HX_STACK_LINE(659)
				int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(659)
				int i = tmp30;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(661)
				int tmp31 = (i * (int)3);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(661)
				int tmp32 = indices->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(661)
				i0 = ((Dynamic)(tmp32));
				HX_STACK_LINE(661)
				int tmp33 = (i * (int)3);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(661)
				int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(661)
				int tmp35 = indices->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(661)
				i1 = ((Dynamic)(tmp35));
				HX_STACK_LINE(661)
				int tmp36 = (i * (int)3);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(661)
				int tmp37 = (tmp36 + (int)2);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(661)
				int tmp38 = indices->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(661)
				i2 = ((Dynamic)(tmp38));
				HX_STACK_LINE(662)
				int tmp39 = (i0 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(662)
				v0 = tmp39;
				HX_STACK_LINE(662)
				int tmp40 = (i1 * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(662)
				v1 = tmp40;
				HX_STACK_LINE(662)
				int tmp41 = (i2 * (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(662)
				v2 = tmp41;
				HX_STACK_LINE(664)
				Float tmp42 = vertices->__get(v0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(664)
				x0 = ((Dynamic)(tmp42));
				HX_STACK_LINE(664)
				int tmp43 = (v0 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(664)
				Float tmp44 = vertices->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(664)
				y0 = ((Dynamic)(tmp44));
				HX_STACK_LINE(665)
				Float tmp45 = vertices->__get(v1);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(665)
				x1 = ((Dynamic)(tmp45));
				HX_STACK_LINE(665)
				int tmp46 = (v1 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(665)
				Float tmp47 = vertices->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(665)
				y1 = ((Dynamic)(tmp47));
				HX_STACK_LINE(666)
				Float tmp48 = vertices->__get(v2);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(666)
				x2 = ((Dynamic)(tmp48));
				HX_STACK_LINE(666)
				int tmp49 = (v2 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(666)
				Float tmp50 = vertices->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(666)
				y2 = ((Dynamic)(tmp50));
				HX_STACK_LINE(668)
				bool tmp51 = localCoords;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(668)
				if ((tmp51)){
					HX_STACK_LINE(669)
					::openfl::geom::Rectangle tmp52 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(669)
					hx::SubEq(x0,tmp52->x);
					HX_STACK_LINE(670)
					::openfl::geom::Rectangle tmp53 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(670)
					hx::SubEq(y0,tmp53->y);
					HX_STACK_LINE(671)
					::openfl::geom::Rectangle tmp54 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(671)
					hx::SubEq(x1,tmp54->x);
					HX_STACK_LINE(672)
					::openfl::geom::Rectangle tmp55 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(672)
					hx::SubEq(y1,tmp55->y);
					HX_STACK_LINE(673)
					::openfl::geom::Rectangle tmp56 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(673)
					hx::SubEq(x2,tmp56->x);
					HX_STACK_LINE(674)
					::openfl::geom::Rectangle tmp57 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(674)
					hx::SubEq(y2,tmp57->y);
				}
				HX_STACK_LINE(677)
				switch( (int)(culling->__Index())){
					case (int)2: {
						HX_STACK_LINE(679)
						Float tmp52 = (x1 - x0);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(679)
						Float tmp53 = (y2 - y0);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(679)
						Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(679)
						Float tmp55 = (y1 - y0);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(679)
						Float tmp56 = (x2 - x0);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(679)
						Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(679)
						Float tmp58 = (tmp54 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(679)
						bool tmp59 = (tmp58 < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(679)
						bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(679)
						if ((tmp60)){
							HX_STACK_LINE(679)
							continue;
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(681)
						Float tmp52 = (x1 - x0);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(681)
						Float tmp53 = (y2 - y0);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(681)
						Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(681)
						Float tmp55 = (y1 - y0);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(681)
						Float tmp56 = (x2 - x0);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(681)
						Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(681)
						Float tmp58 = (tmp54 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(681)
						bool tmp59 = (tmp58 < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(681)
						if ((tmp59)){
							HX_STACK_LINE(681)
							continue;
						}
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(685)
				{
					HX_STACK_LINE(685)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(685)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(685)
					Float tmp53 = (a * x0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(685)
					Float tmp54 = (c * y0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(685)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(685)
					Float tmp56 = tx;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(685)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(685)
					Float val = tmp57;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(685)
					{
						HX_STACK_LINE(685)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(685)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(685)
						val;
					}
				}
				HX_STACK_LINE(686)
				{
					HX_STACK_LINE(686)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(686)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(686)
					Float tmp53 = (b * x0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(686)
					Float tmp54 = (d * y0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(686)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(686)
					Float tmp56 = ty;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(686)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(686)
					Float val = tmp57;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(686)
					{
						HX_STACK_LINE(686)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(686)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(686)
						val;
					}
				}
				HX_STACK_LINE(687)
				{
					HX_STACK_LINE(687)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(687)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(687)
					Float tmp53 = uvtData->__get(v0);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(687)
					Float val = ((Dynamic)(tmp53));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(687)
					{
						HX_STACK_LINE(687)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(687)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(687)
						val;
					}
				}
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					int tmp52 = (idx)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(688)
					int idx1 = tmp52;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(688)
					int tmp53 = (v0 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(688)
					Float tmp54 = uvtData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(688)
					Float val = ((Dynamic)(tmp54));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(688)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(688)
						val;
					}
				}
				HX_STACK_LINE(689)
				bool tmp52 = hasColors;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(689)
				if ((tmp52)){
					HX_STACK_LINE(690)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(690)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(690)
					int tmp54 = colors->__get(i0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(690)
					int val = ((Dynamic)(tmp54));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(690)
					{
						HX_STACK_LINE(690)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(690)
						::__hxcpp_memory_set_ui32(glColors->buffer->b,(glColors->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(690)
						val;
					}
				}
				HX_STACK_LINE(693)
				{
					HX_STACK_LINE(693)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(693)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(693)
					Float tmp54 = (a * x1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(693)
					Float tmp55 = (c * y1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(693)
					Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(693)
					Float tmp57 = tx;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(693)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(693)
					Float val = tmp58;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(693)
					{
						HX_STACK_LINE(693)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(693)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(693)
						val;
					}
				}
				HX_STACK_LINE(694)
				{
					HX_STACK_LINE(694)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(694)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(694)
					Float tmp54 = (b * x1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(694)
					Float tmp55 = (d * y1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(694)
					Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(694)
					Float tmp57 = ty;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(694)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(694)
					Float val = tmp58;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(694)
					{
						HX_STACK_LINE(694)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(694)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(694)
						val;
					}
				}
				HX_STACK_LINE(695)
				{
					HX_STACK_LINE(695)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(695)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(695)
					Float tmp54 = uvtData->__get(v1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(695)
					Float val = ((Dynamic)(tmp54));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(695)
					{
						HX_STACK_LINE(695)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(695)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(695)
						val;
					}
				}
				HX_STACK_LINE(696)
				{
					HX_STACK_LINE(696)
					int tmp53 = (idx)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(696)
					int idx1 = tmp53;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(696)
					int tmp54 = (v1 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(696)
					Float tmp55 = uvtData->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(696)
					Float val = ((Dynamic)(tmp55));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(696)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(696)
						val;
					}
				}
				HX_STACK_LINE(697)
				bool tmp53 = hasColors;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(697)
				if ((tmp53)){
					HX_STACK_LINE(698)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(698)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(698)
					int tmp55 = colors->__get(i1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(698)
					int val = ((Dynamic)(tmp55));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(698)
						::__hxcpp_memory_set_ui32(glColors->buffer->b,(glColors->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(698)
						val;
					}
				}
				HX_STACK_LINE(701)
				{
					HX_STACK_LINE(701)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(701)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(701)
					Float tmp55 = (a * x2);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(701)
					Float tmp56 = (c * y2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(701)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(701)
					Float tmp58 = tx;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(701)
					Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(701)
					Float val = tmp59;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(701)
					{
						HX_STACK_LINE(701)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(701)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(701)
						val;
					}
				}
				HX_STACK_LINE(702)
				{
					HX_STACK_LINE(702)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(702)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(702)
					Float tmp55 = (b * x2);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(702)
					Float tmp56 = (d * y2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(702)
					Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(702)
					Float tmp58 = ty;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(702)
					Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(702)
					Float val = tmp59;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(702)
					{
						HX_STACK_LINE(702)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(702)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(702)
						val;
					}
				}
				HX_STACK_LINE(703)
				{
					HX_STACK_LINE(703)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(703)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(703)
					Float tmp55 = uvtData->__get(v2);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(703)
					Float val = ((Dynamic)(tmp55));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(703)
					{
						HX_STACK_LINE(703)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(703)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(703)
						val;
					}
				}
				HX_STACK_LINE(704)
				{
					HX_STACK_LINE(704)
					int tmp54 = (idx)++;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(704)
					int idx1 = tmp54;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(704)
					int tmp55 = (v2 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(704)
					Float tmp56 = uvtData->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(704)
					Float val = ((Dynamic)(tmp56));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(704)
					{
						HX_STACK_LINE(704)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(704)
						::__hxcpp_memory_set_float(verts->buffer->b,(verts->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(704)
						val;
					}
				}
				HX_STACK_LINE(705)
				bool tmp54 = hasColors;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(705)
				if ((tmp54)){
					HX_STACK_LINE(706)
					int tmp55 = (idx)++;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(706)
					int idx1 = tmp55;		HX_STACK_VAR(idx1,"idx1");
					HX_STACK_LINE(706)
					int tmp56 = colors->__get(i2);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(706)
					int val = ((Dynamic)(tmp56));		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(706)
					{
						HX_STACK_LINE(706)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(706)
						::__hxcpp_memory_set_ui32(glColors->buffer->b,(glColors->byteOffset + (idx1 * (int)4)),val);
						HX_STACK_LINE(706)
						val;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,buildDrawTriangles,(void))

Void GraphicsRenderer_obj::buildDrawTiles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTiles",0xacaa9b52,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTiles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",713,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(714)
		::openfl::_internal::renderer::opengl::utils::DrawPath tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = glStack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildDrawTiles,(void))

Array< Float > GraphicsRenderer_obj::quadraticBezierCurve( Float fromX,Float fromY,Float cpX,Float cpY,Float toX,Float toY){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","quadraticBezierCurve",0x90de5ad7,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.quadraticBezierCurve","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",718,0xd295150c)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(cpX,"cpX")
	HX_STACK_ARG(cpY,"cpY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_LINE(720)
	Float xa;		HX_STACK_VAR(xa,"xa");
	HX_STACK_LINE(720)
	Float ya;		HX_STACK_VAR(ya,"ya");
	HX_STACK_LINE(720)
	Float xb;		HX_STACK_VAR(xb,"xb");
	HX_STACK_LINE(720)
	Float yb;		HX_STACK_VAR(yb,"yb");
	HX_STACK_LINE(720)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(720)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(721)
	int n = (int)20;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(722)
	Array< Float > points = Array_obj< Float >::__new();		HX_STACK_VAR(points,"points");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 3; }
	Float run(Float n1,Float n2,Float perc){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",724,0xd295150c)
		HX_STACK_ARG(n1,"n1")
		HX_STACK_ARG(n2,"n2")
		HX_STACK_ARG(perc,"perc")
		{
			HX_STACK_LINE(726)
			Float tmp = (n2 - n1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(726)
			Float diff = tmp;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(727)
			Float tmp1 = n1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(727)
			Float tmp2 = (diff * perc);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(727)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(727)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_STACK_LINE(724)
	Dynamic getPt =  Dynamic(new _Function_1_1());		HX_STACK_VAR(getPt,"getPt");
	HX_STACK_LINE(731)
	Float j = ((Float)0.0);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(732)
	{
		HX_STACK_LINE(732)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(732)
		int tmp = (n + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(732)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(732)
		while((true)){
			HX_STACK_LINE(732)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(732)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(732)
			if ((tmp2)){
				HX_STACK_LINE(732)
				break;
			}
			HX_STACK_LINE(732)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(732)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(734)
			Float tmp4 = (Float(i) / Float(n));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(734)
			j = tmp4;
			HX_STACK_LINE(736)
			Float tmp5 = fromX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(736)
			Float tmp6 = cpX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(736)
			Float tmp7 = j;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(736)
			Float tmp8 = getPt(tmp5,tmp6,tmp7).Cast< Float >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(736)
			xa = tmp8;
			HX_STACK_LINE(737)
			Float tmp9 = fromY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(737)
			Float tmp10 = cpY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(737)
			Float tmp11 = j;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(737)
			Float tmp12 = getPt(tmp9,tmp10,tmp11).Cast< Float >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(737)
			ya = tmp12;
			HX_STACK_LINE(738)
			Float tmp13 = cpX;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(738)
			Float tmp14 = toX;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(738)
			Float tmp15 = j;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(738)
			Float tmp16 = getPt(tmp13,tmp14,tmp15).Cast< Float >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(738)
			xb = tmp16;
			HX_STACK_LINE(739)
			Float tmp17 = cpY;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(739)
			Float tmp18 = toY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(739)
			Float tmp19 = j;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(739)
			Float tmp20 = getPt(tmp17,tmp18,tmp19).Cast< Float >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(739)
			yb = tmp20;
			HX_STACK_LINE(741)
			Float tmp21 = xa;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(741)
			Float tmp22 = xb;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(741)
			Float tmp23 = j;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(741)
			Float tmp24 = getPt(tmp21,tmp22,tmp23).Cast< Float >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(741)
			x = tmp24;
			HX_STACK_LINE(742)
			Float tmp25 = ya;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(742)
			Float tmp26 = yb;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(742)
			Float tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(742)
			Float tmp28 = getPt(tmp25,tmp26,tmp27).Cast< Float >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(742)
			y = tmp28;
			HX_STACK_LINE(744)
			Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(744)
			points->push(tmp29);
			HX_STACK_LINE(745)
			Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(745)
			points->push(tmp30);
		}
	}
	HX_STACK_LINE(749)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,quadraticBezierCurve,return )

Void GraphicsRenderer_obj::render( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","render",0xf1488dd5,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.render","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",753,0xd295150c)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(755)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(756)
		::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(757)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(758)
		bool dirty = graphics->__dirty;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(760)
		bool tmp = graphics->__visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(760)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(760)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(760)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(760)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(760)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(760)
		if ((tmp4)){
			HX_STACK_LINE(760)
			int tmp6 = graphics->__commands->get_length();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(760)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(760)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(760)
			tmp5 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(760)
			tmp5 = true;
		}
		HX_STACK_LINE(760)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(760)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(760)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(760)
		if ((tmp7)){
			HX_STACK_LINE(760)
			tmp8 = (bounds == null());
		}
		else{
			HX_STACK_LINE(760)
			tmp8 = true;
		}
		HX_STACK_LINE(760)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(760)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(760)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(760)
		if ((tmp10)){
			HX_STACK_LINE(760)
			tmp11 = (bounds->width == (int)0);
		}
		else{
			HX_STACK_LINE(760)
			tmp11 = true;
		}
		HX_STACK_LINE(760)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(760)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(760)
		if ((tmp12)){
			HX_STACK_LINE(760)
			tmp13 = (bounds->height == (int)0);
		}
		else{
			HX_STACK_LINE(760)
			tmp13 = true;
		}
		HX_STACK_LINE(760)
		if ((tmp13)){
			HX_STACK_LINE(762)
			int tmp14 = graphics->__glStack->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(762)
			graphics->__glStack->splice((int)0,tmp14);
			HX_STACK_LINE(763)
			return null();
		}
		HX_STACK_LINE(767)
		bool tmp14 = dirty;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(767)
		if ((tmp14)){
			HX_STACK_LINE(768)
			::openfl::display::DisplayObject tmp15 = object;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(768)
			::openfl::display::Graphics tmp16 = object->__graphics;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(768)
			::lime::graphics::GLRenderContext tmp17 = renderSession->gl;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(768)
			bool tmp18 = object->cacheAsBitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(768)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::updateGraphics(tmp15,tmp16,tmp17,tmp18);
		}
		HX_STACK_LINE(810)
		::openfl::display::DisplayObject tmp15 = object;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(810)
		::openfl::_internal::renderer::RenderSession tmp16 = renderSession;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(810)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderGraphics(tmp15,tmp16,false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,render,(void))

Void GraphicsRenderer_obj::renderGraphics( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderGraphics",0xdf139fc0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",814,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(815)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(816)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(818)
		int tmp = ::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(818)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = graphics->__glStack->__get(tmp).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(818)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = tmp1;		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(819)
		bool tmp2 = (glStack == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(819)
		if ((tmp2)){
			HX_STACK_LINE(819)
			return null();
		}
		HX_STACK_LINE(820)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(822)
		::openfl::geom::Matrix translationMatrix;		HX_STACK_VAR(translationMatrix,"translationMatrix");
		HX_STACK_LINE(823)
		Dynamic tmp3 = localCoords;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(823)
		if ((tmp3)){
			HX_STACK_LINE(824)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(824)
			translationMatrix = tmp4;
		}
		else{
			HX_STACK_LINE(826)
			translationMatrix = object->__worldTransform;
		}
		HX_STACK_LINE(829)
		::openfl::geom::Rectangle tmp4 = renderSession->spriteBatch->clipRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(829)
		::openfl::geom::Rectangle clipRect = tmp4;		HX_STACK_VAR(clipRect,"clipRect");
		HX_STACK_LINE(830)
		bool tmp5 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(830)
		bool batchDrawing = tmp5;		HX_STACK_VAR(batchDrawing,"batchDrawing");
		HX_STACK_LINE(832)
		bool tmp6 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(832)
		batchDrawing = tmp6;
		HX_STACK_LINE(834)
		{
			HX_STACK_LINE(834)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(834)
			int tmp7 = glStack->buckets->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(834)
			int _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(834)
			while((true)){
				HX_STACK_LINE(834)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(834)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(834)
				if ((tmp9)){
					HX_STACK_LINE(834)
					break;
				}
				HX_STACK_LINE(834)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(834)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(835)
				bool tmp11 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(835)
				batchDrawing = tmp11;
				HX_STACK_LINE(837)
				bool tmp12 = batchDrawing;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(837)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(837)
				if ((tmp12)){
					HX_STACK_LINE(837)
					Dynamic tmp14 = localCoords;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(837)
					Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(837)
					tmp13 = !(tmp15);
				}
				else{
					HX_STACK_LINE(837)
					tmp13 = false;
				}
				HX_STACK_LINE(837)
				if ((tmp13)){
					HX_STACK_LINE(838)
					renderSession->spriteBatch->finish();
				}
				HX_STACK_LINE(841)
				::openfl::display::BlendMode tmp14 = object->__blendMode;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(841)
				renderSession->blendModeManager->setBlendMode(tmp14,null());
				HX_STACK_LINE(843)
				bool tmp15 = (clipRect != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(843)
				if ((tmp15)){
					HX_STACK_LINE(844)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(gl->SCISSOR_TEST);
					HX_STACK_LINE(845)
					{
						HX_STACK_LINE(845)
						Float tmp16 = clipRect->x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(845)
						int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(845)
						int x = tmp17;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(846)
						Float tmp18 = clipRect->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(846)
						int tmp19 = ::Math_obj::floor(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(846)
						int y = tmp19;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(847)
						Float tmp20 = clipRect->width;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(847)
						int tmp21 = ::Math_obj::floor(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(847)
						int width = tmp21;		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(848)
						Float tmp22 = clipRect->height;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(848)
						int tmp23 = ::Math_obj::floor(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(848)
						int height = tmp23;		HX_STACK_VAR(height,"height");
						HX_STACK_LINE(845)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
					}
				}
				HX_STACK_LINE(852)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp16 = glStack->buckets->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(852)
				bucket = tmp16;
				HX_STACK_LINE(854)
				{
					HX_STACK_LINE(854)
					::openfl::_internal::renderer::opengl::utils::BucketMode _g2 = bucket->mode;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(854)
					switch( (int)(_g2->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(856)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp17 = bucket;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(856)
							::openfl::_internal::renderer::RenderSession tmp18 = renderSession;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(856)
							::lime::utils::ArrayBufferView tmp19 = translationMatrix->toArray(true);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(856)
							renderSession->stencilManager->pushBucket(tmp17,tmp18,tmp19,null());
							HX_STACK_LINE(857)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp20 = bucket;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(857)
							::openfl::_internal::renderer::RenderSession tmp21 = renderSession;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(857)
							::openfl::display::DisplayObject tmp22 = object;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(857)
							::lime::utils::ArrayBufferView tmp23 = translationMatrix->toArray(true);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(857)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp24 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(tmp20,tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(857)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp24;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(858)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp25 = bucket;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(858)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp26 = shader;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(858)
							::openfl::_internal::renderer::RenderSession tmp27 = renderSession;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(858)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderFill(tmp25,tmp26,tmp27);
							HX_STACK_LINE(859)
							::openfl::display::DisplayObject tmp28 = object;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(859)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp29 = bucket;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(859)
							::openfl::_internal::renderer::RenderSession tmp30 = renderSession;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(859)
							renderSession->stencilManager->popBucket(tmp28,tmp29,tmp30);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(861)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp17 = bucket;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(861)
							::openfl::_internal::renderer::RenderSession tmp18 = renderSession;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(861)
							::openfl::display::DisplayObject tmp19 = object;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(861)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp20 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(tmp17,tmp18,tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(861)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp20;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(862)
							::openfl::_internal::renderer::opengl::utils::GLBucket tmp21 = bucket;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(862)
							::openfl::_internal::renderer::opengl::shaders2::Shader tmp22 = shader;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(862)
							::openfl::_internal::renderer::RenderSession tmp23 = renderSession;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(862)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderDrawTriangles(tmp21,tmp22,tmp23);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(864)
							bool tmp17 = batchDrawing;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(864)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(864)
							if ((tmp18)){
								HX_STACK_LINE(865)
								::openfl::_internal::renderer::RenderSession tmp19 = renderSession;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(865)
								::openfl::geom::Rectangle tmp20 = clipRect;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(865)
								renderSession->spriteBatch->begin(tmp19,tmp20);
							}
							HX_STACK_LINE(867)
							::openfl::_internal::renderer::opengl::utils::GraphicType tmp19 = bucket->graphicType;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(867)
							cpp::ArrayBase args = ::Type_obj::enumParameters(tmp19);		HX_STACK_VAR(args,"args");
							HX_STACK_LINE(868)
							::openfl::display::DisplayObject tmp20 = object;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(868)
							Dynamic tmp21 = args->__GetItem((int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(868)
							::openfl::display::Tilesheet tmp22 = ((::openfl::display::Tilesheet)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(868)
							Dynamic tmp23 = args->__GetItem((int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(868)
							Dynamic tmp24 = args->__GetItem((int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(868)
							bool tmp25 = ((bool)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(868)
							Dynamic tmp26 = args->__GetItem((int)3);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(868)
							int tmp27 = ((int)(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(868)
							Dynamic tmp28 = args->__GetItem((int)4);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(868)
							int tmp29 = ((int)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(868)
							renderSession->spriteBatch->renderTiles(tmp20,tmp22,((Array< Float >)(tmp23)),tmp25,tmp27,tmp29);
							HX_STACK_LINE(870)
							renderSession->spriteBatch->finish();
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(874)
				::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(875)
					Array< ::Dynamic > _g3 = bucket->lines;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(875)
					while((true)){
						HX_STACK_LINE(875)
						bool tmp17 = (_g2 < _g3->length);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(875)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(875)
						if ((tmp18)){
							HX_STACK_LINE(875)
							break;
						}
						HX_STACK_LINE(875)
						::openfl::_internal::renderer::opengl::utils::GLBucketData tmp19 = _g3->__get(_g2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(875)
						::openfl::_internal::renderer::opengl::utils::GLBucketData line = tmp19;		HX_STACK_VAR(line,"line");
						HX_STACK_LINE(875)
						++(_g2);
						HX_STACK_LINE(876)
						bool tmp20 = (line != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(876)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(876)
						if ((tmp20)){
							HX_STACK_LINE(876)
							int tmp22 = line->verts->length;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(876)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(876)
							tmp21 = (tmp23 > (int)0);
						}
						else{
							HX_STACK_LINE(876)
							tmp21 = false;
						}
						HX_STACK_LINE(876)
						if ((tmp21)){
							HX_STACK_LINE(877)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader tmp22 = renderSession->shaderManager->primitiveShader;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(877)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader shader = tmp22;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(879)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader tmp23 = shader;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(879)
							renderSession->shaderManager->setShader(tmp23,null());
							HX_STACK_LINE(881)
							{
								HX_STACK_LINE(881)
								int tmp24 = shader->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(881)
								int location = tmp24;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(881)
								::lime::utils::ArrayBufferView tmp25 = translationMatrix->toArray(true);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(881)
								::lime::utils::ArrayBufferView v = tmp25;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(881)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)3);
							}
							HX_STACK_LINE(882)
							{
								HX_STACK_LINE(882)
								int tmp24 = shader->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(882)
								int location = tmp24;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(882)
								::lime::utils::ArrayBufferView tmp25 = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(882)
								::lime::utils::ArrayBufferView v = tmp25;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(882)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)3);
							}
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								int tmp24 = shader->getUniformLocation(HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(883)
								int location = tmp24;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(883)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1f.call(location,(int)1);
							}
							HX_STACK_LINE(885)
							{
								HX_STACK_LINE(885)
								int tmp24 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(885)
								int location = tmp24;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(885)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,ct->alphaMultiplier);
							}
							HX_STACK_LINE(886)
							{
								HX_STACK_LINE(886)
								int tmp24 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(886)
								int location = tmp24;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(886)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(Float(ct->redOffset) / Float((int)255)),(Float(ct->greenOffset) / Float((int)255)),(Float(ct->blueOffset) / Float((int)255)),(Float(ct->alphaOffset) / Float((int)255)));
							}
							HX_STACK_LINE(888)
							{
								HX_STACK_LINE(888)
								::openfl::_internal::renderer::opengl::utils::VertexArray _this = line->vertexArray;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(888)
								{
									HX_STACK_LINE(888)
									::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(888)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
								}
							}
							HX_STACK_LINE(889)
							::openfl::_internal::renderer::opengl::utils::VertexArray tmp24 = line->vertexArray;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(889)
							shader->bindVertexArray(tmp24);
							HX_STACK_LINE(891)
							{
								HX_STACK_LINE(891)
								::lime::graphics::opengl::GLBuffer buffer = line->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(891)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
							}
							HX_STACK_LINE(892)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_elements.call(gl->TRIANGLE_STRIP,line->indices->length,gl->UNSIGNED_SHORT,(int)0);
						}
					}
				}
				HX_STACK_LINE(896)
				bool tmp17 = (clipRect != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(896)
				if ((tmp17)){
					HX_STACK_LINE(897)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(gl->SCISSOR_TEST);
				}
				HX_STACK_LINE(900)
				bool tmp18 = renderSession->spriteBatch->drawing;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(900)
				batchDrawing = tmp18;
				HX_STACK_LINE(901)
				bool tmp19 = batchDrawing;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(901)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(901)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(901)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(901)
				if ((tmp21)){
					HX_STACK_LINE(901)
					Dynamic tmp23 = localCoords;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(901)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(901)
					tmp22 = !(tmp24);
				}
				else{
					HX_STACK_LINE(901)
					tmp22 = false;
				}
				HX_STACK_LINE(901)
				if ((tmp22)){
					HX_STACK_LINE(902)
					::openfl::_internal::renderer::RenderSession tmp23 = renderSession;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(902)
					::openfl::geom::Rectangle tmp24 = clipRect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(902)
					renderSession->spriteBatch->begin(tmp23,tmp24);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderGraphics,(void))

Void GraphicsRenderer_obj::updateGraphics( ::openfl::display::DisplayObject object,::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","updateGraphics",0xa0662573,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.updateGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",907,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(909)
			::openfl::geom::Point tmp = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectPosition;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(909)
			::openfl::geom::Point _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(909)
			Float tmp1 = object->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(909)
			Float xa = tmp1;		HX_STACK_VAR(xa,"xa");
			HX_STACK_LINE(909)
			Float tmp2 = object->get_y();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(909)
			Float ya = tmp2;		HX_STACK_VAR(ya,"ya");
			HX_STACK_LINE(909)
			_this->x = xa;
			HX_STACK_LINE(909)
			_this->y = ya;
		}
		HX_STACK_LINE(911)
		bool tmp = (graphics->__bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(911)
		if ((tmp)){
			HX_STACK_LINE(912)
			::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(912)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds = tmp1;
		}
		else{
			HX_STACK_LINE(914)
			::openfl::geom::Rectangle tmp1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(914)
			::openfl::geom::Rectangle tmp2 = graphics->__bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(914)
			tmp1->copyFrom(tmp2);
		}
		HX_STACK_LINE(917)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(919)
		bool tmp1 = graphics->__dirty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(919)
		if ((tmp1)){
			HX_STACK_LINE(921)
			::openfl::display::Graphics tmp2 = graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(921)
			::lime::graphics::GLRenderContext tmp3 = gl;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(921)
			::openfl::_internal::renderer::opengl::utils::GLStack tmp4 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::getStack(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(921)
			glStack = tmp4;
		}
		HX_STACK_LINE(925)
		graphics->set___dirty(false);
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(927)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(927)
			while((true)){
				HX_STACK_LINE(927)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(927)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(927)
				if ((tmp3)){
					HX_STACK_LINE(927)
					break;
				}
				HX_STACK_LINE(927)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(927)
				::openfl::_internal::renderer::opengl::utils::GLBucket data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(927)
				++(_g);
				HX_STACK_LINE(928)
				data->reset();
				HX_STACK_LINE(929)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(929)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->push(tmp5);
			}
		}
		HX_STACK_LINE(932)
		glStack->reset();
		HX_STACK_LINE(934)
		{
			HX_STACK_LINE(934)
			int _g1 = glStack->lastIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(934)
			int tmp2 = graphics->__drawPaths->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(934)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(934)
			while((true)){
				HX_STACK_LINE(934)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(934)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(934)
				if ((tmp4)){
					HX_STACK_LINE(934)
					break;
				}
				HX_STACK_LINE(934)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(934)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(935)
				::openfl::_internal::renderer::opengl::utils::DrawPath tmp6 = graphics->__drawPaths->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(935)
				::openfl::_internal::renderer::opengl::utils::DrawPath path = tmp6;		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(937)
				{
					HX_STACK_LINE(937)
					::openfl::_internal::renderer::opengl::utils::GraphicType _g2 = path->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(937)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(939)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(939)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp8 = glStack;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(939)
							Dynamic tmp9 = localCoords;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(939)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildComplexPoly(tmp7,tmp8,tmp9);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(937)
							bool tmp7 = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(937)
							bool rounded = tmp7;		HX_STACK_VAR(rounded,"rounded");
							HX_STACK_LINE(940)
							{
								HX_STACK_LINE(941)
								bool tmp8 = rounded;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(941)
								if ((tmp8)){
									HX_STACK_LINE(942)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(942)
									::openfl::_internal::renderer::opengl::utils::GLStack tmp10 = glStack;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(942)
									Dynamic tmp11 = localCoords;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(942)
									::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRoundedRectangle(tmp9,tmp10,tmp11);
								}
								else{
									HX_STACK_LINE(944)
									::openfl::_internal::renderer::opengl::utils::DrawPath tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(944)
									::openfl::_internal::renderer::opengl::utils::GLStack tmp10 = glStack;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(944)
									Dynamic tmp11 = localCoords;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(944)
									::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRectangle(tmp9,tmp10,tmp11);
								}
							}
						}
						;break;
						case (int)2: case (int)3: {
							HX_STACK_LINE(947)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(947)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp8 = glStack;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(947)
							Dynamic tmp9 = localCoords;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(947)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildCircle(tmp7,tmp8,tmp9);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(949)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(949)
							::openfl::display::DisplayObject tmp8 = object;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(949)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp9 = glStack;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(949)
							Dynamic tmp10 = localCoords;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(949)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildDrawTriangles(tmp7,tmp8,tmp9,tmp10);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(951)
							::openfl::_internal::renderer::opengl::utils::DrawPath tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(951)
							::openfl::_internal::renderer::opengl::utils::GLStack tmp8 = glStack;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(951)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(tmp7,tmp8);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(937)
							::openfl::geom::Matrix tmp7 = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(937)
							::openfl::geom::Matrix m = tmp7;		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(953)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix = m;
						}
						;break;
					}
				}
				HX_STACK_LINE(957)
				(glStack->lastIndex)++;
			}
		}
		HX_STACK_LINE(960)
		{
			HX_STACK_LINE(960)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(960)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(960)
			while((true)){
				HX_STACK_LINE(960)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(960)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(960)
				if ((tmp3)){
					HX_STACK_LINE(960)
					break;
				}
				HX_STACK_LINE(960)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(960)
				::openfl::_internal::renderer::opengl::utils::GLBucket bucket = tmp4;		HX_STACK_VAR(bucket,"bucket");
				HX_STACK_LINE(960)
				++(_g);
				HX_STACK_LINE(962)
				bool tmp5 = bucket->uploadTileBuffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(962)
				if ((tmp5)){
					HX_STACK_LINE(965)
					::openfl::geom::Rectangle tmp6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(965)
					Float tmp7 = tmp6->get_left();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(965)
					int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(966)
					::openfl::geom::Rectangle tmp9 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(966)
					Float tmp10 = tmp9->get_top();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(966)
					int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(967)
					::openfl::geom::Rectangle tmp12 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(967)
					Float tmp13 = tmp12->get_right();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(967)
					int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(968)
					::openfl::geom::Rectangle tmp15 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(968)
					Float tmp16 = tmp15->get_bottom();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(968)
					int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(964)
					bucket->uploadTile(tmp8,tmp11,tmp14,tmp17);
				}
				HX_STACK_LINE(973)
				bucket->optimize();
			}
		}
		HX_STACK_LINE(976)
		glStack->upload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,updateGraphics,(void))

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::prepareBucket( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareBucket",0x0dd304b2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",980,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_LINE(981)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(982)
	{
		HX_STACK_LINE(982)
		::openfl::_internal::renderer::opengl::utils::FillType _g = path->fill;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(982)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(982)
				Float tmp = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(982)
				Float a = tmp;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(982)
				int tmp1 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(982)
				int c = tmp1;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(983)
				{
					HX_STACK_LINE(984)
					int tmp2 = path->fillIndex;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(984)
					::openfl::_internal::renderer::opengl::utils::GLStack tmp3 = glStack;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(984)
					::openfl::_internal::renderer::opengl::utils::GLBucket tmp4 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(tmp2,tmp3,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Fill);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(984)
					bucket = tmp4;
					HX_STACK_LINE(985)
					bool tmp5 = (c == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(985)
					if ((tmp5)){
						HX_STACK_LINE(985)
						bucket->color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
					}
					else{
						HX_STACK_LINE(985)
						int tmp6 = (int(c) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(985)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(985)
						Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(985)
						int tmp9 = (int(c) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(985)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(985)
						Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(985)
						int tmp12 = (int(c) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						bucket->color = Array_obj< Float >::__new().Add(tmp8).Add(tmp11).Add(tmp13);
					}
					HX_STACK_LINE(986)
					Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(986)
					bucket->color[(int)3] = tmp6;
					HX_STACK_LINE(987)
					bucket->uploadTileBuffer = true;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(982)
				bool tmp = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(3);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(982)
				bool s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(982)
				bool tmp1 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(982)
				bool r = tmp1;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(982)
				::openfl::geom::Matrix tmp2 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(982)
				::openfl::geom::Matrix m = tmp2;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(982)
				::openfl::display::BitmapData tmp3 = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(982)
				::openfl::display::BitmapData b = tmp3;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(989)
				{
					HX_STACK_LINE(990)
					int tmp4 = path->fillIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(990)
					::openfl::_internal::renderer::opengl::utils::GLStack tmp5 = glStack;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(990)
					::openfl::_internal::renderer::opengl::utils::GLBucket tmp6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(tmp4,tmp5,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(990)
					bucket = tmp6;
					HX_STACK_LINE(991)
					bucket->bitmap = b;
					HX_STACK_LINE(992)
					bucket->textureRepeat = r;
					HX_STACK_LINE(993)
					bucket->textureSmooth = s;
					HX_STACK_LINE(994)
					::lime::graphics::GLRenderContext tmp7 = glStack->gl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(994)
					::lime::graphics::opengl::GLTexture tmp8 = b->getTexture(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(994)
					bucket->texture = tmp8;
					HX_STACK_LINE(995)
					bucket->uploadTileBuffer = true;
					HX_STACK_LINE(998)
					::openfl::geom::Matrix pMatrix;		HX_STACK_VAR(pMatrix,"pMatrix");
					HX_STACK_LINE(999)
					bool tmp9 = (m == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(999)
					if ((tmp9)){
						HX_STACK_LINE(1000)
						::openfl::geom::Matrix tmp10 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1000)
						pMatrix = tmp10;
					}
					else{
						HX_STACK_LINE(1002)
						::openfl::geom::Matrix tmp10 = ::openfl::geom::Matrix_obj::__new(m->a,m->b,m->c,m->d,m->tx,m->ty);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1002)
						pMatrix = tmp10;
					}
					HX_STACK_LINE(1005)
					pMatrix->invert();
					HX_STACK_LINE(1006)
					Float tmp10 = (Float((int)1) / Float(b->width));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1006)
					Float tmp11 = (Float((int)1) / Float(b->height));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1006)
					pMatrix->scale(tmp10,tmp11);
					HX_STACK_LINE(1007)
					Float tx = pMatrix->tx;		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(1008)
					Float ty = pMatrix->ty;		HX_STACK_VAR(ty,"ty");
					HX_STACK_LINE(1009)
					pMatrix->tx = (int)0;
					HX_STACK_LINE(1010)
					pMatrix->ty = (int)0;
					HX_STACK_LINE(1012)
					bucket->textureTL->x = tx;
					HX_STACK_LINE(1013)
					bucket->textureTL->y = ty;
					HX_STACK_LINE(1014)
					Float tmp12 = (tx + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1014)
					bucket->textureBR->x = tmp12;
					HX_STACK_LINE(1015)
					Float tmp13 = (ty + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1015)
					bucket->textureBR->y = tmp13;
					HX_STACK_LINE(1017)
					bucket->textureMatrix = pMatrix;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1019)
				int tmp = path->fillIndex;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1019)
				::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = glStack;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1019)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(tmp,tmp1,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Line);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1019)
				bucket = tmp2;
				HX_STACK_LINE(1020)
				bucket->uploadTileBuffer = false;
			}
		}
	}
	HX_STACK_LINE(1023)
	{
		HX_STACK_LINE(1023)
		::openfl::_internal::renderer::opengl::utils::GraphicType _g = path->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1023)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(1025)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTriangles;
				HX_STACK_LINE(1026)
				bucket->uploadTileBuffer = false;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1028)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTiles;
				HX_STACK_LINE(1029)
				bucket->uploadTileBuffer = false;
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1033)
	bucket->graphicType = path->type;
	HX_STACK_LINE(1034)
	::openfl::geom::Matrix tmp = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1034)
	bucket->overrideMatrix = tmp;
	HX_STACK_LINE(1036)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp1 = bucket;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1036)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,prepareBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::getBucket( ::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","getBucket",0x4967a481,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.getBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1039,0xd295150c)
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1040)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1040)
	::openfl::_internal::renderer::opengl::utils::GLBucket b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1041)
	bool tmp1 = (b == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1041)
	if ((tmp1)){
		HX_STACK_LINE(1042)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = ::openfl::_internal::renderer::opengl::utils::GLBucket_obj::__new(glStack->gl);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1042)
		b = tmp2;
	}
	HX_STACK_LINE(1044)
	b->mode = mode;
	HX_STACK_LINE(1045)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1045)
	glStack->buckets->push(tmp2);
	HX_STACK_LINE(1046)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1046)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,getBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::switchBucket( int fillIndex,::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","switchBucket",0xb3071d3d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.switchBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1049,0xd295150c)
	HX_STACK_ARG(fillIndex,"fillIndex")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1051)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(1053)
	{
		HX_STACK_LINE(1053)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1053)
		Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1053)
		while((true)){
			HX_STACK_LINE(1053)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1053)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1053)
			if ((tmp1)){
				HX_STACK_LINE(1053)
				break;
			}
			HX_STACK_LINE(1053)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1053)
			::openfl::_internal::renderer::opengl::utils::GLBucket b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(1053)
			++(_g);
			HX_STACK_LINE(1054)
			bool tmp3 = (b->fillIndex == fillIndex);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1054)
			if ((tmp3)){
				HX_STACK_LINE(1055)
				bucket = b;
				HX_STACK_LINE(1056)
				break;
			}
		}
	}
	HX_STACK_LINE(1060)
	bool tmp = (bucket == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1060)
	if ((tmp)){
		HX_STACK_LINE(1061)
		::openfl::_internal::renderer::opengl::utils::GLStack tmp1 = glStack;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1061)
		::openfl::_internal::renderer::opengl::utils::BucketMode tmp2 = mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1061)
		::openfl::_internal::renderer::opengl::utils::GLBucket tmp3 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::getBucket(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		bucket = tmp3;
	}
	HX_STACK_LINE(1064)
	bucket->dirty = true;
	HX_STACK_LINE(1065)
	bucket->fillIndex = fillIndex;
	HX_STACK_LINE(1067)
	::openfl::_internal::renderer::opengl::utils::GLBucket tmp1 = bucket;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1067)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,switchBucket,return )

::openfl::_internal::renderer::opengl::shaders2::Shader GraphicsRenderer_obj::prepareShader( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::DisplayObject object,::lime::utils::ArrayBufferView translationMatrix){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareShader",0x5c56df6d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareShader","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1070,0xd295150c)
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(translationMatrix,"translationMatrix")
	HX_STACK_LINE(1071)
	::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
	HX_STACK_LINE(1072)
	::openfl::_internal::renderer::opengl::shaders2::Shader shader = null();		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(1074)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1074)
	{
		HX_STACK_LINE(1074)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g = bucket->mode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1074)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1076)
				tmp = renderSession->shaderManager->fillShader;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1078)
				tmp = renderSession->shaderManager->patternFillShader;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1080)
				tmp = renderSession->shaderManager->drawTrianglesShader;
			}
			;break;
			default: {
				HX_STACK_LINE(1082)
				tmp = null();
			}
		}
	}
	HX_STACK_LINE(1074)
	shader = tmp;
	HX_STACK_LINE(1085)
	bool tmp1 = (shader == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1085)
	if ((tmp1)){
		HX_STACK_LINE(1085)
		return null();
	}
	HX_STACK_LINE(1087)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp2 = shader;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1087)
	bool tmp3 = renderSession->shaderManager->setShader(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1087)
	bool newShader = tmp3;		HX_STACK_VAR(newShader,"newShader");
	HX_STACK_LINE(1090)
	{
		HX_STACK_LINE(1090)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uAlpha","\xa9","\x4e","\x85","\x7c"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1090)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1090)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1f.call(location,object->__worldAlpha);
	}
	HX_STACK_LINE(1091)
	{
		HX_STACK_LINE(1091)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1091)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1091)
		::lime::utils::ArrayBufferView tmp5 = renderSession->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1091)
		::lime::utils::ArrayBufferView v = tmp5;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(1091)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)3);
	}
	HX_STACK_LINE(1093)
	::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
	HX_STACK_LINE(1094)
	{
		HX_STACK_LINE(1094)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1094)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1094)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,ct->alphaMultiplier);
	}
	HX_STACK_LINE(1095)
	{
		HX_STACK_LINE(1095)
		int tmp4 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1095)
		int location = tmp4;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1095)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(Float(ct->redOffset) / Float((int)255)),(Float(ct->greenOffset) / Float((int)255)),(Float(ct->blueOffset) / Float((int)255)),(Float(ct->alphaOffset) / Float((int)255)));
	}
	HX_STACK_LINE(1098)
	{
		HX_STACK_LINE(1098)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g = bucket->mode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1098)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1100)
				{
					HX_STACK_LINE(1100)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1100)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1100)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(translationMatrix->buffer),(int)3);
				}
				HX_STACK_LINE(1101)
				{
					HX_STACK_LINE(1101)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1101)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1101)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1101)
					{
						HX_STACK_LINE(1101)
						cpp::ArrayBase array = bucket->color;		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(1101)
						::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(1101)
						bool tmp6 = (array != null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1101)
						if ((tmp6)){
							HX_STACK_LINE(1101)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1101)
							{
								HX_STACK_LINE(1101)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1101)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1101)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1101)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(1101)
								int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1101)
								_this->byteLength = tmp9;
								HX_STACK_LINE(1101)
								::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1101)
								{
									HX_STACK_LINE(1101)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1101)
									int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1101)
									::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1101)
									this2 = tmp12;
									HX_STACK_LINE(1101)
									tmp10 = this2;
								}
								HX_STACK_LINE(1101)
								_this->buffer = tmp10;
								HX_STACK_LINE(1101)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(1101)
								tmp7 = _this;
							}
							HX_STACK_LINE(1101)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(1101)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
						HX_STACK_LINE(1101)
						tmp5 = this1;
					}
					HX_STACK_LINE(1101)
					::lime::utils::ArrayBufferView v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1101)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4fv.call(location,hx::DynamicPtr(v->buffer));
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1103)
				{
					HX_STACK_LINE(1103)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uTranslationMatrix","\xdd","\x91","\xa9","\x55"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1103)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1103)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(translationMatrix->buffer),(int)3);
				}
				HX_STACK_LINE(1104)
				{
					HX_STACK_LINE(1104)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uPatternTL","\x93","\x2c","\xdd","\x25"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1104)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1104)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2f.call(location,bucket->textureTL->x,bucket->textureTL->y);
				}
				HX_STACK_LINE(1105)
				{
					HX_STACK_LINE(1105)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uPatternBR","\xeb","\x1c","\xdd","\x25"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1105)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1105)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2f.call(location,bucket->textureBR->x,bucket->textureBR->y);
				}
				HX_STACK_LINE(1106)
				{
					HX_STACK_LINE(1106)
					int tmp4 = shader->getUniformLocation(HX_HCSTRING("uPatternMatrix","\xfc","\xb6","\xb8","\xb5"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1106)
					int location = tmp4;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1106)
					::lime::utils::ArrayBufferView tmp5 = bucket->textureMatrix->toArray(true);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1106)
					::lime::utils::ArrayBufferView v = tmp5;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1106)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)3);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1108)
				bool tmp4 = (bucket->texture != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1108)
				if ((tmp4)){
					HX_STACK_LINE(1109)
					int tmp5 = shader->getUniformLocation(HX_HCSTRING("uUseTexture","\x29","\xf4","\xeb","\x7d"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1109)
					int location = tmp5;		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1109)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)1);
				}
				else{
					HX_STACK_LINE(1111)
					{
						HX_STACK_LINE(1111)
						int tmp5 = shader->getUniformLocation(HX_HCSTRING("uUseTexture","\x29","\xf4","\xeb","\x7d"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1111)
						int location = tmp5;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1111)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)0);
					}
					HX_STACK_LINE(1112)
					{
						HX_STACK_LINE(1112)
						int tmp5 = shader->getUniformLocation(HX_HCSTRING("uColor","\xae","\x18","\x4b","\xa5"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1112)
						int location = tmp5;		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1112)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1112)
						{
							HX_STACK_LINE(1112)
							cpp::ArrayBase array = bucket->color;		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(1112)
							::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1112)
							bool tmp7 = (array != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1112)
							if ((tmp7)){
								HX_STACK_LINE(1112)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1112)
								{
									HX_STACK_LINE(1112)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1112)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1112)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1112)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(1112)
									int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1112)
									_this->byteLength = tmp10;
									HX_STACK_LINE(1112)
									::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1112)
									{
										HX_STACK_LINE(1112)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(1112)
										int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1112)
										::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1112)
										this2 = tmp13;
										HX_STACK_LINE(1112)
										tmp11 = this2;
									}
									HX_STACK_LINE(1112)
									_this->buffer = tmp11;
									HX_STACK_LINE(1112)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(1112)
									tmp8 = _this;
								}
								HX_STACK_LINE(1112)
								this1 = tmp8;
							}
							else{
								HX_STACK_LINE(1112)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
							HX_STACK_LINE(1112)
							tmp6 = this1;
						}
						HX_STACK_LINE(1112)
						::lime::utils::ArrayBufferView v = tmp6;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1112)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4fv.call(location,hx::DynamicPtr(v->buffer));
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1117)
	::openfl::_internal::renderer::opengl::shaders2::Shader tmp4 = shader;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1117)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,prepareShader,return )

Void GraphicsRenderer_obj::renderFill( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderFill",0x880196f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderFill","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1120,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1121)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1123)
		bool tmp = (bucket->mode == ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1123)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1123)
		if ((tmp)){
			HX_STACK_LINE(1123)
			tmp1 = (bucket->texture != null());
		}
		else{
			HX_STACK_LINE(1123)
			tmp1 = false;
		}
		HX_STACK_LINE(1123)
		if ((tmp1)){
			HX_STACK_LINE(1124)
			::lime::graphics::GLRenderContext tmp2 = gl;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1124)
			::openfl::_internal::renderer::opengl::utils::GLBucket tmp3 = bucket;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1124)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(tmp2,tmp3);
		}
		HX_STACK_LINE(1127)
		{
			HX_STACK_LINE(1127)
			::lime::graphics::opengl::GLBuffer buffer = bucket->tileBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1127)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1128)
		{
			HX_STACK_LINE(1128)
			int tmp2 = shader->getAttribLocation(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1128)
			int indx = tmp2;		HX_STACK_VAR(indx,"indx");
			HX_STACK_LINE(1128)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)4,gl->SHORT,false,(int)0,(int)0);
		}
		HX_STACK_LINE(1129)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderFill,(void))

Void GraphicsRenderer_obj::renderDrawTriangles( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderDrawTriangles",0x793244f2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1132,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1133)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1135)
		{
			HX_STACK_LINE(1135)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1135)
			Array< ::Dynamic > _g1 = bucket->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1135)
			while((true)){
				HX_STACK_LINE(1135)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1135)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1135)
				if ((tmp1)){
					HX_STACK_LINE(1135)
					break;
				}
				HX_STACK_LINE(1135)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1135)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = tmp2;		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1135)
				++(_g);
				HX_STACK_LINE(1136)
				bool tmp3 = fill->available;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1136)
				if ((tmp3)){
					HX_STACK_LINE(1136)
					continue;
				}
				HX_STACK_LINE(1138)
				::lime::graphics::GLRenderContext tmp4 = gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1138)
				::openfl::_internal::renderer::opengl::utils::GLBucket tmp5 = bucket;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1138)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(tmp4,tmp5);
				HX_STACK_LINE(1139)
				{
					HX_STACK_LINE(1139)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = fill->vertexArray;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1139)
					{
						HX_STACK_LINE(1139)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1139)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
					}
				}
				HX_STACK_LINE(1140)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp6 = fill->vertexArray;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1140)
				shader->bindVertexArray(tmp6);
				HX_STACK_LINE(1142)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLES,fill->glStart,fill->glLength);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderDrawTriangles,(void))

Void GraphicsRenderer_obj::bindTexture( ::lime::graphics::GLRenderContext gl,::openfl::_internal::renderer::opengl::utils::GLBucket bucket){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","bindTexture",0x486a4dbf,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.bindTexture","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1146,0xd295150c)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_LINE(1148)
		{
			HX_STACK_LINE(1148)
			::lime::graphics::opengl::GLTexture texture = bucket->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1148)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1151)
		bool tmp = bucket->textureRepeat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1151)
		if ((tmp)){
			HX_STACK_LINE(1152)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->REPEAT);
			HX_STACK_LINE(1153)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->REPEAT);
		}
		else{
			HX_STACK_LINE(1155)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
			HX_STACK_LINE(1156)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		}
		HX_STACK_LINE(1159)
		bool tmp1 = bucket->textureSmooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1159)
		if ((tmp1)){
			HX_STACK_LINE(1160)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
			HX_STACK_LINE(1161)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
		}
		else{
			HX_STACK_LINE(1163)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
			HX_STACK_LINE(1164)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,bindTexture,(void))

bool GraphicsRenderer_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","isCCW",0xc37e766e,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.isCCW","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1169,0xd295150c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(1170)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1170)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1170)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1170)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1170)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1170)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1170)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1170)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1170)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,isCCW,return )

Array< Float > GraphicsRenderer_obj::hex2rgb( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgb",0x2f5bdf17,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgb","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1173,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1174)
	bool tmp = (hex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1174)
	if ((tmp)){
		HX_STACK_LINE(1174)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1174)
		int tmp1 = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1174)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1174)
		Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1174)
		int tmp4 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1174)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1174)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1174)
		int tmp7 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1174)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1174)
		return Array_obj< Float >::__new().Add(tmp3).Add(tmp6).Add(tmp8);
	}
	HX_STACK_LINE(1174)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgb,return )

Array< Float > GraphicsRenderer_obj::hex2rgba( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgba",0x4107556a,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgba","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1177,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1178)
	bool tmp = (hex == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1178)
	if ((tmp)){
		HX_STACK_LINE(1178)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1178)
		int tmp1 = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1178)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1178)
		Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1178)
		int tmp4 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1178)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1178)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1178)
		int tmp7 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1178)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1178)
		int tmp9 = (int(hex) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1178)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1178)
		Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1178)
		return Array_obj< Float >::__new().Add(tmp3).Add(tmp6).Add(tmp8).Add(tmp11);
	}
	HX_STACK_LINE(1178)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgba,return )


GraphicsRenderer_obj::GraphicsRenderer_obj()
{
}

bool GraphicsRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hex2rgb") ) { outValue = hex2rgb_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hex2rgba") ) { outValue = hex2rgba_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buildLine") ) { outValue = buildLine_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buildPoly") ) { outValue = buildPoly_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBucket") ) { outValue = getBucket_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { outValue = bucketPool; return true;  }
		if (HX_FIELD_EQ(inName,"renderFill") ) { outValue = renderFill_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { outValue = lastTexture; return true;  }
		if (HX_FIELD_EQ(inName,"buildCircle") ) { outValue = buildCircle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { outValue = bindTexture_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { outValue = objectBounds; return true;  }
		if (HX_FIELD_EQ(inName,"switchBucket") ) { outValue = switchBucket_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"prepareBucket") ) { outValue = prepareBucket_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prepareShader") ) { outValue = prepareShader_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { outValue = objectPosition; return true;  }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { outValue = lastBucketMode; return true;  }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { outValue = overrideMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"buildRectangle") ) { outValue = buildRectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"buildDrawTiles") ) { outValue = buildDrawTiles_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderGraphics") ) { outValue = renderGraphics_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateGraphics") ) { outValue = updateGraphics_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { outValue = lastVertsBuffer; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { outValue = graphicsDataPool; return true;  }
		if (HX_FIELD_EQ(inName,"buildComplexPoly") ) { outValue = buildComplexPoly_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { outValue = lastTextureRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { outValue = lastTextureSmooth; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildDrawTriangles") ) { outValue = buildDrawTriangles_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawTriangles") ) { outValue = renderDrawTriangles_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { outValue = fillVertexAttributes; return true;  }
		if (HX_FIELD_EQ(inName,"quadraticBezierCurve") ) { outValue = quadraticBezierCurve_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"buildRoundedRectangle") ) { outValue = buildRoundedRectangle_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { outValue = primitiveVertexAttributes; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { outValue = drawTrianglesVertexAttributes; return true;  }
	}
	return false;
}

bool GraphicsRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { bucketPool=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { lastTexture=ioValue.Cast< ::lime::graphics::opengl::GLTexture >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { objectBounds=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { objectPosition=ioValue.Cast< ::openfl::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { lastBucketMode=ioValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketMode >(); return true; }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { overrideMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { lastVertsBuffer=ioValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { graphicsDataPool=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { lastTextureRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { lastTextureSmooth=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { fillVertexAttributes=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { primitiveVertexAttributes=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { drawTrianglesVertexAttributes=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::fillVertexAttributes,HX_HCSTRING("fillVertexAttributes","\xfe","\x4d","\x43","\xc4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::drawTrianglesVertexAttributes,HX_HCSTRING("drawTrianglesVertexAttributes","\x82","\x0b","\xa2","\x6b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::primitiveVertexAttributes,HX_HCSTRING("primitiveVertexAttributes","\x22","\x90","\xbd","\x30")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::graphicsDataPool,HX_HCSTRING("graphicsDataPool","\x11","\x58","\x10","\xd8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GraphicsRenderer_obj::bucketPool,HX_HCSTRING("bucketPool","\x66","\x0e","\x8e","\xe6")},
	{hx::fsFloat,(void *) &GraphicsRenderer_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &GraphicsRenderer_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(void *) &GraphicsRenderer_obj::objectPosition,HX_HCSTRING("objectPosition","\x88","\x32","\xb7","\xc4")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &GraphicsRenderer_obj::objectBounds,HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(void *) &GraphicsRenderer_obj::lastVertsBuffer,HX_HCSTRING("lastVertsBuffer","\x8c","\x5e","\xcd","\x73")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketMode*/ ,(void *) &GraphicsRenderer_obj::lastBucketMode,HX_HCSTRING("lastBucketMode","\xe3","\xf6","\x18","\x58")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(void *) &GraphicsRenderer_obj::lastTexture,HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53")},
	{hx::fsBool,(void *) &GraphicsRenderer_obj::lastTextureRepeat,HX_HCSTRING("lastTextureRepeat","\x60","\x72","\x33","\xbd")},
	{hx::fsBool,(void *) &GraphicsRenderer_obj::lastTextureSmooth,HX_HCSTRING("lastTextureSmooth","\x33","\xe3","\x21","\xbe")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &GraphicsRenderer_obj::overrideMatrix,HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#endif

hx::Class GraphicsRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fillVertexAttributes","\xfe","\x4d","\x43","\xc4"),
	HX_HCSTRING("drawTrianglesVertexAttributes","\x82","\x0b","\xa2","\x6b"),
	HX_HCSTRING("primitiveVertexAttributes","\x22","\x90","\xbd","\x30"),
	HX_HCSTRING("graphicsDataPool","\x11","\x58","\x10","\xd8"),
	HX_HCSTRING("bucketPool","\x66","\x0e","\x8e","\xe6"),
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("objectPosition","\x88","\x32","\xb7","\xc4"),
	HX_HCSTRING("objectBounds","\x94","\x92","\x27","\x40"),
	HX_HCSTRING("lastVertsBuffer","\x8c","\x5e","\xcd","\x73"),
	HX_HCSTRING("lastBucketMode","\xe3","\xf6","\x18","\x58"),
	HX_HCSTRING("lastTexture","\x25","\x7d","\x8c","\x53"),
	HX_HCSTRING("lastTextureRepeat","\x60","\x72","\x33","\xbd"),
	HX_HCSTRING("lastTextureSmooth","\x33","\xe3","\x21","\xbe"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("buildCircle","\xde","\x57","\x7e","\xa6"),
	HX_HCSTRING("buildComplexPoly","\x0e","\x38","\x43","\x78"),
	HX_HCSTRING("buildLine","\x42","\x4e","\xef","\xe7"),
	HX_HCSTRING("buildPoly","\x9a","\xb4","\x98","\xea"),
	HX_HCSTRING("buildRectangle","\x21","\x03","\x13","\x95"),
	HX_HCSTRING("buildRoundedRectangle","\x90","\xb9","\xc2","\x82"),
	HX_HCSTRING("buildDrawTriangles","\xf9","\xd3","\xa5","\xa2"),
	HX_HCSTRING("buildDrawTiles","\xd3","\x61","\xd6","\x53"),
	HX_HCSTRING("quadraticBezierCurve","\x18","\x78","\x73","\xf8"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderGraphics","\x41","\x66","\x3f","\x86"),
	HX_HCSTRING("updateGraphics","\xf4","\xeb","\x91","\x47"),
	HX_HCSTRING("prepareBucket","\x51","\x49","\xe3","\x94"),
	HX_HCSTRING("getBucket","\xa0","\x6d","\xf3","\x4a"),
	HX_HCSTRING("switchBucket","\x7e","\x91","\xbc","\xea"),
	HX_HCSTRING("prepareShader","\x0c","\x24","\x67","\xe3"),
	HX_HCSTRING("renderFill","\xf9","\xc8","\xc5","\xe0"),
	HX_HCSTRING("renderDrawTriangles","\xd1","\x4a","\xa2","\x33"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("hex2rgb","\x76","\xd2","\x3c","\x80"),
	HX_HCSTRING("hex2rgba","\x2b","\x55","\xfb","\xb4"),
	::String(null()) };

void GraphicsRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer","\x0f","\x64","\xe5","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicsRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsRenderer_obj >;
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

void GraphicsRenderer_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",49,0xd295150c)
		{
			HX_STACK_LINE(50)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			return Array_obj< ::Dynamic >::__new().Add(tmp);
		}
		return null();
	}
};
	fillVertexAttributes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",52,0xd295150c)
		{
			HX_STACK_LINE(53)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2);
		}
		return null();
	}
};
	drawTrianglesVertexAttributes= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",57,0xd295150c)
		{
			HX_STACK_LINE(58)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(59)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5126,false,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(57)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
		}
		return null();
	}
};
	primitiveVertexAttributes= _Function_0_3::Block();
	graphicsDataPool= Array_obj< ::Dynamic >::__new();
	bucketPool= Array_obj< ::Dynamic >::__new();
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
	objectPosition= ::openfl::geom::Point_obj::__new(null(),null());
	objectBounds= ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
