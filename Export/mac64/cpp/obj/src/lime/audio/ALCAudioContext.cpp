#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
namespace lime{
namespace audio{

Void ALCAudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.ALCAudioContext","new",0xf06c6612,"lime.audio.ALCAudioContext.new","lime/audio/ALCAudioContext.hx",9,0x89fdd0e0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->ALL_DEVICES_SPECIFIER = (int)4115;
	HX_STACK_LINE(31)
	this->DEFAULT_ALL_DEVICES_SPECIFIER = (int)4114;
	HX_STACK_LINE(30)
	this->ENUMERATE_ALL_EXT = (int)1;
	HX_STACK_LINE(29)
	this->EXTENSIONS = (int)4102;
	HX_STACK_LINE(28)
	this->DEVICE_SPECIFIER = (int)4101;
	HX_STACK_LINE(27)
	this->DEFAULT_DEVICE_SPECIFIER = (int)4100;
	HX_STACK_LINE(26)
	this->ALL_ATTRIBUTES = (int)4099;
	HX_STACK_LINE(25)
	this->ATTRIBUTES_SIZE = (int)4098;
	HX_STACK_LINE(24)
	this->OUT_OF_MEMORY = (int)40965;
	HX_STACK_LINE(23)
	this->INVALID_VALUE = (int)40964;
	HX_STACK_LINE(22)
	this->INVALID_ENUM = (int)40963;
	HX_STACK_LINE(21)
	this->INVALID_CONTEXT = (int)40962;
	HX_STACK_LINE(20)
	this->INVALID_DEVICE = (int)40961;
	HX_STACK_LINE(19)
	this->NO_ERROR = (int)0;
	HX_STACK_LINE(18)
	this->STEREO_SOURCES = (int)4113;
	HX_STACK_LINE(17)
	this->MONO_SOURCES = (int)4112;
	HX_STACK_LINE(16)
	this->SYNC = (int)4105;
	HX_STACK_LINE(15)
	this->REFRESH = (int)4104;
	HX_STACK_LINE(14)
	this->FREQUENCY = (int)4103;
	HX_STACK_LINE(13)
	this->TRUE = (int)1;
	HX_STACK_LINE(12)
	this->FALSE = (int)0;
}
;
	return null();
}

//ALCAudioContext_obj::~ALCAudioContext_obj() { }

Dynamic ALCAudioContext_obj::__CreateEmpty() { return  new ALCAudioContext_obj; }
hx::ObjectPtr< ALCAudioContext_obj > ALCAudioContext_obj::__new()
{  hx::ObjectPtr< ALCAudioContext_obj > _result_ = new ALCAudioContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALCAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALCAudioContext_obj > _result_ = new ALCAudioContext_obj();
	_result_->__construct();
	return _result_;}

bool ALCAudioContext_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","closeDevice",0x21d89a20,"lime.audio.ALCAudioContext.closeDevice","lime/audio/ALCAudioContext.hx",42,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(44)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1 = ::lime::audio::openal::ALC_obj::closeDevice(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,closeDevice,return )

Dynamic ALCAudioContext_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","createContext",0x0ee5d685,"lime.audio.ALCAudioContext.createContext","lime/audio/ALCAudioContext.hx",49,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(51)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Dynamic tmp1 = ::lime::audio::openal::ALC_obj::createContext(tmp,attrlist);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ALCAudioContext_obj,createContext,return )

Void ALCAudioContext_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.ALCAudioContext","destroyContext",0xfeb347a3,"lime.audio.ALCAudioContext.destroyContext","lime/audio/ALCAudioContext.hx",56,0x89fdd0e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(58)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::lime::audio::openal::ALC_obj::destroyContext(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,destroyContext,(void))

Dynamic ALCAudioContext_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getContextsDevice",0x919a57c2,"lime.audio.ALCAudioContext.getContextsDevice","lime/audio/ALCAudioContext.hx",63,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(65)
	Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Dynamic tmp1 = ::lime::audio::openal::ALC_obj::getContextsDevice(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getContextsDevice,return )

