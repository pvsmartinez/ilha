#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
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
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLGraphicsData_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","new",0xf5d27d4d,"openfl._internal.renderer.opengl.utils.GLGraphicsData.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1539,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1553)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(1549)
	this->data = Array_obj< Float >::__new();
	HX_STACK_LINE(1547)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1546)
	this->mode = (int)0;
	HX_STACK_LINE(1545)
	this->dirty = true;
	HX_STACK_LINE(1544)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(1543)
	this->tint = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0));
	HX_STACK_LINE(1560)
	this->gl = gl;
	HX_STACK_LINE(1562)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1562)
	::lime::graphics::opengl::GLBuffer tmp1 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1562)
	this->dataBuffer = tmp1;
	HX_STACK_LINE(1563)
	int tmp2 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1563)
	::lime::graphics::opengl::GLBuffer tmp3 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp2,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1563)
	this->indexBuffer = tmp3;
}
;
	return null();
}

//GLGraphicsData_obj::~GLGraphicsData_obj() { }

Dynamic GLGraphicsData_obj::__CreateEmpty() { return  new GLGraphicsData_obj; }
hx::ObjectPtr< GLGraphicsData_obj > GLGraphicsData_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLGraphicsData_obj > _result_ = new GLGraphicsData_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLGraphicsData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLGraphicsData_obj > _result_ = new GLGraphicsData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLGraphicsData_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","reset",0x3afdcbfc,"openfl._internal.renderer.opengl.utils.GLGraphicsData.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1568,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1570)
		this->data = Array_obj< Float >::__new();
		HX_STACK_LINE(1571)
		this->indices = Array_obj< int >::__new();
		HX_STACK_LINE(1572)
		this->lastIndex = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLGraphicsData_obj,reset,(void))

