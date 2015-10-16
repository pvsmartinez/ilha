#ifndef INCLUDED_openfl_AssetLibrary
#define INCLUDED_openfl_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS1(openfl,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  AssetLibrary_obj : public ::lime::AssetLibrary_obj{
	public:
		typedef ::lime::AssetLibrary_obj super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.AssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetLibrary","\x0b","\x4f","\xd4","\x27"); }

		virtual ::openfl::display::MovieClip getMovieClip( ::String id);
		Dynamic getMovieClip_dyn();

		virtual ::lime::app::Future loadMovieClip( ::String id);
		Dynamic loadMovieClip_dyn();

};

} // end namespace openfl

#endif /* INCLUDED_openfl_AssetLibrary */ 
