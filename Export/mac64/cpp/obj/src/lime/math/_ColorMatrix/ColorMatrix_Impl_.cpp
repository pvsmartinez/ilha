#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace math{
namespace _ColorMatrix{

Void ColorMatrix_Impl__obj::__construct()
{
	return null();
}

//ColorMatrix_Impl__obj::~ColorMatrix_Impl__obj() { }

Dynamic ColorMatrix_Impl__obj::__CreateEmpty() { return  new ColorMatrix_Impl__obj; }
hx::ObjectPtr< ColorMatrix_Impl__obj > ColorMatrix_Impl__obj::__new()
{  hx::ObjectPtr< ColorMatrix_Impl__obj > _result_ = new ColorMatrix_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ColorMatrix_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrix_Impl__obj > _result_ = new ColorMatrix_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< Float > ColorMatrix_Impl__obj::__identity;

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","_new",0x66bc06c7,"lime.math._ColorMatrix.ColorMatrix_Impl_._new","lime/math/ColorMatrix.hx",28,0x337975c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(28)
	::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(30)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp)){
		HX_STACK_LINE(30)
		int tmp2 = data->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		tmp1 = (tmp3 == (int)20);
	}
	else{
		HX_STACK_LINE(30)
		tmp1 = false;
	}
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(32)
		this1 = data;
	}
	else{
		HX_STACK_LINE(36)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			cpp::ArrayBase array = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__identity;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(36)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(36)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			if ((tmp3)){
				HX_STACK_LINE(36)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(36)
				bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				if ((tmp4)){
					HX_STACK_LINE(36)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(36)
					{
						HX_STACK_LINE(36)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(36)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(36)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(36)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(36)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(36)
						_this->byteLength = tmp7;
						HX_STACK_LINE(36)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(36)
						{
							HX_STACK_LINE(36)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(36)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(36)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(36)
							this3 = tmp10;
							HX_STACK_LINE(36)
							tmp8 = this3;
						}
						HX_STACK_LINE(36)
						_this->buffer = tmp8;
						HX_STACK_LINE(36)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(36)
						tmp5 = _this;
					}
					HX_STACK_LINE(36)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(36)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(36)
					if ((tmp5)){
						HX_STACK_LINE(36)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(36)
						{
							HX_STACK_LINE(36)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(36)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(36)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(36)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(36)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(36)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(36)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(36)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(36)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(36)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(36)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(36)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(36)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(36)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(36)
							if ((tmp14)){
								HX_STACK_LINE(36)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(36)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(36)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(36)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(36)
								{
									HX_STACK_LINE(36)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(36)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(36)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(36)
									this3 = tmp18;
									HX_STACK_LINE(36)
									tmp16 = this3;
								}
								HX_STACK_LINE(36)
								_this->buffer = tmp16;
								HX_STACK_LINE(36)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(36)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(36)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(36)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(36)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(36)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(36)
							_this->byteLength = tmp15;
							HX_STACK_LINE(36)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(36)
							_this->length = srcLength;
							HX_STACK_LINE(36)
							tmp6 = _this;
						}
						HX_STACK_LINE(36)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(36)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(36)
						if ((tmp6)){
							HX_STACK_LINE(36)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(36)
							{
								HX_STACK_LINE(36)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(36)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(36)
								bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(36)
								if ((tmp9)){
									HX_STACK_LINE(36)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(36)
								int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(36)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(36)
								if ((tmp11)){
									HX_STACK_LINE(36)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(36)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(36)
								int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(36)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(36)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(36)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(36)
								if ((tmp13)){
									HX_STACK_LINE(36)
									int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(36)
									newByteLength = tmp14;
									HX_STACK_LINE(36)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(36)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(36)
									if ((tmp16)){
										HX_STACK_LINE(36)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(36)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(36)
									if ((tmp17)){
										HX_STACK_LINE(36)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(36)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(36)
									newByteLength = tmp14;
									HX_STACK_LINE(36)
									int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(36)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(36)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(36)
									if ((tmp16)){
										HX_STACK_LINE(36)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(36)
								_this->buffer = null();
								HX_STACK_LINE(36)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(36)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(36)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(36)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(36)
								_this->length = tmp15;
								HX_STACK_LINE(36)
								tmp7 = _this;
							}
							HX_STACK_LINE(36)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(36)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(36)
			tmp2 = this2;
		}
		HX_STACK_LINE(36)
		this1 = tmp2;
	}
	HX_STACK_LINE(28)
	::lime::utils::ArrayBufferView tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_new,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","clone",0xca195b37,"lime.math._ColorMatrix.ColorMatrix_Impl_.clone","lime/math/ColorMatrix.hx",43,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(45)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(45)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(45)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			if ((tmp2)){
				HX_STACK_LINE(45)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(45)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(45)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					_this->length = tmp5;
					HX_STACK_LINE(45)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					_this->byteLength = tmp6;
					HX_STACK_LINE(45)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(45)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(45)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(45)
						this3 = tmp9;
						HX_STACK_LINE(45)
						tmp7 = this3;
					}
					HX_STACK_LINE(45)
					_this->buffer = tmp7;
					HX_STACK_LINE(45)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(45)
					tmp3 = _this;
				}
				HX_STACK_LINE(45)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(45)
				bool tmp3 = (this1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				if ((tmp3)){
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(45)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(45)
						::haxe::io::Bytes srcData = this1->buffer;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(45)
						int srcLength = this1->length;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(45)
						int srcByteOffset = this1->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(45)
						int srcElementSize = this1->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(45)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(45)
						bool tmp6 = (this1->type == _this->type);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(45)
						if ((tmp6)){
							HX_STACK_LINE(45)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(45)
							int tmp7 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(45)
							int cloneLength = tmp7;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(45)
							::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(45)
							{
								HX_STACK_LINE(45)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(45)
								int tmp9 = cloneLength;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(45)
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(45)
								this3 = tmp10;
								HX_STACK_LINE(45)
								tmp8 = this3;
							}
							HX_STACK_LINE(45)
							_this->buffer = tmp8;
							HX_STACK_LINE(45)
							::haxe::io::Bytes tmp9 = srcData;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(45)
							int tmp10 = srcByteOffset;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(45)
							int tmp11 = cloneLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(45)
							_this->buffer->blit((int)0,tmp9,tmp10,tmp11);
						}
						else{
							HX_STACK_LINE(45)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(45)
						int tmp7 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(45)
						_this->byteLength = tmp7;
						HX_STACK_LINE(45)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(45)
						_this->length = srcLength;
						HX_STACK_LINE(45)
						tmp4 = _this;
					}
					HX_STACK_LINE(45)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(45)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(45)
					if ((tmp4)){
						HX_STACK_LINE(45)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(45)
						{
							HX_STACK_LINE(45)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(45)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(45)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(45)
							if ((tmp7)){
								HX_STACK_LINE(45)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(45)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(45)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(45)
							if ((tmp9)){
								HX_STACK_LINE(45)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(45)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(45)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(45)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(45)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(45)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(45)
							if ((tmp11)){
								HX_STACK_LINE(45)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(45)
								newByteLength = tmp12;
								HX_STACK_LINE(45)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(45)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(45)
								if ((tmp14)){
									HX_STACK_LINE(45)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(45)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(45)
								if ((tmp15)){
									HX_STACK_LINE(45)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(45)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(45)
								newByteLength = tmp12;
								HX_STACK_LINE(45)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(45)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(45)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(45)
								if ((tmp14)){
									HX_STACK_LINE(45)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(45)
							_this->buffer = null();
							HX_STACK_LINE(45)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(45)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(45)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(45)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(45)
							_this->length = tmp13;
							HX_STACK_LINE(45)
							tmp5 = _this;
						}
						HX_STACK_LINE(45)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(45)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(45)
		tmp = this2;
	}
	HX_STACK_LINE(45)
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,clone,return )

Void ColorMatrix_Impl__obj::concat( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView second){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","concat",0xc5989ffa,"lime.math._ColorMatrix.ColorMatrix_Impl_.concat","lime/math/ColorMatrix.hx",50,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				Float tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(52)
					tmp = ::__hxcpp_memory_get_float(_g->buffer->b,_g->byteOffset);
				}
				HX_STACK_LINE(52)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(52)
					tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,second->byteOffset);
				}
				HX_STACK_LINE(52)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(52)
					::__hxcpp_memory_set_float(_g->buffer->b,_g->byteOffset,value);
					HX_STACK_LINE(52)
					value;
				}
			}
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				Float tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(53)
					tmp = ::__hxcpp_memory_get_float(_g->buffer->b,(_g->byteOffset + (int)24));
				}
				HX_STACK_LINE(53)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(53)
					tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + (int)24));
				}
				HX_STACK_LINE(53)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(53)
					::__hxcpp_memory_set_float(_g->buffer->b,(_g->byteOffset + (int)24),value);
					HX_STACK_LINE(53)
					value;
				}
			}
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				Float tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(54)
					tmp = ::__hxcpp_memory_get_float(_g->buffer->b,(_g->byteOffset + (int)48));
				}
				HX_STACK_LINE(54)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(54)
					tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + (int)48));
				}
				HX_STACK_LINE(54)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(54)
					::__hxcpp_memory_set_float(_g->buffer->b,(_g->byteOffset + (int)48),value);
					HX_STACK_LINE(54)
					value;
				}
			}
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Float tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(55)
					tmp = ::__hxcpp_memory_get_float(_g->buffer->b,(_g->byteOffset + (int)72));
				}
				HX_STACK_LINE(55)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(55)
					tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + (int)72));
				}
				HX_STACK_LINE(55)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(55)
					::__hxcpp_memory_set_float(_g->buffer->b,(_g->byteOffset + (int)72),value);
					HX_STACK_LINE(55)
					value;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,concat,(void))

