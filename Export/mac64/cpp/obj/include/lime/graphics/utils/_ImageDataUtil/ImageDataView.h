#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#define INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS4(lime,graphics,utils,_ImageDataUtil,ImageDataView)
HX_DECLARE_CLASS2(lime,math,Rectangle)
namespace lime{
namespace graphics{
namespace utils{
namespace _ImageDataUtil{


class HXCPP_CLASS_ATTRIBUTES  ImageDataView_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageDataView_obj OBJ_;
		ImageDataView_obj();
		Void __construct(::lime::graphics::Image image,::lime::math::Rectangle rect);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.utils._ImageDataUtil.ImageDataView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ImageDataView_obj > __new(::lime::graphics::Image image,::lime::math::Rectangle rect);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDataView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ImageDataView","\x0a","\x90","\x55","\xb5"); }

		int x;
		int y;
		int height;
		int width;
		::lime::graphics::Image image;
		int offset;
		::lime::math::Rectangle rect;
		int stride;
		virtual Void clip( int x,int y,int width,int height);
		Dynamic clip_dyn();

		virtual int row( int y);
		Dynamic row_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace utils
} // end namespace _ImageDataUtil

#endif /* INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView */ 
