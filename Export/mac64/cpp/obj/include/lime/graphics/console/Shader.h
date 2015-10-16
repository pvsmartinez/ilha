#ifndef INCLUDED_lime_graphics_console_Shader
#define INCLUDED_lime_graphics_console_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,console,Shader)
namespace lime{
namespace graphics{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.console.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace console

#endif /* INCLUDED_lime_graphics_console_Shader */ 