Void ColorMatrix_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView other){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","copyFrom",0x3aa9a825,"lime.math._ColorMatrix.ColorMatrix_Impl_.copyFrom","lime/math/ColorMatrix.hx",62,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(62)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(62)
		bool tmp = (other != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(62)
			tmp1 = true;
		}
		else{
			HX_STACK_LINE(62)
			tmp1 = false;
		}
		HX_STACK_LINE(62)
		if ((tmp1)){
			HX_STACK_LINE(62)
			int tmp2 = (offset * this1->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			::haxe::io::Bytes tmp3 = other->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			int tmp4 = other->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			int tmp5 = other->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			this1->buffer->blit(tmp2,tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(62)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			if ((tmp2)){
				HX_STACK_LINE(62)
				tmp3 = (other == null());
			}
			else{
				HX_STACK_LINE(62)
				tmp3 = false;
			}
			HX_STACK_LINE(62)
			if ((tmp3)){
				HX_STACK_LINE(62)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				this1->copyFromArray(((Array< Float >)(null())),tmp4);
			}
			else{
				HX_STACK_LINE(62)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,copyFrom,(void))

Void ColorMatrix_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","identity",0x2b77e1a4,"lime.math._ColorMatrix.ColorMatrix_Impl_.identity","lime/math/ColorMatrix.hx",67,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(69)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,(int)1);
			HX_STACK_LINE(69)
			(int)1;
		}
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(70)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),(int)0);
			HX_STACK_LINE(70)
			(int)0;
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(71)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),(int)0);
			HX_STACK_LINE(71)
			(int)0;
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(72)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),(int)0);
			HX_STACK_LINE(72)
			(int)0;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(73)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),(int)0);
			HX_STACK_LINE(73)
			(int)0;
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(74)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),(int)0);
			HX_STACK_LINE(74)
			(int)0;
		}
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(75)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)1);
			HX_STACK_LINE(75)
			(int)1;
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(76)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),(int)0);
			HX_STACK_LINE(76)
			(int)0;
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(77)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)0);
			HX_STACK_LINE(77)
			(int)0;
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(78)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),(int)0);
			HX_STACK_LINE(78)
			(int)0;
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(79)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),(int)0);
			HX_STACK_LINE(79)
			(int)0;
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(80)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),(int)0);
			HX_STACK_LINE(80)
			(int)0;
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(81)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),(int)1);
			HX_STACK_LINE(81)
			(int)1;
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(82)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),(int)0);
			HX_STACK_LINE(82)
			(int)0;
		}
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(83)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),(int)0);
			HX_STACK_LINE(83)
			(int)0;
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(84)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),(int)0);
			HX_STACK_LINE(84)
			(int)0;
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(85)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)64),(int)0);
			HX_STACK_LINE(85)
			(int)0;
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(86)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)68),(int)0);
			HX_STACK_LINE(86)
			(int)0;
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(87)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)72),(int)1);
			HX_STACK_LINE(87)
			(int)1;
		}
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(88)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)76),(int)0);
			HX_STACK_LINE(88)
			(int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,identity,(void))

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getAlphaTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getAlphaTable",0x456419e0,"lime.math._ColorMatrix.ColorMatrix_Impl_.getAlphaTable","lime/math/ColorMatrix.hx",93,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(95)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(95)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(95)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(95)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			if ((tmp2)){
				HX_STACK_LINE(95)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(95)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(95)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(95)
					_this->length = tmp5;
					HX_STACK_LINE(95)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					_this->byteLength = tmp6;
					HX_STACK_LINE(95)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(95)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(95)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(95)
						this3 = tmp9;
						HX_STACK_LINE(95)
						tmp7 = this3;
					}
					HX_STACK_LINE(95)
					_this->buffer = tmp7;
					HX_STACK_LINE(95)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(95)
					tmp3 = _this;
				}
				HX_STACK_LINE(95)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(95)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(95)
				if ((tmp3)){
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(95)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(95)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(95)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(95)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(95)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(95)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(95)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(95)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(95)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(95)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(95)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(95)
						if ((tmp12)){
							HX_STACK_LINE(95)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(95)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(95)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(95)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(95)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(95)
								this3 = tmp16;
								HX_STACK_LINE(95)
								tmp14 = this3;
							}
							HX_STACK_LINE(95)
							_this->buffer = tmp14;
							HX_STACK_LINE(95)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(95)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(95)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(95)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(95)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(95)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(95)
						_this->byteLength = tmp13;
						HX_STACK_LINE(95)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(95)
						_this->length = srcLength;
						HX_STACK_LINE(95)
						tmp4 = _this;
					}
					HX_STACK_LINE(95)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(95)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(95)
					if ((tmp4)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(95)
						{
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(95)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(95)
							if ((tmp7)){
								HX_STACK_LINE(95)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(95)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(95)
							if ((tmp9)){
								HX_STACK_LINE(95)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(95)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(95)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(95)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(95)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(95)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(95)
							if ((tmp11)){
								HX_STACK_LINE(95)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								newByteLength = tmp12;
								HX_STACK_LINE(95)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(95)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(95)
								if ((tmp14)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(95)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(95)
								if ((tmp15)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(95)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								newByteLength = tmp12;
								HX_STACK_LINE(95)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(95)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(95)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(95)
								if ((tmp14)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(95)
							_this->buffer = null();
							HX_STACK_LINE(95)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(95)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(95)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(95)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(95)
							_this->length = tmp13;
							HX_STACK_LINE(95)
							tmp5 = _this;
						}
						HX_STACK_LINE(95)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(95)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(95)
		tmp = this2;
	}
	HX_STACK_LINE(95)
	::lime::utils::ArrayBufferView table = tmp;		HX_STACK_VAR(table,"table");
	HX_STACK_LINE(96)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(96)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)72));
	}
	HX_STACK_LINE(96)
	Float multiplier = tmp1;		HX_STACK_VAR(multiplier,"multiplier");
	HX_STACK_LINE(97)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(97)
		tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)76));
	}
	HX_STACK_LINE(97)
	Float tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float offset = tmp3;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(98)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			bool tmp4 = (_g < (int)256);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			if ((tmp5)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(102)
			Float tmp7 = (i * multiplier);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			Float tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			value = tmp10;
			HX_STACK_LINE(103)
			bool tmp11 = (value > (int)255);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(103)
			if ((tmp11)){
				HX_STACK_LINE(103)
				value = (int)255;
			}
			HX_STACK_LINE(104)
			bool tmp12 = (value < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(104)
			if ((tmp12)){
				HX_STACK_LINE(104)
				value = (int)0;
			}
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				::__hxcpp_memory_set_byte(table->buffer->b,(table->byteOffset + i),value);
				HX_STACK_LINE(105)
				value;
			}
		}
	}
	HX_STACK_LINE(109)
	::lime::utils::ArrayBufferView tmp4 = table;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getAlphaTable,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getBlueTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getBlueTable",0x661a9b04,"lime.math._ColorMatrix.ColorMatrix_Impl_.getBlueTable","lime/math/ColorMatrix.hx",114,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(116)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(116)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(116)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(116)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			if ((tmp2)){
				HX_STACK_LINE(116)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(116)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(116)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(116)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					_this->length = tmp5;
					HX_STACK_LINE(116)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					_this->byteLength = tmp6;
					HX_STACK_LINE(116)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(116)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(116)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(116)
						this3 = tmp9;
						HX_STACK_LINE(116)
						tmp7 = this3;
					}
					HX_STACK_LINE(116)
					_this->buffer = tmp7;
					HX_STACK_LINE(116)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(116)
					tmp3 = _this;
				}
				HX_STACK_LINE(116)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(116)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				if ((tmp3)){
					HX_STACK_LINE(116)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(116)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(116)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(116)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(116)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(116)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(116)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(116)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(116)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(116)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(116)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(116)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(116)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(116)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(116)
						if ((tmp12)){
							HX_STACK_LINE(116)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(116)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(116)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(116)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(116)
							{
								HX_STACK_LINE(116)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(116)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(116)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(116)
								this3 = tmp16;
								HX_STACK_LINE(116)
								tmp14 = this3;
							}
							HX_STACK_LINE(116)
							_this->buffer = tmp14;
							HX_STACK_LINE(116)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(116)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(116)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(116)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(116)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(116)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						_this->byteLength = tmp13;
						HX_STACK_LINE(116)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(116)
						_this->length = srcLength;
						HX_STACK_LINE(116)
						tmp4 = _this;
					}
					HX_STACK_LINE(116)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(116)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					if ((tmp4)){
						HX_STACK_LINE(116)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(116)
						{
							HX_STACK_LINE(116)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(116)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(116)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(116)
							if ((tmp7)){
								HX_STACK_LINE(116)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(116)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(116)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(116)
							if ((tmp9)){
								HX_STACK_LINE(116)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(116)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(116)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(116)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(116)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(116)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(116)
							if ((tmp11)){
								HX_STACK_LINE(116)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(116)
								newByteLength = tmp12;
								HX_STACK_LINE(116)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(116)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(116)
								if ((tmp14)){
									HX_STACK_LINE(116)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(116)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(116)
								if ((tmp15)){
									HX_STACK_LINE(116)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(116)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(116)
								newByteLength = tmp12;
								HX_STACK_LINE(116)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(116)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(116)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(116)
								if ((tmp14)){
									HX_STACK_LINE(116)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(116)
							_this->buffer = null();
							HX_STACK_LINE(116)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(116)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(116)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(116)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(116)
							_this->length = tmp13;
							HX_STACK_LINE(116)
							tmp5 = _this;
						}
						HX_STACK_LINE(116)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(116)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(116)
		tmp = this2;
	}
	HX_STACK_LINE(116)
	::lime::utils::ArrayBufferView table = tmp;		HX_STACK_VAR(table,"table");
	HX_STACK_LINE(117)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(117)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(117)
	Float multiplier = tmp1;		HX_STACK_VAR(multiplier,"multiplier");
	HX_STACK_LINE(118)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(118)
		tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(118)
	Float tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	Float offset = tmp3;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(119)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp4 = (_g < (int)256);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			if ((tmp5)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(123)
			Float tmp7 = (i * multiplier);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			Float tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			value = tmp10;
			HX_STACK_LINE(124)
			bool tmp11 = (value > (int)255);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			if ((tmp11)){
				HX_STACK_LINE(124)
				value = (int)255;
			}
			HX_STACK_LINE(125)
			bool tmp12 = (value < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			if ((tmp12)){
				HX_STACK_LINE(125)
				value = (int)0;
			}
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				::__hxcpp_memory_set_byte(table->buffer->b,(table->byteOffset + i),value);
				HX_STACK_LINE(126)
				value;
			}
		}
	}
	HX_STACK_LINE(130)
	::lime::utils::ArrayBufferView tmp4 = table;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getBlueTable,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getGreenTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getGreenTable",0xf983c45b,"lime.math._ColorMatrix.ColorMatrix_Impl_.getGreenTable","lime/math/ColorMatrix.hx",135,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(137)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(137)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		if ((tmp1)){
			HX_STACK_LINE(137)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(137)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			if ((tmp2)){
				HX_STACK_LINE(137)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(137)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(137)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(137)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(137)
					_this->length = tmp5;
					HX_STACK_LINE(137)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(137)
					_this->byteLength = tmp6;
					HX_STACK_LINE(137)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(137)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(137)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(137)
						this3 = tmp9;
						HX_STACK_LINE(137)
						tmp7 = this3;
					}
					HX_STACK_LINE(137)
					_this->buffer = tmp7;
					HX_STACK_LINE(137)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(137)
					tmp3 = _this;
				}
				HX_STACK_LINE(137)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(137)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(137)
				if ((tmp3)){
					HX_STACK_LINE(137)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(137)
					{
						HX_STACK_LINE(137)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(137)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(137)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(137)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(137)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(137)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(137)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(137)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(137)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(137)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(137)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(137)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(137)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(137)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(137)
						if ((tmp12)){
							HX_STACK_LINE(137)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(137)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(137)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(137)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(137)
							{
								HX_STACK_LINE(137)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(137)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(137)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(137)
								this3 = tmp16;
								HX_STACK_LINE(137)
								tmp14 = this3;
							}
							HX_STACK_LINE(137)
							_this->buffer = tmp14;
							HX_STACK_LINE(137)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(137)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(137)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(137)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(137)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(137)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(137)
						_this->byteLength = tmp13;
						HX_STACK_LINE(137)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(137)
						_this->length = srcLength;
						HX_STACK_LINE(137)
						tmp4 = _this;
					}
					HX_STACK_LINE(137)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(137)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(137)
					if ((tmp4)){
						HX_STACK_LINE(137)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(137)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(137)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(137)
							if ((tmp7)){
								HX_STACK_LINE(137)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(137)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(137)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(137)
							if ((tmp9)){
								HX_STACK_LINE(137)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(137)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(137)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(137)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(137)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(137)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(137)
							if ((tmp11)){
								HX_STACK_LINE(137)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(137)
								newByteLength = tmp12;
								HX_STACK_LINE(137)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(137)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(137)
								if ((tmp14)){
									HX_STACK_LINE(137)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(137)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(137)
								if ((tmp15)){
									HX_STACK_LINE(137)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(137)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(137)
								newByteLength = tmp12;
								HX_STACK_LINE(137)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(137)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(137)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(137)
								if ((tmp14)){
									HX_STACK_LINE(137)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(137)
							_this->buffer = null();
							HX_STACK_LINE(137)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(137)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(137)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(137)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(137)
							_this->length = tmp13;
							HX_STACK_LINE(137)
							tmp5 = _this;
						}
						HX_STACK_LINE(137)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(137)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(137)
		tmp = this2;
	}
	HX_STACK_LINE(137)
	::lime::utils::ArrayBufferView table = tmp;		HX_STACK_VAR(table,"table");
	HX_STACK_LINE(138)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(138)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(138)
	Float multiplier = tmp1;		HX_STACK_VAR(multiplier,"multiplier");
	HX_STACK_LINE(139)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(139)
		tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(139)
	Float tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(139)
	Float offset = tmp3;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(140)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		while((true)){
			HX_STACK_LINE(142)
			bool tmp4 = (_g < (int)256);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			if ((tmp5)){
				HX_STACK_LINE(142)
				break;
			}
			HX_STACK_LINE(142)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(144)
			Float tmp7 = (i * multiplier);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			Float tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			value = tmp10;
			HX_STACK_LINE(145)
			bool tmp11 = (value > (int)255);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(145)
			if ((tmp11)){
				HX_STACK_LINE(145)
				value = (int)255;
			}
			HX_STACK_LINE(146)
			bool tmp12 = (value < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(146)
			if ((tmp12)){
				HX_STACK_LINE(146)
				value = (int)0;
			}
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				::__hxcpp_memory_set_byte(table->buffer->b,(table->byteOffset + i),value);
				HX_STACK_LINE(147)
				value;
			}
		}
	}
	HX_STACK_LINE(151)
	::lime::utils::ArrayBufferView tmp4 = table;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getGreenTable,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getRedTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getRedTable",0x2b90530d,"lime.math._ColorMatrix.ColorMatrix_Impl_.getRedTable","lime/math/ColorMatrix.hx",156,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(158)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(158)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(158)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(158)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			if ((tmp2)){
				HX_STACK_LINE(158)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				{
					HX_STACK_LINE(158)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(158)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(158)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(158)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(158)
					_this->length = tmp5;
					HX_STACK_LINE(158)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(158)
					_this->byteLength = tmp6;
					HX_STACK_LINE(158)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(158)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(158)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(158)
						this3 = tmp9;
						HX_STACK_LINE(158)
						tmp7 = this3;
					}
					HX_STACK_LINE(158)
					_this->buffer = tmp7;
					HX_STACK_LINE(158)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(158)
					tmp3 = _this;
				}
				HX_STACK_LINE(158)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(158)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				if ((tmp3)){
					HX_STACK_LINE(158)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(158)
					{
						HX_STACK_LINE(158)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(158)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(158)
						::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(158)
						::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(158)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(158)
						int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(158)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(158)
						int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(158)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(158)
						int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(158)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(158)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(158)
						int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(158)
						bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(158)
						if ((tmp12)){
							HX_STACK_LINE(158)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(158)
							int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(158)
							int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(158)
							::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(158)
							{
								HX_STACK_LINE(158)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(158)
								int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(158)
								::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(158)
								this3 = tmp16;
								HX_STACK_LINE(158)
								tmp14 = this3;
							}
							HX_STACK_LINE(158)
							_this->buffer = tmp14;
							HX_STACK_LINE(158)
							::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(158)
							int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(158)
							int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(158)
							_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
						}
						else{
							HX_STACK_LINE(158)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(158)
						int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(158)
						_this->byteLength = tmp13;
						HX_STACK_LINE(158)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(158)
						_this->length = srcLength;
						HX_STACK_LINE(158)
						tmp4 = _this;
					}
					HX_STACK_LINE(158)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(158)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(158)
					if ((tmp4)){
						HX_STACK_LINE(158)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(158)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(158)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(158)
							if ((tmp7)){
								HX_STACK_LINE(158)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(158)
							int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(158)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(158)
							if ((tmp9)){
								HX_STACK_LINE(158)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(158)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(158)
							int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(158)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(158)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(158)
							bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(158)
							if ((tmp11)){
								HX_STACK_LINE(158)
								int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(158)
								newByteLength = tmp12;
								HX_STACK_LINE(158)
								int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(158)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(158)
								if ((tmp14)){
									HX_STACK_LINE(158)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(158)
								bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(158)
								if ((tmp15)){
									HX_STACK_LINE(158)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(158)
								int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(158)
								newByteLength = tmp12;
								HX_STACK_LINE(158)
								int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(158)
								int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(158)
								bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(158)
								if ((tmp14)){
									HX_STACK_LINE(158)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(158)
							_this->buffer = null();
							HX_STACK_LINE(158)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(158)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(158)
							Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(158)
							int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(158)
							_this->length = tmp13;
							HX_STACK_LINE(158)
							tmp5 = _this;
						}
						HX_STACK_LINE(158)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(158)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
					}
				}
			}
		}
		HX_STACK_LINE(158)
		tmp = this2;
	}
	HX_STACK_LINE(158)
	::lime::utils::ArrayBufferView table = tmp;		HX_STACK_VAR(table,"table");
	HX_STACK_LINE(159)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	{
		HX_STACK_LINE(159)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(159)
		tmp1 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(159)
	Float multiplier = tmp1;		HX_STACK_VAR(multiplier,"multiplier");
	HX_STACK_LINE(160)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(160)
		tmp2 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(160)
	Float tmp3 = (tmp2 * (int)255);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	Float offset = tmp3;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(161)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			bool tmp4 = (_g < (int)256);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			if ((tmp5)){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(165)
			Float tmp7 = (i * multiplier);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			Float tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			value = tmp10;
			HX_STACK_LINE(166)
			bool tmp11 = (value > (int)255);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(166)
			if ((tmp11)){
				HX_STACK_LINE(166)
				value = (int)255;
			}
			HX_STACK_LINE(167)
			bool tmp12 = (value < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			if ((tmp12)){
				HX_STACK_LINE(167)
				value = (int)0;
			}
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				::__hxcpp_memory_set_byte(table->buffer->b,(table->byteOffset + i),value);
				HX_STACK_LINE(168)
				value;
			}
		}
	}
	HX_STACK_LINE(172)
	::lime::utils::ArrayBufferView tmp4 = table;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getRedTable,return )

Dynamic ColorMatrix_Impl__obj::__toFlashColorTransform( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","__toFlashColorTransform",0x02badfd8,"lime.math._ColorMatrix.ColorMatrix_Impl_.__toFlashColorTransform","lime/math/ColorMatrix.hx",182,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(182)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,__toFlashColorTransform,return )

Float ColorMatrix_Impl__obj::get_alphaMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaMultiplier",0xa15814f0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaMultiplier","lime/math/ColorMatrix.hx",195,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(197)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(197)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)72));
	}
	HX_STACK_LINE(197)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::set_alphaMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaMultiplier",0xddf507fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaMultiplier","lime/math/ColorMatrix.hx",202,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(204)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(204)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)72),value);
		HX_STACK_LINE(204)
		tmp = value;
	}
	HX_STACK_LINE(204)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::get_alphaOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaOffset",0xff81a182,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaOffset","lime/math/ColorMatrix.hx",209,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(211)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(211)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)76));
	}
	HX_STACK_LINE(211)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaOffset,return )

