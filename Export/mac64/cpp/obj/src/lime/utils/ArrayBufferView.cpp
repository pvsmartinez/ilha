#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic elements,int in_type)
{
HX_STACK_FRAME("lime.utils.ArrayBufferView","new",0xa2471efa,"lime.utils.ArrayBufferView.new","lime/utils/ArrayBufferView.hx",9,0xb543acf8)
HX_STACK_THIS(this)
HX_STACK_ARG(elements,"elements")
HX_STACK_ARG(in_type,"in_type")
{
	HX_STACK_LINE(18)
	this->bytesPerElement = (int)0;
	HX_STACK_LINE(11)
	this->type = (int)0;
	HX_STACK_LINE(24)
	this->type = in_type;
	HX_STACK_LINE(25)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(25)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(25)
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(25)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(25)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(25)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(25)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(25)
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(25)
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(25)
			tmp1 = (int)8;
		}
		;break;
		default: {
			HX_STACK_LINE(25)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(25)
	this->bytesPerElement = tmp1;
	HX_STACK_LINE(29)
	bool tmp2 = (elements != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	if ((tmp2)){
		HX_STACK_LINE(29)
		tmp3 = (elements != (int)0);
	}
	else{
		HX_STACK_LINE(29)
		tmp3 = false;
	}
	HX_STACK_LINE(29)
	if ((tmp3)){
		HX_STACK_LINE(31)
		bool tmp4 = (elements < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		if ((tmp4)){
			HX_STACK_LINE(31)
			elements = (int)0;
		}
		HX_STACK_LINE(35)
		this->byteOffset = (int)0;
		HX_STACK_LINE(36)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int elemCount = elements;		HX_STACK_VAR(elemCount,"elemCount");
			HX_STACK_LINE(36)
			int tmp6 = elemCount;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			int tmp7 = this->bytesPerElement;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			tmp5 = (tmp6 * tmp7);
		}
		HX_STACK_LINE(36)
		this->byteLength = tmp5;
		HX_STACK_LINE(37)
		::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(37)
			int tmp7 = this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			this1 = tmp8;
			HX_STACK_LINE(37)
			tmp6 = this1;
		}
		HX_STACK_LINE(37)
		this->buffer = tmp6;
		HX_STACK_LINE(38)
		this->length = elements;
	}
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic elements,int in_type)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(elements,in_type);
	return _result_;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int16Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_Int16Array",0xca4c1d7d,"lime.utils.ArrayBufferView.subarray_lime_utils_Int16Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int16Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt16Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_UInt16Array",0x1214e722,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt16Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt16Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt32Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_UInt32Array",0xcbd26328,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt32Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt32Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt8Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_UInt8Array",0xa88baf53,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt8Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt8Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int32Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_Int32Array",0x84099983,"lime.utils.ArrayBufferView.subarray_lime_utils_Int32Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int32Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Float32Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_Float32Array",0xe249b676,"lime.utils.ArrayBufferView.subarray_lime_utils_Float32Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Float32Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Int8Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_Int8Array",0x5ec0bd58,"lime.utils.ArrayBufferView.subarray_lime_utils_Int8Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Int8Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_UInt8ClampedArray( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_UInt8ClampedArray",0x0c7948a5,"lime.utils.ArrayBufferView.subarray_lime_utils_UInt8ClampedArray","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_UInt8ClampedArray,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::subarray_lime_utils_Float64Array( int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","subarray_lime_utils_Float64Array",0x2bc0d377,"lime.utils.ArrayBufferView.subarray_lime_utils_Float64Array","lime/utils/ArrayBufferView.hx",160,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(162)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		(tmp1 == tmp2);
	}
	HX_STACK_LINE(163)
	int tmp1 = (end - begin);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int len = tmp1;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(164)
	int tmp2 = begin;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	int tmp3 = this->bytesPerElement;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	int byte_offset = tmp4;		HX_STACK_VAR(byte_offset,"byte_offset");
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		switch( (int)(tmp7)){
			case (int)1: {
				HX_STACK_LINE(170)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(170)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(170)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(170)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					if ((tmp10)){
						HX_STACK_LINE(170)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						{
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(170)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(170)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							_this->length = tmp13;
							HX_STACK_LINE(170)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(170)
							_this->byteLength = tmp14;
							HX_STACK_LINE(170)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(170)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								this2 = tmp17;
								HX_STACK_LINE(170)
								tmp15 = this2;
							}
							HX_STACK_LINE(170)
							_this->buffer = tmp15;
							HX_STACK_LINE(170)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(170)
							tmp11 = _this;
						}
						HX_STACK_LINE(170)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(170)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						if ((tmp11)){
							HX_STACK_LINE(170)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							{
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(170)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(170)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(170)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(170)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(170)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(170)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(170)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(170)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(170)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(170)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								if ((tmp20)){
									HX_STACK_LINE(170)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(170)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(170)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(170)
									{
										HX_STACK_LINE(170)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(170)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(170)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(170)
										this2 = tmp24;
										HX_STACK_LINE(170)
										tmp22 = this2;
									}
									HX_STACK_LINE(170)
									_this->buffer = tmp22;
									HX_STACK_LINE(170)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(170)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(170)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(170)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(170)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(170)
								_this->byteLength = tmp21;
								HX_STACK_LINE(170)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(170)
								_this->length = srcLength;
								HX_STACK_LINE(170)
								tmp12 = _this;
							}
							HX_STACK_LINE(170)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(170)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(170)
							if ((tmp12)){
								HX_STACK_LINE(170)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(170)
								{
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(170)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(170)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(170)
									if ((tmp15)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(170)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(170)
									if ((tmp17)){
										HX_STACK_LINE(170)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(170)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(170)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(170)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(170)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(170)
									if ((tmp18)){
										HX_STACK_LINE(170)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(170)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(170)
										if ((tmp22)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(170)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(170)
										newByteLength = tmp19;
										HX_STACK_LINE(170)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(170)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(170)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(170)
										if ((tmp21)){
											HX_STACK_LINE(170)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(170)
									_this->buffer = buffer;
									HX_STACK_LINE(170)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(170)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(170)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(170)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(170)
									_this->length = tmp20;
									HX_STACK_LINE(170)
									tmp13 = _this;
								}
								HX_STACK_LINE(170)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(170)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
				HX_STACK_LINE(170)
				tmp5 = this1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(173)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(173)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(173)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				if ((tmp9)){
					HX_STACK_LINE(173)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(173)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					if ((tmp10)){
						HX_STACK_LINE(173)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(173)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(173)
							_this->length = tmp13;
							HX_STACK_LINE(173)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							_this->byteLength = tmp14;
							HX_STACK_LINE(173)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(173)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								this2 = tmp17;
								HX_STACK_LINE(173)
								tmp15 = this2;
							}
							HX_STACK_LINE(173)
							_this->buffer = tmp15;
							HX_STACK_LINE(173)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(173)
							tmp11 = _this;
						}
						HX_STACK_LINE(173)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(173)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(173)
						if ((tmp11)){
							HX_STACK_LINE(173)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(173)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(173)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(173)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(173)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(173)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(173)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(173)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(173)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(173)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(173)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(173)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								if ((tmp20)){
									HX_STACK_LINE(173)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(173)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(173)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(173)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(173)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(173)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(173)
										this2 = tmp24;
										HX_STACK_LINE(173)
										tmp22 = this2;
									}
									HX_STACK_LINE(173)
									_this->buffer = tmp22;
									HX_STACK_LINE(173)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(173)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(173)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(173)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(173)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(173)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(173)
								_this->byteLength = tmp21;
								HX_STACK_LINE(173)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(173)
								_this->length = srcLength;
								HX_STACK_LINE(173)
								tmp12 = _this;
							}
							HX_STACK_LINE(173)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(173)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(173)
							if ((tmp12)){
								HX_STACK_LINE(173)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(173)
								{
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(173)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(173)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(173)
									if ((tmp15)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(173)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(173)
									if ((tmp17)){
										HX_STACK_LINE(173)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(173)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(173)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(173)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(173)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(173)
									if ((tmp18)){
										HX_STACK_LINE(173)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(173)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(173)
										if ((tmp22)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(173)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(173)
										newByteLength = tmp19;
										HX_STACK_LINE(173)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(173)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(173)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(173)
										if ((tmp21)){
											HX_STACK_LINE(173)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(173)
									_this->buffer = buffer;
									HX_STACK_LINE(173)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(173)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(173)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(173)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(173)
									_this->length = tmp20;
									HX_STACK_LINE(173)
									tmp13 = _this;
								}
								HX_STACK_LINE(173)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(173)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
							}
						}
					}
				}
				HX_STACK_LINE(173)
				tmp5 = this1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(176)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(176)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(176)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(176)
				if ((tmp9)){
					HX_STACK_LINE(176)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(176)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(176)
					if ((tmp10)){
						HX_STACK_LINE(176)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(176)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(176)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(176)
							_this->length = tmp13;
							HX_STACK_LINE(176)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(176)
							_this->byteLength = tmp14;
							HX_STACK_LINE(176)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(176)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								this2 = tmp17;
								HX_STACK_LINE(176)
								tmp15 = this2;
							}
							HX_STACK_LINE(176)
							_this->buffer = tmp15;
							HX_STACK_LINE(176)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(176)
							tmp11 = _this;
						}
						HX_STACK_LINE(176)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(176)
						if ((tmp11)){
							HX_STACK_LINE(176)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(176)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(176)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(176)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(176)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(176)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(176)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(176)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(176)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(176)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(176)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(176)
								if ((tmp20)){
									HX_STACK_LINE(176)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(176)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(176)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(176)
									{
										HX_STACK_LINE(176)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(176)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(176)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(176)
										this2 = tmp24;
										HX_STACK_LINE(176)
										tmp22 = this2;
									}
									HX_STACK_LINE(176)
									_this->buffer = tmp22;
									HX_STACK_LINE(176)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(176)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(176)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(176)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(176)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(176)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(176)
								_this->byteLength = tmp21;
								HX_STACK_LINE(176)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(176)
								_this->length = srcLength;
								HX_STACK_LINE(176)
								tmp12 = _this;
							}
							HX_STACK_LINE(176)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(176)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(176)
							if ((tmp12)){
								HX_STACK_LINE(176)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(176)
								{
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(176)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(176)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(176)
									if ((tmp15)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(176)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(176)
									if ((tmp17)){
										HX_STACK_LINE(176)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(176)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(176)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(176)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(176)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(176)
									if ((tmp18)){
										HX_STACK_LINE(176)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(176)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(176)
										if ((tmp22)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(176)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(176)
										newByteLength = tmp19;
										HX_STACK_LINE(176)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(176)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(176)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(176)
										if ((tmp21)){
											HX_STACK_LINE(176)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(176)
									_this->buffer = buffer;
									HX_STACK_LINE(176)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(176)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(176)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(176)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(176)
									_this->length = tmp20;
									HX_STACK_LINE(176)
									tmp13 = _this;
								}
								HX_STACK_LINE(176)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(176)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
							}
						}
					}
				}
				HX_STACK_LINE(176)
				tmp5 = this1;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(179)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(179)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(179)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(179)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					if ((tmp10)){
						HX_STACK_LINE(179)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						{
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(179)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(179)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							_this->length = tmp13;
							HX_STACK_LINE(179)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							_this->byteLength = tmp14;
							HX_STACK_LINE(179)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(179)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								this2 = tmp17;
								HX_STACK_LINE(179)
								tmp15 = this2;
							}
							HX_STACK_LINE(179)
							_this->buffer = tmp15;
							HX_STACK_LINE(179)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(179)
							tmp11 = _this;
						}
						HX_STACK_LINE(179)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(179)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(179)
						if ((tmp11)){
							HX_STACK_LINE(179)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(179)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(179)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(179)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(179)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(179)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(179)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(179)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(179)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(179)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(179)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(179)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(179)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(179)
								if ((tmp20)){
									HX_STACK_LINE(179)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(179)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(179)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(179)
									{
										HX_STACK_LINE(179)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(179)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(179)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(179)
										this2 = tmp24;
										HX_STACK_LINE(179)
										tmp22 = this2;
									}
									HX_STACK_LINE(179)
									_this->buffer = tmp22;
									HX_STACK_LINE(179)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(179)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(179)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(179)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(179)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(179)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(179)
								_this->byteLength = tmp21;
								HX_STACK_LINE(179)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(179)
								_this->length = srcLength;
								HX_STACK_LINE(179)
								tmp12 = _this;
							}
							HX_STACK_LINE(179)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(179)
							if ((tmp12)){
								HX_STACK_LINE(179)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(179)
								{
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(179)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(179)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(179)
									if ((tmp15)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(179)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(179)
									if ((tmp17)){
										HX_STACK_LINE(179)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(179)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(179)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(179)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(179)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(179)
									if ((tmp18)){
										HX_STACK_LINE(179)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(179)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(179)
										if ((tmp22)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(179)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(179)
										newByteLength = tmp19;
										HX_STACK_LINE(179)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(179)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(179)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(179)
										if ((tmp21)){
											HX_STACK_LINE(179)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(179)
									_this->buffer = buffer;
									HX_STACK_LINE(179)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(179)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(179)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(179)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(179)
									_this->length = tmp20;
									HX_STACK_LINE(179)
									tmp13 = _this;
								}
								HX_STACK_LINE(179)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(179)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(179)
				tmp5 = this1;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(182)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(182)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(182)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(182)
				if ((tmp9)){
					HX_STACK_LINE(182)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(182)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(182)
					if ((tmp10)){
						HX_STACK_LINE(182)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(182)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(182)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(182)
							_this->length = tmp13;
							HX_STACK_LINE(182)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(182)
							_this->byteLength = tmp14;
							HX_STACK_LINE(182)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(182)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								this2 = tmp17;
								HX_STACK_LINE(182)
								tmp15 = this2;
							}
							HX_STACK_LINE(182)
							_this->buffer = tmp15;
							HX_STACK_LINE(182)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(182)
							tmp11 = _this;
						}
						HX_STACK_LINE(182)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(182)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						if ((tmp11)){
							HX_STACK_LINE(182)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(182)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(182)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(182)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(182)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(182)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(182)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(182)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(182)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(182)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(182)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(182)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(182)
								if ((tmp20)){
									HX_STACK_LINE(182)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(182)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(182)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(182)
									{
										HX_STACK_LINE(182)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(182)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(182)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(182)
										this2 = tmp24;
										HX_STACK_LINE(182)
										tmp22 = this2;
									}
									HX_STACK_LINE(182)
									_this->buffer = tmp22;
									HX_STACK_LINE(182)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(182)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(182)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(182)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(182)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(182)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(182)
								_this->byteLength = tmp21;
								HX_STACK_LINE(182)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(182)
								_this->length = srcLength;
								HX_STACK_LINE(182)
								tmp12 = _this;
							}
							HX_STACK_LINE(182)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(182)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(182)
							if ((tmp12)){
								HX_STACK_LINE(182)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(182)
								{
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(182)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(182)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(182)
									if ((tmp15)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(182)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(182)
									if ((tmp17)){
										HX_STACK_LINE(182)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(182)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(182)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(182)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(182)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(182)
									if ((tmp18)){
										HX_STACK_LINE(182)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(182)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(182)
										if ((tmp22)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(182)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(182)
										newByteLength = tmp19;
										HX_STACK_LINE(182)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(182)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(182)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(182)
										if ((tmp21)){
											HX_STACK_LINE(182)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(182)
									_this->buffer = buffer;
									HX_STACK_LINE(182)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(182)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(182)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(182)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(182)
									_this->length = tmp20;
									HX_STACK_LINE(182)
									tmp13 = _this;
								}
								HX_STACK_LINE(182)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(182)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
							}
						}
					}
				}
				HX_STACK_LINE(182)
				tmp5 = this1;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(185)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(185)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(185)
				if ((tmp9)){
					HX_STACK_LINE(185)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(185)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(185)
					if ((tmp10)){
						HX_STACK_LINE(185)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						{
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(185)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(185)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(185)
							_this->length = tmp13;
							HX_STACK_LINE(185)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(185)
							_this->byteLength = tmp14;
							HX_STACK_LINE(185)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(185)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								this2 = tmp17;
								HX_STACK_LINE(185)
								tmp15 = this2;
							}
							HX_STACK_LINE(185)
							_this->buffer = tmp15;
							HX_STACK_LINE(185)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(185)
							tmp11 = _this;
						}
						HX_STACK_LINE(185)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(185)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						if ((tmp11)){
							HX_STACK_LINE(185)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(185)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(185)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(185)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(185)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(185)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(185)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(185)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(185)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(185)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(185)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(185)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(185)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(185)
								if ((tmp20)){
									HX_STACK_LINE(185)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(185)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(185)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(185)
									{
										HX_STACK_LINE(185)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(185)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(185)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(185)
										this2 = tmp24;
										HX_STACK_LINE(185)
										tmp22 = this2;
									}
									HX_STACK_LINE(185)
									_this->buffer = tmp22;
									HX_STACK_LINE(185)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(185)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(185)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(185)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(185)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(185)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(185)
								_this->byteLength = tmp21;
								HX_STACK_LINE(185)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(185)
								_this->length = srcLength;
								HX_STACK_LINE(185)
								tmp12 = _this;
							}
							HX_STACK_LINE(185)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(185)
							if ((tmp12)){
								HX_STACK_LINE(185)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(185)
								{
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(185)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(185)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(185)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(185)
									if ((tmp17)){
										HX_STACK_LINE(185)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(185)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(185)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(185)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(185)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(185)
									if ((tmp18)){
										HX_STACK_LINE(185)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(185)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(185)
										if ((tmp22)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(185)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(185)
										newByteLength = tmp19;
										HX_STACK_LINE(185)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(185)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(185)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(185)
										if ((tmp21)){
											HX_STACK_LINE(185)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(185)
									_this->buffer = buffer;
									HX_STACK_LINE(185)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(185)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(185)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(185)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(185)
									_this->length = tmp20;
									HX_STACK_LINE(185)
									tmp13 = _this;
								}
								HX_STACK_LINE(185)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(185)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
							}
						}
					}
				}
				HX_STACK_LINE(185)
				tmp5 = this1;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(188)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(188)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(188)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				if ((tmp9)){
					HX_STACK_LINE(188)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(188)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(188)
					if ((tmp10)){
						HX_STACK_LINE(188)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						{
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(188)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(188)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(188)
							_this->length = tmp13;
							HX_STACK_LINE(188)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							_this->byteLength = tmp14;
							HX_STACK_LINE(188)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(188)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								this2 = tmp17;
								HX_STACK_LINE(188)
								tmp15 = this2;
							}
							HX_STACK_LINE(188)
							_this->buffer = tmp15;
							HX_STACK_LINE(188)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(188)
							tmp11 = _this;
						}
						HX_STACK_LINE(188)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(188)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(188)
						if ((tmp11)){
							HX_STACK_LINE(188)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							{
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(188)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(188)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(188)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(188)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(188)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(188)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(188)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(188)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(188)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(188)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(188)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(188)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(188)
								if ((tmp20)){
									HX_STACK_LINE(188)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(188)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(188)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(188)
									{
										HX_STACK_LINE(188)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(188)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(188)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(188)
										this2 = tmp24;
										HX_STACK_LINE(188)
										tmp22 = this2;
									}
									HX_STACK_LINE(188)
									_this->buffer = tmp22;
									HX_STACK_LINE(188)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(188)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(188)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(188)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(188)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(188)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(188)
								_this->byteLength = tmp21;
								HX_STACK_LINE(188)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(188)
								_this->length = srcLength;
								HX_STACK_LINE(188)
								tmp12 = _this;
							}
							HX_STACK_LINE(188)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(188)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(188)
							if ((tmp12)){
								HX_STACK_LINE(188)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(188)
								{
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(188)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(188)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(188)
									if ((tmp15)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(188)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(188)
									if ((tmp17)){
										HX_STACK_LINE(188)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(188)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(188)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(188)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(188)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(188)
									if ((tmp18)){
										HX_STACK_LINE(188)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(188)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(188)
										if ((tmp22)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(188)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(188)
										newByteLength = tmp19;
										HX_STACK_LINE(188)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(188)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(188)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(188)
										if ((tmp21)){
											HX_STACK_LINE(188)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(188)
									_this->buffer = buffer;
									HX_STACK_LINE(188)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(188)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(188)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(188)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(188)
									_this->length = tmp20;
									HX_STACK_LINE(188)
									tmp13 = _this;
								}
								HX_STACK_LINE(188)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(188)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
							}
						}
					}
				}
				HX_STACK_LINE(188)
				tmp5 = this1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(191)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(191)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(191)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(191)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(191)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					if ((tmp10)){
						HX_STACK_LINE(191)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						{
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(191)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(191)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							_this->length = tmp13;
							HX_STACK_LINE(191)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							_this->byteLength = tmp14;
							HX_STACK_LINE(191)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(191)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								this2 = tmp17;
								HX_STACK_LINE(191)
								tmp15 = this2;
							}
							HX_STACK_LINE(191)
							_this->buffer = tmp15;
							HX_STACK_LINE(191)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(191)
							tmp11 = _this;
						}
						HX_STACK_LINE(191)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(191)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(191)
						if ((tmp11)){
							HX_STACK_LINE(191)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(191)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(191)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(191)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(191)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(191)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(191)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(191)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(191)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(191)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(191)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(191)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(191)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(191)
								if ((tmp20)){
									HX_STACK_LINE(191)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(191)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(191)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(191)
									{
										HX_STACK_LINE(191)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(191)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(191)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(191)
										this2 = tmp24;
										HX_STACK_LINE(191)
										tmp22 = this2;
									}
									HX_STACK_LINE(191)
									_this->buffer = tmp22;
									HX_STACK_LINE(191)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(191)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(191)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(191)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(191)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(191)
								_this->byteLength = tmp21;
								HX_STACK_LINE(191)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(191)
								_this->length = srcLength;
								HX_STACK_LINE(191)
								tmp12 = _this;
							}
							HX_STACK_LINE(191)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(191)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(191)
							if ((tmp12)){
								HX_STACK_LINE(191)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(191)
								{
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(191)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(191)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(191)
									if ((tmp15)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(191)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(191)
									if ((tmp17)){
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(191)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(191)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(191)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(191)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(191)
									if ((tmp18)){
										HX_STACK_LINE(191)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(191)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(191)
										if ((tmp22)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(191)
										newByteLength = tmp19;
										HX_STACK_LINE(191)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(191)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(191)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(191)
										if ((tmp21)){
											HX_STACK_LINE(191)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(191)
									_this->buffer = buffer;
									HX_STACK_LINE(191)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(191)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(191)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(191)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(191)
									_this->length = tmp20;
									HX_STACK_LINE(191)
									tmp13 = _this;
								}
								HX_STACK_LINE(191)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(191)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(191)
				tmp5 = this1;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(194)
				::haxe::io::Bytes tmp8 = this->buffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::haxe::io::Bytes buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(194)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(194)
				bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(194)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						{
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(194)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(194)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(194)
							_this->length = tmp13;
							HX_STACK_LINE(194)
							int tmp14 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(194)
							_this->byteLength = tmp14;
							HX_STACK_LINE(194)
							::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(194)
								int tmp16 = _this->byteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								this2 = tmp17;
								HX_STACK_LINE(194)
								tmp15 = this2;
							}
							HX_STACK_LINE(194)
							_this->buffer = tmp15;
							HX_STACK_LINE(194)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(194)
							tmp11 = _this;
						}
						HX_STACK_LINE(194)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(194)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						if ((tmp11)){
							HX_STACK_LINE(194)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							{
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(194)
								::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(194)
								::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(194)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(194)
								int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(194)
								int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(194)
								int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(194)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(194)
								int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(194)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(194)
								int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(194)
								int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(194)
								bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(194)
								if ((tmp20)){
									HX_STACK_LINE(194)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(194)
									int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(194)
									int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(194)
									{
										HX_STACK_LINE(194)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(194)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(194)
										::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(194)
										this2 = tmp24;
										HX_STACK_LINE(194)
										tmp22 = this2;
									}
									HX_STACK_LINE(194)
									_this->buffer = tmp22;
									HX_STACK_LINE(194)
									::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(194)
									int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(194)
									int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(194)
									_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
								}
								else{
									HX_STACK_LINE(194)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(194)
								int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(194)
								_this->byteLength = tmp21;
								HX_STACK_LINE(194)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(194)
								_this->length = srcLength;
								HX_STACK_LINE(194)
								tmp12 = _this;
							}
							HX_STACK_LINE(194)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(194)
							bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(194)
							if ((tmp12)){
								HX_STACK_LINE(194)
								::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(194)
								{
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(194)
									::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(194)
									bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(194)
									if ((tmp15)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(194)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(194)
									if ((tmp17)){
										HX_STACK_LINE(194)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(194)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(194)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(194)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(194)
									bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(194)
									if ((tmp18)){
										HX_STACK_LINE(194)
										int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(194)
										bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(194)
										if ((tmp22)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(194)
										int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(194)
										newByteLength = tmp19;
										HX_STACK_LINE(194)
										int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(194)
										int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(194)
										bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(194)
										if ((tmp21)){
											HX_STACK_LINE(194)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(194)
									_this->buffer = buffer;
									HX_STACK_LINE(194)
									_this->byteOffset = byte_offset;
									HX_STACK_LINE(194)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(194)
									Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(194)
									int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(194)
									_this->length = tmp20;
									HX_STACK_LINE(194)
									tmp13 = _this;
								}
								HX_STACK_LINE(194)
								this1 = tmp13;
							}
							else{
								HX_STACK_LINE(194)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
							}
						}
					}
				}
				HX_STACK_LINE(194)
				tmp5 = this1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(197)
				HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
			}
			;break;
		}
	}
	HX_STACK_LINE(167)
	::lime::utils::ArrayBufferView view = tmp5;		HX_STACK_VAR(view,"view");
	HX_STACK_LINE(200)
	::lime::utils::ArrayBufferView tmp6 = view;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(200)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,subarray_lime_utils_Float64Array,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::initTypedArray( ::lime::utils::ArrayBufferView view){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","initTypedArray",0x0a95c3a5,"lime.utils.ArrayBufferView.initTypedArray","lime/utils/ArrayBufferView.hx",48,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(view,"view")
	HX_STACK_LINE(50)
	::haxe::io::Bytes srcData = view->buffer;		HX_STACK_VAR(srcData,"srcData");
	HX_STACK_LINE(51)
	int srcLength = view->length;		HX_STACK_VAR(srcLength,"srcLength");
	HX_STACK_LINE(52)
	int srcByteOffset = view->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
	HX_STACK_LINE(53)
	int srcElementSize = view->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
	HX_STACK_LINE(54)
	int tmp = this->bytesPerElement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	int elementSize = tmp;		HX_STACK_VAR(elementSize,"elementSize");
	HX_STACK_LINE(58)
	int tmp1 = view->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	if ((tmp3)){
		HX_STACK_LINE(59)
		int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
		HX_STACK_LINE(59)
		int tmp4 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		int cloneLength = tmp4;		HX_STACK_VAR(cloneLength,"cloneLength");
		HX_STACK_LINE(59)
		::haxe::io::Bytes tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(59)
			int tmp6 = cloneLength;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::alloc(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(59)
			this1 = tmp7;
			HX_STACK_LINE(59)
			tmp5 = this1;
		}
		HX_STACK_LINE(59)
		this->buffer = tmp5;
		HX_STACK_LINE(59)
		::haxe::io::Bytes tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		::haxe::io::Bytes tmp7 = srcData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		int tmp8 = srcByteOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		int tmp9 = cloneLength;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		tmp6->blit((int)0,tmp7,tmp8,tmp9);
	}
	else{
		HX_STACK_LINE(62)
		HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
	}
	HX_STACK_LINE(65)
	int tmp4 = this->bytesPerElement;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	int tmp5 = srcLength;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	this->byteLength = tmp6;
	HX_STACK_LINE(66)
	this->byteOffset = (int)0;
	HX_STACK_LINE(67)
	this->length = srcLength;
	HX_STACK_LINE(69)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initTypedArray,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::initBuffer( ::haxe::io::Bytes in_buffer,Dynamic __o_in_byteOffset,Dynamic len){
Dynamic in_byteOffset = __o_in_byteOffset.Default(0);
	HX_STACK_FRAME("lime.utils.ArrayBufferView","initBuffer",0x6e6530d6,"lime.utils.ArrayBufferView.initBuffer","lime/utils/ArrayBufferView.hx",75,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(in_buffer,"in_buffer")
	HX_STACK_ARG(in_byteOffset,"in_byteOffset")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(77)
		bool tmp = (in_byteOffset < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		if ((tmp)){
			HX_STACK_LINE(77)
			HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
		}
		HX_STACK_LINE(78)
		Dynamic tmp1 = in_byteOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		int tmp2 = this->bytesPerElement;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		int tmp3 = hx::Mod(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		if ((tmp4)){
			HX_STACK_LINE(78)
			HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
		}
		HX_STACK_LINE(80)
		int bufferByteLength = in_buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
		HX_STACK_LINE(81)
		int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		int elementSize = tmp5;		HX_STACK_VAR(elementSize,"elementSize");
		HX_STACK_LINE(82)
		int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
		HX_STACK_LINE(84)
		bool tmp6 = (len == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		if ((tmp6)){
			HX_STACK_LINE(86)
			int tmp7 = (bufferByteLength - in_byteOffset);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(86)
			newByteLength = tmp7;
			HX_STACK_LINE(88)
			int tmp8 = bufferByteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			int tmp9 = this->bytesPerElement;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			if ((tmp11)){
				HX_STACK_LINE(88)
				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
			}
			HX_STACK_LINE(89)
			bool tmp12 = (newByteLength < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(89)
			if ((tmp12)){
				HX_STACK_LINE(89)
				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
			}
		}
		else{
			HX_STACK_LINE(93)
			Dynamic tmp7 = len;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			int tmp8 = this->bytesPerElement;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			newByteLength = tmp9;
			HX_STACK_LINE(95)
			int tmp10 = (in_byteOffset + newByteLength);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			int newRange = tmp10;		HX_STACK_VAR(newRange,"newRange");
			HX_STACK_LINE(96)
			bool tmp11 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			if ((tmp11)){
				HX_STACK_LINE(96)
				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
			}
		}
		HX_STACK_LINE(100)
		this->buffer = in_buffer;
		HX_STACK_LINE(101)
		this->byteOffset = in_byteOffset;
		HX_STACK_LINE(102)
		this->byteLength = newByteLength;
		HX_STACK_LINE(103)
		int tmp7 = newByteLength;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		int tmp8 = this->bytesPerElement;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		this->length = tmp10;
		HX_STACK_LINE(105)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,initBuffer,return )

::lime::utils::ArrayBufferView ArrayBufferView_obj::initArray( cpp::ArrayBase array){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","initArray",0xe96cc683,"lime.utils.ArrayBufferView.initArray","lime/utils/ArrayBufferView.hx",112,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(114)
	this->byteOffset = (int)0;
	HX_STACK_LINE(115)
	this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
	HX_STACK_LINE(116)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	int tmp1 = this->bytesPerElement;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	this->byteLength = tmp2;
	HX_STACK_LINE(118)
	::haxe::io::Bytes tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(118)
		int tmp4 = this->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		this1 = tmp5;
		HX_STACK_LINE(118)
		tmp3 = this1;
	}
	HX_STACK_LINE(118)
	this->buffer = tmp3;
	HX_STACK_LINE(119)
	this->copyFromArray(((Array< Float >)(array)),null());
	HX_STACK_LINE(121)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,initArray,return )

Void ArrayBufferView_obj::set( ::lime::utils::ArrayBufferView view,cpp::ArrayBase array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils.ArrayBufferView","set",0xa24aea3c,"lime.utils.ArrayBufferView.set","lime/utils/ArrayBufferView.hx",130,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(view,"view")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(132)
		bool tmp = (view != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		if ((tmp)){
			HX_STACK_LINE(132)
			tmp1 = (array == null());
		}
		else{
			HX_STACK_LINE(132)
			tmp1 = false;
		}
		HX_STACK_LINE(132)
		if ((tmp1)){
			HX_STACK_LINE(133)
			::haxe::io::Bytes tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			int tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			int tmp4 = this->bytesPerElement;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(133)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			::haxe::io::Bytes tmp6 = view->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			int tmp7 = view->byteOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			int tmp8 = view->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			tmp2->blit(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(134)
			bool tmp2 = (array != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			if ((tmp2)){
				HX_STACK_LINE(134)
				tmp3 = (view == null());
			}
			else{
				HX_STACK_LINE(134)
				tmp3 = false;
			}
			HX_STACK_LINE(134)
			if ((tmp3)){
				HX_STACK_LINE(135)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(135)
				this->copyFromArray(((Array< Float >)(array)),tmp4);
			}
			else{
				HX_STACK_LINE(137)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferView_obj,set,(void))

Void ArrayBufferView_obj::cloneBuffer( ::haxe::io::Bytes src,hx::Null< int >  __o_srcByteOffset){
int srcByteOffset = __o_srcByteOffset.Default(0);
	HX_STACK_FRAME("lime.utils.ArrayBufferView","cloneBuffer",0x2d1320d7,"lime.utils.ArrayBufferView.cloneBuffer","lime/utils/ArrayBufferView.hx",146,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(srcByteOffset,"srcByteOffset")
{
		HX_STACK_LINE(148)
		int srcLength = src->length;		HX_STACK_VAR(srcLength,"srcLength");
		HX_STACK_LINE(149)
		int tmp = (srcLength - srcByteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		int cloneLength = tmp;		HX_STACK_VAR(cloneLength,"cloneLength");
		HX_STACK_LINE(151)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(151)
			int tmp2 = cloneLength;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			this1 = tmp3;
			HX_STACK_LINE(151)
			tmp1 = this1;
		}
		HX_STACK_LINE(151)
		this->buffer = tmp1;
		HX_STACK_LINE(152)
		::haxe::io::Bytes tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		::haxe::io::Bytes tmp3 = src;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		int tmp4 = srcByteOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		int tmp5 = cloneLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		tmp2->blit((int)0,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,cloneBuffer,(void))

int ArrayBufferView_obj::bytesForType( int type){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","bytesForType",0x22197f5e,"lime.utils.ArrayBufferView.bytesForType","lime/utils/ArrayBufferView.hx",205,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(208)
	int tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(211)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(214)
			tmp1 = (int)1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(217)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(220)
			tmp1 = (int)2;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(223)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(226)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(229)
			tmp1 = (int)4;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(232)
			tmp1 = (int)4;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(235)
			tmp1 = (int)8;
		}
		;break;
		default: {
			HX_STACK_LINE(237)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(207)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,bytesForType,return )

::String ArrayBufferView_obj::toString( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","toString",0x0eb653d2,"lime.utils.ArrayBufferView.toString","lime/utils/ArrayBufferView.hx",243,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	if ((tmp)){
		HX_STACK_LINE(245)
		return null();
	}
	HX_STACK_LINE(248)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	{
		HX_STACK_LINE(248)
		int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(248)
		switch( (int)(tmp3)){
			case (int)1: {
				HX_STACK_LINE(249)
				tmp1 = HX_HCSTRING("Int8Array","\x50","\xdc","\xf6","\xae");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(250)
				tmp1 = HX_HCSTRING("UInt8Array","\x5b","\xa9","\xb0","\x87");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(251)
				tmp1 = HX_HCSTRING("UInt8ClampedArray","\x9d","\x1f","\xdb","\x26");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(252)
				tmp1 = HX_HCSTRING("Int16Array","\x85","\x17","\x71","\xa9");
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(253)
				tmp1 = HX_HCSTRING("UInt16Array","\x1a","\xb4","\x4a","\x73");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(254)
				tmp1 = HX_HCSTRING("Int32Array","\x8b","\x93","\x2e","\x63");
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(255)
				tmp1 = HX_HCSTRING("UInt32Array","\x20","\x30","\x08","\x2d");
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(256)
				tmp1 = HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90");
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(257)
				tmp1 = HX_HCSTRING("Float64Array","\x7f","\x5f","\x9e","\xd9");
			}
			;break;
			default: {
				HX_STACK_LINE(258)
				tmp1 = HX_HCSTRING("ArrayBufferView","\x5e","\x6e","\x84","\xfd");
			}
		}
	}
	HX_STACK_LINE(248)
	::String name = tmp1;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(261)
	::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	int tmp3 = this->byteLength;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	::String tmp4 = (HX_HCSTRING(" [byteLength:","\x11","\xd6","\xa9","\xca") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	::String tmp5 = (tmp4 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(261)
	::String tmp8 = (tmp7 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(261)
	::String tmp9 = (tmp2 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(261)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,toString,return )

int ArrayBufferView_obj::toByteLength( int elemCount){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","toByteLength",0x7dea5d8f,"lime.utils.ArrayBufferView.toByteLength","lime/utils/ArrayBufferView.hx",266,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elemCount,"elemCount")
	HX_STACK_LINE(268)
	int tmp = elemCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	int tmp1 = this->bytesPerElement;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(268)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,toByteLength,return )

Void ArrayBufferView_obj::copyFromArray( Array< Float > array,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils.ArrayBufferView","copyFromArray",0x360b3074,"lime.utils.ArrayBufferView.copyFromArray","lime/utils/ArrayBufferView.hx",275,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(278)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(278)
		int len = array->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(280)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			switch( (int)(tmp1)){
				case (int)1: {
					HX_STACK_LINE(282)
					while((true)){
						HX_STACK_LINE(282)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(282)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(282)
						if ((tmp3)){
							HX_STACK_LINE(282)
							break;
						}
						HX_STACK_LINE(283)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(283)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(283)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(283)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(285)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(285)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(285)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(284)
							::__hxcpp_memory_set_byte(this->buffer->b,pos,value);
							HX_STACK_LINE(284)
							value;
						}
						HX_STACK_LINE(286)
						++(i);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(289)
					while((true)){
						HX_STACK_LINE(289)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(289)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(289)
						if ((tmp3)){
							HX_STACK_LINE(289)
							break;
						}
						HX_STACK_LINE(290)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(290)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(290)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(290)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(291)
						::haxe::io::Bytes tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(292)
						int tmp8 = pos;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(292)
						Float tmp9 = array->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(292)
						int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(291)
						::lime::utils::ArrayBufferIO_obj::setInt16(tmp7,tmp8,tmp10,null());
						HX_STACK_LINE(293)
						++(i);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(296)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(296)
						if ((tmp3)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(297)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(297)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(297)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(297)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(298)
						{
							HX_STACK_LINE(299)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(299)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(299)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(298)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(298)
							::__hxcpp_memory_set_i32(this->buffer->b,pos,value);
							HX_STACK_LINE(298)
							value;
						}
						HX_STACK_LINE(300)
						++(i);
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(303)
					while((true)){
						HX_STACK_LINE(303)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(303)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(303)
						if ((tmp3)){
							HX_STACK_LINE(303)
							break;
						}
						HX_STACK_LINE(304)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(304)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(304)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(304)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(306)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(306)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(306)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(305)
							::__hxcpp_memory_set_byte(this->buffer->b,pos,value);
							HX_STACK_LINE(305)
							value;
						}
						HX_STACK_LINE(307)
						++(i);
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(310)
					while((true)){
						HX_STACK_LINE(310)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(310)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(310)
						if ((tmp3)){
							HX_STACK_LINE(310)
							break;
						}
						HX_STACK_LINE(311)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(311)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(311)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(311)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(313)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(313)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(313)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(312)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(312)
							::__hxcpp_memory_set_ui16(this->buffer->b,pos,value);
							HX_STACK_LINE(312)
							value;
						}
						HX_STACK_LINE(314)
						++(i);
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(317)
					while((true)){
						HX_STACK_LINE(317)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(317)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(317)
						if ((tmp3)){
							HX_STACK_LINE(317)
							break;
						}
						HX_STACK_LINE(318)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(318)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(318)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(318)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(320)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(320)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(320)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(319)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(319)
							::__hxcpp_memory_set_ui32(this->buffer->b,pos,value);
							HX_STACK_LINE(319)
							value;
						}
						HX_STACK_LINE(321)
						++(i);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(324)
					while((true)){
						HX_STACK_LINE(324)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(324)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(324)
						if ((tmp3)){
							HX_STACK_LINE(324)
							break;
						}
						HX_STACK_LINE(325)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(325)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(325)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(325)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(326)
						{
							HX_STACK_LINE(327)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(327)
							int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(327)
							int value = tmp8;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(326)
							{
								HX_STACK_LINE(326)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(326)
								{
									HX_STACK_LINE(326)
									Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(326)
									{
										HX_STACK_LINE(326)
										int _int = value;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(326)
										bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(326)
										if ((tmp11)){
											HX_STACK_LINE(326)
											tmp10 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(326)
											tmp10 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(326)
									int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(326)
									int _out = tmp11;		HX_STACK_VAR(_out,"_out");
									HX_STACK_LINE(326)
									bool tmp12 = (_out > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(326)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(326)
									if ((tmp12)){
										HX_STACK_LINE(326)
										tmp13 = (int)255;
									}
									else{
										HX_STACK_LINE(326)
										tmp13 = _out;
									}
									HX_STACK_LINE(326)
									_out = tmp13;
									HX_STACK_LINE(326)
									bool tmp14 = (_out < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(326)
									if ((tmp14)){
										HX_STACK_LINE(326)
										tmp9 = (int)0;
									}
									else{
										HX_STACK_LINE(326)
										tmp9 = _out;
									}
								}
								HX_STACK_LINE(326)
								int value1 = tmp9;		HX_STACK_VAR(value1,"value1");
								HX_STACK_LINE(326)
								::__hxcpp_memory_set_byte(this->buffer->b,pos,value1);
								HX_STACK_LINE(326)
								value1;
							}
						}
						HX_STACK_LINE(328)
						++(i);
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(331)
					while((true)){
						HX_STACK_LINE(331)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(331)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(331)
						if ((tmp3)){
							HX_STACK_LINE(331)
							break;
						}
						HX_STACK_LINE(332)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(332)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(332)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(332)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(333)
						{
							HX_STACK_LINE(334)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(334)
							Float value = tmp7;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(333)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(333)
							::__hxcpp_memory_set_float(this->buffer->b,pos,value);
							HX_STACK_LINE(333)
							value;
						}
						HX_STACK_LINE(335)
						++(i);
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(338)
					while((true)){
						HX_STACK_LINE(338)
						bool tmp2 = (i < len);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(338)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(338)
						if ((tmp3)){
							HX_STACK_LINE(338)
							break;
						}
						HX_STACK_LINE(339)
						int tmp4 = (offset + i);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(339)
						int tmp5 = this->bytesPerElement;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(339)
						int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(339)
						int pos = tmp6;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(340)
						{
							HX_STACK_LINE(341)
							Float tmp7 = array->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(341)
							Float value = tmp7;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(340)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(340)
							::__hxcpp_memory_set_double(this->buffer->b,pos,value);
							HX_STACK_LINE(340)
							value;
						}
						HX_STACK_LINE(342)
						++(i);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(346)
					HX_STACK_DO_THROW(HX_HCSTRING("copyFromArray on a base type ArrayBuffer","\xe8","\x01","\x1a","\xe2"));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,copyFromArray,(void))


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(bytesPerElement,"bytesPerElement");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(bytesPerElement,"bytesPerElement");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initArray") ) { return initArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"initBuffer") ) { return initBuffer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneBuffer") ) { return cloneBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bytesForType") ) { return bytesForType_dyn(); }
		if (HX_FIELD_EQ(inName,"toByteLength") ) { return toByteLength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromArray") ) { return copyFromArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initTypedArray") ) { return initTypedArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { return bytesPerElement; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int8Array") ) { return subarray_lime_utils_Int8Array_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int16Array") ) { return subarray_lime_utils_Int16Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt8Array") ) { return subarray_lime_utils_UInt8Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Int32Array") ) { return subarray_lime_utils_Int32Array_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt16Array") ) { return subarray_lime_utils_UInt16Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt32Array") ) { return subarray_lime_utils_UInt32Array_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Float32Array") ) { return subarray_lime_utils_Float32Array_dyn(); }
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_Float64Array") ) { return subarray_lime_utils_Float64Array_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"subarray_lime_utils_UInt8ClampedArray") ) { return subarray_lime_utils_UInt8ClampedArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesPerElement") ) { bytesPerElement=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,bytesPerElement),HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("subarray_lime_utils_Int16Array","\xd7","\x8d","\x80","\xc2"),
	HX_HCSTRING("subarray_lime_utils_UInt16Array","\x88","\xc5","\xc2","\x47"),
	HX_HCSTRING("subarray_lime_utils_UInt32Array","\x8e","\x41","\x80","\x01"),
	HX_HCSTRING("subarray_lime_utils_UInt8Array","\xad","\x1f","\xc0","\xa0"),
	HX_HCSTRING("subarray_lime_utils_Int32Array","\xdd","\x09","\x3e","\x7c"),
	HX_HCSTRING("subarray_lime_utils_Float32Array","\x50","\x71","\xbe","\xa4"),
	HX_HCSTRING("subarray_lime_utils_Int8Array","\x3e","\x16","\xba","\x20"),
	HX_HCSTRING("subarray_lime_utils_UInt8ClampedArray","\x8b","\xf7","\x6e","\x70"),
	HX_HCSTRING("subarray_lime_utils_Float64Array","\x51","\x8e","\x35","\xee"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("bytesPerElement","\xaa","\x67","\x89","\x18"),
	HX_HCSTRING("initTypedArray","\xff","\x5f","\x1a","\x1d"),
	HX_HCSTRING("initBuffer","\x30","\x18","\xda","\xd4"),
	HX_HCSTRING("initArray","\x69","\x88","\x21","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("cloneBuffer","\x3d","\xa8","\xe8","\x6c"),
	HX_HCSTRING("bytesForType","\x38","\x71","\x1a","\xbd"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("toByteLength","\x69","\x4f","\xeb","\x18"),
	HX_HCSTRING("copyFromArray","\x5a","\xdd","\xdd","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ArrayBufferView","\x08","\xda","\x61","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
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
} // end namespace utils
