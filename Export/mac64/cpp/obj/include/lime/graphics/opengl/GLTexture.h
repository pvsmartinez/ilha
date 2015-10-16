#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#define INCLUDED_lime_graphics_opengl_GLTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLTexture_obj : public ::lime::graphics::opengl::GLObject_obj{
	public:
		typedef ::lime::graphics::opengl::GLObject_obj super;
		typedef GLTexture_obj OBJ_;
		GLTexture_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.opengl.GLTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLTexture_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLTexture","\x36","\xf1","\x1f","\xe8"); }

		virtual ::String getType( );

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLTexture */ 