Float ColorMatrix_Impl__obj::set_alphaOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaOffset",0xfb4d1e8e,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaOffset","lime/math/ColorMatrix.hx",216,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(218)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(218)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)76),val);
			HX_STACK_LINE(218)
			tmp = val;
		}
	}
	HX_STACK_LINE(218)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaOffset,return )

Float ColorMatrix_Impl__obj::get_blueMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueMultiplier",0x69726b6a,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueMultiplier","lime/math/ColorMatrix.hx",223,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(225)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(225)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));
	}
	HX_STACK_LINE(225)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueMultiplier,return )

Float ColorMatrix_Impl__obj::set_blueMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueMultiplier",0x46219dde,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueMultiplier","lime/math/ColorMatrix.hx",230,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(232)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),value);
		HX_STACK_LINE(232)
		tmp = value;
	}
	HX_STACK_LINE(232)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueMultiplier,return )

Float ColorMatrix_Impl__obj::get_blueOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueOffset",0x2f5cb2fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueOffset","lime/math/ColorMatrix.hx",237,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(239)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(239)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(239)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueOffset,return )

Float ColorMatrix_Impl__obj::set_blueOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueOffset",0x4f7c9b70,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueOffset","lime/math/ColorMatrix.hx",244,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(246)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(246)
		{
			HX_STACK_LINE(246)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(246)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
			HX_STACK_LINE(246)
			tmp = val;
		}
	}
	HX_STACK_LINE(246)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueOffset,return )