Void GLGraphicsData_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","upload",0xe6f62f34,"openfl._internal.renderer.opengl.utils.GLGraphicsData.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1577,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1579)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1579)
		{
			HX_STACK_LINE(1579)
			Dynamic tmp1 = ((Dynamic)(this->data));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1579)
			Dynamic elements = tmp1;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(1579)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(1579)
			bool tmp2 = (elements != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1579)
			if ((tmp2)){
				HX_STACK_LINE(1579)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1579)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(1579)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1579)
				if ((tmp3)){
					HX_STACK_LINE(1579)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1579)
					{
						HX_STACK_LINE(1579)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1579)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1579)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(1579)
						int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1579)
						_this->length = tmp6;
						HX_STACK_LINE(1579)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1579)
						_this->byteLength = tmp7;
						HX_STACK_LINE(1579)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1579)
						{
							HX_STACK_LINE(1579)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(1579)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1579)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1579)
							this2 = tmp10;
							HX_STACK_LINE(1579)
							tmp8 = this2;
						}
						HX_STACK_LINE(1579)
						_this->buffer = tmp8;
						HX_STACK_LINE(1579)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(1579)
						tmp4 = _this;
					}
					HX_STACK_LINE(1579)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(1579)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1579)
					if ((tmp4)){
						HX_STACK_LINE(1579)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1579)
						{
							HX_STACK_LINE(1579)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1579)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1579)
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1579)
							::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(1579)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1579)
							int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(1579)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1579)
							int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(1579)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1579)
							int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(1579)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(1579)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1579)
							int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1579)
							bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1579)
							if ((tmp13)){
								HX_STACK_LINE(1579)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(1579)
								int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1579)
								int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(1579)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1579)
								{
									HX_STACK_LINE(1579)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1579)
									int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1579)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1579)
									this2 = tmp17;
									HX_STACK_LINE(1579)
									tmp15 = this2;
								}
								HX_STACK_LINE(1579)
								_this->buffer = tmp15;
								HX_STACK_LINE(1579)
								::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1579)
								int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1579)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1579)
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_LINE(1579)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(1579)
							int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1579)
							_this->byteLength = tmp14;
							HX_STACK_LINE(1579)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(1579)
							_this->length = srcLength;
							HX_STACK_LINE(1579)
							tmp5 = _this;
						}
						HX_STACK_LINE(1579)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(1579)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1579)
						if ((tmp5)){
							HX_STACK_LINE(1579)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1579)
							{
								HX_STACK_LINE(1579)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1579)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1579)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1579)
								if ((tmp8)){
									HX_STACK_LINE(1579)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(1579)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1579)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1579)
								if ((tmp10)){
									HX_STACK_LINE(1579)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(1579)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1579)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(1579)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(1579)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(1579)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1579)
								if ((tmp12)){
									HX_STACK_LINE(1579)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1579)
									newByteLength = tmp13;
									HX_STACK_LINE(1579)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1579)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1579)
									if ((tmp15)){
										HX_STACK_LINE(1579)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(1579)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1579)
									if ((tmp16)){
										HX_STACK_LINE(1579)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(1579)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1579)
									newByteLength = tmp13;
									HX_STACK_LINE(1579)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1579)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(1579)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1579)
									if ((tmp15)){
										HX_STACK_LINE(1579)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(1579)
								_this->buffer = null();
								HX_STACK_LINE(1579)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1579)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(1579)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1579)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1579)
								_this->length = tmp14;
								HX_STACK_LINE(1579)
								tmp6 = _this;
							}
							HX_STACK_LINE(1579)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(1579)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(1579)
			tmp = this1;
		}
		HX_STACK_LINE(1579)
		this->glData = tmp;
		HX_STACK_LINE(1580)
		{
			HX_STACK_LINE(1580)
			::lime::graphics::opengl::GLBuffer tmp1 = this->dataBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1580)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1580)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1581)
		{
			HX_STACK_LINE(1581)
			::lime::utils::ArrayBufferView tmp1 = this->glData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1581)
			::lime::utils::ArrayBufferView data = tmp1;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1581)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(this->gl->ARRAY_BUFFER,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,this->gl->STATIC_DRAW);
		}
		HX_STACK_LINE(1584)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1584)
		{
			HX_STACK_LINE(1584)
			Dynamic tmp2 = ((Dynamic)(this->indices));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1584)
			Dynamic elements = tmp2;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(1584)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(1584)
			bool tmp3 = (elements != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1584)
			if ((tmp3)){
				HX_STACK_LINE(1584)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)6);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1584)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(1584)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1584)
				if ((tmp4)){
					HX_STACK_LINE(1584)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1584)
					{
						HX_STACK_LINE(1584)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1584)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1584)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(1584)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1584)
						_this->length = tmp7;
						HX_STACK_LINE(1584)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1584)
						_this->byteLength = tmp8;
						HX_STACK_LINE(1584)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1584)
						{
							HX_STACK_LINE(1584)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(1584)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1584)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1584)
							this2 = tmp11;
							HX_STACK_LINE(1584)
							tmp9 = this2;
						}
						HX_STACK_LINE(1584)
						_this->buffer = tmp9;
						HX_STACK_LINE(1584)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(1584)
						tmp5 = _this;
					}
					HX_STACK_LINE(1584)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(1584)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1584)
					if ((tmp5)){
						HX_STACK_LINE(1584)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1584)
						{
							HX_STACK_LINE(1584)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1584)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1584)
							::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1584)
							::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(1584)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1584)
							int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(1584)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1584)
							int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(1584)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1584)
							int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(1584)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(1584)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1584)
							int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1584)
							bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1584)
							if ((tmp14)){
								HX_STACK_LINE(1584)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(1584)
								int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1584)
								int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(1584)
								::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1584)
								{
									HX_STACK_LINE(1584)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1584)
									int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1584)
									::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1584)
									this2 = tmp18;
									HX_STACK_LINE(1584)
									tmp16 = this2;
								}
								HX_STACK_LINE(1584)
								_this->buffer = tmp16;
								HX_STACK_LINE(1584)
								::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1584)
								int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1584)
								int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1584)
								_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
							}
							else{
								HX_STACK_LINE(1584)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(1584)
							int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1584)
							_this->byteLength = tmp15;
							HX_STACK_LINE(1584)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(1584)
							_this->length = srcLength;
							HX_STACK_LINE(1584)
							tmp6 = _this;
						}
						HX_STACK_LINE(1584)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(1584)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1584)
						if ((tmp6)){
							HX_STACK_LINE(1584)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1584)
							{
								HX_STACK_LINE(1584)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1584)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1584)
								bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1584)
								if ((tmp9)){
									HX_STACK_LINE(1584)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(1584)
								int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1584)
								bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1584)
								if ((tmp11)){
									HX_STACK_LINE(1584)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(1584)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1584)
								int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(1584)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(1584)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(1584)
								bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1584)
								if ((tmp13)){
									HX_STACK_LINE(1584)
									int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1584)
									newByteLength = tmp14;
									HX_STACK_LINE(1584)
									int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1584)
									bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1584)
									if ((tmp16)){
										HX_STACK_LINE(1584)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(1584)
									bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1584)
									if ((tmp17)){
										HX_STACK_LINE(1584)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(1584)
									int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1584)
									newByteLength = tmp14;
									HX_STACK_LINE(1584)
									int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1584)
									int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(1584)
									bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1584)
									if ((tmp16)){
										HX_STACK_LINE(1584)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(1584)
								_this->buffer = null();
								HX_STACK_LINE(1584)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1584)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(1584)
								Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1584)
								int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1584)
								_this->length = tmp15;
								HX_STACK_LINE(1584)
								tmp7 = _this;
							}
							HX_STACK_LINE(1584)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(1584)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
						}
					}
				}
			}
			HX_STACK_LINE(1584)
			tmp1 = this1;
		}
		HX_STACK_LINE(1584)
		this->glIndices = tmp1;
		HX_STACK_LINE(1585)
		{
			HX_STACK_LINE(1585)
			::lime::graphics::opengl::GLBuffer tmp2 = this->indexBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1585)
			::lime::graphics::opengl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1585)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1586)
		{
			HX_STACK_LINE(1586)
			::lime::utils::ArrayBufferView tmp2 = this->glIndices;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1586)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1586)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(this->gl->ELEMENT_ARRAY_BUFFER,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,this->gl->STATIC_DRAW);
		}
		HX_STACK_LINE(1588)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLGraphicsData_obj,upload,(void))


