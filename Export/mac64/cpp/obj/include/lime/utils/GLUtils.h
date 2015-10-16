#ifndef INCLUDED_lime_utils_GLUtils
#define INCLUDED_lime_utils_GLUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLShader)
HX_DECLARE_CLASS2(lime,utils,GLUtils)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GLUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GLUtils_obj OBJ_;
		GLUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.GLUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GLUtils","\xcc","\x75","\x9f","\x29"); }

		static ::lime::graphics::opengl::GLShader compileShader( ::String source,int type);
		static Dynamic compileShader_dyn();

		static ::lime::graphics::opengl::GLProgram createProgram( ::String vertexSource,::String fragmentSource);
		static Dynamic createProgram_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_GLUtils */ 
