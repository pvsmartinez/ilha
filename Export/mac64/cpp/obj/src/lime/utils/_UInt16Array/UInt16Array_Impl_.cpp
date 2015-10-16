#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__UInt16Array_UInt16Array_Impl_
#include <lime/utils/_UInt16Array/UInt16Array_Impl_.h>
#endif
namespace lime{
namespace utils{
namespace _UInt16Array{

Void UInt16Array_Impl__obj::__construct()
{
	return null();
}

//UInt16Array_Impl__obj::~UInt16Array_Impl__obj() { }

Dynamic UInt16Array_Impl__obj::__CreateEmpty() { return  new UInt16Array_Impl__obj; }
hx::ObjectPtr< UInt16Array_Impl__obj > UInt16Array_Impl__obj::__new()
{  hx::ObjectPtr< UInt16Array_Impl__obj > _result_ = new UInt16Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic UInt16Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt16Array_Impl__obj > _result_ = new UInt16Array_Impl__obj();
	_result_->__construct();
	return _result_;}

int UInt16Array_Impl__obj::BYTES_PER_ELEMENT;

::lime::utils::ArrayBufferView UInt16Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","subarray",0xb49bfdea,"lime.utils._UInt16Array.UInt16Array_Impl_.subarray","lime/utils/UInt16Array.hx",95,0x124ad8bc)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(95)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(95)
			(end == this1->length);
		}
		HX_STACK_LINE(95)
		int tmp2 = (end - begin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		int len = tmp2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(95)
		int tmp3 = (begin * this1->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		int byte_offset = tmp3;		HX_STACK_VAR(byte_offset,"byte_offset");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = this1->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			switch( (int)(tmp5)){
				case (int)1: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(95)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(95)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					if ((tmp6)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(95)
						if ((tmp7)){
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(95)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(95)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(95)
								_this->length = tmp10;
								HX_STACK_LINE(95)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(95)
								_this->byteLength = tmp11;
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(95)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									this3 = tmp14;
									HX_STACK_LINE(95)
									tmp12 = this3;
								}
								HX_STACK_LINE(95)
								_this->buffer = tmp12;
								HX_STACK_LINE(95)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(95)
								tmp8 = _this;
							}
							HX_STACK_LINE(95)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(95)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							if ((tmp8)){
								HX_STACK_LINE(95)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								{
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(95)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(95)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(95)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(95)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(95)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(95)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(95)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(95)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(95)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(95)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									if ((tmp17)){
										HX_STACK_LINE(95)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(95)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(95)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(95)
										{
											HX_STACK_LINE(95)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(95)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(95)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(95)
											this3 = tmp21;
											HX_STACK_LINE(95)
											tmp19 = this3;
										}
										HX_STACK_LINE(95)
										_this->buffer = tmp19;
										HX_STACK_LINE(95)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(95)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(95)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(95)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(95)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(95)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									_this->byteLength = tmp18;
									HX_STACK_LINE(95)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(95)
									_this->length = srcLength;
									HX_STACK_LINE(95)
									tmp9 = _this;
								}
								HX_STACK_LINE(95)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(95)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(95)
								if ((tmp9)){
									HX_STACK_LINE(95)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(95)
									{
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(95)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(95)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(95)
										if ((tmp12)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(95)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(95)
										if ((tmp14)){
											HX_STACK_LINE(95)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(95)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(95)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(95)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(95)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(95)
										if ((tmp15)){
											HX_STACK_LINE(95)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(95)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(95)
											if ((tmp19)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(95)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(95)
											newByteLength = tmp16;
											HX_STACK_LINE(95)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(95)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(95)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(95)
											if ((tmp18)){
												HX_STACK_LINE(95)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(95)
										_this->buffer = buffer;
										HX_STACK_LINE(95)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(95)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(95)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(95)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(95)
										_this->length = tmp17;
										HX_STACK_LINE(95)
										tmp10 = _this;
									}
									HX_STACK_LINE(95)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
					HX_STACK_LINE(95)
					tmp4 = this2;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(95)
					HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
				}
				;break;
			}
		}
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView view = tmp4;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(95)
		tmp = view;
	}
	HX_STACK_LINE(95)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt16Array_Impl__obj,subarray,return )

::lime::utils::ArrayBufferView UInt16Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes,Dynamic __o_byteOffset,Dynamic len){
Dynamic byteOffset = __o_byteOffset.Default(0);
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","fromBytes",0x3c5adfb0,"lime.utils._UInt16Array.UInt16Array_Impl_.fromBytes","lime/utils/UInt16Array.hx",99,0x124ad8bc)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(100)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(100)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			if ((tmp1)){
				HX_STACK_LINE(100)
				::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				this1 = tmp2;
			}
			else{
				HX_STACK_LINE(100)
				bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(100)
				if ((tmp2)){
					HX_STACK_LINE(100)
					::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(100)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(100)
						int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(100)
						_this->length = tmp5;
						HX_STACK_LINE(100)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(100)
						_this->byteLength = tmp6;
						HX_STACK_LINE(100)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(100)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(100)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(100)
							this2 = tmp9;
							HX_STACK_LINE(100)
							tmp7 = this2;
						}
						HX_STACK_LINE(100)
						_this->buffer = tmp7;
						HX_STACK_LINE(100)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(100)
						tmp3 = _this;
					}
					HX_STACK_LINE(100)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(100)
					bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					if ((tmp3)){
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(100)
							::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(100)
							::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(100)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(100)
							int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(100)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(100)
							int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(100)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(100)
							int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(100)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(100)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(100)
							int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(100)
							bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(100)
							if ((tmp12)){
								HX_STACK_LINE(100)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(100)
								int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(100)
								int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(100)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(100)
								{
									HX_STACK_LINE(100)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(100)
									int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(100)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(100)
									this2 = tmp16;
									HX_STACK_LINE(100)
									tmp14 = this2;
								}
								HX_STACK_LINE(100)
								_this->buffer = tmp14;
								HX_STACK_LINE(100)
								::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(100)
								int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(100)
								int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(100)
								_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
							}
							else{
								HX_STACK_LINE(100)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(100)
							int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(100)
							_this->byteLength = tmp13;
							HX_STACK_LINE(100)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(100)
							_this->length = srcLength;
							HX_STACK_LINE(100)
							tmp4 = _this;
						}
						HX_STACK_LINE(100)
						this1 = tmp4;
					}
					else{
						HX_STACK_LINE(100)
						bool tmp4 = (bytes != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(100)
						if ((tmp4)){
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(100)
								::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(100)
								bool tmp7 = (byteOffset < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(100)
								if ((tmp7)){
									HX_STACK_LINE(100)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(100)
								int tmp8 = hx::Mod(byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(100)
								bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(100)
								if ((tmp9)){
									HX_STACK_LINE(100)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(100)
								int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(100)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(100)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(100)
								bool tmp10 = (len == null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(100)
								if ((tmp10)){
									HX_STACK_LINE(100)
									int tmp11 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(100)
									newByteLength = tmp11;
									HX_STACK_LINE(100)
									int tmp12 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(100)
									bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(100)
									if ((tmp13)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(100)
									bool tmp14 = (newByteLength < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(100)
									if ((tmp14)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(100)
									int tmp11 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(100)
									newByteLength = tmp11;
									HX_STACK_LINE(100)
									int tmp12 = (byteOffset + newByteLength);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(100)
									int newRange = tmp12;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(100)
									bool tmp13 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(100)
									if ((tmp13)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(100)
								_this->buffer = bytes;
								HX_STACK_LINE(100)
								_this->byteOffset = byteOffset;
								HX_STACK_LINE(100)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(100)
								Float tmp11 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(100)
								int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(100)
								_this->length = tmp12;
								HX_STACK_LINE(100)
								tmp5 = _this;
							}
							HX_STACK_LINE(100)
							this1 = tmp5;
						}
						else{
							HX_STACK_LINE(100)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
						}
					}
				}
			}
			HX_STACK_LINE(100)
			tmp = this1;
		}
		HX_STACK_LINE(100)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt16Array_Impl__obj,fromBytes,return )

::haxe::io::Bytes UInt16Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","toBytes",0x3715903f,"lime.utils._UInt16Array.UInt16Array_Impl_.toBytes","lime/utils/UInt16Array.hx",103,0x124ad8bc)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(104)
	::haxe::io::Bytes tmp = this1->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt16Array_Impl__obj,toBytes,return )

int UInt16Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","get_length",0xb80484c0,"lime.utils._UInt16Array.UInt16Array_Impl_.get_length","lime/utils/UInt16Array.hx",109,0x124ad8bc)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(109)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt16Array_Impl__obj,get_length,return )

Dynamic UInt16Array_Impl__obj::__get( ::lime::utils::ArrayBufferView this1,int idx){
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","__get",0x5be75b05,"lime.utils._UInt16Array.UInt16Array_Impl_.__get","lime/utils/UInt16Array.hx",114,0x124ad8bc)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(115)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(115)
		int tmp1 = ::__hxcpp_memory_get_ui16(this1->buffer->b,(this1->byteOffset + (idx * (int)2)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		tmp = (int(tmp1) & int((int)65535));
	}
	HX_STACK_LINE(115)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UInt16Array_Impl__obj,__get,return )

int UInt16Array_Impl__obj::__set( ::lime::utils::ArrayBufferView this1,int idx,int val){
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","__set",0x5bf07611,"lime.utils._UInt16Array.UInt16Array_Impl_.__set","lime/utils/UInt16Array.hx",120,0x124ad8bc)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(121)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
		HX_STACK_LINE(121)
		::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (idx * (int)2)),val);
		HX_STACK_LINE(121)
		tmp = val;
	}
	HX_STACK_LINE(121)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(UInt16Array_Impl__obj,__set,return )

::String UInt16Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._UInt16Array.UInt16Array_Impl_","toString",0xe5897a7d,"lime.utils._UInt16Array.UInt16Array_Impl_.toString","lime/utils/UInt16Array.hx",124,0x124ad8bc)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(124)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	if ((tmp)){
		HX_STACK_LINE(124)
		::String tmp2 = (HX_HCSTRING("UInt16Array [byteLength:","\xb7","\x19","\x59","\x35") + this1->byteLength);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::String tmp3 = (tmp2 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		int tmp4 = this1->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		tmp1 = (tmp5 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(124)
		tmp1 = null();
	}
	HX_STACK_LINE(124)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UInt16Array_Impl__obj,toString,return )


UInt16Array_Impl__obj::UInt16Array_Impl__obj()
{
}

bool UInt16Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { outValue = __get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__set") ) { outValue = __set_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &UInt16Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt16Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UInt16Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt16Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UInt16Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class UInt16Array_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void UInt16Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._UInt16Array.UInt16Array_Impl_","\xbd","\x34","\x5a","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UInt16Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UInt16Array_Impl__obj >;
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

void UInt16Array_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)2;
}

} // end namespace lime
} // end namespace utils
} // end namespace _UInt16Array
