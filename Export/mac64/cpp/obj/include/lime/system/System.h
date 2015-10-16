#ifndef INCLUDED_lime_system_System
#define INCLUDED_lime_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_system,Display)
HX_DECLARE_CLASS2(lime,_system,Endian)
HX_DECLARE_CLASS2(lime,_system,System)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  System_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.system.System")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< System_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~System_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("System","\x0f","\x0b","\x77","\x27"); }

		static void __boot();
		static ::String applicationDirectory;
		static ::String applicationStorageDirectory;
		static ::String desktopDirectory;
		static bool disableCFFI;
		static ::String documentsDirectory;
		static ::lime::_system::Endian endianness;
		static ::String fontsDirectory;
		static int numDisplays;
		static ::String userDirectory;
		static Void exit( int code);
		static Dynamic exit_dyn();

		static ::lime::_system::Display getDisplay( int id);
		static Dynamic getDisplay_dyn();

		static int getTimer( );
		static Dynamic getTimer_dyn();

		static Dynamic load( ::String library,::String method,hx::Null< int >  args,hx::Null< bool >  lazy);
		static Dynamic load_dyn();

		static bool get_allowScreenTimeout( );
		static Dynamic get_allowScreenTimeout_dyn();

		static bool set_allowScreenTimeout( bool value);
		static Dynamic set_allowScreenTimeout_dyn();

		static ::String get_applicationDirectory( );
		static Dynamic get_applicationDirectory_dyn();

		static ::String get_applicationStorageDirectory( );
		static Dynamic get_applicationStorageDirectory_dyn();

		static ::String get_desktopDirectory( );
		static Dynamic get_desktopDirectory_dyn();

		static ::String get_documentsDirectory( );
		static Dynamic get_documentsDirectory_dyn();

		static ::String get_fontsDirectory( );
		static Dynamic get_fontsDirectory_dyn();

		static int get_numDisplays( );
		static Dynamic get_numDisplays_dyn();

		static ::String get_userDirectory( );
		static Dynamic get_userDirectory_dyn();

		static ::lime::_system::Endian get_endianness( );
		static Dynamic get_endianness_dyn();

		static bool lime_system_get_allow_screen_timeout( );
		static Dynamic lime_system_get_allow_screen_timeout_dyn();

		static bool lime_system_set_allow_screen_timeout( bool value);
		static Dynamic lime_system_set_allow_screen_timeout_dyn();

		static Dynamic lime_system_get_directory( int type,::String company,::String title);
		static Dynamic lime_system_get_directory_dyn();

		static Dynamic lime_system_get_display( int index);
		static Dynamic lime_system_get_display_dyn();

		static int lime_system_get_num_displays( );
		static Dynamic lime_system_get_num_displays_dyn();

		static Float lime_system_get_timer( );
		static Dynamic lime_system_get_timer_dyn();

		static ::cpp::Function< bool ( ) > cffi_lime_system_get_allow_screen_timeout;
		static ::cpp::Function< bool ( bool ) > cffi_lime_system_set_allow_screen_timeout;
		static ::cpp::Function< ::hx::Object * ( int ,::String ,::String ) > cffi_lime_system_get_directory;
		static ::cpp::Function< ::hx::Object * ( int ) > cffi_lime_system_get_display;
		static ::cpp::Function< int ( ) > cffi_lime_system_get_num_displays;
		static ::cpp::Function< Float ( ) > cffi_lime_system_get_timer;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_System */ 
