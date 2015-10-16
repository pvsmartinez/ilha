#ifndef INCLUDED_openfl_Assets
#define INCLUDED_openfl_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS1(openfl,AssetLibrary)
HX_DECLARE_CLASS1(openfl,Assets)
HX_DECLARE_CLASS1(openfl,IAssetCache)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,text,Font)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.Assets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Assets","\xa3","\xbc","\x97","\x80"); }

		static void __boot();
		static ::openfl::IAssetCache cache;
		static ::openfl::events::EventDispatcher dispatcher;
		static Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		static Dynamic addEventListener_dyn();

		static bool dispatchEvent( ::openfl::events::Event event);
		static Dynamic dispatchEvent_dyn();

		static bool exists( ::String id,::String type);
		static Dynamic exists_dyn();

		static ::openfl::display::BitmapData getBitmapData( ::String id,hx::Null< bool >  useCache);
		static Dynamic getBitmapData_dyn();

		static ::lime::utils::ByteArray getBytes( ::String id);
		static Dynamic getBytes_dyn();

		static ::openfl::text::Font getFont( ::String id,hx::Null< bool >  useCache);
		static Dynamic getFont_dyn();

		static ::lime::AssetLibrary getLibrary( ::String name);
		static Dynamic getLibrary_dyn();

		static ::openfl::display::MovieClip getMovieClip( ::String id);
		static Dynamic getMovieClip_dyn();

		static ::openfl::media::Sound getMusic( ::String id,hx::Null< bool >  useCache);
		static Dynamic getMusic_dyn();

		static ::String getPath( ::String id);
		static Dynamic getPath_dyn();

		static ::openfl::media::Sound getSound( ::String id,hx::Null< bool >  useCache);
		static Dynamic getSound_dyn();

		static ::String getText( ::String id);
		static Dynamic getText_dyn();

		static bool hasEventListener( ::String type);
		static Dynamic hasEventListener_dyn();

		static bool isLocal( ::String id,::String type,hx::Null< bool >  useCache);
		static Dynamic isLocal_dyn();

		static bool isValidBitmapData( ::openfl::display::BitmapData bitmapData);
		static Dynamic isValidBitmapData_dyn();

		static bool isValidSound( ::openfl::media::Sound sound);
		static Dynamic isValidSound_dyn();

		static Array< ::String > list( ::String type);
		static Dynamic list_dyn();

		static ::lime::app::Future loadBitmapData( ::String id,Dynamic useCache,Dynamic handler);
		static Dynamic loadBitmapData_dyn();

		static ::lime::app::Future loadBytes( ::String id,Dynamic handler);
		static Dynamic loadBytes_dyn();

		static ::lime::app::Future loadFont( ::String id,Dynamic useCache,Dynamic handler);
		static Dynamic loadFont_dyn();

		static ::lime::app::Future loadLibrary( ::String name,Dynamic handler);
		static Dynamic loadLibrary_dyn();

		static ::lime::app::Future loadMusic( ::String id,Dynamic useCache,Dynamic handler);
		static Dynamic loadMusic_dyn();

		static ::lime::app::Future loadMovieClip( ::String id,Dynamic handler);
		static Dynamic loadMovieClip_dyn();

		static ::lime::app::Future loadSound( ::String id,Dynamic useCache,Dynamic handler);
		static Dynamic loadSound_dyn();

		static ::lime::app::Future loadText( ::String id,Dynamic handler);
		static Dynamic loadText_dyn();

		static Void registerLibrary( ::String name,::openfl::AssetLibrary library);
		static Dynamic registerLibrary_dyn();

		static Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  capture);
		static Dynamic removeEventListener_dyn();

		static ::hx::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		static ::Enum resolveEnum( ::String name);
		static Dynamic resolveEnum_dyn();

		static Void unloadLibrary( ::String name);
		static Dynamic unloadLibrary_dyn();

		static Void LimeAssets_onChange( );
		static Dynamic LimeAssets_onChange_dyn();

};

} // end namespace openfl

#endif /* INCLUDED_openfl_Assets */ 
