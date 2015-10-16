#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#define INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLRenderbuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterTexture)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  FilterTexture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FilterTexture_obj OBJ_;
		FilterTexture_obj();
		Void __construct(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.utils.FilterTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FilterTexture_obj > __new(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FilterTexture","\xe3","\x07","\xa1","\xa7"); }

		::lime::graphics::opengl::GLFramebuffer frameBuffer;
		::lime::graphics::GLRenderContext gl;
		::lime::graphics::opengl::GLRenderbuffer renderBuffer;
		bool smoothing;
		::lime::graphics::opengl::GLTexture texture;
		int width;
		int height;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture */ 
