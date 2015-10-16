#ifndef INCLUDED_lime_app_Module
#define INCLUDED_lime_app_Module

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
HX_DECLARE_CLASS2(lime,app,Event_Int_Void)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Module_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Module_obj OBJ_;
		Module_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Module")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Module_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Module_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::lime::app::IModule_obj *();
		::String __ToString() const { return HX_HCSTRING("Module","\xcc","\xa8","\x67","\xf5"); }

		::lime::app::Event_Int_Void onExit;
		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		Dynamic onGamepadAxisMove_dyn();

		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		Dynamic onGamepadButtonDown_dyn();

		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		Dynamic onGamepadButtonUp_dyn();

		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad);
		Dynamic onGamepadConnect_dyn();

		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		Dynamic onGamepadDisconnect_dyn();

		virtual Void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value);
		Dynamic onJoystickAxisMove_dyn();

		virtual Void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button);
		Dynamic onJoystickButtonDown_dyn();

		virtual Void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button);
		Dynamic onJoystickButtonUp_dyn();

		virtual Void onJoystickConnect( ::lime::ui::Joystick joystick);
		Dynamic onJoystickConnect_dyn();

		virtual Void onJoystickDisconnect( ::lime::ui::Joystick joystick);
		Dynamic onJoystickDisconnect_dyn();

		virtual Void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position);
		Dynamic onJoystickHatMove_dyn();

		virtual Void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value);
		Dynamic onJoystickTrackballMove_dyn();

		virtual Void onKeyDown( ::lime::ui::Window window,int keyCode,int modifier);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::lime::ui::Window window,int keyCode,int modifier);
		Dynamic onKeyUp_dyn();

		virtual Void onModuleExit( int code);
		Dynamic onModuleExit_dyn();

		virtual Void onMouseDown( ::lime::ui::Window window,Float x,Float y,int button);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( ::lime::ui::Window window,Float x,Float y);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y);
		Dynamic onMouseMoveRelative_dyn();

		virtual Void onMouseUp( ::lime::ui::Window window,Float x,Float y,int button);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY);
		Dynamic onMouseWheel_dyn();

		virtual Void onPreloadComplete( );
		Dynamic onPreloadComplete_dyn();

		virtual Void onPreloadProgress( int loaded,int total);
		Dynamic onPreloadProgress_dyn();

		virtual Void onRenderContextLost( ::lime::graphics::Renderer renderer);
		Dynamic onRenderContextLost_dyn();

		virtual Void onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context);
		Dynamic onRenderContextRestored_dyn();

		virtual Void onTextEdit( ::lime::ui::Window window,::String text,int start,int length);
		Dynamic onTextEdit_dyn();

		virtual Void onTextInput( ::lime::ui::Window window,::String text);
		Dynamic onTextInput_dyn();

		virtual Void onTouchEnd( ::lime::ui::Touch touch);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchMove( ::lime::ui::Touch touch);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchStart( ::lime::ui::Touch touch);
		Dynamic onTouchStart_dyn();

		virtual Void onWindowActivate( ::lime::ui::Window window);
		Dynamic onWindowActivate_dyn();

		virtual Void onWindowClose( ::lime::ui::Window window);
		Dynamic onWindowClose_dyn();

		virtual Void onWindowCreate( ::lime::ui::Window window);
		Dynamic onWindowCreate_dyn();

		virtual Void onWindowDeactivate( ::lime::ui::Window window);
		Dynamic onWindowDeactivate_dyn();

		virtual Void onWindowEnter( ::lime::ui::Window window);
		Dynamic onWindowEnter_dyn();

		virtual Void onWindowFocusIn( ::lime::ui::Window window);
		Dynamic onWindowFocusIn_dyn();

		virtual Void onWindowFocusOut( ::lime::ui::Window window);
		Dynamic onWindowFocusOut_dyn();

		virtual Void onWindowFullscreen( ::lime::ui::Window window);
		Dynamic onWindowFullscreen_dyn();

		virtual Void onWindowLeave( ::lime::ui::Window window);
		Dynamic onWindowLeave_dyn();

		virtual Void onWindowMove( ::lime::ui::Window window,Float x,Float y);
		Dynamic onWindowMove_dyn();

		virtual Void onWindowMinimize( ::lime::ui::Window window);
		Dynamic onWindowMinimize_dyn();

		virtual Void onWindowResize( ::lime::ui::Window window,int width,int height);
		Dynamic onWindowResize_dyn();

		virtual Void onWindowRestore( ::lime::ui::Window window);
		Dynamic onWindowRestore_dyn();

		virtual Void render( ::lime::graphics::Renderer renderer);
		Dynamic render_dyn();

		virtual Void update( int deltaTime);
		Dynamic update_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Module */ 
