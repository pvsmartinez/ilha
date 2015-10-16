#ifndef INCLUDED_lime_utils_ArrayBufferView
#define INCLUDED_lime_utils_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ArrayBufferView_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferView_obj OBJ_;
		ArrayBufferView_obj();
		Void __construct(Dynamic elements,int in_type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.ArrayBufferView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayBufferView_obj > __new(Dynamic elements,int in_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd"); }

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_Int16Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_Int16Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_UInt16Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_UInt16Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_UInt32Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_UInt32Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_UInt8Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_UInt8Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_Int32Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_Int32Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_Float32Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_Float32Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_Int8Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_Int8Array_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_UInt8ClampedArray( int begin,Dynamic end);
		Dynamic subarray_lime_utils_UInt8ClampedArray_dyn();

		virtual ::lime::utils::ArrayBufferView subarray_lime_utils_Float64Array( int begin,Dynamic end);
		Dynamic subarray_lime_utils_Float64Array_dyn();

		int type;
		::haxe::io::Bytes buffer;
		int byteOffset;
		int byteLength;
		int length;
		int bytesPerElement;
		virtual ::lime::utils::ArrayBufferView initTypedArray( ::lime::utils::ArrayBufferView view);
		Dynamic initTypedArray_dyn();

		virtual ::lime::utils::ArrayBufferView initBuffer( ::haxe::io::Bytes in_buffer,Dynamic in_byteOffset,Dynamic len);
		Dynamic initBuffer_dyn();

		virtual ::lime::utils::ArrayBufferView initArray( cpp::ArrayBase array);
		Dynamic initArray_dyn();

		virtual Void set( ::lime::utils::ArrayBufferView view,cpp::ArrayBase array,hx::Null< int >  offset);
		Dynamic set_dyn();

		virtual Void cloneBuffer( ::haxe::io::Bytes src,hx::Null< int >  srcByteOffset);
		Dynamic cloneBuffer_dyn();

		virtual int bytesForType( int type);
		Dynamic bytesForType_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int toByteLength( int elemCount);
		Dynamic toByteLength_dyn();

		virtual Void copyFromArray( Array< Float > array,hx::Null< int >  offset);
		Dynamic copyFromArray_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ArrayBufferView */ 
