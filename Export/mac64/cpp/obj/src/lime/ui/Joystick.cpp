#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Float_Void
#include <lime/app/Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_Joystick_Void
#include <lime/app/Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
namespace lime{
namespace ui{

Void Joystick_obj::__construct(int id)
{
HX_STACK_FRAME("lime.ui.Joystick","new",0xd76b52cf,"lime.ui.Joystick.new","lime/ui/Joystick.hx",11,0x26e848e1)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(30)
	this->onTrackballMove = ::lime::app::Event_Int_Float_Void_obj::__new();
	HX_STACK_LINE(29)
	this->onHatMove = ::lime::app::Event_Int_lime_ui_JoystickHatPosition_Void_obj::__new();
	HX_STACK_LINE(28)
	this->onDisconnect = ::lime::app::Event_Void_Void_obj::__new();
	HX_STACK_LINE(27)
	this->onButtonUp = ::lime::app::Event_Int_Void_obj::__new();
	HX_STACK_LINE(26)
	this->onButtonDown = ::lime::app::Event_Int_Void_obj::__new();
	HX_STACK_LINE(25)
	this->onAxisMove = ::lime::app::Event_Int_Float_Void_obj::__new();
	HX_STACK_LINE(35)
	this->id = id;
	HX_STACK_LINE(36)
	this->connected = true;
}
;
	return null();
}

//Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new(int id)
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Joystick_obj::get_guid( ){
	HX_STACK_FRAME("lime.ui.Joystick","get_guid",0xa0372443,"lime.ui.Joystick.get_guid","lime/ui/Joystick.hx",51,0x26e848e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return ((Dynamic)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_guid.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_guid,return )

::String Joystick_obj::get_name( ){
	HX_STACK_FRAME("lime.ui.Joystick","get_name",0xa4c87905,"lime.ui.Joystick.get_name","lime/ui/Joystick.hx",62,0x26e848e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ((Dynamic)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_name.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_name,return )

int Joystick_obj::get_numAxes( ){
	HX_STACK_FRAME("lime.ui.Joystick","get_numAxes",0x6e0a2811,"lime.ui.Joystick.get_numAxes","lime/ui/Joystick.hx",73,0x26e848e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_axes.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numAxes,return )

int Joystick_obj::get_numButtons( ){
	HX_STACK_FRAME("lime.ui.Joystick","get_numButtons",0x8a7f5ed5,"lime.ui.Joystick.get_numButtons","lime/ui/Joystick.hx",84,0x26e848e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_buttons.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numButtons,return )

int Joystick_obj::get_numHats( ){
	HX_STACK_FRAME("lime.ui.Joystick","get_numHats",0x72993fa4,"lime.ui.Joystick.get_numHats","lime/ui/Joystick.hx",95,0x26e848e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_hats.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numHats,return )

int Joystick_obj::get_numTrackballs( ){
	HX_STACK_FRAME("lime.ui.Joystick","get_numTrackballs",0xfaa6bf15,"lime.ui.Joystick.get_numTrackballs","lime/ui/Joystick.hx",106,0x26e848e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_trackballs.call(this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numTrackballs,return )

::haxe::ds::IntMap Joystick_obj::devices;

::lime::app::Event_lime_ui_Joystick_Void Joystick_obj::onConnect;

Dynamic Joystick_obj::lime_joystick_get_device_guid( int id){
	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_device_guid",0xfa126abf,"lime.ui.Joystick.lime_joystick_get_device_guid","lime/ui/Joystick.hx",122,0x26e848e1)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(122)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_guid.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_device_guid,return )

Dynamic Joystick_obj::lime_joystick_get_device_name( int id){
	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_device_name",0xfea3bf81,"lime.ui.Joystick.lime_joystick_get_device_name","lime/ui/Joystick.hx",123,0x26e848e1)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(123)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_name.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_device_name,return )

int Joystick_obj::lime_joystick_get_num_axes( int id){
	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_axes",0x6dd2cd31,"lime.ui.Joystick.lime_joystick_get_num_axes","lime/ui/Joystick.hx",124,0x26e848e1)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(124)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_axes.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_axes,return )

int Joystick_obj::lime_joystick_get_num_buttons( int id){
	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_buttons",0xbd12adb5,"lime.ui.Joystick.lime_joystick_get_num_buttons","lime/ui/Joystick.hx",125,0x26e848e1)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(125)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_buttons.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_buttons,return )

int Joystick_obj::lime_joystick_get_num_hats( int id){
	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_hats",0x7261e4c4,"lime.ui.Joystick.lime_joystick_get_num_hats","lime/ui/Joystick.hx",126,0x26e848e1)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(126)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_hats.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_hats,return )

int Joystick_obj::lime_joystick_get_num_trackballs( int id){
	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_trackballs",0x88a7fc35,"lime.ui.Joystick.lime_joystick_get_num_trackballs","lime/ui/Joystick.hx",127,0x26e848e1)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(127)
	return ::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_trackballs.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_trackballs,return )

::cpp::Function< ::hx::Object * ( int ) > Joystick_obj::cffi_lime_joystick_get_device_guid;

::cpp::Function< ::hx::Object * ( int ) > Joystick_obj::cffi_lime_joystick_get_device_name;

::cpp::Function< int ( int ) > Joystick_obj::cffi_lime_joystick_get_num_axes;

::cpp::Function< int ( int ) > Joystick_obj::cffi_lime_joystick_get_num_buttons;

::cpp::Function< int ( int ) > Joystick_obj::cffi_lime_joystick_get_num_hats;

::cpp::Function< int ( int ) > Joystick_obj::cffi_lime_joystick_get_num_trackballs;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_MEMBER_NAME(onHatMove,"onHatMove");
	HX_MARK_MEMBER_NAME(onTrackballMove,"onTrackballMove");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_VISIT_MEMBER_NAME(onHatMove,"onHatMove");
	HX_VISIT_MEMBER_NAME(onTrackballMove,"onTrackballMove");
}

Dynamic Joystick_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numAxes") ) { if (inCallProp == hx::paccAlways) return get_numAxes(); }
		if (HX_FIELD_EQ(inName,"numHats") ) { if (inCallProp == hx::paccAlways) return get_numHats(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { return onHatMove; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numButtons") ) { if (inCallProp == hx::paccAlways) return get_numButtons(); }
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return onAxisMove; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return onButtonUp; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numAxes") ) { return get_numAxes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numHats") ) { return get_numHats_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return onButtonDown; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return onDisconnect; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numTrackballs") ) { if (inCallProp == hx::paccAlways) return get_numTrackballs(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numButtons") ) { return get_numButtons_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { return onTrackballMove; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numTrackballs") ) { return get_numTrackballs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Joystick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = onConnect; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_axes") ) { outValue = lime_joystick_get_num_axes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_hats") ) { outValue = lime_joystick_get_num_hats_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_device_guid") ) { outValue = lime_joystick_get_device_guid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_device_name") ) { outValue = lime_joystick_get_device_name_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_buttons") ) { outValue = lime_joystick_get_num_buttons_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_axes") ) { outValue = cffi_lime_joystick_get_num_axes; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_hats") ) { outValue = cffi_lime_joystick_get_num_hats; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_trackballs") ) { outValue = lime_joystick_get_num_trackballs_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_guid") ) { outValue = cffi_lime_joystick_get_device_guid; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_name") ) { outValue = cffi_lime_joystick_get_device_name; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_buttons") ) { outValue = cffi_lime_joystick_get_num_buttons; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_trackballs") ) { outValue = cffi_lime_joystick_get_num_trackballs; return true;  }
	}
	return false;
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { onHatMove=inValue.Cast< ::lime::app::Event_Int_lime_ui_JoystickHatPosition_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast< ::lime::app::Event_Int_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast< ::lime::app::Event_Int_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast< ::lime::app::Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { onTrackballMove=inValue.Cast< ::lime::app::Event_Int_Float_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Joystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast< ::lime::app::Event_lime_ui_Joystick_Void >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_axes") ) { cffi_lime_joystick_get_num_axes=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_hats") ) { cffi_lime_joystick_get_num_hats=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_guid") ) { cffi_lime_joystick_get_device_guid=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_name") ) { cffi_lime_joystick_get_device_name=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_buttons") ) { cffi_lime_joystick_get_num_buttons=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_trackballs") ) { cffi_lime_joystick_get_num_trackballs=ioValue.Cast< ::cpp::Function< int ( int ) > >(); return true; }
	}
	return false;
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numAxes","\x8b","\xbe","\xf9","\x93"));
	outFields->push(HX_HCSTRING("numButtons","\x9b","\x90","\x95","\xfa"));
	outFields->push(HX_HCSTRING("numHats","\x1e","\xd6","\x88","\x98"));
	outFields->push(HX_HCSTRING("numTrackballs","\x0f","\x6d","\xa5","\x22"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	outFields->push(HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82"));
	outFields->push(HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Joystick_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Joystick_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::Event_Int_Float_Void*/ ,(int)offsetof(Joystick_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::Event_Int_Void*/ ,(int)offsetof(Joystick_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::Event_Int_Void*/ ,(int)offsetof(Joystick_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(Joystick_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{hx::fsObject /*::lime::app::Event_Int_lime_ui_JoystickHatPosition_Void*/ ,(int)offsetof(Joystick_obj,onHatMove),HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82")},
	{hx::fsObject /*::lime::app::Event_Int_Float_Void*/ ,(int)offsetof(Joystick_obj,onTrackballMove),HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Joystick_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::Event_lime_ui_Joystick_Void*/ ,(void *) &Joystick_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_device_guid,HX_HCSTRING("cffi_lime_joystick_get_device_guid","\xf7","\xbc","\x8f","\xdf")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_device_name,HX_HCSTRING("cffi_lime_joystick_get_device_name","\xb9","\x11","\x21","\xe4")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_axes,HX_HCSTRING("cffi_lime_joystick_get_num_axes","\xf9","\x67","\x04","\x0c")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_buttons,HX_HCSTRING("cffi_lime_joystick_get_num_buttons","\xed","\xff","\x8f","\xa2")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_hats,HX_HCSTRING("cffi_lime_joystick_get_num_hats","\x8c","\x7f","\x93","\x10")},
	{hx::fsObject /*::cpp::Function< int ( int ) >*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_trackballs,HX_HCSTRING("cffi_lime_joystick_get_num_trackballs","\xfd","\xdc","\xcd","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"),
	HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"),
	HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"),
	HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"),
	HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82"),
	HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_numAxes","\xa2","\x1e","\xf4","\x19"),
	HX_HCSTRING("get_numButtons","\xe4","\x18","\x8b","\x70"),
	HX_HCSTRING("get_numHats","\x35","\x36","\x83","\x1e"),
	HX_HCSTRING("get_numTrackballs","\x66","\x78","\x15","\x29"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_guid,"cffi_lime_joystick_get_device_guid");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_name,"cffi_lime_joystick_get_device_name");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_axes,"cffi_lime_joystick_get_num_axes");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_buttons,"cffi_lime_joystick_get_num_buttons");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_hats,"cffi_lime_joystick_get_num_hats");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_trackballs,"cffi_lime_joystick_get_num_trackballs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_guid,"cffi_lime_joystick_get_device_guid");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_name,"cffi_lime_joystick_get_device_name");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_axes,"cffi_lime_joystick_get_num_axes");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_buttons,"cffi_lime_joystick_get_num_buttons");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_hats,"cffi_lime_joystick_get_num_hats");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_trackballs,"cffi_lime_joystick_get_num_trackballs");
};

#endif

hx::Class Joystick_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("lime_joystick_get_device_guid","\x90","\x59","\x1a","\x42"),
	HX_HCSTRING("lime_joystick_get_device_name","\x52","\xae","\xab","\x46"),
	HX_HCSTRING("lime_joystick_get_num_axes","\xc0","\xe1","\xd4","\xa9"),
	HX_HCSTRING("lime_joystick_get_num_buttons","\x86","\x9c","\x1a","\x05"),
	HX_HCSTRING("lime_joystick_get_num_hats","\x53","\xf9","\x63","\xae"),
	HX_HCSTRING("lime_joystick_get_num_trackballs","\x04","\x66","\xee","\x99"),
	HX_HCSTRING("cffi_lime_joystick_get_device_guid","\xf7","\xbc","\x8f","\xdf"),
	HX_HCSTRING("cffi_lime_joystick_get_device_name","\xb9","\x11","\x21","\xe4"),
	HX_HCSTRING("cffi_lime_joystick_get_num_axes","\xf9","\x67","\x04","\x0c"),
	HX_HCSTRING("cffi_lime_joystick_get_num_buttons","\xed","\xff","\x8f","\xa2"),
	HX_HCSTRING("cffi_lime_joystick_get_num_hats","\x8c","\x7f","\x93","\x10"),
	HX_HCSTRING("cffi_lime_joystick_get_num_trackballs","\xfd","\xdc","\xcd","\xc7"),
	::String(null()) };

void Joystick_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Joystick","\x5d","\x3f","\xe0","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Joystick_obj::__GetStatic;
	__mClass->mSetStaticField = &Joystick_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Joystick_obj >;
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

void Joystick_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/ui/Joystick.hx",14,0x26e848e1)
		{
			HX_STACK_LINE(14)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(14)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(14)
			return tmp1;
		}
		return null();
	}
};
	devices= _Function_0_1::Block();
	onConnect= ::lime::app::Event_lime_ui_Joystick_Void_obj::__new();
	cffi_lime_joystick_get_device_guid= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_device_guid","\x90","\x59","\x1a","\x42"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_device_name= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_device_name","\x52","\xae","\xab","\x46"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_axes= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_axes","\xc0","\xe1","\xd4","\xa9"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_buttons= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_buttons","\x86","\x9c","\x1a","\x05"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_hats= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_hats","\x53","\xf9","\x63","\xae"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
	cffi_lime_joystick_get_num_trackballs= ::cpp::Function< int ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_joystick_get_num_trackballs","\x04","\x66","\xee","\x99"),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace ui
