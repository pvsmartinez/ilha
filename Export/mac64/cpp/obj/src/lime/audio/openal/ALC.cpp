#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
namespace lime{
namespace audio{
namespace openal{

Void ALC_obj::__construct()
{
	return null();
}

//ALC_obj::~ALC_obj() { }

Dynamic ALC_obj::__CreateEmpty() { return  new ALC_obj; }
hx::ObjectPtr< ALC_obj > ALC_obj::__new()
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALC_obj > _result_ = new ALC_obj();
	_result_->__construct();
	return _result_;}

int ALC_obj::FALSE;

int ALC_obj::TRUE;

int ALC_obj::FREQUENCY;

int ALC_obj::REFRESH;

int ALC_obj::SYNC;

int ALC_obj::MONO_SOURCES;

int ALC_obj::STEREO_SOURCES;

int ALC_obj::NO_ERROR;

int ALC_obj::INVALID_DEVICE;

int ALC_obj::INVALID_CONTEXT;

int ALC_obj::INVALID_ENUM;

int ALC_obj::INVALID_VALUE;

int ALC_obj::OUT_OF_MEMORY;

int ALC_obj::ATTRIBUTES_SIZE;

int ALC_obj::ALL_ATTRIBUTES;

int ALC_obj::DEFAULT_DEVICE_SPECIFIER;

int ALC_obj::DEVICE_SPECIFIER;

int ALC_obj::EXTENSIONS;

int ALC_obj::ENUMERATE_ALL_EXT;

int ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER;

int ALC_obj::ALL_DEVICES_SPECIFIER;

bool ALC_obj::closeDevice( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","closeDevice",0xea953e50,"lime.audio.openal.ALC.closeDevice","lime/audio/openal/ALC.hx",40,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(40)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_close_device.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

Dynamic ALC_obj::createContext( Dynamic device,Array< int > attrlist){
	HX_STACK_FRAME("lime.audio.openal.ALC","createContext",0xfb37e6b5,"lime.audio.openal.ALC.createContext","lime/audio/openal/ALC.hx",48,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(51)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_create_context.call(hx::DynamicPtr(device),hx::DynamicPtr(attrlist));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(51)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(51)
	Dynamic handle = tmp;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(53)
	bool tmp1 = (handle != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(55)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			Dynamic handle1 = handle;		HX_STACK_VAR(handle1,"handle1");
			HX_STACK_LINE(55)
			tmp2 = handle1;
		}
		HX_STACK_LINE(55)
		return tmp2;
	}
	HX_STACK_LINE(60)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

Void ALC_obj::destroyContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","destroyContext",0xda2f6173,"lime.audio.openal.ALC.destroyContext","lime/audio/openal/ALC.hx",68,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(68)
		::lime::audio::openal::ALC_obj::cffi_lime_alc_destroy_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

Dynamic ALC_obj::getContextsDevice( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","getContextsDevice",0x1b703ff2,"lime.audio.openal.ALC.getContextsDevice","lime/audio/openal/ALC.hx",74,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(77)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_contexts_device.call(hx::DynamicPtr(context));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(77)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(77)
	Dynamic handle = tmp;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(79)
	bool tmp1 = (handle != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	if ((tmp1)){
		HX_STACK_LINE(81)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			Dynamic handle1 = handle;		HX_STACK_VAR(handle1,"handle1");
			HX_STACK_LINE(81)
			tmp2 = handle1;
		}
		HX_STACK_LINE(81)
		return tmp2;
	}
	HX_STACK_LINE(86)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

Dynamic ALC_obj::getCurrentContext( ){
	HX_STACK_FRAME("lime.audio.openal.ALC","getCurrentContext",0x185e0b4e,"lime.audio.openal.ALC.getCurrentContext","lime/audio/openal/ALC.hx",91,0x52b9922d)
	HX_STACK_LINE(94)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_current_context.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(94)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(94)
	Dynamic handle = tmp;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(96)
	bool tmp1 = (handle != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	if ((tmp1)){
		HX_STACK_LINE(98)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			Dynamic handle1 = handle;		HX_STACK_VAR(handle1,"handle1");
			HX_STACK_LINE(98)
			tmp2 = handle1;
		}
		HX_STACK_LINE(98)
		return tmp2;
	}
	HX_STACK_LINE(103)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

int ALC_obj::getError( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","getError",0xbf7a3e30,"lime.audio.openal.ALC.getError","lime/audio/openal/ALC.hx",111,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(111)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_error.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getError,return )

::String ALC_obj::getErrorString( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","getErrorString",0xdb879f21,"lime.audio.openal.ALC.getErrorString","lime/audio/openal/ALC.hx",119,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(121)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		Dynamic tmp1 = device;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		int tmp2 = ::lime::audio::openal::ALC_obj::getError(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		switch( (int)(tmp3)){
			case (int)40961: {
				HX_STACK_LINE(123)
				tmp = HX_HCSTRING("INVALID_DEVICE: Invalid device (or no device?)","\x8d","\x16","\x8a","\x9d");
			}
			;break;
			case (int)40962: {
				HX_STACK_LINE(124)
				tmp = HX_HCSTRING("INVALID_CONTEXT: Invalid context (or no context?)","\x56","\x39","\x91","\x8b");
			}
			;break;
			case (int)40963: {
				HX_STACK_LINE(125)
				tmp = HX_HCSTRING("INVALID_ENUM: Invalid enum value","\x0a","\xd7","\xdf","\x59");
			}
			;break;
			case (int)40964: {
				HX_STACK_LINE(126)
				tmp = HX_HCSTRING("INVALID_VALUE: Invalid param value","\xa6","\x0e","\x30","\x55");
			}
			;break;
			case (int)40965: {
				HX_STACK_LINE(127)
				tmp = HX_HCSTRING("OUT_OF_MEMORY: OpenAL has run out of memory","\xb0","\xdd","\xfb","\x0a");
			}
			;break;
			default: {
				HX_STACK_LINE(128)
				tmp = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
	}
	HX_STACK_LINE(121)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getErrorString,return )

Array< int > ALC_obj::getIntegerv( Dynamic device,int param,int size){
	HX_STACK_FRAME("lime.audio.openal.ALC","getIntegerv",0x05eb4790,"lime.audio.openal.ALC.getIntegerv","lime/audio/openal/ALC.hx",138,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(138)
	return ((Dynamic)(::lime::audio::openal::ALC_obj::cffi_lime_alc_get_integerv.call(hx::DynamicPtr(device),param,size)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,getIntegerv,return )

::String ALC_obj::getString( Dynamic device,int param){
	HX_STACK_FRAME("lime.audio.openal.ALC","getString",0x8b43d169,"lime.audio.openal.ALC.getString","lime/audio/openal/ALC.hx",149,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(149)
	return ((Dynamic)(::lime::audio::openal::ALC_obj::cffi_lime_alc_get_string.call(hx::DynamicPtr(device),param)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,getString,return )

bool ALC_obj::makeContextCurrent( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","makeContextCurrent",0x187750f6,"lime.audio.openal.ALC.makeContextCurrent","lime/audio/openal/ALC.hx",160,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(160)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_make_context_current.call(hx::DynamicPtr(context));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

Dynamic ALC_obj::openDevice( ::String deviceName){
	HX_STACK_FRAME("lime.audio.openal.ALC","openDevice",0xc6d29e5e,"lime.audio.openal.ALC.openDevice","lime/audio/openal/ALC.hx",168,0x52b9922d)
	HX_STACK_ARG(deviceName,"deviceName")
	HX_STACK_LINE(171)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_open_device.call(deviceName);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(171)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(171)
	Dynamic handle = tmp;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(173)
	bool tmp1 = (handle != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	if ((tmp1)){
		HX_STACK_LINE(175)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			Dynamic handle1 = handle;		HX_STACK_VAR(handle1,"handle1");
			HX_STACK_LINE(175)
			tmp2 = handle1;
		}
		HX_STACK_LINE(175)
		return tmp2;
	}
	HX_STACK_LINE(180)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

Void ALC_obj::processContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","processContext",0x2021b49e,"lime.audio.openal.ALC.processContext","lime/audio/openal/ALC.hx",188,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(188)
		::lime::audio::openal::ALC_obj::cffi_lime_alc_process_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

Void ALC_obj::suspendContext( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","suspendContext",0x53089331,"lime.audio.openal.ALC.suspendContext","lime/audio/openal/ALC.hx",197,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(197)
		::lime::audio::openal::ALC_obj::cffi_lime_alc_suspend_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))

bool ALC_obj::lime_alc_close_device( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_close_device",0xf97bc250,"lime.audio.openal.ALC.lime_alc_close_device","lime/audio/openal/ALC.hx",204,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(204)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_close_device.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_close_device,return )

Dynamic ALC_obj::lime_alc_create_context( Dynamic device,Dynamic attrlist){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_create_context",0x07aed1ff,"lime.audio.openal.ALC.lime_alc_create_context","lime/audio/openal/ALC.hx",205,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(attrlist,"attrlist")
	HX_STACK_LINE(205)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_create_context.call(hx::DynamicPtr(device),hx::DynamicPtr(attrlist));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(205)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(205)
	return tmp;
	HX_STACK_LINE(205)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,lime_alc_create_context,return )

Void ALC_obj::lime_alc_destroy_context( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_destroy_context",0x26e82777,"lime.audio.openal.ALC.lime_alc_destroy_context","lime/audio/openal/ALC.hx",206,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(206)
		::lime::audio::openal::ALC_obj::cffi_lime_alc_destroy_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_destroy_context,(void))

Dynamic ALC_obj::lime_alc_get_contexts_device( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_get_contexts_device",0xf58829b5,"lime.audio.openal.ALC.lime_alc_get_contexts_device","lime/audio/openal/ALC.hx",207,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(207)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_contexts_device.call(hx::DynamicPtr(context));		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(207)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(207)
	return tmp;
	HX_STACK_LINE(207)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_get_contexts_device,return )

Dynamic ALC_obj::lime_alc_get_current_context( ){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_get_current_context",0x57ca474d,"lime.audio.openal.ALC.lime_alc_get_current_context","lime/audio/openal/ALC.hx",208,0x52b9922d)
	HX_STACK_LINE(208)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_current_context.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(208)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(208)
	return tmp;
	HX_STACK_LINE(208)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,lime_alc_get_current_context,return )

int ALC_obj::lime_alc_get_error( Dynamic device){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_get_error",0xe417316c,"lime.audio.openal.ALC.lime_alc_get_error","lime/audio/openal/ALC.hx",209,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_LINE(209)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_error.call(hx::DynamicPtr(device));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_get_error,return )

Dynamic ALC_obj::lime_alc_get_integerv( Dynamic device,int param,int size){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_get_integerv",0x715101d4,"lime.audio.openal.ALC.lime_alc_get_integerv","lime/audio/openal/ALC.hx",210,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(210)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_integerv.call(hx::DynamicPtr(device),param,size);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ALC_obj,lime_alc_get_integerv,return )

Dynamic ALC_obj::lime_alc_get_string( Dynamic device,int param){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_get_string",0x6ffbb2ad,"lime.audio.openal.ALC.lime_alc_get_string","lime/audio/openal/ALC.hx",211,0x52b9922d)
	HX_STACK_ARG(device,"device")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(211)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_get_string.call(hx::DynamicPtr(device),param);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,lime_alc_get_string,return )

bool ALC_obj::lime_alc_make_context_current( Dynamic context){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_make_context_current",0xb9e0daeb,"lime.audio.openal.ALC.lime_alc_make_context_current","lime/audio/openal/ALC.hx",212,0x52b9922d)
	HX_STACK_ARG(context,"context")
	HX_STACK_LINE(212)
	return ::lime::audio::openal::ALC_obj::cffi_lime_alc_make_context_current.call(hx::DynamicPtr(context));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_make_context_current,return )

Dynamic ALC_obj::lime_alc_open_device( ::String devicename){
	HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_open_device",0xbb320e38,"lime.audio.openal.ALC.lime_alc_open_device","lime/audio/openal/ALC.hx",213,0x52b9922d)
	HX_STACK_ARG(devicename,"devicename")
	HX_STACK_LINE(213)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		::hx::Object * inVal = ::lime::audio::openal::ALC_obj::cffi_lime_alc_open_device.call(devicename);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(213)
		::hx::Object * tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		::hx::Object * tmp2 = hx::DynamicPtr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		tmp = Dynamic(tmp2);
	}
	HX_STACK_LINE(213)
	return tmp;
	HX_STACK_LINE(213)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_open_device,return )

Void ALC_obj::lime_alc_process_context( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_process_context",0x14fe99ec,"lime.audio.openal.ALC.lime_alc_process_context","lime/audio/openal/ALC.hx",214,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(214)
		::lime::audio::openal::ALC_obj::cffi_lime_alc_process_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_process_context,(void))

Void ALC_obj::lime_alc_suspend_context( Dynamic context){
{
		HX_STACK_FRAME("lime.audio.openal.ALC","lime_alc_suspend_context",0x6c1a7bf9,"lime.audio.openal.ALC.lime_alc_suspend_context","lime/audio/openal/ALC.hx",215,0x52b9922d)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(215)
		::lime::audio::openal::ALC_obj::cffi_lime_alc_suspend_context.call(hx::DynamicPtr(context));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,lime_alc_suspend_context,(void))

::cpp::Function< bool ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_close_device;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > ALC_obj::cffi_lime_alc_create_context;

::cpp::Function< void ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_destroy_context;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_get_contexts_device;

::cpp::Function< ::hx::Object * ( ) > ALC_obj::cffi_lime_alc_get_current_context;

::cpp::Function< int ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_get_error;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > ALC_obj::cffi_lime_alc_get_integerv;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > ALC_obj::cffi_lime_alc_get_string;

::cpp::Function< bool ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_make_context_current;

::cpp::Function< ::hx::Object * ( ::String ) > ALC_obj::cffi_lime_alc_open_device;

::cpp::Function< void ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_process_context;

::cpp::Function< void ( ::hx::Object * ) > ALC_obj::cffi_lime_alc_suspend_context;


ALC_obj::ALC_obj()
{
}

bool ALC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"openDevice") ) { outValue = openDevice_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { outValue = closeDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { outValue = getIntegerv_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { outValue = createContext_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyContext") ) { outValue = destroyContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { outValue = getErrorString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"processContext") ) { outValue = processContext_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { outValue = suspendContext_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { outValue = getContextsDevice_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { outValue = getCurrentContext_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { outValue = makeContextCurrent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_error") ) { outValue = lime_alc_get_error_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_alc_get_string") ) { outValue = lime_alc_get_string_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_alc_open_device") ) { outValue = lime_alc_open_device_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_alc_close_device") ) { outValue = lime_alc_close_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_integerv") ) { outValue = lime_alc_get_integerv_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_alc_create_context") ) { outValue = lime_alc_create_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_error") ) { outValue = cffi_lime_alc_get_error; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_alc_destroy_context") ) { outValue = lime_alc_destroy_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_process_context") ) { outValue = lime_alc_process_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_suspend_context") ) { outValue = lime_alc_suspend_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_string") ) { outValue = cffi_lime_alc_get_string; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_open_device") ) { outValue = cffi_lime_alc_open_device; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_close_device") ) { outValue = cffi_lime_alc_close_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_integerv") ) { outValue = cffi_lime_alc_get_integerv; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_alc_get_contexts_device") ) { outValue = lime_alc_get_contexts_device_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_alc_get_current_context") ) { outValue = lime_alc_get_current_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_create_context") ) { outValue = cffi_lime_alc_create_context; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_alc_make_context_current") ) { outValue = lime_alc_make_context_current_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_destroy_context") ) { outValue = cffi_lime_alc_destroy_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_process_context") ) { outValue = cffi_lime_alc_process_context; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_suspend_context") ) { outValue = cffi_lime_alc_suspend_context; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_contexts_device") ) { outValue = cffi_lime_alc_get_contexts_device; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_current_context") ) { outValue = cffi_lime_alc_get_current_context; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_make_context_current") ) { outValue = cffi_lime_alc_make_context_current; return true;  }
	}
	return false;
}

bool ALC_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_error") ) { cffi_lime_alc_get_error=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_string") ) { cffi_lime_alc_get_string=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_open_device") ) { cffi_lime_alc_open_device=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_close_device") ) { cffi_lime_alc_close_device=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_integerv") ) { cffi_lime_alc_get_integerv=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_create_context") ) { cffi_lime_alc_create_context=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_destroy_context") ) { cffi_lime_alc_destroy_context=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_process_context") ) { cffi_lime_alc_process_context=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_suspend_context") ) { cffi_lime_alc_suspend_context=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_contexts_device") ) { cffi_lime_alc_get_contexts_device=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_get_current_context") ) { cffi_lime_alc_get_current_context=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_alc_make_context_current") ) { cffi_lime_alc_make_context_current=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ALC_obj::FALSE,HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(void *) &ALC_obj::TRUE,HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(void *) &ALC_obj::FREQUENCY,HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::REFRESH,HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsInt,(void *) &ALC_obj::SYNC,HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")},
	{hx::fsInt,(void *) &ALC_obj::MONO_SOURCES,HX_HCSTRING("MONO_SOURCES","\xbc","\x3b","\x3c","\xad")},
	{hx::fsInt,(void *) &ALC_obj::STEREO_SOURCES,HX_HCSTRING("STEREO_SOURCES","\xd1","\x0f","\x99","\x60")},
	{hx::fsInt,(void *) &ALC_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_DEVICE,HX_HCSTRING("INVALID_DEVICE","\x3e","\x84","\xa5","\x93")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_CONTEXT,HX_HCSTRING("INVALID_CONTEXT","\x27","\xa1","\x3c","\xdf")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &ALC_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &ALC_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &ALC_obj::ATTRIBUTES_SIZE,HX_HCSTRING("ATTRIBUTES_SIZE","\x69","\x7c","\x9f","\x17")},
	{hx::fsInt,(void *) &ALC_obj::ALL_ATTRIBUTES,HX_HCSTRING("ALL_ATTRIBUTES","\x95","\xe2","\x00","\x04")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_DEVICE_SPECIFIER,HX_HCSTRING("DEFAULT_DEVICE_SPECIFIER","\x93","\xa5","\xbc","\xd9")},
	{hx::fsInt,(void *) &ALC_obj::DEVICE_SPECIFIER,HX_HCSTRING("DEVICE_SPECIFIER","\xf5","\xa8","\x61","\x21")},
	{hx::fsInt,(void *) &ALC_obj::EXTENSIONS,HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(void *) &ALC_obj::ENUMERATE_ALL_EXT,HX_HCSTRING("ENUMERATE_ALL_EXT","\x88","\xff","\x7d","\xb7")},
	{hx::fsInt,(void *) &ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,HX_HCSTRING("DEFAULT_ALL_DEVICES_SPECIFIER","\xc0","\xd6","\x77","\xd2")},
	{hx::fsInt,(void *) &ALC_obj::ALL_DEVICES_SPECIFIER,HX_HCSTRING("ALL_DEVICES_SPECIFIER","\x1e","\x50","\xc1","\xf5")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_close_device,HX_HCSTRING("cffi_lime_alc_close_device","\x55","\x3c","\xec","\x8c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_create_context,HX_HCSTRING("cffi_lime_alc_create_context","\x44","\x97","\xb5","\xb3")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_destroy_context,HX_HCSTRING("cffi_lime_alc_destroy_context","\x92","\xfe","\xcd","\x00")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_get_contexts_device,HX_HCSTRING("cffi_lime_alc_get_contexts_device","\x50","\x2a","\x77","\xd8")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_get_current_context,HX_HCSTRING("cffi_lime_alc_get_current_context","\xe8","\x47","\xb9","\x3a")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_get_error,HX_HCSTRING("cffi_lime_alc_get_error","\x47","\x72","\xb0","\xd4")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_get_integerv,HX_HCSTRING("cffi_lime_alc_get_integerv","\xd9","\x7b","\xc1","\x04")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_get_string,HX_HCSTRING("cffi_lime_alc_get_string","\x72","\x31","\x7b","\x05")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_make_context_current,HX_HCSTRING("cffi_lime_alc_make_context_current","\xf0","\x61","\x12","\x68")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_open_device,HX_HCSTRING("cffi_lime_alc_open_device","\xd3","\x7b","\x41","\xf5")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_process_context,HX_HCSTRING("cffi_lime_alc_process_context","\x07","\x71","\xe4","\xee")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ALC_obj::cffi_lime_alc_suspend_context,HX_HCSTRING("cffi_lime_alc_suspend_context","\x14","\x53","\x00","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_MARK_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_MARK_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_MARK_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_MARK_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_MARK_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_MARK_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_MARK_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_close_device,"cffi_lime_alc_close_device");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_create_context,"cffi_lime_alc_create_context");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_destroy_context,"cffi_lime_alc_destroy_context");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_contexts_device,"cffi_lime_alc_get_contexts_device");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_current_context,"cffi_lime_alc_get_current_context");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_error,"cffi_lime_alc_get_error");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_integerv,"cffi_lime_alc_get_integerv");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_string,"cffi_lime_alc_get_string");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_make_context_current,"cffi_lime_alc_make_context_current");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_open_device,"cffi_lime_alc_open_device");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_process_context,"cffi_lime_alc_process_context");
	HX_MARK_MEMBER_NAME(ALC_obj::cffi_lime_alc_suspend_context,"cffi_lime_alc_suspend_context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALC_obj::FALSE,"FALSE");
	HX_VISIT_MEMBER_NAME(ALC_obj::TRUE,"TRUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::FREQUENCY,"FREQUENCY");
	HX_VISIT_MEMBER_NAME(ALC_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(ALC_obj::SYNC,"SYNC");
	HX_VISIT_MEMBER_NAME(ALC_obj::MONO_SOURCES,"MONO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::STEREO_SOURCES,"STEREO_SOURCES");
	HX_VISIT_MEMBER_NAME(ALC_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_DEVICE,"INVALID_DEVICE");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_CONTEXT,"INVALID_CONTEXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(ALC_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(ALC_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(ALC_obj::ATTRIBUTES_SIZE,"ATTRIBUTES_SIZE");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_ATTRIBUTES,"ALL_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_DEVICE_SPECIFIER,"DEFAULT_DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEVICE_SPECIFIER,"DEVICE_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::EXTENSIONS,"EXTENSIONS");
	HX_VISIT_MEMBER_NAME(ALC_obj::ENUMERATE_ALL_EXT,"ENUMERATE_ALL_EXT");
	HX_VISIT_MEMBER_NAME(ALC_obj::DEFAULT_ALL_DEVICES_SPECIFIER,"DEFAULT_ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::ALL_DEVICES_SPECIFIER,"ALL_DEVICES_SPECIFIER");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_close_device,"cffi_lime_alc_close_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_create_context,"cffi_lime_alc_create_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_destroy_context,"cffi_lime_alc_destroy_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_contexts_device,"cffi_lime_alc_get_contexts_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_current_context,"cffi_lime_alc_get_current_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_error,"cffi_lime_alc_get_error");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_integerv,"cffi_lime_alc_get_integerv");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_get_string,"cffi_lime_alc_get_string");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_make_context_current,"cffi_lime_alc_make_context_current");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_open_device,"cffi_lime_alc_open_device");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_process_context,"cffi_lime_alc_process_context");
	HX_VISIT_MEMBER_NAME(ALC_obj::cffi_lime_alc_suspend_context,"cffi_lime_alc_suspend_context");
};

