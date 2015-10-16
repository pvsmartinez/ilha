#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#define INCLUDED_lime_graphics_opengl_GLRenderbuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLRenderbuffer)
namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLRenderbuffer_obj : public ::lime::graphics::opengl::GLObject_obj{
	public:
		typedef ::lime::graphics::opengl::GLObject_obj super;
		typedef GLRenderbuffer_obj OBJ_;
		GLRenderbuffer_obj();
		Void __construct(int version,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.opengl.GLRenderbuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLRenderbuffer_obj > __new(int version,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRenderbuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLRenderbuffer","\x9b","\xfa","\x9f","\x86"); }

		virtual ::String getType( );

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLRenderbuffer */ 
