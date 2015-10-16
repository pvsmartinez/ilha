#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace audio{

Void ALAudioContext_obj::__construct()
{
HX_STACK_FRAME("lime.audio.ALAudioContext","new",0x4288bf47,"lime.audio.ALAudioContext.new","lime/audio/ALAudioContext.hx",8,0x9101d507)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(72)
	this->EXPONENT_DISTANCE_CLAMPED = (int)53254;
	HX_STACK_LINE(71)
	this->EXPONENT_DISTANCE = (int)53253;
	HX_STACK_LINE(70)
	this->LINEAR_DISTANCE_CLAMPED = (int)53252;
	HX_STACK_LINE(69)
	this->LINEAR_DISTANCE = (int)53251;
	HX_STACK_LINE(68)
	this->INVERSE_DISTANCE_CLAMPED = (int)53250;
	HX_STACK_LINE(67)
	this->INVERSE_DISTANCE = (int)53249;
	HX_STACK_LINE(66)
	this->DISTANCE_MODEL = (int)53248;
	HX_STACK_LINE(65)
	this->DOPPLER_VELOCITY = (int)49153;
	HX_STACK_LINE(64)
	this->SPEED_OF_SOUND = (int)49155;
	HX_STACK_LINE(63)
	this->DOPPLER_FACTOR = (int)49152;
	HX_STACK_LINE(62)
	this->EXTENSIONS = (int)45060;
	HX_STACK_LINE(61)
	this->RENDERER = (int)45059;
	HX_STACK_LINE(60)
	this->VERSION = (int)45058;
	HX_STACK_LINE(59)
	this->VENDOR = (int)45057;
	HX_STACK_LINE(58)
	this->OUT_OF_MEMORY = (int)40965;
	HX_STACK_LINE(57)
	this->INVALID_OPERATION = (int)40964;
	HX_STACK_LINE(56)
	this->INVALID_VALUE = (int)40963;
	HX_STACK_LINE(55)
	this->INVALID_ENUM = (int)40962;
	HX_STACK_LINE(54)
	this->INVALID_NAME = (int)40961;
	HX_STACK_LINE(53)
	this->NO_ERROR = (int)0;
	HX_STACK_LINE(52)
	this->SIZE = (int)8196;
	HX_STACK_LINE(51)
	this->CHANNELS = (int)8195;
	HX_STACK_LINE(50)
	this->BITS = (int)8194;
	HX_STACK_LINE(49)
	this->FREQUENCY = (int)8193;
	HX_STACK_LINE(48)
	this->FORMAT_STEREO16 = (int)4355;
	HX_STACK_LINE(47)
	this->FORMAT_STEREO8 = (int)4354;
	HX_STACK_LINE(46)
	this->FORMAT_MONO16 = (int)4353;
	HX_STACK_LINE(45)
	this->FORMAT_MONO8 = (int)4352;
	HX_STACK_LINE(44)
	this->UNDETERMINED = (int)4144;
	HX_STACK_LINE(43)
	this->STREAMING = (int)4137;
	HX_STACK_LINE(42)
	this->STATIC = (int)4136;
	HX_STACK_LINE(41)
	this->SOURCE_TYPE = (int)4135;
	HX_STACK_LINE(40)
	this->BYTE_OFFSET = (int)4134;
	HX_STACK_LINE(39)
	this->SAMPLE_OFFSET = (int)4133;
	HX_STACK_LINE(38)
	this->SEC_OFFSET = (int)4132;
	HX_STACK_LINE(37)
	this->MAX_DISTANCE = (int)4131;
	HX_STACK_LINE(36)
	this->CONE_OUTER_GAIN = (int)4130;
	HX_STACK_LINE(35)
	this->ROLLOFF_FACTOR = (int)4129;
	HX_STACK_LINE(34)
	this->REFERENCE_DISTANCE = (int)4128;
	HX_STACK_LINE(33)
	this->BUFFERS_PROCESSED = (int)4118;
	HX_STACK_LINE(32)
	this->BUFFERS_QUEUED = (int)4117;
	HX_STACK_LINE(31)
	this->STOPPED = (int)4116;
	HX_STACK_LINE(30)
	this->PAUSED = (int)4115;
	HX_STACK_LINE(29)
	this->PLAYING = (int)4114;
	HX_STACK_LINE(28)
	this->INITIAL = (int)4113;
	HX_STACK_LINE(27)
	this->SOURCE_STATE = (int)4112;
	HX_STACK_LINE(26)
	this->ORIENTATION = (int)4111;
	HX_STACK_LINE(25)
	this->MAX_GAIN = (int)4110;
	HX_STACK_LINE(24)
	this->MIN_GAIN = (int)4109;
	HX_STACK_LINE(23)
	this->GAIN = (int)4106;
	HX_STACK_LINE(22)
	this->BUFFER = (int)4105;
	HX_STACK_LINE(21)
	this->LOOPING = (int)4103;
	HX_STACK_LINE(20)
	this->VELOCITY = (int)4102;
	HX_STACK_LINE(19)
	this->DIRECTION = (int)4101;
	HX_STACK_LINE(18)
	this->POSITION = (int)4100;
	HX_STACK_LINE(17)
	this->PITCH = (int)4099;
	HX_STACK_LINE(16)
	this->CONE_OUTER_ANGLE = (int)4098;
	HX_STACK_LINE(15)
	this->CONE_INNER_ANGLE = (int)4097;
	HX_STACK_LINE(14)
	this->SOURCE_RELATIVE = (int)514;
	HX_STACK_LINE(13)
	this->TRUE = (int)1;
	HX_STACK_LINE(12)
	this->FALSE = (int)0;
	HX_STACK_LINE(11)
	this->NONE = (int)0;
}
;
	return null();
}

//ALAudioContext_obj::~ALAudioContext_obj() { }

Dynamic ALAudioContext_obj::__CreateEmpty() { return  new ALAudioContext_obj; }
hx::ObjectPtr< ALAudioContext_obj > ALAudioContext_obj::__new()
{  hx::ObjectPtr< ALAudioContext_obj > _result_ = new ALAudioContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic ALAudioContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ALAudioContext_obj > _result_ = new ALAudioContext_obj();
	_result_->__construct();
	return _result_;}

