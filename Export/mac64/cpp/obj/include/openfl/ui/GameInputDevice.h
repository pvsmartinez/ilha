#ifndef INCLUDED_openfl_ui_GameInputDevice
#define INCLUDED_openfl_ui_GameInputDevice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInputControl)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  GameInputDevice_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameInputDevice_obj OBJ_;
		GameInputDevice_obj();
		Void __construct(::String id,::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.ui.GameInputDevice")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameInputDevice_obj > __new(::String id,::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInputDevice_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameInputDevice","\x4e","\xe5","\xcf","\x03"); }

		static void __boot();
		static int MAX_BUFFER_SIZE;
		bool enabled;
		::String id;
		::String name;
		int sampleInterval;
		::haxe::ds::IntMap __axis;
		::haxe::ds::IntMap __button;
		Array< ::Dynamic > __controls;
		::lime::ui::Gamepad __gamepad;
		virtual int getCachedSamples( ::lime::utils::ByteArray data,hx::Null< bool >  append);
		Dynamic getCachedSamples_dyn();

		virtual ::openfl::ui::GameInputControl getControlAt( int i);
		Dynamic getControlAt_dyn();

		virtual Void startCachingSamples( int numSamples,Array< ::String > controls);
		Dynamic startCachingSamples_dyn();

		virtual Void stopCachingSamples( );
		Dynamic stopCachingSamples_dyn();

		virtual int get_numControls( );
		Dynamic get_numControls_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_GameInputDevice */ 
