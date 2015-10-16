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
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
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

Void RectangleTexture_obj::__construct(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{
HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",19,0x83565556)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(optimize,"optimize")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(21)
	this->optimizeForRenderToTexture = optimize;
	HX_STACK_LINE(27)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::lime::graphics::opengl::GLTexture tmp1 = glTexture;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(30)
	bool tmp4 = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	if ((tmp4)){
		HX_STACK_LINE(31)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei.call((int)37440,(int)1);
	}
	HX_STACK_LINE(33)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9728);
	HX_STACK_LINE(34)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9728);
	HX_STACK_LINE(35)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)33071);
	HX_STACK_LINE(36)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)33071);
}
;
	return null();
}

//RectangleTexture_obj::~RectangleTexture_obj() { }

Dynamic RectangleTexture_obj::__CreateEmpty() { return  new RectangleTexture_obj; }
hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(context,glTexture,optimize,width,height);
	return _result_;}

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleTexture_obj > _result_ = new RectangleTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",47,0x83565556)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(56)
		::lime::utils::ArrayBufferView tmp = bitmapData->image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::haxe::io::Bytes tmp1 = tmp->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		::lime::utils::ByteArray p = tmp2;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(59)
		this->width = bitmapData->width;
		HX_STACK_LINE(60)
		this->height = bitmapData->height;
		HX_STACK_LINE(62)
		::lime::utils::ByteArray tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		this->uploadFromByteArray(tmp3,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromBitmapData,(void))

Void RectangleTexture_obj::uploadFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",67,0x83565556)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::lime::graphics::opengl::GLTexture tmp = this->glTexture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(69)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(69)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(95)
		bool tmp = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(97)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei.call((int)37440,(int)1);
			HX_STACK_LINE(98)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(99)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(100)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(101)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(108)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(108)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			if ((tmp2)){
				HX_STACK_LINE(108)
				::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(108)
				this1 = tmp3;
			}
			else{
				HX_STACK_LINE(108)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(108)
				if ((tmp3)){
					HX_STACK_LINE(108)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(108)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(108)
						int tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(108)
						_this->length = tmp6;
						HX_STACK_LINE(108)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(108)
						_this->byteLength = tmp7;
						HX_STACK_LINE(108)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(108)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(108)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(108)
							this2 = tmp10;
							HX_STACK_LINE(108)
							tmp8 = this2;
						}
						HX_STACK_LINE(108)
						_this->buffer = tmp8;
						HX_STACK_LINE(108)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(108)
						tmp4 = _this;
					}
					HX_STACK_LINE(108)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(108)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(108)
					if ((tmp4)){
						HX_STACK_LINE(108)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(108)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(108)
							::haxe::io::Bytes tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(108)
							::haxe::io::Bytes srcData = tmp7;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(108)
							int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(108)
							int srcLength = tmp8;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(108)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(108)
							int srcByteOffset = tmp9;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(108)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(108)
							int srcElementSize = tmp10;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(108)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(108)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(108)
							int tmp12 = _this->type;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(108)
							bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(108)
							if ((tmp13)){
								HX_STACK_LINE(108)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(108)
								int tmp14 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(108)
								int cloneLength = tmp14;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(108)
								::haxe::io::Bytes tmp15;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(108)
								{
									HX_STACK_LINE(108)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(108)
									int tmp16 = cloneLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(108)
									::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(108)
									this2 = tmp17;
									HX_STACK_LINE(108)
									tmp15 = this2;
								}
								HX_STACK_LINE(108)
								_this->buffer = tmp15;
								HX_STACK_LINE(108)
								::haxe::io::Bytes tmp16 = srcData;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(108)
								int tmp17 = srcByteOffset;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(108)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(108)
								_this->buffer->blit((int)0,tmp16,tmp17,tmp18);
							}
							else{
								HX_STACK_LINE(108)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(108)
							int tmp14 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(108)
							_this->byteLength = tmp14;
							HX_STACK_LINE(108)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(108)
							_this->length = srcLength;
							HX_STACK_LINE(108)
							tmp5 = _this;
						}
						HX_STACK_LINE(108)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(108)
						bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(108)
						if ((tmp5)){
							HX_STACK_LINE(108)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(108)
							{
								HX_STACK_LINE(108)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(108)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(108)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(108)
								if ((tmp8)){
									HX_STACK_LINE(108)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(108)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(108)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(108)
								if ((tmp10)){
									HX_STACK_LINE(108)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(108)
								int bufferByteLength = data->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(108)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(108)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(108)
								bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(108)
								if ((tmp11)){
									HX_STACK_LINE(108)
									int tmp12 = bufferByteLength;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(108)
									newByteLength = tmp12;
									HX_STACK_LINE(108)
									int tmp13 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(108)
									bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(108)
									if ((tmp14)){
										HX_STACK_LINE(108)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(108)
									bool tmp15 = (newByteLength < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(108)
									if ((tmp15)){
										HX_STACK_LINE(108)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(108)
									int tmp12 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(108)
									newByteLength = tmp12;
									HX_STACK_LINE(108)
									int tmp13 = newByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(108)
									int newRange = tmp13;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(108)
									bool tmp14 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(108)
									if ((tmp14)){
										HX_STACK_LINE(108)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(108)
								_this->buffer = data;
								HX_STACK_LINE(108)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(108)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(108)
								Float tmp12 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(108)
								int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(108)
								_this->length = tmp13;
								HX_STACK_LINE(108)
								tmp6 = _this;
							}
							HX_STACK_LINE(108)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(108)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(108)
			tmp1 = this1;
		}
		HX_STACK_LINE(108)
		::lime::utils::ArrayBufferView source = tmp1;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			bool tmp2 = (source == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			::haxe::io::Bytes tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			if ((tmp2)){
				HX_STACK_LINE(114)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(114)
				tmp3 = source->buffer;
			}
			HX_STACK_LINE(114)
			::haxe::io::Bytes buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(114)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call((int)3553,(int)0,(int)6408,this->width,this->height,(int)0,(int)6408,(int)5121,hx::DynamicPtr(buffer),(  (((source == null()))) ? int((int)0) : int(source->byteOffset) ));
		}
		HX_STACK_LINE(115)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call((int)3553,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))


RectangleTexture_obj::RectangleTexture_obj()
{
}

Dynamic RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectangleTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RectangleTexture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
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
