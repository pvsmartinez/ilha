#ifndef INCLUDED_NMEPreloader
#define INCLUDED_NMEPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(NMEPreloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  NMEPreloader_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef NMEPreloader_obj OBJ_;
		NMEPreloader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="NMEPreloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NMEPreloader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NMEPreloader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NMEPreloader","\x70","\xbc","\x9a","\xc3"); }

		::openfl::display::Sprite outline;
		::openfl::display::Sprite progress;
		virtual int getBackgroundColor( );
		Dynamic getBackgroundColor_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Void onInit( );
		Dynamic onInit_dyn();

		virtual Void onLoaded( );
		Dynamic onLoaded_dyn();

		virtual Void onUpdate( int bytesLoaded,int bytesTotal);
		Dynamic onUpdate_dyn();

};


#endif /* INCLUDED_NMEPreloader */ 
