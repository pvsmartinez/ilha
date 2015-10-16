#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
namespace openfl{
namespace display3D{

Void IndexBuffer3D_obj::__construct(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLBuffer glBuffer,int numIndices)
{
HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",18,0x3d934296)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glBuffer,"glBuffer")
HX_STACK_ARG(numIndices,"numIndices")
{
	HX_STACK_LINE(20)
	this->context = context;
	HX_STACK_LINE(21)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(22)
	this->numIndices = numIndices;
}
;
	return null();
}

//IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLBuffer glBuffer,int numIndices)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(context,glBuffer,numIndices);
	return _result_;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > _result_ = new IndexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void IndexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",27,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::openfl::display3D::Context3D tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		tmp->__deleteIndexBuffer(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::lime::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",34,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(36)
		int bytesPerIndex = (int)2;		HX_STACK_VAR(bytesPerIndex,"bytesPerIndex");
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::lime::graphics::opengl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(37)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34963,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(39)
		int tmp = (count * bytesPerIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		int length = tmp;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(40)
		int tmp1 = byteArrayOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		int tmp2 = (startOffset * bytesPerIndex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		int offset = tmp3;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(41)
		::lime::utils::ArrayBufferView indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(56)
		::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(56)
			bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			if ((tmp5)){
				HX_STACK_LINE(56)
				::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(56)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				if ((tmp6)){
					HX_STACK_LINE(56)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(56)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(56)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(56)
						_this->length = tmp9;
						HX_STACK_LINE(56)
						int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						_this->byteLength = tmp10;
						HX_STACK_LINE(56)
						::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(56)
							int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(56)
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(56)
							this2 = tmp13;
							HX_STACK_LINE(56)
							tmp11 = this2;
						}
						HX_STACK_LINE(56)
						_this->buffer = tmp11;
						HX_STACK_LINE(56)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(56)
						tmp7 = _this;
					}
					HX_STACK_LINE(56)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(56)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					if ((tmp7)){
						HX_STACK_LINE(56)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						{
							HX_STACK_LINE(56)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(56)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(56)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(56)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(56)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(56)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(56)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(56)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(56)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(56)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(56)
							if ((tmp16)){
								HX_STACK_LINE(56)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(56)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(56)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(56)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(56)
								{
									HX_STACK_LINE(56)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(56)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(56)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(56)
									this2 = tmp20;
									HX_STACK_LINE(56)
									tmp18 = this2;
								}
								HX_STACK_LINE(56)
								_this->buffer = tmp18;
								HX_STACK_LINE(56)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(56)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(56)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(56)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(56)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(56)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(56)
							_this->byteLength = tmp17;
							HX_STACK_LINE(56)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(56)
							_this->length = srcLength;
							HX_STACK_LINE(56)
							tmp8 = _this;
						}
						HX_STACK_LINE(56)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(56)
						bool tmp8 = (byteArray != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(56)
						if ((tmp8)){
							HX_STACK_LINE(56)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							{
								HX_STACK_LINE(56)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(56)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(56)
								bool tmp11 = (offset < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(56)
								if ((tmp11)){
									HX_STACK_LINE(56)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(56)
								int tmp12 = hx::Mod(offset,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(56)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(56)
								if ((tmp13)){
									HX_STACK_LINE(56)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(56)
								int bufferByteLength = byteArray->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(56)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(56)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(56)
								bool tmp14 = (length == null());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(56)
								if ((tmp14)){
									HX_STACK_LINE(56)
									int tmp15 = (bufferByteLength - offset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(56)
									newByteLength = tmp15;
									HX_STACK_LINE(56)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(56)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(56)
									if ((tmp17)){
										HX_STACK_LINE(56)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(56)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(56)
									if ((tmp18)){
										HX_STACK_LINE(56)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(56)
									int tmp15 = (length * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(56)
									newByteLength = tmp15;
									HX_STACK_LINE(56)
									int tmp16 = (offset + newByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(56)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(56)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(56)
									if ((tmp17)){
										HX_STACK_LINE(56)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(56)
								_this->buffer = byteArray;
								HX_STACK_LINE(56)
								_this->byteOffset = offset;
								HX_STACK_LINE(56)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(56)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(56)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(56)
								_this->length = tmp16;
								HX_STACK_LINE(56)
								tmp9 = _this;
							}
							HX_STACK_LINE(56)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(56)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
						}
					}
				}
			}
			HX_STACK_LINE(56)
			tmp4 = this1;
		}
		HX_STACK_LINE(56)
		indices = tmp4;
		HX_STACK_LINE(59)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34963,hx::DynamicPtr(indices->buffer),indices->byteOffset,indices->byteLength,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

Void IndexBuffer3D_obj::uploadFromVector( Array< int > data,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",64,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::lime::graphics::opengl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(66)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34963,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(67)
		::lime::utils::ArrayBufferView indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(78)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(78)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			if ((tmp1)){
				HX_STACK_LINE(78)
				::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				this1 = tmp2;
			}
			else{
				HX_STACK_LINE(78)
				bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				if ((tmp2)){
					HX_STACK_LINE(78)
					::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(78)
						::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(78)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(78)
						_this->length = data->length;
						HX_STACK_LINE(78)
						int tmp5 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(78)
						_this->byteLength = tmp5;
						HX_STACK_LINE(78)
						::haxe::io::Bytes tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(78)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(78)
							int tmp7 = _this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(78)
							::haxe::io::Bytes tmp8 = ::haxe::io::Bytes_obj::alloc(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(78)
							this2 = tmp8;
							HX_STACK_LINE(78)
							tmp6 = this2;
						}
						HX_STACK_LINE(78)
						_this->buffer = tmp6;
						HX_STACK_LINE(78)
						_this->copyFromArray(((Array< Float >)(data)),null());
						HX_STACK_LINE(78)
						tmp3 = _this;
					}
					HX_STACK_LINE(78)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(78)
					bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(78)
					if ((tmp3)){
						HX_STACK_LINE(78)
						::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(78)
						{
							HX_STACK_LINE(78)
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(78)
							::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(78)
							::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(78)
							::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(78)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(78)
							int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(78)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(78)
							int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(78)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(78)
							int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(78)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(78)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(78)
							int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(78)
							bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(78)
							if ((tmp12)){
								HX_STACK_LINE(78)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(78)
								int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(78)
								int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(78)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(78)
								{
									HX_STACK_LINE(78)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(78)
									int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(78)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(78)
									this2 = tmp16;
									HX_STACK_LINE(78)
									tmp14 = this2;
								}
								HX_STACK_LINE(78)
								_this->buffer = tmp14;
								HX_STACK_LINE(78)
								::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(78)
								int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(78)
								int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(78)
								_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
							}
							else{
								HX_STACK_LINE(78)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(78)
							int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(78)
							_this->byteLength = tmp13;
							HX_STACK_LINE(78)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(78)
							_this->length = srcLength;
							HX_STACK_LINE(78)
							tmp4 = _this;
						}
						HX_STACK_LINE(78)
						this1 = tmp4;
					}
					else{
						HX_STACK_LINE(78)
						bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(78)
						if ((tmp4)){
							HX_STACK_LINE(78)
							::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(78)
							{
								HX_STACK_LINE(78)
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(78)
								::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(78)
								bool tmp7 = (startOffset < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(78)
								if ((tmp7)){
									HX_STACK_LINE(78)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(78)
								int tmp8 = hx::Mod(startOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(78)
								bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(78)
								if ((tmp9)){
									HX_STACK_LINE(78)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(78)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(78)
								int bufferByteLength = tmp10;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(78)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(78)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(78)
								bool tmp11 = (count == null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(78)
								if ((tmp11)){
									HX_STACK_LINE(78)
									int tmp12 = (bufferByteLength - startOffset);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(78)
									newByteLength = tmp12;
									HX_STACK_LINE(78)
									int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(78)
									bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(78)
									if ((tmp14)){
										HX_STACK_LINE(78)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(78)
									bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(78)
									if ((tmp15)){
										HX_STACK_LINE(78)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(78)
									int tmp12 = (count * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(78)
									newByteLength = tmp12;
									HX_STACK_LINE(78)
									int tmp13 = (startOffset + newByteLength);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(78)
									int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(78)
									bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(78)
									if ((tmp14)){
										HX_STACK_LINE(78)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(78)
								_this->buffer = null();
								HX_STACK_LINE(78)
								_this->byteOffset = startOffset;
								HX_STACK_LINE(78)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(78)
								Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(78)
								int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(78)
								_this->length = tmp13;
								HX_STACK_LINE(78)
								tmp5 = _this;
							}
							HX_STACK_LINE(78)
							this1 = tmp5;
						}
						else{
							HX_STACK_LINE(78)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
						}
					}
				}
			}
			HX_STACK_LINE(78)
			tmp = this1;
		}
		HX_STACK_LINE(78)
		indices = tmp;
		HX_STACK_LINE(81)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34963,hx::DynamicPtr(indices->buffer),indices->byteOffset,indices->byteLength,(int)35044);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(IndexBuffer3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(IndexBuffer3D_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,numIndices),HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("numIndices","\x81","\x85","\x74","\x13"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.IndexBuffer3D","\xaa","\xf5","\xd5","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer3D_obj >;
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

} // end namespace openfl
} // end namespace display3D
