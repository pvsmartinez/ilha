#ifndef INCLUDED_lime_AssetLibrary
#define INCLUDED_lime_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS2(lime,app,Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{


class HXCPP_CLASS_ATTRIBUTES  AssetLibrary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.AssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetLibrary","\x0b","\x4f","\xd4","\x27"); }

		::lime::app::Event_Void_Void onChange;
		virtual bool exists( ::String id,::String type);
		Dynamic exists_dyn();

		virtual ::lime::audio::AudioBuffer getAudioBuffer( ::String id);
		Dynamic getAudioBuffer_dyn();

		virtual ::lime::utils::ByteArray getBytes( ::String id);
		Dynamic getBytes_dyn();

		virtual ::lime::text::Font getFont( ::String id);
		Dynamic getFont_dyn();

		virtual ::lime::graphics::Image getImage( ::String id);
		Dynamic getImage_dyn();

		virtual ::String getPath( ::String id);
		Dynamic getPath_dyn();

		virtual ::String getText( ::String id);
		Dynamic getText_dyn();

		virtual bool isLocal( ::String id,::String type);
		Dynamic isLocal_dyn();

		virtual Array< ::String > list( ::String type);
		Dynamic list_dyn();

		virtual ::lime::app::Future load( );
		Dynamic load_dyn();

		virtual ::lime::app::Future loadAudioBuffer( ::String id);
		Dynamic loadAudioBuffer_dyn();

		virtual ::lime::app::Future loadBytes( ::String id);
		Dynamic loadBytes_dyn();

		virtual ::lime::app::Future loadFont( ::String id);
		Dynamic loadFont_dyn();

		virtual ::lime::app::Future loadImage( ::String id);
		Dynamic loadImage_dyn();

		virtual ::lime::app::Future loadText( ::String id);
		Dynamic loadText_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

};

} // end namespace lime

#endif /* INCLUDED_lime_AssetLibrary */ 
