#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace graphics{

Void ImageBuffer_obj::__construct(::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel,Dynamic format)
{
HX_STACK_FRAME("lime.graphics.ImageBuffer","new",0xb261c9e3,"lime.graphics.ImageBuffer.new","lime/graphics/ImageBuffer.hx",44,0x6475c2cd)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_bitsPerPixel,"bitsPerPixel")
HX_STACK_ARG(format,"format")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int bitsPerPixel = __o_bitsPerPixel.Default(32);
{
	HX_STACK_LINE(46)
	this->data = data;
	HX_STACK_LINE(47)
	this->width = width;
	HX_STACK_LINE(48)
	this->height = height;
	HX_STACK_LINE(49)
	this->bitsPerPixel = bitsPerPixel;
	HX_STACK_LINE(50)
	bool tmp = (format == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(50)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(50)
		tmp1 = format;
	}
	HX_STACK_LINE(50)
	this->format = tmp1;
	HX_STACK_LINE(51)
	this->transparent = true;
}
;
	return null();
}

//ImageBuffer_obj::~ImageBuffer_obj() { }

Dynamic ImageBuffer_obj::__CreateEmpty() { return  new ImageBuffer_obj; }
hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__new(::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel,Dynamic format)
{  hx::ObjectPtr< ImageBuffer_obj > _result_ = new ImageBuffer_obj();
	_result_->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return _result_;}