Void ALAudioContext_obj::bufferData( int buffer,int format,::lime::utils::ArrayBufferView data,int size,int freq){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferData",0x425d8b43,"lime.audio.ALAudioContext.bufferData","lime/audio/ALAudioContext.hx",82,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(freq,"freq")
		HX_STACK_LINE(84)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		::lime::utils::ArrayBufferView tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		int tmp4 = freq;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		::lime::audio::openal::AL_obj::bufferData(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,bufferData,(void))

Void ALAudioContext_obj::buffer3f( int buffer,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","buffer3f",0x3a9ad58c,"lime.audio.ALAudioContext.buffer3f","lime/audio/ALAudioContext.hx",89,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(91)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Float tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		Float tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		Float tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::lime::audio::openal::AL_obj::buffer3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,buffer3f,(void))

Void ALAudioContext_obj::buffer3i( int buffer,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","buffer3i",0x3a9ad58f,"lime.audio.ALAudioContext.buffer3i","lime/audio/ALAudioContext.hx",96,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(98)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		int tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		int tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		int tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		::lime::audio::openal::AL_obj::buffer3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,buffer3i,(void))

Void ALAudioContext_obj::bufferf( int buffer,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferf",0x7d6491cd,"lime.audio.ALAudioContext.bufferf","lime/audio/ALAudioContext.hx",103,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(105)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		::lime::audio::openal::AL_obj::bufferf(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferf,(void))

Void ALAudioContext_obj::bufferfv( int buffer,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferfv",0x3a9b0209,"lime.audio.ALAudioContext.bufferfv","lime/audio/ALAudioContext.hx",110,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(112)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		::lime::audio::openal::AL_obj::bufferfv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferfv,(void))

Void ALAudioContext_obj::bufferi( int buffer,int param,int value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferi",0x7d6491d0,"lime.audio.ALAudioContext.bufferi","lime/audio/ALAudioContext.hx",117,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(119)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::lime::audio::openal::AL_obj::bufferi(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferi,(void))

Void ALAudioContext_obj::bufferiv( int buffer,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","bufferiv",0x3a9b04a6,"lime.audio.ALAudioContext.bufferiv","lime/audio/ALAudioContext.hx",124,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(126)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		::lime::audio::openal::AL_obj::bufferiv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,bufferiv,(void))

Void ALAudioContext_obj::deleteBuffer( int buffer){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteBuffer",0xcd1c5fc4,"lime.audio.ALAudioContext.deleteBuffer","lime/audio/ALAudioContext.hx",131,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(133)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		::lime::audio::openal::AL_obj::deleteBuffer(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteBuffer,(void))

Void ALAudioContext_obj::deleteBuffers( Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteBuffers",0xabb76c2f,"lime.audio.ALAudioContext.deleteBuffers","lime/audio/ALAudioContext.hx",140,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(140)
		::lime::audio::openal::AL_obj::deleteBuffers(buffers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteBuffers,(void))

Void ALAudioContext_obj::deleteSource( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteSource",0x2eb9539f,"lime.audio.ALAudioContext.deleteSource","lime/audio/ALAudioContext.hx",145,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(147)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		::lime::audio::openal::AL_obj::deleteSource(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteSource,(void))

Void ALAudioContext_obj::deleteSources( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","deleteSources",0xb36fd7f4,"lime.audio.ALAudioContext.deleteSources","lime/audio/ALAudioContext.hx",154,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(154)
		::lime::audio::openal::AL_obj::deleteSources(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,deleteSources,(void))

Void ALAudioContext_obj::disable( int capability){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","disable",0x7d2c584f,"lime.audio.ALAudioContext.disable","lime/audio/ALAudioContext.hx",159,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(161)
		int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::lime::audio::openal::AL_obj::disable(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,disable,(void))

Void ALAudioContext_obj::distanceModel( int distanceModel){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","distanceModel",0x6f7e75db,"lime.audio.ALAudioContext.distanceModel","lime/audio/ALAudioContext.hx",166,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(distanceModel,"distanceModel")
		HX_STACK_LINE(168)
		int tmp = distanceModel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		::lime::audio::openal::AL_obj::distanceModel(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,distanceModel,(void))

Void ALAudioContext_obj::dopplerFactor( Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","dopplerFactor",0x0aa26384,"lime.audio.ALAudioContext.dopplerFactor","lime/audio/ALAudioContext.hx",173,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(175)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		::lime::audio::openal::AL_obj::dopplerFactor(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,dopplerFactor,(void))

Void ALAudioContext_obj::dopplerVelocity( Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","dopplerVelocity",0xac62a412,"lime.audio.ALAudioContext.dopplerVelocity","lime/audio/ALAudioContext.hx",180,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(182)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::lime::audio::openal::AL_obj::dopplerVelocity(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,dopplerVelocity,(void))

Void ALAudioContext_obj::enable( int capability){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","enable",0xf84bc9fc,"lime.audio.ALAudioContext.enable","lime/audio/ALAudioContext.hx",187,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(capability,"capability")
		HX_STACK_LINE(189)
		int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::lime::audio::openal::AL_obj::enable(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,enable,(void))

int ALAudioContext_obj::genSource( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genSource",0x108107b2,"lime.audio.ALAudioContext.genSource","lime/audio/ALAudioContext.hx",194,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	int tmp = ::lime::audio::openal::AL_obj::genSource();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,genSource,return )

Array< int > ALAudioContext_obj::genSources( int n){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genSources",0x6065b481,"lime.audio.ALAudioContext.genSources","lime/audio/ALAudioContext.hx",201,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(203)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	return ::lime::audio::openal::AL_obj::genSources(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,genSources,return )

int ALAudioContext_obj::genBuffer( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genBuffer",0xaee413d7,"lime.audio.ALAudioContext.genBuffer","lime/audio/ALAudioContext.hx",208,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	int tmp = ::lime::audio::openal::AL_obj::genBuffer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,genBuffer,return )

Array< int > ALAudioContext_obj::genBuffers( int n){
	HX_STACK_FRAME("lime.audio.ALAudioContext","genBuffers",0x58ad48bc,"lime.audio.ALAudioContext.genBuffers","lime/audio/ALAudioContext.hx",215,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(217)
	int tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	return ::lime::audio::openal::AL_obj::genBuffers(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,genBuffers,return )

bool ALAudioContext_obj::getBoolean( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBoolean",0x7c4a3cab,"lime.audio.ALAudioContext.getBoolean","lime/audio/ALAudioContext.hx",222,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(224)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	bool tmp1 = ::lime::audio::openal::AL_obj::getBoolean(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getBoolean,return )

Array< bool > ALAudioContext_obj::getBooleanv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBooleanv",0x44aad96b,"lime.audio.ALAudioContext.getBooleanv","lime/audio/ALAudioContext.hx",229,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(231)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		return ::lime::audio::openal::AL_obj::getBooleanv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBooleanv,return )

Array< Float > ALAudioContext_obj::getBuffer3f( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBuffer3f",0x309a9a70,"lime.audio.ALAudioContext.getBuffer3f","lime/audio/ALAudioContext.hx",236,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(238)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	return ::lime::audio::openal::AL_obj::getBuffer3f(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBuffer3f,return )

Array< int > ALAudioContext_obj::getBuffer3i( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBuffer3i",0x309a9a73,"lime.audio.ALAudioContext.getBuffer3i","lime/audio/ALAudioContext.hx",243,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(245)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	return ::lime::audio::openal::AL_obj::getBuffer3i(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBuffer3i,return )

Float ALAudioContext_obj::getBufferf( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferf",0xafdbf569,"lime.audio.ALAudioContext.getBufferf","lime/audio/ALAudioContext.hx",250,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(252)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	Float tmp2 = ::lime::audio::openal::AL_obj::getBufferf(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(252)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBufferf,return )

Array< Float > ALAudioContext_obj::getBufferfv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferfv",0x309ac6ed,"lime.audio.ALAudioContext.getBufferfv","lime/audio/ALAudioContext.hx",257,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(259)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		return ::lime::audio::openal::AL_obj::getBufferfv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getBufferfv,return )

int ALAudioContext_obj::getBufferi( int buffer,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferi",0xafdbf56c,"lime.audio.ALAudioContext.getBufferi","lime/audio/ALAudioContext.hx",264,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(266)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	int tmp2 = ::lime::audio::openal::AL_obj::getBufferi(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getBufferi,return )

Array< int > ALAudioContext_obj::getBufferiv( int buffer,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getBufferiv",0x309ac98a,"lime.audio.ALAudioContext.getBufferiv","lime/audio/ALAudioContext.hx",271,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(273)
		int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		return ::lime::audio::openal::AL_obj::getBufferiv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getBufferiv,return )

Float ALAudioContext_obj::getDouble( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getDouble",0x0a9b4a6e,"lime.audio.ALAudioContext.getDouble","lime/audio/ALAudioContext.hx",278,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(280)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	Float tmp1 = ::lime::audio::openal::AL_obj::getDouble(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getDouble,return )

Array< Float > ALAudioContext_obj::getDoublev( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getDoublev",0x3d45d648,"lime.audio.ALAudioContext.getDoublev","lime/audio/ALAudioContext.hx",285,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(287)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		return ::lime::audio::openal::AL_obj::getDoublev(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getDoublev,return )

int ALAudioContext_obj::getEnumValue( ::String ename){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getEnumValue",0xcd4d1973,"lime.audio.ALAudioContext.getEnumValue","lime/audio/ALAudioContext.hx",292,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ename,"ename")
	HX_STACK_LINE(294)
	::String tmp = ename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	int tmp1 = ::lime::audio::openal::AL_obj::getEnumValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getEnumValue,return )

int ALAudioContext_obj::getError( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getError",0x609d870b,"lime.audio.ALAudioContext.getError","lime/audio/ALAudioContext.hx",299,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	int tmp = ::lime::audio::openal::AL_obj::getError();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,getError,return )

::String ALAudioContext_obj::getErrorString( ){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getErrorString",0x152d7e3c,"lime.audio.ALAudioContext.getErrorString","lime/audio/ALAudioContext.hx",306,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_LINE(308)
	::String tmp = ::lime::audio::openal::AL_obj::getErrorString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ALAudioContext_obj,getErrorString,return )

Float ALAudioContext_obj::getFloat( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getFloat",0xf00a80df,"lime.audio.ALAudioContext.getFloat","lime/audio/ALAudioContext.hx",313,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(315)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	Float tmp1 = ::lime::audio::openal::AL_obj::getFloat(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getFloat,return )

Array< Float > ALAudioContext_obj::getFloatv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getFloatv",0x192642b7,"lime.audio.ALAudioContext.getFloatv","lime/audio/ALAudioContext.hx",320,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(322)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		return ::lime::audio::openal::AL_obj::getFloatv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getFloatv,return )

int ALAudioContext_obj::getInteger( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getInteger",0x15670fc1,"lime.audio.ALAudioContext.getInteger","lime/audio/ALAudioContext.hx",327,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(329)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	int tmp1 = ::lime::audio::openal::AL_obj::getInteger(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getInteger,return )

Array< int > ALAudioContext_obj::getIntegerv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getIntegerv",0xa4c6b995,"lime.audio.ALAudioContext.getIntegerv","lime/audio/ALAudioContext.hx",334,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(336)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		return ::lime::audio::openal::AL_obj::getIntegerv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getIntegerv,return )

Array< Float > ALAudioContext_obj::getListener3f( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListener3f",0x2119c424,"lime.audio.ALAudioContext.getListener3f","lime/audio/ALAudioContext.hx",341,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(343)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	return ::lime::audio::openal::AL_obj::getListener3f(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListener3f,return )

Array< int > ALAudioContext_obj::getListener3i( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListener3i",0x2119c427,"lime.audio.ALAudioContext.getListener3i","lime/audio/ALAudioContext.hx",348,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(350)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	return ::lime::audio::openal::AL_obj::getListener3i(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListener3i,return )

Float ALAudioContext_obj::getListenerf( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListenerf",0x98d47e35,"lime.audio.ALAudioContext.getListenerf","lime/audio/ALAudioContext.hx",355,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(357)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	Float tmp1 = ::lime::audio::openal::AL_obj::getListenerf(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListenerf,return )

Array< Float > ALAudioContext_obj::getListenerfv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListenerfv",0x2119f0a1,"lime.audio.ALAudioContext.getListenerfv","lime/audio/ALAudioContext.hx",362,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(364)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		return ::lime::audio::openal::AL_obj::getListenerfv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getListenerfv,return )

int ALAudioContext_obj::getListeneri( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListeneri",0x98d47e38,"lime.audio.ALAudioContext.getListeneri","lime/audio/ALAudioContext.hx",369,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(371)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	int tmp1 = ::lime::audio::openal::AL_obj::getListeneri(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getListeneri,return )

Array< int > ALAudioContext_obj::getListeneriv( int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getListeneriv",0x2119f33e,"lime.audio.ALAudioContext.getListeneriv","lime/audio/ALAudioContext.hx",376,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(378)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		return ::lime::audio::openal::AL_obj::getListeneriv(tmp,tmp1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getListeneriv,return )

Dynamic ALAudioContext_obj::getProcAddress( ::String fname){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getProcAddress",0x1793a041,"lime.audio.ALAudioContext.getProcAddress","lime/audio/ALAudioContext.hx",383,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fname,"fname")
	HX_STACK_LINE(385)
	::String tmp = fname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	Dynamic tmp1 = ::lime::audio::openal::AL_obj::getProcAddress(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(385)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getProcAddress,return )

Array< Float > ALAudioContext_obj::getSource3f( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSource3f",0xea407b0b,"lime.audio.ALAudioContext.getSource3f","lime/audio/ALAudioContext.hx",390,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(392)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(392)
	return ::lime::audio::openal::AL_obj::getSource3f(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSource3f,return )

Float ALAudioContext_obj::getSourcef( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourcef",0xb794612e,"lime.audio.ALAudioContext.getSourcef","lime/audio/ALAudioContext.hx",397,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(399)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	Float tmp2 = ::lime::audio::openal::AL_obj::getSourcef(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(399)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcef,return )

Array< int > ALAudioContext_obj::getSource3i( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSource3i",0xea407b0e,"lime.audio.ALAudioContext.getSource3i","lime/audio/ALAudioContext.hx",404,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(406)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	return ::lime::audio::openal::AL_obj::getSource3i(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSource3i,return )

Array< Float > ALAudioContext_obj::getSourcefv( int source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourcefv",0xea40a788,"lime.audio.ALAudioContext.getSourcefv","lime/audio/ALAudioContext.hx",411,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(413)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		return ::lime::audio::openal::AL_obj::getSourcefv(tmp,tmp1,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getSourcefv,return )

int ALAudioContext_obj::getSourcei( int source,int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourcei",0xb7946131,"lime.audio.ALAudioContext.getSourcei","lime/audio/ALAudioContext.hx",418,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(420)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	int tmp2 = ::lime::audio::openal::AL_obj::getSourcei(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,getSourcei,return )

Array< int > ALAudioContext_obj::getSourceiv( int source,int param,hx::Null< int >  __o_count){
int count = __o_count.Default(1);
	HX_STACK_FRAME("lime.audio.ALAudioContext","getSourceiv",0xea40aa25,"lime.audio.ALAudioContext.getSourceiv","lime/audio/ALAudioContext.hx",425,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(param,"param")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(427)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		return ::lime::audio::openal::AL_obj::getSourceiv(tmp,tmp1,tmp2);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,getSourceiv,return )

::String ALAudioContext_obj::getString( int param){
	HX_STACK_FRAME("lime.audio.ALAudioContext","getString",0xe900482e,"lime.audio.ALAudioContext.getString","lime/audio/ALAudioContext.hx",432,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(param,"param")
	HX_STACK_LINE(434)
	int tmp = param;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	::String tmp1 = ::lime::audio::openal::AL_obj::getString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,getString,return )

bool ALAudioContext_obj::isBuffer( int buffer){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isBuffer",0xb69b0443,"lime.audio.ALAudioContext.isBuffer","lime/audio/ALAudioContext.hx",439,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(441)
	int tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	bool tmp1 = ::lime::audio::openal::AL_obj::isBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isBuffer,return )

bool ALAudioContext_obj::isEnabled( int capability){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isEnabled",0xdda917de,"lime.audio.ALAudioContext.isEnabled","lime/audio/ALAudioContext.hx",446,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(capability,"capability")
	HX_STACK_LINE(448)
	int tmp = capability;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(448)
	bool tmp1 = ::lime::audio::openal::AL_obj::isEnabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(448)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isEnabled,return )

bool ALAudioContext_obj::isExtensionPresent( ::String extname){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isExtensionPresent",0x8f26e63f,"lime.audio.ALAudioContext.isExtensionPresent","lime/audio/ALAudioContext.hx",453,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(extname,"extname")
	HX_STACK_LINE(455)
	::String tmp = extname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	bool tmp1 = ::lime::audio::openal::AL_obj::isExtensionPresent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(455)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isExtensionPresent,return )

bool ALAudioContext_obj::isSource( int source){
	HX_STACK_FRAME("lime.audio.ALAudioContext","isSource",0x1837f81e,"lime.audio.ALAudioContext.isSource","lime/audio/ALAudioContext.hx",460,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(462)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	bool tmp1 = ::lime::audio::openal::AL_obj::isSource(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,isSource,return )

Void ALAudioContext_obj::listener3f( int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listener3f",0xd7f3fe40,"lime.audio.ALAudioContext.listener3f","lime/audio/ALAudioContext.hx",467,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(469)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		Float tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(469)
		Float tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(469)
		Float tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(469)
		::lime::audio::openal::AL_obj::listener3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ALAudioContext_obj,listener3f,(void))

Void ALAudioContext_obj::listener3i( int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listener3i",0xd7f3fe43,"lime.audio.ALAudioContext.listener3i","lime/audio/ALAudioContext.hx",474,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(476)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(476)
		int tmp1 = value1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		int tmp2 = value2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		int tmp3 = value3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		::lime::audio::openal::AL_obj::listener3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ALAudioContext_obj,listener3i,(void))

Void ALAudioContext_obj::listenerf( int param,Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listenerf",0x4f07fb99,"lime.audio.ALAudioContext.listenerf","lime/audio/ALAudioContext.hx",481,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(483)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		::lime::audio::openal::AL_obj::listenerf(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listenerf,(void))

Void ALAudioContext_obj::listenerfv( int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listenerfv",0xd7f42abd,"lime.audio.ALAudioContext.listenerfv","lime/audio/ALAudioContext.hx",488,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(490)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(490)
		::lime::audio::openal::AL_obj::listenerfv(tmp,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listenerfv,(void))

Void ALAudioContext_obj::listeneri( int param,int value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listeneri",0x4f07fb9c,"lime.audio.ALAudioContext.listeneri","lime/audio/ALAudioContext.hx",495,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(497)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(497)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		::lime::audio::openal::AL_obj::listeneri(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listeneri,(void))

Void ALAudioContext_obj::listeneriv( int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","listeneriv",0xd7f42d5a,"lime.audio.ALAudioContext.listeneriv","lime/audio/ALAudioContext.hx",502,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(504)
		int tmp = param;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		::lime::audio::openal::AL_obj::listeneriv(tmp,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,listeneriv,(void))

Void ALAudioContext_obj::source3f( int source,int param,Float value1,Float value2,Float value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","source3f",0xf440b627,"lime.audio.ALAudioContext.source3f","lime/audio/ALAudioContext.hx",509,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(511)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		Float tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		Float tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		Float tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		::lime::audio::openal::AL_obj::source3f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,source3f,(void))

Void ALAudioContext_obj::source3i( int source,int param,int value1,int value2,int value3){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","source3i",0xf440b62a,"lime.audio.ALAudioContext.source3i","lime/audio/ALAudioContext.hx",516,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value1,"value1")
		HX_STACK_ARG(value2,"value2")
		HX_STACK_ARG(value3,"value3")
		HX_STACK_LINE(518)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		int tmp2 = value1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		int tmp3 = value2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		int tmp4 = value3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(518)
		::lime::audio::openal::AL_obj::source3i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(ALAudioContext_obj,source3i,(void))

Void ALAudioContext_obj::sourcef( int source,int param,Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcef",0x851cfd92,"lime.audio.ALAudioContext.sourcef","lime/audio/ALAudioContext.hx",523,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(525)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		::lime::audio::openal::AL_obj::sourcef(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcef,(void))

Void ALAudioContext_obj::sourcefv( int source,int param,Array< Float > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcefv",0xf440e2a4,"lime.audio.ALAudioContext.sourcefv","lime/audio/ALAudioContext.hx",530,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(532)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(532)
		::lime::audio::openal::AL_obj::sourcefv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcefv,(void))

Void ALAudioContext_obj::sourcei( int source,int param,int value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcei",0x851cfd95,"lime.audio.ALAudioContext.sourcei","lime/audio/ALAudioContext.hx",537,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(539)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		::lime::audio::openal::AL_obj::sourcei(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourcei,(void))

Void ALAudioContext_obj::sourceiv( int source,int param,Array< int > values){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceiv",0xf440e541,"lime.audio.ALAudioContext.sourceiv","lime/audio/ALAudioContext.hx",544,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(param,"param")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(546)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(546)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(546)
		::lime::audio::openal::AL_obj::sourceiv(tmp,tmp1,values);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourceiv,(void))

Void ALAudioContext_obj::sourcePlay( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePlay",0x21a7e068,"lime.audio.ALAudioContext.sourcePlay","lime/audio/ALAudioContext.hx",551,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(553)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		::lime::audio::openal::AL_obj::sourcePlay(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePlay,(void))

Void ALAudioContext_obj::sourcePlayv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePlayv",0x513c7b0e,"lime.audio.ALAudioContext.sourcePlayv","lime/audio/ALAudioContext.hx",560,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(560)
		::lime::audio::openal::AL_obj::sourcePlayv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePlayv,(void))

Void ALAudioContext_obj::sourceStop( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceStop",0x23a9a276,"lime.audio.ALAudioContext.sourceStop","lime/audio/ALAudioContext.hx",565,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(567)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::lime::audio::openal::AL_obj::sourceStop(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceStop,(void))

Void ALAudioContext_obj::sourceStopv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceStopv",0x10c48540,"lime.audio.ALAudioContext.sourceStopv","lime/audio/ALAudioContext.hx",574,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(574)
		::lime::audio::openal::AL_obj::sourceStopv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceStopv,(void))

Void ALAudioContext_obj::sourceRewind( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceRewind",0x9716616f,"lime.audio.ALAudioContext.sourceRewind","lime/audio/ALAudioContext.hx",579,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(581)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(581)
		::lime::audio::openal::AL_obj::sourceRewind(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceRewind,(void))

Void ALAudioContext_obj::sourceRewindv( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceRewindv",0x9c7ee027,"lime.audio.ALAudioContext.sourceRewindv","lime/audio/ALAudioContext.hx",588,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(588)
		::lime::audio::openal::AL_obj::sourceRewindv(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceRewindv,(void))

Void ALAudioContext_obj::sourcePause( int source){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePause",0x4a064a02,"lime.audio.ALAudioContext.sourcePause","lime/audio/ALAudioContext.hx",593,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(595)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(595)
		::lime::audio::openal::AL_obj::sourcePause(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePause,(void))

Void ALAudioContext_obj::sourcePausev( Array< int > sources){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourcePausev",0x7b7a7834,"lime.audio.ALAudioContext.sourcePausev","lime/audio/ALAudioContext.hx",602,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sources,"sources")
		HX_STACK_LINE(602)
		::lime::audio::openal::AL_obj::sourcePausev(sources);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourcePausev,(void))

Void ALAudioContext_obj::sourceQueueBuffer( int source,int buffer){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceQueueBuffer",0xe92c057d,"lime.audio.ALAudioContext.sourceQueueBuffer","lime/audio/ALAudioContext.hx",607,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(609)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		int tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		::lime::audio::openal::AL_obj::sourceQueueBuffer(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,sourceQueueBuffer,(void))

Void ALAudioContext_obj::sourceQueueBuffers( int source,int nb,Array< int > buffers){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","sourceQueueBuffers",0x1d58c856,"lime.audio.ALAudioContext.sourceQueueBuffers","lime/audio/ALAudioContext.hx",614,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(nb,"nb")
		HX_STACK_ARG(buffers,"buffers")
		HX_STACK_LINE(616)
		int tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		int tmp1 = nb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		::lime::audio::openal::AL_obj::sourceQueueBuffers(tmp,tmp1,buffers);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ALAudioContext_obj,sourceQueueBuffers,(void))

int ALAudioContext_obj::sourceUnqueueBuffer( int source){
	HX_STACK_FRAME("lime.audio.ALAudioContext","sourceUnqueueBuffer",0xf00896c4,"lime.audio.ALAudioContext.sourceUnqueueBuffer","lime/audio/ALAudioContext.hx",621,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(623)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(623)
	int tmp1 = ::lime::audio::openal::AL_obj::sourceUnqueueBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(623)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,sourceUnqueueBuffer,return )

Array< int > ALAudioContext_obj::sourceUnqueueBuffers( int source,int nb){
	HX_STACK_FRAME("lime.audio.ALAudioContext","sourceUnqueueBuffers",0x177b552f,"lime.audio.ALAudioContext.sourceUnqueueBuffers","lime/audio/ALAudioContext.hx",628,0x9101d507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(nb,"nb")
	HX_STACK_LINE(630)
	int tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	int tmp1 = nb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(630)
	return ::lime::audio::openal::AL_obj::sourceUnqueueBuffers(tmp,tmp1);
}


HX_DEFINE_DYNAMIC_FUNC2(ALAudioContext_obj,sourceUnqueueBuffers,return )

Void ALAudioContext_obj::speedOfSound( Float value){
{
		HX_STACK_FRAME("lime.audio.ALAudioContext","speedOfSound",0xa01163aa,"lime.audio.ALAudioContext.speedOfSound","lime/audio/ALAudioContext.hx",635,0x9101d507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(637)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(637)
		::lime::audio::openal::AL_obj::speedOfSound(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ALAudioContext_obj,speedOfSound,(void))


ALAudioContext_obj::ALAudioContext_obj()
{
}

Dynamic ALAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { return TRUE; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { return GAIN; }
		if (HX_FIELD_EQ(inName,"BITS") ) { return BITS; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { return SIZE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { return FALSE; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { return PITCH; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { return BUFFER; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { return PAUSED; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { return STATIC; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { return LOOPING; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { return INITIAL; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { return PLAYING; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { return STOPPED; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"bufferf") ) { return bufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferi") ) { return bufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcef") ) { return sourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcei") ) { return sourcei_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { return POSITION; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { return VELOCITY; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { return MIN_GAIN; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { return MAX_GAIN; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { return CHANNELS; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"buffer3f") ) { return buffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"buffer3i") ) { return buffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferfv") ) { return bufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferiv") ) { return bufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isSource") ) { return isSource_dyn(); }
		if (HX_FIELD_EQ(inName,"source3f") ) { return source3f_dyn(); }
		if (HX_FIELD_EQ(inName,"source3i") ) { return source3i_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcefv") ) { return sourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceiv") ) { return sourceiv_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { return DIRECTION; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { return STREAMING; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { return FREQUENCY; }
		if (HX_FIELD_EQ(inName,"genSource") ) { return genSource_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffer") ) { return genBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloatv") ) { return getFloatv_dyn(); }
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerf") ) { return listenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneri") ) { return listeneri_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { return SEC_OFFSET; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { return EXTENSIONS; }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"genSources") ) { return genSources_dyn(); }
		if (HX_FIELD_EQ(inName,"genBuffers") ) { return genBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoolean") ) { return getBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferf") ) { return getBufferf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferi") ) { return getBufferi_dyn(); }
		if (HX_FIELD_EQ(inName,"getDoublev") ) { return getDoublev_dyn(); }
		if (HX_FIELD_EQ(inName,"getInteger") ) { return getInteger_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcef") ) { return getSourcef_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcei") ) { return getSourcei_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3f") ) { return listener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"listener3i") ) { return listener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"listenerfv") ) { return listenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"listeneriv") ) { return listeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlay") ) { return sourcePlay_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStop") ) { return sourceStop_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { return ORIENTATION; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { return BYTE_OFFSET; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { return SOURCE_TYPE; }
		if (HX_FIELD_EQ(inName,"getBooleanv") ) { return getBooleanv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3f") ) { return getBuffer3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer3i") ) { return getBuffer3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferfv") ) { return getBufferfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferiv") ) { return getBufferiv_dyn(); }
		if (HX_FIELD_EQ(inName,"getIntegerv") ) { return getIntegerv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3f") ) { return getSource3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getSource3i") ) { return getSource3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourcefv") ) { return getSourcefv_dyn(); }
		if (HX_FIELD_EQ(inName,"getSourceiv") ) { return getSourceiv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePlayv") ) { return sourcePlayv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceStopv") ) { return sourceStopv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePause") ) { return sourcePause_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { return SOURCE_STATE; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { return MAX_DISTANCE; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { return UNDETERMINED; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { return FORMAT_MONO8; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { return INVALID_NAME; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSource") ) { return deleteSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnumValue") ) { return getEnumValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerf") ) { return getListenerf_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneri") ) { return getListeneri_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewind") ) { return sourceRewind_dyn(); }
		if (HX_FIELD_EQ(inName,"sourcePausev") ) { return sourcePausev_dyn(); }
		if (HX_FIELD_EQ(inName,"speedOfSound") ) { return speedOfSound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { return SAMPLE_OFFSET; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { return FORMAT_MONO16; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"deleteBuffers") ) { return deleteBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteSources") ) { return deleteSources_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceModel") ) { return distanceModel_dyn(); }
		if (HX_FIELD_EQ(inName,"dopplerFactor") ) { return dopplerFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3f") ) { return getListener3f_dyn(); }
		if (HX_FIELD_EQ(inName,"getListener3i") ) { return getListener3i_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerfv") ) { return getListenerfv_dyn(); }
		if (HX_FIELD_EQ(inName,"getListeneriv") ) { return getListeneriv_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceRewindv") ) { return sourceRewindv_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { return BUFFERS_QUEUED; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { return ROLLOFF_FACTOR; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { return FORMAT_STEREO8; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { return DOPPLER_FACTOR; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { return SPEED_OF_SOUND; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { return DISTANCE_MODEL; }
		if (HX_FIELD_EQ(inName,"getErrorString") ) { return getErrorString_dyn(); }
		if (HX_FIELD_EQ(inName,"getProcAddress") ) { return getProcAddress_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { return SOURCE_RELATIVE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { return CONE_OUTER_GAIN; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { return FORMAT_STEREO16; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { return LINEAR_DISTANCE; }
		if (HX_FIELD_EQ(inName,"dopplerVelocity") ) { return dopplerVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { return CONE_INNER_ANGLE; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { return CONE_OUTER_ANGLE; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { return DOPPLER_VELOCITY; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { return INVERSE_DISTANCE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { return BUFFERS_PROCESSED; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { return EXPONENT_DISTANCE; }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffer") ) { return sourceQueueBuffer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { return REFERENCE_DISTANCE; }
		if (HX_FIELD_EQ(inName,"isExtensionPresent") ) { return isExtensionPresent_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceQueueBuffers") ) { return sourceQueueBuffers_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffer") ) { return sourceUnqueueBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"sourceUnqueueBuffers") ) { return sourceUnqueueBuffers_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { return LINEAR_DISTANCE_CLAMPED; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { return INVERSE_DISTANCE_CLAMPED; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { return EXPONENT_DISTANCE_CLAMPED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ALAudioContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRUE") ) { TRUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAIN") ) { GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BITS") ) { BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SIZE") ) { SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FALSE") ) { FALSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PITCH") ) { PITCH=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BUFFER") ) { BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAUSED") ) { PAUSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC") ) { STATIC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"LOOPING") ) { LOOPING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INITIAL") ) { INITIAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAYING") ) { PLAYING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOPPED") ) { STOPPED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"POSITION") ) { POSITION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VELOCITY") ) { VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIN_GAIN") ) { MIN_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_GAIN") ) { MAX_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANNELS") ) { CHANNELS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DIRECTION") ) { DIRECTION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAMING") ) { STREAMING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FREQUENCY") ) { FREQUENCY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SEC_OFFSET") ) { SEC_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXTENSIONS") ) { EXTENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ORIENTATION") ) { ORIENTATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE_OFFSET") ) { BYTE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOURCE_TYPE") ) { SOURCE_TYPE=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"SOURCE_STATE") ) { SOURCE_STATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_DISTANCE") ) { MAX_DISTANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNDETERMINED") ) { UNDETERMINED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO8") ) { FORMAT_MONO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_NAME") ) { INVALID_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SAMPLE_OFFSET") ) { SAMPLE_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_MONO16") ) { FORMAT_MONO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUFFERS_QUEUED") ) { BUFFERS_QUEUED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLLOFF_FACTOR") ) { ROLLOFF_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO8") ) { FORMAT_STEREO8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_FACTOR") ) { DOPPLER_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED_OF_SOUND") ) { SPEED_OF_SOUND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DISTANCE_MODEL") ) { DISTANCE_MODEL=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SOURCE_RELATIVE") ) { SOURCE_RELATIVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_GAIN") ) { CONE_OUTER_GAIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FORMAT_STEREO16") ) { FORMAT_STEREO16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE") ) { LINEAR_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONE_INNER_ANGLE") ) { CONE_INNER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONE_OUTER_ANGLE") ) { CONE_OUTER_ANGLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOPPLER_VELOCITY") ) { DOPPLER_VELOCITY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE") ) { INVERSE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BUFFERS_PROCESSED") ) { BUFFERS_PROCESSED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE") ) { EXPONENT_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REFERENCE_DISTANCE") ) { REFERENCE_DISTANCE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"LINEAR_DISTANCE_CLAMPED") ) { LINEAR_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"INVERSE_DISTANCE_CLAMPED") ) { INVERSE_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"EXPONENT_DISTANCE_CLAMPED") ) { EXPONENT_DISTANCE_CLAMPED=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALAudioContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"));
	outFields->push(HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"));
	outFields->push(HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"));
	outFields->push(HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe"));
	outFields->push(HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93"));
	outFields->push(HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc"));
	outFields->push(HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40"));
	outFields->push(HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"));
	outFields->push(HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b"));
	outFields->push(HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78"));
	outFields->push(HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"));
	outFields->push(HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"));
	outFields->push(HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f"));
	outFields->push(HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21"));
	outFields->push(HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4"));
	outFields->push(HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4"));
	outFields->push(HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab"));
	outFields->push(HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b"));
	outFields->push(HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09"));
	outFields->push(HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2"));
	outFields->push(HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3"));
	outFields->push(HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71"));
	outFields->push(HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac"));
	outFields->push(HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a"));
	outFields->push(HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56"));
	outFields->push(HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3"));
	outFields->push(HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5"));
	outFields->push(HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac"));
	outFields->push(HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4"));
	outFields->push(HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36"));
	outFields->push(HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf"));
	outFields->push(HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"));
	outFields->push(HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1"));
	outFields->push(HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50"));
	outFields->push(HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a"));
	outFields->push(HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6"));
	outFields->push(HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda"));
	outFields->push(HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32"));
	outFields->push(HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"));
	outFields->push(HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b"));
	outFields->push(HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4"));
	outFields->push(HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"));
	outFields->push(HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"));
	outFields->push(HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"));
	outFields->push(HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"));
	outFields->push(HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"));
	outFields->push(HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"));
	outFields->push(HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"));
	outFields->push(HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"));
	outFields->push(HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"));
	outFields->push(HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"));
	outFields->push(HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"));
	outFields->push(HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56"));
	outFields->push(HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba"));
	outFields->push(HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d"));
	outFields->push(HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00"));
	outFields->push(HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d"));
	outFields->push(HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28"));
	outFields->push(HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14"));
	outFields->push(HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2"));
	outFields->push(HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8"));
	outFields->push(HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,NONE),HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FALSE),HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,TRUE),HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_RELATIVE),HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_INNER_ANGLE),HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_OUTER_ANGLE),HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PITCH),HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,POSITION),HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DIRECTION),HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VELOCITY),HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LOOPING),HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFER),HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,GAIN),HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MIN_GAIN),HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MAX_GAIN),HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,ORIENTATION),HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_STATE),HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INITIAL),HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PLAYING),HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,PAUSED),HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STOPPED),HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFERS_QUEUED),HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BUFFERS_PROCESSED),HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,REFERENCE_DISTANCE),HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,ROLLOFF_FACTOR),HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CONE_OUTER_GAIN),HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,MAX_DISTANCE),HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SEC_OFFSET),HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SAMPLE_OFFSET),HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BYTE_OFFSET),HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SOURCE_TYPE),HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STATIC),HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,STREAMING),HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,UNDETERMINED),HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_MONO8),HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_MONO16),HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_STEREO8),HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FORMAT_STEREO16),HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,FREQUENCY),HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,BITS),HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,CHANNELS),HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SIZE),HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,NO_ERROR),HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_NAME),HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_ENUM),HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_VALUE),HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVALID_OPERATION),HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,OUT_OF_MEMORY),HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VENDOR),HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,VERSION),HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,RENDERER),HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXTENSIONS),HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DOPPLER_FACTOR),HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,SPEED_OF_SOUND),HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DOPPLER_VELOCITY),HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,DISTANCE_MODEL),HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVERSE_DISTANCE),HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,INVERSE_DISTANCE_CLAMPED),HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LINEAR_DISTANCE),HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,LINEAR_DISTANCE_CLAMPED),HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXPONENT_DISTANCE),HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8")},
	{hx::fsInt,(int)offsetof(ALAudioContext_obj,EXPONENT_DISTANCE_CLAMPED),HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FALSE","\x83","\x6d","\x3d","\x79"),
	HX_HCSTRING("TRUE","\x4e","\x6f","\xc4","\x37"),
	HX_HCSTRING("SOURCE_RELATIVE","\xf0","\xf3","\x84","\xfe"),
	HX_HCSTRING("CONE_INNER_ANGLE","\x4e","\xa1","\xd7","\x93"),
	HX_HCSTRING("CONE_OUTER_ANGLE","\xf3","\xe1","\xbf","\xcc"),
	HX_HCSTRING("PITCH","\xa0","\xf3","\x8e","\x40"),
	HX_HCSTRING("POSITION","\xa9","\x30","\x80","\x24"),
	HX_HCSTRING("DIRECTION","\x1f","\xd2","\x98","\x0b"),
	HX_HCSTRING("VELOCITY","\x1d","\x92","\x83","\x78"),
	HX_HCSTRING("LOOPING","\xde","\x50","\x51","\xa0"),
	HX_HCSTRING("BUFFER","\x00","\x69","\x17","\x83"),
	HX_HCSTRING("GAIN","\x7f","\xb8","\x1f","\x2f"),
	HX_HCSTRING("MIN_GAIN","\xac","\x29","\xd2","\x21"),
	HX_HCSTRING("MAX_GAIN","\x5a","\x0f","\xb8","\xd4"),
	HX_HCSTRING("ORIENTATION","\xb0","\xfa","\x3a","\xd4"),
	HX_HCSTRING("SOURCE_STATE","\x4d","\xe8","\x1e","\xab"),
	HX_HCSTRING("INITIAL","\x64","\xe4","\x72","\x4b"),
	HX_HCSTRING("PLAYING","\x4e","\xe3","\xeb","\x09"),
	HX_HCSTRING("PAUSED","\xae","\xec","\x06","\xa2"),
	HX_HCSTRING("STOPPED","\xed","\xa5","\x35","\xc3"),
	HX_HCSTRING("BUFFERS_QUEUED","\x5f","\x78","\xce","\x71"),
	HX_HCSTRING("BUFFERS_PROCESSED","\x42","\x9d","\x62","\xac"),
	HX_HCSTRING("REFERENCE_DISTANCE","\x89","\xd5","\xce","\x9a"),
	HX_HCSTRING("ROLLOFF_FACTOR","\xbc","\x10","\x98","\x56"),
	HX_HCSTRING("CONE_OUTER_GAIN","\x3f","\xda","\x8d","\xe3"),
	HX_HCSTRING("MAX_DISTANCE","\x90","\x83","\xbb","\xa5"),
	HX_HCSTRING("SEC_OFFSET","\xe1","\x5d","\xa3","\xac"),
	HX_HCSTRING("SAMPLE_OFFSET","\x48","\x82","\xac","\xb4"),
	HX_HCSTRING("BYTE_OFFSET","\x2a","\xdf","\x43","\x36"),
	HX_HCSTRING("SOURCE_TYPE","\xde","\xff","\x00","\xdf"),
	HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"),
	HX_HCSTRING("STREAMING","\x42","\x38","\x7b","\xb1"),
	HX_HCSTRING("UNDETERMINED","\x0a","\xed","\x9d","\x50"),
	HX_HCSTRING("FORMAT_MONO8","\x6d","\x40","\x81","\x7a"),
	HX_HCSTRING("FORMAT_MONO16","\x10","\x19","\x97","\xb6"),
	HX_HCSTRING("FORMAT_STEREO8","\xb8","\x19","\x58","\xda"),
	HX_HCSTRING("FORMAT_STEREO16","\x65","\x61","\xbe","\x32"),
	HX_HCSTRING("FREQUENCY","\x7c","\xf2","\x42","\xb7"),
	HX_HCSTRING("BITS","\x06","\xc3","\xd7","\x2b"),
	HX_HCSTRING("CHANNELS","\x50","\x3a","\x74","\xc4"),
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_NAME","\xf3","\x7b","\x59","\x19"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("EXTENSIONS","\x14","\xf0","\x79","\x7b"),
	HX_HCSTRING("DOPPLER_FACTOR","\xe0","\x6d","\x21","\x56"),
	HX_HCSTRING("SPEED_OF_SOUND","\x5f","\x3f","\x54","\xba"),
	HX_HCSTRING("DOPPLER_VELOCITY","\x6e","\xe1","\x7d","\x1d"),
	HX_HCSTRING("DISTANCE_MODEL","\xbf","\x9b","\x1a","\x00"),
	HX_HCSTRING("INVERSE_DISTANCE","\x04","\x89","\x17","\x1d"),
	HX_HCSTRING("INVERSE_DISTANCE_CLAMPED","\x7f","\x1a","\x32","\x28"),
	HX_HCSTRING("LINEAR_DISTANCE","\x0f","\xb8","\xc7","\x14"),
	HX_HCSTRING("LINEAR_DISTANCE_CLAMPED","\x8a","\xcc","\x88","\xb2"),
	HX_HCSTRING("EXPONENT_DISTANCE","\x45","\x4a","\xec","\xc8"),
	HX_HCSTRING("EXPONENT_DISTANCE_CLAMPED","\xc0","\x84","\x7b","\x57"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("buffer3f","\xd3","\x29","\xfe","\xac"),
	HX_HCSTRING("buffer3i","\xd6","\x29","\xfe","\xac"),
	HX_HCSTRING("bufferf","\x66","\xa3","\x90","\xb1"),
	HX_HCSTRING("bufferfv","\x50","\x56","\xfe","\xac"),
	HX_HCSTRING("bufferi","\x69","\xa3","\x90","\xb1"),
	HX_HCSTRING("bufferiv","\xed","\x58","\xfe","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteBuffers","\x88","\x36","\x1a","\x10"),
	HX_HCSTRING("deleteSource","\x66","\xd7","\xc9","\x98"),
	HX_HCSTRING("deleteSources","\x4d","\xa2","\xd2","\x17"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("distanceModel","\x34","\x40","\xe1","\xd3"),
	HX_HCSTRING("dopplerFactor","\xdd","\x2d","\x05","\x6f"),
	HX_HCSTRING("dopplerVelocity","\xab","\x76","\xcf","\x06"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("genSource","\x8b","\x71","\x07","\xb5"),
	HX_HCSTRING("genSources","\x88","\xe8","\x7b","\xb1"),
	HX_HCSTRING("genBuffer","\xb0","\x7d","\x6a","\x53"),
	HX_HCSTRING("genBuffers","\xc3","\x7c","\xc3","\xa9"),
	HX_HCSTRING("getBoolean","\xb2","\x70","\x60","\xcd"),
	HX_HCSTRING("getBooleanv","\x84","\x2b","\x02","\xe7"),
	HX_HCSTRING("getBuffer3f","\x89","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBuffer3i","\x8c","\xec","\xf1","\xd2"),
	HX_HCSTRING("getBufferf","\x70","\x29","\xf2","\x00"),
	HX_HCSTRING("getBufferfv","\x06","\x19","\xf2","\xd2"),
	HX_HCSTRING("getBufferi","\x73","\x29","\xf2","\x00"),
	HX_HCSTRING("getBufferiv","\xa3","\x1b","\xf2","\xd2"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getDoublev","\x4f","\x0a","\x5c","\x8e"),
	HX_HCSTRING("getEnumValue","\x3a","\x9d","\x5d","\x37"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getErrorString","\xc3","\xc1","\x3b","\x87"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getFloatv","\x90","\xac","\xac","\xbd"),
	HX_HCSTRING("getInteger","\xc8","\x43","\x7d","\x66"),
	HX_HCSTRING("getIntegerv","\xae","\x0b","\x1e","\x47"),
	HX_HCSTRING("getListener3f","\x7d","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListener3i","\x80","\x8e","\x7c","\x85"),
	HX_HCSTRING("getListenerf","\xfc","\x01","\xe5","\x02"),
	HX_HCSTRING("getListenerfv","\xfa","\xba","\x7c","\x85"),
	HX_HCSTRING("getListeneri","\xff","\x01","\xe5","\x02"),
	HX_HCSTRING("getListeneriv","\x97","\xbd","\x7c","\x85"),
	HX_HCSTRING("getProcAddress","\xc8","\xe3","\xa1","\x89"),
	HX_HCSTRING("getSource3f","\x24","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcef","\x35","\x95","\xaa","\x08"),
	HX_HCSTRING("getSource3i","\x27","\xcd","\x97","\x8c"),
	HX_HCSTRING("getSourcefv","\xa1","\xf9","\x97","\x8c"),
	HX_HCSTRING("getSourcei","\x38","\x95","\xaa","\x08"),
	HX_HCSTRING("getSourceiv","\x3e","\xfc","\x97","\x8c"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isExtensionPresent","\x46","\xf9","\x2a","\xb4"),
	HX_HCSTRING("isSource","\x65","\x4c","\x9b","\x8a"),
	HX_HCSTRING("listener3f","\x47","\x32","\x0a","\x29"),
	HX_HCSTRING("listener3i","\x4a","\x32","\x0a","\x29"),
	HX_HCSTRING("listenerf","\x72","\x65","\x8e","\xf3"),
	HX_HCSTRING("listenerfv","\xc4","\x5e","\x0a","\x29"),
	HX_HCSTRING("listeneri","\x75","\x65","\x8e","\xf3"),
	HX_HCSTRING("listeneriv","\x61","\x61","\x0a","\x29"),
	HX_HCSTRING("source3f","\x6e","\x0a","\xa4","\x66"),
	HX_HCSTRING("source3i","\x71","\x0a","\xa4","\x66"),
	HX_HCSTRING("sourcef","\x2b","\x0f","\x49","\xb9"),
	HX_HCSTRING("sourcefv","\xeb","\x36","\xa4","\x66"),
	HX_HCSTRING("sourcei","\x2e","\x0f","\x49","\xb9"),
	HX_HCSTRING("sourceiv","\x88","\x39","\xa4","\x66"),
	HX_HCSTRING("sourcePlay","\x6f","\x14","\xbe","\x72"),
	HX_HCSTRING("sourcePlayv","\x27","\xcd","\x93","\xf3"),
	HX_HCSTRING("sourceStop","\x7d","\xd6","\xbf","\x74"),
	HX_HCSTRING("sourceStopv","\x59","\xd7","\x1b","\xb3"),
	HX_HCSTRING("sourceRewind","\x36","\xe5","\x26","\x01"),
	HX_HCSTRING("sourceRewindv","\x80","\xaa","\xe1","\x00"),
	HX_HCSTRING("sourcePause","\x1b","\x9c","\x5d","\xec"),
	HX_HCSTRING("sourcePausev","\xfb","\xfb","\x8a","\xe5"),
	HX_HCSTRING("sourceQueueBuffer","\x56","\x70","\x65","\x56"),
	HX_HCSTRING("sourceQueueBuffers","\x5d","\xdb","\x5c","\x42"),
	HX_HCSTRING("sourceUnqueueBuffer","\xdd","\x29","\x95","\x2e"),
	HX_HCSTRING("sourceUnqueueBuffers","\xf6","\x77","\xef","\x93"),
	HX_HCSTRING("speedOfSound","\x71","\xe7","\x21","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class ALAudioContext_obj::__mClass;

void ALAudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.ALAudioContext","\xd5","\x0f","\xc0","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALAudioContext_obj >;
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