#endif

hx::Class ALC_obj::__mClass;

static ::String sStaticFields[] = {
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
	HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1"),
	HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8"),
	HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12"),
	HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6"),
	HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48"),
	HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60"),
	HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49"),
	HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf"),
	HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca"),
	HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50"),
	HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00"),
	HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57"),
	HX_HCSTRING("cffi_lime_alc_close_device","\x55","\x3c","\xec","\x8c"),
	HX_HCSTRING("cffi_lime_alc_create_context","\x44","\x97","\xb5","\xb3"),
	HX_HCSTRING("cffi_lime_alc_destroy_context","\x92","\xfe","\xcd","\x00"),
	HX_HCSTRING("cffi_lime_alc_get_contexts_device","\x50","\x2a","\x77","\xd8"),
	HX_HCSTRING("cffi_lime_alc_get_current_context","\xe8","\x47","\xb9","\x3a"),
	HX_HCSTRING("cffi_lime_alc_get_error","\x47","\x72","\xb0","\xd4"),
	HX_HCSTRING("cffi_lime_alc_get_integerv","\xd9","\x7b","\xc1","\x04"),
	HX_HCSTRING("cffi_lime_alc_get_string","\x72","\x31","\x7b","\x05"),
	HX_HCSTRING("cffi_lime_alc_make_context_current","\xf0","\x61","\x12","\x68"),
	HX_HCSTRING("cffi_lime_alc_open_device","\xd3","\x7b","\x41","\xf5"),
	HX_HCSTRING("cffi_lime_alc_process_context","\x07","\x71","\xe4","\xee"),
	HX_HCSTRING("cffi_lime_alc_suspend_context","\x14","\x53","\x00","\x46"),
	::String(null()) };

