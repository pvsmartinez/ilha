#ifndef INCLUDED_lime_graphics_format_PNG
#define INCLUDED_lime_graphics_format_PNG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,format,PNG)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace graphics{
namespace format{


class HXCPP_CLASS_ATTRIBUTES  PNG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PNG_obj OBJ_;
		PNG_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.format.PNG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PNG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PNG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00"); }

		static void __boot();
		static ::lime::graphics::Image decodeBytes( ::lime::utils::ByteArray bytes,hx::Null< bool >  decodeData);
		static Dynamic decodeBytes_dyn();

		static ::lime::graphics::Image decodeFile( ::String path,hx::Null< bool >  decodeData);
		static Dynamic decodeFile_dyn();

		static ::lime::utils::ByteArray encode( ::lime::graphics::Image image);
		static Dynamic encode_dyn();

		static Dynamic lime_png_decode_bytes( Dynamic data,bool decodeData);
		static Dynamic lime_png_decode_bytes_dyn();

		static Dynamic lime_png_decode_file( ::String path,bool decodeData);
		static Dynamic lime_png_decode_file_dyn();

		static Dynamic lime_image_encode( Dynamic data,int type,int quality);
		static Dynamic lime_image_encode_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ) > cffi_lime_png_decode_bytes;
		static ::cpp::Function< ::hx::Object * ( ::String ,bool ) > cffi_lime_png_decode_file;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > cffi_lime_image_encode;
};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_PNG */ 
