#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",120,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(166)
	this->__usingFramebuffer = false;
	HX_STACK_LINE(185)
	this->transparent = transparent;
	HX_STACK_LINE(192)
	bool tmp = (width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	if ((tmp)){
		HX_STACK_LINE(192)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(192)
		tmp1 = width;
	}
	HX_STACK_LINE(192)
	width = tmp1;
	HX_STACK_LINE(193)
	bool tmp2 = (height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	if ((tmp2)){
		HX_STACK_LINE(193)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(193)
		tmp3 = height;
	}
	HX_STACK_LINE(193)
	height = tmp3;
	HX_STACK_LINE(195)
	this->width = width;
	HX_STACK_LINE(196)
	this->height = height;
	HX_STACK_LINE(197)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	this->rect = tmp4;
	HX_STACK_LINE(199)
	bool tmp5 = (width > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(199)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(199)
	if ((tmp5)){
		HX_STACK_LINE(199)
		tmp6 = (height > (int)0);
	}
	else{
		HX_STACK_LINE(199)
		tmp6 = false;
	}
	HX_STACK_LINE(199)
	if ((tmp6)){
		HX_STACK_LINE(201)
		bool tmp7 = transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		if ((tmp7)){
			HX_STACK_LINE(203)
			int tmp8 = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			if ((tmp10)){
				HX_STACK_LINE(205)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(211)
			int tmp8 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(211)
			int tmp10 = (int((int)-16777216) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(211)
			fillColor = tmp10;
		}
		HX_STACK_LINE(215)
		int tmp8 = (int(fillColor) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		int tmp10 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(215)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(215)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(215)
		int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(215)
		fillColor = tmp14;
		HX_STACK_LINE(218)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			int tmp16 = (width * height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(218)
			int tmp17 = (tmp16 * (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(218)
			Dynamic elements = tmp17;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(218)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(218)
			bool tmp18 = (elements != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(218)
			if ((tmp18)){
				HX_STACK_LINE(218)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(218)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(218)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(218)
				if ((tmp19)){
					HX_STACK_LINE(218)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(218)
					{
						HX_STACK_LINE(218)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(218)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(218)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(218)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(218)
						_this->length = tmp22;
						HX_STACK_LINE(218)
						int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(218)
						_this->byteLength = tmp23;
						HX_STACK_LINE(218)
						::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(218)
						{
							HX_STACK_LINE(218)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(218)
							int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(218)
							::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(218)
							this2 = tmp26;
							HX_STACK_LINE(218)
							tmp24 = this2;
						}
						HX_STACK_LINE(218)
						_this->buffer = tmp24;
						HX_STACK_LINE(218)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(218)
						tmp20 = _this;
					}
					HX_STACK_LINE(218)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(218)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(218)
					if ((tmp20)){
						HX_STACK_LINE(218)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(218)
						{
							HX_STACK_LINE(218)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(218)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(218)
							::haxe::io::Bytes tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(218)
							::haxe::io::Bytes srcData = tmp23;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(218)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(218)
							int srcLength = tmp24;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(218)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(218)
							int srcByteOffset = tmp25;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(218)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(218)
							int srcElementSize = tmp26;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(218)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(218)
							int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(218)
							int tmp28 = _this->type;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(218)
							bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(218)
							if ((tmp29)){
								HX_STACK_LINE(218)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(218)
								int tmp30 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(218)
								int cloneLength = tmp30;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(218)
								::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(218)
								{
									HX_STACK_LINE(218)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(218)
									int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(218)
									::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(218)
									this2 = tmp33;
									HX_STACK_LINE(218)
									tmp31 = this2;
								}
								HX_STACK_LINE(218)
								_this->buffer = tmp31;
								HX_STACK_LINE(218)
								::haxe::io::Bytes tmp32 = srcData;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(218)
								int tmp33 = srcByteOffset;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(218)
								int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(218)
								_this->buffer->blit((int)0,tmp32,tmp33,tmp34);
							}
							else{
								HX_STACK_LINE(218)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(218)
							int tmp30 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(218)
							_this->byteLength = tmp30;
							HX_STACK_LINE(218)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(218)
							_this->length = srcLength;
							HX_STACK_LINE(218)
							tmp21 = _this;
						}
						HX_STACK_LINE(218)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(218)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(218)
						if ((tmp21)){
							HX_STACK_LINE(218)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(218)
							{
								HX_STACK_LINE(218)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(218)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(218)
								bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(218)
								if ((tmp24)){
									HX_STACK_LINE(218)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(218)
								int tmp25 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(218)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(218)
								if ((tmp26)){
									HX_STACK_LINE(218)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(218)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(218)
								int bufferByteLength = tmp27;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(218)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(218)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(218)
								bool tmp28 = true;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(218)
								if ((tmp28)){
									HX_STACK_LINE(218)
									int tmp29 = bufferByteLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(218)
									newByteLength = tmp29;
									HX_STACK_LINE(218)
									int tmp30 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(218)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(218)
									if ((tmp31)){
										HX_STACK_LINE(218)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(218)
									bool tmp32 = (newByteLength < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(218)
									if ((tmp32)){
										HX_STACK_LINE(218)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(218)
									int tmp29 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(218)
									newByteLength = tmp29;
									HX_STACK_LINE(218)
									int tmp30 = newByteLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(218)
									int newRange = tmp30;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(218)
									bool tmp31 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(218)
									if ((tmp31)){
										HX_STACK_LINE(218)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(218)
								_this->buffer = null();
								HX_STACK_LINE(218)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(218)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(218)
								Float tmp29 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(218)
								int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(218)
								_this->length = tmp30;
								HX_STACK_LINE(218)
								tmp22 = _this;
							}
							HX_STACK_LINE(218)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(218)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(218)
			tmp15 = this1;
		}
		HX_STACK_LINE(218)
		int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(218)
		int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(218)
		::lime::graphics::ImageBuffer tmp18 = ::lime::graphics::ImageBuffer_obj::__new(tmp15,tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(218)
		::lime::graphics::ImageBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(219)
		buffer->format = (int)2;
		HX_STACK_LINE(220)
		buffer->premultiplied = true;
		HX_STACK_LINE(222)
		::lime::graphics::Image tmp19 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(222)
		this->image = tmp19;
		HX_STACK_LINE(224)
		bool tmp20 = (fillColor != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(224)
		if ((tmp20)){
			HX_STACK_LINE(226)
			::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(226)
			::lime::graphics::Image tmp22 = this->image;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(226)
			::lime::math::Rectangle tmp23 = tmp22->get_rect();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(226)
			int tmp24 = fillColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(226)
			tmp21->fillRect(tmp23,tmp24,null());
		}
		HX_STACK_LINE(233)
		::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(233)
		bool tmp22 = transparent;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(233)
		tmp21->set_transparent(tmp22);
		HX_STACK_LINE(234)
		this->__isValid = true;
	}
	HX_STACK_LINE(238)
	this->__createUVs();
	HX_STACK_LINE(240)
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(240)
	this->__worldTransform = tmp7;
	HX_STACK_LINE(241)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(241)
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",271,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(273)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		if ((tmp4)){
			HX_STACK_LINE(273)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(273)
			tmp5 = true;
		}
		HX_STACK_LINE(273)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(273)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(273)
		if ((tmp6)){
			HX_STACK_LINE(273)
			bool tmp8 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(273)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(273)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(273)
			tmp7 = true;
		}
		HX_STACK_LINE(273)
		if ((tmp7)){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(286)
		::lime::graphics::Image tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		tmp8->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",295,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	if ((tmp1)){
		HX_STACK_LINE(299)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(299)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(299)
		return tmp5;
	}
	else{
		HX_STACK_LINE(303)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(303)
		::lime::graphics::Image tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(303)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::fromImage(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		return tmp5;
	}
	HX_STACK_LINE(297)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",317,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(319)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		if ((tmp1)){
			HX_STACK_LINE(319)
			return null();
		}
		HX_STACK_LINE(321)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		::lime::utils::ArrayBufferView tmp4 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		tmp2->colorTransform(tmp3,tmp4);
		HX_STACK_LINE(322)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Dynamic BitmapData_obj::compare( ::openfl::display::BitmapData otherBitmapData){
	HX_STACK_FRAME("openfl.display.BitmapData","compare",0x56d287da,"openfl.display.BitmapData.compare","openfl/display/BitmapData.hx",337,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherBitmapData,"otherBitmapData")
	HX_STACK_LINE(339)
	bool tmp = (otherBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	if ((tmp)){
		HX_STACK_LINE(341)
		return (int)0;
	}
	else{
		HX_STACK_LINE(343)
		bool tmp1 = (otherBitmapData == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		if ((tmp1)){
			HX_STACK_LINE(345)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(347)
			bool tmp2 = this->__isValid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(347)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(347)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(347)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(347)
			if ((tmp4)){
				HX_STACK_LINE(347)
				tmp5 = (otherBitmapData->__isValid == false);
			}
			else{
				HX_STACK_LINE(347)
				tmp5 = true;
			}
			HX_STACK_LINE(347)
			if ((tmp5)){
				HX_STACK_LINE(349)
				return (int)-2;
			}
			else{
				HX_STACK_LINE(351)
				int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(351)
				int tmp7 = otherBitmapData->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(351)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(351)
				if ((tmp8)){
					HX_STACK_LINE(353)
					return (int)-3;
				}
				else{
					HX_STACK_LINE(355)
					int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(355)
					int tmp10 = otherBitmapData->height;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(355)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(355)
					if ((tmp11)){
						HX_STACK_LINE(357)
						return (int)-4;
					}
				}
			}
		}
	}
	HX_STACK_LINE(361)
	::lime::graphics::Image tmp1 = this->image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(361)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(361)
	if ((tmp3)){
		HX_STACK_LINE(361)
		tmp4 = (otherBitmapData->image != null());
	}
	else{
		HX_STACK_LINE(361)
		tmp4 = false;
	}
	HX_STACK_LINE(361)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(361)
	if ((tmp4)){
		HX_STACK_LINE(361)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		::lime::graphics::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		int tmp8 = tmp7->get_format();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(361)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(361)
		int tmp10 = otherBitmapData->image->get_format();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(361)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(361)
		tmp5 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(361)
		tmp5 = false;
	}
	HX_STACK_LINE(361)
	if ((tmp5)){
		HX_STACK_LINE(363)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		::lime::utils::ArrayBufferView tmp7 = tmp6->get_data();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(363)
		::lime::utils::ArrayBufferView bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(364)
		::lime::utils::ArrayBufferView tmp8 = otherBitmapData->image->get_data();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(364)
		::lime::utils::ArrayBufferView otherBytes = tmp8;		HX_STACK_VAR(otherBytes,"otherBytes");
		HX_STACK_LINE(365)
		bool equal = true;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(367)
			int tmp9 = bytes->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(367)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(367)
			while((true)){
				HX_STACK_LINE(367)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(367)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(367)
				if ((tmp11)){
					HX_STACK_LINE(367)
					break;
				}
				HX_STACK_LINE(367)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(367)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(369)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(369)
				{
					HX_STACK_LINE(369)
					int tmp14 = ::__hxcpp_memory_get_byte(bytes->buffer->b,(bytes->byteOffset + i));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(369)
					Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(369)
					int a = tmp15;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(369)
					int tmp16 = ::__hxcpp_memory_get_byte(otherBytes->buffer->b,(otherBytes->byteOffset + i));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(369)
					Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(369)
					Dynamic b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(369)
					tmp13 = (a != b);
				}
				HX_STACK_LINE(369)
				if ((tmp13)){
					HX_STACK_LINE(371)
					equal = false;
					HX_STACK_LINE(372)
					break;
				}
			}
		}
		HX_STACK_LINE(377)
		bool tmp9 = equal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(377)
		if ((tmp9)){
			HX_STACK_LINE(379)
			return (int)0;
		}
	}
	HX_STACK_LINE(385)
	::openfl::display::BitmapData bitmapData = null();		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(386)
	bool foundDifference;		HX_STACK_VAR(foundDifference,"foundDifference");
	HX_STACK_LINE(386)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(386)
	int otherPixel;		HX_STACK_VAR(otherPixel,"otherPixel");
	HX_STACK_LINE(386)
	int comparePixel;		HX_STACK_VAR(comparePixel,"comparePixel");
	HX_STACK_LINE(386)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(386)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(386)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(386)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(388)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(388)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(388)
		while((true)){
			HX_STACK_LINE(388)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(388)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(388)
			if ((tmp8)){
				HX_STACK_LINE(388)
				break;
			}
			HX_STACK_LINE(388)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(388)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(390)
				int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				int _g2 = tmp10;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(390)
				while((true)){
					HX_STACK_LINE(390)
					bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(390)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(390)
					if ((tmp12)){
						HX_STACK_LINE(390)
						break;
					}
					HX_STACK_LINE(390)
					int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(390)
					int x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(392)
					foundDifference = false;
					HX_STACK_LINE(394)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(394)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					pixel = tmp16;
					HX_STACK_LINE(395)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(395)
					int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(395)
					int tmp19 = otherBitmapData->getPixel32(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(395)
					otherPixel = tmp19;
					HX_STACK_LINE(396)
					comparePixel = (int)0;
					HX_STACK_LINE(398)
					bool tmp20 = (pixel != otherPixel);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(398)
					if ((tmp20)){
						HX_STACK_LINE(400)
						int tmp21 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(400)
						int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(400)
						int tmp23 = (int(otherPixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(400)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(400)
						int tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(400)
						r = tmp25;
						HX_STACK_LINE(401)
						int tmp26 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(401)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(401)
						int tmp28 = (int(otherPixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(401)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(401)
						int tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(401)
						g = tmp30;
						HX_STACK_LINE(402)
						int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(402)
						int tmp32 = (int(otherPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(402)
						int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(402)
						b = tmp33;
						HX_STACK_LINE(404)
						bool tmp34 = (r < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(404)
						if ((tmp34)){
							HX_STACK_LINE(404)
							hx::MultEq(r,(int)-1);
						}
						HX_STACK_LINE(405)
						bool tmp35 = (g < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(405)
						if ((tmp35)){
							HX_STACK_LINE(405)
							hx::MultEq(g,(int)-1);
						}
						HX_STACK_LINE(406)
						bool tmp36 = (b < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(406)
						if ((tmp36)){
							HX_STACK_LINE(406)
							hx::MultEq(b,(int)-1);
						}
						HX_STACK_LINE(408)
						bool tmp37 = (r == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(408)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(408)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(408)
						if ((tmp38)){
							HX_STACK_LINE(408)
							tmp39 = (g == (int)0);
						}
						else{
							HX_STACK_LINE(408)
							tmp39 = false;
						}
						HX_STACK_LINE(408)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(408)
						if ((tmp39)){
							HX_STACK_LINE(408)
							tmp40 = (b == (int)0);
						}
						else{
							HX_STACK_LINE(408)
							tmp40 = false;
						}
						HX_STACK_LINE(408)
						if ((tmp40)){
							HX_STACK_LINE(410)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(410)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(410)
							int tmp43 = (int(otherPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(410)
							int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(410)
							int tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(410)
							a = tmp45;
							HX_STACK_LINE(412)
							bool tmp46 = (a != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(412)
							if ((tmp46)){
								HX_STACK_LINE(414)
								{
									HX_STACK_LINE(414)
									{
										HX_STACK_LINE(414)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(414)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(414)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(414)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(414)
										int tmp51 = (int)255;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(414)
										int tmp52 = (int(tmp51) << int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(414)
										int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(414)
										int tmp54 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(414)
										int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(414)
										int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(414)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(414)
										int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(414)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(414)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(414)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(414)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(414)
									(int)255;
								}
								HX_STACK_LINE(415)
								{
									HX_STACK_LINE(415)
									{
										HX_STACK_LINE(415)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(415)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(415)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(415)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(415)
										int tmp51 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(415)
										int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(415)
										int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(415)
										int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(415)
										int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(415)
										int tmp56 = (int)255;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(415)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(415)
										int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(415)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(415)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(415)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(415)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(415)
									(int)255;
								}
								HX_STACK_LINE(416)
								{
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(416)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(416)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(416)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(416)
										int tmp51 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(416)
										int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(416)
										int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(416)
										int tmp56 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(416)
										int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(416)
										int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(416)
										int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(416)
										int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(416)
										int tmp61 = (int)255;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(416)
										int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(416)
										comparePixel = tmp62;
									}
									HX_STACK_LINE(416)
									(int)255;
								}
								HX_STACK_LINE(417)
								{
									HX_STACK_LINE(417)
									{
										HX_STACK_LINE(417)
										int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(417)
										int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(417)
										int tmp49 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(417)
										int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(417)
										int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(417)
										int tmp52 = (int(tmp51) << int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(417)
										int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(417)
										int tmp54 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(417)
										int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(417)
										int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(417)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(417)
										int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(417)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(417)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(417)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(417)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(417)
									a;
								}
								HX_STACK_LINE(419)
								foundDifference = true;
							}
						}
						else{
							HX_STACK_LINE(425)
							{
								HX_STACK_LINE(425)
								{
									HX_STACK_LINE(425)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(425)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(425)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(425)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(425)
									int tmp45 = (int(r) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(425)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(425)
									int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(425)
									int tmp48 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(425)
									int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(425)
									int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(425)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(425)
									int tmp52 = (int(tmp47) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(425)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(425)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(425)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(425)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(425)
								r;
							}
							HX_STACK_LINE(426)
							{
								HX_STACK_LINE(426)
								{
									HX_STACK_LINE(426)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(426)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(426)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(426)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(426)
									int tmp45 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(426)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(426)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(426)
									int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(426)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(426)
									int tmp50 = (int(g) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(426)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(426)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(426)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(426)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(426)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(426)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(426)
								g;
							}
							HX_STACK_LINE(427)
							{
								HX_STACK_LINE(427)
								{
									HX_STACK_LINE(427)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(427)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(427)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(427)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(427)
									int tmp45 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(427)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(427)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(427)
									int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(427)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(427)
									int tmp50 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(427)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(427)
									int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(427)
									int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(427)
									int tmp54 = (int(tmp49) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(427)
									int tmp55 = (int(b) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(427)
									int tmp56 = (int(tmp54) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(427)
									comparePixel = tmp56;
								}
								HX_STACK_LINE(427)
								b;
							}
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									int tmp41 = (int)255;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(428)
									int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(428)
									int tmp43 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(428)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(428)
									int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(428)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(428)
									int tmp47 = (int(tmp42) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(428)
									int tmp48 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(428)
									int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(428)
									int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(428)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(428)
									int tmp52 = (int(tmp47) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(428)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(428)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(428)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(428)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(428)
								(int)255;
							}
							HX_STACK_LINE(430)
							foundDifference = true;
						}
					}
					HX_STACK_LINE(436)
					bool tmp21 = foundDifference;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(436)
					if ((tmp21)){
						HX_STACK_LINE(438)
						bool tmp22 = (bitmapData == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(438)
						if ((tmp22)){
							HX_STACK_LINE(440)
							int tmp23 = this->width;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(440)
							int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(440)
							bool tmp25 = this->transparent;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(440)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(440)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(440)
							if ((tmp26)){
								HX_STACK_LINE(440)
								tmp27 = otherBitmapData->transparent;
							}
							else{
								HX_STACK_LINE(440)
								tmp27 = true;
							}
							HX_STACK_LINE(440)
							::openfl::display::BitmapData tmp28 = ::openfl::display::BitmapData_obj::__new(tmp23,tmp24,tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(440)
							bitmapData = tmp28;
						}
						HX_STACK_LINE(444)
						int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(444)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(444)
						int tmp25 = comparePixel;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(444)
						bitmapData->setPixel32(tmp23,tmp24,tmp25);
					}
				}
			}
		}
	}
	HX_STACK_LINE(452)
	bool tmp6 = (bitmapData == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(452)
	if ((tmp6)){
		HX_STACK_LINE(454)
		return (int)0;
	}
	HX_STACK_LINE(458)
	::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(458)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,compare,return )

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",506,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(508)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(508)
		if ((tmp1)){
			HX_STACK_LINE(508)
			return null();
		}
		HX_STACK_LINE(510)
		int tmp2 = sourceChannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		::lime::graphics::ImageChannel tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(510)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(512)
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(513)
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(514)
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(515)
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(516)
				return null();
			}
		}
		HX_STACK_LINE(510)
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(520)
		int tmp4 = destChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(520)
		::lime::graphics::ImageChannel tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(522)
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(523)
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(524)
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(525)
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(526)
				return null();
			}
		}
		HX_STACK_LINE(520)
		::lime::graphics::ImageChannel destChannel1 = tmp5;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(530)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(530)
		::lime::graphics::Image tmp7 = sourceBitmapData->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(530)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(530)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(530)
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(530)
		::lime::graphics::ImageChannel tmp11 = destChannel1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(530)
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(531)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",575,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(577)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(577)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(577)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(577)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(577)
		if ((tmp3)){
			HX_STACK_LINE(577)
			tmp4 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(577)
			tmp4 = true;
		}
		HX_STACK_LINE(577)
		if ((tmp4)){
			HX_STACK_LINE(577)
			return null();
		}
		HX_STACK_LINE(579)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		::lime::graphics::Image tmp6 = sourceBitmapData->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(579)
		::lime::math::Rectangle tmp7 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(579)
		::lime::math::Vector2 tmp8 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(579)
		bool tmp9 = (alphaBitmapData != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(579)
		::lime::graphics::Image tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(579)
		if ((tmp9)){
			HX_STACK_LINE(579)
			tmp10 = alphaBitmapData->image;
		}
		else{
			HX_STACK_LINE(579)
			tmp10 = null();
		}
		HX_STACK_LINE(579)
		bool tmp11 = (alphaPoint != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(579)
		::lime::math::Vector2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(579)
		if ((tmp11)){
			HX_STACK_LINE(579)
			tmp12 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(579)
			tmp12 = null();
		}
		HX_STACK_LINE(579)
		bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(579)
		tmp5->copyPixels(tmp6,tmp7,tmp8,tmp10,tmp12,tmp13);
		HX_STACK_LINE(580)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",604,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(606)
		this->image = null();
		HX_STACK_LINE(608)
		this->width = (int)0;
		HX_STACK_LINE(609)
		this->height = (int)0;
		HX_STACK_LINE(610)
		this->rect = null();
		HX_STACK_LINE(611)
		this->__isValid = false;
		HX_STACK_LINE(613)
		::lime::graphics::opengl::GLTexture tmp = this->__texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		if ((tmp1)){
			HX_STACK_LINE(615)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(615)
			::openfl::_internal::renderer::AbstractRenderer tmp3 = tmp2->stage->__renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(615)
			::openfl::_internal::renderer::AbstractRenderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(617)
			bool tmp4 = (renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(617)
			if ((tmp4)){
				HX_STACK_LINE(619)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(620)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(622)
				bool tmp5 = (gl != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				if ((tmp5)){
					HX_STACK_LINE(624)
					{
						HX_STACK_LINE(624)
						::lime::graphics::opengl::GLTexture tmp6 = this->__texture;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(624)
						::lime::graphics::opengl::GLTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(624)
						{
							HX_STACK_LINE(624)
							{
								HX_STACK_LINE(624)
								int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
								HX_STACK_LINE(624)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
							}
							HX_STACK_LINE(624)
							texture->invalidate();
						}
					}
					HX_STACK_LINE(625)
					this->__texture = null();
				}
			}
		}
		HX_STACK_LINE(633)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp2 = this->__framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(633)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(633)
		if ((tmp3)){
			HX_STACK_LINE(635)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(635)
			tmp4->destroy();
			HX_STACK_LINE(636)
			this->__framebuffer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",715,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(717)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(717)
		if ((tmp1)){
			HX_STACK_LINE(717)
			return null();
		}
		HX_STACK_LINE(787)
		bool tmp2 = (colorTransform != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(787)
		if ((tmp2)){
			HX_STACK_LINE(789)
			::openfl::display::IBitmapDrawable tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(789)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp3,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(789)
			::openfl::display::IBitmapDrawable tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(789)
			Dynamic tmp6 = ::Reflect_obj::getProperty(tmp5,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(789)
			::openfl::display::BitmapData tmp7 = ::openfl::display::BitmapData_obj::__new(tmp4,tmp6,true,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(789)
			::openfl::display::BitmapData copy = tmp7;		HX_STACK_VAR(copy,"copy");
			HX_STACK_LINE(790)
			::openfl::display::IBitmapDrawable tmp8 = source;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(790)
			copy->draw(tmp8,null(),null(),null(),null(),null());
			HX_STACK_LINE(791)
			::openfl::geom::Rectangle tmp9 = copy->rect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(791)
			::openfl::geom::ColorTransform tmp10 = colorTransform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(791)
			copy->colorTransform(tmp9,tmp10);
			HX_STACK_LINE(792)
			source = copy;
		}
		HX_STACK_LINE(799)
		Dynamic tmp3 = this->getSurface();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(799)
		Dynamic surface = tmp3;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(800)
		::lime::graphics::cairo::Cairo tmp4 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(800)
		::lime::graphics::cairo::Cairo cairo = tmp4;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(802)
		bool tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(802)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(802)
		if ((tmp6)){
			HX_STACK_LINE(804)
			cairo->set_antialias((int)1);
		}
		HX_STACK_LINE(808)
		::openfl::_internal::renderer::RenderSession tmp7 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(808)
		::openfl::_internal::renderer::RenderSession renderSession = tmp7;		HX_STACK_VAR(renderSession,"renderSession");
		HX_STACK_LINE(809)
		renderSession->cairo = cairo;
		HX_STACK_LINE(810)
		renderSession->roundPixels = true;
		HX_STACK_LINE(811)
		::openfl::_internal::renderer::cairo::CairoMaskManager tmp8 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(811)
		renderSession->maskManager = tmp8;
		HX_STACK_LINE(813)
		bool tmp9 = (clipRect != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(813)
		if ((tmp9)){
			HX_STACK_LINE(815)
			::openfl::geom::Rectangle tmp10 = clipRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(815)
			::openfl::geom::Matrix tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(815)
			renderSession->maskManager->pushRect(tmp10,tmp11);
		}
		HX_STACK_LINE(819)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(820)
		bool tmp10 = (matrix != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(820)
		::openfl::geom::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(820)
		if ((tmp10)){
			HX_STACK_LINE(820)
			tmp11 = matrix;
		}
		else{
			HX_STACK_LINE(820)
			tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(820)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = tmp11;
		HX_STACK_LINE(821)
		source->__updateChildren(false);
		HX_STACK_LINE(822)
		::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(822)
		source->__renderCairo(tmp12);
		HX_STACK_LINE(823)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = matrixCache;
		HX_STACK_LINE(824)
		source->__updateChildren(true);
		HX_STACK_LINE(826)
		bool tmp13 = (clipRect != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(826)
		if ((tmp13)){
			HX_STACK_LINE(828)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(832)
		Dynamic tmp14 = surface;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(832)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp14);
		HX_STACK_LINE(834)
		::lime::graphics::Image tmp15 = this->image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(834)
		tmp15->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",841,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(845)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(845)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(845)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(845)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(845)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(845)
	if ((tmp3)){
		HX_STACK_LINE(845)
		tmp4 = (rect == null());
	}
	else{
		HX_STACK_LINE(845)
		tmp4 = true;
	}
	HX_STACK_LINE(845)
	if ((tmp4)){
		HX_STACK_LINE(845)
		::lime::utils::ByteArray tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(845)
		return tmp5;
	}
	HX_STACK_LINE(847)
	Dynamic tmp5 = compressor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(847)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(847)
	if ((tmp6)){
		HX_STACK_LINE(849)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(849)
		::lime::utils::ByteArray tmp8 = tmp7->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(849)
		::lime::utils::ByteArray tmp9 = byteArray = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(849)
		return tmp9;
	}
	else{
		HX_STACK_LINE(851)
		Dynamic tmp7 = compressor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(851)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(851)
		if ((tmp8)){
			HX_STACK_LINE(853)
			::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(853)
			::openfl::display::JPEGEncoderOptions tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(853)
			tmp10 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			HX_STACK_LINE(853)
			int tmp11 = tmp10->quality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(853)
			::lime::utils::ByteArray tmp12 = tmp9->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(853)
			::lime::utils::ByteArray tmp13 = byteArray = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(853)
			return tmp13;
		}
	}
	HX_STACK_LINE(857)
	::lime::utils::ByteArray tmp7 = byteArray = null();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(857)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",871,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(873)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(873)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(873)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(873)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(873)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(873)
		if ((tmp3)){
			HX_STACK_LINE(873)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(873)
			tmp4 = true;
		}
		HX_STACK_LINE(873)
		if ((tmp4)){
			HX_STACK_LINE(873)
			return null();
		}
		HX_STACK_LINE(874)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(874)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(874)
		int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(874)
		tmp5->fillRect(tmp6,tmp7,(int)1);
		HX_STACK_LINE(875)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",891,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(893)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		if ((tmp1)){
			HX_STACK_LINE(893)
			return null();
		}
		HX_STACK_LINE(894)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(894)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(894)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(894)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(894)
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(895)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",980,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(982)
	::openfl::geom::Rectangle tmp = sourceRect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",987,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(989)
	::lime::graphics::opengl::GLBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(989)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(989)
	if ((tmp1)){
		HX_STACK_LINE(993)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(993)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(994)
		int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(995)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(991)
		Array< int > data = Array_obj< int >::__new().Add(tmp2).Add(tmp3).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(tmp4).Add((int)0).Add((int)0).Add((int)1).Add(tmp5).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1000)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1000)
		::lime::graphics::opengl::GLBuffer tmp7 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp6,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1000)
		this->__buffer = tmp7;
		HX_STACK_LINE(1001)
		{
			HX_STACK_LINE(1001)
			::lime::graphics::opengl::GLBuffer tmp8 = this->__buffer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1001)
			::lime::graphics::opengl::GLBuffer buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1001)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1002)
		{
			HX_STACK_LINE(1002)
			::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1002)
			{
				HX_STACK_LINE(1002)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1002)
				bool tmp9 = (data != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1002)
				if ((tmp9)){
					HX_STACK_LINE(1002)
					::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1002)
					{
						HX_STACK_LINE(1002)
						::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1002)
						::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1002)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(1002)
						_this->length = data->length;
						HX_STACK_LINE(1002)
						int tmp12 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1002)
						_this->byteLength = tmp12;
						HX_STACK_LINE(1002)
						::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1002)
						{
							HX_STACK_LINE(1002)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(1002)
							int tmp14 = _this->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1002)
							::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1002)
							this2 = tmp15;
							HX_STACK_LINE(1002)
							tmp13 = this2;
						}
						HX_STACK_LINE(1002)
						_this->buffer = tmp13;
						HX_STACK_LINE(1002)
						_this->copyFromArray(((Array< Float >)(data)),null());
						HX_STACK_LINE(1002)
						tmp10 = _this;
					}
					HX_STACK_LINE(1002)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(1002)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(1002)
				tmp8 = this1;
			}
			HX_STACK_LINE(1002)
			::lime::utils::ArrayBufferView data1 = tmp8;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(1002)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ARRAY_BUFFER,hx::DynamicPtr(data1->buffer),data1->byteOffset,data1->byteLength,gl->STATIC_DRAW);
		}
		HX_STACK_LINE(1003)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(int)0);
	}
	HX_STACK_LINE(1007)
	::lime::graphics::opengl::GLBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1007)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",1046,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(1048)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1048)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1048)
		if ((tmp1)){
			HX_STACK_LINE(1048)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1048)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1048)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1048)
			return tmp4;
		}
		HX_STACK_LINE(1050)
		int color1 = color;		HX_STACK_VAR(color1,"color1");
		HX_STACK_LINE(1051)
		int tmp2 = (int(color1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1051)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1051)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1051)
		if ((tmp4)){
			HX_STACK_LINE(1051)
			color1 = (int)0;
		}
		HX_STACK_LINE(1053)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1053)
		int tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1053)
		int tmp7 = color1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1053)
		bool tmp8 = findColor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1053)
		::lime::math::Rectangle tmp9 = tmp5->getColorBoundsRect(tmp6,tmp7,tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1053)
		::lime::math::Rectangle rect = tmp9;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1054)
		::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1054)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",1082,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1084)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1084)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1084)
	if ((tmp1)){
		HX_STACK_LINE(1084)
		return (int)0;
	}
	HX_STACK_LINE(1085)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1085)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1085)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1085)
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1085)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",1112,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1114)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1114)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1114)
	if ((tmp1)){
		HX_STACK_LINE(1114)
		return (int)0;
	}
	HX_STACK_LINE(1115)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1115)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1115)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1115)
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1115)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",1129,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1131)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1131)
	if ((tmp1)){
		HX_STACK_LINE(1131)
		return null();
	}
	HX_STACK_LINE(1132)
	bool tmp2 = (rect == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1132)
	if ((tmp2)){
		HX_STACK_LINE(1132)
		::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1132)
		rect = tmp3;
	}
	HX_STACK_LINE(1133)
	::lime::graphics::Image tmp3 = this->image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1133)
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1133)
	::lime::utils::ByteArray tmp5 = tmp3->getPixels(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1133)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",1138,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1140)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1140)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1140)
	if ((tmp1)){
		HX_STACK_LINE(1140)
		return null();
	}
	HX_STACK_LINE(1142)
	Dynamic tmp2 = this->__surface;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1142)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1142)
	if ((tmp3)){
		HX_STACK_LINE(1144)
		::lime::graphics::Image tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1144)
		Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::fromImage(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1144)
		this->__surface = tmp5;
	}
	HX_STACK_LINE(1148)
	Dynamic tmp4 = this->__surface;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1148)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",1153,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(1155)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1155)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1155)
	if ((tmp1)){
		HX_STACK_LINE(1155)
		return null();
	}
	HX_STACK_LINE(1157)
	bool tmp2 = this->__usingFramebuffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1157)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1157)
	if ((tmp2)){
		HX_STACK_LINE(1157)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1157)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1157)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(1157)
		tmp3 = false;
	}
	HX_STACK_LINE(1157)
	if ((tmp3)){
		HX_STACK_LINE(1158)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1158)
		::lime::graphics::opengl::GLTexture tmp5 = tmp4->texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1158)
		return tmp5;
	}
	HX_STACK_LINE(1161)
	::lime::graphics::opengl::GLTexture tmp4 = this->__texture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1161)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1161)
	if ((tmp5)){
		HX_STACK_LINE(1163)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1163)
		::lime::graphics::opengl::GLTexture tmp7 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp6,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1163)
		this->__texture = tmp7;
		HX_STACK_LINE(1164)
		{
			HX_STACK_LINE(1164)
			::lime::graphics::opengl::GLTexture tmp8 = this->__texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1164)
			::lime::graphics::opengl::GLTexture texture = tmp8;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1164)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1165)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(1166)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(1167)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
		HX_STACK_LINE(1168)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		HX_STACK_LINE(1169)
		::lime::graphics::Image tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1169)
		tmp8->dirty = true;
	}
	HX_STACK_LINE(1173)
	::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1173)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1173)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1173)
	if ((tmp7)){
		HX_STACK_LINE(1173)
		::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1173)
		::lime::graphics::Image tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1173)
		tmp8 = tmp10->dirty;
	}
	else{
		HX_STACK_LINE(1173)
		tmp8 = false;
	}
	HX_STACK_LINE(1173)
	if ((tmp8)){
		HX_STACK_LINE(1175)
		int internalFormat;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(1175)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(1177)
		Dynamic tmp9 = this->__surface;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1177)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1177)
		if ((tmp10)){
			HX_STACK_LINE(1179)
			Dynamic tmp11 = this->__surface;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1179)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp11);
		}
		HX_STACK_LINE(1183)
		::lime::graphics::Image tmp11 = this->image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1183)
		int tmp12 = tmp11->buffer->bitsPerPixel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1183)
		bool tmp13 = (tmp12 == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1183)
		if ((tmp13)){
			HX_STACK_LINE(1185)
			internalFormat = gl->ALPHA;
			HX_STACK_LINE(1186)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(1191)
			internalFormat = gl->RGBA;
			HX_STACK_LINE(1192)
			format = gl->BGRA_EXT;
		}
		HX_STACK_LINE(1203)
		{
			HX_STACK_LINE(1203)
			::lime::graphics::opengl::GLTexture tmp14 = this->__texture;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1203)
			::lime::graphics::opengl::GLTexture texture = tmp14;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1203)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1205)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1205)
		::lime::graphics::Image textureImage = tmp14;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(1207)
		bool tmp15 = textureImage->get_premultiplied();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1207)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1207)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1207)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1207)
		if ((tmp17)){
			HX_STACK_LINE(1207)
			tmp18 = textureImage->get_transparent();
		}
		else{
			HX_STACK_LINE(1207)
			tmp18 = false;
		}
		HX_STACK_LINE(1207)
		if ((tmp18)){
			HX_STACK_LINE(1209)
			::lime::graphics::Image tmp19 = textureImage->clone();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1209)
			textureImage = tmp19;
			HX_STACK_LINE(1213)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(1217)
		{
			HX_STACK_LINE(1217)
			::lime::utils::ArrayBufferView tmp19 = textureImage->get_data();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1217)
			::lime::utils::ArrayBufferView pixels = tmp19;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1217)
			{
				HX_STACK_LINE(1217)
				bool tmp20 = (pixels == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1217)
				::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1217)
				if ((tmp20)){
					HX_STACK_LINE(1217)
					tmp21 = null();
				}
				else{
					HX_STACK_LINE(1217)
					tmp21 = pixels->buffer;
				}
				HX_STACK_LINE(1217)
				::haxe::io::Bytes buffer = tmp21;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1217)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(gl->TEXTURE_2D,(int)0,internalFormat,this->width,this->height,(int)0,format,gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
			}
		}
		HX_STACK_LINE(1218)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(int)0);
		HX_STACK_LINE(1219)
		::lime::graphics::Image tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1219)
		tmp19->dirty = false;
	}
	HX_STACK_LINE(1223)
	::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1223)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",1237,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1239)
	::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1239)
	::lime::utils::ByteArray tmp1 = this->getPixels(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1239)
	::lime::utils::ByteArray pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1240)
	Float tmp2 = (Float(pixels->length) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1240)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1240)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(1241)
	Array< int > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1241)
	{
		HX_STACK_LINE(1241)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(1241)
		int tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1241)
		this1 = Array_obj< int >::__new()->__SetSizeExact(tmp5);
		HX_STACK_LINE(1241)
		tmp4 = this1;
	}
	HX_STACK_LINE(1241)
	Array< int > result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1243)
	{
		HX_STACK_LINE(1243)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1243)
		while((true)){
			HX_STACK_LINE(1243)
			bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1243)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1243)
			if ((tmp6)){
				HX_STACK_LINE(1243)
				break;
			}
			HX_STACK_LINE(1243)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1243)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1245)
			{
				HX_STACK_LINE(1245)
				int tmp8 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1245)
				int value = tmp8;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1245)
				int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1245)
				result[i] = tmp9;
			}
		}
	}
	HX_STACK_LINE(1249)
	Array< int > tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1249)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",1254,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(1256)
	bool tmp = (hRect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1256)
	::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1256)
	if ((tmp)){
		HX_STACK_LINE(1256)
		tmp1 = hRect;
	}
	else{
		HX_STACK_LINE(1256)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1256)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1256)
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	HX_STACK_LINE(1256)
	::openfl::geom::Rectangle rect = tmp1;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(1257)
	::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1257)
	::lime::utils::ByteArray tmp3 = this->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1257)
	::lime::utils::ByteArray pixels = tmp3;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1258)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1258)
	{
		HX_STACK_LINE(1258)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1258)
		{
			HX_STACK_LINE(1258)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1258)
			while((true)){
				HX_STACK_LINE(1258)
				bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1258)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1258)
				if ((tmp5)){
					HX_STACK_LINE(1258)
					break;
				}
				HX_STACK_LINE(1258)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1258)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static Array< int > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",1258,0xdd12d5b9)
						{
							HX_STACK_LINE(1258)
							Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1258)
							{
								HX_STACK_LINE(1258)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1258)
								while((true)){
									HX_STACK_LINE(1258)
									bool tmp7 = (_g3 < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(1258)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1258)
									if ((tmp8)){
										HX_STACK_LINE(1258)
										break;
									}
									HX_STACK_LINE(1258)
									int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1258)
									int j = tmp9;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1258)
									_g2->push((int)0);
								}
							}
							HX_STACK_LINE(1258)
							return _g2;
						}
						return null();
					}
				};
				HX_STACK_LINE(1258)
				_g->push(_Function_4_1::Block());
			}
		}
		HX_STACK_LINE(1258)
		result = _g;
	}
	HX_STACK_LINE(1260)
	{
		HX_STACK_LINE(1260)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1260)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1260)
		while((true)){
			HX_STACK_LINE(1260)
			bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1260)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1260)
			if ((tmp5)){
				HX_STACK_LINE(1260)
				break;
			}
			HX_STACK_LINE(1260)
			int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1260)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1262)
			int tmp7 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1262)
			bool tmp8 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1262)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1262)
			if ((tmp8)){
				HX_STACK_LINE(1262)
				int tmp10 = (pixels->position)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1262)
				int pos = tmp10;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1262)
				tmp9 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(1262)
				tmp9 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(1262)
			++(result->__get(tmp7).StaticCast< Array< int > >()[tmp9]);
		}
	}
	HX_STACK_LINE(1266)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",1271,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1273)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1273)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1273)
		if ((tmp1)){
			HX_STACK_LINE(1273)
			return false;
		}
		HX_STACK_LINE(1275)
		Dynamic tmp2 = secondObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1275)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display::Bitmap >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1275)
		if ((tmp3)){
			HX_STACK_LINE(1277)
			::openfl::display::Bitmap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1277)
			tmp4 = hx::TCast< ::openfl::display::Bitmap >::cast(secondObject);
			HX_STACK_LINE(1277)
			secondObject = tmp4->bitmapData;
		}
		HX_STACK_LINE(1281)
		Dynamic tmp4 = secondObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1281)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::geom::Point >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1281)
		if ((tmp5)){
			HX_STACK_LINE(1283)
			::openfl::geom::Point secondPoint = ((::openfl::geom::Point)(secondObject));		HX_STACK_VAR(secondPoint,"secondPoint");
			HX_STACK_LINE(1285)
			Float tmp6 = (secondPoint->x - firstPoint->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1285)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1285)
			int x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(1286)
			Float tmp8 = (secondPoint->y - firstPoint->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1286)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1286)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(1288)
			::openfl::geom::Rectangle tmp10 = this->rect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1288)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1288)
			int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1288)
			bool tmp13 = tmp10->contains(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1288)
			if ((tmp13)){
				HX_STACK_LINE(1290)
				int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1290)
				int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1290)
				int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1290)
				int pixel = tmp16;		HX_STACK_VAR(pixel,"pixel");
				HX_STACK_LINE(1292)
				int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1292)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1292)
				int tmp19 = firstAlphaThreshold;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1292)
				bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1292)
				if ((tmp20)){
					HX_STACK_LINE(1294)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(1300)
			Dynamic tmp6 = secondObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1300)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::BitmapData >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1300)
			if ((tmp7)){
				HX_STACK_LINE(1302)
				::openfl::display::BitmapData secondBitmapData = ((::openfl::display::BitmapData)(secondObject));		HX_STACK_VAR(secondBitmapData,"secondBitmapData");
				HX_STACK_LINE(1303)
				int x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1303)
				int y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1305)
				bool tmp8 = (secondBitmapDataPoint == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1305)
				if ((tmp8)){
					HX_STACK_LINE(1307)
					x = (int)0;
					HX_STACK_LINE(1308)
					y = (int)0;
				}
				else{
					HX_STACK_LINE(1312)
					Float tmp9 = (secondBitmapDataPoint->x - firstPoint->x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1312)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1312)
					x = tmp10;
					HX_STACK_LINE(1313)
					Float tmp11 = (secondBitmapDataPoint->y - firstPoint->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1313)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1313)
					y = tmp12;
				}
				HX_STACK_LINE(1317)
				::openfl::geom::Rectangle tmp9 = this->rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1317)
				int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1317)
				int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1317)
				bool tmp12 = tmp9->contains(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1317)
				if ((tmp12)){
					HX_STACK_LINE(1319)
					::openfl::geom::Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1319)
					::openfl::geom::Rectangle hitRect = tmp13;		HX_STACK_VAR(hitRect,"hitRect");
					HX_STACK_LINE(1320)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1320)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1320)
					int tmp16 = secondBitmapData->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1320)
					int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1320)
					int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1320)
					int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1320)
					Float tmp20 = ::Math_obj::min(tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1320)
					int tmp21 = secondBitmapData->height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1320)
					int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1320)
					int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1320)
					int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1320)
					Float tmp25 = ::Math_obj::min(tmp21,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1320)
					hitRect->setTo(tmp14,tmp15,tmp20,tmp25);
					HX_STACK_LINE(1322)
					::openfl::geom::Rectangle tmp26 = hitRect;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1322)
					::lime::utils::ByteArray tmp27 = this->getPixels(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1322)
					::lime::utils::ByteArray pixels = tmp27;		HX_STACK_VAR(pixels,"pixels");
					HX_STACK_LINE(1324)
					int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1324)
					int tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1324)
					int tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1324)
					int tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1324)
					hitRect->offset(tmp29,tmp31);
					HX_STACK_LINE(1325)
					::openfl::geom::Rectangle tmp32 = hitRect;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1325)
					::lime::utils::ByteArray tmp33 = secondBitmapData->getPixels(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1325)
					::lime::utils::ByteArray testPixels = tmp33;		HX_STACK_VAR(testPixels,"testPixels");
					HX_STACK_LINE(1327)
					Float tmp34 = (hitRect->width * hitRect->height);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1327)
					int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1327)
					int length = tmp35;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(1328)
					int pixel;		HX_STACK_VAR(pixel,"pixel");
					HX_STACK_LINE(1328)
					int testPixel;		HX_STACK_VAR(testPixel,"testPixel");
					HX_STACK_LINE(1330)
					{
						HX_STACK_LINE(1330)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1330)
						while((true)){
							HX_STACK_LINE(1330)
							bool tmp36 = (_g < length);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1330)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1330)
							if ((tmp37)){
								HX_STACK_LINE(1330)
								break;
							}
							HX_STACK_LINE(1330)
							int tmp38 = (_g)++;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1330)
							int i = tmp38;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1332)
							int tmp39 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1332)
							pixel = tmp39;
							HX_STACK_LINE(1333)
							int tmp40 = testPixels->readUnsignedInt();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1333)
							testPixel = tmp40;
							HX_STACK_LINE(1335)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1335)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1335)
							int tmp43 = firstAlphaThreshold;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1335)
							bool tmp44 = (tmp42 >= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1335)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1335)
							if ((tmp44)){
								HX_STACK_LINE(1335)
								int tmp46 = (int(testPixel) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1335)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1335)
								int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1335)
								int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1335)
								int tmp50 = secondAlphaThreshold;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1335)
								tmp45 = (tmp49 >= tmp50);
							}
							else{
								HX_STACK_LINE(1335)
								tmp45 = false;
							}
							HX_STACK_LINE(1335)
							if ((tmp45)){
								HX_STACK_LINE(1337)
								return true;
							}
						}
					}
					HX_STACK_LINE(1343)
					return false;
				}
			}
			else{
				HX_STACK_LINE(1347)
				Dynamic tmp8 = secondObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1347)
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::geom::Rectangle >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1347)
				if ((tmp9)){
					HX_STACK_LINE(1349)
					::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1349)
					::openfl::geom::Rectangle secondRectangle = tmp10;		HX_STACK_VAR(secondRectangle,"secondRectangle");
					HX_STACK_LINE(1350)
					::openfl::geom::Rectangle tmp11 = ((::openfl::geom::Rectangle)(secondObject));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1350)
					secondRectangle->copyFrom(tmp11);
					HX_STACK_LINE(1351)
					Float tmp12 = firstPoint->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1351)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1351)
					Float tmp14 = firstPoint->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1351)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1351)
					secondRectangle->offset(tmp13,tmp15);
					HX_STACK_LINE(1352)
					int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1352)
					int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1352)
					secondRectangle->__contract((int)0,(int)0,tmp16,tmp17);
					HX_STACK_LINE(1354)
					bool tmp18 = (secondRectangle->width > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1354)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1354)
					if ((tmp18)){
						HX_STACK_LINE(1354)
						tmp19 = (secondRectangle->height > (int)0);
					}
					else{
						HX_STACK_LINE(1354)
						tmp19 = false;
					}
					HX_STACK_LINE(1354)
					if ((tmp19)){
						HX_STACK_LINE(1356)
						::openfl::geom::Rectangle tmp20 = secondRectangle;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1356)
						::lime::utils::ByteArray tmp21 = this->getPixels(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1356)
						::lime::utils::ByteArray pixels = tmp21;		HX_STACK_VAR(pixels,"pixels");
						HX_STACK_LINE(1357)
						Float tmp22 = (Float(pixels->length) / Float((int)4));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1357)
						int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1357)
						int length = tmp23;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(1358)
						int pixel;		HX_STACK_VAR(pixel,"pixel");
						HX_STACK_LINE(1360)
						{
							HX_STACK_LINE(1360)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1360)
							while((true)){
								HX_STACK_LINE(1360)
								bool tmp24 = (_g < length);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1360)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1360)
								if ((tmp25)){
									HX_STACK_LINE(1360)
									break;
								}
								HX_STACK_LINE(1360)
								int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1360)
								int i = tmp26;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1362)
								int tmp27 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1362)
								pixel = tmp27;
								HX_STACK_LINE(1364)
								int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1364)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1364)
								int tmp30 = firstAlphaThreshold;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1364)
								bool tmp31 = (tmp29 >= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1364)
								if ((tmp31)){
									HX_STACK_LINE(1366)
									return true;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1376)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1389,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1396,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1398)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1398)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1398)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1398)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1398)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1398)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1398)
		if ((tmp4)){
			HX_STACK_LINE(1398)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(1398)
			tmp5 = true;
		}
		HX_STACK_LINE(1398)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1398)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1398)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1398)
		if ((tmp7)){
			HX_STACK_LINE(1398)
			bool tmp9 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1398)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1398)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1398)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(1398)
			tmp8 = true;
		}
		HX_STACK_LINE(1398)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1398)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1398)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1398)
		if ((tmp10)){
			HX_STACK_LINE(1398)
			tmp11 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1398)
			tmp11 = true;
		}
		HX_STACK_LINE(1398)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1398)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1398)
		if ((tmp12)){
			HX_STACK_LINE(1398)
			tmp13 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1398)
			tmp13 = true;
		}
		HX_STACK_LINE(1398)
		if ((tmp13)){
			HX_STACK_LINE(1398)
			return null();
		}
		HX_STACK_LINE(1399)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1399)
		::lime::graphics::Image tmp15 = sourceBitmapData->image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1399)
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1399)
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1399)
		int tmp18 = redMultiplier;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1399)
		int tmp19 = greenMultiplier;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1399)
		int tmp20 = blueMultiplier;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1399)
		int tmp21 = alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1399)
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(1400)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1433,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1435)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1435)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1435)
		if ((tmp1)){
			HX_STACK_LINE(1435)
			return null();
		}
		HX_STACK_LINE(1437)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.noise","\x45","\x4b","\xe1","\x5b"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1442,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1444)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1444)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1444)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1445)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1445)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1445)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1447)
		::openfl::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1447)
		::lime::utils::ByteArray tmp5 = this->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1447)
		::lime::utils::ByteArray pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1448)
		pixels->position = (int)0;
		HX_STACK_LINE(1450)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1450)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1450)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1450)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1450)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1450)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1450)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1450)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1450)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1450)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1452)
		{
			HX_STACK_LINE(1452)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1452)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1452)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1452)
			while((true)){
				HX_STACK_LINE(1452)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1452)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1452)
				if ((tmp8)){
					HX_STACK_LINE(1452)
					break;
				}
				HX_STACK_LINE(1452)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1452)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1454)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1454)
				pixelValue = tmp10;
				HX_STACK_LINE(1456)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1456)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1456)
				if ((tmp11)){
					HX_STACK_LINE(1456)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1456)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1456)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1456)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(1456)
				c1 = tmp12;
				HX_STACK_LINE(1457)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1457)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1457)
				if ((tmp13)){
					HX_STACK_LINE(1457)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1457)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1457)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1457)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(1457)
				c2 = tmp14;
				HX_STACK_LINE(1458)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1458)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1458)
				if ((tmp15)){
					HX_STACK_LINE(1458)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1458)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1458)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1458)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(1458)
				c3 = tmp16;
				HX_STACK_LINE(1459)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1459)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1459)
				if ((tmp17)){
					HX_STACK_LINE(1459)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1459)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1459)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(1459)
				c4 = tmp18;
				HX_STACK_LINE(1461)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1461)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1461)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1461)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1461)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1461)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1461)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1461)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1461)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1461)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1461)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1461)
				a = tmp29;
				HX_STACK_LINE(1462)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1462)
				if ((tmp30)){
					HX_STACK_LINE(1462)
					(a == (int)255);
				}
				HX_STACK_LINE(1464)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1464)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1464)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1464)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1464)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1464)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1464)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1464)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1464)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1464)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1464)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1464)
				r = tmp41;
				HX_STACK_LINE(1465)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1465)
				if ((tmp42)){
					HX_STACK_LINE(1465)
					(r == (int)255);
				}
				HX_STACK_LINE(1467)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1467)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1467)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1467)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1467)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1467)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1467)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1467)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1467)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1467)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1467)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1467)
				g = tmp53;
				HX_STACK_LINE(1468)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1468)
				if ((tmp54)){
					HX_STACK_LINE(1468)
					(g == (int)255);
				}
				HX_STACK_LINE(1470)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1470)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1470)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1470)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1470)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1470)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1470)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1470)
				b = tmp61;
				HX_STACK_LINE(1471)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1471)
				if ((tmp62)){
					HX_STACK_LINE(1471)
					(b == (int)255);
				}
				HX_STACK_LINE(1473)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1473)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1473)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1473)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1473)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1473)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1473)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1473)
				color = tmp69;
				HX_STACK_LINE(1475)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1475)
				pixels->position = tmp70;
				HX_STACK_LINE(1476)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1476)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(1480)
		pixels->position = (int)0;
		HX_STACK_LINE(1481)
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1481)
		::openfl::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1482)
		::openfl::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1482)
		::lime::utils::ByteArray tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1482)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1555,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1555)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.perlinNoise","\x51","\xd2","\x2b","\x27"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1567,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1569)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1569)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1569)
		if ((tmp1)){
			HX_STACK_LINE(1569)
			return null();
		}
		HX_STACK_LINE(1570)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1570)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1570)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1570)
		tmp2->scroll(tmp3,tmp4);
		HX_STACK_LINE(1571)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1593,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1595)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1595)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1595)
		if ((tmp1)){
			HX_STACK_LINE(1595)
			return null();
		}
		HX_STACK_LINE(1596)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1596)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1596)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1596)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1596)
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1597)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1633,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1635)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1635)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1635)
		if ((tmp1)){
			HX_STACK_LINE(1635)
			return null();
		}
		HX_STACK_LINE(1636)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1636)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1636)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1636)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1636)
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1637)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1661,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1663)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1663)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1663)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1663)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1663)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1663)
		if ((tmp3)){
			HX_STACK_LINE(1663)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(1663)
			tmp4 = true;
		}
		HX_STACK_LINE(1663)
		if ((tmp4)){
			HX_STACK_LINE(1663)
			return null();
		}
		HX_STACK_LINE(1664)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1664)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1664)
		::lime::utils::ByteArray tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1664)
		tmp5->setPixels(tmp6,tmp7,(int)1);
		HX_STACK_LINE(1665)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1679,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1681)
		::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1681)
		::lime::utils::ByteArray byteArray = tmp;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1686)
		{
			HX_STACK_LINE(1686)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1686)
			while((true)){
				HX_STACK_LINE(1686)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1686)
				int tmp2 = inputVector->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1686)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1686)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1686)
				if ((tmp4)){
					HX_STACK_LINE(1686)
					break;
				}
				HX_STACK_LINE(1686)
				int tmp5 = inputVector->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1686)
				Dynamic color = ((Dynamic)(tmp5));		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1686)
				++(_g);
				HX_STACK_LINE(1688)
				Dynamic tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1688)
				byteArray->writeUnsignedInt(tmp6);
			}
		}
		HX_STACK_LINE(1692)
		byteArray->position = (int)0;
		HX_STACK_LINE(1693)
		::openfl::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1693)
		::lime::utils::ByteArray tmp2 = byteArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1693)
		this->setPixels(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1748,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1750)
		bool tmp = (sourceBitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1750)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1750)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1750)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1750)
		if ((tmp2)){
			HX_STACK_LINE(1750)
			tmp3 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1750)
			tmp3 = true;
		}
		HX_STACK_LINE(1750)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1750)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1750)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1750)
		if ((tmp5)){
			HX_STACK_LINE(1750)
			tmp6 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1750)
			tmp6 = true;
		}
		HX_STACK_LINE(1750)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1750)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1750)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1750)
		if ((tmp8)){
			HX_STACK_LINE(1750)
			tmp9 = (sourceRect->x > sourceBitmapData->width);
		}
		else{
			HX_STACK_LINE(1750)
			tmp9 = true;
		}
		HX_STACK_LINE(1750)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1750)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1750)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1750)
		if ((tmp11)){
			HX_STACK_LINE(1750)
			tmp12 = (sourceRect->y > sourceBitmapData->height);
		}
		else{
			HX_STACK_LINE(1750)
			tmp12 = true;
		}
		HX_STACK_LINE(1750)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1750)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1750)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1750)
		if ((tmp14)){
			HX_STACK_LINE(1750)
			Float tmp16 = destPoint->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1750)
			int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1750)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1750)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1750)
			tmp15 = (tmp16 > tmp19);
		}
		else{
			HX_STACK_LINE(1750)
			tmp15 = true;
		}
		HX_STACK_LINE(1750)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1750)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1750)
		if ((tmp16)){
			HX_STACK_LINE(1750)
			Float tmp18 = destPoint->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1750)
			int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1750)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1750)
			tmp17 = (tmp18 > tmp20);
		}
		else{
			HX_STACK_LINE(1750)
			tmp17 = true;
		}
		HX_STACK_LINE(1750)
		if ((tmp17)){
			HX_STACK_LINE(1750)
			return (int)0;
		}
		HX_STACK_LINE(1752)
		bool tmp18 = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1752)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1752)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1752)
		if ((tmp19)){
			HX_STACK_LINE(1752)
			::openfl::geom::Rectangle tmp21 = this->rect;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1752)
			::openfl::geom::Rectangle tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1752)
			::openfl::geom::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1752)
			::openfl::geom::Rectangle tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1752)
			::openfl::geom::Rectangle tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1752)
			tmp20 = sourceRect->equals(tmp25);
		}
		else{
			HX_STACK_LINE(1752)
			tmp20 = false;
		}
		HX_STACK_LINE(1752)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1752)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1752)
		if ((tmp21)){
			HX_STACK_LINE(1752)
			tmp22 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(1752)
			tmp22 = false;
		}
		HX_STACK_LINE(1752)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1752)
		if ((tmp22)){
			HX_STACK_LINE(1752)
			tmp23 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(1752)
			tmp23 = false;
		}
		HX_STACK_LINE(1752)
		if ((tmp23)){
			HX_STACK_LINE(1754)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1760)
			int tmp24 = this->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1760)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1760)
			int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1760)
			int tmp27 = (tmp26 * (int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1760)
			::lime::utils::ByteArray tmp28 = ::lime::utils::ByteArray_obj::__new(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1760)
			::lime::utils::ByteArray memory = tmp28;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1762)
			::openfl::geom::Rectangle tmp29 = this->rect;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1762)
			::lime::utils::ByteArray tmp30 = this->getPixels(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1762)
			memory = tmp30;
			HX_STACK_LINE(1763)
			memory->position = (int)0;
			HX_STACK_LINE(1764)
			::lime::utils::ByteArray tmp31 = memory;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1764)
			::openfl::Memory_obj::select(tmp31);
			HX_STACK_LINE(1766)
			int tmp32 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1766)
			int thresholdMask = tmp32;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1768)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1768)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1768)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1768)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1768)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1768)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1770)
			{
				HX_STACK_LINE(1770)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1770)
				int tmp33 = this->height;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1770)
				int _g = tmp33;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1770)
				while((true)){
					HX_STACK_LINE(1770)
					bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1770)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1770)
					if ((tmp35)){
						HX_STACK_LINE(1770)
						break;
					}
					HX_STACK_LINE(1770)
					int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1770)
					int yy = tmp36;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1772)
					int tmp37 = this->width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1772)
					int tmp38 = yy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1772)
					int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1772)
					width_yy = tmp39;
					HX_STACK_LINE(1774)
					{
						HX_STACK_LINE(1774)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1774)
						int tmp40 = this->width;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1774)
						int _g2 = tmp40;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1774)
						while((true)){
							HX_STACK_LINE(1774)
							bool tmp41 = (_g3 < _g2);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1774)
							bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1774)
							if ((tmp42)){
								HX_STACK_LINE(1774)
								break;
							}
							HX_STACK_LINE(1774)
							int tmp43 = (_g3)++;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1774)
							int xx = tmp43;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1776)
							int tmp44 = (width_yy + xx);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1776)
							int tmp45 = (tmp44 * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1776)
							position = tmp45;
							HX_STACK_LINE(1777)
							int tmp46 = position;		HX_STACK_VAR(tmp46,"tmp46");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1777,0xdd12d5b9)
								{
									HX_STACK_LINE(1777)
									::lime::utils::ByteArray tmp47 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1777)
									int tmp48 = tmp47->readInt();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1777)
									return tmp48;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1777)
							int tmp47 = ::openfl::Memory_obj::_setPositionTemporarily(tmp46, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1777)
							pixelValue = tmp47;
							HX_STACK_LINE(1778)
							int tmp48 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1778)
							pixelMask = tmp48;
							HX_STACK_LINE(1780)
							int tmp49 = pixelMask;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1780)
							int tmp50 = thresholdMask;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1780)
							int tmp51 = ::openfl::display::BitmapData_obj::__ucompare(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1780)
							i = tmp51;
							HX_STACK_LINE(1781)
							test = false;
							HX_STACK_LINE(1783)
							bool tmp52 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1783)
							if ((tmp52)){
								HX_STACK_LINE(1783)
								bool tmp53 = (i == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1783)
								test = tmp53;
							}
							else{
								HX_STACK_LINE(1784)
								bool tmp53 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1784)
								if ((tmp53)){
									HX_STACK_LINE(1784)
									bool tmp54 = (i == (int)-1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1784)
									test = tmp54;
								}
								else{
									HX_STACK_LINE(1785)
									bool tmp54 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1785)
									if ((tmp54)){
										HX_STACK_LINE(1785)
										bool tmp55 = (i == (int)1);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1785)
										test = tmp55;
									}
									else{
										HX_STACK_LINE(1786)
										bool tmp55 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1786)
										if ((tmp55)){
											HX_STACK_LINE(1786)
											bool tmp56 = (i != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1786)
											test = tmp56;
										}
										else{
											HX_STACK_LINE(1787)
											bool tmp56 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1787)
											if ((tmp56)){
												HX_STACK_LINE(1787)
												bool tmp57 = (i == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1787)
												bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1787)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1787)
												if ((tmp58)){
													HX_STACK_LINE(1787)
													tmp59 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1787)
													tmp59 = true;
												}
												HX_STACK_LINE(1787)
												test = tmp59;
											}
											else{
												HX_STACK_LINE(1788)
												bool tmp57 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1788)
												if ((tmp57)){
													HX_STACK_LINE(1788)
													bool tmp58 = (i == (int)0);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(1788)
													bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(1788)
													bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(1788)
													if ((tmp59)){
														HX_STACK_LINE(1788)
														tmp60 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1788)
														tmp60 = true;
													}
													HX_STACK_LINE(1788)
													test = tmp60;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1790)
							bool tmp53 = test;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1790)
							if ((tmp53)){
								HX_STACK_LINE(1792)
								{
									HX_STACK_LINE(1792)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1792)
									int tmp54 = position;		HX_STACK_VAR(tmp54,"tmp54");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1792,0xdd12d5b9)
										{
											HX_STACK_LINE(1792)
											::lime::utils::ByteArray tmp55 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(1792)
											int tmp56 = v;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1792)
											tmp55->writeInt(tmp56);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1792)
									::openfl::Memory_obj::_setPositionTemporarily(tmp54, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1793)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1801)
			memory->position = (int)0;
			HX_STACK_LINE(1802)
			::openfl::geom::Rectangle tmp33 = this->rect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1802)
			::lime::utils::ByteArray tmp34 = memory;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1802)
			this->setPixels(tmp33,tmp34);
			HX_STACK_LINE(1803)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1804)
			int tmp35 = hits;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1804)
			return tmp35;
		}
		else{
			HX_STACK_LINE(1808)
			::openfl::geom::Rectangle tmp24 = sourceRect->clone();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1808)
			sourceRect = tmp24;
			HX_STACK_LINE(1810)
			Float tmp25 = sourceRect->get_right();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1810)
			int tmp26 = sourceBitmapData->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1810)
			bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1810)
			if ((tmp27)){
				HX_STACK_LINE(1812)
				Float tmp28 = (sourceBitmapData->width - sourceRect->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1812)
				sourceRect->width = tmp28;
			}
			HX_STACK_LINE(1816)
			Float tmp28 = sourceRect->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1816)
			int tmp29 = sourceBitmapData->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1816)
			bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1816)
			if ((tmp30)){
				HX_STACK_LINE(1818)
				Float tmp31 = (sourceBitmapData->height - sourceRect->y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1818)
				sourceRect->height = tmp31;
			}
			HX_STACK_LINE(1822)
			::openfl::geom::Rectangle tmp31 = sourceRect->clone();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1822)
			::openfl::geom::Rectangle targetRect = tmp31;		HX_STACK_VAR(targetRect,"targetRect");
			HX_STACK_LINE(1823)
			::openfl::geom::Point tmp32 = destPoint;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1823)
			targetRect->offsetPoint(tmp32);
			HX_STACK_LINE(1825)
			Float tmp33 = targetRect->get_right();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1825)
			int tmp34 = this->width;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1825)
			bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1825)
			if ((tmp35)){
				HX_STACK_LINE(1827)
				int tmp36 = this->width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1827)
				Float tmp37 = targetRect->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1827)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1827)
				targetRect->width = tmp38;
			}
			HX_STACK_LINE(1831)
			Float tmp36 = targetRect->get_bottom();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1831)
			int tmp37 = this->height;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1831)
			bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1831)
			if ((tmp38)){
				HX_STACK_LINE(1833)
				int tmp39 = this->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1833)
				Float tmp40 = targetRect->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1833)
				Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1833)
				targetRect->height = tmp41;
			}
			HX_STACK_LINE(1837)
			Float tmp39 = sourceRect->width;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1837)
			Float tmp40 = targetRect->width;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1837)
			Float tmp41 = ::Math_obj::min(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1837)
			sourceRect->width = tmp41;
			HX_STACK_LINE(1838)
			Float tmp42 = sourceRect->height;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1838)
			Float tmp43 = targetRect->height;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1838)
			Float tmp44 = ::Math_obj::min(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1838)
			sourceRect->height = tmp44;
			HX_STACK_LINE(1840)
			Float tmp45 = sourceRect->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1840)
			int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1840)
			int sx = tmp46;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1841)
			Float tmp47 = sourceRect->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1841)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1841)
			int sy = tmp48;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1842)
			Float tmp49 = sourceRect->width;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1842)
			int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1842)
			int sw = tmp50;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1843)
			Float tmp51 = sourceRect->height;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1843)
			int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1843)
			int sh = tmp52;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1845)
			Float tmp53 = destPoint->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1845)
			int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1845)
			int dx = tmp54;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1846)
			Float tmp55 = destPoint->y;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1846)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1846)
			int dy = tmp56;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1848)
			int tmp57 = this->width;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1848)
			int tmp58 = sw;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1848)
			int tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1848)
			int tmp60 = dx;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1848)
			int tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1848)
			int bw = tmp61;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1849)
			int tmp62 = this->height;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1849)
			int tmp63 = sh;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1849)
			int tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1849)
			int tmp65 = dy;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1849)
			int tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1849)
			int bh = tmp66;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1851)
			bool tmp67 = (bw < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1851)
			int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1851)
			if ((tmp67)){
				HX_STACK_LINE(1851)
				int tmp69 = sw;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1851)
				int tmp70 = this->width;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1851)
				int tmp71 = sw;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1851)
				int tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1851)
				int tmp73 = dx;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1851)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1851)
				tmp68 = (tmp69 + tmp74);
			}
			else{
				HX_STACK_LINE(1851)
				tmp68 = sw;
			}
			HX_STACK_LINE(1851)
			int dw = tmp68;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1852)
			bool tmp69 = (bw < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1852)
			int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1852)
			if ((tmp69)){
				HX_STACK_LINE(1852)
				int tmp71 = sh;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1852)
				int tmp72 = this->height;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1852)
				int tmp73 = sh;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1852)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1852)
				int tmp75 = dy;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1852)
				int tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1852)
				tmp70 = (tmp71 + tmp76);
			}
			else{
				HX_STACK_LINE(1852)
				tmp70 = sh;
			}
			HX_STACK_LINE(1852)
			int dh = tmp70;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1854)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1856)
			int tmp71 = (sw * sh);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1856)
			int tmp72 = (tmp71 * (int)4);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1856)
			int canvasMemory = tmp72;		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1857)
			int tmp73 = (sw * sh);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1857)
			int tmp74 = (tmp73 * (int)4);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1857)
			int sourceMemory = tmp74;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1858)
			int tmp75 = (canvasMemory + sourceMemory);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1858)
			int totalMemory = tmp75;		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1864)
			::lime::utils::ByteArray tmp76 = ::lime::utils::ByteArray_obj::__new(totalMemory);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1864)
			::lime::utils::ByteArray memory = tmp76;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1867)
			memory->position = (int)0;
			HX_STACK_LINE(1869)
			::openfl::geom::Rectangle tmp77 = sourceRect;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1869)
			::lime::utils::ByteArray tmp78 = sourceBitmapData->getPixels(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1869)
			::lime::utils::ByteArray pixels = tmp78;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1871)
			bool tmp79 = copySource;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1871)
			if ((tmp79)){
				HX_STACK_LINE(1873)
				::lime::utils::ByteArray tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1873)
				memory->writeBytes(tmp80,null(),null());
			}
			else{
				HX_STACK_LINE(1877)
				::openfl::geom::Rectangle tmp80 = targetRect;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1877)
				::lime::utils::ByteArray tmp81 = this->getPixels(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(1877)
				memory->writeBytes(tmp81,null(),null());
			}
			HX_STACK_LINE(1881)
			memory->position = canvasMemory;
			HX_STACK_LINE(1882)
			::lime::utils::ByteArray tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1882)
			memory->writeBytes(tmp80,null(),null());
			HX_STACK_LINE(1884)
			memory->position = (int)0;
			HX_STACK_LINE(1885)
			::lime::utils::ByteArray tmp81 = memory;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1885)
			::openfl::Memory_obj::select(tmp81);
			HX_STACK_LINE(1887)
			int tmp82 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1887)
			int thresholdMask = tmp82;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1889)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1889)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1889)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1889)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1889)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1891)
			{
				HX_STACK_LINE(1891)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1891)
				while((true)){
					HX_STACK_LINE(1891)
					bool tmp83 = (_g < dh);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1891)
					bool tmp84 = !(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1891)
					if ((tmp84)){
						HX_STACK_LINE(1891)
						break;
					}
					HX_STACK_LINE(1891)
					int tmp85 = (_g)++;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1891)
					int yy = tmp85;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1893)
					{
						HX_STACK_LINE(1893)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1893)
						while((true)){
							HX_STACK_LINE(1893)
							bool tmp86 = (_g1 < dw);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(1893)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(1893)
							if ((tmp87)){
								HX_STACK_LINE(1893)
								break;
							}
							HX_STACK_LINE(1893)
							int tmp88 = (_g1)++;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(1893)
							int xx = tmp88;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1895)
							int tmp89 = (xx + sx);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(1895)
							int tmp90 = (yy + sy);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(1895)
							int tmp91 = sw;		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(1895)
							int tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(1895)
							int tmp93 = (tmp89 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(1895)
							int tmp94 = (tmp93 * (int)4);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(1895)
							position = tmp94;
							HX_STACK_LINE(1896)
							int tmp95 = (canvasMemory + position);		HX_STACK_VAR(tmp95,"tmp95");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1896,0xdd12d5b9)
								{
									HX_STACK_LINE(1896)
									::lime::utils::ByteArray tmp96 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1896)
									int tmp97 = tmp96->readInt();		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1896)
									return tmp97;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1896)
							int tmp96 = ::openfl::Memory_obj::_setPositionTemporarily(tmp95, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(1896)
							pixelValue = tmp96;
							HX_STACK_LINE(1897)
							int tmp97 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(1897)
							pixelMask = tmp97;
							HX_STACK_LINE(1899)
							int tmp98 = pixelMask;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(1899)
							int tmp99 = thresholdMask;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(1899)
							int tmp100 = ::openfl::display::BitmapData_obj::__ucompare(tmp98,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(1899)
							i = tmp100;
							HX_STACK_LINE(1900)
							test = false;
							HX_STACK_LINE(1902)
							bool tmp101 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(1902)
							if ((tmp101)){
								HX_STACK_LINE(1902)
								bool tmp102 = (i == (int)0);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1902)
								test = tmp102;
							}
							else{
								HX_STACK_LINE(1903)
								bool tmp102 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1903)
								if ((tmp102)){
									HX_STACK_LINE(1903)
									bool tmp103 = (i == (int)-1);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1903)
									test = tmp103;
								}
								else{
									HX_STACK_LINE(1904)
									bool tmp103 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1904)
									if ((tmp103)){
										HX_STACK_LINE(1904)
										bool tmp104 = (i == (int)1);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1904)
										test = tmp104;
									}
									else{
										HX_STACK_LINE(1905)
										bool tmp104 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1905)
										if ((tmp104)){
											HX_STACK_LINE(1905)
											bool tmp105 = (i != (int)0);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1905)
											test = tmp105;
										}
										else{
											HX_STACK_LINE(1906)
											bool tmp105 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1906)
											if ((tmp105)){
												HX_STACK_LINE(1906)
												bool tmp106 = (i == (int)0);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1906)
												bool tmp107 = !(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1906)
												bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1906)
												if ((tmp107)){
													HX_STACK_LINE(1906)
													tmp108 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1906)
													tmp108 = true;
												}
												HX_STACK_LINE(1906)
												test = tmp108;
											}
											else{
												HX_STACK_LINE(1907)
												bool tmp106 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1907)
												if ((tmp106)){
													HX_STACK_LINE(1907)
													bool tmp107 = (i == (int)0);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(1907)
													bool tmp108 = !(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(1907)
													bool tmp109;		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(1907)
													if ((tmp108)){
														HX_STACK_LINE(1907)
														tmp109 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1907)
														tmp109 = true;
													}
													HX_STACK_LINE(1907)
													test = tmp109;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1909)
							bool tmp102 = test;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(1909)
							if ((tmp102)){
								HX_STACK_LINE(1911)
								{
									HX_STACK_LINE(1911)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1911)
									int tmp103 = position;		HX_STACK_VAR(tmp103,"tmp103");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1911,0xdd12d5b9)
										{
											HX_STACK_LINE(1911)
											::lime::utils::ByteArray tmp104 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(1911)
											int tmp105 = v;		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1911)
											tmp104->writeInt(tmp105);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1911)
									::openfl::Memory_obj::_setPositionTemporarily(tmp103, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1912)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1920)
			memory->position = (int)0;
			HX_STACK_LINE(1921)
			::openfl::geom::Rectangle tmp83 = targetRect;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1921)
			::lime::utils::ByteArray tmp84 = memory;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1921)
			this->setPixels(tmp83,tmp84);
			HX_STACK_LINE(1922)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1923)
			int tmp85 = hits;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1923)
			return tmp85;
		}
		HX_STACK_LINE(1752)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1942,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1949,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1951)
		::openfl::display::TextureUvs tmp = this->__uvData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1951)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1951)
		if ((tmp1)){
			HX_STACK_LINE(1951)
			::openfl::display::TextureUvs tmp2 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1951)
			this->__uvData = tmp2;
		}
		HX_STACK_LINE(1953)
		::openfl::display::TextureUvs tmp2 = this->__uvData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1953)
		tmp2->x0 = (int)0;
		HX_STACK_LINE(1954)
		::openfl::display::TextureUvs tmp3 = this->__uvData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1954)
		tmp3->y0 = (int)0;
		HX_STACK_LINE(1955)
		::openfl::display::TextureUvs tmp4 = this->__uvData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1955)
		tmp4->x1 = (int)1;
		HX_STACK_LINE(1956)
		::openfl::display::TextureUvs tmp5 = this->__uvData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1956)
		tmp5->y1 = (int)0;
		HX_STACK_LINE(1957)
		::openfl::display::TextureUvs tmp6 = this->__uvData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1957)
		tmp6->x2 = (int)1;
		HX_STACK_LINE(1958)
		::openfl::display::TextureUvs tmp7 = this->__uvData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1958)
		tmp7->y2 = (int)1;
		HX_STACK_LINE(1959)
		::openfl::display::TextureUvs tmp8 = this->__uvData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1959)
		tmp8->x3 = (int)0;
		HX_STACK_LINE(1960)
		::openfl::display::TextureUvs tmp9 = this->__uvData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1960)
		tmp9->y3 = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,int width,int height,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_drawSelf,hx::Null< bool >  __o_clearBuffer,hx::Null< bool >  __o_readPixels){
bool smoothing = __o_smoothing.Default(false);
bool drawSelf = __o_drawSelf.Default(false);
bool clearBuffer = __o_clearBuffer.Default(false);
bool readPixels = __o_readPixels.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",2038,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
{
		HX_STACK_LINE(2040)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2040)
		::openfl::_internal::renderer::AbstractRenderer tmp1 = tmp->stage->__renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2040)
		::openfl::_internal::renderer::AbstractRenderer renderer = tmp1;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(2041)
		bool tmp2 = (renderer == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2041)
		if ((tmp2)){
			HX_STACK_LINE(2041)
			return null();
		}
		HX_STACK_LINE(2043)
		::openfl::_internal::renderer::RenderSession renderSession1 = renderer->renderSession;		HX_STACK_VAR(renderSession1,"renderSession1");
		HX_STACK_LINE(2044)
		::lime::graphics::GLRenderContext gl = renderSession1->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(2045)
		bool tmp3 = (gl == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2045)
		if ((tmp3)){
			HX_STACK_LINE(2045)
			return null();
		}
		HX_STACK_LINE(2047)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession1->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(2048)
		bool tmp4 = renderSession1->renderer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2048)
		bool renderTransparent = tmp4;		HX_STACK_VAR(renderTransparent,"renderTransparent");
		HX_STACK_LINE(2050)
		bool tmp5 = (clipRect == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2050)
		::openfl::geom::Rectangle tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2050)
		if ((tmp5)){
			HX_STACK_LINE(2050)
			tmp6 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
		}
		else{
			HX_STACK_LINE(2050)
			tmp6 = clipRect->clone();
		}
		HX_STACK_LINE(2050)
		::openfl::geom::Rectangle tmpRect = tmp6;		HX_STACK_VAR(tmpRect,"tmpRect");
		HX_STACK_LINE(2052)
		bool tmp7 = this->transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2052)
		renderSession1->renderer->transparent = tmp7;
		HX_STACK_LINE(2054)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp8 = this->__framebuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2054)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2054)
		if ((tmp9)){
			HX_STACK_LINE(2056)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp10 = ::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__new(gl,width,height,smoothing);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2056)
			this->__framebuffer = tmp10;
		}
		HX_STACK_LINE(2060)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp10 = this->__framebuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2060)
		int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2060)
		int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2060)
		tmp10->resize(tmp11,tmp12);
		HX_STACK_LINE(2061)
		{
			HX_STACK_LINE(2061)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp13 = this->__framebuffer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2061)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp13->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(2061)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(2063)
		int tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2063)
		int tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2063)
		renderer->setViewport((int)0,(int)0,tmp13,tmp14);
		HX_STACK_LINE(2065)
		::openfl::_internal::renderer::RenderSession tmp15 = renderSession1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2065)
		bool tmp16 = drawSelf;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2065)
		::openfl::geom::Rectangle tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2065)
		if ((tmp16)){
			HX_STACK_LINE(2065)
			tmp17 = null();
		}
		else{
			HX_STACK_LINE(2065)
			tmp17 = tmpRect;
		}
		HX_STACK_LINE(2065)
		spritebatch->begin(tmp15,tmp17);
		HX_STACK_LINE(2068)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask.call(true,true,true,true);
		HX_STACK_LINE(2069)
		renderSession1->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(2071)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp18 = renderSession1->shaderManager->defaultShader;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2071)
		renderSession1->shaderManager->setShader(tmp18,true);
		HX_STACK_LINE(2073)
		bool tmp19 = clearBuffer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2073)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(2073)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(2073)
		if ((tmp20)){
			HX_STACK_LINE(2073)
			tmp21 = drawSelf;
		}
		else{
			HX_STACK_LINE(2073)
			tmp21 = true;
		}
		HX_STACK_LINE(2073)
		if ((tmp21)){
			HX_STACK_LINE(2075)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp22 = this->__framebuffer;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2075)
			tmp22->clear();
		}
		HX_STACK_LINE(2079)
		bool tmp22 = drawSelf;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(2079)
		if ((tmp22)){
			HX_STACK_LINE(2081)
			::openfl::geom::Matrix tmp23 = this->__worldTransform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2081)
			tmp23->identity();
			HX_STACK_LINE(2082)
			{
				HX_STACK_LINE(2082)
				::openfl::geom::Matrix tmp24 = this->__worldTransform;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2082)
				::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(2082)
				Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(2082)
				Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(2082)
				m->tx = (int)0;
				HX_STACK_LINE(2082)
				m->ty = (int)0;
				HX_STACK_LINE(2082)
				m->scale((int)1,(int)-1);
				HX_STACK_LINE(2082)
				int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2082)
				m->translate((int)0,tmp25);
				HX_STACK_LINE(2082)
				hx::AddEq(m->tx,tx);
				HX_STACK_LINE(2082)
				hx::SubEq(m->ty,ty);
			}
			HX_STACK_LINE(2083)
			::openfl::_internal::renderer::RenderSession tmp24 = renderSession1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2083)
			this->__renderGL(tmp24);
			HX_STACK_LINE(2084)
			spritebatch->stop();
			HX_STACK_LINE(2085)
			{
				HX_STACK_LINE(2085)
				::lime::graphics::opengl::GLTexture tmp25 = this->__texture;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2085)
				::lime::graphics::opengl::GLTexture texture = tmp25;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(2085)
				{
					HX_STACK_LINE(2085)
					{
						HX_STACK_LINE(2085)
						int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(2085)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
					}
					HX_STACK_LINE(2085)
					texture->invalidate();
				}
			}
			HX_STACK_LINE(2086)
			this->__texture = null();
			HX_STACK_LINE(2087)
			::openfl::geom::Rectangle tmp25 = tmpRect;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2087)
			spritebatch->start(tmp25);
		}
		HX_STACK_LINE(2091)
		::openfl::geom::ColorTransform ctCache = source->__Field(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"), hx::paccDynamic );		HX_STACK_VAR(ctCache,"ctCache");
		HX_STACK_LINE(2092)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(2093)
		::openfl::display::BlendMode blendModeCache = source->__Field(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"), hx::paccDynamic );		HX_STACK_VAR(blendModeCache,"blendModeCache");
		HX_STACK_LINE(2094)
		bool cached = source->__Field(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"), hx::paccDynamic );		HX_STACK_VAR(cached,"cached");
		HX_STACK_LINE(2096)
		bool tmp23 = (matrix != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(2096)
		::openfl::geom::Matrix tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2096)
		if ((tmp23)){
			HX_STACK_LINE(2096)
			tmp24 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(2096)
			tmp24 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(2096)
		::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(2098)
		{
			HX_STACK_LINE(2098)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(2098)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(2098)
			m->tx = (int)0;
			HX_STACK_LINE(2098)
			m->ty = (int)0;
			HX_STACK_LINE(2098)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(2098)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2098)
			m->translate((int)0,tmp25);
			HX_STACK_LINE(2098)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(2098)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(2100)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = m;
		HX_STACK_LINE(2101)
		bool tmp25 = (colorTransform != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2101)
		::openfl::geom::ColorTransform tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2101)
		if ((tmp25)){
			HX_STACK_LINE(2101)
			tmp26 = colorTransform;
		}
		else{
			HX_STACK_LINE(2101)
			tmp26 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(2101)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = tmp26;
		HX_STACK_LINE(2102)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendMode;
		HX_STACK_LINE(2103)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = false;
		HX_STACK_LINE(2105)
		source->__updateChildren(false);
		HX_STACK_LINE(2107)
		::openfl::_internal::renderer::RenderSession tmp27 = renderSession1;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2107)
		source->__renderGL(tmp27);
		HX_STACK_LINE(2109)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = ctCache;
		HX_STACK_LINE(2110)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = matrixCache;
		HX_STACK_LINE(2111)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendModeCache;
		HX_STACK_LINE(2112)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = cached;
		HX_STACK_LINE(2114)
		source->__updateChildren(true);
		HX_STACK_LINE(2116)
		spritebatch->finish();
		HX_STACK_LINE(2118)
		bool tmp28 = readPixels;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2118)
		if ((tmp28)){
			HX_STACK_LINE(2121)
			::lime::graphics::Image tmp29 = this->image;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2121)
			int tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2121)
			int tmp31 = width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2121)
			bool tmp32 = (tmp30 != tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2121)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2121)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2121)
			if ((tmp33)){
				HX_STACK_LINE(2121)
				::lime::graphics::Image tmp35 = this->image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2121)
				::lime::graphics::Image tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2121)
				int tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(2121)
				int tmp38 = height;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(2121)
				tmp34 = (tmp37 != tmp38);
			}
			else{
				HX_STACK_LINE(2121)
				tmp34 = true;
			}
			HX_STACK_LINE(2121)
			if ((tmp34)){
				HX_STACK_LINE(2123)
				::lime::graphics::Image tmp35 = this->image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2123)
				int tmp36 = width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2123)
				int tmp37 = height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(2123)
				tmp35->resize(tmp36,tmp37);
			}
			HX_STACK_LINE(2127)
			{
				HX_STACK_LINE(2127)
				::lime::graphics::Image tmp35 = this->image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2127)
				::lime::utils::ArrayBufferView tmp36 = tmp35->buffer->data;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2127)
				::lime::utils::ArrayBufferView pixels = tmp36;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(2127)
				{
					HX_STACK_LINE(2127)
					bool tmp37 = (pixels == null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2127)
					::haxe::io::Bytes tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2127)
					if ((tmp37)){
						HX_STACK_LINE(2127)
						tmp38 = null();
					}
					else{
						HX_STACK_LINE(2127)
						tmp38 = pixels->buffer;
					}
					HX_STACK_LINE(2127)
					::haxe::io::Bytes buffer = tmp38;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(2127)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_read_pixels.call((int)0,(int)0,width,height,gl->RGBA,gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
				}
			}
		}
		HX_STACK_LINE(2131)
		{
			HX_STACK_LINE(2131)
			::lime::graphics::opengl::GLFramebuffer framebuffer = renderSession1->defaultFramebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(2131)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
		}
		HX_STACK_LINE(2133)
		int tmp29 = renderSession1->renderer->width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2133)
		int tmp30 = renderSession1->renderer->height;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2133)
		renderer->setViewport((int)0,(int)0,tmp29,tmp30);
		HX_STACK_LINE(2135)
		renderSession1->renderer->transparent = renderTransparent;
		HX_STACK_LINE(2137)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask.call(true,true,true,renderSession1->renderer->transparent);
		HX_STACK_LINE(2139)
		this->__usingFramebuffer = false;
		HX_STACK_LINE(2141)
		::lime::graphics::Image tmp31 = this->image;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2141)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2141)
		if ((tmp32)){
			HX_STACK_LINE(2143)
			::lime::graphics::Image tmp33 = this->image;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2143)
			tmp33->dirty = false;
			HX_STACK_LINE(2144)
			::lime::graphics::Image tmp34 = this->image;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2144)
			tmp34->set_premultiplied(true);
		}
		HX_STACK_LINE(2148)
		this->__createUVs();
		HX_STACK_LINE(2149)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__flipMatrix( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__flipMatrix",0x69774899,"openfl.display.BitmapData.__flipMatrix","openfl/display/BitmapData.hx",2154,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(2156)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(2157)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(2158)
		m->tx = (int)0;
		HX_STACK_LINE(2159)
		m->ty = (int)0;
		HX_STACK_LINE(2160)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(2161)
		int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2161)
		m->translate((int)0,tmp);
		HX_STACK_LINE(2162)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(2163)
		hx::SubEq(m->ty,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipMatrix,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",2168,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(2168)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2170)
		::String tmp = base64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2170)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",2170,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(2172)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2172)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(2174)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2174)
				if ((tmp3)){
					HX_STACK_LINE(2176)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2176)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2170)
		::lime::graphics::Image_obj::fromBase64(tmp,tmp1, Dynamic(new _Function_1_1(_g,onload)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",2185,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(2185)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2187)
		::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload,::lime::utils::ByteArray,rawAlpha)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",2187,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(2189)
				::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2189)
				_g->__fromImage(tmp1);
				HX_STACK_LINE(2191)
				bool tmp2 = (rawAlpha != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2191)
				if ((tmp2)){
					HX_STACK_LINE(2198)
					::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2198)
					::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(2200)
					{
						HX_STACK_LINE(2200)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2200)
						int _g1 = rawAlpha->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2200)
						while((true)){
							HX_STACK_LINE(2200)
							bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(2200)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(2200)
							if ((tmp5)){
								HX_STACK_LINE(2200)
								break;
							}
							HX_STACK_LINE(2200)
							int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(2200)
							int i = tmp6;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2202)
							{
								HX_STACK_LINE(2202)
								bool tmp7 = (rawAlpha->position < rawAlpha->length);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(2202)
								int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(2202)
								if ((tmp7)){
									HX_STACK_LINE(2202)
									int tmp9 = (rawAlpha->position)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(2202)
									int pos = tmp9;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(2202)
									tmp8 = rawAlpha->b->__get(pos);
								}
								else{
									HX_STACK_LINE(2202)
									tmp8 = rawAlpha->ThrowEOFi();
								}
								HX_STACK_LINE(2202)
								int val = tmp8;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2202)
								{
									HX_STACK_LINE(2202)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(2202)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(2206)
					image->dirty = true;
				}
				HX_STACK_LINE(2210)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2210)
				if ((tmp3)){
					HX_STACK_LINE(2212)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2212)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2187)
		::lime::graphics::Image_obj::fromBytes(tmp, Dynamic(new _Function_1_1(_g,onload,rawAlpha)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",2221,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(2221)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2223)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2233)
		Dynamic tmp1 = onerror;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",2223,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(2225)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2225)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(2227)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2227)
				if ((tmp3)){
					HX_STACK_LINE(2229)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2229)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2223)
		::lime::graphics::Image_obj::fromFile(tmp, Dynamic(new _Function_1_1(_g,onload)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",2238,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(2240)
		bool tmp = (image != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2240)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2240)
		if ((tmp)){
			HX_STACK_LINE(2240)
			tmp1 = (image->buffer != null());
		}
		else{
			HX_STACK_LINE(2240)
			tmp1 = false;
		}
		HX_STACK_LINE(2240)
		if ((tmp1)){
			HX_STACK_LINE(2242)
			this->image = image;
			HX_STACK_LINE(2244)
			this->width = image->width;
			HX_STACK_LINE(2245)
			this->height = image->height;
			HX_STACK_LINE(2246)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2246)
			this->rect = tmp2;
			HX_STACK_LINE(2249)
			image->set_format((int)2);
			HX_STACK_LINE(2250)
			image->set_premultiplied(true);
			HX_STACK_LINE(2253)
			this->__isValid = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",2260,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(2262)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2262)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2262)
		if ((tmp1)){
			HX_STACK_LINE(2262)
			return null();
		}
		HX_STACK_LINE(2264)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(2266)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2266)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2266)
		if ((tmp3)){
			HX_STACK_LINE(2266)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2266)
			this->__worldTransform = tmp4;
		}
		HX_STACK_LINE(2269)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2269)
		::openfl::geom::Matrix transform = tmp4;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(2271)
		bool tmp5 = renderSession->roundPixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2271)
		if ((tmp5)){
			HX_STACK_LINE(2273)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2273)
			::lime::math::Matrix3 matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(2274)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2274)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2274)
			matrix->tx = tmp8;
			HX_STACK_LINE(2275)
			Float tmp9 = matrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2275)
			int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2275)
			matrix->ty = tmp10;
			HX_STACK_LINE(2276)
			::lime::math::Matrix3 tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2276)
			cairo->set_matrix(tmp11);
		}
		else{
			HX_STACK_LINE(2281)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2281)
			cairo->set_matrix(tmp6);
		}
		HX_STACK_LINE(2286)
		Dynamic tmp6 = this->getSurface();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2286)
		Dynamic surface = tmp6;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(2288)
		bool tmp7 = (surface != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2288)
		if ((tmp7)){
			HX_STACK_LINE(2290)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2290)
			Dynamic tmp9 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2290)
			Dynamic pattern = tmp9;		HX_STACK_VAR(pattern,"pattern");
			HX_STACK_LINE(2292)
			int tmp10 = cairo->get_antialias();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2292)
			bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2292)
			if ((tmp11)){
				HX_STACK_LINE(2294)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2294)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)3);
			}
			else{
				HX_STACK_LINE(2298)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2298)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)1);
			}
			HX_STACK_LINE(2302)
			Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2302)
			cairo->set_source(tmp12);
			HX_STACK_LINE(2303)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",2310,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",2317,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",2347,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",2354,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(2356)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2356)
		::openfl::geom::ColorTransform tmp1 = this->__worldColorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2356)
		::openfl::geom::ColorTransform tmp2 = this->__worldColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2356)
		Float tmp3 = tmp2->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2356)
		::openfl::display::BlendMode tmp4 = this->__blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2356)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,tmp,tmp1,tmp3,tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",2361,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",2424,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",2431,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",900,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(902)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(902)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(903)
	{
		HX_STACK_LINE(903)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(903)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(903)
		::String tmp1 = base64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(903)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",903,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(903)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(903)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(903)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(903)
				if ((tmp4)){
					HX_STACK_LINE(903)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(903)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(903)
		::lime::graphics::Image_obj::fromBase64(tmp1,tmp2, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(904)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(904)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",909,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(911)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(911)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(912)
	{
		HX_STACK_LINE(912)
		::lime::utils::ByteArray rawAlpha1 = rawAlpha;		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(912)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(912)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(912)
		::lime::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::lime::utils::ByteArray,rawAlpha1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",912,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(912)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(912)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(912)
				bool tmp3 = (rawAlpha1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(912)
				if ((tmp3)){
					HX_STACK_LINE(912)
					::lime::utils::ArrayBufferView tmp4 = image->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(912)
					::lime::utils::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(912)
					{
						HX_STACK_LINE(912)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(912)
						int _g1 = rawAlpha1->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(912)
						while((true)){
							HX_STACK_LINE(912)
							bool tmp5 = (_g2 < _g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(912)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(912)
							if ((tmp6)){
								HX_STACK_LINE(912)
								break;
							}
							HX_STACK_LINE(912)
							int tmp7 = (_g2)++;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(912)
							int i = tmp7;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(912)
							{
								HX_STACK_LINE(912)
								bool tmp8 = (rawAlpha1->position < rawAlpha1->length);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(912)
								int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(912)
								if ((tmp8)){
									HX_STACK_LINE(912)
									int tmp10 = (rawAlpha1->position)++;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(912)
									int pos = tmp10;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(912)
									tmp9 = rawAlpha1->b->__get(pos);
								}
								else{
									HX_STACK_LINE(912)
									tmp9 = rawAlpha1->ThrowEOFi();
								}
								HX_STACK_LINE(912)
								int val = tmp9;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(912)
								{
									HX_STACK_LINE(912)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(912)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(912)
					image->dirty = true;
				}
				HX_STACK_LINE(912)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(912)
				if ((tmp4)){
					HX_STACK_LINE(912)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(912)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(912)
		::lime::graphics::Image_obj::fromBytes(tmp1, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(913)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(913)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",932,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(934)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(934)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(935)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(935)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(935)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(935)
	bitmapData->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(936)
	::openfl::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(936)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",941,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(943)
		bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(943)
		if ((tmp1)){
			HX_STACK_LINE(943)
			tmp2 = (image->buffer == null());
		}
		else{
			HX_STACK_LINE(943)
			tmp2 = true;
		}
		HX_STACK_LINE(943)
		if ((tmp2)){
			HX_STACK_LINE(943)
			return null();
		}
		HX_STACK_LINE(945)
		::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(945)
		::openfl::display::BitmapData bitmapData = tmp3;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(946)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(946)
		bitmapData->__fromImage(tmp4);
		HX_STACK_LINE(947)
		bool tmp5 = transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(947)
		bitmapData->image->set_transparent(tmp5);
		HX_STACK_LINE(948)
		::openfl::display::BitmapData tmp6 = bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(948)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",2370,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(2372)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2373)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2375)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2375)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2375)
	tmp1 = tmp3;
	HX_STACK_LINE(2376)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2376)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2376)
	tmp2 = tmp5;
	HX_STACK_LINE(2378)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2378)
	if ((tmp6)){
		HX_STACK_LINE(2380)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2380)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2380)
		if ((tmp7)){
			HX_STACK_LINE(2380)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(2380)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(2380)
		return tmp8;
	}
	else{
		HX_STACK_LINE(2384)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2384)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2384)
		tmp1 = tmp8;
		HX_STACK_LINE(2385)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2385)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2385)
		tmp2 = tmp10;
		HX_STACK_LINE(2387)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2387)
		if ((tmp11)){
			HX_STACK_LINE(2389)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2389)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2389)
			if ((tmp12)){
				HX_STACK_LINE(2389)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(2389)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(2389)
			return tmp13;
		}
		else{
			HX_STACK_LINE(2393)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2393)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2393)
			tmp1 = tmp13;
			HX_STACK_LINE(2394)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2394)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2394)
			tmp2 = tmp15;
			HX_STACK_LINE(2396)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2396)
			if ((tmp16)){
				HX_STACK_LINE(2398)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2398)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2398)
				if ((tmp17)){
					HX_STACK_LINE(2398)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(2398)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(2398)
				return tmp18;
			}
			else{
				HX_STACK_LINE(2402)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2402)
				tmp1 = tmp17;
				HX_STACK_LINE(2403)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2403)
				tmp2 = tmp18;
				HX_STACK_LINE(2405)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2405)
				if ((tmp19)){
					HX_STACK_LINE(2407)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2407)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2407)
					if ((tmp20)){
						HX_STACK_LINE(2407)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(2407)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(2407)
					return tmp21;
				}
				else{
					HX_STACK_LINE(2411)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(2378)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
	HX_VISIT_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__flipMatrix") ) { return __flipMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { return __usingFramebuffer; }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { __usingFramebuffer=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"));
	outFields->push(HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"));
	outFields->push(HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"));
	outFields->push(HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingFramebuffer),HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"),
	HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"),
	HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"),
	HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__createUVs","\x56","\x32","\x13","\x78"),
	HX_HCSTRING("__drawGL","\x49","\xde","\x05","\x88"),
	HX_HCSTRING("__flipMatrix","\xee","\xf7","\x88","\x6b"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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
} // end namespace display