int ColorMatrix_Impl__obj::get_color( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_color",0x1b460a94,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_color","lime/math/ColorMatrix.hx",251,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(253)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(253)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(253)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(253)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(253)
		tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(253)
	Float tmp5 = (tmp4 * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(253)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(253)
	int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(253)
	int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(253)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(253)
		tmp9 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));
	}
	HX_STACK_LINE(253)
	Float tmp10 = (tmp9 * (int)255);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(253)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(253)
	int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(253)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_color,return )

int ColorMatrix_Impl__obj::set_color( ::lime::utils::ArrayBufferView this1,int value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_color",0xfe96f6a0,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_color","lime/math/ColorMatrix.hx",258,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		Float val = tmp2;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(260)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
			HX_STACK_LINE(260)
			val;
		}
	}
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int tmp = (int(value) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		Float val = tmp2;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(261)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
			HX_STACK_LINE(261)
			val;
		}
	}
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		int tmp = (int(value) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		Float tmp1 = (Float(tmp) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(262)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
			HX_STACK_LINE(262)
			val;
		}
	}
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(264)
		::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,(int)0);
		HX_STACK_LINE(264)
		(int)0;
	}
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(265)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)0);
		HX_STACK_LINE(265)
		(int)0;
	}
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(266)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),(int)0);
		HX_STACK_LINE(266)
		(int)0;
	}
	HX_STACK_LINE(268)
	::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	int tmp1 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::get_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_color,return )