Dynamic ImageBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageBuffer_obj > _result_ = new ImageBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::lime::graphics::ImageBuffer ImageBuffer_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","clone",0x1504b3a0,"lime.graphics.ImageBuffer.clone","lime/graphics/ImageBuffer.hx",56,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::lime::utils::ArrayBufferView tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	int tmp3 = this->bitsPerPixel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(tmp,tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	::lime::graphics::ImageBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(102)
	::lime::utils::ArrayBufferView tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(104)
		::lime::utils::ArrayBufferView tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		int tmp8 = tmp7->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		::haxe::io::Bytes bytes = tmp9;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(105)
		::haxe::io::Bytes tmp10 = buffer->data->buffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(105)
		::lime::utils::ArrayBufferView tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(105)
		int tmp12 = tmp11->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(105)
		bytes->blit((int)0,tmp10,(int)0,tmp12);
		HX_STACK_LINE(106)
		::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(106)
			bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			if ((tmp14)){
				HX_STACK_LINE(106)
				::lime::utils::ArrayBufferView tmp15 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				this1 = tmp15;
			}
			else{
				HX_STACK_LINE(106)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				if ((tmp15)){
					HX_STACK_LINE(106)
					::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(106)
						::lime::utils::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(106)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(106)
						int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(106)
						_this->length = tmp18;
						HX_STACK_LINE(106)
						int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(106)
						_this->byteLength = tmp19;
						HX_STACK_LINE(106)
						::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(106)
							int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(106)
							::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(106)
							this2 = tmp22;
							HX_STACK_LINE(106)
							tmp20 = this2;
						}
						HX_STACK_LINE(106)
						_this->buffer = tmp20;
						HX_STACK_LINE(106)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(106)
						tmp16 = _this;
					}
					HX_STACK_LINE(106)
					this1 = tmp16;
				}
				else{
					HX_STACK_LINE(106)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(106)
					if ((tmp16)){
						HX_STACK_LINE(106)
						::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(106)
							::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(106)
							::haxe::io::Bytes tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(106)
							::haxe::io::Bytes srcData = tmp19;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(106)
							int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(106)
							int srcLength = tmp20;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(106)
							int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(106)
							int srcByteOffset = tmp21;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(106)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(106)
							int srcElementSize = tmp22;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(106)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(106)
							int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(106)
							int tmp24 = _this->type;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(106)
							bool tmp25 = (tmp23 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(106)
							if ((tmp25)){
								HX_STACK_LINE(106)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(106)
								int tmp26 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(106)
								int cloneLength = tmp26;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(106)
								::haxe::io::Bytes tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(106)
								{
									HX_STACK_LINE(106)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(106)
									int tmp28 = cloneLength;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(106)
									::haxe::io::Bytes tmp29 = ::haxe::io::Bytes_obj::alloc(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(106)
									this2 = tmp29;
									HX_STACK_LINE(106)
									tmp27 = this2;
								}
								HX_STACK_LINE(106)
								_this->buffer = tmp27;
								HX_STACK_LINE(106)
								::haxe::io::Bytes tmp28 = srcData;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(106)
								int tmp29 = srcByteOffset;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(106)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(106)
								_this->buffer->blit((int)0,tmp28,tmp29,tmp30);
							}
							else{
								HX_STACK_LINE(106)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(106)
							int tmp26 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(106)
							_this->byteLength = tmp26;
							HX_STACK_LINE(106)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(106)
							_this->length = srcLength;
							HX_STACK_LINE(106)
							tmp17 = _this;
						}
						HX_STACK_LINE(106)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(106)
						bool tmp17 = (bytes != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(106)
						if ((tmp17)){
							HX_STACK_LINE(106)
							::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(106)
							{
								HX_STACK_LINE(106)
								::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(106)
								::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(106)
								bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(106)
								if ((tmp20)){
									HX_STACK_LINE(106)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(106)
								int tmp21 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(106)
								bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(106)
								if ((tmp22)){
									HX_STACK_LINE(106)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(106)
								int bufferByteLength = bytes->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(106)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(106)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(106)
								bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(106)
								if ((tmp23)){
									HX_STACK_LINE(106)
									int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(106)
									newByteLength = tmp24;
									HX_STACK_LINE(106)
									int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(106)
									bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(106)
									if ((tmp26)){
										HX_STACK_LINE(106)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(106)
									bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(106)
									if ((tmp27)){
										HX_STACK_LINE(106)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(106)
									int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(106)
									newByteLength = tmp24;
									HX_STACK_LINE(106)
									int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(106)
									int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(106)
									bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(106)
									if ((tmp26)){
										HX_STACK_LINE(106)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(106)
								_this->buffer = bytes;
								HX_STACK_LINE(106)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(106)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(106)
								Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(106)
								int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(106)
								_this->length = tmp25;
								HX_STACK_LINE(106)
								tmp18 = _this;
							}
							HX_STACK_LINE(106)
							this1 = tmp18;
						}
						else{
							HX_STACK_LINE(106)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(106)
			tmp13 = this1;
		}
		HX_STACK_LINE(106)
		buffer->data = tmp13;
	}
	HX_STACK_LINE(111)
	int tmp7 = this->bitsPerPixel;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(111)
	buffer->bitsPerPixel = tmp7;
	HX_STACK_LINE(112)
	int tmp8 = this->format;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(112)
	buffer->format = tmp8;
	HX_STACK_LINE(113)
	bool tmp9 = this->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(113)
	buffer->premultiplied = tmp9;
	HX_STACK_LINE(114)
	bool tmp10 = this->transparent;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(114)
	buffer->transparent = tmp10;
	HX_STACK_LINE(115)
	::lime::graphics::ImageBuffer tmp11 = buffer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(115)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,clone,return )

Dynamic ImageBuffer_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","get_src",0x9748e67e,"lime.graphics.ImageBuffer.get_src","lime/graphics/ImageBuffer.hx",127,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	Dynamic tmp = this->__srcCustom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_src,return )

Dynamic ImageBuffer_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","set_src",0x8a4a778a,"lime.graphics.ImageBuffer.set_src","lime/graphics/ImageBuffer.hx",147,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(168)
	this->__srcCustom = value;
	HX_STACK_LINE(172)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ImageBuffer_obj,set_src,return )

int ImageBuffer_obj::get_stride( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","get_stride",0xb11b1cbf,"lime.graphics.ImageBuffer.get_stride","lime/graphics/ImageBuffer.hx",177,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_stride,return )


ImageBuffer_obj::ImageBuffer_obj()
{
}

void ImageBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuffer);
	HX_MARK_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(premultiplied,"premultiplied");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_MARK_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_MARK_MEMBER_NAME(__srcContext,"__srcContext");
	HX_MARK_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(__srcImage,"__srcImage");
	HX_MARK_MEMBER_NAME(__srcImageData,"__srcImageData");
	HX_MARK_END_CLASS();
}

void ImageBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(premultiplied,"premultiplied");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_VISIT_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_VISIT_MEMBER_NAME(__srcContext,"__srcContext");
	HX_VISIT_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(__srcImage,"__srcImage");
	HX_VISIT_MEMBER_NAME(__srcImageData,"__srcImageData");
}

Dynamic ImageBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"stride") ) { if (inCallProp == hx::paccAlways) return get_stride(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { return __srcImage; }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return get_stride_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { return __srcCanvas; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return __srcCustom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { return bitsPerPixel; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { return __srcContext; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return premultiplied; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { return __srcImageData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { return __srcBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { __srcImage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { __srcCanvas=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { __srcCustom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { bitsPerPixel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { __srcContext=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { premultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { __srcImageData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { __srcBitmapData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"));
	outFields->push(HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"));
	outFields->push(HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"));
	outFields->push(HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,bitsPerPixel),HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(ImageBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,premultiplied),HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcBitmapData),HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCanvas),HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcContext),HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImage),HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImageData),HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"),
	HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"),
	HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"),
	HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageBuffer_obj::__mClass;

void ImageBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.ImageBuffer","\x71","\x9c","\xe0","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageBuffer_obj >;
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
} // end namespace graphics
