#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public ::lime::app::Module_obj{
	public:
		typedef ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

		static ::lime::app::Application current;
		Dynamic config;
		Array< ::lime::app::IModule > modules;
		::lime::app::Preloader preloader;
		::lime::app::Event_Int_Void onUpdate;
		::lime::graphics::Renderer renderer;
		Array< ::Dynamic > renderers;
		::lime::ui::Window window;
		Array< ::Dynamic > windows;
		::lime::_backend::native::NativeApplication backend;
		::haxe::ds::IntMap windowByID;
		virtual Void addModule( ::lime::app::IModule module);
		Dynamic addModule_dyn();

		virtual Void addRenderer( ::lime::graphics::Renderer renderer);
		Dynamic addRenderer_dyn();

		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual Void createWindow( ::lime::ui::Window window);
		Dynamic createWindow_dyn();

		virtual int exec( );
		Dynamic exec_dyn();

		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);

		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);

		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);

		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad);

		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);

		virtual Void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value);

		virtual Void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button);

		virtual Void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button);

		virtual Void onJoystickConnect( ::lime::ui::Joystick joystick);

		virtual Void onJoystickDisconnect( ::lime::ui::Joystick joystick);

		virtual Void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position);

		virtual Void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value);

		virtual Void onKeyDown( ::lime::ui::Window window,int keyCode,int modifier);

		virtual Void onKeyUp( ::lime::ui::Window window,int keyCode,int modifier);

		virtual Void onModuleExit( int code);

		virtual Void onMouseDown( ::lime::ui::Window window,Float x,Float y,int button);

		virtual Void onMouseMove( ::lime::ui::Window window,Float x,Float y);

		virtual Void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y);

		virtual Void onMouseUp( ::lime::ui::Window window,Float x,Float y,int button);

		virtual Void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY);

		virtual Void onPreloadComplete( );

		virtual Void onPreloadProgress( int loaded,int total);

		virtual Void onRenderContextLost( ::lime::graphics::Renderer renderer);

		virtual Void onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context);

		virtual Void onTextEdit( ::lime::ui::Window window,::String text,int start,int length);

		virtual Void onTextInput( ::lime::ui::Window window,::String text);

		virtual Void onTouchEnd( ::lime::ui::Touch touch);

		virtual Void onTouchMove( ::lime::ui::Touch touch);

		virtual Void onTouchStart( ::lime::ui::Touch touch);

		virtual Void onWindowActivate( ::lime::ui::Window window);

		virtual Void onWindowClose( ::lime::ui::Window window);

		virtual Void onWindowCreate( ::lime::ui::Window window);

		virtual Void onWindowDeactivate( ::lime::ui::Window window);

		virtual Void onWindowEnter( ::lime::ui::Window window);

		virtual Void onWindowFocusIn( ::lime::ui::Window window);

		virtual Void onWindowFocusOut( ::lime::ui::Window window);

		virtual Void onWindowFullscreen( ::lime::ui::Window window);

		virtual Void onWindowLeave( ::lime::ui::Window window);

		virtual Void onWindowMinimize( ::lime::ui::Window window);

		virtual Void onWindowMove( ::lime::ui::Window window,Float x,Float y);

		virtual Void onWindowResize( ::lime::ui::Window window,int width,int height);

		virtual Void onWindowRestore( ::lime::ui::Window window);

		virtual Void removeModule( ::lime::app::IModule module);
		Dynamic removeModule_dyn();

		virtual Void removeRenderer( ::lime::graphics::Renderer renderer);
		Dynamic removeRenderer_dyn();

		virtual Void removeWindow( ::lime::ui::Window window);
		Dynamic removeWindow_dyn();

		virtual Void render( ::lime::graphics::Renderer renderer);

		virtual Void setPreloader( ::lime::app::Preloader preloader);
		Dynamic setPreloader_dyn();

		virtual Void update( int deltaTime);

		virtual Float get_frameRate( );
		Dynamic get_frameRate_dyn();

		virtual Float set_frameRate( Float value);
		Dynamic set_frameRate_dyn();

		virtual ::lime::graphics::Renderer get_renderer( );
		Dynamic get_renderer_dyn();

		virtual ::lime::ui::Window get_window( );
		Dynamic get_window_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
