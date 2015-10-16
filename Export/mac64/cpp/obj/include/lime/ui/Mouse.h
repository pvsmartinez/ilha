#ifndef INCLUDED_lime_ui_Mouse
#define INCLUDED_lime_ui_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,Mouse)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.ui.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static Void hide( );
		static Dynamic hide_dyn();

		static Void show( );
		static Dynamic show_dyn();

		static Void warp( int x,int y,::lime::ui::Window window);
		static Dynamic warp_dyn();

		static ::lime::ui::MouseCursor get_cursor( );
		static Dynamic get_cursor_dyn();

		static ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		static Dynamic set_cursor_dyn();

		static bool get_lock( );
		static Dynamic get_lock_dyn();

		static bool set_lock( bool value);
		static Dynamic set_lock_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Mouse */ 
