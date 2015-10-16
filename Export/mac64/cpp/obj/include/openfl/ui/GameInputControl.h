#ifndef INCLUDED_openfl_ui_GameInputControl
#define INCLUDED_openfl_ui_GameInputControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInputControl)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  GameInputControl_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef GameInputControl_obj OBJ_;
		GameInputControl_obj();
		Void __construct(::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,hx::Null< Float >  __o_value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.ui.GameInputControl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameInputControl_obj > __new(::openfl::ui::GameInputDevice device,::String id,Float minValue,Float maxValue,hx::Null< Float >  __o_value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInputControl_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameInputControl","\xa5","\x03","\x31","\x94"); }

		::openfl::ui::GameInputDevice device;
		::String id;
		Float maxValue;
		Float minValue;
		Float value;
};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_GameInputControl */ 