void ALC_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.openal.ALC","\x50","\xd1","\xca","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALC_obj::__GetStatic;
	__mClass->mSetStaticField = &ALC_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALC_obj >;
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

void ALC_obj::__boot()
{
	FALSE= (int)0;
	TRUE= (int)1;
	FREQUENCY= (int)4103;
	REFRESH= (int)4104;
	SYNC= (int)4105;
	MONO_SOURCES= (int)4112;
	STEREO_SOURCES= (int)4113;
	NO_ERROR= (int)0;
	INVALID_DEVICE= (int)40961;
	INVALID_CONTEXT= (int)40962;
	INVALID_ENUM= (int)40963;
	INVALID_VALUE= (int)40964;
	OUT_OF_MEMORY= (int)40965;
	ATTRIBUTES_SIZE= (int)4098;
	ALL_ATTRIBUTES= (int)4099;
	DEFAULT_DEVICE_SPECIFIER= (int)4100;
	DEVICE_SPECIFIER= (int)4101;
	EXTENSIONS= (int)4102;
	ENUMERATE_ALL_EXT= (int)1;
	DEFAULT_ALL_DEVICES_SPECIFIER= (int)4114;
	ALL_DEVICES_SPECIFIER= (int)4115;
	cffi_lime_alc_close_device= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_close_device","\xee","\x17","\x5c","\xd1"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_alc_create_context= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_create_context","\x1d","\x4b","\x86","\xd8"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_alc_destroy_context= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_destroy_context","\x99","\xa8","\x9a","\x12"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_alc_get_contexts_device= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_contexts_device","\xd7","\xe3","\xae","\xe6"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_alc_get_current_context= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_current_context","\x6f","\x01","\xf1","\x48"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_alc_get_error= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_error","\x0e","\x4d","\x6e","\x60"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_alc_get_integerv= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_integerv","\x72","\x57","\x31","\x49"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_alc_get_string= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_get_string","\xcb","\xc4","\xdc","\xbf"),HX_HCSTRING("oio","\x15","\x96","\x54","\x00"),false));
	cffi_lime_alc_make_context_current= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_make_context_current","\x89","\xfe","\x9c","\xca"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_alc_open_device= ::cpp::Function< ::hx::Object * ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_open_device","\x5a","\xd6","\x40","\x50"),HX_HCSTRING("so","\x9c","\x64","\x00","\x00"),false));
	cffi_lime_alc_process_context= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_process_context","\x0e","\x1b","\xb1","\x00"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_alc_suspend_context= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_alc_suspend_context","\x1b","\xfd","\xcc","\x57"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