Float ColorMatrix_Impl__obj::get_greenMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenMultiplier",0x76158c95,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenMultiplier","lime/math/ColorMatrix.hx",273,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(275)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(275)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));
	}
	HX_STACK_LINE(275)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenMultiplier,return )

Float ColorMatrix_Impl__obj::set_greenMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenMultiplier",0xb2b27fa1,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenMultiplier","lime/math/ColorMatrix.hx",280,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(282)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(282)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(282)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),value);
		HX_STACK_LINE(282)
		tmp = value;
	}
	HX_STACK_LINE(282)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenMultiplier,return )

Float ColorMatrix_Impl__obj::get_greenOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenOffset",0xe71722a7,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenOffset","lime/math/ColorMatrix.hx",287,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(289)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(289)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));
	}
	HX_STACK_LINE(289)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenOffset,return )

Float ColorMatrix_Impl__obj::set_greenOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenOffset",0xe2e29fb3,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenOffset","lime/math/ColorMatrix.hx",294,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(296)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(296)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
			HX_STACK_LINE(296)
			tmp = val;
		}
	}
	HX_STACK_LINE(296)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenOffset,return )

Float ColorMatrix_Impl__obj::get_redMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redMultiplier",0x58c9a663,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redMultiplier","lime/math/ColorMatrix.hx",301,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(303)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(303)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);
	}
	HX_STACK_LINE(303)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redMultiplier,return )

