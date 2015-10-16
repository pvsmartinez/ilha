#ifndef INCLUDED_lime_graphics_console_IndexBuffer
#define INCLUDED_lime_graphics_console_IndexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,console,IndexBuffer)
namespace lime{
namespace graphics{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  IndexBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer_obj OBJ_;
		IndexBuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.console.IndexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IndexBuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexBuffer_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IndexBuffer","\x92","\xfd","\xd8","\xd9"); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace console

#endif /* INCLUDED_lime_graphics_console_IndexBuffer */ 
