#ifndef INCLUDED_lime_Assets
#define INCLUDED_lime_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(lime,AssetCache)
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS1(lime,Assets)
HX_DECLARE_CLASS2(lime,app,Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.Assets")
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
		static ::lime::AssetCache cache;
		static ::haxe::ds::StringMap libraries;
		static ::lime::app::Event_Void_Void onChange;
		static bool initialized;
		static bool exists( ::String id,::String type);
		static Dynamic exists_dyn();

		static ::lime::audio::AudioBuffer getAudioBuffer( ::String id,hx::Null< bool >  useCache);
		static Dynamic getAudioBuffer_dyn();

		static ::lime::utils::ByteArray getBytes( ::String id);
		static Dynamic getBytes_dyn();

		static ::lime::text::Font getFont( ::String id,hx::Null< bool >  useCache);
		static Dynamic getFont_dyn();

		static ::lime::graphics::Image getImage( ::String id,hx::Null< bool >  useCache);
		static Dynamic getImage_dyn();

		static ::lime::AssetLibrary getLibrary( ::String name);
		static Dynamic getLibrary_dyn();

		static ::String getPath( ::String id);
		static Dynamic getPath_dyn();

		static ::String getText( ::String id);
		static Dynamic getText_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static bool isLocal( ::String id,::String type,hx::Null< bool >  useCache);
		static Dynamic isLocal_dyn();

		static bool isValidAudio( ::lime::audio::AudioBuffer buffer);
		static Dynamic isValidAudio_dyn();

		static bool isValidImage( ::lime::graphics::Image buffer);
		static Dynamic isValidImage_dyn();

		static Array< ::String > list( ::String type);
		static Dynamic list_dyn();

		static ::lime::app::Future loadAudioBuffer( ::String id,hx::Null< bool >  useCache);
		static Dynamic loadAudioBuffer_dyn();

		static ::lime::app::Future loadBytes( ::String id);
		static Dynamic loadBytes_dyn();

		static ::lime::app::Future loadFont( ::String id);
		static Dynamic loadFont_dyn();

		static ::lime::app::Future loadImage( ::String id,hx::Null< bool >  useCache);
		static Dynamic loadImage_dyn();

		static ::lime::app::Future loadLibrary( ::String name);
		static Dynamic loadLibrary_dyn();

		static ::lime::app::Future loadText( ::String id);
		static Dynamic loadText_dyn();

		static Void registerLibrary( ::String name,::lime::AssetLibrary library);
		static Dynamic registerLibrary_dyn();

		static Void unloadLibrary( ::String name);
		static Dynamic unloadLibrary_dyn();

		static Void library_onChange( );
		static Dynamic library_onChange_dyn();

};

} // end namespace lime

#endif /* INCLUDED_lime_Assets */ 
