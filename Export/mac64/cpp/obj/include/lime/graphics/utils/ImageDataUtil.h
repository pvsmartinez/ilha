#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#define INCLUDED_lime_graphics_utils_ImageDataUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS3(lime,graphics,utils,ImageDataUtil)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace graphics{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ImageDataUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageDataUtil_obj OBJ_;
		ImageDataUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.utils.ImageDataUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageDataUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDataUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ImageDataUtil","\xa7","\xb5","\xb4","\xb4"); }

		static void __boot();
		static Void colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix);
		static Dynamic colorTransform_dyn();

		static Void copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel);
		static Dynamic copyChannel_dyn();

		static Void copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  mergeAlpha);
		static Dynamic copyPixels_dyn();

		static Void fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format);
		static Dynamic fillRect_dyn();

		static Void floodFill( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic floodFill_dyn();

		static ::lime::math::Rectangle getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  findColor,int format);
		static Dynamic getColorBoundsRect_dyn();

		static int getPixel( ::lime::graphics::Image image,int x,int y,int format);
		static Dynamic getPixel_dyn();

		static int getPixel32( ::lime::graphics::Image image,int x,int y,int format);
		static Dynamic getPixel32_dyn();

		static ::lime::utils::ByteArray getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format);
		static Dynamic getPixels_dyn();

		static Void merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic merge_dyn();

		static Void multiplyAlpha( ::lime::graphics::Image image);
		static Dynamic multiplyAlpha_dyn();

		static Void resize( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resize_dyn();

		static Void resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resizeBuffer_dyn();

		static Void setFormat( ::lime::graphics::Image image,int format);
		static Dynamic setFormat_dyn();

		static Void setPixel( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic setPixel_dyn();

		static Void setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic setPixel32_dyn();

		static Void setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format);
		static Dynamic setPixels_dyn();

		static Void unmultiplyAlpha( ::lime::graphics::Image image);
		static Dynamic unmultiplyAlpha_dyn();

		static Void lime_image_data_util_color_transform( Dynamic image,Dynamic rect,Dynamic colorMatrix);
		static Dynamic lime_image_data_util_color_transform_dyn();

		static Void lime_image_data_util_copy_channel( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int srcChannel,int destChannel);
		static Dynamic lime_image_data_util_copy_channel_dyn();

		static Void lime_image_data_util_copy_pixels( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,Dynamic alphaImage,Dynamic alphaPoint,bool mergeAlpha);
		static Dynamic lime_image_data_util_copy_pixels_dyn();

		static Void lime_image_data_util_fill_rect( Dynamic image,Dynamic rect,int rg,int ba);
		static Dynamic lime_image_data_util_fill_rect_dyn();

		static Void lime_image_data_util_flood_fill( Dynamic image,int x,int y,int rg,int ba);
		static Dynamic lime_image_data_util_flood_fill_dyn();

		static Void lime_image_data_util_get_pixels( Dynamic image,Dynamic rect,int format,Dynamic bytes);
		static Dynamic lime_image_data_util_get_pixels_dyn();

		static Void lime_image_data_util_merge( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic lime_image_data_util_merge_dyn();

		static Void lime_image_data_util_multiply_alpha( Dynamic image);
		static Dynamic lime_image_data_util_multiply_alpha_dyn();

		static Void lime_image_data_util_resize( Dynamic image,Dynamic buffer,int width,int height);
		static Dynamic lime_image_data_util_resize_dyn();

		static Void lime_image_data_util_set_format( Dynamic image,int format);
		static Dynamic lime_image_data_util_set_format_dyn();

		static Void lime_image_data_util_set_pixels( Dynamic image,Dynamic rect,Dynamic bytes,int format);
		static Dynamic lime_image_data_util_set_pixels_dyn();

		static Void lime_image_data_util_unmultiply_alpha( Dynamic image);
		static Dynamic lime_image_data_util_unmultiply_alpha_dyn();

		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_image_data_util_color_transform;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > cffi_lime_image_data_util_copy_channel;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > cffi_lime_image_data_util_copy_pixels;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > cffi_lime_image_data_util_fill_rect;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > cffi_lime_image_data_util_flood_fill;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > cffi_lime_image_data_util_get_pixels;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > cffi_lime_image_data_util_merge;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_image_data_util_multiply_alpha;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > cffi_lime_image_data_util_resize;
		static ::cpp::Function< void ( ::hx::Object * ,int ) > cffi_lime_image_data_util_set_format;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > cffi_lime_image_data_util_set_pixels;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_image_data_util_unmultiply_alpha;
};

} // end namespace lime
} // end namespace graphics
} // end namespace utils

#endif /* INCLUDED_lime_graphics_utils_ImageDataUtil */ 
