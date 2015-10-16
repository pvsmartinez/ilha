#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#include <openfl/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFormat
#include <openfl/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#include <openfl/display3D/_Context3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display3D{

Void Context3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D.Context3D","new",0x4f12c019,"openfl.display3D.Context3D.new","openfl/display3D/Context3D.hx",59,0xc899cbb9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->disposed = false;
	HX_STACK_LINE(63)
	this->_yFlip = (int)1;
	HX_STACK_LINE(65)
	this->vertexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(66)
	this->indexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->programsCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(68)
	this->texturesCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(69)
	this->samplerParameters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int tmp = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			if ((tmp2)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(73)
			::openfl::display3D::_Context3D::SamplerState tmp4 = ::openfl::display3D::_Context3D::SamplerState_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			this->samplerParameters[i] = tmp4;
			HX_STACK_LINE(74)
			::openfl::display3D::_Context3D::SamplerState tmp5 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			tmp5->wrap = ::openfl::display3D::Context3DWrapMode_obj::CLAMP;
			HX_STACK_LINE(75)
			::openfl::display3D::_Context3D::SamplerState tmp6 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			tmp6->filter = ::openfl::display3D::Context3DTextureFilter_obj::LINEAR;
			HX_STACK_LINE(76)
			::openfl::display3D::_Context3D::SamplerState tmp7 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			tmp7->mipfilter = ::openfl::display3D::Context3DMipFilter_obj::MIPNONE;
		}
	}
	HX_STACK_LINE(80)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::openfl::display::Stage stage = tmp->stage;		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(82)
	::openfl::display::OpenGLView tmp1 = ::openfl::display::OpenGLView_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	this->ogl = tmp1;
	HX_STACK_LINE(83)
	::openfl::display::OpenGLView tmp2 = this->ogl;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	::openfl::geom::Rectangle tmp3 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,stage->stageWidth,stage->stageHeight);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	tmp2->set_scrollRect(tmp3);
	HX_STACK_LINE(84)
	::openfl::display::OpenGLView tmp4 = this->ogl;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	::openfl::geom::Rectangle tmp5 = tmp4->get_scrollRect();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	::openfl::geom::Rectangle tmp6 = tmp5->clone();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(84)
	this->scrollRect = tmp6;
	HX_STACK_LINE(85)
	::openfl::display::OpenGLView tmp7 = this->ogl;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	int tmp8 = stage->stageWidth;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	tmp7->set_width(tmp8);
	HX_STACK_LINE(86)
	::openfl::display::OpenGLView tmp9 = this->ogl;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	int tmp10 = stage->stageHeight;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	tmp9->set_height(tmp10);
	HX_STACK_LINE(88)
	::openfl::display::OpenGLView tmp11 = this->ogl;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(88)
	stage->addChildAt(tmp11,(int)0);
}
;
	return null();
}

//Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct();
	return _result_;}

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(17664);
	HX_STACK_FRAME("openfl.display3D.Context3D","clear",0xf8808186,"openfl.display3D.Context3D.clear","openfl/display3D/Context3D.hx",93,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(stencil,"stencil")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(95)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(97)
			this->__updateBlendStatus();
			HX_STACK_LINE(98)
			this->drawing = true;
		}
		HX_STACK_LINE(103)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_mask.call(true);
		HX_STACK_LINE(105)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call(red,green,blue,alpha);
		HX_STACK_LINE(106)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_depth.call(depth);
		HX_STACK_LINE(107)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_stencil.call(stencil);
		HX_STACK_LINE(109)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
	HX_STACK_FRAME("openfl.display3D.Context3D","configureBackBuffer",0x7210edc6,"openfl.display3D.Context3D.configureBackBuffer","openfl/display3D/Context3D.hx",114,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
{
		HX_STACK_LINE(116)
		bool tmp = enableDepthAndStencil;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		if ((tmp)){
			HX_STACK_LINE(119)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2929);
			HX_STACK_LINE(120)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2960);
		}
		HX_STACK_LINE(125)
		::openfl::display::OpenGLView tmp1 = this->ogl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		tmp1->set_scrollRect(tmp2);
		HX_STACK_LINE(126)
		::openfl::display::OpenGLView tmp3 = this->ogl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		tmp3->set_width(tmp4);
		HX_STACK_LINE(127)
		::openfl::display::OpenGLView tmp5 = this->ogl;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		tmp5->set_height(tmp6);
		HX_STACK_LINE(128)
		::openfl::display::OpenGLView tmp7 = this->ogl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		::openfl::geom::Rectangle tmp8 = tmp7->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		::openfl::geom::Rectangle tmp9 = tmp8->clone();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		this->scrollRect = tmp9;
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::openfl::geom::Rectangle tmp10 = this->scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			int x = tmp12;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(129)
			::openfl::geom::Rectangle tmp13 = this->scrollRect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			int y = tmp15;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(129)
			::openfl::geom::Rectangle tmp16 = this->scrollRect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(129)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(129)
			int width1 = tmp18;		HX_STACK_VAR(width1,"width1");
			HX_STACK_LINE(129)
			::openfl::geom::Rectangle tmp19 = this->scrollRect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(129)
			Float tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(129)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(129)
			int height1 = tmp21;		HX_STACK_VAR(height1,"height1");
			HX_STACK_LINE(129)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call(x,y,width1,height1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,configureBackBuffer,(void))

::openfl::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createCubeTexture",0xbb69e843,"openfl.display3D.Context3D.createCubeTexture","openfl/display3D/Context3D.hx",134,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(136)
		int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::lime::graphics::opengl::GLTexture tmp1 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		::openfl::display3D::textures::CubeTexture tmp3 = ::openfl::display3D::textures::CubeTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		::openfl::display3D::textures::CubeTexture texture = tmp3;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(137)
		::openfl::display3D::textures::CubeTexture tmp4 = texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		this->texturesCreated->push(tmp4);
		HX_STACK_LINE(138)
		::openfl::display3D::textures::CubeTexture tmp5 = texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

::openfl::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices){
	HX_STACK_FRAME("openfl.display3D.Context3D","createIndexBuffer",0x3b80e18f,"openfl.display3D.Context3D.createIndexBuffer","openfl/display3D/Context3D.hx",143,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numIndices,"numIndices")
	HX_STACK_LINE(145)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	::lime::graphics::opengl::GLBuffer tmp1 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	int tmp2 = numIndices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	::openfl::display3D::IndexBuffer3D tmp3 = ::openfl::display3D::IndexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	::openfl::display3D::IndexBuffer3D indexBuffer = tmp3;		HX_STACK_VAR(indexBuffer,"indexBuffer");
	HX_STACK_LINE(146)
	::openfl::display3D::IndexBuffer3D tmp4 = indexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	this->indexBuffersCreated->push(tmp4);
	HX_STACK_LINE(147)
	::openfl::display3D::IndexBuffer3D tmp5 = indexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(147)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,createIndexBuffer,return )

::openfl::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_FRAME("openfl.display3D.Context3D","createProgram",0x0b5753e1,"openfl.display3D.Context3D.createProgram","openfl/display3D/Context3D.hx",152,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::lime::graphics::opengl::GLProgram tmp1 = ::lime::graphics::opengl::GLProgram_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_program.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	::openfl::display3D::Program3D tmp2 = ::openfl::display3D::Program3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	::openfl::display3D::Program3D program = tmp2;		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(155)
	::openfl::display3D::Program3D tmp3 = program;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	this->programsCreated->push(tmp3);
	HX_STACK_LINE(156)
	::openfl::display3D::Program3D tmp4 = program;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::openfl::display3D::textures::RectangleTexture Context3D_obj::createRectangleTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture){
	HX_STACK_FRAME("openfl.display3D.Context3D","createRectangleTexture",0x8720f36f,"openfl.display3D.Context3D.createRectangleTexture","openfl/display3D/Context3D.hx",161,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_LINE(163)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	::lime::graphics::opengl::GLTexture tmp1 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	bool tmp2 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(163)
	::openfl::display3D::textures::RectangleTexture tmp5 = ::openfl::display3D::textures::RectangleTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(163)
	::openfl::display3D::textures::RectangleTexture texture = tmp5;		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(164)
	::openfl::display3D::textures::RectangleTexture tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	this->texturesCreated->push(tmp6);
	HX_STACK_LINE(165)
	::openfl::display3D::textures::RectangleTexture tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(165)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createRectangleTexture,return )

::openfl::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createTexture",0xb63ed238,"openfl.display3D.Context3D.createTexture","openfl/display3D/Context3D.hx",170,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(172)
		int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		::lime::graphics::opengl::GLTexture tmp1 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		bool tmp2 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		::openfl::display3D::textures::Texture tmp5 = ::openfl::display3D::textures::Texture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		::openfl::display3D::textures::Texture texture = tmp5;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(173)
		::openfl::display3D::textures::Texture tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		this->texturesCreated->push(tmp6);
		HX_STACK_LINE(174)
		::openfl::display3D::textures::Texture tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::openfl::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex){
	HX_STACK_FRAME("openfl.display3D.Context3D","createVertexBuffer",0x49fb9507,"openfl.display3D.Context3D.createVertexBuffer","openfl/display3D/Context3D.hx",179,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numVertices,"numVertices")
	HX_STACK_ARG(data32PerVertex,"data32PerVertex")
	HX_STACK_LINE(181)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::lime::graphics::opengl::GLBuffer tmp1 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	int tmp2 = numVertices;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	int tmp3 = data32PerVertex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	::openfl::display3D::VertexBuffer3D tmp4 = ::openfl::display3D::VertexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	::openfl::display3D::VertexBuffer3D vertexBuffer = tmp4;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(182)
	::openfl::display3D::VertexBuffer3D tmp5 = vertexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	this->vertexBuffersCreated->push(tmp5);
	HX_STACK_LINE(183)
	::openfl::display3D::VertexBuffer3D tmp6 = vertexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(183)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createVertexBuffer,return )

