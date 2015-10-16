#ifndef INCLUDED_lime_utils_LZMA
#define INCLUDED_lime_utils_LZMA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(lime,utils,LZMA)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  LZMA_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LZMA_obj OBJ_;
		LZMA_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils.LZMA")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LZMA_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LZMA_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"); }

		static void __boot();
		static ::lime::utils::ByteArray decode( ::lime::utils::ByteArray bytes);
		static Dynamic decode_dyn();

		static ::lime::utils::ByteArray encode( ::lime::utils::ByteArray bytes);
		static Dynamic encode_dyn();

		static Dynamic lime_lzma_decode( Dynamic data);
		static Dynamic lime_lzma_decode_dyn();

		static Dynamic lime_lzma_encode( Dynamic data);
		static Dynamic lime_lzma_encode_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_lzma_decode;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > cffi_lime_lzma_encode;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_LZMA */ 
