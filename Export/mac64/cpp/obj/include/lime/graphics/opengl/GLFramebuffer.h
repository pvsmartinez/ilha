#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#define INCLUDED_lime_graphics_opengl_GLFramebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLFramebuffer_obj : public ::lime::graphics::opengl::GLObject_obj{
	public:
		typedef ::lime::graphics::opengl::GLObject_obj super;
		typedef GLFramebuffer_obj OBJ_;
		GLFramebuffer_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.opengl.GLFramebuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLFramebuffer_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLFramebuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLFramebuffer","\xc8","\x06","\xb2","\x3b"); }

		virtual ::String getType( );

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLFramebuffer */ 
