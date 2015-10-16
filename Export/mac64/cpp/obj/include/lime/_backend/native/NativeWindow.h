#ifndef INCLUDED_lime__backend_native_NativeWindow
#define INCLUDED_lime__backend_native_NativeWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,_system,Display)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeWindow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeWindow_obj OBJ_;
		NativeWindow_obj();
		Void __construct(::lime::ui::Window parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeWindow_obj > __new(::lime::ui::Window parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeWindow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NativeWindow","\x07","\xe9","\xb5","\xcf"); }

		static void __boot();
		static Void lime_window_alert( Dynamic handle,::String message,::String title);
		static Dynamic lime_window_alert_dyn();

		static Void lime_window_close( Dynamic handle);
		static Dynamic lime_window_close_dyn();

		static Dynamic lime_window_create( Dynamic application,int width,int height,int flags,::String title);
		static Dynamic lime_window_create_dyn();

		static Void lime_window_focus( Dynamic handle);
		static Dynamic lime_window_focus_dyn();

		static bool lime_window_get_enable_text_events( Dynamic handle);
		static Dynamic lime_window_get_enable_text_events_dyn();

		static int lime_window_get_height( Dynamic handle);
		static Dynamic lime_window_get_height_dyn();

		static int lime_window_get_id( Dynamic handle);
		static Dynamic lime_window_get_id_dyn();

		static int lime_window_get_width( Dynamic handle);
		static Dynamic lime_window_get_width_dyn();

		static int lime_window_get_x( Dynamic handle);
		static Dynamic lime_window_get_x_dyn();

		static int lime_window_get_y( Dynamic handle);
		static Dynamic lime_window_get_y_dyn();

		static Void lime_window_move( Dynamic handle,int x,int y);
		static Dynamic lime_window_move_dyn();

		static Void lime_window_resize( Dynamic handle,int width,int height);
		static Dynamic lime_window_resize_dyn();

		static Void lime_window_set_enable_text_events( Dynamic handle,bool enabled);
		static Dynamic lime_window_set_enable_text_events_dyn();

		static bool lime_window_set_fullscreen( Dynamic handle,bool fullscreen);
		static Dynamic lime_window_set_fullscreen_dyn();

		static Void lime_window_set_icon( Dynamic handle,Dynamic buffer);
		static Dynamic lime_window_set_icon_dyn();

		static bool lime_window_set_minimized( Dynamic handle,bool minimized);
		static Dynamic lime_window_set_minimized_dyn();

		static Dynamic lime_window_set_title( Dynamic handle,::String title);
		static Dynamic lime_window_set_title_dyn();

		static ::cpp::Function< void ( ::hx::Object * ,::String ,::String ) > cffi_lime_window_alert;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_window_close;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) > cffi_lime_window_create;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_window_focus;
		static ::cpp::Function< bool ( ::hx::Object * ) > cffi_lime_window_get_enable_text_events;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_height;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_id;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_width;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_x;
		static ::cpp::Function< int ( ::hx::Object * ) > cffi_lime_window_get_y;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ) > cffi_lime_window_move;
		static ::cpp::Function< void ( ::hx::Object * ,int ,int ) > cffi_lime_window_resize;
		static ::cpp::Function< void ( ::hx::Object * ,bool ) > cffi_lime_window_set_enable_text_events;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_fullscreen;
		static ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > cffi_lime_window_set_icon;
		static ::cpp::Function< bool ( ::hx::Object * ,bool ) > cffi_lime_window_set_minimized;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > cffi_lime_window_set_title;
		Dynamic handle;
		::lime::ui::Window parent;
		virtual Void alert( ::String message,::String title);
		Dynamic alert_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void create( ::lime::app::Application application);
		Dynamic create_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual ::lime::_system::Display getDisplay( );
		Dynamic getDisplay_dyn();

		virtual bool getEnableTextEvents( );
		Dynamic getEnableTextEvents_dyn();

		virtual Void move( int x,int y);
		Dynamic move_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual bool setEnableTextEvents( bool value);
		Dynamic setEnableTextEvents_dyn();

		virtual bool setFullscreen( bool value);
		Dynamic setFullscreen_dyn();

		virtual Void setIcon( ::lime::graphics::Image image);
		Dynamic setIcon_dyn();

		virtual bool setMinimized( bool value);
		Dynamic setMinimized_dyn();

		virtual ::String setTitle( ::String value);
		Dynamic setTitle_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeWindow */ 
