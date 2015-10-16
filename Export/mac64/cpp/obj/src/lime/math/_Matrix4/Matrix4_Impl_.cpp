#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace math{
namespace _Matrix4{

Void Matrix4_Impl__obj::__construct()
{
	return null();
}

//Matrix4_Impl__obj::~Matrix4_Impl__obj() { }

Dynamic Matrix4_Impl__obj::__CreateEmpty() { return  new Matrix4_Impl__obj; }
hx::ObjectPtr< Matrix4_Impl__obj > Matrix4_Impl__obj::__new()
{  hx::ObjectPtr< Matrix4_Impl__obj > _result_ = new Matrix4_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Matrix4_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix4_Impl__obj > _result_ = new Matrix4_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< Float > Matrix4_Impl__obj::__identity;

::lime::utils::ArrayBufferView Matrix4_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","_new",0x84b003e9,"lime.math._Matrix4.Matrix4_Impl_._new","lime/math/Matrix4.hx",16,0xeb65dbd8)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(16)
	::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(18)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(18)
		int tmp2 = data->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		tmp1 = (tmp3 == (int)16);
	}
	else{
		HX_STACK_LINE(18)
		tmp1 = false;
	}
	HX_STACK_LINE(18)
	if ((tmp1)){
		HX_STACK_LINE(20)
		this1 = data;
	}
	else{
		HX_STACK_LINE(24)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			cpp::ArrayBase array = ::lime::math::_Matrix4::Matrix4_Impl__obj::__identity;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(24)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(24)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			if ((tmp3)){
				HX_STACK_LINE(24)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(24)
				bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				if ((tmp4)){
					HX_STACK_LINE(24)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					{
						HX_STACK_LINE(24)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(24)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(24)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(24)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(24)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(24)
						_this->byteLength = tmp7;
						HX_STACK_LINE(24)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(24)
						{
							HX_STACK_LINE(24)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(24)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(24)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(24)
							this3 = tmp10;
							HX_STACK_LINE(24)
							tmp8 = this3;
						}
						HX_STACK_LINE(24)
						_this->buffer = tmp8;
						HX_STACK_LINE(24)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(24)
						tmp5 = _this;
					}
					HX_STACK_LINE(24)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(24)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					if ((tmp5)){
						HX_STACK_LINE(24)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(24)
						{
							HX_STACK_LINE(24)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(24)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(24)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(24)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(24)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(24)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(24)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(24)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(24)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(24)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(24)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(24)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(24)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(24)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(24)
							if ((tmp14)){
								HX_STACK_LINE(24)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(24)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(24)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(24)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(24)
								{
									HX_STACK_LINE(24)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(24)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(24)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(24)
									this3 = tmp18;
									HX_STACK_LINE(24)
									tmp16 = this3;
								}
								HX_STACK_LINE(24)
								_this->buffer = tmp16;
								HX_STACK_LINE(24)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(24)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(24)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(24)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(24)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(24)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(24)
							_this->byteLength = tmp15;
							HX_STACK_LINE(24)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(24)
							_this->length = srcLength;
							HX_STACK_LINE(24)
							tmp6 = _this;
						}
						HX_STACK_LINE(24)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(24)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(24)
						if ((tmp6)){
							HX_STACK_LINE(24)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(24)
							{
								HX_STACK_LINE(24)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(24)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(24)
								bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(24)
								if ((tmp9)){
									HX_STACK_LINE(24)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(24)
								int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(24)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(24)
								if ((tmp11)){
									HX_STACK_LINE(24)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(24)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(24)
								int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(24)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(24)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(24)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(24)
								if ((tmp13)){
									HX_STACK_LINE(24)
									int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(24)
									newByteLength = tmp14;
									HX_STACK_LINE(24)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(24)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(24)
									if ((tmp16)){
										HX_STACK_LINE(24)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(24)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(24)
									if ((tmp17)){
										HX_STACK_LINE(24)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(24)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(24)
									newByteLength = tmp14;
									HX_STACK_LINE(24)
									int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(24)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(24)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(24)
									if ((tmp16)){
										HX_STACK_LINE(24)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(24)
								_this->buffer = null();
								HX_STACK_LINE(24)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(24)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(24)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(24)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(24)
								_this->length = tmp15;
								HX_STACK_LINE(24)
								tmp7 = _this;
							}
							HX_STACK_LINE(24)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(24)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(24)
			tmp2 = this2;
		}
		HX_STACK_LINE(24)
		this1 = tmp2;
	}
	HX_STACK_LINE(16)
	::lime::utils::ArrayBufferView tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,_new,return )

Void Matrix4_Impl__obj::append( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView lhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","append",0x0e638262,"lime.math._Matrix4.Matrix4_Impl_.append","lime/math/Matrix4.hx",31,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(33)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(33)
			tmp = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
		}
		HX_STACK_LINE(33)
		Float m111 = tmp;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(33)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(33)
			tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
		}
		HX_STACK_LINE(33)
		Float m121 = tmp1;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(33)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(33)
			tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
		}
		HX_STACK_LINE(33)
		Float m131 = tmp2;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(33)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(33)
			tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
		}
		HX_STACK_LINE(33)
		Float m141 = tmp3;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(34)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(34)
			tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
		}
		HX_STACK_LINE(34)
		Float m112 = tmp4;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(34)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(34)
			tmp5 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
		}
		HX_STACK_LINE(34)
		Float m122 = tmp5;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(34)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(34)
			tmp6 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
		}
		HX_STACK_LINE(34)
		Float m132 = tmp6;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(34)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(34)
			tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
		}
		HX_STACK_LINE(34)
		Float m142 = tmp7;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(35)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(35)
			tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
		}
		HX_STACK_LINE(35)
		Float m113 = tmp8;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(35)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(35)
			tmp9 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
		}
		HX_STACK_LINE(35)
		Float m123 = tmp9;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(35)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(35)
			tmp10 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
		}
		HX_STACK_LINE(35)
		Float m133 = tmp10;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(35)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(35)
			tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
		}
		HX_STACK_LINE(35)
		Float m143 = tmp11;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(36)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(36)
			tmp12 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
		}
		HX_STACK_LINE(36)
		Float m114 = tmp12;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(36)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(36)
			tmp13 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
		}
		HX_STACK_LINE(36)
		Float m124 = tmp13;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(36)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(36)
			tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
		}
		HX_STACK_LINE(36)
		Float m134 = tmp14;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(36)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(36)
			tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
		}
		HX_STACK_LINE(36)
		Float m144 = tmp15;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(37)
		::lime::utils::ArrayBufferView tmp16 = lhs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(37)
		Float tmp17 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp16,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		Float m211 = tmp17;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(37)
		::lime::utils::ArrayBufferView tmp18 = lhs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		Float tmp19 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp18,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		Float m221 = tmp19;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(37)
		::lime::utils::ArrayBufferView tmp20 = lhs;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		Float tmp21 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp20,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(37)
		Float m231 = tmp21;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(37)
		::lime::utils::ArrayBufferView tmp22 = lhs;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		Float tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp22,(int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		Float m241 = tmp23;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp24 = lhs;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp24,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		Float m212 = tmp25;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp26 = lhs;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(38)
		Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp26,(int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		Float m222 = tmp27;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp28 = lhs;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		Float tmp29 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp28,(int)9);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		Float m232 = tmp29;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(38)
		::lime::utils::ArrayBufferView tmp30 = lhs;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		Float tmp31 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp30,(int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		Float m242 = tmp31;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp32 = lhs;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		Float tmp33 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp32,(int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(39)
		Float m213 = tmp33;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp34 = lhs;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		Float tmp35 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp34,(int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		Float m223 = tmp35;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp36 = lhs;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(39)
		Float tmp37 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp36,(int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(39)
		Float m233 = tmp37;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(39)
		::lime::utils::ArrayBufferView tmp38 = lhs;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(39)
		Float tmp39 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp38,(int)14);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(39)
		Float m243 = tmp39;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp40 = lhs;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(40)
		Float tmp41 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp40,(int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(40)
		Float m214 = tmp41;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp42 = lhs;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(40)
		Float tmp43 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp42,(int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(40)
		Float m224 = tmp43;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp44 = lhs;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(40)
		Float tmp45 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp44,(int)11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(40)
		Float m234 = tmp45;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp46 = lhs;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(40)
		Float tmp47 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp46,(int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(40)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			Float tmp48 = (m111 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(42)
			Float tmp49 = (m112 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(42)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(42)
			Float tmp51 = (m113 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(42)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(42)
			Float tmp53 = (m114 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(42)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(42)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(42)
				::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
				HX_STACK_LINE(42)
				val;
			}
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			Float tmp48 = (m111 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(43)
			Float tmp49 = (m112 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(43)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(43)
			Float tmp51 = (m113 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(43)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(43)
			Float tmp53 = (m114 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(43)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(43)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(43)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				HX_STACK_LINE(43)
				val;
			}
		}
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			Float tmp48 = (m111 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(44)
			Float tmp49 = (m112 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(44)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(44)
			Float tmp51 = (m113 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(44)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(44)
			Float tmp53 = (m114 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(44)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(44)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(44)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				HX_STACK_LINE(44)
				val;
			}
		}
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			Float tmp48 = (m111 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(45)
			Float tmp49 = (m112 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(45)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(45)
			Float tmp51 = (m113 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(45)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(45)
			Float tmp53 = (m114 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(45)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(45)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(45)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				HX_STACK_LINE(45)
				val;
			}
		}
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			Float tmp48 = (m121 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(47)
			Float tmp49 = (m122 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(47)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(47)
			Float tmp51 = (m123 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(47)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(47)
			Float tmp53 = (m124 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(47)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(47)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(47)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				HX_STACK_LINE(47)
				val;
			}
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			Float tmp48 = (m121 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(48)
			Float tmp49 = (m122 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(48)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(48)
			Float tmp51 = (m123 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(48)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(48)
			Float tmp53 = (m124 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(48)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(48)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(48)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
				HX_STACK_LINE(48)
				val;
			}
		}
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			Float tmp48 = (m121 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(49)
			Float tmp49 = (m122 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(49)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(49)
			Float tmp51 = (m123 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(49)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(49)
			Float tmp53 = (m124 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(49)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(49)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(49)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				HX_STACK_LINE(49)
				val;
			}
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			Float tmp48 = (m121 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(50)
			Float tmp49 = (m122 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(50)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(50)
			Float tmp51 = (m123 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(50)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(50)
			Float tmp53 = (m124 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(50)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(50)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(50)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				HX_STACK_LINE(50)
				val;
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			Float tmp48 = (m131 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(52)
			Float tmp49 = (m132 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(52)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(52)
			Float tmp51 = (m133 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(52)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(52)
			Float tmp53 = (m134 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(52)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(52)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(52)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
				HX_STACK_LINE(52)
				val;
			}
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			Float tmp48 = (m131 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(53)
			Float tmp49 = (m132 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(53)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(53)
			Float tmp51 = (m133 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(53)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(53)
			Float tmp53 = (m134 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(53)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(53)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(53)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
				HX_STACK_LINE(53)
				val;
			}
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			Float tmp48 = (m131 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(54)
			Float tmp49 = (m132 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(54)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(54)
			Float tmp51 = (m133 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(54)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(54)
			Float tmp53 = (m134 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(54)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(54)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(54)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
				HX_STACK_LINE(54)
				val;
			}
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Float tmp48 = (m131 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(55)
			Float tmp49 = (m132 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(55)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(55)
			Float tmp51 = (m133 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(55)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(55)
			Float tmp53 = (m134 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(55)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(55)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(55)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
				HX_STACK_LINE(55)
				val;
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			Float tmp48 = (m141 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(57)
			Float tmp49 = (m142 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(57)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(57)
			Float tmp51 = (m143 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(57)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(57)
			Float tmp53 = (m144 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(57)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(57)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(57)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
				HX_STACK_LINE(57)
				val;
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Float tmp48 = (m141 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(58)
			Float tmp49 = (m142 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(58)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(58)
			Float tmp51 = (m143 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(58)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(58)
			Float tmp53 = (m144 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(58)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(58)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(58)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
				HX_STACK_LINE(58)
				val;
			}
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			Float tmp48 = (m141 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(59)
			Float tmp49 = (m142 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(59)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(59)
			Float tmp51 = (m143 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(59)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(59)
			Float tmp53 = (m144 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(59)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(59)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(59)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
				HX_STACK_LINE(59)
				val;
			}
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			Float tmp48 = (m141 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(60)
			Float tmp49 = (m142 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(60)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(60)
			Float tmp51 = (m143 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(60)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(60)
			Float tmp53 = (m144 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(60)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(60)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(60)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
				HX_STACK_LINE(60)
				val;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,append,(void))

Void Matrix4_Impl__obj::appendRotation( ::lime::utils::ArrayBufferView this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendRotation",0xe357adc0,"lime.math._Matrix4.Matrix4_Impl_.appendRotation","lime/math/Matrix4.hx",65,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(67)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::lime::utils::ArrayBufferView tmp4 = ::lime::math::_Matrix4::Matrix4_Impl__obj::getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::lime::utils::ArrayBufferView m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(69)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(71)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(72)
			::lime::utils::ArrayBufferView tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			Float tmp7 = p->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			Float tmp8 = p->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			Float tmp9 = p->z;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(tmp6,tmp7,tmp8,tmp9);
		}
		HX_STACK_LINE(76)
		::lime::utils::ArrayBufferView tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		::lime::utils::ArrayBufferView tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendRotation,(void))

Void Matrix4_Impl__obj::appendScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendScale",0x8a9ad8c8,"lime.math._Matrix4.Matrix4_Impl_.appendScale","lime/math/Matrix4.hx",81,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(83)
		::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(83)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(83)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			if ((tmp2)){
				HX_STACK_LINE(83)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(83)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(83)
				bool tmp3 = (array != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(83)
				if ((tmp3)){
					HX_STACK_LINE(83)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(83)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(83)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(83)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(83)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(83)
						_this->byteLength = tmp6;
						HX_STACK_LINE(83)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(83)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(83)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(83)
							this3 = tmp9;
							HX_STACK_LINE(83)
							tmp7 = this3;
						}
						HX_STACK_LINE(83)
						_this->buffer = tmp7;
						HX_STACK_LINE(83)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(83)
						tmp4 = _this;
					}
					HX_STACK_LINE(83)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(83)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(83)
					if ((tmp4)){
						HX_STACK_LINE(83)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(83)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(83)
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(83)
							::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(83)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(83)
							int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(83)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(83)
							int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(83)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(83)
							int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(83)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(83)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(83)
							int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(83)
							if ((tmp13)){
								HX_STACK_LINE(83)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(83)
								int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(83)
								int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(83)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(83)
								{
									HX_STACK_LINE(83)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(83)
									int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(83)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(83)
									this3 = tmp17;
									HX_STACK_LINE(83)
									tmp15 = this3;
								}
								HX_STACK_LINE(83)
								_this->buffer = tmp15;
								HX_STACK_LINE(83)
								::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(83)
								int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(83)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(83)
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_LINE(83)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(83)
							int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(83)
							_this->byteLength = tmp14;
							HX_STACK_LINE(83)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(83)
							_this->length = srcLength;
							HX_STACK_LINE(83)
							tmp5 = _this;
						}
						HX_STACK_LINE(83)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(83)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(83)
						if ((tmp5)){
							HX_STACK_LINE(83)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(83)
							{
								HX_STACK_LINE(83)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(83)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(83)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(83)
								if ((tmp8)){
									HX_STACK_LINE(83)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(83)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(83)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(83)
								if ((tmp10)){
									HX_STACK_LINE(83)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(83)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(83)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(83)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(83)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(83)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(83)
								if ((tmp12)){
									HX_STACK_LINE(83)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(83)
									newByteLength = tmp13;
									HX_STACK_LINE(83)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(83)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(83)
									if ((tmp15)){
										HX_STACK_LINE(83)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(83)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(83)
									if ((tmp16)){
										HX_STACK_LINE(83)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(83)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(83)
									newByteLength = tmp13;
									HX_STACK_LINE(83)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(83)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(83)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(83)
									if ((tmp15)){
										HX_STACK_LINE(83)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(83)
								_this->buffer = null();
								HX_STACK_LINE(83)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(83)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(83)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(83)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(83)
								_this->length = tmp14;
								HX_STACK_LINE(83)
								tmp6 = _this;
							}
							HX_STACK_LINE(83)
							this2 = tmp6;
						}
						else{
							HX_STACK_LINE(83)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(83)
			tmp1 = this2;
		}
		HX_STACK_LINE(83)
		::lime::utils::ArrayBufferView tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendScale,(void))

Void Matrix4_Impl__obj::appendTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendTranslation",0xe6447daf,"lime.math._Matrix4.Matrix4_Impl_.appendTranslation","lime/math/Matrix4.hx",88,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			Float tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(90)
				tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
			}
			HX_STACK_LINE(90)
			Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(90)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			Float val = tmp2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(90)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
				HX_STACK_LINE(90)
				val;
			}
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Float tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(91)
				tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
			}
			HX_STACK_LINE(91)
			Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			Float val = tmp2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(91)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
				HX_STACK_LINE(91)
				val;
			}
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			Float tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(92)
				tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
			}
			HX_STACK_LINE(92)
			Float tmp1 = z;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			Float val = tmp2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(92)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
				HX_STACK_LINE(92)
				val;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendTranslation,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","clone",0xe1a2dbd5,"lime.math._Matrix4.Matrix4_Impl_.clone","lime/math/Matrix4.hx",97,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(99)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(99)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(99)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(99)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			if ((tmp2)){
				HX_STACK_LINE(99)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				{
					HX_STACK_LINE(99)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(99)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(99)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(99)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(99)
					_this->length = tmp5;
					HX_STACK_LINE(99)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(99)
					_this->byteLength = tmp6;
					HX_STACK_LINE(99)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(99)
					{
						HX_STACK_LINE(99)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(99)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(99)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(99)
						this3 = tmp9;
						HX_STACK_LINE(99)
						tmp7 = this3;
					}
					HX_STACK_LINE(99)
					_this->buffer = tmp7;
					HX_STACK_LINE(99)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(99)
					tmp3 = _this;
				}
				HX_STACK_LINE(99)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(99)
				bool tmp3 = (this1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				if ((tmp3)){
					HX_STACK_LINE(99)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(99)
					{
						HX_STACK_LINE(99)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(99)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(99)
						::haxe::io::Bytes srcData = this1->buffer;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(99)
						int srcLength = this1->length;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(99)
						int srcByteOffset = this1->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(99)
						int srcElementSize = this1->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(99)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(99)
						bool tmp6 = (this1->type == _this->type);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(99)
						if ((tmp6)){
							HX_STACK_LINE(99)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(99)
							int tmp7 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(99)
							int cloneLength = tmp7;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(99)
							::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(99)
							{
								HX_STACK_LINE(99)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(99)
								int tmp9 = cloneLength;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(99)
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(99)
								this3 = tmp10;
								HX_STACK_LINE(99)
								tmp8 = this3;
							}
							HX_STACK_LINE(99)
							_this->buffer = tmp8;
							HX_STACK_LINE(99)
							::haxe::io::Bytes tmp9 = srcData;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(99)
							int tmp10 = srcByteOffset;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(99)
							int tmp11 = cloneLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(99)
							_this->buffer->blit((int)0,tmp9,tmp10,tmp11);
						}
						else{
							HX_STACK_LINE(99)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(99)
						int tmp7 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(99)
						_this->byteLength = tmp7;
						HX_STACK_LINE(99)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(99)
						_this->length = srcLength;
						HX_STACK_LINE(99)
						tmp4 = _this;
					}
					HX_STACK_LINE(99)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(99)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(99)
					if ((tmp4)){
						HX_STACK_LINE(99)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(99)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(99)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(99)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(99)
							if ((tmp7)){
								HX_STACK_LINE(99)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(99)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(99)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(99)
							if ((tmp9)){
								HX_STACK_LINE(99)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(99)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(99)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(99)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(99)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(99)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(99)
							if ((tmp11)){
								HX_STACK_LINE(99)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(99)
								newByteLength = tmp12;
								HX_STACK_LINE(99)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(99)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(99)
								if ((tmp14)){
									HX_STACK_LINE(99)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(99)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(99)
								if ((tmp15)){
									HX_STACK_LINE(99)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(99)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(99)
								newByteLength = tmp12;
								HX_STACK_LINE(99)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(99)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(99)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(99)
								if ((tmp14)){
									HX_STACK_LINE(99)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(99)
							_this->buffer = null();
							HX_STACK_LINE(99)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(99)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(99)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(99)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(99)
							_this->length = tmp13;
							HX_STACK_LINE(99)
							tmp5 = _this;
						}
						HX_STACK_LINE(99)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(99)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(99)
		tmp = this2;
	}
	HX_STACK_LINE(99)
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,clone,return )

Void Matrix4_Impl__obj::copyColumnFrom( ::lime::utils::ArrayBufferView this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnFrom",0x5224fffd,"lime.math._Matrix4.Matrix4_Impl_.copyColumnFrom","lime/math/Matrix4.hx",104,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(106)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(109)
					{
						HX_STACK_LINE(109)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(109)
						::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
						HX_STACK_LINE(109)
						val;
					}
				}
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(110)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
						HX_STACK_LINE(110)
						val;
					}
				}
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(111)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
						HX_STACK_LINE(111)
						val;
					}
				}
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(112)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
						HX_STACK_LINE(112)
						val;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(114)
					{
						HX_STACK_LINE(114)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(114)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
						HX_STACK_LINE(114)
						val;
					}
				}
				HX_STACK_LINE(115)
				{
					HX_STACK_LINE(115)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(115)
					{
						HX_STACK_LINE(115)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(115)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
						HX_STACK_LINE(115)
						val;
					}
				}
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(116)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
						HX_STACK_LINE(116)
						val;
					}
				}
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(117)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
						HX_STACK_LINE(117)
						val;
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(119)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(119)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
						HX_STACK_LINE(119)
						val;
					}
				}
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(120)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
						HX_STACK_LINE(120)
						val;
					}
				}
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(121)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
						HX_STACK_LINE(121)
						val;
					}
				}
				HX_STACK_LINE(122)
				{
					HX_STACK_LINE(122)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(122)
					{
						HX_STACK_LINE(122)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(122)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
						HX_STACK_LINE(122)
						val;
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(124)
				{
					HX_STACK_LINE(124)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(124)
					{
						HX_STACK_LINE(124)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(124)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
						HX_STACK_LINE(124)
						val;
					}
				}
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(125)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
						HX_STACK_LINE(125)
						val;
					}
				}
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(126)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
						HX_STACK_LINE(126)
						val;
					}
				}
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(127)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
						HX_STACK_LINE(127)
						val;
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(129)
				::String tmp1 = (HX_HCSTRING("Error, Column ","\xce","\x33","\xbf","\x79") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(129)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(129)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnFrom,(void))

Void Matrix4_Impl__obj::copyColumnTo( ::lime::utils::ArrayBufferView this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnTo",0xcc64e54e,"lime.math._Matrix4.Matrix4_Impl_.copyColumnTo","lime/math/Matrix4.hx",136,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(138)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(141)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(141)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
				}
				HX_STACK_LINE(141)
				vector->x = tmp1;
				HX_STACK_LINE(142)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(142)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
				}
				HX_STACK_LINE(142)
				vector->y = tmp2;
				HX_STACK_LINE(143)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(143)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
				}
				HX_STACK_LINE(143)
				vector->z = tmp3;
				HX_STACK_LINE(144)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				{
					HX_STACK_LINE(144)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(144)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
				}
				HX_STACK_LINE(144)
				vector->w = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(146)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(146)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
				}
				HX_STACK_LINE(146)
				vector->x = tmp1;
				HX_STACK_LINE(147)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(147)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
				}
				HX_STACK_LINE(147)
				vector->y = tmp2;
				HX_STACK_LINE(148)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(148)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
				}
				HX_STACK_LINE(148)
				vector->z = tmp3;
				HX_STACK_LINE(149)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(149)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
				}
				HX_STACK_LINE(149)
				vector->w = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(151)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(151)
				{
					HX_STACK_LINE(151)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(151)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
				}
				HX_STACK_LINE(151)
				vector->x = tmp1;
				HX_STACK_LINE(152)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(152)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
				}
				HX_STACK_LINE(152)
				vector->y = tmp2;
				HX_STACK_LINE(153)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(153)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
				}
				HX_STACK_LINE(153)
				vector->z = tmp3;
				HX_STACK_LINE(154)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(154)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
				}
				HX_STACK_LINE(154)
				vector->w = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(156)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(156)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
				}
				HX_STACK_LINE(156)
				vector->x = tmp1;
				HX_STACK_LINE(157)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(157)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
				}
				HX_STACK_LINE(157)
				vector->y = tmp2;
				HX_STACK_LINE(158)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(158)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
				}
				HX_STACK_LINE(158)
				vector->z = tmp3;
				HX_STACK_LINE(159)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(159)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
				}
				HX_STACK_LINE(159)
				vector->w = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(161)
				::String tmp1 = (HX_HCSTRING("Error, Column ","\xce","\x33","\xbf","\x79") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(161)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(161)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnTo,(void))

Void Matrix4_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyFrom",0xc27fde47,"lime.math._Matrix4.Matrix4_Impl_.copyFrom","lime/math/Matrix4.hx",170,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(170)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(170)
		bool tmp = (other != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		if ((tmp)){
			HX_STACK_LINE(170)
			tmp1 = true;
		}
		else{
			HX_STACK_LINE(170)
			tmp1 = false;
		}
		HX_STACK_LINE(170)
		if ((tmp1)){
			HX_STACK_LINE(170)
			int tmp2 = (offset * this1->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			::haxe::io::Bytes tmp3 = other->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			int tmp4 = other->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			int tmp5 = other->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			this1->buffer->blit(tmp2,tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(170)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			if ((tmp2)){
				HX_STACK_LINE(170)
				tmp3 = (other == null());
			}
			else{
				HX_STACK_LINE(170)
				tmp3 = false;
			}
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(170)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(170)
				this1->copyFromArray(((Array< Float >)(null())),tmp4);
			}
			else{
				HX_STACK_LINE(170)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyFrom,(void))

Void Matrix4_Impl__obj::copythisFrom( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisFrom",0x28530e25,"lime.math._Matrix4.Matrix4_Impl_.copythisFrom","lime/math/Matrix4.hx",174,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(176)
		bool tmp = transposeValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		if ((tmp)){
			HX_STACK_LINE(177)
			::lime::utils::ArrayBufferView tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(177)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp1);
		}
		HX_STACK_LINE(179)
		int tmp1 = array->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		int l = tmp4;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				bool tmp5 = (_g < l);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(180)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(180)
				if ((tmp6)){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(180)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(180)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(181)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					tmp8 = ::__hxcpp_memory_get_float(array->buffer->b,(array->byteOffset + (((c + index)) * (int)4)));
				}
				HX_STACK_LINE(181)
				Float val = tmp8;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (c * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
		}
		HX_STACK_LINE(183)
		bool tmp5 = transposeValues;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		if ((tmp5)){
			HX_STACK_LINE(184)
			::lime::utils::ArrayBufferView tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp6);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisFrom,(void))

Void Matrix4_Impl__obj::copythisTo( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisTo",0xe75f9976,"lime.math._Matrix4.Matrix4_Impl_.copythisTo","lime/math/Matrix4.hx",189,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(191)
		bool tmp = transposeValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		if ((tmp)){
			HX_STACK_LINE(192)
			::lime::utils::ArrayBufferView tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp1);
		}
		HX_STACK_LINE(194)
		int tmp1 = this1->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while((true)){
				HX_STACK_LINE(195)
				bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(195)
				if ((tmp3)){
					HX_STACK_LINE(195)
					break;
				}
				HX_STACK_LINE(195)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(195)
				int c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(196)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(196)
					tmp5 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (c * (int)4)));
				}
				HX_STACK_LINE(196)
				Float val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(196)
					::__hxcpp_memory_set_float(array->buffer->b,(array->byteOffset + (((c + index)) * (int)4)),val);
					HX_STACK_LINE(196)
					val;
				}
			}
		}
		HX_STACK_LINE(198)
		bool tmp2 = transposeValues;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(199)
			::lime::utils::ArrayBufferView tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisTo,(void))

Void Matrix4_Impl__obj::copyRowFrom( ::lime::utils::ArrayBufferView this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowFrom",0xc4e0b7e7,"lime.math._Matrix4.Matrix4_Impl_.copyRowFrom","lime/math/Matrix4.hx",204,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(206)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(209)
					{
						HX_STACK_LINE(209)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(209)
						::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
						HX_STACK_LINE(209)
						val;
					}
				}
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(210)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(210)
					{
						HX_STACK_LINE(210)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(210)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
						HX_STACK_LINE(210)
						val;
					}
				}
				HX_STACK_LINE(211)
				{
					HX_STACK_LINE(211)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(211)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
						HX_STACK_LINE(211)
						val;
					}
				}
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(212)
					{
						HX_STACK_LINE(212)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(212)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
						HX_STACK_LINE(212)
						val;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(215)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
						HX_STACK_LINE(215)
						val;
					}
				}
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(216)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
						HX_STACK_LINE(216)
						val;
					}
				}
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(217)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
						HX_STACK_LINE(217)
						val;
					}
				}
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(218)
					{
						HX_STACK_LINE(218)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(218)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
						HX_STACK_LINE(218)
						val;
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(221)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(221)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(221)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
						HX_STACK_LINE(221)
						val;
					}
				}
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(222)
					{
						HX_STACK_LINE(222)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(222)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
						HX_STACK_LINE(222)
						val;
					}
				}
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(223)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(223)
					{
						HX_STACK_LINE(223)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(223)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
						HX_STACK_LINE(223)
						val;
					}
				}
				HX_STACK_LINE(224)
				{
					HX_STACK_LINE(224)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(224)
					{
						HX_STACK_LINE(224)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(224)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
						HX_STACK_LINE(224)
						val;
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					Float val = vector->x;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(227)
					{
						HX_STACK_LINE(227)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(227)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
						HX_STACK_LINE(227)
						val;
					}
				}
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					Float val = vector->y;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(228)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
						HX_STACK_LINE(228)
						val;
					}
				}
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					Float val = vector->z;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(229)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
						HX_STACK_LINE(229)
						val;
					}
				}
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					Float val = vector->w;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(230)
					{
						HX_STACK_LINE(230)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(230)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
						HX_STACK_LINE(230)
						val;
					}
				}
			}
			;break;
			default: {
				HX_STACK_LINE(233)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					int _int = row;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(233)
					bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(233)
					if ((tmp2)){
						HX_STACK_LINE(233)
						tmp1 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(233)
						tmp1 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(233)
				::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(233)
				::String tmp3 = (HX_HCSTRING("Error, Row ","\x02","\xfb","\x19","\xd9") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(233)
				::String tmp4 = (tmp3 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(233)
				HX_STACK_DO_THROW(tmp4);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowFrom,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","create2D",0x26131c56,"lime.math._Matrix4.Matrix4_Impl_.create2D","lime/math/Matrix4.hx",240,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(242)
		Float tmp = rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(243)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(244)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		Float s = tmp7;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(246)
		::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(247)
			Float tmp9 = (c * scale);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			Float tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(247)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(247)
			Float tmp12 = scale;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(247)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(248)
			Float tmp14 = (s * scale);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(248)
			Float tmp15 = (c * scale);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(250)
			Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(250)
			Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(246)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp9).Add(tmp13).Add((int)0).Add((int)0).Add(tmp14).Add(tmp15).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp16).Add(tmp17).Add((int)0).Add((int)1);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(246)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(246)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(246)
			if ((tmp18)){
				HX_STACK_LINE(246)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(246)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(246)
				bool tmp19 = (array != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(246)
				if ((tmp19)){
					HX_STACK_LINE(246)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(246)
					{
						HX_STACK_LINE(246)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(246)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(246)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(246)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(246)
						int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(246)
						_this->byteLength = tmp22;
						HX_STACK_LINE(246)
						::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(246)
							int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(246)
							::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(246)
							this2 = tmp25;
							HX_STACK_LINE(246)
							tmp23 = this2;
						}
						HX_STACK_LINE(246)
						_this->buffer = tmp23;
						HX_STACK_LINE(246)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(246)
						tmp20 = _this;
					}
					HX_STACK_LINE(246)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(246)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(246)
					if ((tmp20)){
						HX_STACK_LINE(246)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(246)
						{
							HX_STACK_LINE(246)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(246)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(246)
							::haxe::io::Bytes tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(246)
							::haxe::io::Bytes srcData = tmp23;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(246)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(246)
							int srcLength = tmp24;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(246)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(246)
							int srcByteOffset = tmp25;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(246)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(246)
							int srcElementSize = tmp26;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(246)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(246)
							int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(246)
							int tmp28 = _this->type;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(246)
							bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(246)
							if ((tmp29)){
								HX_STACK_LINE(246)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(246)
								int tmp30 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(246)
								int cloneLength = tmp30;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(246)
								::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(246)
								{
									HX_STACK_LINE(246)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(246)
									int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(246)
									::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(246)
									this2 = tmp33;
									HX_STACK_LINE(246)
									tmp31 = this2;
								}
								HX_STACK_LINE(246)
								_this->buffer = tmp31;
								HX_STACK_LINE(246)
								::haxe::io::Bytes tmp32 = srcData;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(246)
								int tmp33 = srcByteOffset;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(246)
								int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(246)
								_this->buffer->blit((int)0,tmp32,tmp33,tmp34);
							}
							else{
								HX_STACK_LINE(246)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(246)
							int tmp30 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(246)
							_this->byteLength = tmp30;
							HX_STACK_LINE(246)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(246)
							_this->length = srcLength;
							HX_STACK_LINE(246)
							tmp21 = _this;
						}
						HX_STACK_LINE(246)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(246)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(246)
						if ((tmp21)){
							HX_STACK_LINE(246)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(246)
							{
								HX_STACK_LINE(246)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(246)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(246)
								bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(246)
								if ((tmp24)){
									HX_STACK_LINE(246)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(246)
								int tmp25 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(246)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(246)
								if ((tmp26)){
									HX_STACK_LINE(246)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(246)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(246)
								int bufferByteLength = tmp27;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(246)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(246)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(246)
								bool tmp28 = true;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(246)
								if ((tmp28)){
									HX_STACK_LINE(246)
									int tmp29 = bufferByteLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(246)
									newByteLength = tmp29;
									HX_STACK_LINE(246)
									int tmp30 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(246)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(246)
									if ((tmp31)){
										HX_STACK_LINE(246)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(246)
									bool tmp32 = (newByteLength < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(246)
									if ((tmp32)){
										HX_STACK_LINE(246)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(246)
									int tmp29 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(246)
									newByteLength = tmp29;
									HX_STACK_LINE(246)
									int tmp30 = newByteLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(246)
									int newRange = tmp30;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(246)
									bool tmp31 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(246)
									if ((tmp31)){
										HX_STACK_LINE(246)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(246)
								_this->buffer = null();
								HX_STACK_LINE(246)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(246)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(246)
								Float tmp29 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(246)
								int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(246)
								_this->length = tmp30;
								HX_STACK_LINE(246)
								tmp22 = _this;
							}
							HX_STACK_LINE(246)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(246)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(246)
			tmp8 = this1;
		}
		HX_STACK_LINE(246)
		::lime::utils::ArrayBufferView tmp9 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(246)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,create2D,return )

::lime::utils::ArrayBufferView Matrix4_Impl__obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createABCD",0x303c4746,"lime.math._Matrix4.Matrix4_Impl_.createABCD","lime/math/Matrix4.hx",256,0xeb65dbd8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(258)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		cpp::ArrayBase array = Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(258)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(258)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		if ((tmp1)){
			HX_STACK_LINE(258)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			this1 = tmp2;
		}
		else{
			HX_STACK_LINE(258)
			bool tmp2 = (array != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			if ((tmp2)){
				HX_STACK_LINE(258)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(258)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(258)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(258)
					int tmp5 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					_this->byteLength = tmp5;
					HX_STACK_LINE(258)
					::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(258)
						int tmp7 = _this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(258)
						::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(258)
						this2 = tmp8;
						HX_STACK_LINE(258)
						tmp6 = this2;
					}
					HX_STACK_LINE(258)
					_this->buffer = tmp6;
					HX_STACK_LINE(258)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(258)
					tmp3 = _this;
				}
				HX_STACK_LINE(258)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(258)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(258)
				if ((tmp3)){
					HX_STACK_LINE(258)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(258)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(258)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(258)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(258)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(258)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(258)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(258)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(258)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(258)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(258)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(258)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(258)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(258)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(258)
						if ((tmp12)){
							HX_STACK_LINE(258)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(258)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(258)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(258)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(258)
							{
								HX_STACK_LINE(258)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(258)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(258)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(258)
								this2 = tmp16;
								HX_STACK_LINE(258)
								tmp14 = this2;
							}
							HX_STACK_LINE(258)
							_this->buffer = tmp14;
							HX_STACK_LINE(258)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(258)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(258)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(258)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(258)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(258)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(258)
						_this->byteLength = tmp13;
						HX_STACK_LINE(258)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(258)
						_this->length = srcLength;
						HX_STACK_LINE(258)
						tmp4 = _this;
					}
					HX_STACK_LINE(258)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(258)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					if ((tmp4)){
						HX_STACK_LINE(258)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(258)
						{
							HX_STACK_LINE(258)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(258)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(258)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(258)
							if ((tmp7)){
								HX_STACK_LINE(258)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(258)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(258)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(258)
							if ((tmp9)){
								HX_STACK_LINE(258)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(258)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(258)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(258)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(258)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(258)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(258)
							if ((tmp11)){
								HX_STACK_LINE(258)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(258)
								newByteLength = tmp12;
								HX_STACK_LINE(258)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(258)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(258)
								if ((tmp14)){
									HX_STACK_LINE(258)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(258)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(258)
								if ((tmp15)){
									HX_STACK_LINE(258)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(258)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(258)
								newByteLength = tmp12;
								HX_STACK_LINE(258)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(258)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(258)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(258)
								if ((tmp14)){
									HX_STACK_LINE(258)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(258)
							_this->buffer = null();
							HX_STACK_LINE(258)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(258)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(258)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(258)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(258)
							_this->length = tmp13;
							HX_STACK_LINE(258)
							tmp5 = _this;
						}
						HX_STACK_LINE(258)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(258)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(258)
		tmp = this1;
	}
	HX_STACK_LINE(258)
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createABCD,return )

::lime::utils::ArrayBufferView Matrix4_Impl__obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createOrtho",0x33fdc114,"lime.math._Matrix4.Matrix4_Impl_.createOrtho","lime/math/Matrix4.hx",268,0xeb65dbd8)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(270)
	Float tmp = (x1 - x0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(271)
	Float tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(272)
	Float tmp4 = (zFar - zNear);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(272)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(272)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(274)
	::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(274)
	{
		HX_STACK_LINE(275)
		Float tmp7 = (((Float)2.0) * sx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		Float tmp8 = (((Float)2.0) * sy);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		Float tmp9 = (((Float)-2.) * sz);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(278)
		Float tmp10 = (x0 + x1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(278)
		Float tmp12 = sx;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(278)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(278)
		Float tmp14 = (y0 + y1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(278)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(278)
		Float tmp16 = sy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(278)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(278)
		Float tmp18 = (zNear + zFar);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(278)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(278)
		Float tmp20 = sz;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(278)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(274)
		cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp8).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp9).Add((int)0).Add(tmp13).Add(tmp17).Add(tmp21).Add((int)1);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(274)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(274)
		bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(274)
		if ((tmp22)){
			HX_STACK_LINE(274)
			::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(274)
			this1 = tmp23;
		}
		else{
			HX_STACK_LINE(274)
			bool tmp23 = (array != null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(274)
			if ((tmp23)){
				HX_STACK_LINE(274)
				::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(274)
				{
					HX_STACK_LINE(274)
					::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(274)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(274)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(274)
					int tmp26 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(274)
					_this->byteLength = tmp26;
					HX_STACK_LINE(274)
					::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(274)
					{
						HX_STACK_LINE(274)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(274)
						int tmp28 = _this->byteLength;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(274)
						::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(274)
						this2 = tmp29;
						HX_STACK_LINE(274)
						tmp27 = this2;
					}
					HX_STACK_LINE(274)
					_this->buffer = tmp27;
					HX_STACK_LINE(274)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(274)
					tmp24 = _this;
				}
				HX_STACK_LINE(274)
				this1 = tmp24;
			}
			else{
				HX_STACK_LINE(274)
				bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(274)
				if ((tmp24)){
					HX_STACK_LINE(274)
					::lime::utils::ArrayBufferView tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					{
						HX_STACK_LINE(274)
						::lime::utils::ArrayBufferView tmp26 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(274)
						::lime::utils::ArrayBufferView _this = tmp26;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(274)
						::haxe::io::Bytes tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(274)
						::haxe::io::Bytes srcData = tmp27;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(274)
						int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(274)
						int srcLength = tmp28;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(274)
						int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(274)
						int srcByteOffset = tmp29;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(274)
						int tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(274)
						int srcElementSize = tmp30;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(274)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(274)
						int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(274)
						int tmp32 = _this->type;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(274)
						bool tmp33 = (tmp31 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(274)
						if ((tmp33)){
							HX_STACK_LINE(274)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(274)
							int tmp34 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(274)
							int cloneLength = tmp34;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(274)
							::haxe::io::Bytes tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(274)
							{
								HX_STACK_LINE(274)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(274)
								int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(274)
								::haxe::io::Bytes tmp37 = ::haxe::io::Bytes_obj::alloc(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(274)
								this2 = tmp37;
								HX_STACK_LINE(274)
								tmp35 = this2;
							}
							HX_STACK_LINE(274)
							_this->buffer = tmp35;
							HX_STACK_LINE(274)
							::haxe::io::Bytes tmp36 = srcData;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(274)
							int tmp37 = srcByteOffset;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(274)
							int tmp38 = cloneLength;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(274)
							_this->buffer->blit((int)0,tmp36,tmp37,tmp38);
						}
						else{
							HX_STACK_LINE(274)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(274)
						int tmp34 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(274)
						_this->byteLength = tmp34;
						HX_STACK_LINE(274)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(274)
						_this->length = srcLength;
						HX_STACK_LINE(274)
						tmp25 = _this;
					}
					HX_STACK_LINE(274)
					this1 = tmp25;
				}
				else{
					HX_STACK_LINE(274)
					bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(274)
					if ((tmp25)){
						HX_STACK_LINE(274)
						::lime::utils::ArrayBufferView tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(274)
						{
							HX_STACK_LINE(274)
							::lime::utils::ArrayBufferView tmp27 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(274)
							::lime::utils::ArrayBufferView _this = tmp27;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(274)
							bool tmp28 = false;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(274)
							if ((tmp28)){
								HX_STACK_LINE(274)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(274)
							int tmp29 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(274)
							bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(274)
							if ((tmp30)){
								HX_STACK_LINE(274)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(274)
							int tmp31 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(274)
							int bufferByteLength = tmp31;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(274)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(274)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(274)
							bool tmp32 = true;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(274)
							if ((tmp32)){
								HX_STACK_LINE(274)
								int tmp33 = bufferByteLength;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(274)
								newByteLength = tmp33;
								HX_STACK_LINE(274)
								int tmp34 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(274)
								bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(274)
								if ((tmp35)){
									HX_STACK_LINE(274)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(274)
								bool tmp36 = (newByteLength < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(274)
								if ((tmp36)){
									HX_STACK_LINE(274)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(274)
								int tmp33 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(274)
								newByteLength = tmp33;
								HX_STACK_LINE(274)
								int tmp34 = newByteLength;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(274)
								int newRange = tmp34;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(274)
								bool tmp35 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(274)
								if ((tmp35)){
									HX_STACK_LINE(274)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(274)
							_this->buffer = null();
							HX_STACK_LINE(274)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(274)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(274)
							Float tmp33 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(274)
							int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(274)
							_this->length = tmp34;
							HX_STACK_LINE(274)
							tmp26 = _this;
						}
						HX_STACK_LINE(274)
						this1 = tmp26;
					}
					else{
						HX_STACK_LINE(274)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(274)
		tmp6 = this1;
	}
	HX_STACK_LINE(274)
	::lime::utils::ArrayBufferView tmp7 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(274)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createOrtho,return )

Void Matrix4_Impl__obj::copyRowTo( ::lime::utils::ArrayBufferView this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowTo",0x543beeb8,"lime.math._Matrix4.Matrix4_Impl_.copyRowTo","lime/math/Matrix4.hx",284,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(286)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(289)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(289)
				{
					HX_STACK_LINE(289)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(289)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
				}
				HX_STACK_LINE(289)
				vector->x = tmp1;
				HX_STACK_LINE(290)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(290)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
				}
				HX_STACK_LINE(290)
				vector->y = tmp2;
				HX_STACK_LINE(291)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(291)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
				}
				HX_STACK_LINE(291)
				vector->z = tmp3;
				HX_STACK_LINE(292)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(292)
				{
					HX_STACK_LINE(292)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(292)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
				}
				HX_STACK_LINE(292)
				vector->w = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(295)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(295)
				{
					HX_STACK_LINE(295)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(295)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
				}
				HX_STACK_LINE(295)
				vector->x = tmp1;
				HX_STACK_LINE(296)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(296)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
				}
				HX_STACK_LINE(296)
				vector->y = tmp2;
				HX_STACK_LINE(297)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(297)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
				}
				HX_STACK_LINE(297)
				vector->z = tmp3;
				HX_STACK_LINE(298)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				{
					HX_STACK_LINE(298)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(298)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
				}
				HX_STACK_LINE(298)
				vector->w = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(301)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(301)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
				}
				HX_STACK_LINE(301)
				vector->x = tmp1;
				HX_STACK_LINE(302)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(302)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
				}
				HX_STACK_LINE(302)
				vector->y = tmp2;
				HX_STACK_LINE(303)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(303)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
				}
				HX_STACK_LINE(303)
				vector->z = tmp3;
				HX_STACK_LINE(304)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(304)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
				}
				HX_STACK_LINE(304)
				vector->w = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(307)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(307)
					tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
				}
				HX_STACK_LINE(307)
				vector->x = tmp1;
				HX_STACK_LINE(308)
				Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(308)
					tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
				}
				HX_STACK_LINE(308)
				vector->y = tmp2;
				HX_STACK_LINE(309)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(309)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
				}
				HX_STACK_LINE(309)
				vector->z = tmp3;
				HX_STACK_LINE(310)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(310)
					tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
				}
				HX_STACK_LINE(310)
				vector->w = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(313)
				::String tmp1 = (HX_HCSTRING("Error, Row ","\x02","\xfb","\x19","\xd9") + row);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(313)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowTo,(void))

Void Matrix4_Impl__obj::copyToMatrix4( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyToMatrix4",0x1032009b,"lime.math._Matrix4.Matrix4_Impl_.copyToMatrix4","lime/math/Matrix4.hx",322,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(322)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		tmp = hx::TCast< ::lime::utils::ArrayBufferView >::cast(other);
		HX_STACK_LINE(322)
		::lime::utils::ArrayBufferView _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(322)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(322)
		bool tmp1 = (this1 != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		if ((tmp1)){
			HX_STACK_LINE(322)
			tmp2 = true;
		}
		else{
			HX_STACK_LINE(322)
			tmp2 = false;
		}
		HX_STACK_LINE(322)
		if ((tmp2)){
			HX_STACK_LINE(322)
			int tmp3 = (offset * _this->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(322)
			::haxe::io::Bytes tmp4 = this1->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			int tmp5 = this1->byteOffset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(322)
			int tmp6 = this1->byteLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(322)
			_this->buffer->blit(tmp3,tmp4,tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(322)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(322)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			if ((tmp3)){
				HX_STACK_LINE(322)
				tmp4 = (this1 == null());
			}
			else{
				HX_STACK_LINE(322)
				tmp4 = false;
			}
			HX_STACK_LINE(322)
			if ((tmp4)){
				HX_STACK_LINE(322)
				int tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(322)
				_this->copyFromArray(((Array< Float >)(null())),tmp5);
			}
			else{
				HX_STACK_LINE(322)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyToMatrix4,(void))

::lime::math::Vector4 Matrix4_Impl__obj::deltaTransformVector( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","deltaTransformVector",0x66f080bf,"lime.math._Matrix4.Matrix4_Impl_.deltaTransformVector","lime/math/Matrix4.hx",426,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(428)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(428)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(428)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(431)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(431)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(431)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(431)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(431)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(431)
		tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(431)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(431)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(431)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(431)
		tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
	}
	HX_STACK_LINE(431)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(431)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(431)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(431)
	{
		HX_STACK_LINE(431)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(431)
		tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
	}
	HX_STACK_LINE(431)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(432)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(432)
	Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(432)
		tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
	}
	HX_STACK_LINE(432)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(432)
	Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(432)
	Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(432)
		tmp17 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
	}
	HX_STACK_LINE(432)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(432)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(432)
	Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(432)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(432)
		tmp21 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(432)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(432)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(432)
	Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(432)
	{
		HX_STACK_LINE(432)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(432)
		tmp24 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
	}
	HX_STACK_LINE(432)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(433)
	Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(433)
	Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(433)
		tmp27 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
	}
	HX_STACK_LINE(433)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(433)
	Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(433)
	Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(433)
		tmp30 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(433)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(433)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(433)
	Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(433)
	Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(433)
		tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
	}
	HX_STACK_LINE(433)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(433)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(433)
	Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(433)
		tmp37 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
	}
	HX_STACK_LINE(433)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(430)
	::lime::math::Vector4 tmp39 = ::lime::math::Vector4_obj::__new(tmp12,tmp25,tmp38,(int)0);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(430)
	return tmp39;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,deltaTransformVector,return )

Void Matrix4_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","identity",0xb34e17c6,"lime.math._Matrix4.Matrix4_Impl_.identity","lime/math/Matrix4.hx",439,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(441)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,(int)1);
			HX_STACK_LINE(441)
			(int)1;
		}
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(442)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),(int)0);
			HX_STACK_LINE(442)
			(int)0;
		}
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(443)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),(int)0);
			HX_STACK_LINE(443)
			(int)0;
		}
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(444)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),(int)0);
			HX_STACK_LINE(444)
			(int)0;
		}
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(445)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),(int)0);
			HX_STACK_LINE(445)
			(int)0;
		}
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(446)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),(int)1);
			HX_STACK_LINE(446)
			(int)1;
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(447)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)0);
			HX_STACK_LINE(447)
			(int)0;
		}
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(448)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),(int)0);
			HX_STACK_LINE(448)
			(int)0;
		}
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(449)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)0);
			HX_STACK_LINE(449)
			(int)0;
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(450)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),(int)0);
			HX_STACK_LINE(450)
			(int)0;
		}
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(451)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),(int)1);
			HX_STACK_LINE(451)
			(int)1;
		}
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(452)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),(int)0);
			HX_STACK_LINE(452)
			(int)0;
		}
		HX_STACK_LINE(453)
		{
			HX_STACK_LINE(453)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(453)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),(int)0);
			HX_STACK_LINE(453)
			(int)0;
		}
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(454)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),(int)0);
			HX_STACK_LINE(454)
			(int)0;
		}
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(455)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),(int)0);
			HX_STACK_LINE(455)
			(int)0;
		}
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(456)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),(int)1);
			HX_STACK_LINE(456)
			(int)1;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,identity,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::interpolate( ::lime::utils::ArrayBufferView thisMat,::lime::utils::ArrayBufferView toMat,Float percent){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolate",0xf4884739,"lime.math._Matrix4.Matrix4_Impl_.interpolate","lime/math/Matrix4.hx",461,0xeb65dbd8)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(463)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	::lime::utils::ArrayBufferView m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(465)
		while((true)){
			HX_STACK_LINE(465)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(465)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(465)
			if ((tmp2)){
				HX_STACK_LINE(465)
				break;
			}
			HX_STACK_LINE(465)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(465)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(467)
			::lime::utils::ArrayBufferView tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(467)
			::lime::utils::ArrayBufferView tmp6 = thisMat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(467)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(467)
			Float tmp8 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(467)
			::lime::utils::ArrayBufferView tmp9 = toMat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(467)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(467)
			Float tmp11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(467)
			::lime::utils::ArrayBufferView tmp12 = thisMat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(467)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(467)
			Float tmp14 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(467)
			Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(467)
			Float tmp16 = percent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(467)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(467)
			Float tmp18 = (tmp8 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(467)
			::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp4,tmp5,tmp18);
		}
	}
	HX_STACK_LINE(471)
	::lime::utils::ArrayBufferView tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolate,return )

