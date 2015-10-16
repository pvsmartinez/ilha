#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_HTML5AudioContext
#include <lime/audio/HTML5AudioContext.h>
#endif
namespace lime{
namespace audio{

Void HTML5AudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.HTML5AudioContext","new",0x52738744,"lime.audio.HTML5AudioContext.new","lime/audio/HTML5AudioContext.hx",9,0xfd54306e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->NETWORK_NO_SOURCE = (int)3;
	HX_STACK_LINE(19)
	this->NETWORK_LOADING = (int)2;
	HX_STACK_LINE(18)
	this->NETWORK_IDLE = (int)1;
	HX_STACK_LINE(17)
	this->NETWORK_EMPTY = (int)0;
	HX_STACK_LINE(16)
	this->HAVE_NOTHING = (int)0;
	HX_STACK_LINE(15)
	this->HAVE_METADATA = (int)1;
	HX_STACK_LINE(14)
	this->HAVE_FUTURE_DATA = (int)3;
	HX_STACK_LINE(13)
	this->HAVE_ENOUGH_DATA = (int)4;
	HX_STACK_LINE(12)
	this->HAVE_CURRENT_DATA = (int)2;
}
;
	return null();
}

//HTML5AudioContext_obj::~HTML5AudioContext_obj() { }

Dynamic HTML5AudioContext_obj::__CreateEmpty() { return  new HTML5AudioContext_obj; }
hx::ObjectPtr< HTML5AudioContext_obj > HTML5AudioContext_obj::__new()
{  hx::ObjectPtr< HTML5AudioContext_obj > _result_ = new HTML5AudioContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic HTML5AudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTML5AudioContext_obj > _result_ = new HTML5AudioContext_obj();
	_result_->__construct();
	return _result_;}

