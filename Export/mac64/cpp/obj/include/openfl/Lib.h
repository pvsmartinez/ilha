#ifndef INCLUDED_openfl_Lib
#define INCLUDED_openfl_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS1(openfl,Lib)
HX_DECLARE_CLASS2(openfl,display,Application)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  Lib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.Lib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Lib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Lib","\x25","\x07","\x3a","\x00"); }

		static void __boot();
		static ::openfl::display::Application application;
		static ::openfl::display::MovieClip current;
		static ::haxe::ds::StringMap __sentWarnings;
		static Dynamic as( Dynamic v,::hx::Class c);
		static Dynamic as_dyn();

		static ::openfl::display::MovieClip attach( ::String name);
		static Dynamic attach_dyn();

		static int getTimer( );
		static Dynamic getTimer_dyn();

		static Void getURL( ::openfl::net::URLRequest request,::String target);
		static Dynamic getURL_dyn();

		static Void notImplemented( ::String api);
		static Dynamic notImplemented_dyn();

		static Void preventDefaultTouchMove( );
		static Dynamic preventDefaultTouchMove_dyn();

		static Void trace( Dynamic arg);
		static Dynamic trace_dyn();

};

} // end namespace openfl

#endif /* INCLUDED_openfl_Lib */ 
