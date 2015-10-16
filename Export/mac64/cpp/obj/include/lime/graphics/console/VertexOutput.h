#ifndef INCLUDED_lime_graphics_console_VertexOutput
#define INCLUDED_lime_graphics_console_VertexOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,console,VertexOutput)
namespace lime{
namespace graphics{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  VertexOutput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexOutput_obj OBJ_;
		VertexOutput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.console.VertexOutput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexOutput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexOutput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VertexOutput","\xa5","\x4d","\xa8","\x74"); }

		virtual Void vec2( Dynamic x,Dynamic y);
		Dynamic vec2_dyn();

		virtual Void vec3( Dynamic x,Dynamic y,Dynamic z);
		Dynamic vec3_dyn();

		virtual Void color( Dynamic r,Dynamic g,Dynamic b,Dynamic a);
		Dynamic color_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace console

#endif /* INCLUDED_lime_graphics_console_VertexOutput */ 