Dynamic ALCAudioContext_obj::getCurrentContext( ){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getCurrentContext",0x8e88231e,"lime.audio.ALCAudioContext.getCurrentContext","lime/audio/ALCAudioContext.hx",70,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	Dynamic tmp = ::lime::audio::openal::ALC_obj::getCurrentContext();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALCAudioContext_obj,getCurrentContext,return )

int ALCAudioContext_obj::getError( Dynamic device){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getError",0xe4326060,"lime.audio.ALCAudioContext.getError","lime/audio/ALCAudioContext.hx",77,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(79)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	int tmp1 = ::lime::audio::openal::ALC_obj::getError(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getError,return )

::String ALCAudioContext_obj::getErrorString( Dynamic device){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getErrorString",0x000b8551,"lime.audio.ALCAudioContext.getErrorString","lime/audio/ALCAudioContext.hx",84,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(86)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	::String tmp1 = ::lime::audio::openal::ALC_obj::getErrorString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,getErrorString,return )

Array< int > ALCAudioContext_obj::getIntegerv( Dynamic device,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getIntegerv",0x3d2ea360,"lime.audio.ALCAudioContext.getIntegerv","lime/audio/ALCAudioContext.hx",91,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(93)
		Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		return ::lime::audio::openal::ALC_obj::getIntegerv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALCAudioContext_obj,getIntegerv,return )

::String ALCAudioContext_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","getString",0x87a99939,"lime.audio.ALCAudioContext.getString","lime/audio/ALCAudioContext.hx",98,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(100)
	Dynamic tmp = device;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	::String tmp2 = ::lime::audio::openal::ALC_obj::getString(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALCAudioContext_obj,getString,return )

bool ALCAudioContext_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","makeContextCurrent",0x07220f26,"lime.audio.ALCAudioContext.makeContextCurrent","lime/audio/ALCAudioContext.hx",105,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(107)
	Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	bool tmp1 = ::lime::audio::openal::ALC_obj::makeContextCurrent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,makeContextCurrent,return )

Dynamic ALCAudioContext_obj::openDevice( ::String deviceName){
	HX_STACK_FRAME("lime.audio.ALCAudioContext","openDevice",0xa37bac8e,"lime.audio.ALCAudioContext.openDevice","lime/audio/ALCAudioContext.hx",112,0x89fdd0e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deviceName,"deviceName")
	HX_STACK_LINE(114)
	::String tmp = deviceName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Dynamic tmp1 = ::lime::audio::openal::ALC_obj::openDevice(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,openDevice,return )

Void ALCAudioContext_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.ALCAudioContext","processContext",0x44a59ace,"lime.audio.ALCAudioContext.processContext","lime/audio/ALCAudioContext.hx",119,0x89fdd0e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(121)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		::lime::audio::openal::ALC_obj::processContext(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,processContext,(void))

Void ALCAudioContext_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.ALCAudioContext","suspendContext",0x778c7961,"lime.audio.ALCAudioContext.suspendContext","lime/audio/ALCAudioContext.hx",126,0x89fdd0e0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(128)
		Dynamic tmp = context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		::lime::audio::openal::ALC_obj::suspendContext(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALCAudioContext_obj,suspendContext,(void))


ALCAudioContext_obj::ALCAudioContext_obj()
{
}

Dynamic ALCAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { return SYNC; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { return REFRESH; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"openDevice") ) { return openDevice_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { return closeDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { return MONO_SOURCES; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"createContext") ) { return createContext_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { return STEREO_SOURCES; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { return INVALID_DEVICE; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { return ALL_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"destroyContext") ) { return destroyContext_dyn(); }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"processContext") ) { return processContext_dyn(); }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { return suspendContext_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { return INVALID_CONTEXT; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { return ATTRIBUTES_SIZE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { return DEVICE_SPECIFIER; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { return ENUMERATE_ALL_EXT; }
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { return getContextsDevice_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { return getCurrentContext_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { return makeContextCurrent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { return ALL_DEVICES_SPECIFIER; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { return DEFAULT_DEVICE_SPECIFIER; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { return DEFAULT_ALL_DEVICES_SPECIFIER; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALCAudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SYNC") ) { SYNC=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REFRESH") ) { REFRESH=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MONO_SOURCES") ) { MONO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STEREO_SOURCES") ) { STEREO_SOURCES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_DEVICE") ) { INVALID_DEVICE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALL_ATTRIBUTES") ) { ALL_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"INVALID_CONTEXT") ) { INVALID_CONTEXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTRIBUTES_SIZE") ) { ATTRIBUTES_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEVICE_SPECIFIER") ) { DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ENUMERATE_ALL_EXT") ) { ENUMERATE_ALL_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ALL_DEVICES_SPECIFIER") ) { ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DEFAULT_DEVICE_SPECIFIER") ) { DEFAULT_DEVICE_SPECIFIER=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"DEFAULT_ALL_DEVICES_SPECIFIER") ) { DEFAULT_ALL_DEVICES_SPECIFIER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALCAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"));
	outFields->push(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));
	outFields->push(HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"));
	outFields->push(HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"));
	outFields->push(HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"));
	outFields->push(HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"));
	outFields->push(HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"));
	outFields->push(HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"));
	outFields->push(HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"));
	outFields->push(HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"));
	outFields->push(HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"));
	outFields->push(HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"));
	outFields->push(HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"));
	outFields->push(HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"));
	outFields->push(HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"));
	outFields->push(HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"));
	outFields->push(HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"));
	outFields->push(HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"));
	outFields->push(HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"));
	outFields->push(HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"));
	outFields->push(HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,FALSE),HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,TRUE),HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,FREQUENCY),HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,REFRESH),HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,SYNC),HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,MONO_SOURCES),HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,STEREO_SOURCES),HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,NO_ERROR),HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_DEVICE),HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_CONTEXT),HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_ENUM),HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,INVALID_VALUE),HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,OUT_OF_MEMORY),HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ATTRIBUTES_SIZE),HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ALL_ATTRIBUTES),HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEFAULT_DEVICE_SPECIFIER),HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEVICE_SPECIFIER),HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,EXTENSIONS),HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ENUMERATE_ALL_EXT),HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,DEFAULT_ALL_DEVICES_SPECIFIER),HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2")},
	{hx::fsInt,(int)offsetof(ALCAudioContext_obj,ALL_DEVICES_SPECIFIER),HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"),
	HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),
	HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad"),
	HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93"),
	HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17"),
	HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04"),
	HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9"),
	HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7"),
	HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2"),
	HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5"),
	HX_HCSTRING("closeDevice","\x6e","\x02","\xc8","\x2b"),
	HX_HCSTRING("createContext","\x53","\x6e","\xba","\x01"),
	HX_HCSTRING("destroyContext","\x15","\x84","\xe3","\x85"),
	HX_HCSTRING("getContextsDevice","\x90","\xee","\x91","\x9c"),
	HX_HCSTRING("getCurrentContext","\xec","\xb9","\x7f","\x99"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("makeContextCurrent","\x98","\x6c","\xce","\x94"),
	HX_HCSTRING("openDevice","\x00","\x48","\x14","\xbf"),
	HX_HCSTRING("processContext","\x40","\xd7","\xd5","\xcb"),
	HX_HCSTRING("suspendContext","\xd3","\xb5","\xbc","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALCAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALCAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ALCAudioContext_obj::__mClass;

void ALCAudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.ALCAudioContext","\x20","\xb5","\x5f","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALCAudioContext_obj >;
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

} // end namespace lime
} // end namespace audio
