#ifndef INCLUDED_openfl_display_Bitmap
#define INCLUDED_openfl_display_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,PixelSnapping)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Bitmap_obj : public ::openfl::display::DisplayObject_obj{
	public:
		typedef ::openfl::display::DisplayObject_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();
		Void __construct(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bitmap_obj > __new(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"); }

		::openfl::display::BitmapData bitmapData;
		::openfl::display::PixelSnapping pixelSnapping;
		bool smoothing;
		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);

		virtual bool __hitTestMask( Float x,Float y);

		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __updateMask( ::openfl::display::Graphics maskGraphics);

		virtual Float get_height( );

		virtual Float set_height( Float value);

		virtual Float get_width( );

		virtual Float set_width( Float value);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Bitmap */ 