Void Matrix4_Impl__obj::interpolateTo( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView toMat,Float percent){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolateTo",0x5c939114,"lime.math._Matrix4.Matrix4_Impl_.interpolateTo","lime/math/Matrix4.hx",478,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(478)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(478)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			if ((tmp1)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(478)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(480)
					tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)));
				}
				HX_STACK_LINE(480)
				::lime::utils::ArrayBufferView tmp4 = toMat;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(480)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(480)
				Float tmp6 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(480)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(480)
					tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)));
				}
				HX_STACK_LINE(480)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(480)
				Float tmp9 = percent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(480)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(480)
				Float tmp11 = (tmp3 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(480)
				Float val = tmp11;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(480)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
					HX_STACK_LINE(480)
					val;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolateTo,(void))

bool Matrix4_Impl__obj::invert( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","invert",0x1e68879e,"lime.math._Matrix4.Matrix4_Impl_.invert","lime/math/Matrix4.hx",487,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(489)
	::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	Float tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get_determinant(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	Float d = tmp1;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(490)
	Float tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	bool tmp4 = (tmp3 > ((Float)0.00000000001));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(490)
	bool invertable = tmp4;		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(492)
	bool tmp5 = invertable;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(492)
	if ((tmp5)){
		HX_STACK_LINE(494)
		Float tmp6 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(494)
		d = tmp6;
		HX_STACK_LINE(496)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(496)
			tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
		}
		HX_STACK_LINE(496)
		Float m11 = tmp7;		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(496)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(496)
			tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
		}
		HX_STACK_LINE(496)
		Float m21 = tmp8;		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(496)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(496)
			tmp9 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
		}
		HX_STACK_LINE(496)
		Float m31 = tmp9;		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(496)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(496)
			tmp10 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
		}
		HX_STACK_LINE(496)
		Float m41 = tmp10;		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(497)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(497)
			tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
		}
		HX_STACK_LINE(497)
		Float m12 = tmp11;		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(497)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(497)
			tmp12 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
		}
		HX_STACK_LINE(497)
		Float m22 = tmp12;		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(497)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(497)
			tmp13 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
		}
		HX_STACK_LINE(497)
		Float m32 = tmp13;		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(497)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(497)
			tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
		}
		HX_STACK_LINE(497)
		Float m42 = tmp14;		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(498)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(498)
			tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
		}
		HX_STACK_LINE(498)
		Float m13 = tmp15;		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(498)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(498)
			tmp16 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
		}
		HX_STACK_LINE(498)
		Float m23 = tmp16;		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(498)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(498)
			tmp17 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
		}
		HX_STACK_LINE(498)
		Float m33 = tmp17;		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(498)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(498)
			tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
		}
		HX_STACK_LINE(498)
		Float m43 = tmp18;		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(499)
		Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(499)
			tmp19 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
		}
		HX_STACK_LINE(499)
		Float m14 = tmp19;		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(499)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(499)
			tmp20 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
		}
		HX_STACK_LINE(499)
		Float m24 = tmp20;		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(499)
		Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(499)
			tmp21 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
		}
		HX_STACK_LINE(499)
		Float m34 = tmp21;		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(499)
		Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(499)
			tmp22 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
		}
		HX_STACK_LINE(499)
		Float m44 = tmp22;		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(501)
			Float tmp24 = m22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(501)
			Float tmp25 = (m33 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(501)
			Float tmp26 = (m43 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(501)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(501)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(501)
			Float tmp29 = m32;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(501)
			Float tmp30 = (m23 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(501)
			Float tmp31 = (m43 * m24);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(501)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(501)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(501)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(501)
			Float tmp35 = m42;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(501)
			Float tmp36 = (m23 * m34);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(501)
			Float tmp37 = (m33 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(501)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(501)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(501)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(501)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(501)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(501)
				::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
				HX_STACK_LINE(501)
				val;
			}
		}
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(502)
			Float tmp25 = m12;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(502)
			Float tmp26 = (m33 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(502)
			Float tmp27 = (m43 * m34);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(502)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(502)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(502)
			Float tmp30 = m32;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(502)
			Float tmp31 = (m13 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(502)
			Float tmp32 = (m43 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(502)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(502)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(502)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(502)
			Float tmp36 = m42;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(502)
			Float tmp37 = (m13 * m34);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(502)
			Float tmp38 = (m33 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(502)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(502)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(502)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(502)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(502)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(502)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				HX_STACK_LINE(502)
				val;
			}
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			Float tmp24 = m12;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(503)
			Float tmp25 = (m23 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(503)
			Float tmp26 = (m43 * m24);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(503)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(503)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(503)
			Float tmp29 = m22;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(503)
			Float tmp30 = (m13 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(503)
			Float tmp31 = (m43 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(503)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(503)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(503)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(503)
			Float tmp35 = m42;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(503)
			Float tmp36 = (m13 * m24);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(503)
			Float tmp37 = (m23 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(503)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(503)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(503)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(503)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(503)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(503)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(503)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				HX_STACK_LINE(503)
				val;
			}
		}
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(504)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(504)
			Float tmp25 = m12;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(504)
			Float tmp26 = (m23 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(504)
			Float tmp27 = (m33 * m24);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(504)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(504)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(504)
			Float tmp30 = m22;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(504)
			Float tmp31 = (m13 * m34);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(504)
			Float tmp32 = (m33 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(504)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(504)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(504)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(504)
			Float tmp36 = m32;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(504)
			Float tmp37 = (m13 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(504)
			Float tmp38 = (m23 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(504)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(504)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(504)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(504)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(504)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(504)
			{
				HX_STACK_LINE(504)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(504)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				HX_STACK_LINE(504)
				val;
			}
		}
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(505)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(505)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(505)
			Float tmp25 = m21;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(505)
			Float tmp26 = (m33 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(505)
			Float tmp27 = (m43 * m34);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(505)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(505)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(505)
			Float tmp30 = m31;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(505)
			Float tmp31 = (m23 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(505)
			Float tmp32 = (m43 * m24);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(505)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(505)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(505)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(505)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(505)
			Float tmp37 = (m23 * m34);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(505)
			Float tmp38 = (m33 * m24);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(505)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(505)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(505)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(505)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(505)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(505)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				HX_STACK_LINE(505)
				val;
			}
		}
		HX_STACK_LINE(506)
		{
			HX_STACK_LINE(506)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(506)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(506)
			Float tmp25 = (m33 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(506)
			Float tmp26 = (m43 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(506)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(506)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(506)
			Float tmp29 = m31;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(506)
			Float tmp30 = (m13 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(506)
			Float tmp31 = (m43 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(506)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(506)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(506)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(506)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(506)
			Float tmp36 = (m13 * m34);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(506)
			Float tmp37 = (m33 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(506)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(506)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(506)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(506)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(506)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(506)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
				HX_STACK_LINE(506)
				val;
			}
		}
		HX_STACK_LINE(507)
		{
			HX_STACK_LINE(507)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(507)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(507)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(507)
			Float tmp26 = (m23 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(507)
			Float tmp27 = (m43 * m24);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(507)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(507)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(507)
			Float tmp30 = m21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(507)
			Float tmp31 = (m13 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(507)
			Float tmp32 = (m43 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(507)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(507)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(507)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(507)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(507)
			Float tmp37 = (m13 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(507)
			Float tmp38 = (m23 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(507)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(507)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(507)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(507)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(507)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(507)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				HX_STACK_LINE(507)
				val;
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(508)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(508)
			Float tmp25 = (m23 * m34);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(508)
			Float tmp26 = (m33 * m24);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(508)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(508)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(508)
			Float tmp29 = m21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(508)
			Float tmp30 = (m13 * m34);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(508)
			Float tmp31 = (m33 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(508)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(508)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(508)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(508)
			Float tmp35 = m31;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(508)
			Float tmp36 = (m13 * m24);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(508)
			Float tmp37 = (m23 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(508)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(508)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(508)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(508)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(508)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(508)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				HX_STACK_LINE(508)
				val;
			}
		}
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(509)
			Float tmp24 = m21;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(509)
			Float tmp25 = (m32 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(509)
			Float tmp26 = (m42 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(509)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(509)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(509)
			Float tmp29 = m31;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(509)
			Float tmp30 = (m22 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(509)
			Float tmp31 = (m42 * m24);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(509)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(509)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(509)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(509)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(509)
			Float tmp36 = (m22 * m34);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(509)
			Float tmp37 = (m32 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(509)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(509)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(509)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(509)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(509)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(509)
			{
				HX_STACK_LINE(509)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(509)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
				HX_STACK_LINE(509)
				val;
			}
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(510)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(510)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(510)
			Float tmp26 = (m32 * m44);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(510)
			Float tmp27 = (m42 * m34);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(510)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(510)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(510)
			Float tmp30 = m31;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(510)
			Float tmp31 = (m12 * m44);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(510)
			Float tmp32 = (m42 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(510)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(510)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(510)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(510)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(510)
			Float tmp37 = (m12 * m34);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(510)
			Float tmp38 = (m32 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(510)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(510)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(510)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(510)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(510)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(510)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
				HX_STACK_LINE(510)
				val;
			}
		}
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(511)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(511)
			Float tmp25 = (m22 * m44);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(511)
			Float tmp26 = (m42 * m24);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(511)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(511)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(511)
			Float tmp29 = m21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(511)
			Float tmp30 = (m12 * m44);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(511)
			Float tmp31 = (m42 * m14);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(511)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(511)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(511)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(511)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(511)
			Float tmp36 = (m12 * m24);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(511)
			Float tmp37 = (m22 * m14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(511)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(511)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(511)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(511)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(511)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(511)
			{
				HX_STACK_LINE(511)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(511)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
				HX_STACK_LINE(511)
				val;
			}
		}
		HX_STACK_LINE(512)
		{
			HX_STACK_LINE(512)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(512)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(512)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(512)
			Float tmp26 = (m22 * m34);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(512)
			Float tmp27 = (m32 * m24);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(512)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(512)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(512)
			Float tmp30 = m21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(512)
			Float tmp31 = (m12 * m34);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(512)
			Float tmp32 = (m32 * m14);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(512)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(512)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(512)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(512)
			Float tmp36 = m31;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(512)
			Float tmp37 = (m12 * m24);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(512)
			Float tmp38 = (m22 * m14);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(512)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(512)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(512)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(512)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(512)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(512)
			{
				HX_STACK_LINE(512)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(512)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
				HX_STACK_LINE(512)
				val;
			}
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(513)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(513)
			Float tmp25 = m21;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(513)
			Float tmp26 = (m32 * m43);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(513)
			Float tmp27 = (m42 * m33);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(513)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(513)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(513)
			Float tmp30 = m31;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(513)
			Float tmp31 = (m22 * m43);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(513)
			Float tmp32 = (m42 * m23);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(513)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(513)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(513)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(513)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(513)
			Float tmp37 = (m22 * m33);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(513)
			Float tmp38 = (m32 * m23);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(513)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(513)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(513)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(513)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(513)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(513)
			{
				HX_STACK_LINE(513)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(513)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
				HX_STACK_LINE(513)
				val;
			}
		}
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(514)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(514)
			Float tmp25 = (m32 * m43);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(514)
			Float tmp26 = (m42 * m33);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(514)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(514)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(514)
			Float tmp29 = m31;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(514)
			Float tmp30 = (m12 * m43);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(514)
			Float tmp31 = (m42 * m13);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(514)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(514)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(514)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(514)
			Float tmp35 = m41;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(514)
			Float tmp36 = (m12 * m33);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(514)
			Float tmp37 = (m32 * m13);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(514)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(514)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(514)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(514)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(514)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(514)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
				HX_STACK_LINE(514)
				val;
			}
		}
		HX_STACK_LINE(515)
		{
			HX_STACK_LINE(515)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(515)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(515)
			Float tmp25 = m11;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(515)
			Float tmp26 = (m22 * m43);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(515)
			Float tmp27 = (m42 * m23);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(515)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(515)
			Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(515)
			Float tmp30 = m21;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(515)
			Float tmp31 = (m12 * m43);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(515)
			Float tmp32 = (m42 * m13);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(515)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(515)
			Float tmp34 = (tmp30 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(515)
			Float tmp35 = (tmp29 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(515)
			Float tmp36 = m41;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(515)
			Float tmp37 = (m12 * m23);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(515)
			Float tmp38 = (m22 * m13);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(515)
			Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(515)
			Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(515)
			Float tmp41 = (tmp35 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(515)
			Float tmp42 = (tmp24 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(515)
			Float val = tmp42;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(515)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(515)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
				HX_STACK_LINE(515)
				val;
			}
		}
		HX_STACK_LINE(516)
		{
			HX_STACK_LINE(516)
			Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(516)
			Float tmp24 = m11;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(516)
			Float tmp25 = (m22 * m33);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(516)
			Float tmp26 = (m32 * m23);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(516)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(516)
			Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(516)
			Float tmp29 = m21;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(516)
			Float tmp30 = (m12 * m33);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(516)
			Float tmp31 = (m32 * m13);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(516)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(516)
			Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(516)
			Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(516)
			Float tmp35 = m31;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(516)
			Float tmp36 = (m12 * m23);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(516)
			Float tmp37 = (m22 * m13);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(516)
			Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(516)
			Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(516)
			Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(516)
			Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(516)
			Float val = tmp41;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(516)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(516)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
				HX_STACK_LINE(516)
				val;
			}
		}
	}
	HX_STACK_LINE(520)
	bool tmp6 = invertable;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(520)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,invert,return )

Void Matrix4_Impl__obj::pointAt( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 pos,::lime::math::Vector4 at,::lime::math::Vector4 up){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","pointAt",0x903e77db,"lime.math._Matrix4.Matrix4_Impl_.pointAt","lime/math/Matrix4.hx",525,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(527)
		bool tmp = (at == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		if ((tmp)){
			HX_STACK_LINE(529)
			::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(529)
			at = tmp1;
		}
		HX_STACK_LINE(533)
		bool tmp1 = (up == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		if ((tmp1)){
			HX_STACK_LINE(535)
			::lime::math::Vector4 tmp2 = ::lime::math::Vector4_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(535)
			up = tmp2;
		}
		HX_STACK_LINE(539)
		Float tmp2 = (at->x - pos->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		Float tmp3 = (at->y - pos->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		Float tmp4 = (at->z - pos->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		::lime::math::Vector4 tmp5 = ::lime::math::Vector4_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(539)
		::lime::math::Vector4 dir = tmp5;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(540)
		::lime::math::Vector4 tmp6 = ::lime::math::Vector4_obj::__new(up->x,up->y,up->z,up->w);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		::lime::math::Vector4 vup = tmp6;		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(541)
		::lime::math::Vector4 right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			Float tmp7 = (dir->x * dir->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(543)
			Float tmp8 = (dir->y * dir->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(543)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(543)
			Float tmp10 = (dir->z * dir->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(543)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(543)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(543)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(543)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(543)
			if ((tmp13)){
				HX_STACK_LINE(543)
				hx::DivEq(dir->x,l);
				HX_STACK_LINE(543)
				hx::DivEq(dir->y,l);
				HX_STACK_LINE(543)
				hx::DivEq(dir->z,l);
			}
			HX_STACK_LINE(543)
			l;
		}
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			Float tmp7 = (vup->x * vup->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			Float tmp8 = (vup->y * vup->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			Float tmp10 = (vup->z * vup->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(544)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(544)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(544)
			if ((tmp13)){
				HX_STACK_LINE(544)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(544)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(544)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(544)
			l;
		}
		HX_STACK_LINE(546)
		::lime::math::Vector4 tmp7 = ::lime::math::Vector4_obj::__new(dir->x,dir->y,dir->z,dir->w);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		::lime::math::Vector4 dir2 = tmp7;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Float tmp8 = (vup->x * dir->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(547)
			Float tmp9 = (vup->y * dir->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(547)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(547)
			Float tmp11 = (vup->z * dir->z);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(547)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(547)
			Float s = tmp12;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(547)
			hx::MultEq(dir2->x,s);
			HX_STACK_LINE(547)
			hx::MultEq(dir2->y,s);
			HX_STACK_LINE(547)
			hx::MultEq(dir2->z,s);
		}
		HX_STACK_LINE(549)
		Float tmp8 = (vup->x - dir2->x);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(549)
		Float tmp9 = (vup->y - dir2->y);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(549)
		Float tmp10 = (vup->z - dir2->z);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(549)
		::lime::math::Vector4 tmp11 = ::lime::math::Vector4_obj::__new(tmp8,tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(549)
		vup = tmp11;
		HX_STACK_LINE(551)
		Float tmp12 = (vup->x * vup->x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(551)
		Float tmp13 = (vup->y * vup->y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(551)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(551)
		Float tmp15 = (vup->z * vup->z);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(551)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(551)
		Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(551)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(551)
		if ((tmp18)){
			HX_STACK_LINE(553)
			Float tmp19 = (vup->x * vup->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(553)
			Float tmp20 = (vup->y * vup->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(553)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(553)
			Float tmp22 = (vup->z * vup->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(553)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(553)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(553)
			Float l = tmp24;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(553)
			bool tmp25 = (l != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(553)
			if ((tmp25)){
				HX_STACK_LINE(553)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(553)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(553)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(553)
			l;
		}
		else{
			HX_STACK_LINE(557)
			bool tmp19 = (dir->x != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(557)
			if ((tmp19)){
				HX_STACK_LINE(559)
				Float tmp20 = dir->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(559)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(559)
				Float tmp22 = dir->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(559)
				::lime::math::Vector4 tmp23 = ::lime::math::Vector4_obj::__new(tmp21,tmp22,(int)0,null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(559)
				vup = tmp23;
			}
			else{
				HX_STACK_LINE(563)
				::lime::math::Vector4 tmp20 = ::lime::math::Vector4_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(563)
				vup = tmp20;
			}
		}
		HX_STACK_LINE(569)
		Float tmp19 = (vup->y * dir->z);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(569)
		Float tmp20 = (vup->z * dir->y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(569)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(569)
		Float tmp22 = (vup->z * dir->x);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(569)
		Float tmp23 = (vup->x * dir->z);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(569)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(569)
		Float tmp25 = (vup->x * dir->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(569)
		Float tmp26 = (vup->y * dir->x);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(569)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(569)
		::lime::math::Vector4 tmp28 = ::lime::math::Vector4_obj::__new(tmp21,tmp24,tmp27,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(569)
		right = tmp28;
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			Float tmp29 = (right->x * right->x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(570)
			Float tmp30 = (right->y * right->y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(570)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(570)
			Float tmp32 = (right->z * right->z);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(570)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(570)
			Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(570)
			Float l = tmp34;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(570)
			bool tmp35 = (l != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(570)
			if ((tmp35)){
				HX_STACK_LINE(570)
				hx::DivEq(right->x,l);
				HX_STACK_LINE(570)
				hx::DivEq(right->y,l);
				HX_STACK_LINE(570)
				hx::DivEq(right->z,l);
			}
			HX_STACK_LINE(570)
			l;
		}
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			Float val = right->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(572)
			{
				HX_STACK_LINE(572)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(572)
				::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
				HX_STACK_LINE(572)
				val;
			}
		}
		HX_STACK_LINE(573)
		{
			HX_STACK_LINE(573)
			Float val = right->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(573)
			{
				HX_STACK_LINE(573)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(573)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				HX_STACK_LINE(573)
				val;
			}
		}
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			Float val = right->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(574)
			{
				HX_STACK_LINE(574)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(574)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
				HX_STACK_LINE(574)
				val;
			}
		}
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(575)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),((Float)0.0));
			HX_STACK_LINE(575)
			((Float)0.0);
		}
		HX_STACK_LINE(576)
		{
			HX_STACK_LINE(576)
			Float val = vup->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(576)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				HX_STACK_LINE(576)
				val;
			}
		}
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			Float val = vup->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(577)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
				HX_STACK_LINE(577)
				val;
			}
		}
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			Float val = vup->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(578)
			{
				HX_STACK_LINE(578)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(578)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
				HX_STACK_LINE(578)
				val;
			}
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(579)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),((Float)0.0));
			HX_STACK_LINE(579)
			((Float)0.0);
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			Float val = dir->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(580)
			{
				HX_STACK_LINE(580)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(580)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				HX_STACK_LINE(580)
				val;
			}
		}
		HX_STACK_LINE(581)
		{
			HX_STACK_LINE(581)
			Float val = dir->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(581)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				HX_STACK_LINE(581)
				val;
			}
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			Float val = dir->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(582)
			{
				HX_STACK_LINE(582)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(582)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
				HX_STACK_LINE(582)
				val;
			}
		}
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(583)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),((Float)0.0));
			HX_STACK_LINE(583)
			((Float)0.0);
		}
		HX_STACK_LINE(584)
		{
			HX_STACK_LINE(584)
			Float val = pos->x;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(584)
			{
				HX_STACK_LINE(584)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(584)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				HX_STACK_LINE(584)
				val;
			}
		}
		HX_STACK_LINE(585)
		{
			HX_STACK_LINE(585)
			Float val = pos->y;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(585)
			{
				HX_STACK_LINE(585)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(585)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				HX_STACK_LINE(585)
				val;
			}
		}
		HX_STACK_LINE(586)
		{
			HX_STACK_LINE(586)
			Float val = pos->z;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(586)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
				HX_STACK_LINE(586)
				val;
			}
		}
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(587)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(587)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),((Float)1.0));
			HX_STACK_LINE(587)
			((Float)1.0);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,pointAt,(void))

Void Matrix4_Impl__obj::prepend( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView rhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prepend",0x76fd6d86,"lime.math._Matrix4.Matrix4_Impl_.prepend","lime/math/Matrix4.hx",592,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(594)
		::lime::utils::ArrayBufferView tmp = rhs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		Float tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		Float m111 = tmp1;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(594)
		::lime::utils::ArrayBufferView tmp2 = rhs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		Float tmp3 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp2,(int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		Float m121 = tmp3;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(594)
		::lime::utils::ArrayBufferView tmp4 = rhs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		Float tmp5 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		Float m131 = tmp5;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(594)
		::lime::utils::ArrayBufferView tmp6 = rhs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		Float tmp7 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp6,(int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(594)
		Float m141 = tmp7;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(595)
		::lime::utils::ArrayBufferView tmp8 = rhs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(595)
		Float tmp9 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(595)
		Float m112 = tmp9;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(595)
		::lime::utils::ArrayBufferView tmp10 = rhs;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(595)
		Float tmp11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp10,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(595)
		Float m122 = tmp11;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(595)
		::lime::utils::ArrayBufferView tmp12 = rhs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(595)
		Float tmp13 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp12,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(595)
		Float m132 = tmp13;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(595)
		::lime::utils::ArrayBufferView tmp14 = rhs;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(595)
		Float tmp15 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp14,(int)13);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(595)
		Float m142 = tmp15;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(596)
		::lime::utils::ArrayBufferView tmp16 = rhs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(596)
		Float tmp17 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp16,(int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(596)
		Float m113 = tmp17;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(596)
		::lime::utils::ArrayBufferView tmp18 = rhs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(596)
		Float tmp19 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp18,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(596)
		Float m123 = tmp19;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(596)
		::lime::utils::ArrayBufferView tmp20 = rhs;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(596)
		Float tmp21 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp20,(int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(596)
		Float m133 = tmp21;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(596)
		::lime::utils::ArrayBufferView tmp22 = rhs;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(596)
		Float tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp22,(int)14);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(596)
		Float m143 = tmp23;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(597)
		::lime::utils::ArrayBufferView tmp24 = rhs;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(597)
		Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp24,(int)3);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(597)
		Float m114 = tmp25;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(597)
		::lime::utils::ArrayBufferView tmp26 = rhs;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(597)
		Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp26,(int)7);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(597)
		Float m124 = tmp27;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(597)
		::lime::utils::ArrayBufferView tmp28 = rhs;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(597)
		Float tmp29 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp28,(int)11);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(597)
		Float m134 = tmp29;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(597)
		::lime::utils::ArrayBufferView tmp30 = rhs;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(597)
		Float tmp31 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp30,(int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(597)
		Float m144 = tmp31;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(598)
		Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(598)
			tmp32 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
		}
		HX_STACK_LINE(598)
		Float m211 = tmp32;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(598)
		Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(598)
			tmp33 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
		}
		HX_STACK_LINE(598)
		Float m221 = tmp33;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(598)
		Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(598)
			tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
		}
		HX_STACK_LINE(598)
		Float m231 = tmp34;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(598)
		Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(598)
			tmp35 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
		}
		HX_STACK_LINE(598)
		Float m241 = tmp35;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(599)
		Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(599)
			tmp36 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
		}
		HX_STACK_LINE(599)
		Float m212 = tmp36;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(599)
		Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(599)
			tmp37 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
		}
		HX_STACK_LINE(599)
		Float m222 = tmp37;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(599)
		Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(599)
			tmp38 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
		}
		HX_STACK_LINE(599)
		Float m232 = tmp38;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(599)
		Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(599)
		{
			HX_STACK_LINE(599)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(599)
			tmp39 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
		}
		HX_STACK_LINE(599)
		Float m242 = tmp39;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(600)
		Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(600)
			tmp40 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
		}
		HX_STACK_LINE(600)
		Float m213 = tmp40;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(600)
		Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(600)
			tmp41 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
		}
		HX_STACK_LINE(600)
		Float m223 = tmp41;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(600)
		Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(600)
			tmp42 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
		}
		HX_STACK_LINE(600)
		Float m233 = tmp42;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(600)
		Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(600)
			tmp43 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
		}
		HX_STACK_LINE(600)
		Float m243 = tmp43;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(601)
		Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(601)
			tmp44 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
		}
		HX_STACK_LINE(601)
		Float m214 = tmp44;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(601)
		Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(601)
			tmp45 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
		}
		HX_STACK_LINE(601)
		Float m224 = tmp45;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(601)
		Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(601)
			tmp46 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
		}
		HX_STACK_LINE(601)
		Float m234 = tmp46;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(601)
		Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(601)
			tmp47 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
		}
		HX_STACK_LINE(601)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(603)
		{
			HX_STACK_LINE(603)
			Float tmp48 = (m111 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(603)
			Float tmp49 = (m112 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(603)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(603)
			Float tmp51 = (m113 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(603)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(603)
			Float tmp53 = (m114 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(603)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(603)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(603)
				::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
				HX_STACK_LINE(603)
				val;
			}
		}
		HX_STACK_LINE(604)
		{
			HX_STACK_LINE(604)
			Float tmp48 = (m111 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(604)
			Float tmp49 = (m112 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(604)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(604)
			Float tmp51 = (m113 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(604)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(604)
			Float tmp53 = (m114 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(604)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(604)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(604)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(604)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				HX_STACK_LINE(604)
				val;
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			Float tmp48 = (m111 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(605)
			Float tmp49 = (m112 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(605)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(605)
			Float tmp51 = (m113 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(605)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(605)
			Float tmp53 = (m114 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(605)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(605)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(605)
			{
				HX_STACK_LINE(605)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(605)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				HX_STACK_LINE(605)
				val;
			}
		}
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			Float tmp48 = (m111 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(606)
			Float tmp49 = (m112 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(606)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(606)
			Float tmp51 = (m113 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(606)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(606)
			Float tmp53 = (m114 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(606)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(606)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(606)
			{
				HX_STACK_LINE(606)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(606)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				HX_STACK_LINE(606)
				val;
			}
		}
		HX_STACK_LINE(608)
		{
			HX_STACK_LINE(608)
			Float tmp48 = (m121 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(608)
			Float tmp49 = (m122 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(608)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(608)
			Float tmp51 = (m123 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(608)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(608)
			Float tmp53 = (m124 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(608)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(608)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(608)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				HX_STACK_LINE(608)
				val;
			}
		}
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			Float tmp48 = (m121 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(609)
			Float tmp49 = (m122 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(609)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(609)
			Float tmp51 = (m123 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(609)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(609)
			Float tmp53 = (m124 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(609)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(609)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(609)
			{
				HX_STACK_LINE(609)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(609)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
				HX_STACK_LINE(609)
				val;
			}
		}
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			Float tmp48 = (m121 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(610)
			Float tmp49 = (m122 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(610)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(610)
			Float tmp51 = (m123 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(610)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(610)
			Float tmp53 = (m124 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(610)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(610)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(610)
			{
				HX_STACK_LINE(610)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(610)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				HX_STACK_LINE(610)
				val;
			}
		}
		HX_STACK_LINE(611)
		{
			HX_STACK_LINE(611)
			Float tmp48 = (m121 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(611)
			Float tmp49 = (m122 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(611)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(611)
			Float tmp51 = (m123 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(611)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(611)
			Float tmp53 = (m124 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(611)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(611)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(611)
			{
				HX_STACK_LINE(611)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(611)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				HX_STACK_LINE(611)
				val;
			}
		}
		HX_STACK_LINE(613)
		{
			HX_STACK_LINE(613)
			Float tmp48 = (m131 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(613)
			Float tmp49 = (m132 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(613)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(613)
			Float tmp51 = (m133 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(613)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(613)
			Float tmp53 = (m134 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(613)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(613)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(613)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
				HX_STACK_LINE(613)
				val;
			}
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			Float tmp48 = (m131 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(614)
			Float tmp49 = (m132 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(614)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(614)
			Float tmp51 = (m133 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(614)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(614)
			Float tmp53 = (m134 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(614)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(614)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(614)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
				HX_STACK_LINE(614)
				val;
			}
		}
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			Float tmp48 = (m131 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(615)
			Float tmp49 = (m132 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(615)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(615)
			Float tmp51 = (m133 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(615)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(615)
			Float tmp53 = (m134 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(615)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(615)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(615)
			{
				HX_STACK_LINE(615)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(615)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),val);
				HX_STACK_LINE(615)
				val;
			}
		}
		HX_STACK_LINE(616)
		{
			HX_STACK_LINE(616)
			Float tmp48 = (m131 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(616)
			Float tmp49 = (m132 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(616)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(616)
			Float tmp51 = (m133 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(616)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(616)
			Float tmp53 = (m134 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(616)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(616)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(616)
			{
				HX_STACK_LINE(616)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(616)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
				HX_STACK_LINE(616)
				val;
			}
		}
		HX_STACK_LINE(618)
		{
			HX_STACK_LINE(618)
			Float tmp48 = (m141 * m211);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(618)
			Float tmp49 = (m142 * m221);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(618)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(618)
			Float tmp51 = (m143 * m231);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(618)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(618)
			Float tmp53 = (m144 * m241);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(618)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(618)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(618)
			{
				HX_STACK_LINE(618)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(618)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
				HX_STACK_LINE(618)
				val;
			}
		}
		HX_STACK_LINE(619)
		{
			HX_STACK_LINE(619)
			Float tmp48 = (m141 * m212);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(619)
			Float tmp49 = (m142 * m222);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(619)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(619)
			Float tmp51 = (m143 * m232);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(619)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(619)
			Float tmp53 = (m144 * m242);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(619)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(619)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(619)
			{
				HX_STACK_LINE(619)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(619)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
				HX_STACK_LINE(619)
				val;
			}
		}
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			Float tmp48 = (m141 * m213);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(620)
			Float tmp49 = (m142 * m223);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(620)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(620)
			Float tmp51 = (m143 * m233);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(620)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(620)
			Float tmp53 = (m144 * m243);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(620)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(620)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(620)
			{
				HX_STACK_LINE(620)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(620)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
				HX_STACK_LINE(620)
				val;
			}
		}
		HX_STACK_LINE(621)
		{
			HX_STACK_LINE(621)
			Float tmp48 = (m141 * m214);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(621)
			Float tmp49 = (m142 * m224);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(621)
			Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(621)
			Float tmp51 = (m143 * m234);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(621)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(621)
			Float tmp53 = (m144 * m244);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(621)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(621)
			Float val = tmp54;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(621)
			{
				HX_STACK_LINE(621)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(621)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),val);
				HX_STACK_LINE(621)
				val;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,prepend,(void))

Void Matrix4_Impl__obj::prependRotation( ::lime::utils::ArrayBufferView this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependRotation",0x52475ce4,"lime.math._Matrix4.Matrix4_Impl_.prependRotation","lime/math/Matrix4.hx",626,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(628)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(628)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(628)
		::lime::utils::ArrayBufferView tmp4 = ::lime::math::_Matrix4::Matrix4_Impl__obj::getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(628)
		::lime::utils::ArrayBufferView m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(630)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(630)
		if ((tmp5)){
			HX_STACK_LINE(632)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(633)
			::lime::utils::ArrayBufferView tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(633)
			Float tmp7 = p->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(633)
			Float tmp8 = p->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(633)
			Float tmp9 = p->z;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(633)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(tmp6,tmp7,tmp8,tmp9);
		}
		HX_STACK_LINE(637)
		::lime::utils::ArrayBufferView tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(637)
		::lime::utils::ArrayBufferView tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(637)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependRotation,(void))

Void Matrix4_Impl__obj::prependScale( ::lime::utils::ArrayBufferView this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependScale",0x9a060b24,"lime.math._Matrix4.Matrix4_Impl_.prependScale","lime/math/Matrix4.hx",642,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(644)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(644)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(644)
			if ((tmp2)){
				HX_STACK_LINE(644)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(644)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(644)
				bool tmp3 = (array != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(644)
				if ((tmp3)){
					HX_STACK_LINE(644)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(644)
					{
						HX_STACK_LINE(644)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(644)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(644)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(644)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(644)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(644)
						_this->byteLength = tmp6;
						HX_STACK_LINE(644)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(644)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(644)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(644)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(644)
							this3 = tmp9;
							HX_STACK_LINE(644)
							tmp7 = this3;
						}
						HX_STACK_LINE(644)
						_this->buffer = tmp7;
						HX_STACK_LINE(644)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(644)
						tmp4 = _this;
					}
					HX_STACK_LINE(644)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(644)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(644)
					if ((tmp4)){
						HX_STACK_LINE(644)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(644)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(644)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(644)
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(644)
							::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(644)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(644)
							int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(644)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(644)
							int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(644)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(644)
							int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(644)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(644)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(644)
							int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(644)
							bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(644)
							if ((tmp13)){
								HX_STACK_LINE(644)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(644)
								int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(644)
								int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(644)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(644)
								{
									HX_STACK_LINE(644)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(644)
									int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(644)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(644)
									this3 = tmp17;
									HX_STACK_LINE(644)
									tmp15 = this3;
								}
								HX_STACK_LINE(644)
								_this->buffer = tmp15;
								HX_STACK_LINE(644)
								::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(644)
								int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(644)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(644)
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_LINE(644)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(644)
							int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(644)
							_this->byteLength = tmp14;
							HX_STACK_LINE(644)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(644)
							_this->length = srcLength;
							HX_STACK_LINE(644)
							tmp5 = _this;
						}
						HX_STACK_LINE(644)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(644)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(644)
						if ((tmp5)){
							HX_STACK_LINE(644)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(644)
							{
								HX_STACK_LINE(644)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(644)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(644)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(644)
								if ((tmp8)){
									HX_STACK_LINE(644)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(644)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(644)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(644)
								if ((tmp10)){
									HX_STACK_LINE(644)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(644)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(644)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(644)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(644)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(644)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(644)
								if ((tmp12)){
									HX_STACK_LINE(644)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(644)
									newByteLength = tmp13;
									HX_STACK_LINE(644)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(644)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(644)
									if ((tmp15)){
										HX_STACK_LINE(644)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(644)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(644)
									if ((tmp16)){
										HX_STACK_LINE(644)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(644)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(644)
									newByteLength = tmp13;
									HX_STACK_LINE(644)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(644)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(644)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(644)
									if ((tmp15)){
										HX_STACK_LINE(644)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(644)
								_this->buffer = null();
								HX_STACK_LINE(644)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(644)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(644)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(644)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(644)
								_this->length = tmp14;
								HX_STACK_LINE(644)
								tmp6 = _this;
							}
							HX_STACK_LINE(644)
							this2 = tmp6;
						}
						else{
							HX_STACK_LINE(644)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(644)
			tmp1 = this2;
		}
		HX_STACK_LINE(644)
		::lime::utils::ArrayBufferView tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(644)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependScale,(void))

Void Matrix4_Impl__obj::prependTranslation( ::lime::utils::ArrayBufferView this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependTranslation",0xfad7dd0b,"lime.math._Matrix4.Matrix4_Impl_.prependTranslation","lime/math/Matrix4.hx",649,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(651)
		::lime::utils::ArrayBufferView tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		::lime::utils::ArrayBufferView m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(652)
		::lime::utils::ArrayBufferView tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		::lime::math::Vector4 tmp2 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(652)
		::lime::math::_Matrix4::Matrix4_Impl__obj::set_position(tmp1,tmp2);
		HX_STACK_LINE(653)
		::lime::utils::ArrayBufferView tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(653)
		::lime::utils::ArrayBufferView tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(653)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependTranslation,(void))

::lime::math::Vector4 Matrix4_Impl__obj::transformVector( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVector",0x3cbf39c7,"lime.math._Matrix4.Matrix4_Impl_.transformVector","lime/math/Matrix4.hx",742,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(744)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(744)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(744)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(747)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(747)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(747)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(747)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(747)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(747)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(747)
		tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(747)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(747)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(747)
	Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(747)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(747)
		tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
	}
	HX_STACK_LINE(747)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(747)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(747)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(747)
	{
		HX_STACK_LINE(747)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(747)
		tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(747)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(748)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(748)
	Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(748)
	{
		HX_STACK_LINE(748)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(748)
		tmp14 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
	}
	HX_STACK_LINE(748)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(748)
	Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(748)
	Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(748)
	{
		HX_STACK_LINE(748)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(748)
		tmp17 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
	}
	HX_STACK_LINE(748)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(748)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(748)
	Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(748)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(748)
	{
		HX_STACK_LINE(748)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(748)
		tmp21 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(748)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(748)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(748)
	Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(748)
	{
		HX_STACK_LINE(748)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(748)
		tmp24 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
	}
	HX_STACK_LINE(748)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(749)
	Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(749)
	Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(749)
	{
		HX_STACK_LINE(749)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(749)
		tmp27 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
	}
	HX_STACK_LINE(749)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(749)
	Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(749)
	Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(749)
	{
		HX_STACK_LINE(749)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(749)
		tmp30 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(749)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(749)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(749)
	Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(749)
	Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(749)
	{
		HX_STACK_LINE(749)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(749)
		tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
	}
	HX_STACK_LINE(749)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(749)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(749)
	Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(749)
	{
		HX_STACK_LINE(749)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(749)
		tmp37 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(749)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(750)
	Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(750)
	Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(750)
	{
		HX_STACK_LINE(750)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(750)
		tmp40 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
	}
	HX_STACK_LINE(750)
	Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(750)
	Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(750)
	Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(750)
	{
		HX_STACK_LINE(750)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(750)
		tmp43 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
	}
	HX_STACK_LINE(750)
	Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(750)
	Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(750)
	Float tmp46 = z;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(750)
	Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(750)
	{
		HX_STACK_LINE(750)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(750)
		tmp47 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
	}
	HX_STACK_LINE(750)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(750)
	Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(750)
	Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(750)
	{
		HX_STACK_LINE(750)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(750)
		tmp50 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
	}
	HX_STACK_LINE(750)
	Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(746)
	::lime::math::Vector4 tmp52 = ::lime::math::Vector4_obj::__new(tmp12,tmp25,tmp38,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(746)
	return tmp52;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,transformVector,return )

Void Matrix4_Impl__obj::transformVectors( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView ain,::lime::utils::ArrayBufferView aout){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVectors",0xea9354cc,"lime.math._Matrix4.Matrix4_Impl_.transformVectors","lime/math/Matrix4.hx",755,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(ain,"ain")
		HX_STACK_ARG(aout,"aout")
		HX_STACK_LINE(757)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(759)
		while((true)){
			HX_STACK_LINE(759)
			int tmp = (i + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(759)
			int tmp1 = ain->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(759)
			bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(759)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(759)
			if ((tmp3)){
				HX_STACK_LINE(759)
				break;
			}
			HX_STACK_LINE(761)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(761)
			{
				HX_STACK_LINE(761)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(761)
				tmp4 = ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (i * (int)4)));
			}
			HX_STACK_LINE(761)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(761)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(761)
			{
				HX_STACK_LINE(761)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(761)
				tmp5 = ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (((i + (int)1)) * (int)4)));
			}
			HX_STACK_LINE(761)
			Float y = tmp5;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(761)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(761)
			{
				HX_STACK_LINE(761)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(761)
				tmp6 = ::__hxcpp_memory_get_float(ain->buffer->b,(ain->byteOffset + (((i + (int)2)) * (int)4)));
			}
			HX_STACK_LINE(761)
			Float z = tmp6;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(763)
			{
				HX_STACK_LINE(763)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(763)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(763)
				{
					HX_STACK_LINE(763)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(763)
					tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
				}
				HX_STACK_LINE(763)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(763)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(763)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(763)
				{
					HX_STACK_LINE(763)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(763)
					tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
				}
				HX_STACK_LINE(763)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(763)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(763)
				Float tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(763)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(763)
				{
					HX_STACK_LINE(763)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(763)
					tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
				}
				HX_STACK_LINE(763)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(763)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(763)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(763)
				{
					HX_STACK_LINE(763)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(763)
					tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
				}
				HX_STACK_LINE(763)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(763)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(763)
				{
					HX_STACK_LINE(763)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(763)
					::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (i * (int)4)),val);
					HX_STACK_LINE(763)
					val;
				}
			}
			HX_STACK_LINE(764)
			{
				HX_STACK_LINE(764)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(764)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(764)
				{
					HX_STACK_LINE(764)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(764)
					tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
				}
				HX_STACK_LINE(764)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(764)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(764)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(764)
				{
					HX_STACK_LINE(764)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(764)
					tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
				}
				HX_STACK_LINE(764)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(764)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(764)
				Float tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(764)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(764)
				{
					HX_STACK_LINE(764)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(764)
					tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
				}
				HX_STACK_LINE(764)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(764)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(764)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(764)
				{
					HX_STACK_LINE(764)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(764)
					tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
				}
				HX_STACK_LINE(764)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(764)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(764)
				{
					HX_STACK_LINE(764)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(764)
					::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (((i + (int)1)) * (int)4)),val);
					HX_STACK_LINE(764)
					val;
				}
			}
			HX_STACK_LINE(765)
			{
				HX_STACK_LINE(765)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(765)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(765)
				{
					HX_STACK_LINE(765)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(765)
					tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
				}
				HX_STACK_LINE(765)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(765)
				Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(765)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(765)
				{
					HX_STACK_LINE(765)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(765)
					tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
				}
				HX_STACK_LINE(765)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(765)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(765)
				Float tmp14 = z;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(765)
				Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(765)
				{
					HX_STACK_LINE(765)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(765)
					tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
				}
				HX_STACK_LINE(765)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(765)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(765)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(765)
				{
					HX_STACK_LINE(765)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(765)
					tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
				}
				HX_STACK_LINE(765)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(765)
				Float val = tmp19;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(765)
				{
					HX_STACK_LINE(765)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(765)
					::__hxcpp_memory_set_float(aout->buffer->b,(aout->byteOffset + (((i + (int)2)) * (int)4)),val);
					HX_STACK_LINE(765)
					val;
				}
			}
			HX_STACK_LINE(767)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,transformVectors,(void))

Void Matrix4_Impl__obj::transpose( ::lime::utils::ArrayBufferView this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transpose",0x2d08b4f1,"lime.math._Matrix4.Matrix4_Impl_.transpose","lime/math/Matrix4.hx",774,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(776)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		{
			HX_STACK_LINE(776)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(776)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(776)
			if ((tmp1)){
				HX_STACK_LINE(776)
				::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(776)
				this2 = tmp2;
			}
			else{
				HX_STACK_LINE(776)
				bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(776)
				if ((tmp2)){
					HX_STACK_LINE(776)
					::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(776)
					{
						HX_STACK_LINE(776)
						::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(776)
						::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(776)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(776)
						int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(776)
						_this->length = tmp5;
						HX_STACK_LINE(776)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(776)
						_this->byteLength = tmp6;
						HX_STACK_LINE(776)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(776)
						{
							HX_STACK_LINE(776)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(776)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(776)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(776)
							this3 = tmp9;
							HX_STACK_LINE(776)
							tmp7 = this3;
						}
						HX_STACK_LINE(776)
						_this->buffer = tmp7;
						HX_STACK_LINE(776)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(776)
						tmp3 = _this;
					}
					HX_STACK_LINE(776)
					this2 = tmp3;
				}
				else{
					HX_STACK_LINE(776)
					bool tmp3 = (this1 != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(776)
					if ((tmp3)){
						HX_STACK_LINE(776)
						::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(776)
						{
							HX_STACK_LINE(776)
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(776)
							::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(776)
							::haxe::io::Bytes srcData = this1->buffer;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(776)
							int srcLength = this1->length;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(776)
							int srcByteOffset = this1->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(776)
							int srcElementSize = this1->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(776)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(776)
							bool tmp6 = (this1->type == _this->type);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(776)
							if ((tmp6)){
								HX_STACK_LINE(776)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(776)
								int tmp7 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(776)
								int cloneLength = tmp7;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(776)
								::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(776)
									int tmp9 = cloneLength;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(776)
									::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(776)
									this3 = tmp10;
									HX_STACK_LINE(776)
									tmp8 = this3;
								}
								HX_STACK_LINE(776)
								_this->buffer = tmp8;
								HX_STACK_LINE(776)
								::haxe::io::Bytes tmp9 = srcData;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(776)
								int tmp10 = srcByteOffset;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(776)
								int tmp11 = cloneLength;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(776)
								_this->buffer->blit((int)0,tmp9,tmp10,tmp11);
							}
							else{
								HX_STACK_LINE(776)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(776)
							int tmp7 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(776)
							_this->byteLength = tmp7;
							HX_STACK_LINE(776)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(776)
							_this->length = srcLength;
							HX_STACK_LINE(776)
							tmp4 = _this;
						}
						HX_STACK_LINE(776)
						this2 = tmp4;
					}
					else{
						HX_STACK_LINE(776)
						bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(776)
						if ((tmp4)){
							HX_STACK_LINE(776)
							::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(776)
								::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(776)
								bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(776)
								if ((tmp7)){
									HX_STACK_LINE(776)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(776)
								int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(776)
								bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(776)
								if ((tmp9)){
									HX_STACK_LINE(776)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(776)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(776)
								int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(776)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(776)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(776)
								bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(776)
								if ((tmp11)){
									HX_STACK_LINE(776)
									int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(776)
									newByteLength = tmp12;
									HX_STACK_LINE(776)
									int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(776)
									bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(776)
									if ((tmp14)){
										HX_STACK_LINE(776)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(776)
									bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(776)
									if ((tmp15)){
										HX_STACK_LINE(776)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(776)
									int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(776)
									newByteLength = tmp12;
									HX_STACK_LINE(776)
									int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(776)
									int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(776)
									bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(776)
									if ((tmp14)){
										HX_STACK_LINE(776)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(776)
								_this->buffer = null();
								HX_STACK_LINE(776)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(776)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(776)
								Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(776)
								int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(776)
								_this->length = tmp13;
								HX_STACK_LINE(776)
								tmp5 = _this;
							}
							HX_STACK_LINE(776)
							this2 = tmp5;
						}
						else{
							HX_STACK_LINE(776)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(776)
			tmp = this2;
		}
		HX_STACK_LINE(776)
		::lime::utils::ArrayBufferView othis = tmp;		HX_STACK_VAR(othis,"othis");
		HX_STACK_LINE(777)
		{
			HX_STACK_LINE(777)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(777)
			{
				HX_STACK_LINE(777)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(777)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)16));
			}
			HX_STACK_LINE(777)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(777)
			{
				HX_STACK_LINE(777)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(777)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
				HX_STACK_LINE(777)
				val;
			}
		}
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(778)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)32));
			}
			HX_STACK_LINE(778)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(778)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(778)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
				HX_STACK_LINE(778)
				val;
			}
		}
		HX_STACK_LINE(779)
		{
			HX_STACK_LINE(779)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(779)
			{
				HX_STACK_LINE(779)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(779)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)48));
			}
			HX_STACK_LINE(779)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(779)
			{
				HX_STACK_LINE(779)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(779)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
				HX_STACK_LINE(779)
				val;
			}
		}
		HX_STACK_LINE(780)
		{
			HX_STACK_LINE(780)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(780)
			{
				HX_STACK_LINE(780)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(780)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)4));
			}
			HX_STACK_LINE(780)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(780)
			{
				HX_STACK_LINE(780)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(780)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
				HX_STACK_LINE(780)
				val;
			}
		}
		HX_STACK_LINE(781)
		{
			HX_STACK_LINE(781)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(781)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(781)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)36));
			}
			HX_STACK_LINE(781)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(781)
			{
				HX_STACK_LINE(781)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(781)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
				HX_STACK_LINE(781)
				val;
			}
		}
		HX_STACK_LINE(782)
		{
			HX_STACK_LINE(782)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(782)
			{
				HX_STACK_LINE(782)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(782)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)52));
			}
			HX_STACK_LINE(782)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(782)
			{
				HX_STACK_LINE(782)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(782)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
				HX_STACK_LINE(782)
				val;
			}
		}
		HX_STACK_LINE(783)
		{
			HX_STACK_LINE(783)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(783)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)8));
			}
			HX_STACK_LINE(783)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(783)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),val);
				HX_STACK_LINE(783)
				val;
			}
		}
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(784)
			{
				HX_STACK_LINE(784)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(784)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)24));
			}
			HX_STACK_LINE(784)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(784)
			{
				HX_STACK_LINE(784)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(784)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
				HX_STACK_LINE(784)
				val;
			}
		}
		HX_STACK_LINE(785)
		{
			HX_STACK_LINE(785)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(785)
			{
				HX_STACK_LINE(785)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(785)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)56));
			}
			HX_STACK_LINE(785)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(785)
			{
				HX_STACK_LINE(785)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(785)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),val);
				HX_STACK_LINE(785)
				val;
			}
		}
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(786)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)12));
			}
			HX_STACK_LINE(786)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(786)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
				HX_STACK_LINE(786)
				val;
			}
		}
		HX_STACK_LINE(787)
		{
			HX_STACK_LINE(787)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(787)
			{
				HX_STACK_LINE(787)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(787)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)28));
			}
			HX_STACK_LINE(787)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(787)
			{
				HX_STACK_LINE(787)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(787)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val);
				HX_STACK_LINE(787)
				val;
			}
		}
		HX_STACK_LINE(788)
		{
			HX_STACK_LINE(788)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(788)
				tmp1 = ::__hxcpp_memory_get_float(othis->buffer->b,(othis->byteOffset + (int)44));
			}
			HX_STACK_LINE(788)
			Float val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(788)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(788)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
				HX_STACK_LINE(788)
				val;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,transpose,(void))

::lime::utils::ArrayBufferView Matrix4_Impl__obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","getAxisRotation",0x61f6832d,"lime.math._Matrix4.Matrix4_Impl_.getAxisRotation","lime/math/Matrix4.hx",792,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(794)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	::lime::utils::ArrayBufferView m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(796)
	::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(796)
	::lime::math::Vector4 a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(797)
	Float tmp2 = degrees;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(797)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(797)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(797)
	Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(797)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(797)
	Float rad = tmp6;		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(798)
	Float tmp7 = rad;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(798)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(798)
	Float c = tmp8;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(799)
	Float tmp9 = rad;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(799)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(799)
	Float s = tmp10;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(800)
	Float tmp11 = (((Float)1.0) - c);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(800)
	Float t = tmp11;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(802)
	::lime::utils::ArrayBufferView tmp12 = m;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(802)
	Float tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(802)
	Float tmp14 = (a1->x * a1->x);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(802)
	Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(802)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(802)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(802)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp12,(int)0,tmp17);
	HX_STACK_LINE(803)
	::lime::utils::ArrayBufferView tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(803)
	Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(803)
	Float tmp20 = (a1->y * a1->y);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(803)
	Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(803)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(803)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(803)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp18,(int)5,tmp23);
	HX_STACK_LINE(804)
	::lime::utils::ArrayBufferView tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(804)
	Float tmp25 = c;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(804)
	Float tmp26 = (a1->z * a1->z);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(804)
	Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(804)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(804)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(804)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp24,(int)10,tmp29);
	HX_STACK_LINE(806)
	Float tmp30 = (a1->x * a1->y);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(806)
	Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(806)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(806)
	Float tmp110 = tmp32;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(807)
	Float tmp33 = (a1->z * s);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(807)
	Float tmp210 = tmp33;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(808)
	::lime::utils::ArrayBufferView tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(808)
	Float tmp35 = (tmp110 + tmp210);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(808)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp34,(int)4,tmp35);
	HX_STACK_LINE(809)
	::lime::utils::ArrayBufferView tmp36 = m;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(809)
	Float tmp37 = (tmp110 - tmp210);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(809)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp36,(int)1,tmp37);
	HX_STACK_LINE(810)
	Float tmp38 = (a1->x * a1->z);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(810)
	Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(810)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(810)
	tmp110 = tmp40;
	HX_STACK_LINE(811)
	Float tmp41 = (a1->y * s);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(811)
	tmp210 = tmp41;
	HX_STACK_LINE(812)
	::lime::utils::ArrayBufferView tmp42 = m;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(812)
	Float tmp43 = (tmp110 - tmp210);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(812)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp42,(int)8,tmp43);
	HX_STACK_LINE(813)
	::lime::utils::ArrayBufferView tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(813)
	Float tmp45 = (tmp110 + tmp210);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(813)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp44,(int)2,tmp45);
	HX_STACK_LINE(814)
	Float tmp46 = (a1->y * a1->z);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(814)
	Float tmp47 = t;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(814)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(814)
	tmp110 = tmp48;
	HX_STACK_LINE(815)
	Float tmp49 = (a1->x * s);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(815)
	tmp210 = tmp49;
	HX_STACK_LINE(816)
	::lime::utils::ArrayBufferView tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(816)
	Float tmp51 = (tmp110 + tmp210);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(816)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp50,(int)9,tmp51);
	HX_STACK_LINE(817)
	::lime::utils::ArrayBufferView tmp52 = m;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(817)
	Float tmp53 = (tmp110 - tmp210);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(817)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp52,(int)6,tmp53);
	HX_STACK_LINE(819)
	::lime::utils::ArrayBufferView tmp54 = m;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(819)
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,getAxisRotation,return )

Float Matrix4_Impl__obj::get_determinant( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_determinant",0x5d0323a4,"lime.math._Matrix4.Matrix4_Impl_.get_determinant","lime/math/Matrix4.hx",831,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(833)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(833)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
	}
	HX_STACK_LINE(833)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp3 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(833)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
	}
	HX_STACK_LINE(833)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(833)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(833)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp7 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
	}
	HX_STACK_LINE(833)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
	}
	HX_STACK_LINE(833)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(833)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp10 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(833)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(833)
		tmp11 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
	}
	HX_STACK_LINE(833)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(833)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(833)
	Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(834)
	Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp15 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(834)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp16 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(834)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(834)
	Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp18 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
	}
	HX_STACK_LINE(834)
	Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp19 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
	}
	HX_STACK_LINE(834)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(834)
	Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(834)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp22 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(834)
	Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp23 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
	}
	HX_STACK_LINE(834)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(834)
	Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp25 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(834)
	Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(834)
	{
		HX_STACK_LINE(834)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(834)
		tmp26 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
	}
	HX_STACK_LINE(834)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(834)
	Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(834)
	Float tmp29 = (tmp21 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(833)
	Float tmp30 = (tmp14 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(835)
	Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp31 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(835)
	Float tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp32 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
	}
	HX_STACK_LINE(835)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(835)
	Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp34 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(835)
	Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp35 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)4));
	}
	HX_STACK_LINE(835)
	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(835)
	Float tmp37 = (tmp33 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(835)
	Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp38 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(835)
	Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp39 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
	}
	HX_STACK_LINE(835)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(835)
	Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp41 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
	}
	HX_STACK_LINE(835)
	Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(835)
		tmp42 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
	}
	HX_STACK_LINE(835)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(835)
	Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(835)
	Float tmp45 = (tmp37 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(833)
	Float tmp46 = (tmp30 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(836)
	Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp47 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(836)
	Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp48 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(836)
	Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(836)
	Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp50 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
	}
	HX_STACK_LINE(836)
	Float tmp51;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp51 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
	}
	HX_STACK_LINE(836)
	Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(836)
	Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(836)
	Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp54 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
	}
	HX_STACK_LINE(836)
	Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp55 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)60));
	}
	HX_STACK_LINE(836)
	Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(836)
	Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp57 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(836)
	Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(836)
		tmp58 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
	}
	HX_STACK_LINE(836)
	Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(836)
	Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(836)
	Float tmp61 = (tmp53 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(833)
	Float tmp62 = (tmp46 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(837)
	Float tmp63;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp63 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(837)
	Float tmp64;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp64 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
	}
	HX_STACK_LINE(837)
	Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(837)
	Float tmp66;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp66 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(837)
	Float tmp67;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp67 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)20));
	}
	HX_STACK_LINE(837)
	Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(837)
	Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(837)
	Float tmp70;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp70 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
	}
	HX_STACK_LINE(837)
	Float tmp71;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp71 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)44));
	}
	HX_STACK_LINE(837)
	Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(837)
	Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp73 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)40));
	}
	HX_STACK_LINE(837)
	Float tmp74;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(837)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(837)
		tmp74 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
	}
	HX_STACK_LINE(837)
	Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(837)
	Float tmp76 = (tmp72 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(837)
	Float tmp77 = (tmp69 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(833)
	Float tmp78 = (tmp62 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(838)
	Float tmp79;		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp79 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)32));
	}
	HX_STACK_LINE(838)
	Float tmp80;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp80 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
	}
	HX_STACK_LINE(838)
	Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(838)
	Float tmp82;		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp82 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(838)
	Float tmp83;		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp83 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(838)
	Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(838)
	Float tmp85 = (tmp81 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(838)
	Float tmp86;		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp86 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)8));
	}
	HX_STACK_LINE(838)
	Float tmp87;		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp87 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)28));
	}
	HX_STACK_LINE(838)
	Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(838)
	Float tmp89;		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp89 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(838)
	Float tmp90;		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(838)
	{
		HX_STACK_LINE(838)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(838)
		tmp90 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)12));
	}
	HX_STACK_LINE(838)
	Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(838)
	Float tmp92 = (tmp88 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(838)
	Float tmp93 = (tmp85 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(833)
	Float tmp94 = (tmp78 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(833)
	Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(833)
	return tmp95;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_determinant,return )

::lime::math::Vector4 Matrix4_Impl__obj::get_position( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_position",0x55830b3a,"lime.math._Matrix4.Matrix4_Impl_.get_position","lime/math/Matrix4.hx",843,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(845)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(845)
	{
		HX_STACK_LINE(845)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(845)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(845)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(845)
	{
		HX_STACK_LINE(845)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(845)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)52));
	}
	HX_STACK_LINE(845)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(845)
	{
		HX_STACK_LINE(845)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(845)
		tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(845)
	::lime::math::Vector4 tmp3 = ::lime::math::Vector4_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(845)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_position,return )

::lime::math::Vector4 Matrix4_Impl__obj::set_position( ::lime::utils::ArrayBufferView this1,::lime::math::Vector4 val){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set_position",0x6a7c2eae,"lime.math._Matrix4.Matrix4_Impl_.set_position","lime/math/Matrix4.hx",850,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(852)
	{
		HX_STACK_LINE(852)
		Float val1 = val->x;		HX_STACK_VAR(val1,"val1");
		HX_STACK_LINE(852)
		{
			HX_STACK_LINE(852)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(852)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val1);
			HX_STACK_LINE(852)
			val1;
		}
	}
	HX_STACK_LINE(853)
	{
		HX_STACK_LINE(853)
		Float val1 = val->y;		HX_STACK_VAR(val1,"val1");
		HX_STACK_LINE(853)
		{
			HX_STACK_LINE(853)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(853)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),val1);
			HX_STACK_LINE(853)
			val1;
		}
	}
	HX_STACK_LINE(854)
	{
		HX_STACK_LINE(854)
		Float val1 = val->z;		HX_STACK_VAR(val1,"val1");
		HX_STACK_LINE(854)
		{
			HX_STACK_LINE(854)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(854)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val1);
			HX_STACK_LINE(854)
			val1;
		}
	}
	HX_STACK_LINE(855)
	::lime::math::Vector4 tmp = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(855)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,set_position,return )

