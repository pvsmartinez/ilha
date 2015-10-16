#ifndef INCLUDED_lime_graphics_console_VertexBuffer
#define INCLUDED_lime_graphics_console_VertexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,console,VertexBuffer)
HX_DECLARE_CLASS3(lime,graphics,console,VertexOutput)
namespace lime{
namespace graphics{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  VertexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer_obj OBJ_;
		VertexBuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.console.VertexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexBuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VertexBuffer","\xa4","\xfb","\xbb","\x38"); }

		virtual ::lime::graphics::console::VertexOutput lock( );
		Dynamic lock_dyn();

		virtual Void unlock( );
		Dynamic unlock_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace console

#endif /* INCLUDED_lime_graphics_console_VertexBuffer */ 
