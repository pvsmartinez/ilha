#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  IModule_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IModule_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value)=0;
virtual Dynamic onGamepadAxisMove_dyn()=0;
		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button)=0;
virtual Dynamic onGamepadButtonDown_dyn()=0;
		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button)=0;
virtual Dynamic onGamepadButtonUp_dyn()=0;
		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad)=0;
virtual Dynamic onGamepadConnect_dyn()=0;
		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad)=0;
virtual Dynamic onGamepadDisconnect_dyn()=0;
		virtual Void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value)=0;
virtual Dynamic onJoystickAxisMove_dyn()=0;
		virtual Void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button)=0;
virtual Dynamic onJoystickButtonDown_dyn()=0;
		virtual Void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button)=0;
virtual Dynamic onJoystickButtonUp_dyn()=0;
		virtual Void onJoystickConnect( ::lime::ui::Joystick joystick)=0;
virtual Dynamic onJoystickConnect_dyn()=0;
		virtual Void onJoystickDisconnect( ::lime::ui::Joystick joystick)=0;
virtual Dynamic onJoystickDisconnect_dyn()=0;
		virtual Void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position)=0;
virtual Dynamic onJoystickHatMove_dyn()=0;
		virtual Void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value)=0;
virtual Dynamic onJoystickTrackballMove_dyn()=0;
		virtual Void onKeyDown( ::lime::ui::Window window,int keyCode,int modifier)=0;
virtual Dynamic onKeyDown_dyn()=0;
		virtual Void onKeyUp( ::lime::ui::Window window,int keyCode,int modifier)=0;
virtual Dynamic onKeyUp_dyn()=0;
		virtual Void onModuleExit( int code)=0;
virtual Dynamic onModuleExit_dyn()=0;
		virtual Void onMouseDown( ::lime::ui::Window window,Float x,Float y,int button)=0;
virtual Dynamic onMouseDown_dyn()=0;
		virtual Void onMouseMove( ::lime::ui::Window window,Float x,Float y)=0;
virtual Dynamic onMouseMove_dyn()=0;
		virtual Void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y)=0;
virtual Dynamic onMouseMoveRelative_dyn()=0;
		virtual Void onMouseUp( ::lime::ui::Window window,Float x,Float y,int button)=0;
virtual Dynamic onMouseUp_dyn()=0;
		virtual Void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY)=0;
virtual Dynamic onMouseWheel_dyn()=0;
		virtual Void onPreloadComplete( )=0;
virtual Dynamic onPreloadComplete_dyn()=0;
		virtual Void onPreloadProgress( int loaded,int total)=0;
virtual Dynamic onPreloadProgress_dyn()=0;
		virtual Void onRenderContextLost( ::lime::graphics::Renderer renderer)=0;
virtual Dynamic onRenderContextLost_dyn()=0;
		virtual Void onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context)=0;
virtual Dynamic onRenderContextRestored_dyn()=0;
		virtual Void onTextEdit( ::lime::ui::Window window,::String text,int start,int length)=0;
virtual Dynamic onTextEdit_dyn()=0;
		virtual Void onTextInput( ::lime::ui::Window window,::String text)=0;
virtual Dynamic onTextInput_dyn()=0;
		virtual Void onTouchEnd( ::lime::ui::Touch touch)=0;
virtual Dynamic onTouchEnd_dyn()=0;
		virtual Void onTouchMove( ::lime::ui::Touch touch)=0;
virtual Dynamic onTouchMove_dyn()=0;
		virtual Void onTouchStart( ::lime::ui::Touch touch)=0;
virtual Dynamic onTouchStart_dyn()=0;
		virtual Void onWindowActivate( ::lime::ui::Window window)=0;
virtual Dynamic onWindowActivate_dyn()=0;
		virtual Void onWindowClose( ::lime::ui::Window window)=0;
virtual Dynamic onWindowClose_dyn()=0;
		virtual Void onWindowCreate( ::lime::ui::Window window)=0;
virtual Dynamic onWindowCreate_dyn()=0;
		virtual Void onWindowDeactivate( ::lime::ui::Window window)=0;
virtual Dynamic onWindowDeactivate_dyn()=0;
		virtual Void onWindowEnter( ::lime::ui::Window window)=0;
virtual Dynamic onWindowEnter_dyn()=0;
		virtual Void onWindowFocusIn( ::lime::ui::Window window)=0;
virtual Dynamic onWindowFocusIn_dyn()=0;
		virtual Void onWindowFocusOut( ::lime::ui::Window window)=0;
virtual Dynamic onWindowFocusOut_dyn()=0;
		virtual Void onWindowFullscreen( ::lime::ui::Window window)=0;
virtual Dynamic onWindowFullscreen_dyn()=0;
		virtual Void onWindowLeave( ::lime::ui::Window window)=0;
virtual Dynamic onWindowLeave_dyn()=0;
		virtual Void onWindowMove( ::lime::ui::Window window,Float x,Float y)=0;
virtual Dynamic onWindowMove_dyn()=0;
		virtual Void onWindowMinimize( ::lime::ui::Window window)=0;