Void Context3D_obj::__deleteTexture( ::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteTexture",0x1620b609,"openfl.display3D.Context3D.__deleteTexture","openfl/display3D/Context3D.hx",189,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(191)
		bool tmp = (texture->glTexture == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		if ((tmp)){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(193)
		::openfl::display3D::textures::TextureBase tmp1 = texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		this->texturesCreated->remove(tmp1);
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::lime::graphics::opengl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				int texture2 = texture1->id;		HX_STACK_VAR(texture2,"texture2");
				HX_STACK_LINE(194)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture2);
			}
			HX_STACK_LINE(194)
			texture1->invalidate();
		}
		HX_STACK_LINE(195)
		texture->glTexture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteTexture,(void))

Void Context3D_obj::__deleteVertexBuffer( ::openfl::display3D::VertexBuffer3D buffer){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteVertexBuffer",0x4df93b96,"openfl.display3D.Context3D.__deleteVertexBuffer","openfl/display3D/Context3D.hx",201,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(203)
		bool tmp = (buffer->glBuffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		if ((tmp)){
			HX_STACK_LINE(204)
			return null();
		}
		HX_STACK_LINE(205)
		::openfl::display3D::VertexBuffer3D tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		this->vertexBuffersCreated->remove(tmp1);
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::lime::graphics::opengl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				int buffer2 = buffer1->id;		HX_STACK_VAR(buffer2,"buffer2");
				HX_STACK_LINE(206)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(buffer2);
			}
			HX_STACK_LINE(206)
			buffer1->invalidate();
		}
		HX_STACK_LINE(207)
		buffer->glBuffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteVertexBuffer,(void))

Void Context3D_obj::__deleteIndexBuffer( ::openfl::display3D::IndexBuffer3D buffer){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteIndexBuffer",0xec4f81e0,"openfl.display3D.Context3D.__deleteIndexBuffer","openfl/display3D/Context3D.hx",213,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(215)
		bool tmp = (buffer->glBuffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		if ((tmp)){
			HX_STACK_LINE(216)
			return null();
		}
		HX_STACK_LINE(217)
		::openfl::display3D::IndexBuffer3D tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		this->indexBuffersCreated->remove(tmp1);
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::lime::graphics::opengl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				int buffer2 = buffer1->id;		HX_STACK_VAR(buffer2,"buffer2");
				HX_STACK_LINE(218)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(buffer2);
			}
			HX_STACK_LINE(218)
			buffer1->invalidate();
		}
		HX_STACK_LINE(219)
		buffer->glBuffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteIndexBuffer,(void))

Void Context3D_obj::__deleteProgram( ::openfl::display3D::Program3D program){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteProgram",0x6b3937b2,"openfl.display3D.Context3D.__deleteProgram","openfl/display3D/Context3D.hx",225,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(227)
		bool tmp = (program->glProgram == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		if ((tmp)){
			HX_STACK_LINE(228)
			return null();
		}
		HX_STACK_LINE(229)
		::openfl::display3D::Program3D tmp1 = program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		this->programsCreated->remove(tmp1);
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::lime::graphics::opengl::GLProgram program1 = program->glProgram;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				int program2 = program1->id;		HX_STACK_VAR(program2,"program2");
				HX_STACK_LINE(230)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_program.call(program2);
			}
			HX_STACK_LINE(230)
			program1->invalidate();
		}
		HX_STACK_LINE(231)
		program->glProgram = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteProgram,(void))

Void Context3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","dispose",0x8ad040d8,"openfl.display3D.Context3D.dispose","openfl/display3D/Context3D.hx",236,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			Array< ::Dynamic > _g1 = this->vertexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(241)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(241)
				if ((tmp1)){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				::openfl::display3D::VertexBuffer3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::VertexBuffer3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				::openfl::display3D::VertexBuffer3D vertexBuffer = tmp2;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
				HX_STACK_LINE(241)
				++(_g);
				HX_STACK_LINE(243)
				vertexBuffer->dispose();
			}
		}
		HX_STACK_LINE(247)
		this->vertexBuffersCreated = null();
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			Array< ::Dynamic > _g1 = this->indexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(249)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(249)
				if ((tmp1)){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				::openfl::display3D::IndexBuffer3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::IndexBuffer3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(249)
				::openfl::display3D::IndexBuffer3D indexBuffer = tmp2;		HX_STACK_VAR(indexBuffer,"indexBuffer");
				HX_STACK_LINE(249)
				++(_g);
				HX_STACK_LINE(251)
				indexBuffer->dispose();
			}
		}
		HX_STACK_LINE(255)
		this->indexBuffersCreated = null();
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			Array< ::Dynamic > _g1 = this->programsCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(257)
			while((true)){
				HX_STACK_LINE(257)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(257)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(257)
				if ((tmp1)){
					HX_STACK_LINE(257)
					break;
				}
				HX_STACK_LINE(257)
				::openfl::display3D::Program3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::Program3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(257)
				::openfl::display3D::Program3D program = tmp2;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(257)
				++(_g);
				HX_STACK_LINE(259)
				program->dispose();
			}
		}
		HX_STACK_LINE(263)
		this->programsCreated = null();
		HX_STACK_LINE(265)
		this->samplerParameters = null();
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			Array< ::Dynamic > _g1 = this->texturesCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(267)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(267)
				if ((tmp1)){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				::openfl::display3D::textures::TextureBase tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::textures::TextureBase >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(267)
				::openfl::display3D::textures::TextureBase texture = tmp2;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(267)
				++(_g);
				HX_STACK_LINE(269)
				texture->dispose();
			}
		}
		HX_STACK_LINE(273)
		this->texturesCreated = null();
		HX_STACK_LINE(275)
		::lime::graphics::opengl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::lime::graphics::opengl::GLFramebuffer tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(277)
				::lime::graphics::opengl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
				HX_STACK_LINE(277)
				{
					HX_STACK_LINE(277)
					int framebuffer1 = framebuffer->id;		HX_STACK_VAR(framebuffer1,"framebuffer1");
					HX_STACK_LINE(277)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_framebuffer.call(framebuffer1);
				}
				HX_STACK_LINE(277)
				framebuffer->invalidate();
			}
			HX_STACK_LINE(278)
			this->framebuffer = null();
		}
		HX_STACK_LINE(282)
		::lime::graphics::opengl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		if ((tmp3)){
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(284)
				::lime::graphics::opengl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(284)
				::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
				HX_STACK_LINE(284)
				{
					HX_STACK_LINE(284)
					int renderbuffer1 = renderbuffer->id;		HX_STACK_VAR(renderbuffer1,"renderbuffer1");
					HX_STACK_LINE(284)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_render_buffer.call(renderbuffer1);
				}
				HX_STACK_LINE(284)
				renderbuffer->invalidate();
			}
			HX_STACK_LINE(285)
			this->renderbuffer = null();
		}
		HX_STACK_LINE(289)
		this->disposed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

Void Context3D_obj::drawToBitmapData( ::openfl::display::BitmapData destination){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","drawToBitmapData",0x474f45df,"openfl.display3D.Context3D.drawToBitmapData","openfl/display3D/Context3D.hx",294,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_FRAME("openfl.display3D.Context3D","drawTriangles",0x0d837500,"openfl.display3D.Context3D.drawTriangles","openfl/display3D/Context3D.hx",301,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indexBuffer,"indexBuffer")
	HX_STACK_ARG(firstIndex,"firstIndex")
	HX_STACK_ARG(numTriangles,"numTriangles")
{
		HX_STACK_LINE(303)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::openfl::display3D::Program3D tmp1 = this->currentProgram;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(303)
			Dynamic tmp2 = tmp1->glProgram->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			int program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(303)
			tmp = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(program,HX_HCSTRING("yflip","\xa6","\x43","\x3a","\xef"));
		}
		HX_STACK_LINE(303)
		int location = tmp;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(304)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1f.call(location,this->_yFlip);
		HX_STACK_LINE(306)
		bool tmp1 = this->drawing;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		if ((tmp2)){
			HX_STACK_LINE(308)
			::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Need to clear before drawing if the buffer has not been cleared since the last present() call.","\x69","\xaf","\x70","\x74"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(312)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(314)
		bool tmp3 = (numTriangles == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		if ((tmp3)){
			HX_STACK_LINE(316)
			numIndices = indexBuffer->numIndices;
		}
		else{
			HX_STACK_LINE(320)
			int tmp4 = (numTriangles * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(320)
			numIndices = tmp4;
		}
		HX_STACK_LINE(324)
		int tmp4 = (firstIndex * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		int byteOffset = tmp4;		HX_STACK_VAR(byteOffset,"byteOffset");
		HX_STACK_LINE(326)
		{
			HX_STACK_LINE(326)
			::lime::graphics::opengl::GLBuffer buffer = indexBuffer->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(326)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34963,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(327)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_elements.call((int)4,numIndices,(int)5123,byteOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","present",0x095ffb34,"openfl.display3D.Context3D.present","openfl/display3D/Context3D.hx",332,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		this->drawing = false;
		HX_STACK_LINE(335)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call((int)0);
		HX_STACK_LINE(337)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,(int)0);
		HX_STACK_LINE(338)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2884);
		HX_STACK_LINE(340)
		::lime::graphics::opengl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(342)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call((int)36160,(int)0);
		}
		HX_STACK_LINE(346)
		::lime::graphics::opengl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		if ((tmp3)){
			HX_STACK_LINE(348)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::removeRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","removeRenderMethod",0xa41ae1a2,"openfl.display3D.Context3D.removeRenderMethod","openfl/display3D/Context3D.hx",355,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(357)
		::openfl::display::OpenGLView tmp = this->ogl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		tmp->set_render(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,removeRenderMethod,(void))

Void Context3D_obj::setBlendFactors( int sourceFactor,int destinationFactor){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setBlendFactors",0x86d16c6e,"openfl.display3D.Context3D.setBlendFactors","openfl/display3D/Context3D.hx",362,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceFactor,"sourceFactor")
		HX_STACK_ARG(destinationFactor,"destinationFactor")
		HX_STACK_LINE(366)
		this->blendEnabled = true;
		HX_STACK_LINE(367)
		this->blendSourceFactor = sourceFactor;
		HX_STACK_LINE(368)
		this->blendDestinationFactor = destinationFactor;
		HX_STACK_LINE(370)
		this->__updateBlendStatus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setColorMask",0xad4f5d14,"openfl.display3D.Context3D.setColorMask","openfl/display3D/Context3D.hx",377,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(377)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setCulling",0x39687055,"openfl.display3D.Context3D.setCulling","openfl/display3D/Context3D.hx",383,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull")
		HX_STACK_LINE(387)
		bool tmp = (triangleFaceToCull == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		if ((tmp)){
			HX_STACK_LINE(389)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2884);
		}
		else{
			HX_STACK_LINE(393)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2884);
			HX_STACK_LINE(395)
			int tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(395)
			switch( (int)(tmp1)){
				case (int)1029: {
					HX_STACK_LINE(397)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call((int)1029);
				}
				;break;
				case (int)1028: {
					HX_STACK_LINE(398)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call((int)1028);
				}
				;break;
				case (int)1032: {
					HX_STACK_LINE(399)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call((int)1032);
				}
				;break;
				default: {
					HX_STACK_LINE(400)
					HX_STACK_DO_THROW(HX_HCSTRING("Unknown Context3DTriangleFace type.","\x03","\x2c","\x78","\x96"));
				}
			}
		}
		HX_STACK_LINE(406)
		int tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		switch( (int)(tmp1)){
			case (int)1029: {
				HX_STACK_LINE(410)
				this->_yFlip = (int)-1;
			}
			;break;
			case (int)1028: {
				HX_STACK_LINE(414)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)1032: {
				HX_STACK_LINE(418)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(422)
				this->_yFlip = (int)1;
			}
			;break;
			default: {
				HX_STACK_LINE(426)
				::String tmp2 = (HX_HCSTRING("Unknown culling mode ","\x77","\x22","\x39","\x68") + triangleFaceToCull);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(426)
				::String tmp3 = (tmp2 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(426)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setDepthTest( bool depthMask,int passCompareMode){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setDepthTest",0x2d08b41a,"openfl.display3D.Context3D.setDepthTest","openfl/display3D/Context3D.hx",432,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depthMask,"depthMask")
		HX_STACK_ARG(passCompareMode,"passCompareMode")
		HX_STACK_LINE(436)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call(passCompareMode);
		HX_STACK_LINE(437)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_mask.call(depthMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setGLSLProgramConstantsFromByteArray( ::String locationName,::lime::utils::ByteArray data,hx::Null< int >  __o_byteArrayOffset){
int byteArrayOffset = __o_byteArrayOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromByteArray",0xf444f7a3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",442,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
{
		HX_STACK_LINE(444)
		data->position = byteArrayOffset;
		HX_STACK_LINE(445)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::openfl::display3D::Program3D tmp1 = this->currentProgram;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(445)
			Dynamic tmp2 = tmp1->glProgram->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(445)
			int program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(445)
			tmp = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(program,locationName);
		}
		HX_STACK_LINE(445)
		int location = tmp;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Float tmp1 = data->readFloat();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(446)
			Float x = tmp1;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(446)
			Float tmp2 = data->readFloat();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(446)
			Float y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(446)
			Float tmp3 = data->readFloat();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(446)
			Float z = tmp3;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(446)
			Float tmp4 = data->readFloat();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			Float w = tmp4;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(446)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,x,y,z,w);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromByteArray,(void))

Void Context3D_obj::setGLSLProgramConstantsFromMatrix( ::String locationName,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromMatrix",0x2c9d8ccf,"openfl.display3D.Context3D.setGLSLProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",451,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(453)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		{
			HX_STACK_LINE(453)
			::openfl::display3D::Program3D tmp1 = this->currentProgram;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(453)
			Dynamic tmp2 = tmp1->glProgram->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			int program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(453)
			tmp = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(program,locationName);
		}
		HX_STACK_LINE(453)
		int location = tmp;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(454)
			{
				HX_STACK_LINE(454)
				cpp::ArrayBase array = matrix->rawData;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(454)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(454)
				bool tmp2 = (array != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(454)
				if ((tmp2)){
					HX_STACK_LINE(454)
					::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(454)
					{
						HX_STACK_LINE(454)
						::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(454)
						::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(454)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(454)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(454)
						int tmp5 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(454)
						_this->byteLength = tmp5;
						HX_STACK_LINE(454)
						::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(454)
						{
							HX_STACK_LINE(454)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(454)
							int tmp7 = _this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(454)
							::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(454)
							this2 = tmp8;
							HX_STACK_LINE(454)
							tmp6 = this2;
						}
						HX_STACK_LINE(454)
						_this->buffer = tmp6;
						HX_STACK_LINE(454)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(454)
						tmp3 = _this;
					}
					HX_STACK_LINE(454)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(454)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(454)
				tmp1 = this1;
			}
			HX_STACK_LINE(454)
			::lime::utils::ArrayBufferView v = tmp1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(454)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,!(transposedMatrix),hx::DynamicPtr(v->buffer),(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromMatrix,(void))

Void Context3D_obj::setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromVector4",0x24735fc3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromVector4","openfl/display3D/Context3D.hx",459,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(461)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			::openfl::display3D::Program3D tmp1 = this->currentProgram;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(461)
			Dynamic tmp2 = tmp1->glProgram->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(461)
			int program = tmp2;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(461)
			tmp = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(program,locationName);
		}
		HX_STACK_LINE(461)
		int location = tmp;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(462)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,data->__get(startIndex),data->__get((startIndex + (int)1)),data->__get((startIndex + (int)2)),data->__get((startIndex + (int)3)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromVector4,(void))

Void Context3D_obj::setGLSLTextureAt( ::String locationName,::openfl::display3D::textures::TextureBase texture,int textureIndex){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLTextureAt",0xd796fc95,"openfl.display3D.Context3D.setGLSLTextureAt","openfl/display3D/Context3D.hx",467,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(locationName,"locationName")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(textureIndex,"textureIndex")
		HX_STACK_LINE(469)
		int tmp = textureIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(471)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(472)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33985);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(473)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33986);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(474)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(475)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33988);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(476)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33989);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(477)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33990);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(478)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((int)33991);
			}
			;break;
			default: {
				HX_STACK_LINE(480)
				HX_STACK_DO_THROW(HX_HCSTRING("Does not support texture8 or more","\x14","\x7f","\xab","\x80"));
			}
		}
		HX_STACK_LINE(484)
		bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		if ((tmp1)){
			HX_STACK_LINE(486)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(int)0);
			HX_STACK_LINE(487)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)34067,(int)0);
			HX_STACK_LINE(488)
			return null();
		}
		HX_STACK_LINE(492)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::openfl::display3D::Program3D tmp3 = this->currentProgram;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(492)
			Dynamic tmp4 = tmp3->glProgram->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(492)
			int program = tmp4;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(492)
			tmp2 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(program,locationName);
		}
		HX_STACK_LINE(492)
		int location = tmp2;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(494)
		::openfl::display3D::textures::TextureBase tmp3 = texture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(494)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(494)
		if ((tmp4)){
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				::openfl::display3D::textures::Texture tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(496)
				tmp5 = hx::TCast< ::openfl::display3D::textures::Texture >::cast(texture);
				HX_STACK_LINE(496)
				::lime::graphics::opengl::GLTexture tmp6 = tmp5->glTexture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(496)
				::lime::graphics::opengl::GLTexture texture1 = tmp6;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(496)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(  (((texture1 == null()))) ? int((int)0) : int(texture1->id) ));
			}
			HX_STACK_LINE(497)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,textureIndex);
		}
		else{
			HX_STACK_LINE(499)
			::openfl::display3D::textures::TextureBase tmp5 = texture;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(499)
			bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(499)
			if ((tmp6)){
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					::openfl::display3D::textures::RectangleTexture tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(501)
					tmp7 = hx::TCast< ::openfl::display3D::textures::RectangleTexture >::cast(texture);
					HX_STACK_LINE(501)
					::lime::graphics::opengl::GLTexture tmp8 = tmp7->glTexture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(501)
					::lime::graphics::opengl::GLTexture texture1 = tmp8;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(501)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(  (((texture1 == null()))) ? int((int)0) : int(texture1->id) ));
				}
				HX_STACK_LINE(502)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,textureIndex);
			}
			else{
				HX_STACK_LINE(504)
				::openfl::display3D::textures::TextureBase tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(504)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(504)
				if ((tmp8)){
					HX_STACK_LINE(506)
					{
						HX_STACK_LINE(506)
						::openfl::display3D::textures::CubeTexture tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(506)
						tmp9 = hx::TCast< ::openfl::display3D::textures::CubeTexture >::cast(texture);
						HX_STACK_LINE(506)
						::lime::graphics::opengl::GLTexture tmp10 = tmp9->glTexture;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(506)
						::lime::graphics::opengl::GLTexture texture1 = tmp10;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(506)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)34067,(  (((texture1 == null()))) ? int((int)0) : int(texture1->id) ));
					}
					HX_STACK_LINE(507)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,textureIndex);
				}
				else{
					HX_STACK_LINE(511)
					::openfl::display3D::textures::TextureBase tmp9 = texture;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(511)
					::hx::Class tmp10 = ::Type_obj::getClass(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(511)
					::String tmp11 = ::Type_obj::getClassName(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(511)
					::String tmp12 = (HX_HCSTRING("Texture of type ","\x62","\x88","\x46","\xef") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(511)
					::String tmp13 = (tmp12 + HX_HCSTRING(" not supported yet","\x49","\x2e","\x29","\x7d"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(511)
					HX_STACK_DO_THROW(tmp13);
				}
			}
		}
		HX_STACK_LINE(515)
		::openfl::display3D::_Context3D::SamplerState tmp5 = this->samplerParameters->__get(textureIndex).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(515)
		::openfl::display3D::_Context3D::SamplerState parameters = tmp5;		HX_STACK_VAR(parameters,"parameters");
		HX_STACK_LINE(517)
		bool tmp6 = (parameters != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(517)
		if ((tmp6)){
			HX_STACK_LINE(519)
			::openfl::display3D::textures::TextureBase tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(519)
			::openfl::display3D::Context3DWrapMode tmp8 = parameters->wrap;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(519)
			::openfl::display3D::Context3DTextureFilter tmp9 = parameters->filter;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(519)
			::openfl::display3D::Context3DMipFilter tmp10 = parameters->mipfilter;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(519)
			this->setTextureParameters(tmp7,tmp8,tmp9,tmp10);
		}
		else{
			HX_STACK_LINE(523)
			::openfl::display3D::textures::TextureBase tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(523)
			this->setTextureParameters(tmp7,::openfl::display3D::Context3DWrapMode_obj::CLAMP,::openfl::display3D::Context3DTextureFilter_obj::NEAREST,::openfl::display3D::Context3DMipFilter_obj::MIPNONE);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLTextureAt,(void))

Void Context3D_obj::setGLSLVertexBufferAt( ::String locationName,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLVertexBufferAt",0x58133e50,"openfl.display3D.Context3D.setGLSLVertexBufferAt","openfl/display3D/Context3D.hx",530,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(532)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		if ((tmp1)){
			HX_STACK_LINE(532)
			::openfl::display3D::Program3D tmp3 = this->currentProgram;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			::openfl::display3D::Program3D tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(532)
			::lime::graphics::opengl::GLProgram tmp5 = tmp4->glProgram;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(532)
			tmp2 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(532)
			tmp2 = false;
		}
		HX_STACK_LINE(532)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		if ((tmp2)){
			HX_STACK_LINE(532)
			::openfl::display3D::Program3D tmp4 = this->currentProgram;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(532)
			Dynamic tmp5 = tmp4->glProgram->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(532)
			int program = tmp5;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(532)
			tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(program,locationName);
		}
		else{
			HX_STACK_LINE(532)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(532)
		int location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(534)
		bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		if ((tmp4)){
			HX_STACK_LINE(536)
			bool tmp5 = (location > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			if ((tmp5)){
				HX_STACK_LINE(538)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(location);
				HX_STACK_LINE(541)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,(int)0);
			}
			HX_STACK_LINE(546)
			return null();
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::lime::graphics::opengl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(550)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,(  (((buffer1 == null()))) ? int((int)0) : int(buffer1->id) ));
		}
		HX_STACK_LINE(552)
		int dimension = (int)4;		HX_STACK_VAR(dimension,"dimension");
		HX_STACK_LINE(553)
		int type = (int)5126;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(554)
		int numBytes = (int)4;		HX_STACK_VAR(numBytes,"numBytes");
		HX_STACK_LINE(556)
		bool tmp5 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::BYTES_4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(556)
		if ((tmp5)){
			HX_STACK_LINE(558)
			dimension = (int)4;
			HX_STACK_LINE(559)
			type = (int)5126;
			HX_STACK_LINE(560)
			numBytes = (int)4;
		}
		else{
			HX_STACK_LINE(562)
			bool tmp6 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(562)
			if ((tmp6)){
				HX_STACK_LINE(564)
				dimension = (int)1;
				HX_STACK_LINE(565)
				type = (int)5126;
				HX_STACK_LINE(566)
				numBytes = (int)4;
			}
			else{
				HX_STACK_LINE(568)
				bool tmp7 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(568)
				if ((tmp7)){
					HX_STACK_LINE(570)
					dimension = (int)2;
					HX_STACK_LINE(571)
					type = (int)5126;
					HX_STACK_LINE(572)
					numBytes = (int)4;
				}
				else{
					HX_STACK_LINE(574)
					bool tmp8 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(574)
					if ((tmp8)){
						HX_STACK_LINE(576)
						dimension = (int)3;
						HX_STACK_LINE(577)
						type = (int)5126;
						HX_STACK_LINE(578)
						numBytes = (int)4;
					}
					else{
						HX_STACK_LINE(580)
						bool tmp9 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(580)
						if ((tmp9)){
							HX_STACK_LINE(582)
							dimension = (int)4;
							HX_STACK_LINE(583)
							type = (int)5126;
							HX_STACK_LINE(584)
							numBytes = (int)4;
						}
						else{
							HX_STACK_LINE(588)
							::openfl::display3D::Context3DVertexBufferFormat tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(588)
							::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(588)
							::String tmp12 = (HX_HCSTRING("Buffer format ","\x09","\x56","\xec","\x6e") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(588)
							::String tmp13 = (tmp12 + HX_HCSTRING(" is not supported","\x4b","\x1e","\xc6","\x51"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(588)
							HX_STACK_DO_THROW(tmp13);
						}
					}
				}
			}
		}
		HX_STACK_LINE(592)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(location);
		HX_STACK_LINE(593)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(location,dimension,type,false,(buffer->data32PerVertex * numBytes),(bufferOffset * numBytes));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setGLSLVertexBufferAt,(void))

Void Context3D_obj::setProgram( ::openfl::display3D::Program3D program3D){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgram",0xd9d9d869,"openfl.display3D.Context3D.setProgram","openfl/display3D/Context3D.hx",598,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program3D,"program3D")
		HX_STACK_LINE(600)
		::lime::graphics::opengl::GLProgram glProgram = null();		HX_STACK_VAR(glProgram,"glProgram");
		HX_STACK_LINE(602)
		bool tmp = (program3D != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(602)
		if ((tmp)){
			HX_STACK_LINE(604)
			glProgram = program3D->glProgram;
		}
		HX_STACK_LINE(608)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call((  (((glProgram == null()))) ? int((int)0) : int(glProgram->id) ));
		HX_STACK_LINE(609)
		this->currentProgram = program3D;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( ::openfl::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::lime::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromByteArray",0xd8990de1,"openfl.display3D.Context3D.setProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",616,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(programType,"programType")
		HX_STACK_ARG(firstRegister,"firstRegister")
		HX_STACK_ARG(numRegisters,"numRegisters")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(618)
		data->position = byteArrayOffset;
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(620)
			while((true)){
				HX_STACK_LINE(620)
				bool tmp = (_g < numRegisters);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(620)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(620)
				if ((tmp1)){
					HX_STACK_LINE(620)
					break;
				}
				HX_STACK_LINE(620)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(620)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(622)
				::openfl::display3D::Context3DProgramType tmp3 = programType;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(622)
				int tmp4 = (firstRegister + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				::String tmp5 = this->__getUniformLocationNameFromAgalRegisterIndex(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				::String locationName = tmp5;		HX_STACK_VAR(locationName,"locationName");
				HX_STACK_LINE(623)
				::String tmp6 = locationName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(623)
				::lime::utils::ByteArray tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(623)
				this->setGLSLProgramConstantsFromByteArray(tmp6,tmp7,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( ::openfl::display3D::Context3DProgramType programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromMatrix",0x29e843d1,"openfl.display3D.Context3D.setProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",630,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(635)
		Array< Float > d = matrix->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(636)
		bool tmp = transposedMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(636)
		if ((tmp)){
			HX_STACK_LINE(637)
			::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(637)
			int tmp2 = firstRegister;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(637)
			Float tmp3 = d->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(637)
			Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(637)
			Float tmp5 = d->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(637)
			Float tmp7 = d->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(637)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(637)
			Float tmp9 = d->__get((int)12);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(637)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(637)
			this->setProgramConstantsFromVector(tmp1,tmp2,Array_obj< Float >::__new().Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10),(int)1);
			HX_STACK_LINE(638)
			::openfl::display3D::Context3DProgramType tmp11 = programType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(638)
			int tmp12 = (firstRegister + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(638)
			Float tmp13 = d->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(638)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(638)
			Float tmp15 = d->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(638)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(638)
			Float tmp17 = d->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(638)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(638)
			Float tmp19 = d->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(638)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(638)
			this->setProgramConstantsFromVector(tmp11,tmp12,Array_obj< Float >::__new().Add(tmp14).Add(tmp16).Add(tmp18).Add(tmp20),(int)1);
			HX_STACK_LINE(639)
			::openfl::display3D::Context3DProgramType tmp21 = programType;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(639)
			int tmp22 = (firstRegister + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(639)
			Float tmp23 = d->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(639)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(639)
			Float tmp25 = d->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(639)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(639)
			Float tmp27 = d->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(639)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(639)
			Float tmp29 = d->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(639)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(639)
			this->setProgramConstantsFromVector(tmp21,tmp22,Array_obj< Float >::__new().Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30),(int)1);
			HX_STACK_LINE(640)
			::openfl::display3D::Context3DProgramType tmp31 = programType;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(640)
			int tmp32 = (firstRegister + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(640)
			Float tmp33 = d->__get((int)3);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(640)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(640)
			Float tmp35 = d->__get((int)7);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(640)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(640)
			Float tmp37 = d->__get((int)11);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(640)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(640)
			Float tmp39 = d->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(640)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(640)
			this->setProgramConstantsFromVector(tmp31,tmp32,Array_obj< Float >::__new().Add(tmp34).Add(tmp36).Add(tmp38).Add(tmp40),(int)1);
		}
		else{
			HX_STACK_LINE(642)
			::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(642)
			int tmp2 = firstRegister;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(642)
			Float tmp3 = d->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(642)
			Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(642)
			Float tmp5 = d->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(642)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(642)
			Float tmp7 = d->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(642)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(642)
			Float tmp9 = d->__get((int)3);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(642)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(642)
			this->setProgramConstantsFromVector(tmp1,tmp2,Array_obj< Float >::__new().Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10),(int)1);
			HX_STACK_LINE(643)
			::openfl::display3D::Context3DProgramType tmp11 = programType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(643)
			int tmp12 = (firstRegister + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(643)
			Float tmp13 = d->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(643)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(643)
			Float tmp15 = d->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(643)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(643)
			Float tmp17 = d->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(643)
			Float tmp19 = d->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(643)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(643)
			this->setProgramConstantsFromVector(tmp11,tmp12,Array_obj< Float >::__new().Add(tmp14).Add(tmp16).Add(tmp18).Add(tmp20),(int)1);
			HX_STACK_LINE(644)
			::openfl::display3D::Context3DProgramType tmp21 = programType;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(644)
			int tmp22 = (firstRegister + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(644)
			Float tmp23 = d->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(644)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(644)
			Float tmp25 = d->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(644)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(644)
			Float tmp27 = d->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(644)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(644)
			Float tmp29 = d->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(644)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(644)
			this->setProgramConstantsFromVector(tmp21,tmp22,Array_obj< Float >::__new().Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30),(int)1);
			HX_STACK_LINE(645)
			::openfl::display3D::Context3DProgramType tmp31 = programType;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(645)
			int tmp32 = (firstRegister + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(645)
			Float tmp33 = d->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(645)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(645)
			Float tmp35 = d->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(645)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(645)
			Float tmp37 = d->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(645)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(645)
			Float tmp39 = d->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(645)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(645)
			this->setProgramConstantsFromVector(tmp31,tmp32,Array_obj< Float >::__new().Add(tmp34).Add(tmp36).Add(tmp38).Add(tmp40),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromVector( ::openfl::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(1);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromVector",0x057dbe53,"openfl.display3D.Context3D.setProgramConstantsFromVector","openfl/display3D/Context3D.hx",653,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(numRegisters,"numRegisters")
{
		HX_STACK_LINE(653)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(653)
		while((true)){
			HX_STACK_LINE(653)
			bool tmp = (_g < numRegisters);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(653)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(653)
			if ((tmp1)){
				HX_STACK_LINE(653)
				break;
			}
			HX_STACK_LINE(653)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(653)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(655)
			int tmp3 = (i * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(655)
			int currentIndex = tmp3;		HX_STACK_VAR(currentIndex,"currentIndex");
			HX_STACK_LINE(656)
			::openfl::display3D::Context3DProgramType tmp4 = programType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			int tmp5 = (firstRegister + i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			::String tmp6 = this->__getUniformLocationNameFromAgalRegisterIndex(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(656)
			::String locationName = tmp6;		HX_STACK_VAR(locationName,"locationName");
			HX_STACK_LINE(657)
			::String tmp7 = locationName;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(657)
			int tmp8 = currentIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(657)
			this->setGLSLProgramConstantsFromVector4(tmp7,data,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderMethod",0x286aeed2,"openfl.display3D.Context3D.setRenderMethod","openfl/display3D/Context3D.hx",664,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(668)
		::openfl::display::OpenGLView tmp = this->ogl;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,func)
		int __ArgCount() const { return 1; }
		Void run(::openfl::geom::Rectangle rect){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display3D/Context3D.hx",668,0xc899cbb9)
			HX_STACK_ARG(rect,"rect")
			{
				HX_STACK_LINE(668)
				func(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(668)
		tmp->set_render( Dynamic(new _Function_1_1(func)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setRenderMethod,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToBackBuffer",0x6095d693,"openfl.display3D.Context3D.setRenderToBackBuffer","openfl/display3D/Context3D.hx",673,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2929);
		HX_STACK_LINE(676)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)2960);
		HX_STACK_LINE(677)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)3089);
		HX_STACK_LINE(679)
		::lime::graphics::opengl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		if ((tmp1)){
			HX_STACK_LINE(681)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call((int)36160,(int)0);
		}
		HX_STACK_LINE(685)
		::lime::graphics::opengl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(685)
		if ((tmp3)){
			HX_STACK_LINE(687)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,(int)0);
		}
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			::openfl::geom::Rectangle tmp4 = this->scrollRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(691)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(691)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(691)
			int x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(691)
			::openfl::geom::Rectangle tmp7 = this->scrollRect;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(691)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(691)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(691)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(691)
			::openfl::geom::Rectangle tmp10 = this->scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(691)
			Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(691)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(691)
			int width = tmp12;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(691)
			::openfl::geom::Rectangle tmp13 = this->scrollRect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(691)
			Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(691)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(691)
			int height = tmp15;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(691)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call(x,y,width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToTexture",0x25c5d54f,"openfl.display3D.Context3D.setRenderToTexture","openfl/display3D/Context3D.hx",696,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(surfaceSelector,"surfaceSelector")
{
		HX_STACK_LINE(700)
		::lime::graphics::opengl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(700)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		if ((tmp1)){
			HX_STACK_LINE(702)
			int tmp2 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(702)
			::lime::graphics::opengl::GLFramebuffer tmp3 = ::lime::graphics::opengl::GLFramebuffer_obj::__new(tmp2,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_framebuffer.call());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(702)
			this->framebuffer = tmp3;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::lime::graphics::opengl::GLFramebuffer tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(706)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(706)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call((int)36160,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(708)
		::lime::graphics::opengl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(708)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(708)
		if ((tmp3)){
			HX_STACK_LINE(710)
			int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(710)
			::lime::graphics::opengl::GLRenderbuffer tmp5 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp4,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(710)
			this->renderbuffer = tmp5;
		}
		HX_STACK_LINE(714)
		{
			HX_STACK_LINE(714)
			::lime::graphics::opengl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(714)
			::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(714)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call((int)36161,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
		}
		HX_STACK_LINE(718)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call((int)36161,(int)6408,texture->width,texture->height);
		HX_STACK_LINE(720)
		{
			HX_STACK_LINE(720)
			Dynamic tmp4 = texture->glTexture->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(720)
			int texture1 = tmp4;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(720)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_texture2D.call((int)36160,(int)36064,(int)3553,texture1,(int)0);
		}
		HX_STACK_LINE(722)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call((int)36161,(int)34041,texture->width,texture->height);
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			::lime::graphics::opengl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			int renderbuffer = tmp4->id;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(723)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call((int)36160,(int)33306,(int)36161,renderbuffer);
		}
		HX_STACK_LINE(725)
		bool tmp4 = enableDepthAndStencil;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(725)
		if ((tmp4)){
			HX_STACK_LINE(727)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2929);
			HX_STACK_LINE(728)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)2960);
		}
		HX_STACK_LINE(731)
		{
			HX_STACK_LINE(731)
			::lime::graphics::opengl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(731)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(  (((texture1 == null()))) ? int((int)0) : int(texture1->id) ));
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(732)
			::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(732)
			if ((tmp5)){
				HX_STACK_LINE(732)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(732)
				tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(732)
			::haxe::io::Bytes buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(732)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call((int)3553,(int)0,(int)6408,texture->width,texture->height,(int)0,(int)6408,(int)5121,hx::DynamicPtr(buffer),(int)0);
		}
		HX_STACK_LINE(733)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(734)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9985);
		HX_STACK_LINE(736)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call((int)0,(int)0,texture->width,texture->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setSamplerStateAt",0x9f8ad1f7,"openfl.display3D.Context3D.setSamplerStateAt","openfl/display3D/Context3D.hx",740,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(744)
		bool tmp = ((int)0 <= sampler);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(744)
		if ((tmp)){
			HX_STACK_LINE(744)
			int tmp2 = sampler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(744)
			int tmp3 = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(744)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(744)
			tmp1 = (tmp2 < tmp4);
		}
		else{
			HX_STACK_LINE(744)
			tmp1 = false;
		}
		HX_STACK_LINE(744)
		if ((tmp1)){
			HX_STACK_LINE(746)
			::openfl::display3D::_Context3D::SamplerState tmp2 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(746)
			tmp2->wrap = wrap;
			HX_STACK_LINE(747)
			::openfl::display3D::_Context3D::SamplerState tmp3 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(747)
			tmp3->filter = filter;
			HX_STACK_LINE(748)
			::openfl::display3D::_Context3D::SamplerState tmp4 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(748)
			tmp4->mipfilter = mipfilter;
		}
		else{
			HX_STACK_LINE(752)
			HX_STACK_DO_THROW(HX_HCSTRING("Sampler is out of bounds.","\xa0","\x80","\xe1","\x15"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setScissorRectangle( ::openfl::geom::Rectangle rectangle){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setScissorRectangle",0x712bb5ee,"openfl.display3D.Context3D.setScissorRectangle","openfl/display3D/Context3D.hx",759,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(763)
		bool tmp = (rectangle == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(763)
		if ((tmp)){
			HX_STACK_LINE(765)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)3089);
			HX_STACK_LINE(766)
			return null();
		}
		HX_STACK_LINE(770)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)3089);
		HX_STACK_LINE(771)
		{
			HX_STACK_LINE(771)
			Float tmp1 = rectangle->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(771)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(771)
			int x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(771)
			Float tmp3 = rectangle->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(771)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(771)
			int y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(771)
			Float tmp5 = rectangle->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(771)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(771)
			int width = tmp6;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(771)
			Float tmp7 = rectangle->height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(771)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(771)
			int height = tmp8;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(771)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setStencilActions",0x1fe08e1c,"openfl.display3D.Context3D.setStencilActions","openfl/display3D/Context3D.hx",776,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFace,"triangleFace")
		HX_STACK_ARG(compareMode,"compareMode")
		HX_STACK_ARG(actionOnBothPass,"actionOnBothPass")
		HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail")
		HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail")
		HX_STACK_LINE(778)
		this->stencilCompareMode = compareMode;
		HX_STACK_LINE(779)
		{
			HX_STACK_LINE(779)
			int fail = actionOnBothPass;		HX_STACK_VAR(fail,"fail");
			HX_STACK_LINE(779)
			int zfail = actionOnDepthFail;		HX_STACK_VAR(zfail,"zfail");
			HX_STACK_LINE(779)
			int zpass = actionOnDepthPassStencilFail;		HX_STACK_VAR(zpass,"zpass");
			HX_STACK_LINE(779)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_op.call(fail,zfail,zpass);
		}
		HX_STACK_LINE(780)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_func.call(this->stencilCompareMode,this->stencilRef,this->stencilReadMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_FRAME("openfl.display3D.Context3D","setStencilReferenceValue",0xaa284f67,"openfl.display3D.Context3D.setStencilReferenceValue","openfl/display3D/Context3D.hx",785,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(referenceValue,"referenceValue")
	HX_STACK_ARG(readMask,"readMask")
	HX_STACK_ARG(writeMask,"writeMask")
{
		HX_STACK_LINE(787)
		this->stencilReadMask = readMask;
		HX_STACK_LINE(788)
		this->stencilRef = referenceValue;
		HX_STACK_LINE(790)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_func.call(this->stencilCompareMode,this->stencilRef,this->stencilReadMask);
		HX_STACK_LINE(791)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_mask.call(writeMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureAt",0x38d4bfd3,"openfl.display3D.Context3D.setTextureAt","openfl/display3D/Context3D.hx",796,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(798)
		::String tmp = (HX_HCSTRING("fs","\x4d","\x59","\x00","\x00") + sampler);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(798)
		::String locationName = tmp;		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(799)
		::String tmp1 = locationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(799)
		::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(799)
		int tmp3 = sampler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(799)
		this->setGLSLTextureAt(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setTextureParameters( ::openfl::display3D::textures::TextureBase texture,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureParameters",0x0709098a,"openfl.display3D.Context3D.setTextureParameters","openfl/display3D/Context3D.hx",804,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(806)
		bool tmp = ::openfl::display3D::Context3D_obj::anisotropySupportTested;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(806)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(806)
		if ((tmp1)){
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",810,0xc899cbb9)
					{
						HX_STACK_LINE(810)
						Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(810)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_supported_extensions.call(hx::DynamicPtr(result));
						HX_STACK_LINE(810)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(810)
			int tmp2 = (_Function_2_1::Block())->indexOf(HX_HCSTRING("GL_EXT_texture_filter_anisotropic","\x66","\x5c","\x79","\xdb"),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(810)
			bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(810)
			::openfl::display3D::Context3D_obj::supportsAnisotropy = tmp3;
			HX_STACK_LINE(812)
			bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(812)
			if ((tmp4)){
				HX_STACK_LINE(816)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,::openfl::display3D::Context3D_obj::maxSupportedAnisotropy);
			}
			HX_STACK_LINE(833)
			::openfl::display3D::Context3D_obj::anisotropySupportTested = true;
		}
		HX_STACK_LINE(837)
		::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(837)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(837)
		if ((tmp3)){
			HX_STACK_LINE(839)
			switch( (int)(wrap->__Index())){
				case (int)0: {
					HX_STACK_LINE(843)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)33071);
					HX_STACK_LINE(844)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)33071);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(848)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)10497);
					HX_STACK_LINE(849)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)10497);
				}
				;break;
			}
			HX_STACK_LINE(856)
			switch( (int)(filter->__Index())){
				case (int)4: {
					HX_STACK_LINE(860)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9729);
					HX_STACK_LINE(861)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(861)
					if ((tmp4)){
						HX_STACK_LINE(862)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(866)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9728);
					HX_STACK_LINE(867)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(867)
					if ((tmp4)){
						HX_STACK_LINE(868)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(872)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(872)
					if ((tmp4)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",873,0xc899cbb9)
								{
									HX_STACK_LINE(873)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",873,0xc899cbb9)
											{
												HX_STACK_LINE(873)
												bool aNeg = ((int)2 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(873)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(873)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)2 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(873)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",873,0xc899cbb9)
								{
									HX_STACK_LINE(873)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(873)
									return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
								}
								return null();
							}
						};
						HX_STACK_LINE(873)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)2) ));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(877)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(877)
					if ((tmp4)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",878,0xc899cbb9)
								{
									HX_STACK_LINE(878)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",878,0xc899cbb9)
											{
												HX_STACK_LINE(878)
												bool aNeg = ((int)4 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(878)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(878)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)4 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(878)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",878,0xc899cbb9)
								{
									HX_STACK_LINE(878)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(878)
									return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
								}
								return null();
							}
						};
						HX_STACK_LINE(878)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)4) ));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(882)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(882)
					if ((tmp4)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",883,0xc899cbb9)
								{
									HX_STACK_LINE(883)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",883,0xc899cbb9)
											{
												HX_STACK_LINE(883)
												bool aNeg = ((int)8 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(883)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(883)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)8 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(883)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",883,0xc899cbb9)
								{
									HX_STACK_LINE(883)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(883)
									return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
								}
								return null();
							}
						};
						HX_STACK_LINE(883)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)8) ));
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(887)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(887)
					if ((tmp4)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",888,0xc899cbb9)
								{
									HX_STACK_LINE(888)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",888,0xc899cbb9)
											{
												HX_STACK_LINE(888)
												bool aNeg = ((int)16 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(888)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(888)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)16 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(888)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",888,0xc899cbb9)
								{
									HX_STACK_LINE(888)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(888)
									return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
								}
								return null();
							}
						};
						HX_STACK_LINE(888)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)16) ));
					}
				}
				;break;
			}
			HX_STACK_LINE(892)
			switch( (int)(mipfilter->__Index())){
				case (int)0: {
					HX_STACK_LINE(896)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9987);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(900)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9984);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(904)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(  (((filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST))) ? int((int)9728) : int((int)9729) ));
				}
				;break;
			}
			HX_STACK_LINE(908)
			::openfl::display3D::textures::Texture tex = ((::openfl::display3D::textures::Texture)(texture));		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(909)
			bool tmp4 = (mipfilter != ::openfl::display3D::Context3DMipFilter_obj::MIPNONE);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(909)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(909)
			if ((tmp4)){
				HX_STACK_LINE(909)
				bool tmp6 = tex->mipmapsGenerated;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(909)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(909)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(909)
				tmp5 = false;
			}
			HX_STACK_LINE(909)
			if ((tmp5)){
				HX_STACK_LINE(910)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_generate_mipmap.call((int)3553);
				HX_STACK_LINE(911)
				tex->mipmapsGenerated = true;
			}
		}
		else{
			HX_STACK_LINE(915)
			::openfl::display3D::textures::TextureBase tmp4 = texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(915)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(915)
			if ((tmp5)){
				HX_STACK_LINE(917)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)33071);
				HX_STACK_LINE(918)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)33071);
				HX_STACK_LINE(920)
				switch( (int)(filter->__Index())){
					case (int)4: {
						HX_STACK_LINE(924)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9729);
						HX_STACK_LINE(925)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(925)
						if ((tmp6)){
							HX_STACK_LINE(926)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(930)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9728);
						HX_STACK_LINE(931)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(931)
						if ((tmp6)){
							HX_STACK_LINE(932)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(936)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(936)
						if ((tmp6)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",937,0xc899cbb9)
									{
										HX_STACK_LINE(937)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",937,0xc899cbb9)
												{
													HX_STACK_LINE(937)
													bool aNeg = ((int)2 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(937)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(937)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)2 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(937)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",937,0xc899cbb9)
									{
										HX_STACK_LINE(937)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(937)
										return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
									}
									return null();
								}
							};
							HX_STACK_LINE(937)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)2) ));
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(941)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(941)
						if ((tmp6)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",942,0xc899cbb9)
									{
										HX_STACK_LINE(942)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",942,0xc899cbb9)
												{
													HX_STACK_LINE(942)
													bool aNeg = ((int)4 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(942)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(942)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)4 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(942)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",942,0xc899cbb9)
									{
										HX_STACK_LINE(942)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(942)
										return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
									}
									return null();
								}
							};
							HX_STACK_LINE(942)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)4) ));
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(946)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(946)
						if ((tmp6)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",947,0xc899cbb9)
									{
										HX_STACK_LINE(947)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",947,0xc899cbb9)
												{
													HX_STACK_LINE(947)
													bool aNeg = ((int)8 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(947)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(947)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)8 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(947)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",947,0xc899cbb9)
									{
										HX_STACK_LINE(947)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(947)
										return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
									}
									return null();
								}
							};
							HX_STACK_LINE(947)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)8) ));
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(951)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(951)
						if ((tmp6)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",952,0xc899cbb9)
									{
										HX_STACK_LINE(952)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",952,0xc899cbb9)
												{
													HX_STACK_LINE(952)
													bool aNeg = ((int)16 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(952)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(952)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)16 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(952)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",952,0xc899cbb9)
									{
										HX_STACK_LINE(952)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(952)
										return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
									}
									return null();
								}
							};
							HX_STACK_LINE(952)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)16) ));
						}
					}
					;break;
				}
				HX_STACK_LINE(956)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(  (((filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST))) ? int((int)9728) : int((int)9729) ));
			}
			else{
				HX_STACK_LINE(958)
				::openfl::display3D::textures::TextureBase tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(958)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(958)
				if ((tmp7)){
					HX_STACK_LINE(960)
					switch( (int)(wrap->__Index())){
						case (int)0: {
							HX_STACK_LINE(964)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10242,(int)33071);
							HX_STACK_LINE(965)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10243,(int)33071);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(969)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10242,(int)10497);
							HX_STACK_LINE(970)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10243,(int)10497);
						}
						;break;
					}
					HX_STACK_LINE(974)
					switch( (int)(filter->__Index())){
						case (int)4: {
							HX_STACK_LINE(978)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10240,(int)9729);
							HX_STACK_LINE(979)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(979)
							if ((tmp8)){
								HX_STACK_LINE(980)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(984)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10240,(int)9728);
							HX_STACK_LINE(985)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(985)
							if ((tmp8)){
								HX_STACK_LINE(986)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
							}
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(990)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(990)
							if ((tmp8)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",991,0xc899cbb9)
										{
											HX_STACK_LINE(991)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",991,0xc899cbb9)
													{
														HX_STACK_LINE(991)
														bool aNeg = ((int)2 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(991)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(991)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)2 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(991)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",991,0xc899cbb9)
										{
											HX_STACK_LINE(991)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(991)
											return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
										}
										return null();
									}
								};
								HX_STACK_LINE(991)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)2) ));
							}
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(995)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(995)
							if ((tmp8)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",996,0xc899cbb9)
										{
											HX_STACK_LINE(996)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",996,0xc899cbb9)
													{
														HX_STACK_LINE(996)
														bool aNeg = ((int)4 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(996)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(996)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)4 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(996)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",996,0xc899cbb9)
										{
											HX_STACK_LINE(996)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(996)
											return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
										}
										return null();
									}
								};
								HX_STACK_LINE(996)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)4) ));
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1000)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1000)
							if ((tmp8)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1001,0xc899cbb9)
										{
											HX_STACK_LINE(1001)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1001,0xc899cbb9)
													{
														HX_STACK_LINE(1001)
														bool aNeg = ((int)8 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(1001)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(1001)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)8 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1001)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1001,0xc899cbb9)
										{
											HX_STACK_LINE(1001)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(1001)
											return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1001)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)8) ));
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1005)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1005)
							if ((tmp8)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1006,0xc899cbb9)
										{
											HX_STACK_LINE(1006)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1006,0xc899cbb9)
													{
														HX_STACK_LINE(1006)
														bool aNeg = ((int)16 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(1006)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(1006)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)16 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1006)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1006,0xc899cbb9)
										{
											HX_STACK_LINE(1006)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(1006)
											return (  (((_int < (int)0))) ? Float((((Float)4294967296.0) + _int)) : Float((_int + ((Float)0.0))) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1006)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)16) ));
							}
						}
						;break;
					}
					HX_STACK_LINE(1010)
					switch( (int)(mipfilter->__Index())){
						case (int)0: {
							HX_STACK_LINE(1014)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10241,(int)9987);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1018)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10241,(int)9984);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1022)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)34067,(int)10241,(  (((filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST))) ? int((int)9728) : int((int)9729) ));
						}
						;break;
					}
					HX_STACK_LINE(1026)
					::openfl::display3D::textures::CubeTexture cubetex = ((::openfl::display3D::textures::CubeTexture)(texture));		HX_STACK_VAR(cubetex,"cubetex");
					HX_STACK_LINE(1027)
					bool tmp8 = (mipfilter != ::openfl::display3D::Context3DMipFilter_obj::MIPNONE);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1027)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1027)
					if ((tmp8)){
						HX_STACK_LINE(1027)
						bool tmp10 = cubetex->mipmapsGenerated;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1027)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1027)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(1027)
						tmp9 = false;
					}
					HX_STACK_LINE(1027)
					if ((tmp9)){
						HX_STACK_LINE(1028)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_generate_mipmap.call((int)34067);
						HX_STACK_LINE(1029)
						cubetex->mipmapsGenerated = true;
					}
				}
				else{
					HX_STACK_LINE(1034)
					::openfl::display3D::textures::TextureBase tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1034)
					::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1034)
					::String tmp10 = ::Type_obj::getClassName(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1034)
					::String tmp11 = (HX_HCSTRING("Texture of type ","\x62","\x88","\x46","\xef") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1034)
					::String tmp12 = (tmp11 + HX_HCSTRING(" not supported yet","\x49","\x2e","\x29","\x7d"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1034)
					HX_STACK_DO_THROW(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setTextureParameters,(void))

Void Context3D_obj::setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setVertexBufferAt",0xbb32fa52,"openfl.display3D.Context3D.setVertexBufferAt","openfl/display3D/Context3D.hx",1041,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(1043)
		::String tmp = (HX_HCSTRING("va","\x2b","\x67","\x00","\x00") + index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1043)
		::String locationName = tmp;		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(1044)
		::String tmp1 = locationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		::openfl::display3D::VertexBuffer3D tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1044)
		int tmp3 = bufferOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1044)
		::openfl::display3D::Context3DVertexBufferFormat tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1044)
		this->setGLSLVertexBufferAt(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

::String Context3D_obj::__getUniformLocationNameFromAgalRegisterIndex( ::openfl::display3D::Context3DProgramType programType,int firstRegister){
	HX_STACK_FRAME("openfl.display3D.Context3D","__getUniformLocationNameFromAgalRegisterIndex",0x072a804f,"openfl.display3D.Context3D.__getUniformLocationNameFromAgalRegisterIndex","openfl/display3D/Context3D.hx",1049,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_LINE(1051)
	bool tmp = (programType == ::openfl::display3D::Context3DProgramType_obj::VERTEX);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1051)
	if ((tmp)){
		HX_STACK_LINE(1053)
		::String tmp1 = (HX_HCSTRING("vc","\x2d","\x67","\x00","\x00") + firstRegister);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1053)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1055)
		bool tmp1 = (programType == ::openfl::display3D::Context3DProgramType_obj::FRAGMENT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1055)
		if ((tmp1)){
			HX_STACK_LINE(1057)
			::String tmp2 = (HX_HCSTRING("fc","\x3d","\x59","\x00","\x00") + firstRegister);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1057)
			return tmp2;
		}
	}
	HX_STACK_LINE(1061)
	::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1061)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1061)
	::String tmp3 = (HX_HCSTRING("Program Type ","\x4a","\xc1","\x72","\x1b") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1061)
	::String tmp4 = (tmp3 + HX_HCSTRING(" not supported","\xc1","\x3c","\x82","\x53"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1061)
	HX_STACK_DO_THROW(tmp4);
	HX_STACK_LINE(1061)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__getUniformLocationNameFromAgalRegisterIndex,return )

Void Context3D_obj::__updateBlendStatus( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateBlendStatus",0x3fc75d73,"openfl.display3D.Context3D.__updateBlendStatus","openfl/display3D/Context3D.hx",1066,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1070)
		bool tmp = this->blendEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1070)
		if ((tmp)){
			HX_STACK_LINE(1072)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call((int)3042);
			HX_STACK_LINE(1073)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call((int)32774);
			HX_STACK_LINE(1074)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(this->blendSourceFactor,this->blendDestinationFactor);
		}
		else{
			HX_STACK_LINE(1078)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBlendStatus,(void))

int Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;

int Context3D_obj::MAX_SAMPLERS;

int Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT;

bool Context3D_obj::anisotropySupportTested;

bool Context3D_obj::supportsAnisotropy;

int Context3D_obj::maxSupportedAnisotropy;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_MARK_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_MARK_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_MARK_MEMBER_NAME(currentProgram,"currentProgram");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_MARK_MEMBER_NAME(ogl,"ogl");
	HX_MARK_MEMBER_NAME(programsCreated,"programsCreated");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(stencilRef,"stencilRef");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_MARK_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_MARK_MEMBER_NAME(_yFlip,"_yFlip");
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_VISIT_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_VISIT_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_VISIT_MEMBER_NAME(currentProgram,"currentProgram");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_VISIT_MEMBER_NAME(ogl,"ogl");
	HX_VISIT_MEMBER_NAME(programsCreated,"programsCreated");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(stencilRef,"stencilRef");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_VISIT_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_VISIT_MEMBER_NAME(_yFlip,"_yFlip");
}

Dynamic Context3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { return ogl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { return _yFlip; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { return stencilRef; }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { return blendEnabled; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { return stencilbuffer; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { return currentProgram; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { return programsCreated; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return stencilReadMask; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { return texturesCreated; }
		if (HX_FIELD_EQ(inName,"__deleteTexture") ) { return __deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__deleteProgram") ) { return __deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderMethod") ) { return setRenderMethod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setGLSLTextureAt") ) { return setGLSLTextureAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { return blendSourceFactor; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { return samplerParameters; }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return stencilCompareMode; }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderMethod") ) { return removeRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { return indexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"__deleteIndexBuffer") ) { return __deleteIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateBlendStatus") ) { return __updateBlendStatus_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { return vertexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"__deleteVertexBuffer") ) { return __deleteVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureParameters") ) { return setTextureParameters_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setGLSLVertexBufferAt") ) { return setGLSLVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { return blendDestinationFactor; }
		if (HX_FIELD_EQ(inName,"createRectangleTexture") ) { return createRectangleTexture_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromMatrix") ) { return setGLSLProgramConstantsFromMatrix_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromVector4") ) { return setGLSLProgramConstantsFromVector4_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromByteArray") ) { return setGLSLProgramConstantsFromByteArray_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"__getUniformLocationNameFromAgalRegisterIndex") ) { return __getUniformLocationNameFromAgalRegisterIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Context3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { outValue = MAX_SAMPLERS; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { outValue = supportsAnisotropy; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { outValue = maxSupportedAnisotropy; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { outValue = anisotropySupportTested; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = MAX_TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
	}
	return false;
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { ogl=inValue.Cast< ::openfl::display::OpenGLView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { _yFlip=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { stencilRef=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { blendEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { stencilbuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { currentProgram=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { programsCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { texturesCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { blendSourceFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { samplerParameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { indexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { vertexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { blendDestinationFactor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Context3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { MAX_SAMPLERS=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { supportsAnisotropy=ioValue.Cast< bool >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { maxSupportedAnisotropy=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { anisotropySupportTested=ioValue.Cast< bool >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { MAX_TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"));
	outFields->push(HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"));
	outFields->push(HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77"));
	outFields->push(HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad"));
	outFields->push(HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78"));
	outFields->push(HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01"));
	outFields->push(HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86"));
	outFields->push(HX_HCSTRING("ogl","\x54","\x94","\x54","\x00"));
	outFields->push(HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	outFields->push(HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc"));
	outFields->push(HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"));
	outFields->push(HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8"));
	outFields->push(HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d"));
	outFields->push(HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d"));
	outFields->push(HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Context3D_obj,driverInfo),HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3")},
	{hx::fsBool,(int)offsetof(Context3D_obj,enableErrorChecking),HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendDestinationFactor),HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77")},
	{hx::fsBool,(int)offsetof(Context3D_obj,blendEnabled),HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendSourceFactor),HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3D_obj,currentProgram),HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01")},
	{hx::fsBool,(int)offsetof(Context3D_obj,disposed),HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27")},
	{hx::fsBool,(int)offsetof(Context3D_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(Context3D_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,indexBuffersCreated),HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86")},
	{hx::fsObject /*::openfl::display::OpenGLView*/ ,(int)offsetof(Context3D_obj,ogl),HX_HCSTRING("ogl","\x54","\x94","\x54","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,programsCreated),HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,samplerParameters),HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,scrollRect),HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,stencilbuffer),HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilCompareMode),HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilRef),HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilReadMask),HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,texturesCreated),HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,vertexBuffersCreated),HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d")},
	{hx::fsFloat,(int)offsetof(Context3D_obj,_yFlip),HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_SAMPLERS,HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3")},
	{hx::fsBool,(void *) &Context3D_obj::anisotropySupportTested,HX_HCSTRING("anisotropySupportTested","\x3e","\xcd","\x45","\xae")},
	{hx::fsBool,(void *) &Context3D_obj::supportsAnisotropy,HX_HCSTRING("supportsAnisotropy","\xa6","\x0a","\x42","\xa9")},
	{hx::fsInt,(void *) &Context3D_obj::maxSupportedAnisotropy,HX_HCSTRING("maxSupportedAnisotropy","\x8c","\xab","\x46","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"),
	HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"),
	HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77"),
	HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad"),
	HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78"),
	HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01"),
	HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86"),
	HX_HCSTRING("ogl","\x54","\x94","\x54","\x00"),
	HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0"),
	HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"),
	HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc"),
	HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"),
	HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8"),
	HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"),
	HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d"),
	HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d"),
	HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("configureBackBuffer","\x0d","\x3c","\x11","\x04"),
	HX_HCSTRING("createCubeTexture","\xca","\x46","\x30","\xc8"),
	HX_HCSTRING("createIndexBuffer","\x16","\x40","\x47","\x48"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRectangleTexture","\x88","\x8b","\xb3","\xf2"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createVertexBuffer","\xa0","\xec","\xc7","\x6a"),
	HX_HCSTRING("__deleteTexture","\xd0","\x94","\x1c","\x85"),
	HX_HCSTRING("__deleteVertexBuffer","\x6f","\x6b","\x3d","\x7c"),
	HX_HCSTRING("__deleteIndexBuffer","\x27","\xd0","\x4f","\x7e"),
	HX_HCSTRING("__deleteProgram","\x79","\x16","\x35","\xda"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("drawToBitmapData","\x38","\x55","\xb6","\xf4"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"),
	HX_HCSTRING("removeRenderMethod","\x3b","\x39","\xe7","\xc4"),
	HX_HCSTRING("setBlendFactors","\x35","\x4b","\xcd","\xf5"),
	HX_HCSTRING("setColorMask","\xed","\x8b","\x13","\x48"),
	HX_HCSTRING("setCulling","\xee","\x06","\x67","\xa6"),
	HX_HCSTRING("setDepthTest","\xf3","\xe2","\xcc","\xc7"),
	HX_HCSTRING("setGLSLProgramConstantsFromByteArray","\x7c","\x29","\xc4","\xae"),
	HX_HCSTRING("setGLSLProgramConstantsFromMatrix","\x56","\xa9","\x13","\x3b"),
	HX_HCSTRING("setGLSLProgramConstantsFromVector4","\x5c","\x39","\x56","\xbd"),
	HX_HCSTRING("setGLSLTextureAt","\xee","\x0b","\xfe","\x84"),
	HX_HCSTRING("setGLSLVertexBufferAt","\x57","\xec","\x78","\xa5"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setProgramConstantsFromByteArray","\x3a","\x1f","\x12","\xd4"),
	HX_HCSTRING("setProgramConstantsFromMatrix","\xd8","\xd0","\x45","\xbe"),
	HX_HCSTRING("setProgramConstantsFromVector","\x5a","\x4b","\xdb","\x99"),
	HX_HCSTRING("setRenderMethod","\x99","\xcd","\x66","\x97"),
	HX_HCSTRING("setRenderToBackBuffer","\x9a","\x84","\xfb","\xad"),
	HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"),
	HX_HCSTRING("setSamplerStateAt","\x7e","\x30","\x51","\xac"),
	HX_HCSTRING("setScissorRectangle","\x35","\x04","\x2c","\x03"),
	HX_HCSTRING("setStencilActions","\xa3","\xec","\xa6","\x2c"),
	HX_HCSTRING("setStencilReferenceValue","\xc0","\xdf","\xa3","\x11"),
	HX_HCSTRING("setTextureAt","\xac","\xee","\x98","\xd3"),
	HX_HCSTRING("setTextureParameters","\x63","\x39","\x4d","\x35"),
	HX_HCSTRING("setVertexBufferAt","\xd9","\x58","\xf9","\xc7"),
	HX_HCSTRING("__getUniformLocationNameFromAgalRegisterIndex","\x56","\xcb","\xdc","\xc4"),
	HX_HCSTRING("__updateBlendStatus","\xba","\xab","\xc7","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_MARK_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_VISIT_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#endif

hx::Class Context3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"),
	HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06"),
	HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3"),
	HX_HCSTRING("anisotropySupportTested","\x3e","\xcd","\x45","\xae"),
	HX_HCSTRING("supportsAnisotropy","\xa6","\x0a","\x42","\xa9"),
	HX_HCSTRING("maxSupportedAnisotropy","\x8c","\xab","\x46","\xa0"),
	::String(null()) };

void Context3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3D_obj >;
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

void Context3D_obj::__boot()
{
	TEXTURE_MAX_ANISOTROPY_EXT= (int)34046;
	MAX_SAMPLERS= (int)8;
	MAX_TEXTURE_MAX_ANISOTROPY_EXT= (int)34047;
	anisotropySupportTested= false;
	supportsAnisotropy= false;
	maxSupportedAnisotropy= (int)256;
}

} // end namespace openfl
} // end namespace display3D
