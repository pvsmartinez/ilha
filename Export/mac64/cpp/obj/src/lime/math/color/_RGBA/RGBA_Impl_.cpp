#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace math{
namespace color{
namespace _RGBA{

Void RGBA_Impl__obj::__construct()
{
	return null();
}

//RGBA_Impl__obj::~RGBA_Impl__obj() { }

Dynamic RGBA_Impl__obj::__CreateEmpty() { return  new RGBA_Impl__obj; }
hx::ObjectPtr< RGBA_Impl__obj > RGBA_Impl__obj::__new()
{  hx::ObjectPtr< RGBA_Impl__obj > _result_ = new RGBA_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic RGBA_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RGBA_Impl__obj > _result_ = new RGBA_Impl__obj();
	_result_->__construct();
	return _result_;}

void RGBA_Impl__obj::__init__() {
HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","__init__",0x551369d7,"lime.math.color._RGBA.RGBA_Impl_.__init__","lime/math/color/RGBA.hx",25,0x1583b2d1)
{
	HX_STACK_LINE(27)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(27)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(27)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)7);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			this1 = tmp2;
		}
		else{
			HX_STACK_LINE(27)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			if ((tmp2)){
				HX_STACK_LINE(27)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(27)
				{
					HX_STACK_LINE(27)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(27)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(27)
					_this->__FieldRef(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")) = (int)0;
					HX_STACK_LINE(27)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(27)
					_this->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = tmp5;
					HX_STACK_LINE(27)
					int tmp6 = (_this->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) * _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(27)
					_this->__FieldRef(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")) = tmp6;
					HX_STACK_LINE(27)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(27)
					{
						HX_STACK_LINE(27)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(27)
						int tmp8 = _this->__Field(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(27)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(27)
						this2 = tmp9;
						HX_STACK_LINE(27)
						tmp7 = this2;
					}
					HX_STACK_LINE(27)
					_this->__FieldRef(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")) = tmp7;
					HX_STACK_LINE(27)
					_this->__Field(HX_HCSTRING("copyFromArray","\x5a","\xdd","\xdd","\x3b"), hx::paccDynamic )(((Array< Float >)(null())),null());
					HX_STACK_LINE(27)
					tmp3 = _this;
				}
				HX_STACK_LINE(27)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(27)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(27)
				if ((tmp3)){
					HX_STACK_LINE(27)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(27)
					{
						HX_STACK_LINE(27)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(27)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(27)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(27)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(27)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(27)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(27)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(27)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(27)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(27)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(27)
						int elementSize = _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic );		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(27)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(27)
						int tmp11 = _this->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(27)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(27)
						if ((tmp12)){
							HX_STACK_LINE(27)
							int srcLength1 = srcData->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(27)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(27)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(27)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(27)
							{
								HX_STACK_LINE(27)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(27)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(27)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(27)
								this2 = tmp16;
								HX_STACK_LINE(27)
								tmp14 = this2;
							}
							HX_STACK_LINE(27)
							_this->__FieldRef(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")) = tmp14;
							HX_STACK_LINE(27)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(27)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(27)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(27)
							_this->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("blit","\x35","\x38","\x19","\x41"), hx::paccDynamic )((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(27)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(27)
						int tmp13 = (_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ) * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(27)
						_this->__FieldRef(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")) = tmp13;
						HX_STACK_LINE(27)
						_this->__FieldRef(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")) = (int)0;
						HX_STACK_LINE(27)
						_this->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = srcLength;
						HX_STACK_LINE(27)
						tmp4 = _this;
					}
					HX_STACK_LINE(27)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(27)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(27)
					if ((tmp4)){
						HX_STACK_LINE(27)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(27)
						{
							HX_STACK_LINE(27)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(27)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(27)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(27)
							if ((tmp7)){
								HX_STACK_LINE(27)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(27)
							int tmp8 = hx::Mod((int)0,_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(27)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(27)
							if ((tmp9)){
								HX_STACK_LINE(27)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(27)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(27)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(27)
							int elementSize = _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic );		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(27)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(27)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(27)
							if ((tmp11)){
								HX_STACK_LINE(27)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(27)
								newByteLength = tmp12;
								HX_STACK_LINE(27)
								int tmp13 = hx::Mod(bufferByteLength,_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(27)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(27)
								if ((tmp14)){
									HX_STACK_LINE(27)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(27)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(27)
								if ((tmp15)){
									HX_STACK_LINE(27)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(27)
								int tmp12 = (null() * _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(27)
								newByteLength = tmp12;
								HX_STACK_LINE(27)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(27)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(27)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(27)
								if ((tmp14)){
									HX_STACK_LINE(27)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(27)
							_this->__FieldRef(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")) = null();
							HX_STACK_LINE(27)
							_this->__FieldRef(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")) = (int)0;
							HX_STACK_LINE(27)
							_this->__FieldRef(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")) = newByteLength;
							HX_STACK_LINE(27)
							Float tmp12 = (Float(newByteLength) / Float(_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic )));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(27)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(27)
							_this->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = tmp13;
							HX_STACK_LINE(27)
							tmp5 = _this;
						}
						HX_STACK_LINE(27)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(27)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
					}
				}
			}
		}
		HX_STACK_LINE(27)
		tmp = this1;
	}
	HX_STACK_LINE(27)
	::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16 = tmp;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			bool tmp1 = (_g < (int)256);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			if ((tmp2)){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(31)
			{
				HX_STACK_LINE(31)
				::lime::utils::ArrayBufferView tmp4 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(31)
				::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(31)
				Float tmp5 = (i * ((Float)257.003921568627447));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(31)
				int tmp6 = ::Math_obj::ceil(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				int val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(31)
					::__hxcpp_memory_set_ui32(this1->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),(this1->__Field(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"), hx::paccDynamic ) + (i * (int)4)),val);
					HX_STACK_LINE(31)
					val;
				}
			}
		}
	}
	HX_STACK_LINE(35)
	::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(35)
		bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new((int)510,(int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			this1 = tmp3;
		}
		else{
			HX_STACK_LINE(35)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			if ((tmp3)){
				HX_STACK_LINE(35)
				::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(35)
					::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(35)
					_this->__FieldRef(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")) = (int)0;
					HX_STACK_LINE(35)
					int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(35)
					_this->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = tmp6;
					HX_STACK_LINE(35)
					int tmp7 = (_this->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) * _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(35)
					_this->__FieldRef(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")) = tmp7;
					HX_STACK_LINE(35)
					::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(35)
					{
						HX_STACK_LINE(35)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(35)
						int tmp9 = _this->__Field(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(35)
						::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(35)
						this2 = tmp10;
						HX_STACK_LINE(35)
						tmp8 = this2;
					}
					HX_STACK_LINE(35)
					_this->__FieldRef(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")) = tmp8;
					HX_STACK_LINE(35)
					_this->__Field(HX_HCSTRING("copyFromArray","\x5a","\xdd","\xdd","\x3b"), hx::paccDynamic )(((Array< Float >)(null())),null());
					HX_STACK_LINE(35)
					tmp4 = _this;
				}
				HX_STACK_LINE(35)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(35)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				if ((tmp4)){
					HX_STACK_LINE(35)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(35)
					{
						HX_STACK_LINE(35)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(35)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(35)
						::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(35)
						::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(35)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(35)
						int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(35)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(35)
						int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(35)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(35)
						int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(35)
						int elementSize = _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic );		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(35)
						int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(35)
						int tmp12 = _this->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(35)
						bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(35)
						if ((tmp13)){
							HX_STACK_LINE(35)
							int srcLength1 = srcData->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(35)
							int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(35)
							int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(35)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(35)
							{
								HX_STACK_LINE(35)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(35)
								int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(35)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(35)
								this2 = tmp17;
								HX_STACK_LINE(35)
								tmp15 = this2;
							}
							HX_STACK_LINE(35)
							_this->__FieldRef(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")) = tmp15;
							HX_STACK_LINE(35)
							::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(35)
							int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(35)
							int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(35)
							_this->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("blit","\x35","\x38","\x19","\x41"), hx::paccDynamic )((int)0,tmp16,tmp17,tmp18);
						}
						else{
							HX_STACK_LINE(35)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(35)
						int tmp14 = (_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ) * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(35)
						_this->__FieldRef(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")) = tmp14;
						HX_STACK_LINE(35)
						_this->__FieldRef(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")) = (int)0;
						HX_STACK_LINE(35)
						_this->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = srcLength;
						HX_STACK_LINE(35)
						tmp5 = _this;
					}
					HX_STACK_LINE(35)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(35)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(35)
					if ((tmp5)){
						HX_STACK_LINE(35)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(35)
						{
							HX_STACK_LINE(35)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(35)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(35)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(35)
							if ((tmp8)){
								HX_STACK_LINE(35)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(35)
							int tmp9 = hx::Mod((int)0,_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(35)
							bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(35)
							if ((tmp10)){
								HX_STACK_LINE(35)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(35)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(35)
							int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(35)
							int elementSize = _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic );		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(35)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(35)
							bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(35)
							if ((tmp12)){
								HX_STACK_LINE(35)
								int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(35)
								newByteLength = tmp13;
								HX_STACK_LINE(35)
								int tmp14 = hx::Mod(bufferByteLength,_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(35)
								bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(35)
								if ((tmp15)){
									HX_STACK_LINE(35)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(35)
								bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(35)
								if ((tmp16)){
									HX_STACK_LINE(35)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(35)
								int tmp13 = (null() * _this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(35)
								newByteLength = tmp13;
								HX_STACK_LINE(35)
								int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(35)
								int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(35)
								bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(35)
								if ((tmp15)){
									HX_STACK_LINE(35)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(35)
							_this->__FieldRef(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")) = null();
							HX_STACK_LINE(35)
							_this->__FieldRef(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")) = (int)0;
							HX_STACK_LINE(35)
							_this->__FieldRef(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")) = newByteLength;
							HX_STACK_LINE(35)
							Float tmp13 = (Float(newByteLength) / Float(_this->__Field(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"), hx::paccDynamic )));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(35)
							int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(35)
							_this->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = tmp14;
							HX_STACK_LINE(35)
							tmp6 = _this;
						}
						HX_STACK_LINE(35)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(35)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(35)
		tmp1 = this1;
	}
	HX_STACK_LINE(35)
	::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp = tmp1;
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		while((true)){
			HX_STACK_LINE(37)
			bool tmp2 = (_g < (int)255);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(37)
			if ((tmp3)){
				HX_STACK_LINE(37)
				break;
			}
			HX_STACK_LINE(37)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::lime::utils::ArrayBufferView tmp5 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(39)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					::__hxcpp_memory_set_byte(this1->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),(this1->__Field(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"), hx::paccDynamic ) + i),i);
					HX_STACK_LINE(39)
					i;
				}
			}
		}
	}
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g1 = (int)255;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		int tmp2 = (int)510;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			if ((tmp5)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::lime::utils::ArrayBufferView tmp7 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				::lime::utils::ArrayBufferView this1 = tmp7;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::__hxcpp_memory_set_byte(this1->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ),(this1->__Field(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"), hx::paccDynamic ) + i),(int)255);
					HX_STACK_LINE(45)
					(int)255;
				}
			}
		}
	}
}
}

::lime::utils::ArrayBufferView RGBA_Impl__obj::__alpha16;

::lime::utils::ArrayBufferView RGBA_Impl__obj::__clamp;

int RGBA_Impl__obj::a16;

Float RGBA_Impl__obj::unmult;

int RGBA_Impl__obj::_new( hx::Null< int >  __o_rgba){
int rgba = __o_rgba.Default(0);
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","_new",0x71261268,"lime.math.color._RGBA.RGBA_Impl_._new","lime/math/color/RGBA.hx",54,0x1583b2d1)
	HX_STACK_ARG(rgba,"rgba")
{
		HX_STACK_LINE(54)
		int tmp = rgba;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,_new,return )

int RGBA_Impl__obj::create( int r,int g,int b,int a){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","create",0x7b94f3c3,"lime.math.color._RGBA.RGBA_Impl_.create","lime/math/color/RGBA.hx",59,0x1583b2d1)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(61)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
		HX_STACK_LINE(61)
		tmp = rgba;
	}
	HX_STACK_LINE(61)
	int rgba = tmp;		HX_STACK_VAR(rgba,"rgba");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int tmp1 = (int(r) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		int tmp3 = (int(g) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		int tmp5 = (int(tmp2) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		int tmp6 = (int(b) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		int tmp8 = (int(tmp5) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		int tmp9 = (int(a) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		rgba = tmp10;
	}
	HX_STACK_LINE(63)
	int tmp1 = rgba;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(RGBA_Impl__obj,create,return )

Void RGBA_Impl__obj::multiplyAlpha( int this1){
{
		HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","multiplyAlpha",0xa2d79cb3,"lime.math.color._RGBA.RGBA_Impl_.multiplyAlpha","lime/math/color/RGBA.hx",68,0x1583b2d1)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(70)
		int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(72)
			bool tmp2 = (this1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			if ((tmp2)){
				HX_STACK_LINE(74)
				this1 = (int)0;
			}
		}
		else{
			HX_STACK_LINE(78)
			int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			bool tmp3 = (tmp2 != (int)255);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			if ((tmp3)){
				HX_STACK_LINE(80)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView tmp5 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView this2 = tmp5;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(80)
						tmp4 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + (((int(this1) & int((int)255))) * (int)4)));
					}
				}
				HX_STACK_LINE(80)
				::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp4;
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					int tmp5 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(81)
					int tmp7 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(81)
					int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					int tmp9 = (int(tmp8) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(81)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(81)
					int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(81)
					int tmp12 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(81)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(81)
					int tmp14 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(81)
					int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(81)
					int tmp16 = (int(tmp15) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(81)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(81)
					int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(81)
					int tmp19 = (int(tmp11) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(81)
					int tmp20 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(81)
					int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(81)
					int tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(81)
					int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(81)
					int tmp24 = (int(tmp23) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(81)
					int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(81)
					int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(81)
					int tmp27 = (int(tmp19) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(81)
					int tmp28 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(81)
					int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(81)
					int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(81)
					this1 = tmp30;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,multiplyAlpha,(void))

Void RGBA_Impl__obj::readUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","readUInt8",0x2e6105e1,"lime.math.color._RGBA.RGBA_Impl_.readUInt8","lime/math/color/RGBA.hx",88,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(premultiplied,"premultiplied")
{
		HX_STACK_LINE(90)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		switch( (int)(tmp)){
			case (int)2: {
				HX_STACK_LINE(94)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				int r = tmp2;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(94)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(94)
				int g = tmp4;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(94)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(94)
				int b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(94)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(94)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(94)
				int a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(94)
				int tmp9 = (int(r) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				int tmp11 = (int(g) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(94)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(94)
				int tmp14 = (int(b) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(94)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(94)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(94)
				int tmp17 = (int(a) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(94)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(94)
				this1 = tmp18;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(98)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(98)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				int r = tmp2;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(98)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(98)
				int g = tmp4;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(98)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(98)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(98)
				int b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(98)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				int a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(98)
				int tmp9 = (int(r) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				int tmp11 = (int(g) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(98)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(98)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(98)
				int tmp14 = (int(b) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(98)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(98)
				int tmp17 = (int(a) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(98)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(98)
				this1 = tmp18;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(102)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(102)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(102)
				int r = tmp2;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(102)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				int g = tmp4;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(102)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				int b = tmp6;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(102)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				int a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(102)
				int tmp9 = (int(r) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				int tmp11 = (int(g) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				int tmp14 = (int(b) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				int tmp17 = (int(a) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				this1 = tmp18;
			}
			;break;
		}
		HX_STACK_LINE(106)
		bool tmp1 = premultiplied;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(108)
			int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			if ((tmp3)){
				HX_STACK_LINE(108)
				int tmp5 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				tmp4 = (tmp6 != (int)255);
			}
			else{
				HX_STACK_LINE(108)
				tmp4 = false;
			}
			HX_STACK_LINE(108)
			if ((tmp4)){
				HX_STACK_LINE(108)
				int tmp5 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				Float tmp6 = (Float(((Float)255.0)) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp6;
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView this2 = tmp8;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(108)
						int tmp9 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(108)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(108)
						Float tmp11 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(108)
						int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(108)
						int idx = tmp13;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(108)
						int tmp14 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(108)
						tmp7 = (int(tmp14) & int((int)255));
					}
					HX_STACK_LINE(108)
					int r = tmp7;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(108)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView tmp9 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView this2 = tmp9;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(108)
						int tmp10 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(108)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						Float tmp12 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(108)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(108)
						int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(108)
						int idx = tmp14;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(108)
						int tmp15 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(108)
						tmp8 = (int(tmp15) & int((int)255));
					}
					HX_STACK_LINE(108)
					int g = tmp8;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(108)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView tmp10 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView this2 = tmp10;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(108)
						int tmp11 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(108)
						Float tmp13 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(108)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(108)
						int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(108)
						int idx = tmp15;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(108)
						int tmp16 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(108)
						tmp9 = (int(tmp16) & int((int)255));
					}
					HX_STACK_LINE(108)
					int b = tmp9;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(108)
					int tmp10 = (int(r) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(108)
					int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(108)
					int tmp12 = (int(g) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(108)
					int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(108)
					int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(108)
					int tmp15 = (int(b) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(108)
					int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(108)
					int tmp17 = (int(tmp14) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(108)
					int tmp18 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(108)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(108)
					int tmp20 = (int(tmp17) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(108)
					this1 = tmp20;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RGBA_Impl__obj,readUInt8,(void))

Void RGBA_Impl__obj::set( int this1,int r,int g,int b,int a){
{
		HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","set",0x5fd95c7b,"lime.math.color._RGBA.RGBA_Impl_.set","lime/math/color/RGBA.hx",115,0x1583b2d1)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(117)
		int tmp = (int(r) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		int tmp2 = (int(g) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		int tmp4 = (int(tmp1) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(117)
		int tmp5 = (int(b) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		int tmp6 = (int(tmp5) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		int tmp8 = (int(a) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		this1 = tmp9;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RGBA_Impl__obj,set,(void))

Void RGBA_Impl__obj::unmultiplyAlpha( int this1){
{
		HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","unmultiplyAlpha",0xc3e2eafa,"lime.math.color._RGBA.RGBA_Impl_.unmultiplyAlpha","lime/math/color/RGBA.hx",122,0x1583b2d1)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(124)
		int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(124)
			int tmp3 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			tmp2 = (tmp4 != (int)255);
		}
		else{
			HX_STACK_LINE(124)
			tmp2 = false;
		}
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(126)
			int tmp3 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Float tmp4 = (Float(((Float)255.0)) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp4;
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					::lime::utils::ArrayBufferView tmp6 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(127)
					::lime::utils::ArrayBufferView this2 = tmp6;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(127)
					int tmp7 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(127)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(127)
					Float tmp9 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(127)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(127)
					int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(127)
					int idx = tmp11;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(127)
					int tmp12 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(127)
					tmp5 = (int(tmp12) & int((int)255));
				}
				HX_STACK_LINE(127)
				int r = tmp5;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(127)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					::lime::utils::ArrayBufferView tmp7 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(127)
					::lime::utils::ArrayBufferView this2 = tmp7;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(127)
					int tmp8 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(127)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(127)
					Float tmp10 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(127)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(127)
					int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(127)
					int idx = tmp12;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(127)
					int tmp13 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(127)
					tmp6 = (int(tmp13) & int((int)255));
				}
				HX_STACK_LINE(127)
				int g = tmp6;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(127)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					::lime::utils::ArrayBufferView tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(127)
					::lime::utils::ArrayBufferView this2 = tmp8;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(127)
					int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(127)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(127)
					Float tmp11 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(127)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(127)
					int tmp13 = ::Math_obj::round(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(127)
					int idx = tmp13;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(127)
					int tmp14 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(127)
					tmp7 = (int(tmp14) & int((int)255));
				}
				HX_STACK_LINE(127)
				int b = tmp7;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(127)
				int tmp8 = (int(r) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(127)
				int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(127)
				int tmp10 = (int(g) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(127)
				int tmp13 = (int(b) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(127)
				int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(127)
				int tmp15 = (int(tmp12) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(127)
				int tmp16 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(127)
				int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(127)
				int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(127)
				this1 = tmp18;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,unmultiplyAlpha,(void))

Void RGBA_Impl__obj::writeUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","writeUInt8",0x77314666,"lime.math.color._RGBA.RGBA_Impl_.writeUInt8","lime/math/color/RGBA.hx",134,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(premultiplied,"premultiplied")
{
		HX_STACK_LINE(136)
		bool tmp = premultiplied;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		if ((tmp)){
			HX_STACK_LINE(138)
			int tmp1 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			if ((tmp2)){
				HX_STACK_LINE(138)
				bool tmp3 = (this1 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				if ((tmp3)){
					HX_STACK_LINE(138)
					this1 = (int)0;
				}
			}
			else{
				HX_STACK_LINE(138)
				int tmp3 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				bool tmp4 = (tmp3 != (int)255);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(138)
				if ((tmp4)){
					HX_STACK_LINE(138)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(138)
						::lime::utils::ArrayBufferView tmp6 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(138)
						::lime::utils::ArrayBufferView this2 = tmp6;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(138)
						{
							HX_STACK_LINE(138)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(138)
							tmp5 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + (((int(this1) & int((int)255))) * (int)4)));
						}
					}
					HX_STACK_LINE(138)
					::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp5;
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(138)
						int tmp6 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(138)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(138)
						int tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(138)
						int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(138)
						int tmp10 = (int(tmp9) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(138)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(138)
						int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(138)
						int tmp13 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(138)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(138)
						int tmp15 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(138)
						int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(138)
						int tmp17 = (int(tmp16) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(138)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(138)
						int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(138)
						int tmp20 = (int(tmp12) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(138)
						int tmp21 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(138)
						int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(138)
						int tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(138)
						int tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(138)
						int tmp25 = (int(tmp24) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(138)
						int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(138)
						int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(138)
						int tmp28 = (int(tmp20) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(138)
						int tmp29 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(138)
						int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(138)
						int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(138)
						this1 = tmp31;
					}
				}
			}
		}
		HX_STACK_LINE(142)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		switch( (int)(tmp1)){
			case (int)2: {
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(146)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(146)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(146)
					{
						HX_STACK_LINE(146)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(146)
						val;
					}
				}
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(147)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(147)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(147)
						val;
					}
				}
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(148)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(148)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(148)
						val;
					}
				}
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(149)
					int val = tmp2;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(149)
						val;
					}
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(153)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(153)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(153)
					{
						HX_STACK_LINE(153)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(153)
						val;
					}
				}
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(154)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(154)
						val;
					}
				}
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(155)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(155)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(155)
					{
						HX_STACK_LINE(155)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(155)
						val;
					}
				}
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(156)
					int val = tmp2;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(156)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(156)
						val;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(160)
				{
					HX_STACK_LINE(160)
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(160)
					int val = tmp2;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(160)
					{
						HX_STACK_LINE(160)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(160)
						val;
					}
				}
				HX_STACK_LINE(161)
				{
					HX_STACK_LINE(161)
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(161)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(161)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(161)
						val;
					}
				}
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(162)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(162)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(162)
					{
						HX_STACK_LINE(162)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(162)
						val;
					}
				}
				HX_STACK_LINE(163)
				{
					HX_STACK_LINE(163)
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(163)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(163)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(163)
						val;
					}
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RGBA_Impl__obj,writeUInt8,(void))

int RGBA_Impl__obj::__fromARGB( int argb){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","__fromARGB",0x9559671d,"lime.math.color._RGBA.RGBA_Impl_.__fromARGB","lime/math/color/RGBA.hx",170,0x1583b2d1)
	HX_STACK_ARG(argb,"argb")
	HX_STACK_LINE(172)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(172)
			tmp1 = rgba;
		}
		HX_STACK_LINE(172)
		int rgba = tmp1;		HX_STACK_VAR(rgba,"rgba");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			int tmp2 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			int tmp6 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			int tmp11 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(172)
			int tmp14 = (int(tmp10) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(172)
			int tmp15 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(172)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(172)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(172)
			int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(172)
			rgba = tmp18;
		}
		HX_STACK_LINE(172)
		tmp = rgba;
	}
	HX_STACK_LINE(172)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,__fromARGB,return )

int RGBA_Impl__obj::__fromBGRA( int bgra){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","__fromBGRA",0x95fa4e85,"lime.math.color._RGBA.RGBA_Impl_.__fromBGRA","lime/math/color/RGBA.hx",177,0x1583b2d1)
	HX_STACK_ARG(bgra,"bgra")
	HX_STACK_LINE(179)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(179)
			tmp1 = rgba;
		}
		HX_STACK_LINE(179)
		int rgba = tmp1;		HX_STACK_VAR(rgba,"rgba");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int tmp2 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			int tmp6 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			int tmp11 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(179)
			int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(179)
			int tmp16 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(179)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(179)
			int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(179)
			rgba = tmp18;
		}
		HX_STACK_LINE(179)
		tmp = rgba;
	}
	HX_STACK_LINE(179)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,__fromBGRA,return )

int RGBA_Impl__obj::get_a( int this1){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","get_a",0x25770e51,"lime.math.color._RGBA.RGBA_Impl_.get_a","lime/math/color/RGBA.hx",191,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(193)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_a,return )

int RGBA_Impl__obj::set_a( int this1,int value){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","set_a",0x0e46045d,"lime.math.color._RGBA.RGBA_Impl_.set_a","lime/math/color/RGBA.hx",198,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(200)
		int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(200)
		int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(200)
		int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(200)
		int tmp14 = (int(value) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(200)
		int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(200)
		this1 = tmp15;
	}
	HX_STACK_LINE(201)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_a,return )

int RGBA_Impl__obj::get_b( int this1){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","get_b",0x25770e52,"lime.math.color._RGBA.RGBA_Impl_.get_b","lime/math/color/RGBA.hx",206,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(208)
	int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_b,return )

int RGBA_Impl__obj::set_b( int this1,int value){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","set_b",0x0e46045e,"lime.math.color._RGBA.RGBA_Impl_.set_b","lime/math/color/RGBA.hx",213,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		int tmp9 = (int(value) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		int tmp11 = (int(tmp8) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(215)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(215)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(215)
		this1 = tmp14;
	}
	HX_STACK_LINE(216)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_b,return )

int RGBA_Impl__obj::get_g( int this1){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","get_g",0x25770e57,"lime.math.color._RGBA.RGBA_Impl_.get_g","lime/math/color/RGBA.hx",221,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(223)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_g,return )

int RGBA_Impl__obj::set_g( int this1,int value){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","set_g",0x0e460463,"lime.math.color._RGBA.RGBA_Impl_.set_g","lime/math/color/RGBA.hx",228,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		int tmp6 = (int(tmp3) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(230)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(230)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(230)
		int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(230)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(230)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(230)
		this1 = tmp14;
	}
	HX_STACK_LINE(231)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_g,return )

int RGBA_Impl__obj::get_r( int this1){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","get_r",0x25770e62,"lime.math.color._RGBA.RGBA_Impl_.get_r","lime/math/color/RGBA.hx",236,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(238)
	int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_r,return )

int RGBA_Impl__obj::set_r( int this1,int value){
	HX_STACK_FRAME("lime.math.color._RGBA.RGBA_Impl_","set_r",0x0e46046e,"lime.math.color._RGBA.RGBA_Impl_.set_r","lime/math/color/RGBA.hx",243,0x1583b2d1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		int tmp = (int(value) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		int tmp6 = (int(tmp1) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(245)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(245)
		int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(245)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(245)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(245)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(245)
		this1 = tmp14;
	}
	HX_STACK_LINE(246)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_r,return )


RGBA_Impl__obj::RGBA_Impl__obj()
{
}

bool RGBA_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__fromARGB") ) { outValue = __fromARGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__fromBGRA") ) { outValue = __fromBGRA_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &RGBA_Impl__obj::__alpha16,HX_HCSTRING("__alpha16","\xa3","\x36","\x64","\x33")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &RGBA_Impl__obj::__clamp,HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2")},
	{hx::fsInt,(void *) &RGBA_Impl__obj::a16,HX_HCSTRING("a16","\x86","\xc5","\x49","\x00")},
	{hx::fsFloat,(void *) &RGBA_Impl__obj::unmult,HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::__alpha16,"__alpha16");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::__clamp,"__clamp");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::__alpha16,"__alpha16");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::__clamp,"__clamp");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::unmult,"unmult");
};

#endif

hx::Class RGBA_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__alpha16","\xa3","\x36","\x64","\x33"),
	HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2"),
	HX_HCSTRING("a16","\x86","\xc5","\x49","\x00"),
	HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("readUInt8","\x48","\x9c","\x5d","\x5f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("writeUInt8","\x1f","\x4a","\x38","\x23"),
	HX_HCSTRING("__fromARGB","\xd6","\x6a","\x60","\x41"),
	HX_HCSTRING("__fromBGRA","\x3e","\x52","\x01","\x42"),
	HX_HCSTRING("get_a","\x38","\xa5","\x60","\x91"),
	HX_HCSTRING("set_a","\x44","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_b","\x39","\xa5","\x60","\x91"),
	HX_HCSTRING("set_b","\x45","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_g","\x3e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_g","\x4a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_r","\x49","\xa5","\x60","\x91"),
	HX_HCSTRING("set_r","\x55","\x9b","\x2f","\x7a"),
	::String(null()) };

void RGBA_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.color._RGBA.RGBA_Impl_","\xc7","\x80","\x1c","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RGBA_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RGBA_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace math
} // end namespace color
} // end namespace _RGBA