virtual Dynamic onWindowMinimize_dyn()=0;
		virtual Void onWindowResize( ::lime::ui::Window window,int width,int height)=0;
virtual Dynamic onWindowResize_dyn()=0;
		virtual Void onWindowRestore( ::lime::ui::Window window)=0;
virtual Dynamic onWindowRestore_dyn()=0;
		virtual Void render( ::lime::graphics::Renderer renderer)=0;
virtual Dynamic render_dyn()=0;
		virtual Void update( int deltaTime)=0;
virtual Dynamic update_dyn()=0;
};



template<typename IMPL>
class IModule_delegate_ : public IModule_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IModule_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value) { return mDelegate->onGamepadAxisMove(gamepad,axis,value);}
		Dynamic onGamepadAxisMove_dyn() { return mDelegate->onGamepadAxisMove_dyn();}
		Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button) { return mDelegate->onGamepadButtonDown(gamepad,button);}
		Dynamic onGamepadButtonDown_dyn() { return mDelegate->onGamepadButtonDown_dyn();}
		Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button) { return mDelegate->onGamepadButtonUp(gamepad,button);}
		Dynamic onGamepadButtonUp_dyn() { return mDelegate->onGamepadButtonUp_dyn();}
		Void onGamepadConnect( ::lime::ui::Gamepad gamepad) { return mDelegate->onGamepadConnect(gamepad);}
		Dynamic onGamepadConnect_dyn() { return mDelegate->onGamepadConnect_dyn();}
		Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad) { return mDelegate->onGamepadDisconnect(gamepad);}
		Dynamic onGamepadDisconnect_dyn() { return mDelegate->onGamepadDisconnect_dyn();}
		Void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value) { return mDelegate->onJoystickAxisMove(joystick,axis,value);}
		Dynamic onJoystickAxisMove_dyn() { return mDelegate->onJoystickAxisMove_dyn();}
		Void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button) { return mDelegate->onJoystickButtonDown(joystick,button);}
		Dynamic onJoystickButtonDown_dyn() { return mDelegate->onJoystickButtonDown_dyn();}
		Void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button) { return mDelegate->onJoystickButtonUp(joystick,button);}
		Dynamic onJoystickButtonUp_dyn() { return mDelegate->onJoystickButtonUp_dyn();}
		Void onJoystickConnect( ::lime::ui::Joystick joystick) { return mDelegate->onJoystickConnect(joystick);}
		Dynamic onJoystickConnect_dyn() { return mDelegate->onJoystickConnect_dyn();}
		Void onJoystickDisconnect( ::lime::ui::Joystick joystick) { return mDelegate->onJoystickDisconnect(joystick);}
		Dynamic onJoystickDisconnect_dyn() { return mDelegate->onJoystickDisconnect_dyn();}
		Void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position) { return mDelegate->onJoystickHatMove(joystick,hat,position);}
		Dynamic onJoystickHatMove_dyn() { return mDelegate->onJoystickHatMove_dyn();}
		Void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value) { return mDelegate->onJoystickTrackballMove(joystick,trackball,value);}
		Dynamic onJoystickTrackballMove_dyn() { return mDelegate->onJoystickTrackballMove_dyn();}
		Void onKeyDown( ::lime::ui::Window window,int keyCode,int modifier) { return mDelegate->onKeyDown(window,keyCode,modifier);}
		Dynamic onKeyDown_dyn() { return mDelegate->onKeyDown_dyn();}
		Void onKeyUp( ::lime::ui::Window window,int keyCode,int modifier) { return mDelegate->onKeyUp(window,keyCode,modifier);}
		Dynamic onKeyUp_dyn() { return mDelegate->onKeyUp_dyn();}
		Void onModuleExit( int code) { return mDelegate->onModuleExit(code);}
		Dynamic onModuleExit_dyn() { return mDelegate->onModuleExit_dyn();}
		Void onMouseDown( ::lime::ui::Window window,Float x,Float y,int button) { return mDelegate->onMouseDown(window,x,y,button);}
		Dynamic onMouseDown_dyn() { return mDelegate->onMouseDown_dyn();}
		Void onMouseMove( ::lime::ui::Window window,Float x,Float y) { return mDelegate->onMouseMove(window,x,y);}
		Dynamic onMouseMove_dyn() { return mDelegate->onMouseMove_dyn();}
		Void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y) { return mDelegate->onMouseMoveRelative(window,x,y);}
		Dynamic onMouseMoveRelative_dyn() { return mDelegate->onMouseMoveRelative_dyn();}
		Void onMouseUp( ::lime::ui::Window window,Float x,Float y,int button) { return mDelegate->onMouseUp(window,x,y,button);}
		Dynamic onMouseUp_dyn() { return mDelegate->onMouseUp_dyn();}
		Void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY) { return mDelegate->onMouseWheel(window,deltaX,deltaY);}
		Dynamic onMouseWheel_dyn() { return mDelegate->onMouseWheel_dyn();}
		Void onPreloadComplete( ) { return mDelegate->onPreloadComplete();}
		Dynamic onPreloadComplete_dyn() { return mDelegate->onPreloadComplete_dyn();}
		Void onPreloadProgress( int loaded,int total) { return mDelegate->onPreloadProgress(loaded,total);}
		Dynamic onPreloadProgress_dyn() { return mDelegate->onPreloadProgress_dyn();}
		Void onRenderContextLost( ::lime::graphics::Renderer renderer) { return mDelegate->onRenderContextLost(renderer);}
		Dynamic onRenderContextLost_dyn() { return mDelegate->onRenderContextLost_dyn();}
		Void onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context) { return mDelegate->onRenderContextRestored(renderer,context);}
		Dynamic onRenderContextRestored_dyn() { return mDelegate->onRenderContextRestored_dyn();}
		Void onTextEdit( ::lime::ui::Window window,::String text,int start,int length) { return mDelegate->onTextEdit(window,text,start,length);}
		Dynamic onTextEdit_dyn() { return mDelegate->onTextEdit_dyn();}
		Void onTextInput( ::lime::ui::Window window,::String text) { return mDelegate->onTextInput(window,text);}
		Dynamic onTextInput_dyn() { return mDelegate->onTextInput_dyn();}
		Void onTouchEnd( ::lime::ui::Touch touch) { return mDelegate->onTouchEnd(touch);}
		Dynamic onTouchEnd_dyn() { return mDelegate->onTouchEnd_dyn();}
		Void onTouchMove( ::lime::ui::Touch touch) { return mDelegate->onTouchMove(touch);}
		Dynamic onTouchMove_dyn() { return mDelegate->onTouchMove_dyn();}
		Void onTouchStart( ::lime::ui::Touch touch) { return mDelegate->onTouchStart(touch);}
		Dynamic onTouchStart_dyn() { return mDelegate->onTouchStart_dyn();}
		Void onWindowActivate( ::lime::ui::Window window) { return mDelegate->onWindowActivate(window);}
		Dynamic onWindowActivate_dyn() { return mDelegate->onWindowActivate_dyn();}
		Void onWindowClose( ::lime::ui::Window window) { return mDelegate->onWindowClose(window);}
		Dynamic onWindowClose_dyn() { return mDelegate->onWindowClose_dyn();}
		Void onWindowCreate( ::lime::ui::Window window) { return mDelegate->onWindowCreate(window);}
		Dynamic onWindowCreate_dyn() { return mDelegate->onWindowCreate_dyn();}
		Void onWindowDeactivate( ::lime::ui::Window window) { return mDelegate->onWindowDeactivate(window);}
		Dynamic onWindowDeactivate_dyn() { return mDelegate->onWindowDeactivate_dyn();}
		Void onWindowEnter( ::lime::ui::Window window) { return mDelegate->onWindowEnter(window);}
		Dynamic onWindowEnter_dyn() { return mDelegate->onWindowEnter_dyn();}
		Void onWindowFocusIn( ::lime::ui::Window window) { return mDelegate->onWindowFocusIn(window);}
		Dynamic onWindowFocusIn_dyn() { return mDelegate->onWindowFocusIn_dyn();}
		Void onWindowFocusOut( ::lime::ui::Window window) { return mDelegate->onWindowFocusOut(window);}
		Dynamic onWindowFocusOut_dyn() { return mDelegate->onWindowFocusOut_dyn();}
		Void onWindowFullscreen( ::lime::ui::Window window) { return mDelegate->onWindowFullscreen(window);}
		Dynamic onWindowFullscreen_dyn() { return mDelegate->onWindowFullscreen_dyn();}
		Void onWindowLeave( ::lime::ui::Window window) { return mDelegate->onWindowLeave(window);}
		Dynamic onWindowLeave_dyn() { return mDelegate->onWindowLeave_dyn();}
		Void onWindowMove( ::lime::ui::Window window,Float x,Float y) { return mDelegate->onWindowMove(window,x,y);}
		Dynamic onWindowMove_dyn() { return mDelegate->onWindowMove_dyn();}
		Void onWindowMinimize( ::lime::ui::Window window) { return mDelegate->onWindowMinimize(window);}
		Dynamic onWindowMinimize_dyn() { return mDelegate->onWindowMinimize_dyn();}
		Void onWindowResize( ::lime::ui::Window window,int width,int height) { return mDelegate->onWindowResize(window,width,height);}
		Dynamic onWindowResize_dyn() { return mDelegate->onWindowResize_dyn();}
		Void onWindowRestore( ::lime::ui::Window window) { return mDelegate->onWindowRestore(window);}
		Dynamic onWindowRestore_dyn() { return mDelegate->onWindowRestore_dyn();}
		Void render( ::lime::graphics::Renderer renderer) { return mDelegate->render(renderer);}
		Dynamic render_dyn() { return mDelegate->render_dyn();}
		Void update( int deltaTime) { return mDelegate->update(deltaTime);}
		Dynamic update_dyn() { return mDelegate->update_dyn();}
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 
