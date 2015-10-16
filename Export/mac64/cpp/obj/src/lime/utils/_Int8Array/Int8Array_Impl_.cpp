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
#ifndef INCLUDED_lime_utils__Int8Array_Int8Array_Impl_
#include <lime/utils/_Int8Array/Int8Array_Impl_.h>
#endif
namespace lime{
namespace utils{
namespace _Int8Array{

Void Int8Array_Impl__obj::__construct()
{
	return null();
}

//Int8Array_Impl__obj::~Int8Array_Impl__obj() { }

Dynamic Int8Array_Impl__obj::__CreateEmpty() { return  new Int8Array_Impl__obj; }
hx::ObjectPtr< Int8Array_Impl__obj > Int8Array_Impl__obj::__new()
{  hx::ObjectPtr< Int8Array_Impl__obj > _result_ = new Int8Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Int8Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int8Array_Impl__obj > _result_ = new Int8Array_Impl__obj();
	_result_->__construct();
	return _result_;}

int Int8Array_Impl__obj::BYTES_PER_ELEMENT;

::lime::utils::ArrayBufferView Int8Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","subarray",0xb8bbe1fe,"lime.utils._Int8Array.Int8Array_Impl_.subarray","lime/utils/Int8Array.hx",93,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(93)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(93)
			(end == this1->length);
		}
		HX_STACK_LINE(93)
		int tmp2 = (end - begin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		int len = tmp2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(93)
		int tmp3 = (begin * this1->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		int byte_offset = tmp3;		HX_STACK_VAR(byte_offset,"byte_offset");
		HX_STACK_LINE(93)
		::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = this1->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			switch( (int)(tmp5)){
				case (int)1: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(93)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(93)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					if ((tmp6)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						this2 = tmp7;
					}
					else{
						HX_STACK_LINE(93)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(93)
						if ((tmp7)){
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(93)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(93)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(93)
								_this->length = tmp10;
								HX_STACK_LINE(93)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								_this->byteLength = tmp11;
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(93)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									this3 = tmp14;
									HX_STACK_LINE(93)
									tmp12 = this3;
								}
								HX_STACK_LINE(93)
								_this->buffer = tmp12;
								HX_STACK_LINE(93)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(93)
								tmp8 = _this;
							}
							HX_STACK_LINE(93)
							this2 = tmp8;
						}
						else{
							HX_STACK_LINE(93)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(93)
							if ((tmp8)){
								HX_STACK_LINE(93)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								{
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(93)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(93)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(93)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(93)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(93)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(93)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(93)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(93)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(93)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(93)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(93)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(93)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(93)
									if ((tmp17)){
										HX_STACK_LINE(93)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(93)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(93)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(93)
										{
											HX_STACK_LINE(93)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(93)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(93)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(93)
											this3 = tmp21;
											HX_STACK_LINE(93)
											tmp19 = this3;
										}
										HX_STACK_LINE(93)
										_this->buffer = tmp19;
										HX_STACK_LINE(93)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(93)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(93)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(93)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(93)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(93)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(93)
									_this->byteLength = tmp18;
									HX_STACK_LINE(93)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(93)
									_this->length = srcLength;
									HX_STACK_LINE(93)
									tmp9 = _this;
								}
								HX_STACK_LINE(93)
								this2 = tmp9;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp9 = (buffer != null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(93)
								if ((tmp9)){
									HX_STACK_LINE(93)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(93)
									{
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(93)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(93)
										bool tmp12 = (byte_offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(93)
										if ((tmp12)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int tmp13 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(93)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(93)
										if ((tmp14)){
											HX_STACK_LINE(93)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(93)
										int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(93)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(93)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(93)
										bool tmp15 = (len == null());		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(93)
										if ((tmp15)){
											HX_STACK_LINE(93)
											int tmp16 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(93)
											bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(93)
											if ((tmp19)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(93)
											int tmp16 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(93)
											newByteLength = tmp16;
											HX_STACK_LINE(93)
											int tmp17 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(93)
											int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(93)
											bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(93)
											if ((tmp18)){
												HX_STACK_LINE(93)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(93)
										_this->buffer = buffer;
										HX_STACK_LINE(93)
										_this->byteOffset = byte_offset;
										HX_STACK_LINE(93)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(93)
										Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(93)
										int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(93)
										_this->length = tmp17;
										HX_STACK_LINE(93)
										tmp10 = _this;
									}
									HX_STACK_LINE(93)
									this2 = tmp10;
								}
								else{
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
								}
							}
						}
					}
					HX_STACK_LINE(93)
					tmp4 = this2;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(93)
					HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
				}
				;break;
			}
		}
		HX_STACK_LINE(93)
		::lime::utils::ArrayBufferView view = tmp4;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(93)
		tmp = view;
	}
	HX_STACK_LINE(93)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,subarray,return )

::lime::utils::ArrayBufferView Int8Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes,Dynamic __o_byteOffset,Dynamic len){
Dynamic byteOffset = __o_byteOffset.Default(0);
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","fromBytes",0xd4228d1c,"lime.utils._Int8Array.Int8Array_Impl_.fromBytes","lime/utils/Int8Array.hx",97,0x4ea19046)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(98)
		bool tmp = (byteOffset == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		if ((tmp)){
			HX_STACK_LINE(98)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				Dynamic elements = ((Dynamic)(bytes->b));		HX_STACK_VAR(elements,"elements");
				HX_STACK_LINE(98)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(98)
				bool tmp2 = (elements != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(98)
				if ((tmp2)){
					HX_STACK_LINE(98)
					::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(98)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(98)
					bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(98)
					if ((tmp3)){
						HX_STACK_LINE(98)
						::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(98)
						{
							HX_STACK_LINE(98)
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(98)
							::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(98)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(98)
							int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(98)
							_this->length = tmp6;
							HX_STACK_LINE(98)
							int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(98)
							_this->byteLength = tmp7;
							HX_STACK_LINE(98)
							::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(98)
							{
								HX_STACK_LINE(98)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(98)
								int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(98)
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(98)
								this2 = tmp10;
								HX_STACK_LINE(98)
								tmp8 = this2;
							}
							HX_STACK_LINE(98)
							_this->buffer = tmp8;
							HX_STACK_LINE(98)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(98)
							tmp4 = _this;
						}
						HX_STACK_LINE(98)
						this1 = tmp4;
					}
					else{
						HX_STACK_LINE(98)
						bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(98)
						if ((tmp4)){
							HX_STACK_LINE(98)
							::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(98)
							{
								HX_STACK_LINE(98)
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(98)
								::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(98)
								::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(98)
								::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(98)
								int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(98)
								int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(98)
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(98)
								int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(98)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(98)
								int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(98)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(98)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(98)
								int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(98)
								bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(98)
								if ((tmp13)){
									HX_STACK_LINE(98)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(98)
									int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(98)
									int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(98)
									::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(98)
									{
										HX_STACK_LINE(98)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(98)
										int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(98)
										::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(98)
										this2 = tmp17;
										HX_STACK_LINE(98)
										tmp15 = this2;
									}
									HX_STACK_LINE(98)
									_this->buffer = tmp15;
									HX_STACK_LINE(98)
									::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(98)
									int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(98)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(98)
									_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
								}
								else{
									HX_STACK_LINE(98)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(98)
								int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(98)
								_this->byteLength = tmp14;
								HX_STACK_LINE(98)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(98)
								_this->length = srcLength;
								HX_STACK_LINE(98)
								tmp5 = _this;
							}
							HX_STACK_LINE(98)
							this1 = tmp5;
						}
						else{
							HX_STACK_LINE(98)
							bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(98)
							if ((tmp5)){
								HX_STACK_LINE(98)
								::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(98)
								{
									HX_STACK_LINE(98)
									::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(98)
									::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(98)
									bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(98)
									if ((tmp8)){
										HX_STACK_LINE(98)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(98)
									int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(98)
									bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(98)
									if ((tmp10)){
										HX_STACK_LINE(98)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(98)
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(98)
									int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(98)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(98)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(98)
									bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(98)
									if ((tmp12)){
										HX_STACK_LINE(98)
										int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(98)
										newByteLength = tmp13;
										HX_STACK_LINE(98)
										int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(98)
										bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(98)
										if ((tmp15)){
											HX_STACK_LINE(98)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(98)
										bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(98)
										if ((tmp16)){
											HX_STACK_LINE(98)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(98)
										int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(98)
										newByteLength = tmp13;
										HX_STACK_LINE(98)
										int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(98)
										int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(98)
										bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(98)
										if ((tmp15)){
											HX_STACK_LINE(98)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(98)
									_this->buffer = null();
									HX_STACK_LINE(98)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(98)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(98)
									Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(98)
									int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(98)
									_this->length = tmp14;
									HX_STACK_LINE(98)
									tmp6 = _this;
								}
								HX_STACK_LINE(98)
								this1 = tmp6;
							}
							else{
								HX_STACK_LINE(98)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(98)
				tmp1 = this1;
			}
			HX_STACK_LINE(98)
			return tmp1;
		}
		HX_STACK_LINE(99)
		bool tmp1 = (len == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(99)
			::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				Dynamic elements = ((Dynamic)(bytes->b));		HX_STACK_VAR(elements,"elements");
				HX_STACK_LINE(99)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(99)
				bool tmp3 = (elements != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				if ((tmp3)){
					HX_STACK_LINE(99)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(99)
					this1 = tmp4;
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
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(99)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(99)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(99)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(99)
							_this->length = tmp7;
							HX_STACK_LINE(99)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(99)
							_this->byteLength = tmp8;
							HX_STACK_LINE(99)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(99)
							{
								HX_STACK_LINE(99)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(99)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(99)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(99)
								this2 = tmp11;
								HX_STACK_LINE(99)
								tmp9 = this2;
							}
							HX_STACK_LINE(99)
							_this->buffer = tmp9;
							HX_STACK_LINE(99)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(99)
							tmp5 = _this;
						}
						HX_STACK_LINE(99)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(99)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(99)
						if ((tmp5)){
							HX_STACK_LINE(99)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(99)
							{
								HX_STACK_LINE(99)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(99)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(99)
								::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(99)
								::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(99)
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(99)
								int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(99)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(99)
								int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(99)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(99)
								int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(99)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(99)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(99)
								int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(99)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(99)
								if ((tmp14)){
									HX_STACK_LINE(99)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(99)
									int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(99)
									int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(99)
									::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(99)
									{
										HX_STACK_LINE(99)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(99)
										int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(99)
										::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(99)
										this2 = tmp18;
										HX_STACK_LINE(99)
										tmp16 = this2;
									}
									HX_STACK_LINE(99)
									_this->buffer = tmp16;
									HX_STACK_LINE(99)
									::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(99)
									int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(99)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(99)
									_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
								}
								else{
									HX_STACK_LINE(99)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(99)
								int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(99)
								_this->byteLength = tmp15;
								HX_STACK_LINE(99)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(99)
								_this->length = srcLength;
								HX_STACK_LINE(99)
								tmp6 = _this;
							}
							HX_STACK_LINE(99)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(99)
							bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(99)
							if ((tmp6)){
								HX_STACK_LINE(99)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(99)
								{
									HX_STACK_LINE(99)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(99)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(99)
									bool tmp9 = (byteOffset < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(99)
									if ((tmp9)){
										HX_STACK_LINE(99)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(99)
									int tmp10 = hx::Mod(byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(99)
									bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(99)
									if ((tmp11)){
										HX_STACK_LINE(99)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(99)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(99)
									int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(99)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(99)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(99)
									bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(99)
									if ((tmp13)){
										HX_STACK_LINE(99)
										int tmp14 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(99)
										newByteLength = tmp14;
										HX_STACK_LINE(99)
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(99)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(99)
										if ((tmp16)){
											HX_STACK_LINE(99)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(99)
										bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(99)
										if ((tmp17)){
											HX_STACK_LINE(99)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(99)
										int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(99)
										newByteLength = tmp14;
										HX_STACK_LINE(99)
										int tmp15 = (byteOffset + newByteLength);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(99)
										int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(99)
										bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(99)
										if ((tmp16)){
											HX_STACK_LINE(99)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(99)
									_this->buffer = null();
									HX_STACK_LINE(99)
									_this->byteOffset = byteOffset;
									HX_STACK_LINE(99)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(99)
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(99)
									int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(99)
									_this->length = tmp15;
									HX_STACK_LINE(99)
									tmp7 = _this;
								}
								HX_STACK_LINE(99)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(99)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(99)
				tmp2 = this1;
			}
			HX_STACK_LINE(99)
			return tmp2;
		}
		HX_STACK_LINE(100)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Dynamic elements = ((Dynamic)(bytes->b));		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(100)
			bool tmp3 = (elements != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(100)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(100)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				if ((tmp4)){
					HX_STACK_LINE(100)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(100)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(100)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(100)
						_this->length = tmp7;
						HX_STACK_LINE(100)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(100)
						_this->byteLength = tmp8;
						HX_STACK_LINE(100)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(100)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(100)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(100)
							this2 = tmp11;
							HX_STACK_LINE(100)
							tmp9 = this2;
						}
						HX_STACK_LINE(100)
						_this->buffer = tmp9;
						HX_STACK_LINE(100)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(100)
						tmp5 = _this;
					}
					HX_STACK_LINE(100)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(100)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					if ((tmp5)){
						HX_STACK_LINE(100)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(100)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(100)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(100)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(100)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(100)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(100)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(100)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(100)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(100)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(100)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(100)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(100)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(100)
							if ((tmp14)){
								HX_STACK_LINE(100)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(100)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(100)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(100)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(100)
								{
									HX_STACK_LINE(100)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(100)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(100)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(100)
									this2 = tmp18;
									HX_STACK_LINE(100)
									tmp16 = this2;
								}
								HX_STACK_LINE(100)
								_this->buffer = tmp16;
								HX_STACK_LINE(100)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(100)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(100)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(100)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(100)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(100)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(100)
							_this->byteLength = tmp15;
							HX_STACK_LINE(100)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(100)
							_this->length = srcLength;
							HX_STACK_LINE(100)
							tmp6 = _this;
						}
						HX_STACK_LINE(100)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(100)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(100)
						if ((tmp6)){
							HX_STACK_LINE(100)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(100)
							{
								HX_STACK_LINE(100)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(100)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(100)
								bool tmp9 = (byteOffset < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(100)
								if ((tmp9)){
									HX_STACK_LINE(100)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(100)
								int tmp10 = hx::Mod(byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(100)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(100)
								if ((tmp11)){
									HX_STACK_LINE(100)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(100)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(100)
								int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(100)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(100)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(100)
								bool tmp13 = (len == null());		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(100)
								if ((tmp13)){
									HX_STACK_LINE(100)
									int tmp14 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(100)
									newByteLength = tmp14;
									HX_STACK_LINE(100)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(100)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(100)
									if ((tmp16)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(100)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(100)
									if ((tmp17)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(100)
									int tmp14 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(100)
									newByteLength = tmp14;
									HX_STACK_LINE(100)
									int tmp15 = (byteOffset + newByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(100)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(100)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(100)
									if ((tmp16)){
										HX_STACK_LINE(100)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(100)
								_this->buffer = null();
								HX_STACK_LINE(100)
								_this->byteOffset = byteOffset;
								HX_STACK_LINE(100)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(100)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(100)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(100)
								_this->length = tmp15;
								HX_STACK_LINE(100)
								tmp7 = _this;
							}
							HX_STACK_LINE(100)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(100)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
						}
					}
				}
			}
			HX_STACK_LINE(100)
			tmp2 = this1;
		}
		HX_STACK_LINE(100)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,fromBytes,return )

::haxe::io::Bytes Int8Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","toBytes",0xcfc8caab,"lime.utils._Int8Array.Int8Array_Impl_.toBytes","lime/utils/Int8Array.hx",103,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(104)
	::haxe::io::Bytes tmp = this1->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,toBytes,return )

int Int8Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","get_length",0xeef495d4,"lime.utils._Int8Array.Int8Array_Impl_.get_length","lime/utils/Int8Array.hx",109,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(109)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,get_length,return )

int Int8Array_Impl__obj::__get( ::lime::utils::ArrayBufferView this1,int idx){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","__get",0x7f98e271,"lime.utils._Int8Array.Int8Array_Impl_.__get","lime/utils/Int8Array.hx",114,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(115)
	int tmp = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Int8Array_Impl__obj,__get,return )

int Int8Array_Impl__obj::__set( ::lime::utils::ArrayBufferView this1,int idx,int val){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","__set",0x7fa1fd7d,"lime.utils._Int8Array.Int8Array_Impl_.__set","lime/utils/Int8Array.hx",120,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(121)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		::__hxcpp_memory_set_byte(this1->buffer->b,(this1->byteOffset + idx),val);
		HX_STACK_LINE(121)
		tmp = val;
	}
	HX_STACK_LINE(121)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,__set,return )

::String Int8Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","toString",0xe9a95e91,"lime.utils._Int8Array.Int8Array_Impl_.toString","lime/utils/Int8Array.hx",124,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(124)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	if ((tmp)){
		HX_STACK_LINE(124)
		::String tmp2 = (HX_HCSTRING("Int8Array [byteLength:","\xc1","\x87","\xc3","\x43") + this1->byteLength);		HX_STACK_VAR(tmp2,"tmp2");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,toString,return )


Int8Array_Impl__obj::Int8Array_Impl__obj()
{
}

bool Int8Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &Int8Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int8Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int8Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int8Array_Impl__obj::__mClass;

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

void Int8Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Int8Array.Int8Array_Impl_","\x29","\x23","\x97","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int8Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int8Array_Impl__obj >;
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

void Int8Array_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)1;
}

} // end namespace lime
} // end namespace utils
} // end namespace _Int8Array
