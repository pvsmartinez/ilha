#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#define INCLUDED_lime_graphics_utils_ImageCanvasUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS3(lime,graphics,utils,ImageCanvasUtil)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace graphics{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ImageCanvasUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageCanvasUtil_obj OBJ_;
		ImageCanvasUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.utils.ImageCanvasUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageCanvasUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageCanvasUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ImageCanvasUtil","\x15","\x30","\x04","\x51"); }

		static Void colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix);
		static Dynamic colorTransform_dyn();

		static Void convertToCanvas( ::lime::graphics::Image image);
		static Dynamic convertToCanvas_dyn();

		static Void convertToData( ::lime::graphics::Image image);
		static Dynamic convertToData_dyn();

		static Void copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel);
		static Dynamic copyChannel_dyn();

		static Void copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  mergeAlpha);
		static Dynamic copyPixels_dyn();

		static Void createCanvas( ::lime::graphics::Image image,int width,int height);
		static Dynamic createCanvas_dyn();

		static Void createImageData( ::lime::graphics::Image image);
		static Dynamic createImageData_dyn();

		static Void fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format);
		static Dynamic fillRect_dyn();

		static Void floodFill( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic floodFill_dyn();

		static int getPixel( ::lime::graphics::Image image,int x,int y,int format);
		static Dynamic getPixel_dyn();

		static int getPixel32( ::lime::graphics::Image image,int x,int y,int format);
		static Dynamic getPixel32_dyn();

		static ::lime::utils::ByteArray getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format);
		static Dynamic getPixels_dyn();

		static Void merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static Dynamic merge_dyn();

		static Void resize( ::lime::graphics::Image image,int newWidth,int newHeight);
		static Dynamic resize_dyn();

		static Void scroll( ::lime::graphics::Image image,int x,int y);
		static Dynamic scroll_dyn();

		static Void setPixel( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic setPixel_dyn();

		static Void setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format);
		static Dynamic setPixel32_dyn();

		static Void setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format);
		static Dynamic setPixels_dyn();

		static Void sync( ::lime::graphics::Image image,bool clear);
		static Dynamic sync_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace utils

#endif /* INCLUDED_lime_graphics_utils_ImageCanvasUtil */ 