GLGraphicsData_obj::GLGraphicsData_obj()
{
}

void GLGraphicsData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLGraphicsData);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(tint,"tint");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(glData,"glData");
	HX_MARK_MEMBER_NAME(dataBuffer,"dataBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(glIndices,"glIndices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_END_CLASS();
}

void GLGraphicsData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(tint,"tint");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(glData,"glData");
	HX_VISIT_MEMBER_NAME(dataBuffer,"dataBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(glIndices,"glIndices");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
}

Dynamic GLGraphicsData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tint") ) { return tint; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glData") ) { return glData; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
		if (HX_FIELD_EQ(inName,"glIndices") ) { return glIndices; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataBuffer") ) { return dataBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLGraphicsData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tint") ) { tint=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glData") ) { glData=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glIndices") ) { glIndices=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataBuffer") ) { dataBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLGraphicsData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("tint","\xfb","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("glData","\xef","\x52","\x45","\x8b"));
	outFields->push(HX_HCSTRING("dataBuffer","\xca","\x82","\x36","\xbc"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLGraphicsData_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLGraphicsData_obj,tint),HX_HCSTRING("tint","\xfb","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(GLGraphicsData_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsBool,(int)offsetof(GLGraphicsData_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(GLGraphicsData_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsInt,(int)offsetof(GLGraphicsData_obj,lastIndex),HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLGraphicsData_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLGraphicsData_obj,glData),HX_HCSTRING("glData","\xef","\x52","\x45","\x8b")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLGraphicsData_obj,dataBuffer),HX_HCSTRING("dataBuffer","\xca","\x82","\x36","\xbc")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLGraphicsData_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLGraphicsData_obj,glIndices),HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLGraphicsData_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("tint","\xfb","\xcc","\xfc","\x4c"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("glData","\xef","\x52","\x45","\x8b"),
	HX_HCSTRING("dataBuffer","\xca","\x82","\x36","\xbc"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLGraphicsData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLGraphicsData_obj::__mClass,"__mClass");
};

#endif

hx::Class GLGraphicsData_obj::__mClass;

void GLGraphicsData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLGraphicsData","\xdb","\xd2","\x84","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLGraphicsData_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