Float ColorMatrix_Impl__obj::set_redMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redMultiplier",0x7c377e6f,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redMultiplier","lime/math/ColorMatrix.hx",308,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(310)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(310)
	{
		HX_STACK_LINE(310)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(310)
		::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
		HX_STACK_LINE(310)
		tmp = value;
	}
	HX_STACK_LINE(310)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redMultiplier,return )

Float ColorMatrix_Impl__obj::get_redOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redOffset",0xd26abd75,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redOffset","lime/math/ColorMatrix.hx",315,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(317)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	{
		HX_STACK_LINE(317)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(317)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));
	}
	HX_STACK_LINE(317)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redOffset,return )

Float ColorMatrix_Impl__obj::set_redOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redOffset",0x17709f81,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redOffset","lime/math/ColorMatrix.hx",322,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(324)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	{
		HX_STACK_LINE(324)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
			HX_STACK_LINE(324)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
			HX_STACK_LINE(324)
			tmp = val;
		}
	}
	HX_STACK_LINE(324)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redOffset,return )

Float ColorMatrix_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get",0xe0573df0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get","lime/math/ColorMatrix.hx",329,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(331)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	{
		HX_STACK_LINE(331)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(331)
		tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)));
	}
	HX_STACK_LINE(331)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,get,return )

