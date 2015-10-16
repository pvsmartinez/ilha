#ifndef INCLUDED_openfl_display_Stage
#define INCLUDED_openfl_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display,StageAlign)
HX_DECLARE_CLASS2(openfl,display,StageDisplayState)
HX_DECLARE_CLASS2(openfl,display,StageQuality)
HX_DECLARE_CLASS2(openfl,display,StageScaleMode)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage_obj : public ::openfl::display::DisplayObjectContainer_obj{
	public:
		typedef ::openfl::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();
		Void __construct(::lime::ui::Window window,Dynamic color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Stage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stage_obj > __new(::lime::ui::Window window,Dynamic color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::lime::app::IModule_obj *();
		::String __ToString() const { return HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17"); }

		::openfl::display::StageAlign align;
		bool allowsFullScreen;
		bool allowsFullScreenInteractive;
		::lime::app::Application application;
		::openfl::display::StageQuality quality;
		::openfl::display::StageScaleMode scaleMode;
		Array< ::Dynamic > stage3Ds;
		bool stageFocusRect;
		int stageHeight;
		int stageWidth;
		::lime::ui::Window window;
		bool __clearBeforeRender;
		int __color;
		Array< Float > __colorSplit;
		::String __colorString;
		int __deltaTime;
		bool __dirty;
		::openfl::display::StageDisplayState __displayState;
		::openfl::geom::Rectangle __dragBounds;
		::openfl::display::Sprite __dragObject;
		Float __dragOffsetX;
		Float __dragOffsetY;
		::openfl::display::InteractiveObject __focus;
		bool __fullscreen;
		bool __invalidated;
		int __lastClickTime;
		bool __macKeyboard;
		Array< ::Dynamic > __mouseOutStack;
		Float __mouseX;
		Float __mouseY;
		int __originalWidth;
		int __originalHeight;
		::openfl::_internal::renderer::AbstractRenderer __renderer;
		bool __rendering;
		Array< ::Dynamic > __stack;
		bool __transparent;
		bool __wasDirty;
		virtual ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual ::openfl::geom::Point localToGlobal( ::openfl::geom::Point pos);

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

		virtual Void onTouchMove( ::lime::ui::Touch touch);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchEnd( ::lime::ui::Touch touch);
		Dynamic onTouchEnd_dyn();

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

		virtual Void onWindowMinimize( ::lime::ui::Window window);
		Dynamic onWindowMinimize_dyn();

		virtual Void onWindowMove( ::lime::ui::Window window,Float x,Float y);
		Dynamic onWindowMove_dyn();

		virtual Void onWindowResize( ::lime::ui::Window window,int width,int height);
		Dynamic onWindowResize_dyn();

		virtual Void onWindowRestore( ::lime::ui::Window window);
		Dynamic onWindowRestore_dyn();

		virtual Void render( ::lime::graphics::Renderer renderer);
		Dynamic render_dyn();

		virtual Void update( int deltaTime);
		Dynamic update_dyn();

		virtual Void __drag( ::openfl::geom::Point mouse);
		Dynamic __drag_dyn();

		virtual Void __fireEvent( ::openfl::events::Event event,Array< ::Dynamic > stack);
		Dynamic __fireEvent_dyn();

		virtual bool __getInteractive( Array< ::Dynamic > stack);

		virtual Void __onKey( ::String type,int keyCode,int modifier);
		Dynamic __onKey_dyn();

		virtual Void __onMouse( ::String type,Float x,Float y,int button);
		Dynamic __onMouse_dyn();

		virtual Void __onMouseWheel( Float deltaX,Float deltaY);
		Dynamic __onMouseWheel_dyn();

		virtual Void __onTouch( ::String type,::lime::ui::Touch touch);
		Dynamic __onTouch_dyn();

		virtual Void __resize( );
		Dynamic __resize_dyn();

		virtual Void __startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds);
		Dynamic __startDrag_dyn();

		virtual Void __stopDrag( ::openfl::display::Sprite sprite);
		Dynamic __stopDrag_dyn();

		virtual Void __update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGrahpics);

		virtual Float get_mouseX( );

		virtual Float get_mouseY( );

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual ::openfl::display::StageDisplayState get_displayState( );
		Dynamic get_displayState_dyn();

		virtual ::openfl::display::StageDisplayState set_displayState( ::openfl::display::StageDisplayState value);
		Dynamic set_displayState_dyn();

		virtual ::openfl::display::InteractiveObject get_focus( );
		Dynamic get_focus_dyn();

		virtual ::openfl::display::InteractiveObject set_focus( ::openfl::display::InteractiveObject value);
		Dynamic set_focus_dyn();

		virtual Float get_frameRate( );
		Dynamic get_frameRate_dyn();

		virtual Float set_frameRate( Float value);
		Dynamic set_frameRate_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage */ 
