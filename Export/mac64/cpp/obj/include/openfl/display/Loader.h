#ifndef INCLUDED_openfl_display_Loader
#define INCLUDED_openfl_display_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Loader)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,_system,LoaderContext)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Loader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Loader","\x33","\xbc","\x03","\x8d"); }

		::openfl::display::DisplayObject content;
		::openfl::display::LoaderInfo contentLoaderInfo;
		::openfl::display::BitmapData mImage;
		::openfl::display::Shape mShape;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void load( ::openfl::net::URLRequest request,::openfl::_system::LoaderContext context);
		Dynamic load_dyn();

		virtual Void loadBytes( ::lime::utils::ByteArray buffer);
		Dynamic loadBytes_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void unloadAndStop( hx::Null< bool >  gc);
		Dynamic unloadAndStop_dyn();

		virtual Void BitmapData_onLoad( ::openfl::display::BitmapData bitmapData);
		Dynamic BitmapData_onLoad_dyn();

		virtual Void BitmapData_onError( Dynamic _);
		Dynamic BitmapData_onError_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Loader */ 
