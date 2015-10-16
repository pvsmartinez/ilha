#ifndef INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_
#define INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,_ArrayBuffer,ArrayBuffer_Impl_)
namespace lime{
namespace utils{
namespace _ArrayBuffer{


class HXCPP_CLASS_ATTRIBUTES  ArrayBuffer_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBuffer_Impl__obj OBJ_;
		ArrayBuffer_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.utils._ArrayBuffer.ArrayBuffer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayBuffer_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArrayBuffer_Impl_","\xb9","\xb4","\xeb","\xeb"); }

		static ::haxe::io::Bytes _new( int byteLength);
		static Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _ArrayBuffer

#endif /* INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_ */ 