Float ColorMatrix_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set",0xe06058fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set","lime/math/ColorMatrix.hx",336,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(338)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	{
		HX_STACK_LINE(338)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(338)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),value);
		HX_STACK_LINE(338)
		tmp = value;
	}
	HX_STACK_LINE(338)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_Impl__obj,set,return )


ColorMatrix_Impl__obj::ColorMatrix_Impl__obj()
{
}

bool ColorMatrix_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_color") ) { outValue = set_color_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getRedTable") ) { outValue = getRedTable_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBlueTable") ) { outValue = getBlueTable_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaTable") ) { outValue = getAlphaTable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getGreenTable") ) { outValue = getGreenTable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_redOffset") ) { outValue = get_redOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redOffset") ) { outValue = set_redOffset_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_blueOffset") ) { outValue = get_blueOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueOffset") ) { outValue = set_blueOffset_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_alphaOffset") ) { outValue = get_alphaOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaOffset") ) { outValue = set_alphaOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_greenOffset") ) { outValue = get_greenOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenOffset") ) { outValue = set_greenOffset_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_redMultiplier") ) { outValue = get_redMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redMultiplier") ) { outValue = set_redMultiplier_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_blueMultiplier") ) { outValue = get_blueMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueMultiplier") ) { outValue = set_blueMultiplier_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_alphaMultiplier") ) { outValue = get_alphaMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaMultiplier") ) { outValue = set_alphaMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_greenMultiplier") ) { outValue = get_greenMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenMultiplier") ) { outValue = set_greenMultiplier_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__toFlashColorTransform") ) { outValue = __toFlashColorTransform_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &ColorMatrix_Impl__obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
};

