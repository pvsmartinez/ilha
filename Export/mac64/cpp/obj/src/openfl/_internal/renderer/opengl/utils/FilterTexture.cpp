#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void FilterTexture_obj::__construct(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","new",0x6b047474,"openfl._internal.renderer.opengl.utils.FilterTexture.new","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",22,0x699b425f)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(true);
{
	HX_STACK_LINE(24)
	this->gl = gl;
	HX_STACK_LINE(26)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::lime::graphics::opengl::GLFramebuffer tmp1 = ::lime::graphics::opengl::GLFramebuffer_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_framebuffer.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->frameBuffer = tmp1;
	HX_STACK_LINE(27)
	int tmp2 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::lime::graphics::opengl::GLTexture tmp3 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp2,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	this->texture = tmp3;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::lime::graphics::opengl::GLTexture tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::lime::graphics::opengl::GLTexture texture = tmp4;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(29)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
	HX_STACK_LINE(30)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,(  ((smoothing)) ? int(gl->LINEAR) : int(gl->NEAREST) ));
	HX_STACK_LINE(31)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,(  ((smoothing)) ? int(gl->LINEAR) : int(gl->NEAREST) ));
	HX_STACK_LINE(32)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
	HX_STACK_LINE(33)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GLFramebuffer tmp4 = this->frameBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GLFramebuffer framebuffer = tmp4;		HX_STACK_VAR(framebuffer,"framebuffer");
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::lime::graphics::opengl::GLTexture tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		int texture = tmp4->id;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(36)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_texture2D.call(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,gl->TEXTURE_2D,texture,(int)0);
	}
	HX_STACK_LINE(38)
	int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GLRenderbuffer tmp5 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp4,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	this->renderBuffer = tmp5;
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::lime::graphics::opengl::GLRenderbuffer tmp6 = this->renderBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp6;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(39)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call(gl->RENDERBUFFER,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::lime::graphics::opengl::GLRenderbuffer tmp6 = this->renderBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		int renderbuffer = tmp6->id;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(40)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call(gl->FRAMEBUFFER,gl->DEPTH_STENCIL_ATTACHMENT,gl->RENDERBUFFER,renderbuffer);
	}
	HX_STACK_LINE(42)
	int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	this->resize(tmp6,tmp7);
}
;
	return null();
}

//FilterTexture_obj::~FilterTexture_obj() { }

Dynamic FilterTexture_obj::__CreateEmpty() { return  new FilterTexture_obj; }
hx::ObjectPtr< FilterTexture_obj > FilterTexture_obj::__new(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< FilterTexture_obj > _result_ = new FilterTexture_obj();
	_result_->__construct(gl,width,height,__o_smoothing);
	return _result_;}

Dynamic FilterTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterTexture_obj > _result_ = new FilterTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FilterTexture_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","clear",0x3b8c42a1,"openfl._internal.renderer.opengl.utils.FilterTexture.clear","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",47,0x699b425f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((int)0,(int)0,(int)0,(int)0);
		HX_STACK_LINE(50)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterTexture_obj,clear,(void))

Void FilterTexture_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","destroy",0xe25c6b0e,"openfl._internal.renderer.opengl.utils.FilterTexture.destroy","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",55,0x699b425f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::lime::graphics::opengl::GLFramebuffer tmp = this->frameBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(57)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					int framebuffer1 = framebuffer->id;		HX_STACK_VAR(framebuffer1,"framebuffer1");
					HX_STACK_LINE(57)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_framebuffer.call(framebuffer1);
				}
				HX_STACK_LINE(57)
				framebuffer->invalidate();
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GLTexture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(58)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
				}
				HX_STACK_LINE(58)
				texture->invalidate();
			}
		}
		HX_STACK_LINE(60)
		this->frameBuffer = null();
		HX_STACK_LINE(61)
		this->texture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterTexture_obj,destroy,(void))

Void FilterTexture_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","resize",0xe0017a60,"openfl._internal.renderer.opengl.utils.FilterTexture.resize","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",66,0x699b425f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(68)
		int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(68)
			int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			tmp3 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(68)
			tmp3 = false;
		}
		HX_STACK_LINE(68)
		if ((tmp3)){
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(70)
		this->width = width;
		HX_STACK_LINE(71)
		this->height = height;
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GLTexture tmp4 = this->texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GLTexture texture = tmp4;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			::haxe::io::Bytes tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			if ((tmp4)){
				HX_STACK_LINE(74)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(74)
				tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(74)
			::haxe::io::Bytes buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(74)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(this->gl->TEXTURE_2D,(int)0,this->gl->RGBA,width,height,(int)0,this->gl->RGBA,this->gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(int)0);
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::lime::graphics::opengl::GLRenderbuffer tmp4 = this->renderBuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::lime::graphics::opengl::GLRenderbuffer renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(76)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call(this->gl->RENDERBUFFER,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
		}
		HX_STACK_LINE(77)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call(this->gl->RENDERBUFFER,this->gl->DEPTH_STENCIL,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FilterTexture_obj,resize,(void))


FilterTexture_obj::FilterTexture_obj()
{
}

void FilterTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterTexture);
	HX_MARK_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderBuffer,"renderBuffer");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void FilterTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderBuffer,"renderBuffer");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic FilterTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { return frameBuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { return renderBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { frameBuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { renderBuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderBuffer","\xf6","\xc0","\xea","\x3f"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(FilterTexture_obj,frameBuffer),HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(FilterTexture_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(FilterTexture_obj,renderBuffer),HX_HCSTRING("renderBuffer","\xf6","\xc0","\xea","\x3f")},
	{hx::fsBool,(int)offsetof(FilterTexture_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(FilterTexture_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsInt,(int)offsetof(FilterTexture_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FilterTexture_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameBuffer","\x0d","\x89","\xdc","\xae"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderBuffer","\xf6","\xc0","\xea","\x3f"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class FilterTexture_obj::__mClass;

void FilterTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.FilterTexture","\x82","\x6a","\xb4","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilterTexture_obj >;
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
} // end namespace opengl
} // end namespace utils
