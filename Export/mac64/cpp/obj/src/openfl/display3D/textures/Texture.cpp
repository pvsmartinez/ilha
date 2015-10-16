#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void Texture_obj::__construct(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{
HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",23,0x3ee19dbf)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(optimize,"optimize")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(25)
	this->optimizeForRenderToTexture = optimize;
	HX_STACK_LINE(27)
	this->mipmapsGenerated = false;
	HX_STACK_LINE(33)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::lime::graphics::opengl::GLTexture tmp1 = glTexture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(36)
	bool tmp4 = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	if ((tmp4)){
		HX_STACK_LINE(38)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei.call((int)37440,(int)1);
		HX_STACK_LINE(39)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9728);
		HX_STACK_LINE(40)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9728);
		HX_STACK_LINE(41)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(42)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)33071);
	}
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(context,glTexture,optimize,width,height);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Texture_obj::uploadCompressedTextureFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",50,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",57,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(70)
		::lime::graphics::Image image = bitmapData->image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(72)
		bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			tmp3 = image->get_transparent();
		}
		else{
			HX_STACK_LINE(72)
			tmp3 = false;
		}
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(74)
			::lime::graphics::Image tmp4 = image->clone();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			image = tmp4;
			HX_STACK_LINE(75)
			image->set_premultiplied(true);
		}
		HX_STACK_LINE(79)
		this->width = image->width;
		HX_STACK_LINE(80)
		this->height = image->height;
		HX_STACK_LINE(82)
		::lime::utils::ArrayBufferView tmp4 = image->get_data();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		this->uploadFromUInt8Array(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",89,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(104)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(104)
			bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			if ((tmp1)){
				HX_STACK_LINE(104)
				::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				this1 = tmp2;
			}
			else{
				HX_STACK_LINE(104)
				bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				if ((tmp2)){
					HX_STACK_LINE(104)
					::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(104)
					{
						HX_STACK_LINE(104)
						::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(104)
						::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(104)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(104)
						int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(104)
						_this->length = tmp5;
						HX_STACK_LINE(104)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(104)
						_this->byteLength = tmp6;
						HX_STACK_LINE(104)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(104)
						{
							HX_STACK_LINE(104)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(104)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(104)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(104)
							this2 = tmp9;
							HX_STACK_LINE(104)
							tmp7 = this2;
						}
						HX_STACK_LINE(104)
						_this->buffer = tmp7;
						HX_STACK_LINE(104)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(104)
						tmp3 = _this;
					}
					HX_STACK_LINE(104)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(104)
					bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(104)
					if ((tmp3)){
						HX_STACK_LINE(104)
						::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(104)
						{
							HX_STACK_LINE(104)
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(104)
							::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(104)
							::haxe::io::Bytes tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(104)
							::haxe::io::Bytes srcData = tmp6;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(104)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(104)
							int srcLength = tmp7;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(104)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(104)
							int srcByteOffset = tmp8;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(104)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(104)
							int srcElementSize = tmp9;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(104)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(104)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(104)
							int tmp11 = _this->type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(104)
							bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(104)
							if ((tmp12)){
								HX_STACK_LINE(104)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(104)
								int tmp13 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(104)
								int cloneLength = tmp13;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(104)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(104)
								{
									HX_STACK_LINE(104)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(104)
									int tmp15 = cloneLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(104)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(104)
									this2 = tmp16;
									HX_STACK_LINE(104)
									tmp14 = this2;
								}
								HX_STACK_LINE(104)
								_this->buffer = tmp14;
								HX_STACK_LINE(104)
								::haxe::io::Bytes tmp15 = srcData;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(104)
								int tmp16 = srcByteOffset;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(104)
								int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(104)
								_this->buffer->blit((int)0,tmp15,tmp16,tmp17);
							}
							else{
								HX_STACK_LINE(104)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(104)
							int tmp13 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(104)
							_this->byteLength = tmp13;
							HX_STACK_LINE(104)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(104)
							_this->length = srcLength;
							HX_STACK_LINE(104)
							tmp4 = _this;
						}
						HX_STACK_LINE(104)
						this1 = tmp4;
					}
					else{
						HX_STACK_LINE(104)
						bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(104)
						if ((tmp4)){
							HX_STACK_LINE(104)
							::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(104)
							{
								HX_STACK_LINE(104)
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(104)
								::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(104)
								bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(104)
								if ((tmp7)){
									HX_STACK_LINE(104)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(104)
								int tmp8 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(104)
								bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(104)
								if ((tmp9)){
									HX_STACK_LINE(104)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(104)
								int bufferByteLength = data->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(104)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(104)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(104)
								bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(104)
								if ((tmp10)){
									HX_STACK_LINE(104)
									int tmp11 = bufferByteLength;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(104)
									newByteLength = tmp11;
									HX_STACK_LINE(104)
									int tmp12 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(104)
									bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(104)
									if ((tmp13)){
										HX_STACK_LINE(104)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(104)
									bool tmp14 = (newByteLength < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(104)
									if ((tmp14)){
										HX_STACK_LINE(104)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(104)
									int tmp11 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(104)
									newByteLength = tmp11;
									HX_STACK_LINE(104)
									int tmp12 = newByteLength;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(104)
									int newRange = tmp12;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(104)
									bool tmp13 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(104)
									if ((tmp13)){
										HX_STACK_LINE(104)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(104)
								_this->buffer = data;
								HX_STACK_LINE(104)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(104)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(104)
								Float tmp11 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(104)
								int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(104)
								_this->length = tmp12;
								HX_STACK_LINE(104)
								tmp5 = _this;
							}
							HX_STACK_LINE(104)
							this1 = tmp5;
						}
						else{
							HX_STACK_LINE(104)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(104)
			tmp = this1;
		}
		HX_STACK_LINE(104)
		::lime::utils::ArrayBufferView source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(107)
		::lime::utils::ArrayBufferView tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		this->uploadFromUInt8Array(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromUInt8Array( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromUInt8Array",0xb98d8296,"openfl.display3D.textures.Texture.uploadFromUInt8Array","openfl/display3D/textures/Texture.hx",112,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::lime::graphics::opengl::GLTexture tmp = this->glTexture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(114)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(114)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(116)
		bool tmp = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		if ((tmp)){
			HX_STACK_LINE(118)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei.call((int)37440,(int)1);
			HX_STACK_LINE(119)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(120)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(121)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(122)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			::haxe::io::Bytes tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			if ((tmp1)){
				HX_STACK_LINE(126)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(126)
				tmp2 = data->buffer;
			}
			HX_STACK_LINE(126)
			::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(126)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call((int)3553,miplevel,(int)6408,this->width,this->height,(int)0,(int)6408,(int)5121,hx::DynamicPtr(buffer),(  (((data == null()))) ? int((int)0) : int(data->byteOffset) ));
		}
		HX_STACK_LINE(127)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromUInt8Array,(void))


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { return mipmapsGenerated; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromUInt8Array") ) { return uploadFromUInt8Array_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"mipmapsGenerated") ) { mipmapsGenerated=inValue.Cast< bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	outFields->push(HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Texture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{hx::fsBool,(int)offsetof(Texture_obj,mipmapsGenerated),HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("mipmapsGenerated","\x24","\x10","\x0f","\xac"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromUInt8Array","\x26","\x75","\xa4","\x6a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#endif

hx::Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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
} // end namespace textures
