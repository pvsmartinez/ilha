#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#include <lime/_backend/native/_NativeApplication/ApplicationEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#include <lime/_backend/native/_NativeApplication/JoystickEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo
#include <lime/_backend/native/_NativeApplication/SensorEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Float_Void
#include <lime/app/Event_Float_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Int_Void
#include <lime/app/Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Void
#include <lime/app/Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Float_Void
#include <lime/app/Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Int_Void
#include <lime/app/Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Int_Int_Void
#include <lime/app/Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_String_Void
#include <lime/app/Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_graphics_RenderContext_Void
#include <lime/app/Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_GamepadButton_Void
#include <lime/app/Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Gamepad_Void
#include <lime/app/Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Joystick_Void
#include <lime/app/Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Touch_Void
#include <lime/app/Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_Sensor
#include <lime/system/Sensor.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeApplication_obj::__construct(::lime::app::Application parent)
{
HX_STACK_FRAME("lime._backend.native.NativeApplication","new",0xf81a1e94,"lime._backend.native.NativeApplication.new","lime/_backend/native/NativeApplication.hx",38,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(52)
	this->windowEventInfo = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(51)
	this->unusedTouchesPool = ::List_obj::__new();
	HX_STACK_LINE(50)
	this->touchEventInfo = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(49)
	this->textEventInfo = ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(48)
	this->sensorEventInfo = ::lime::_backend::native::_NativeApplication::SensorEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(47)
	this->renderEventInfo = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(46)
	this->mouseEventInfo = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(45)
	this->keyEventInfo = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(44)
	this->joystickEventInfo = ::lime::_backend::native::_NativeApplication::JoystickEventInfo_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(43)
	this->gamepadEventInfo = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::haxe::ds::IntMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/_backend/native/NativeApplication.hx",42,0xb13849fd)
			{
				HX_STACK_LINE(42)
				::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(42)
				::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(42)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	this->currentTouches = _Function_1_1::Block();
	HX_STACK_LINE(41)
	this->applicationEventInfo = ::lime::_backend::native::_NativeApplication::ApplicationEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(62)
	this->parent = parent;
	HX_STACK_LINE(63)
	this->frameRate = (int)60;
	HX_STACK_LINE(65)
	::lime::audio::AudioManager_obj::init(null());
}
;
	return null();
}

//NativeApplication_obj::~NativeApplication_obj() { }

Dynamic NativeApplication_obj::__CreateEmpty() { return  new NativeApplication_obj; }
hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new(::lime::app::Application parent)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeApplication_obj > _result_ = new NativeApplication_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeApplication_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","create",0xd50cf148,"lime._backend.native.NativeApplication.create","lime/_backend/native/NativeApplication.hx",77,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/_backend/native/NativeApplication.hx",77,0xb13849fd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(77)
		this->handle = ((Dynamic)(::lime::_backend::native::NativeApplication_obj::cffi_lime_application_create.call(hx::DynamicPtr(_Function_1_1::Block()))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,create,(void))

int NativeApplication_obj::exec( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","exec",0x18dc12dd,"lime._backend.native.NativeApplication.exec","lime/_backend/native/NativeApplication.hx",83,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_application_event_manager_register.call(hx::DynamicPtr(this->handleApplicationEvent_dyn()),hx::DynamicPtr(this->applicationEventInfo));
	HX_STACK_LINE(88)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_gamepad_event_manager_register.call(hx::DynamicPtr(this->handleGamepadEvent_dyn()),hx::DynamicPtr(this->gamepadEventInfo));
	HX_STACK_LINE(89)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_joystick_event_manager_register.call(hx::DynamicPtr(this->handleJoystickEvent_dyn()),hx::DynamicPtr(this->joystickEventInfo));
	HX_STACK_LINE(90)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_key_event_manager_register.call(hx::DynamicPtr(this->handleKeyEvent_dyn()),hx::DynamicPtr(this->keyEventInfo));
	HX_STACK_LINE(91)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_mouse_event_manager_register.call(hx::DynamicPtr(this->handleMouseEvent_dyn()),hx::DynamicPtr(this->mouseEventInfo));
	HX_STACK_LINE(92)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_render_event_manager_register.call(hx::DynamicPtr(this->handleRenderEvent_dyn()),hx::DynamicPtr(this->renderEventInfo));
	HX_STACK_LINE(93)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_text_event_manager_register.call(hx::DynamicPtr(this->handleTextEvent_dyn()),hx::DynamicPtr(this->textEventInfo));
	HX_STACK_LINE(94)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_touch_event_manager_register.call(hx::DynamicPtr(this->handleTouchEvent_dyn()),hx::DynamicPtr(this->touchEventInfo));
	HX_STACK_LINE(95)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_window_event_manager_register.call(hx::DynamicPtr(this->handleWindowEvent_dyn()),hx::DynamicPtr(this->windowEventInfo));
	HX_STACK_LINE(125)
	int result = ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_exec.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(126)
	::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	int tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	tmp->onExit->dispatch(tmp1);
	HX_STACK_LINE(128)
	int tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	return tmp2;
	HX_STACK_LINE(133)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exec,return )

Void NativeApplication_obj::exit( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","exit",0x18dc166a,"lime._backend.native.NativeApplication.exit","lime/_backend/native/NativeApplication.hx",140,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		::lime::audio::AudioManager_obj::shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exit,(void))

Float NativeApplication_obj::getFrameRate( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","getFrameRate",0xe79bf983,"lime._backend.native.NativeApplication.getFrameRate","lime/_backend/native/NativeApplication.hx",145,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	Float tmp = this->frameRate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,getFrameRate,return )

Void NativeApplication_obj::handleApplicationEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleApplicationEvent",0x44389cbe,"lime._backend.native.NativeApplication.handleApplicationEvent","lime/_backend/native/NativeApplication.hx",154,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp = this->applicationEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(158)
				this->updateTimer();
				HX_STACK_LINE(159)
				::lime::app::Application tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(159)
				::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp3 = this->applicationEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(159)
				int tmp4 = tmp3->deltaTime;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				tmp2->onUpdate->dispatch(tmp4);
			}
			;break;
			case (int)1: {
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleApplicationEvent,(void))

Void NativeApplication_obj::handleGamepadEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleGamepadEvent",0x54f9e7cd,"lime._backend.native.NativeApplication.handleGamepadEvent","lime/_backend/native/NativeApplication.hx",172,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp = this->gamepadEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(176)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(176)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(177)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(177)
				if ((tmp6)){
					HX_STACK_LINE(177)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(177)
					int tmp8 = tmp7->axis;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(177)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp9 = this->gamepadEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(177)
					Float tmp10 = tmp9->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(177)
					gamepad->onAxisMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(181)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(181)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(181)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(182)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(182)
				if ((tmp6)){
					HX_STACK_LINE(182)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(182)
					int tmp8 = tmp7->button;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(182)
					gamepad->onButtonDown->dispatch(tmp8);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(186)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(186)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(186)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(186)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(186)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(187)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(187)
				if ((tmp6)){
					HX_STACK_LINE(187)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(187)
					int tmp8 = tmp7->button;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(187)
					gamepad->onButtonUp->dispatch(tmp8);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(191)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(191)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(191)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(191)
				bool tmp5 = tmp2->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(191)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(191)
				if ((tmp6)){
					HX_STACK_LINE(193)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp7 = this->gamepadEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(193)
					int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(193)
					::lime::ui::Gamepad tmp9 = ::lime::ui::Gamepad_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(193)
					::lime::ui::Gamepad gamepad = tmp9;		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(194)
					::haxe::ds::IntMap tmp10 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(194)
					::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp11 = this->gamepadEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(194)
					int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(194)
					::lime::ui::Gamepad tmp13 = gamepad;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(194)
					tmp10->set(tmp12,tmp13);
					HX_STACK_LINE(195)
					::lime::app::Event_lime_ui_Gamepad_Void tmp14 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(195)
					::lime::ui::Gamepad tmp15 = gamepad;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(195)
					tmp14->dispatch(tmp15);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(201)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp3 = this->gamepadEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(201)
				::lime::ui::Gamepad tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				::lime::ui::Gamepad gamepad = tmp5;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(202)
				bool tmp6 = (gamepad != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(202)
				if ((tmp6)){
					HX_STACK_LINE(202)
					gamepad->connected = false;
				}
				HX_STACK_LINE(203)
				::haxe::ds::IntMap tmp7 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp8 = this->gamepadEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(203)
				tmp7->remove(tmp9);
				HX_STACK_LINE(204)
				bool tmp10 = (gamepad != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(204)
				if ((tmp10)){
					HX_STACK_LINE(204)
					gamepad->onDisconnect->dispatch();
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleGamepadEvent,(void))

Void NativeApplication_obj::handleJoystickEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleJoystickEvent",0xefd0c72a,"lime._backend.native.NativeApplication.handleJoystickEvent","lime/_backend/native/NativeApplication.hx",213,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp = this->joystickEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(217)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(217)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(217)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(218)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(218)
				if ((tmp6)){
					HX_STACK_LINE(218)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(218)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(218)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(218)
					Float tmp10 = tmp9->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(218)
					joystick->onAxisMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(222)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(222)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(222)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(222)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(222)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(223)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(223)
				if ((tmp6)){
					HX_STACK_LINE(223)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(223)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(223)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(223)
					int tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(223)
					joystick->onHatMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(227)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(227)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(228)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(228)
				if ((tmp6)){
					HX_STACK_LINE(228)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(228)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(228)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp9 = this->joystickEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(228)
					Float tmp10 = tmp9->value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(228)
					joystick->onTrackballMove->dispatch(tmp8,tmp10);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(232)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(232)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(232)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(232)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(233)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(233)
				if ((tmp6)){
					HX_STACK_LINE(233)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(233)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(233)
					joystick->onButtonDown->dispatch(tmp8);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(237)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(237)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(237)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(237)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(238)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				if ((tmp6)){
					HX_STACK_LINE(238)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(238)
					int tmp8 = tmp7->index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(238)
					joystick->onButtonUp->dispatch(tmp8);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(242)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(242)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(242)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(242)
				bool tmp5 = tmp2->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(242)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(242)
				if ((tmp6)){
					HX_STACK_LINE(244)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp7 = this->joystickEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(244)
					int tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(244)
					::lime::ui::Joystick tmp9 = ::lime::ui::Joystick_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(244)
					::lime::ui::Joystick joystick = tmp9;		HX_STACK_VAR(joystick,"joystick");
					HX_STACK_LINE(245)
					::haxe::ds::IntMap tmp10 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(245)
					::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp11 = this->joystickEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(245)
					int tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(245)
					::lime::ui::Joystick tmp13 = joystick;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(245)
					tmp10->set(tmp12,tmp13);
					HX_STACK_LINE(246)
					::lime::app::Event_lime_ui_Joystick_Void tmp14 = ::lime::ui::Joystick_obj::onConnect;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(246)
					::lime::ui::Joystick tmp15 = joystick;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(246)
					tmp14->dispatch(tmp15);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(252)
				::haxe::ds::IntMap tmp2 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(252)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp3 = this->joystickEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(252)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(252)
				::lime::ui::Joystick tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(252)
				::lime::ui::Joystick joystick = tmp5;		HX_STACK_VAR(joystick,"joystick");
				HX_STACK_LINE(253)
				bool tmp6 = (joystick != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(253)
				if ((tmp6)){
					HX_STACK_LINE(253)
					joystick->connected = false;
				}
				HX_STACK_LINE(254)
				::haxe::ds::IntMap tmp7 = ::lime::ui::Joystick_obj::devices;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(254)
				::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp8 = this->joystickEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(254)
				int tmp9 = tmp8->id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(254)
				tmp7->remove(tmp9);
				HX_STACK_LINE(255)
				bool tmp10 = (joystick != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(255)
				if ((tmp10)){
					HX_STACK_LINE(255)
					joystick->onDisconnect->dispatch();
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleJoystickEvent,(void))

Void NativeApplication_obj::handleKeyEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleKeyEvent",0xe8484c0f,"lime._backend.native.NativeApplication.handleKeyEvent","lime/_backend/native/NativeApplication.hx",262,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		::lime::_backend::native::_NativeApplication::KeyEventInfo tmp1 = this->keyEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(266)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		if ((tmp4)){
			HX_STACK_LINE(268)
			::lime::_backend::native::_NativeApplication::KeyEventInfo tmp5 = this->keyEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(272)
					::lime::_backend::native::_NativeApplication::KeyEventInfo tmp7 = this->keyEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(272)
					int tmp8 = tmp7->keyCode;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(272)
					::lime::_backend::native::_NativeApplication::KeyEventInfo tmp9 = this->keyEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(272)
					int tmp10 = tmp9->modifier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(272)
					window->onKeyDown->dispatch(tmp8,tmp10);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(276)
					::lime::_backend::native::_NativeApplication::KeyEventInfo tmp7 = this->keyEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(276)
					int tmp8 = tmp7->keyCode;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(276)
					::lime::_backend::native::_NativeApplication::KeyEventInfo tmp9 = this->keyEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(276)
					int tmp10 = tmp9->modifier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(276)
					window->onKeyUp->dispatch(tmp8,tmp10);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleKeyEvent,(void))

Void NativeApplication_obj::handleMouseEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleMouseEvent",0xe26e46c9,"lime._backend.native.NativeApplication.handleMouseEvent","lime/_backend/native/NativeApplication.hx",285,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(287)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		::lime::_backend::native::_NativeApplication::MouseEventInfo tmp1 = this->mouseEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(289)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		if ((tmp4)){
			HX_STACK_LINE(291)
			::lime::_backend::native::_NativeApplication::MouseEventInfo tmp5 = this->mouseEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(295)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(295)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(295)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(295)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(295)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(295)
					int tmp12 = tmp11->button;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(295)
					window->onMouseDown->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(299)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(299)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(299)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(299)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(299)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(299)
					int tmp12 = tmp11->button;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(299)
					window->onMouseUp->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(303)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(303)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(303)
					window->onMouseMove->dispatch(tmp8,tmp10);
					HX_STACK_LINE(304)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp11 = this->mouseEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(304)
					Float tmp12 = tmp11->movementX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(304)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp13 = this->mouseEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(304)
					Float tmp14 = tmp13->movementY;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(304)
					window->onMouseMoveRelative->dispatch(tmp12,tmp14);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(308)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = this->mouseEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(308)
					Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(308)
					::lime::_backend::native::_NativeApplication::MouseEventInfo tmp9 = this->mouseEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(308)
					Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(308)
					window->onMouseWheel->dispatch(tmp8,tmp10);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleMouseEvent,(void))

Void NativeApplication_obj::handleRenderEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleRenderEvent",0xf3931b50,"lime._backend.native.NativeApplication.handleRenderEvent","lime/_backend/native/NativeApplication.hx",321,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		Array< ::Dynamic > _g1 = tmp->renderers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(321)
		while((true)){
			HX_STACK_LINE(321)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(321)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(321)
			if ((tmp2)){
				HX_STACK_LINE(321)
				break;
			}
			HX_STACK_LINE(321)
			::lime::graphics::Renderer tmp3 = _g1->__get(_g).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			::lime::graphics::Renderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(321)
			++(_g);
			HX_STACK_LINE(323)
			::lime::app::Application tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(323)
			tmp4->renderer = renderer;
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				::lime::_backend::native::_NativeApplication::RenderEventInfo tmp5 = this->renderEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(325)
				int _g2 = tmp5->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(325)
				int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(325)
				switch( (int)(tmp6)){
					case (int)0: {
						HX_STACK_LINE(329)
						renderer->render();
						HX_STACK_LINE(330)
						renderer->onRender->dispatch();
						HX_STACK_LINE(331)
						renderer->flip();
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(335)
						bool tmp7 = renderer->backend->useHardware;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(335)
						if ((tmp7)){
							HX_STACK_LINE(337)
							renderer->context = null();
							HX_STACK_LINE(338)
							renderer->onContextLost->dispatch();
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(344)
						bool tmp7 = renderer->backend->useHardware;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(344)
						if ((tmp7)){
							HX_STACK_LINE(349)
							::lime::graphics::GLRenderContext tmp8 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(349)
							::lime::graphics::RenderContext tmp9 = ::lime::graphics::RenderContext_obj::OPENGL(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(349)
							renderer->context = tmp9;
							HX_STACK_LINE(352)
							::lime::graphics::RenderContext tmp10 = renderer->context;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(352)
							renderer->onContextRestored->dispatch(tmp10);
						}
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleRenderEvent,(void))

Void NativeApplication_obj::handleSensorEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleSensorEvent",0x6e3cd9ec,"lime._backend.native.NativeApplication.handleSensorEvent","lime/_backend/native/NativeApplication.hx",363,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(365)
		::haxe::ds::IntMap tmp = ::lime::_system::Sensor_obj::sensorByID;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		::lime::_backend::native::_NativeApplication::SensorEventInfo tmp1 = this->sensorEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		int tmp2 = tmp1->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		::lime::_system::Sensor tmp3 = tmp->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		::lime::_system::Sensor sensor = tmp3;		HX_STACK_VAR(sensor,"sensor");
		HX_STACK_LINE(367)
		bool tmp4 = (sensor != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(367)
		if ((tmp4)){
			HX_STACK_LINE(369)
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp5 = this->sensorEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(369)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(369)
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp7 = this->sensorEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(369)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(369)
			::lime::_backend::native::_NativeApplication::SensorEventInfo tmp9 = this->sensorEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(369)
			Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(369)
			sensor->__Field(HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp6,tmp8,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleSensorEvent,(void))

Void NativeApplication_obj::handleTextEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTextEvent",0x373acb99,"lime._backend.native.NativeApplication.handleTextEvent","lime/_backend/native/NativeApplication.hx",376,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(378)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		::lime::_backend::native::_NativeApplication::TextEventInfo tmp1 = this->textEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(378)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(380)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		if ((tmp4)){
			HX_STACK_LINE(382)
			::lime::_backend::native::_NativeApplication::TextEventInfo tmp5 = this->textEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(382)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(386)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp7 = this->textEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(386)
					::String tmp8 = tmp7->text;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(386)
					window->onTextInput->dispatch(tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(390)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp7 = this->textEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(390)
					::String tmp8 = tmp7->text;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(390)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp9 = this->textEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(390)
					int tmp10 = tmp9->start;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(390)
					::lime::_backend::native::_NativeApplication::TextEventInfo tmp11 = this->textEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(390)
					int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(390)
					window->onTextEdit->dispatch(tmp8,tmp10,tmp12);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTextEvent,(void))

Void NativeApplication_obj::handleTouchEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTouchEvent",0xbe3236ef,"lime._backend.native.NativeApplication.handleTouchEvent","lime/_backend/native/NativeApplication.hx",403,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(403)
		::lime::_backend::native::_NativeApplication::TouchEventInfo tmp = this->touchEventInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		int _g = tmp->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(407)
				::List tmp2 = this->unusedTouchesPool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(407)
				::lime::ui::Touch tmp3 = tmp2->pop();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(407)
				::lime::ui::Touch touch = tmp3;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(409)
				bool tmp4 = (touch == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(409)
				if ((tmp4)){
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(411)
					Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(411)
					Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(411)
					int tmp10 = tmp9->id;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					Float tmp12 = tmp11->dx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp13 = this->touchEventInfo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(411)
					Float tmp14 = tmp13->dy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(411)
					Float tmp16 = tmp15->pressure;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(411)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp17 = this->touchEventInfo;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(411)
					int tmp18 = tmp17->device;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(411)
					::lime::ui::Touch tmp19 = ::lime::ui::Touch_obj::__new(tmp6,tmp8,tmp10,tmp12,tmp14,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(411)
					touch = tmp19;
				}
				else{
					HX_STACK_LINE(415)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp5 = this->touchEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(415)
					touch->x = tmp5->x;
					HX_STACK_LINE(416)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp6 = this->touchEventInfo;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(416)
					touch->y = tmp6->y;
					HX_STACK_LINE(417)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(417)
					touch->id = tmp7->id;
					HX_STACK_LINE(418)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(418)
					touch->dx = tmp8->dx;
					HX_STACK_LINE(419)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(419)
					touch->dy = tmp9->dy;
					HX_STACK_LINE(420)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(420)
					touch->pressure = tmp10->pressure;
					HX_STACK_LINE(421)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(421)
					touch->device = tmp11->device;
				}
				HX_STACK_LINE(425)
				::haxe::ds::IntMap tmp5 = this->currentTouches;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(425)
				int tmp6 = touch->id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(425)
				::lime::ui::Touch tmp7 = touch;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(425)
				tmp5->set(tmp6,tmp7);
				HX_STACK_LINE(427)
				::lime::app::Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				::lime::ui::Touch tmp9 = touch;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(427)
				tmp8->dispatch(tmp9);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(431)
				::haxe::ds::IntMap tmp2 = this->currentTouches;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(431)
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(431)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(431)
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(431)
				::lime::ui::Touch touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(433)
				bool tmp6 = (touch != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(433)
				if ((tmp6)){
					HX_STACK_LINE(435)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(435)
					touch->x = tmp7->x;
					HX_STACK_LINE(436)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(436)
					touch->y = tmp8->y;
					HX_STACK_LINE(437)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(437)
					touch->dx = tmp9->dx;
					HX_STACK_LINE(438)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(438)
					touch->dy = tmp10->dy;
					HX_STACK_LINE(439)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(439)
					touch->pressure = tmp11->pressure;
					HX_STACK_LINE(441)
					::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(441)
					::lime::ui::Touch tmp13 = touch;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(441)
					tmp12->dispatch(tmp13);
					HX_STACK_LINE(443)
					::haxe::ds::IntMap tmp14 = this->currentTouches;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(443)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp15 = this->touchEventInfo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(443)
					int tmp16 = tmp15->id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(443)
					tmp14->remove(tmp16);
					HX_STACK_LINE(444)
					::List tmp17 = this->unusedTouchesPool;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(444)
					::lime::ui::Touch tmp18 = touch;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(444)
					tmp17->add(tmp18);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(450)
				::haxe::ds::IntMap tmp2 = this->currentTouches;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(450)
				::lime::_backend::native::_NativeApplication::TouchEventInfo tmp3 = this->touchEventInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(450)
				int tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(450)
				::lime::ui::Touch tmp5 = tmp2->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(450)
				::lime::ui::Touch touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(452)
				bool tmp6 = (touch != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(452)
				if ((tmp6)){
					HX_STACK_LINE(454)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp7 = this->touchEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(454)
					touch->x = tmp7->x;
					HX_STACK_LINE(455)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = this->touchEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(455)
					touch->y = tmp8->y;
					HX_STACK_LINE(456)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp9 = this->touchEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(456)
					touch->dx = tmp9->dx;
					HX_STACK_LINE(457)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp10 = this->touchEventInfo;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(457)
					touch->dy = tmp10->dy;
					HX_STACK_LINE(458)
					::lime::_backend::native::_NativeApplication::TouchEventInfo tmp11 = this->touchEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(458)
					touch->pressure = tmp11->pressure;
					HX_STACK_LINE(460)
					::lime::app::Event_lime_ui_Touch_Void tmp12 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(460)
					::lime::ui::Touch tmp13 = touch;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(460)
					tmp12->dispatch(tmp13);
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTouchEvent,(void))

Void NativeApplication_obj::handleWindowEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleWindowEvent",0x18b48476,"lime._backend.native.NativeApplication.handleWindowEvent","lime/_backend/native/NativeApplication.hx",471,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(473)
		::lime::app::Application tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		::lime::_backend::native::_NativeApplication::WindowEventInfo tmp1 = this->windowEventInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(473)
		int tmp2 = tmp1->windowID;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(473)
		::lime::ui::Window tmp3 = tmp->windowByID->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(473)
		::lime::ui::Window window = tmp3;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(475)
		bool tmp4 = (window != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(475)
		if ((tmp4)){
			HX_STACK_LINE(477)
			::lime::_backend::native::_NativeApplication::WindowEventInfo tmp5 = this->windowEventInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(477)
			int _g = tmp5->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(477)
			int tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(481)
					window->onActivate->dispatch();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(485)
					window->onClose->dispatch();
					HX_STACK_LINE(486)
					window->close();
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(490)
					window->onDeactivate->dispatch();
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(494)
					window->onEnter->dispatch();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(498)
					window->onFocusIn->dispatch();
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(502)
					window->onFocusOut->dispatch();
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(506)
					window->onLeave->dispatch();
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(510)
					window->__minimized = true;
					HX_STACK_LINE(511)
					window->onMinimize->dispatch();
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(515)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(515)
					window->__x = tmp7->x;
					HX_STACK_LINE(516)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(516)
					window->__y = tmp8->y;
					HX_STACK_LINE(517)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp9 = this->windowEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(517)
					int tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(517)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp11 = this->windowEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(517)
					int tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(517)
					window->onMove->dispatch(tmp10,tmp12);
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(521)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp7 = this->windowEventInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(521)
					window->__width = tmp7->width;
					HX_STACK_LINE(522)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp8 = this->windowEventInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(522)
					window->__height = tmp8->height;
					HX_STACK_LINE(523)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp9 = this->windowEventInfo;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(523)
					int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(523)
					::lime::_backend::native::_NativeApplication::WindowEventInfo tmp11 = this->windowEventInfo;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(523)
					int tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(523)
					window->onResize->dispatch(tmp10,tmp12);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(527)
					window->__fullscreen = false;
					HX_STACK_LINE(528)
					window->__minimized = false;
					HX_STACK_LINE(529)
					window->onRestore->dispatch();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleWindowEvent,(void))

Float NativeApplication_obj::setFrameRate( Float value){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","setFrameRate",0xfc951cf7,"lime._backend.native.NativeApplication.setFrameRate","lime/_backend/native/NativeApplication.hx",538,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(541)
	::lime::_backend::native::NativeApplication_obj::cffi_lime_application_set_frame_rate.call(hx::DynamicPtr(this->handle),value);
	HX_STACK_LINE(543)
	Float tmp = this->frameRate = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(543)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,setFrameRate,return )

Void NativeApplication_obj::updateTimer( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","updateTimer",0x8a9bcb30,"lime._backend.native.NativeApplication.updateTimer","lime/_backend/native/NativeApplication.hx",548,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(550)
		int tmp = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(550)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		if ((tmp1)){
			HX_STACK_LINE(552)
			int tmp2 = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(552)
			int currentTime = tmp2;		HX_STACK_VAR(currentTime,"currentTime");
			HX_STACK_LINE(553)
			bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
			HX_STACK_LINE(554)
			::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(556)
			{
				HX_STACK_LINE(556)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(556)
				int tmp3 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(556)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(556)
				while((true)){
					HX_STACK_LINE(556)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(556)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(556)
					if ((tmp5)){
						HX_STACK_LINE(556)
						break;
					}
					HX_STACK_LINE(556)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(556)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(558)
					::haxe::Timer tmp7 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(558)
					timer = tmp7;
					HX_STACK_LINE(560)
					bool tmp8 = (timer != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(560)
					if ((tmp8)){
						HX_STACK_LINE(562)
						bool tmp9 = (currentTime >= timer->mFireAt);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(562)
						if ((tmp9)){
							HX_STACK_LINE(564)
							hx::AddEq(timer->mFireAt,timer->mTime);
							HX_STACK_LINE(565)
							timer->run();
						}
					}
					else{
						HX_STACK_LINE(571)
						foundNull = true;
					}
				}
			}
			HX_STACK_LINE(577)
			bool tmp3 = foundNull;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(577)
			if ((tmp3)){

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 1; }
				bool run(::haxe::Timer val){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/_backend/native/NativeApplication.hx",579,0xb13849fd)
					HX_STACK_ARG(val,"val")
					{
						HX_STACK_LINE(579)
						bool tmp4 = (val != null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(579)
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(579)
				::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_3_1()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,updateTimer,(void))

Dynamic NativeApplication_obj::lime_application_create( Dynamic config){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_create",0xc9ec45a9,"lime._backend.native.NativeApplication.lime_application_create","lime/_backend/native/NativeApplication.hx",589,0xb13849fd)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(589)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_create.call(hx::DynamicPtr(config));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_create,return )

Void NativeApplication_obj::lime_application_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_event_manager_register",0x68200767,"lime._backend.native.NativeApplication.lime_application_event_manager_register","lime/_backend/native/NativeApplication.hx",590,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(590)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_application_event_manager_register,(void))

int NativeApplication_obj::lime_application_exec( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_exec",0x469bdcfe,"lime._backend.native.NativeApplication.lime_application_exec","lime/_backend/native/NativeApplication.hx",591,0xb13849fd)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(591)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_exec.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_exec,return )

Void NativeApplication_obj::lime_application_init( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_init",0x4939247d,"lime._backend.native.NativeApplication.lime_application_init","lime/_backend/native/NativeApplication.hx",592,0xb13849fd)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(592)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_init.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_init,(void))

int NativeApplication_obj::lime_application_quit( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_quit",0x4e88293c,"lime._backend.native.NativeApplication.lime_application_quit","lime/_backend/native/NativeApplication.hx",593,0xb13849fd)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(593)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_quit.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_quit,return )

Void NativeApplication_obj::lime_application_set_frame_rate( Dynamic handle,Float value){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_set_frame_rate",0x54d277dc,"lime._backend.native.NativeApplication.lime_application_set_frame_rate","lime/_backend/native/NativeApplication.hx",594,0xb13849fd)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(594)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_application_set_frame_rate.call(hx::DynamicPtr(handle),value);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_application_set_frame_rate,(void))

bool NativeApplication_obj::lime_application_update( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_application_update",0xd4e264b6,"lime._backend.native.NativeApplication.lime_application_update","lime/_backend/native/NativeApplication.hx",595,0xb13849fd)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(595)
	return ::lime::_backend::native::NativeApplication_obj::cffi_lime_application_update.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,lime_application_update,return )

Void NativeApplication_obj::lime_gamepad_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_gamepad_event_manager_register",0x8dba5536,"lime._backend.native.NativeApplication.lime_gamepad_event_manager_register","lime/_backend/native/NativeApplication.hx",596,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(596)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_gamepad_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_gamepad_event_manager_register,(void))

Void NativeApplication_obj::lime_joystick_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_joystick_event_manager_register",0xdfabe3ff,"lime._backend.native.NativeApplication.lime_joystick_event_manager_register","lime/_backend/native/NativeApplication.hx",597,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(597)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_joystick_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_joystick_event_manager_register,(void))

Void NativeApplication_obj::lime_key_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_key_event_manager_register",0x6e7184f8,"lime._backend.native.NativeApplication.lime_key_event_manager_register","lime/_backend/native/NativeApplication.hx",598,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(598)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_key_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_key_event_manager_register,(void))

Void NativeApplication_obj::lime_mouse_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_mouse_event_manager_register",0x6e6b1cb2,"lime._backend.native.NativeApplication.lime_mouse_event_manager_register","lime/_backend/native/NativeApplication.hx",599,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(599)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_mouse_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_mouse_event_manager_register,(void))

Void NativeApplication_obj::lime_render_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_render_event_manager_register",0xd5f19025,"lime._backend.native.NativeApplication.lime_render_event_manager_register","lime/_backend/native/NativeApplication.hx",600,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(600)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_render_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_render_event_manager_register,(void))

Void NativeApplication_obj::lime_sensor_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_sensor_event_manager_register",0xf7db25c1,"lime._backend.native.NativeApplication.lime_sensor_event_manager_register","lime/_backend/native/NativeApplication.hx",601,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(601)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_sensor_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_sensor_event_manager_register,(void))

Void NativeApplication_obj::lime_text_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_text_event_manager_register",0x4272bd2e,"lime._backend.native.NativeApplication.lime_text_event_manager_register","lime/_backend/native/NativeApplication.hx",602,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(602)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_text_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_text_event_manager_register,(void))

Void NativeApplication_obj::lime_touch_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_touch_event_manager_register",0x79dc0e58,"lime._backend.native.NativeApplication.lime_touch_event_manager_register","lime/_backend/native/NativeApplication.hx",603,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(603)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_touch_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_touch_event_manager_register,(void))

Void NativeApplication_obj::lime_window_event_manager_register( Dynamic callback,Dynamic eventObject){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","lime_window_event_manager_register",0xf4923acb,"lime._backend.native.NativeApplication.lime_window_event_manager_register","lime/_backend/native/NativeApplication.hx",604,0xb13849fd)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_ARG(eventObject,"eventObject")
		HX_STACK_LINE(604)
		::lime::_backend::native::NativeApplication_obj::cffi_lime_window_event_manager_register.call(hx::DynamicPtr(callback),hx::DynamicPtr(eventObject));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeApplication_obj,lime_window_event_manager_register,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_create;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_application_event_manager_register;

::cpp::Function< int ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_exec;

::cpp::Function< void ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_init;

::cpp::Function< int ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_quit;

::cpp::Function< void ( ::hx::Object * ,Float ) > NativeApplication_obj::cffi_lime_application_set_frame_rate;

::cpp::Function< bool ( ::hx::Object * ) > NativeApplication_obj::cffi_lime_application_update;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_gamepad_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_joystick_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_key_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_mouse_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_render_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_sensor_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_text_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_touch_event_manager_register;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeApplication_obj::cffi_lime_window_event_manager_register;


NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_MARK_MEMBER_NAME(currentTouches,"currentTouches");
	HX_MARK_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_MARK_MEMBER_NAME(joystickEventInfo,"joystickEventInfo");
	HX_MARK_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_MARK_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_MARK_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_MARK_MEMBER_NAME(sensorEventInfo,"sensorEventInfo");
	HX_MARK_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_MARK_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_MARK_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_MARK_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationEventInfo,"applicationEventInfo");
	HX_VISIT_MEMBER_NAME(currentTouches,"currentTouches");
	HX_VISIT_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_VISIT_MEMBER_NAME(joystickEventInfo,"joystickEventInfo");
	HX_VISIT_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_VISIT_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_VISIT_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_VISIT_MEMBER_NAME(sensorEventInfo,"sensorEventInfo");
	HX_VISIT_MEMBER_NAME(textEventInfo,"textEventInfo");
	HX_VISIT_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_VISIT_MEMBER_NAME(unusedTouchesPool,"unusedTouchesPool");
	HX_VISIT_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeApplication_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateTimer") ) { return updateTimer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { return keyEventInfo; }
		if (HX_FIELD_EQ(inName,"getFrameRate") ) { return getFrameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrameRate") ) { return setFrameRate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { return textEventInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { return currentTouches; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { return mouseEventInfo; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { return touchEventInfo; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { return renderEventInfo; }
		if (HX_FIELD_EQ(inName,"sensorEventInfo") ) { return sensorEventInfo; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { return windowEventInfo; }
		if (HX_FIELD_EQ(inName,"handleTextEvent") ) { return handleTextEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { return gamepadEventInfo; }
		if (HX_FIELD_EQ(inName,"handleMouseEvent") ) { return handleMouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouchEvent") ) { return handleTouchEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"joystickEventInfo") ) { return joystickEventInfo; }
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { return unusedTouchesPool; }
		if (HX_FIELD_EQ(inName,"handleRenderEvent") ) { return handleRenderEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleSensorEvent") ) { return handleSensorEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleWindowEvent") ) { return handleWindowEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleGamepadEvent") ) { return handleGamepadEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handleJoystickEvent") ) { return handleJoystickEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { return applicationEventInfo; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleApplicationEvent") ) { return handleApplicationEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeApplication_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { outValue = lime_application_exec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { outValue = lime_application_init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { outValue = lime_application_quit_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { outValue = lime_application_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { outValue = lime_application_update_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_exec") ) { outValue = cffi_lime_application_exec; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_init") ) { outValue = cffi_lime_application_init; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_quit") ) { outValue = cffi_lime_application_quit; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_create") ) { outValue = cffi_lime_application_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_update") ) { outValue = cffi_lime_application_update; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_application_set_frame_rate") ) { outValue = lime_application_set_frame_rate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { outValue = lime_key_event_manager_register_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_event_manager_register") ) { outValue = lime_text_event_manager_register_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { outValue = lime_mouse_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { outValue = lime_touch_event_manager_register_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { outValue = lime_render_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_sensor_event_manager_register") ) { outValue = lime_sensor_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { outValue = lime_window_event_manager_register_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { outValue = lime_gamepad_event_manager_register_dyn(); return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_joystick_event_manager_register") ) { outValue = lime_joystick_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_set_frame_rate") ) { outValue = cffi_lime_application_set_frame_rate; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_event_manager_register") ) { outValue = cffi_lime_key_event_manager_register; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_event_manager_register") ) { outValue = cffi_lime_text_event_manager_register; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_event_manager_register") ) { outValue = cffi_lime_mouse_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_touch_event_manager_register") ) { outValue = cffi_lime_touch_event_manager_register; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_application_event_manager_register") ) { outValue = lime_application_event_manager_register_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_render_event_manager_register") ) { outValue = cffi_lime_render_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_sensor_event_manager_register") ) { outValue = cffi_lime_sensor_event_manager_register; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_event_manager_register") ) { outValue = cffi_lime_window_event_manager_register; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_event_manager_register") ) { outValue = cffi_lime_gamepad_event_manager_register; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_event_manager_register") ) { outValue = cffi_lime_joystick_event_manager_register; return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_event_manager_register") ) { outValue = cffi_lime_application_event_manager_register; return true;  }
	}
	return false;
}

Dynamic NativeApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { keyEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::KeyEventInfo >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textEventInfo") ) { textEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TextEventInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentTouches") ) { currentTouches=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { mouseEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::MouseEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { touchEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TouchEventInfo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { renderEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::RenderEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sensorEventInfo") ) { sensorEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::SensorEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { windowEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::WindowEventInfo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { gamepadEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::GamepadEventInfo >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"joystickEventInfo") ) { joystickEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::JoystickEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unusedTouchesPool") ) { unusedTouchesPool=inValue.Cast< ::List >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationEventInfo") ) { applicationEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::ApplicationEventInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeApplication_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_exec") ) { cffi_lime_application_exec=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_init") ) { cffi_lime_application_init=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_quit") ) { cffi_lime_application_quit=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_create") ) { cffi_lime_application_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_application_update") ) { cffi_lime_application_update=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_set_frame_rate") ) { cffi_lime_application_set_frame_rate=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,Float ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_key_event_manager_register") ) { cffi_lime_key_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_event_manager_register") ) { cffi_lime_text_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_event_manager_register") ) { cffi_lime_mouse_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_touch_event_manager_register") ) { cffi_lime_touch_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_render_event_manager_register") ) { cffi_lime_render_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_sensor_event_manager_register") ) { cffi_lime_sensor_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_event_manager_register") ) { cffi_lime_window_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_event_manager_register") ) { cffi_lime_gamepad_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_event_manager_register") ) { cffi_lime_joystick_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"cffi_lime_application_event_manager_register") ) { cffi_lime_application_event_manager_register=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"));
	outFields->push(HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"));
	outFields->push(HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"));
	outFields->push(HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4"));
	outFields->push(HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"));
	outFields->push(HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"));
	outFields->push(HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"));
	outFields->push(HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55"));
	outFields->push(HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"));
	outFields->push(HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"));
	outFields->push(HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"));
	outFields->push(HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::ApplicationEventInfo*/ ,(int)offsetof(NativeApplication_obj,applicationEventInfo),HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(NativeApplication_obj,currentTouches),HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::GamepadEventInfo*/ ,(int)offsetof(NativeApplication_obj,gamepadEventInfo),HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::JoystickEventInfo*/ ,(int)offsetof(NativeApplication_obj,joystickEventInfo),HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::KeyEventInfo*/ ,(int)offsetof(NativeApplication_obj,keyEventInfo),HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::MouseEventInfo*/ ,(int)offsetof(NativeApplication_obj,mouseEventInfo),HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::RenderEventInfo*/ ,(int)offsetof(NativeApplication_obj,renderEventInfo),HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::SensorEventInfo*/ ,(int)offsetof(NativeApplication_obj,sensorEventInfo),HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TextEventInfo*/ ,(int)offsetof(NativeApplication_obj,textEventInfo),HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TouchEventInfo*/ ,(int)offsetof(NativeApplication_obj,touchEventInfo),HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c")},
	{hx::fsObject /*::List*/ ,(int)offsetof(NativeApplication_obj,unusedTouchesPool),HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::WindowEventInfo*/ ,(int)offsetof(NativeApplication_obj,windowEventInfo),HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeApplication_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsFloat,(int)offsetof(NativeApplication_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(NativeApplication_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_create,HX_HCSTRING("cffi_lime_application_create","\x9c","\x71","\x49","\x96")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_event_manager_register,HX_HCSTRING("cffi_lime_application_event_manager_register","\x5a","\x89","\x33","\xc0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_exec,HX_HCSTRING("cffi_lime_application_exec","\x31","\x16","\x12","\x9e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_init,HX_HCSTRING("cffi_lime_application_init","\xb0","\x5d","\xaf","\xa0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_quit,HX_HCSTRING("cffi_lime_application_quit","\x6f","\x62","\xfe","\xa5")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,Float ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_set_frame_rate,HX_HCSTRING("cffi_lime_application_set_frame_rate","\xcf","\x4e","\xf9","\x0d")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_application_update,HX_HCSTRING("cffi_lime_application_update","\xa9","\x90","\x3f","\xa1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_gamepad_event_manager_register,HX_HCSTRING("cffi_lime_gamepad_event_manager_register","\xa9","\x21","\x63","\x7c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_joystick_event_manager_register,HX_HCSTRING("cffi_lime_joystick_event_manager_register","\x2c","\xfc","\xb5","\xc4")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_key_event_manager_register,HX_HCSTRING("cffi_lime_key_event_manager_register","\xeb","\x5b","\x98","\x27")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_mouse_event_manager_register,HX_HCSTRING("cffi_lime_mouse_event_manager_register","\x65","\xd6","\x2b","\xe0")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_render_event_manager_register,HX_HCSTRING("cffi_lime_render_event_manager_register","\x12","\x53","\xd3","\xec")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_sensor_event_manager_register,HX_HCSTRING("cffi_lime_sensor_event_manager_register","\xae","\xe8","\xbc","\x0e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_text_event_manager_register,HX_HCSTRING("cffi_lime_text_event_manager_register","\xdb","\xfa","\x47","\x8b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_touch_event_manager_register,HX_HCSTRING("cffi_lime_touch_event_manager_register","\x0b","\xc8","\x9c","\xeb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeApplication_obj::cffi_lime_window_event_manager_register,HX_HCSTRING("cffi_lime_window_event_manager_register","\xb8","\xfd","\x73","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applicationEventInfo","\x38","\x8c","\xf4","\x09"),
	HX_HCSTRING("currentTouches","\xb4","\x92","\x8c","\xe6"),
	HX_HCSTRING("gamepadEventInfo","\xc7","\xa4","\x2e","\x4c"),
	HX_HCSTRING("joystickEventInfo","\x4c","\x49","\x1d","\xd4"),
	HX_HCSTRING("keyEventInfo","\x09","\xec","\x90","\xcc"),
	HX_HCSTRING("mouseEventInfo","\xc3","\x9e","\xa6","\x86"),
	HX_HCSTRING("renderEventInfo","\x72","\x9b","\x70","\xdd"),
	HX_HCSTRING("sensorEventInfo","\x0e","\xd8","\x53","\x55"),
	HX_HCSTRING("textEventInfo","\x3b","\xd7","\x5a","\xac"),
	HX_HCSTRING("touchEventInfo","\xe9","\x99","\x5c","\x0c"),
	HX_HCSTRING("unusedTouchesPool","\xf3","\xcf","\xdf","\x11"),
	HX_HCSTRING("windowEventInfo","\x98","\x8f","\x34","\x9b"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("exec","\x91","\xf3","\x1d","\x43"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("getFrameRate","\x37","\xae","\x7b","\x48"),
	HX_HCSTRING("handleApplicationEvent","\x72","\xba","\xa4","\x11"),
	HX_HCSTRING("handleGamepadEvent","\x81","\x1b","\xb0","\x7b"),
	HX_HCSTRING("handleJoystickEvent","\xf6","\xd0","\x87","\xa8"),
	HX_HCSTRING("handleKeyEvent","\xc3","\x95","\x05","\x08"),
	HX_HCSTRING("handleMouseEvent","\x7d","\x65","\x58","\x63"),
	HX_HCSTRING("handleRenderEvent","\x1c","\xda","\x83","\x3f"),
	HX_HCSTRING("handleSensorEvent","\xb8","\x98","\x2d","\xba"),
	HX_HCSTRING("handleTextEvent","\x65","\xff","\x1d","\xdd"),
	HX_HCSTRING("handleTouchEvent","\xa3","\x55","\x1c","\x3f"),
	HX_HCSTRING("handleWindowEvent","\x42","\x43","\xa5","\x64"),
	HX_HCSTRING("setFrameRate","\xab","\xd1","\x74","\x5d"),
	HX_HCSTRING("updateTimer","\xfc","\x28","\xce","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_create,"cffi_lime_application_create");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_event_manager_register,"cffi_lime_application_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_exec,"cffi_lime_application_exec");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_init,"cffi_lime_application_init");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_quit,"cffi_lime_application_quit");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_set_frame_rate,"cffi_lime_application_set_frame_rate");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_update,"cffi_lime_application_update");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_gamepad_event_manager_register,"cffi_lime_gamepad_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_joystick_event_manager_register,"cffi_lime_joystick_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_key_event_manager_register,"cffi_lime_key_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_mouse_event_manager_register,"cffi_lime_mouse_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_render_event_manager_register,"cffi_lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_sensor_event_manager_register,"cffi_lime_sensor_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_text_event_manager_register,"cffi_lime_text_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_touch_event_manager_register,"cffi_lime_touch_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::cffi_lime_window_event_manager_register,"cffi_lime_window_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_create,"cffi_lime_application_create");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_event_manager_register,"cffi_lime_application_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_exec,"cffi_lime_application_exec");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_init,"cffi_lime_application_init");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_quit,"cffi_lime_application_quit");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_set_frame_rate,"cffi_lime_application_set_frame_rate");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_application_update,"cffi_lime_application_update");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_gamepad_event_manager_register,"cffi_lime_gamepad_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_joystick_event_manager_register,"cffi_lime_joystick_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_key_event_manager_register,"cffi_lime_key_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_mouse_event_manager_register,"cffi_lime_mouse_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_render_event_manager_register,"cffi_lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_sensor_event_manager_register,"cffi_lime_sensor_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_text_event_manager_register,"cffi_lime_text_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_touch_event_manager_register,"cffi_lime_touch_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::cffi_lime_window_event_manager_register,"cffi_lime_window_event_manager_register");
};

#endif

hx::Class NativeApplication_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),
	HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),
	HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),
	HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),
	HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),
	HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),
	HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),
	HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),
	HX_HCSTRING("lime_joystick_event_manager_register","\xb3","\x14","\x1d","\x14"),
	HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),
	HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),
	HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),
	HX_HCSTRING("lime_sensor_event_manager_register","\x75","\x01","\xd7","\x10"),
	HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),
	HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),
	HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),
	HX_HCSTRING("cffi_lime_application_create","\x9c","\x71","\x49","\x96"),
	HX_HCSTRING("cffi_lime_application_event_manager_register","\x5a","\x89","\x33","\xc0"),
	HX_HCSTRING("cffi_lime_application_exec","\x31","\x16","\x12","\x9e"),
	HX_HCSTRING("cffi_lime_application_init","\xb0","\x5d","\xaf","\xa0"),
	HX_HCSTRING("cffi_lime_application_quit","\x6f","\x62","\xfe","\xa5"),
	HX_HCSTRING("cffi_lime_application_set_frame_rate","\xcf","\x4e","\xf9","\x0d"),
	HX_HCSTRING("cffi_lime_application_update","\xa9","\x90","\x3f","\xa1"),
	HX_HCSTRING("cffi_lime_gamepad_event_manager_register","\xa9","\x21","\x63","\x7c"),
	HX_HCSTRING("cffi_lime_joystick_event_manager_register","\x2c","\xfc","\xb5","\xc4"),
	HX_HCSTRING("cffi_lime_key_event_manager_register","\xeb","\x5b","\x98","\x27"),
	HX_HCSTRING("cffi_lime_mouse_event_manager_register","\x65","\xd6","\x2b","\xe0"),
	HX_HCSTRING("cffi_lime_render_event_manager_register","\x12","\x53","\xd3","\xec"),
	HX_HCSTRING("cffi_lime_sensor_event_manager_register","\xae","\xe8","\xbc","\x0e"),
	HX_HCSTRING("cffi_lime_text_event_manager_register","\xdb","\xfa","\x47","\x8b"),
	HX_HCSTRING("cffi_lime_touch_event_manager_register","\x0b","\xc8","\x9c","\xeb"),
	HX_HCSTRING("cffi_lime_window_event_manager_register","\xb8","\xfd","\x73","\x0b"),
	::String(null()) };

void NativeApplication_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeApplication","\xa2","\x84","\xe2","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeApplication_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeApplication_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeApplication_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void NativeApplication_obj::__boot()
{
	cffi_lime_application_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_create","\x75","\x25","\x1a","\xbb"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_application_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_event_manager_register","\x33","\x3f","\x87","\x01"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_application_exec= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_exec","\xca","\xf1","\x81","\xe2"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_application_init= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_init","\x49","\x39","\x1f","\xe5"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_application_quit= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_quit","\x08","\x3e","\x6e","\xea"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_application_set_frame_rate= ::cpp::Function< void ( ::hx::Object * ,Float ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_set_frame_rate","\xa8","\x03","\xd7","\x1d"),HX_HCSTRING("odv","\xc1","\x91","\x54","\x00"),false));
	cffi_lime_application_update= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_application_update","\x82","\x44","\x10","\xc6"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_gamepad_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_event_manager_register","\x02","\xb7","\x1e","\x51"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_joystick_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_event_manager_register","\xb3","\x14","\x1d","\x14"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_key_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_key_event_manager_register","\xc4","\x10","\x76","\x37"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_mouse_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_event_manager_register","\x7e","\x33","\x83","\xea"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_render_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_render_event_manager_register","\xd9","\x6b","\xed","\xee"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_sensor_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_sensor_event_manager_register","\x75","\x01","\xd7","\x10"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_text_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_text_event_manager_register","\xe2","\x83","\x68","\x5d"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_touch_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_touch_event_manager_register","\x24","\x25","\xf4","\xf5"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_window_event_manager_register= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_event_manager_register","\x7f","\x16","\x8e","\x0d"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
