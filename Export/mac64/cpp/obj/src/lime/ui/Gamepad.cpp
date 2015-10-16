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
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
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
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
namespace lime{
namespace ui{

Void Gamepad_obj::__construct(int id)
{
HX_STACK_FRAME("lime.ui.Gamepad","new",0xd780a212,"lime.ui.Gamepad.new","lime/ui/Gamepad.hx",11,0x36bc843e)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(24)
	this->onDisconnect = ::lime::app::Event_Void_Void_obj::__new();
	HX_STACK_LINE(23)
	this->onButtonUp = ::lime::app::Event_lime_ui_GamepadButton_Void_obj::__new();
	HX_STACK_LINE(22)
	this->onButtonDown = ::lime::app::Event_lime_ui_GamepadButton_Void_obj::__new();
	HX_STACK_LINE(21)
	this->onAxisMove = ::lime::app::Event_lime_ui_GamepadAxis_Float_Void_obj::__new();
	HX_STACK_LINE(29)
	this->id = id;
	HX_STACK_LINE(30)
	this->connected = true;
}
;
	return null();
}

//Gamepad_obj::~Gamepad_obj() { }

Dynamic Gamepad_obj::__CreateEmpty() { return  new Gamepad_obj; }
hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(int id)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(id);
	return _result_;}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gamepad_obj > _result_ = new Gamepad_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Gamepad_obj::get_guid( ){
	HX_STACK_FRAME("lime.ui.Gamepad","get_guid",0x2f6ca220,"lime.ui.Gamepad.get_guid","lime/ui/Gamepad.hx",54,0x36bc843e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return ((Dynamic)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_guid.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name( ){
	HX_STACK_FRAME("lime.ui.Gamepad","get_name",0x33fdf6e2,"lime.ui.Gamepad.get_name","lime/ui/Gamepad.hx",65,0x36bc843e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return ((Dynamic)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_name.call(this->id)));
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

::haxe::ds::IntMap Gamepad_obj::devices;

::lime::app::Event_lime_ui_Gamepad_Void Gamepad_obj::onConnect;

Void Gamepad_obj::addMappings( Array< ::String > mappings){
{
		HX_STACK_FRAME("lime.ui.Gamepad","addMappings",0x7dce3c98,"lime.ui.Gamepad.addMappings","lime/ui/Gamepad.hx",38,0x36bc843e)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_LINE(38)
		::lime::ui::Gamepad_obj::cffi_lime_gamepad_add_mappings.call(hx::DynamicPtr(mappings));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,addMappings,(void))

Void Gamepad_obj::lime_gamepad_add_mappings( Dynamic mappings){
{
		HX_STACK_FRAME("lime.ui.Gamepad","lime_gamepad_add_mappings",0x0a0a603d,"lime.ui.Gamepad.lime_gamepad_add_mappings","lime/ui/Gamepad.hx",81,0x36bc843e)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_LINE(81)
		::lime::ui::Gamepad_obj::cffi_lime_gamepad_add_mappings.call(hx::DynamicPtr(mappings));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,lime_gamepad_add_mappings,(void))

Dynamic Gamepad_obj::lime_gamepad_get_device_guid( int id){
	HX_STACK_FRAME("lime.ui.Gamepad","lime_gamepad_get_device_guid",0x36bce76f,"lime.ui.Gamepad.lime_gamepad_get_device_guid","lime/ui/Gamepad.hx",82,0x36bc843e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(82)
	return ::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_guid.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,lime_gamepad_get_device_guid,return )

Dynamic Gamepad_obj::lime_gamepad_get_device_name( int id){
	HX_STACK_FRAME("lime.ui.Gamepad","lime_gamepad_get_device_name",0x3b4e3c31,"lime.ui.Gamepad.lime_gamepad_get_device_name","lime/ui/Gamepad.hx",83,0x36bc843e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(83)
	return ::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_name.call(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,lime_gamepad_get_device_name,return )

::cpp::Function< void ( ::hx::Object * ) > Gamepad_obj::cffi_lime_gamepad_add_mappings;

::cpp::Function< ::hx::Object * ( int ) > Gamepad_obj::cffi_lime_gamepad_get_device_guid;

::cpp::Function< ::hx::Object * ( int ) > Gamepad_obj::cffi_lime_gamepad_get_device_name;


Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
}

Dynamic Gamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return onAxisMove; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return onButtonUp; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return onButtonDown; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return onDisconnect; }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = onConnect; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMappings") ) { outValue = addMappings_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gamepad_add_mappings") ) { outValue = lime_gamepad_add_mappings_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { outValue = lime_gamepad_get_device_guid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { outValue = lime_gamepad_get_device_name_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_add_mappings") ) { outValue = cffi_lime_gamepad_add_mappings; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_guid") ) { outValue = cffi_lime_gamepad_get_device_guid; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_name") ) { outValue = cffi_lime_gamepad_get_device_name; return true;  }
	}
	return false;
}

Dynamic Gamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast< ::lime::app::Event_lime_ui_GamepadAxis_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast< ::lime::app::Event_lime_ui_GamepadButton_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast< ::lime::app::Event_lime_ui_GamepadButton_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast< ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast< ::lime::app::Event_lime_ui_Gamepad_Void >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_add_mappings") ) { cffi_lime_gamepad_add_mappings=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_guid") ) { cffi_lime_gamepad_get_device_guid=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_name") ) { cffi_lime_gamepad_get_device_name=ioValue.Cast< ::cpp::Function< ::hx::Object * ( int ) > >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::Event_lime_ui_GamepadAxis_Float_Void*/ ,(int)offsetof(Gamepad_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(Gamepad_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Gamepad_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::Event_lime_ui_Gamepad_Void*/ ,(void *) &Gamepad_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &Gamepad_obj::cffi_lime_gamepad_add_mappings,HX_HCSTRING("cffi_lime_gamepad_add_mappings","\xf2","\x1c","\x61","\x57")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &Gamepad_obj::cffi_lime_gamepad_get_device_guid,HX_HCSTRING("cffi_lime_gamepad_get_device_guid","\xda","\x49","\xe7","\x1e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( int ) >*/ ,(void *) &Gamepad_obj::cffi_lime_gamepad_get_device_name,HX_HCSTRING("cffi_lime_gamepad_get_device_name","\x9c","\x9e","\x78","\x23")},
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
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
	HX_MARK_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_add_mappings,"cffi_lime_gamepad_add_mappings");
	HX_MARK_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_guid,"cffi_lime_gamepad_get_device_guid");
	HX_MARK_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_name,"cffi_lime_gamepad_get_device_name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_add_mappings,"cffi_lime_gamepad_add_mappings");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_guid,"cffi_lime_gamepad_get_device_guid");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_name,"cffi_lime_gamepad_get_device_name");
};

#endif

hx::Class Gamepad_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("addMappings","\xe6","\x68","\x0d","\xd8"),
	HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),
	HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),
	HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),
	HX_HCSTRING("cffi_lime_gamepad_add_mappings","\xf2","\x1c","\x61","\x57"),
	HX_HCSTRING("cffi_lime_gamepad_get_device_guid","\xda","\x49","\xe7","\x1e"),
	HX_HCSTRING("cffi_lime_gamepad_get_device_name","\x9c","\x9e","\x78","\x23"),
	::String(null()) };

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Gamepad","\x20","\xf1","\xa5","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gamepad_obj >;
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

void Gamepad_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/ui/Gamepad.hx",14,0x36bc843e)
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
	onConnect= ::lime::app::Event_lime_ui_Gamepad_Void_obj::__new();
	cffi_lime_gamepad_add_mappings= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_gamepad_get_device_guid= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
	cffi_lime_gamepad_get_device_name= ::cpp::Function< ::hx::Object * ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),HX_HCSTRING("io","\xe6","\x5b","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace ui