Float Matrix4_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get",0x10b0bb0e,"lime.math._Matrix4.Matrix4_Impl_.get","lime/math/Matrix4.hx",860,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(862)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	{
		HX_STACK_LINE(862)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(862)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)));
	}
	HX_STACK_LINE(862)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,get,return )

Float Matrix4_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set",0x10b9d61a,"lime.math._Matrix4.Matrix4_Impl_.set","lime/math/Matrix4.hx",867,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(869)
	{
		HX_STACK_LINE(869)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(869)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),value);
		HX_STACK_LINE(869)
		value;
	}
	HX_STACK_LINE(870)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(870)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,set,return )


Matrix4_Impl__obj::Matrix4_Impl__obj()
{
}

bool Matrix4_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointAt") ) { outValue = pointAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prepend") ) { outValue = prepend_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { outValue = copyRowTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transpose") ) { outValue = transpose_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copythisTo") ) { outValue = copythisTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appendScale") ) { outValue = appendScale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { outValue = copyRowFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { outValue = copyColumnTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copythisFrom") ) { outValue = copythisFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prependScale") ) { outValue = prependScale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_position") ) { outValue = get_position_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_position") ) { outValue = set_position_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyToMatrix4") ) { outValue = copyToMatrix4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { outValue = interpolateTo_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { outValue = appendRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { outValue = copyColumnFrom_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prependRotation") ) { outValue = prependRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformVector") ) { outValue = transformVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { outValue = getAxisRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { outValue = get_determinant_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { outValue = transformVectors_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { outValue = appendTranslation_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { outValue = prependTranslation_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { outValue = deltaTransformVector_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &Matrix4_Impl__obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#endif

hx::Class Matrix4_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copythisFrom","\x9d","\x57","\xe4","\x52"),
	HX_HCSTRING("copythisTo","\xee","\x14","\x01","\x0a"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix4","\x23","\x00","\xc1","\x24"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("getAxisRotation","\xb5","\x74","\xea","\xf7"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void Matrix4_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix4_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Matrix4_Impl__obj >;
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

void Matrix4_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4