::String HTML5AudioContext_obj::canPlayType( ::lime::audio::AudioBuffer buffer,::String type){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","canPlayType",0xf58b51e2,"lime.audio.HTML5AudioContext.canPlayType","lime/audio/HTML5AudioContext.hx",40,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(40)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,canPlayType,return )

::lime::audio::AudioBuffer HTML5AudioContext_obj::createBuffer( ::String urlString){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","createBuffer",0x187649b8,"lime.audio.HTML5AudioContext.createBuffer","lime/audio/HTML5AudioContext.hx",53,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(urlString,"urlString")
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,createBuffer,return )

bool HTML5AudioContext_obj::getAutoplay( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getAutoplay",0xf161ee7d,"lime.audio.HTML5AudioContext.getAutoplay","lime/audio/HTML5AudioContext.hx",86,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(86)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getAutoplay,return )

Dynamic HTML5AudioContext_obj::getBuffered( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getBuffered",0x5bb952f9,"lime.audio.HTML5AudioContext.getBuffered","lime/audio/HTML5AudioContext.hx",101,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(101)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getBuffered,return )

::String HTML5AudioContext_obj::getCurrentSrc( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getCurrentSrc",0xd8db8445,"lime.audio.HTML5AudioContext.getCurrentSrc","lime/audio/HTML5AudioContext.hx",133,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(133)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getCurrentSrc,return )

Float HTML5AudioContext_obj::getCurrentTime( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getCurrentTime",0xe7daa38c,"lime.audio.HTML5AudioContext.getCurrentTime","lime/audio/HTML5AudioContext.hx",148,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(148)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getCurrentTime,return )

Float HTML5AudioContext_obj::getDefaultPlaybackRate( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getDefaultPlaybackRate",0xb0e811a2,"lime.audio.HTML5AudioContext.getDefaultPlaybackRate","lime/audio/HTML5AudioContext.hx",163,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(163)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getDefaultPlaybackRate,return )

Float HTML5AudioContext_obj::getDuration( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getDuration",0xc3490cee,"lime.audio.HTML5AudioContext.getDuration","lime/audio/HTML5AudioContext.hx",178,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(178)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getDuration,return )

bool HTML5AudioContext_obj::getEnded( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getEnded",0x8adc2720,"lime.audio.HTML5AudioContext.getEnded","lime/audio/HTML5AudioContext.hx",193,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(193)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getEnded,return )

Dynamic HTML5AudioContext_obj::getError( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getError",0x8d8ba9ee,"lime.audio.HTML5AudioContext.getError","lime/audio/HTML5AudioContext.hx",208,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(208)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getError,return )

bool HTML5AudioContext_obj::getLoop( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getLoop",0x9cc94efe,"lime.audio.HTML5AudioContext.getLoop","lime/audio/HTML5AudioContext.hx",240,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(240)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getLoop,return )

bool HTML5AudioContext_obj::getMuted( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getMuted",0x2abd6d91,"lime.audio.HTML5AudioContext.getMuted","lime/audio/HTML5AudioContext.hx",272,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(272)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getMuted,return )

int HTML5AudioContext_obj::getNetworkState( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getNetworkState",0x19013d1d,"lime.audio.HTML5AudioContext.getNetworkState","lime/audio/HTML5AudioContext.hx",287,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(287)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getNetworkState,return )

bool HTML5AudioContext_obj::getPaused( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPaused",0xeac4c3c8,"lime.audio.HTML5AudioContext.getPaused","lime/audio/HTML5AudioContext.hx",302,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(302)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPaused,return )

Float HTML5AudioContext_obj::getPlaybackRate( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPlaybackRate",0x60be0d35,"lime.audio.HTML5AudioContext.getPlaybackRate","lime/audio/HTML5AudioContext.hx",317,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(317)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPlaybackRate,return )

Dynamic HTML5AudioContext_obj::getPlayed( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPlayed",0x32f96e6d,"lime.audio.HTML5AudioContext.getPlayed","lime/audio/HTML5AudioContext.hx",332,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(332)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPlayed,return )

::String HTML5AudioContext_obj::getPreload( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getPreload",0x12757b6f,"lime.audio.HTML5AudioContext.getPreload","lime/audio/HTML5AudioContext.hx",347,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(347)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getPreload,return )

int HTML5AudioContext_obj::getReadyState( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getReadyState",0x4ef816c8,"lime.audio.HTML5AudioContext.getReadyState","lime/audio/HTML5AudioContext.hx",362,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(362)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getReadyState,return )

Dynamic HTML5AudioContext_obj::getSeekable( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getSeekable",0x06b00cac,"lime.audio.HTML5AudioContext.getSeekable","lime/audio/HTML5AudioContext.hx",377,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(377)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSeekable,return )

bool HTML5AudioContext_obj::getSeeking( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getSeeking",0x5be47610,"lime.audio.HTML5AudioContext.getSeeking","lime/audio/HTML5AudioContext.hx",392,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(392)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSeeking,return )

::String HTML5AudioContext_obj::getSrc( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getSrc",0x11f18f8a,"lime.audio.HTML5AudioContext.getSrc","lime/audio/HTML5AudioContext.hx",407,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(407)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getSrc,return )

Float HTML5AudioContext_obj::getStartTime( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getStartTime",0x3ad32eb5,"lime.audio.HTML5AudioContext.getStartTime","lime/audio/HTML5AudioContext.hx",422,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(422)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getStartTime,return )

Float HTML5AudioContext_obj::getVolume( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.audio.HTML5AudioContext","getVolume",0x5a93acf4,"lime.audio.HTML5AudioContext.getVolume","lime/audio/HTML5AudioContext.hx",437,0xfd54306e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(437)
	return (int)1;
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,getVolume,return )

Void HTML5AudioContext_obj::load( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","load",0xd157eac2,"lime.audio.HTML5AudioContext.load","lime/audio/HTML5AudioContext.hx",442,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,load,(void))

Void HTML5AudioContext_obj::pause( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","pause",0x9ffe0eda,"lime.audio.HTML5AudioContext.pause","lime/audio/HTML5AudioContext.hx",455,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,pause,(void))

Void HTML5AudioContext_obj::play( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","play",0xd3fa7e90,"lime.audio.HTML5AudioContext.play","lime/audio/HTML5AudioContext.hx",468,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HTML5AudioContext_obj,play,(void))

Void HTML5AudioContext_obj::setAutoplay( ::lime::audio::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setAutoplay",0xfbcef589,"lime.audio.HTML5AudioContext.setAutoplay","lime/audio/HTML5AudioContext.hx",481,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setAutoplay,(void))

Void HTML5AudioContext_obj::setCurrentTime( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setCurrentTime",0x07fa8c00,"lime.audio.HTML5AudioContext.setCurrentTime","lime/audio/HTML5AudioContext.hx",509,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setCurrentTime,(void))

Void HTML5AudioContext_obj::setDefaultPlaybackRate( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setDefaultPlaybackRate",0xe4938e16,"lime.audio.HTML5AudioContext.setDefaultPlaybackRate","lime/audio/HTML5AudioContext.hx",522,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setDefaultPlaybackRate,(void))

Void HTML5AudioContext_obj::setLoop( ::lime::audio::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setLoop",0x8fcae00a,"lime.audio.HTML5AudioContext.setLoop","lime/audio/HTML5AudioContext.hx",535,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setLoop,(void))

Void HTML5AudioContext_obj::setMuted( ::lime::audio::AudioBuffer buffer,bool value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setMuted",0xd91ac705,"lime.audio.HTML5AudioContext.setMuted","lime/audio/HTML5AudioContext.hx",563,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setMuted,(void))

Void HTML5AudioContext_obj::setPlaybackRate( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setPlaybackRate",0x5c898a41,"lime.audio.HTML5AudioContext.setPlaybackRate","lime/audio/HTML5AudioContext.hx",576,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setPlaybackRate,(void))

Void HTML5AudioContext_obj::setPreload( ::lime::audio::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setPreload",0x15f319e3,"lime.audio.HTML5AudioContext.setPreload","lime/audio/HTML5AudioContext.hx",589,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setPreload,(void))

Void HTML5AudioContext_obj::setSrc( ::lime::audio::AudioBuffer buffer,::String value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setSrc",0xde39e3fe,"lime.audio.HTML5AudioContext.setSrc","lime/audio/HTML5AudioContext.hx",602,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setSrc,(void))

Void HTML5AudioContext_obj::setVolume( ::lime::audio::AudioBuffer buffer,Float value){
{
		HX_STACK_FRAME("lime.audio.HTML5AudioContext","setVolume",0x3de49900,"lime.audio.HTML5AudioContext.setVolume","lime/audio/HTML5AudioContext.hx",615,0xfd54306e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HTML5AudioContext_obj,setVolume,(void))


HTML5AudioContext_obj::HTML5AudioContext_obj()
{
}

Dynamic HTML5AudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getSrc") ) { return getSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"setSrc") ) { return setSrc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getLoop") ) { return getLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"setLoop") ) { return setLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEnded") ) { return getEnded_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getMuted") ) { return getMuted_dyn(); }
		if (HX_FIELD_EQ(inName,"setMuted") ) { return setMuted_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPaused") ) { return getPaused_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayed") ) { return getPlayed_dyn(); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return getVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPreload") ) { return getPreload_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeeking") ) { return getSeeking_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreload") ) { return setPreload_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canPlayType") ) { return canPlayType_dyn(); }
		if (HX_FIELD_EQ(inName,"getAutoplay") ) { return getAutoplay_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffered") ) { return getBuffered_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"getSeekable") ) { return getSeekable_dyn(); }
		if (HX_FIELD_EQ(inName,"setAutoplay") ) { return setAutoplay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"HAVE_NOTHING") ) { return HAVE_NOTHING; }
		if (HX_FIELD_EQ(inName,"NETWORK_IDLE") ) { return NETWORK_IDLE; }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getStartTime") ) { return getStartTime_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"HAVE_METADATA") ) { return HAVE_METADATA; }
		if (HX_FIELD_EQ(inName,"NETWORK_EMPTY") ) { return NETWORK_EMPTY; }
		if (HX_FIELD_EQ(inName,"getCurrentSrc") ) { return getCurrentSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"getReadyState") ) { return getReadyState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return getCurrentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return setCurrentTime_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NETWORK_LOADING") ) { return NETWORK_LOADING; }
		if (HX_FIELD_EQ(inName,"getNetworkState") ) { return getNetworkState_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlaybackRate") ) { return getPlaybackRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setPlaybackRate") ) { return setPlaybackRate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"HAVE_ENOUGH_DATA") ) { return HAVE_ENOUGH_DATA; }
		if (HX_FIELD_EQ(inName,"HAVE_FUTURE_DATA") ) { return HAVE_FUTURE_DATA; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HAVE_CURRENT_DATA") ) { return HAVE_CURRENT_DATA; }
		if (HX_FIELD_EQ(inName,"NETWORK_NO_SOURCE") ) { return NETWORK_NO_SOURCE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getDefaultPlaybackRate") ) { return getDefaultPlaybackRate_dyn(); }
		if (HX_FIELD_EQ(inName,"setDefaultPlaybackRate") ) { return setDefaultPlaybackRate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTML5AudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"HAVE_NOTHING") ) { HAVE_NOTHING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_IDLE") ) { NETWORK_IDLE=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"HAVE_METADATA") ) { HAVE_METADATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_EMPTY") ) { NETWORK_EMPTY=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NETWORK_LOADING") ) { NETWORK_LOADING=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"HAVE_ENOUGH_DATA") ) { HAVE_ENOUGH_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HAVE_FUTURE_DATA") ) { HAVE_FUTURE_DATA=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"HAVE_CURRENT_DATA") ) { HAVE_CURRENT_DATA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NETWORK_NO_SOURCE") ) { NETWORK_NO_SOURCE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTML5AudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("HAVE_CURRENT_DATA","\xc7","\x06","\xef","\x83"));
	outFields->push(HX_HCSTRING("HAVE_ENOUGH_DATA","\xc2","\x82","\xd2","\x0d"));
	outFields->push(HX_HCSTRING("HAVE_FUTURE_DATA","\x4f","\x47","\xcb","\x85"));
	outFields->push(HX_HCSTRING("HAVE_METADATA","\x66","\xe7","\xbd","\x4f"));
	outFields->push(HX_HCSTRING("HAVE_NOTHING","\xd6","\x6b","\x51","\xb3"));
	outFields->push(HX_HCSTRING("NETWORK_EMPTY","\xbc","\x30","\xaa","\x1e"));
	outFields->push(HX_HCSTRING("NETWORK_IDLE","\xa5","\x2f","\x7b","\x65"));
	outFields->push(HX_HCSTRING("NETWORK_LOADING","\x6b","\xd2","\x4f","\x04"));
	outFields->push(HX_HCSTRING("NETWORK_NO_SOURCE","\x28","\x36","\x8b","\x93"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_CURRENT_DATA),HX_HCSTRING("HAVE_CURRENT_DATA","\xc7","\x06","\xef","\x83")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_ENOUGH_DATA),HX_HCSTRING("HAVE_ENOUGH_DATA","\xc2","\x82","\xd2","\x0d")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_FUTURE_DATA),HX_HCSTRING("HAVE_FUTURE_DATA","\x4f","\x47","\xcb","\x85")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_METADATA),HX_HCSTRING("HAVE_METADATA","\x66","\xe7","\xbd","\x4f")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,HAVE_NOTHING),HX_HCSTRING("HAVE_NOTHING","\xd6","\x6b","\x51","\xb3")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_EMPTY),HX_HCSTRING("NETWORK_EMPTY","\xbc","\x30","\xaa","\x1e")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_IDLE),HX_HCSTRING("NETWORK_IDLE","\xa5","\x2f","\x7b","\x65")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_LOADING),HX_HCSTRING("NETWORK_LOADING","\x6b","\xd2","\x4f","\x04")},
	{hx::fsInt,(int)offsetof(HTML5AudioContext_obj,NETWORK_NO_SOURCE),HX_HCSTRING("NETWORK_NO_SOURCE","\x28","\x36","\x8b","\x93")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("HAVE_CURRENT_DATA","\xc7","\x06","\xef","\x83"),
	HX_HCSTRING("HAVE_ENOUGH_DATA","\xc2","\x82","\xd2","\x0d"),
	HX_HCSTRING("HAVE_FUTURE_DATA","\x4f","\x47","\xcb","\x85"),
	HX_HCSTRING("HAVE_METADATA","\x66","\xe7","\xbd","\x4f"),
	HX_HCSTRING("HAVE_NOTHING","\xd6","\x6b","\x51","\xb3"),
	HX_HCSTRING("NETWORK_EMPTY","\xbc","\x30","\xaa","\x1e"),
	HX_HCSTRING("NETWORK_IDLE","\xa5","\x2f","\x7b","\x65"),
	HX_HCSTRING("NETWORK_LOADING","\x6b","\xd2","\x4f","\x04"),
	HX_HCSTRING("NETWORK_NO_SOURCE","\x28","\x36","\x8b","\x93"),
	HX_HCSTRING("canPlayType","\xfe","\x16","\xc4","\x6c"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("getAutoplay","\x99","\xb3","\x9a","\x68"),
	HX_HCSTRING("getBuffered","\x15","\x18","\xf2","\xd2"),
	HX_HCSTRING("getCurrentSrc","\x61","\xc8","\xa4","\x23"),
	HX_HCSTRING("getCurrentTime","\xf0","\xf7","\x2c","\x0d"),
	HX_HCSTRING("getDefaultPlaybackRate","\x06","\x6a","\xfb","\x14"),
	HX_HCSTRING("getDuration","\x0a","\xd2","\x81","\x3a"),
	HX_HCSTRING("getEnded","\x84","\x58","\x51","\xd0"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getLoop","\x1a","\x56","\x3a","\x1a"),
	HX_HCSTRING("getMuted","\xf5","\x9e","\x32","\x70"),
	HX_HCSTRING("getNetworkState","\x39","\xc0","\xb8","\x9b"),
	HX_HCSTRING("getPaused","\xe4","\xc9","\xda","\x6b"),
	HX_HCSTRING("getPlaybackRate","\x51","\x90","\x75","\xe3"),
	HX_HCSTRING("getPlayed","\x89","\x74","\x0f","\xb4"),
	HX_HCSTRING("getPreload","\xd3","\xcd","\xa4","\x84"),
	HX_HCSTRING("getReadyState","\xe4","\x5a","\xc1","\x99"),
	HX_HCSTRING("getSeekable","\xc8","\xd1","\xe8","\x7d"),
	HX_HCSTRING("getSeeking","\x74","\xc8","\x13","\xce"),
	HX_HCSTRING("getSrc","\xee","\xdf","\x26","\xa3"),
	HX_HCSTRING("getStartTime","\x19","\xe2","\x46","\x15"),
	HX_HCSTRING("getVolume","\x10","\xb3","\xa9","\xdb"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("setAutoplay","\xa5","\xba","\x07","\x73"),
	HX_HCSTRING("setCurrentTime","\x64","\xe0","\x4c","\x2d"),
	HX_HCSTRING("setDefaultPlaybackRate","\x7a","\xe6","\xa6","\x48"),
	HX_HCSTRING("setLoop","\x26","\xe7","\x3b","\x0d"),
	HX_HCSTRING("setMuted","\x69","\xf8","\x8f","\x1e"),
	HX_HCSTRING("setPlaybackRate","\x5d","\x0d","\x41","\xdf"),
	HX_HCSTRING("setPreload","\x47","\x6c","\x22","\x88"),
	HX_HCSTRING("setSrc","\x62","\x34","\x6f","\x6f"),
	HX_HCSTRING("setVolume","\x1c","\x9f","\xfa","\xbe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTML5AudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTML5AudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class HTML5AudioContext_obj::__mClass;

void HTML5AudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.HTML5AudioContext","\x52","\xd5","\xcd","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTML5AudioContext_obj >;
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
