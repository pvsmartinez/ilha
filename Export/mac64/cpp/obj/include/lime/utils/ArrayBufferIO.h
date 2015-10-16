#ifndef INCLUDED_lime_utils_ArrayBufferIO
#define INCLUDED_lime_utils_ArrayBufferIO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferIO)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ArrayBufferIO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferIO_obj OBJ_;
		ArrayBufferIO_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.ArrayBufferIO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayBufferIO_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferIO_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArrayBufferIO","\x7f","\x77","\x2c","\x77"); }

		static int getInt8( ::haxe::io::Bytes buffer,int byteOffset);
		static Dynamic getInt8_dyn();

		static int setInt8( ::haxe::io::Bytes buffer,int byteOffset,int value);
		static Dynamic setInt8_dyn();

		static Dynamic getUint8( ::haxe::io::Bytes buffer,int byteOffset);
		static Dynamic getUint8_dyn();

		static int setUint8Clamped( ::haxe::io::Bytes buffer,int byteOffset,int value);
		static Dynamic setUint8Clamped_dyn();

		static int setUint8( ::haxe::io::Bytes buffer,int byteOffset,int value);
		static Dynamic setUint8_dyn();

		static int getInt16( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  littleEndian);
		static Dynamic getInt16_dyn();

		static int setInt16( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  littleEndian);
		static Dynamic setInt16_dyn();

		static Dynamic getUint16( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  littleEndian);
		static Dynamic getUint16_dyn();

		static int setUint16( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  littleEndian);
		static Dynamic setUint16_dyn();

		static int getInt32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  littleEndian);
		static Dynamic getInt32_dyn();

		static int setInt32( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  littleEndian);
		static Dynamic setInt32_dyn();

		static Dynamic getUint32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  littleEndian);
		static Dynamic getUint32_dyn();

		static int setUint32( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  littleEndian);
		static Dynamic setUint32_dyn();

		static Float getFloat32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  littleEndian);
		static Dynamic getFloat32_dyn();

		static Float setFloat32( ::haxe::io::Bytes buffer,int byteOffset,Float value,hx::Null< bool >  littleEndian);
		static Dynamic setFloat32_dyn();

		static Float getFloat64( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  littleEndian);
		static Dynamic getFloat64_dyn();

		static Float setFloat64( ::haxe::io::Bytes buffer,int byteOffset,Float value,hx::Null< bool >  littleEndian);
		static Dynamic setFloat64_dyn();

		static int _clamp( Float _in);
		static Dynamic _clamp_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ArrayBufferIO */ 
