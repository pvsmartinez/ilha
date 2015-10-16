#ifndef INCLUDED_lime_ui_Joystick
#define INCLUDED_lime_ui_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(lime,app,Event_Int_Float_Void)
HX_DECLARE_CLASS2(lime,app,Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,Event_Int_lime_ui_JoystickHatPosition_Void)
HX_DECLARE_CLASS2(lime,app,Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,Event_lime_ui_Joystick_Void)
HX_DECLARE_CLASS2(lime,ui,Joystick)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Joystick_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();
		Void __construct(int id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.ui.Joystick")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Joystick_obj > __new(int id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Joystick_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Joystick","\xdc","\x9c","\xa3","\x75"); }

		static void __boot();
		static ::haxe::ds::IntMap devices;
		static ::lime::app::Event_lime_ui_Joystick_Void onConnect;
		static Dynamic lime_joystick_get_device_guid( int id);
		static Dynamic lime_joystick_get_device_guid_dyn();

		static Dynamic lime_joystick_get_device_name( int id);
		static Dynamic lime_joystick_get_device_name_dyn();

		static int lime_joystick_get_num_axes( int id);
		static Dynamic lime_joystick_get_num_axes_dyn();

		static int lime_joystick_get_num_buttons( int id);
		static Dynamic lime_joystick_get_num_buttons_dyn();

		static int lime_joystick_get_num_hats( int id);
		static Dynamic lime_joystick_get_num_hats_dyn();

		static int lime_joystick_get_num_trackballs( int id);
		static Dynamic lime_joystick_get_num_trackballs_dyn();

		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_joystick_get_device_guid;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_joystick_get_device_name;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_axes;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_buttons;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_hats;
		static ::cpp::Function< int ( int ) > cffi_lime_joystick_get_num_trackballs;
		bool connected;
		int id;
		::lime::app::Event_Int_Float_Void onAxisMove;
		::lime::app::Event_Int_Void onButtonDown;
		::lime::app::Event_Int_Void onButtonUp;
		::lime::app::Event_Void_Void onDisconnect;
		::lime::app::Event_Int_lime_ui_JoystickHatPosition_Void onHatMove;
		::lime::app::Event_Int_Float_Void onTrackballMove;
		virtual ::String get_guid( );
		Dynamic get_guid_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual int get_numAxes( );
		Dynamic get_numAxes_dyn();

		virtual int get_numButtons( );
		Dynamic get_numButtons_dyn();

		virtual int get_numHats( );
		Dynamic get_numHats_dyn();

		virtual int get_numTrackballs( );
		Dynamic get_numTrackballs_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Joystick */ 