#endif

hx::Class ColorMatrix_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("getAlphaTable","\x06","\x68","\xfb","\x87"),
	HX_HCSTRING("getBlueTable","\x9e","\xd3","\x74","\xf2"),
	HX_HCSTRING("getGreenTable","\x81","\x12","\x1b","\x3c"),
	HX_HCSTRING("getRedTable","\xb3","\xab","\x23","\xa0"),
	HX_HCSTRING("__toFlashColorTransform","\x7e","\x99","\xc3","\xed"),
	HX_HCSTRING("get_alphaMultiplier","\x96","\x83","\x8d","\x25"),
	HX_HCSTRING("set_alphaMultiplier","\xa2","\x76","\x2a","\x62"),
	HX_HCSTRING("get_alphaOffset","\x28","\x45","\x25","\x91"),
	HX_HCSTRING("set_alphaOffset","\x34","\xc2","\xf0","\x8c"),
	HX_HCSTRING("get_blueMultiplier","\x84","\x13","\x30","\x6b"),
	HX_HCSTRING("set_blueMultiplier","\xf8","\x45","\xdf","\x47"),
	HX_HCSTRING("get_blueOffset","\x16","\xc6","\x29","\x31"),
	HX_HCSTRING("set_blueOffset","\x8a","\xae","\x49","\x51"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_greenMultiplier","\x3b","\xfb","\x4a","\xfa"),
	HX_HCSTRING("set_greenMultiplier","\x47","\xee","\xe7","\x36"),
	HX_HCSTRING("get_greenOffset","\x4d","\xc6","\xba","\x78"),
	HX_HCSTRING("set_greenOffset","\x59","\x43","\x86","\x74"),
	HX_HCSTRING("get_redMultiplier","\x89","\xff","\x59","\x55"),
	HX_HCSTRING("set_redMultiplier","\x95","\xd7","\xc7","\x78"),
	HX_HCSTRING("get_redOffset","\x9b","\x0b","\x02","\x15"),
	HX_HCSTRING("set_redOffset","\xa7","\xed","\x07","\x5a"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void ColorMatrix_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._ColorMatrix.ColorMatrix_Impl_","\xc8","\xe8","\xe8","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrix_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ColorMatrix_Impl__obj >;
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

void ColorMatrix_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0));
}

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix
