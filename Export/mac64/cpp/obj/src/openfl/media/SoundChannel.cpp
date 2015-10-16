#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace media{

Void SoundChannel_obj::__construct(::lime::audio::AudioSource source)
{
HX_STACK_FRAME("openfl.media.SoundChannel","new",0xfc94e2ae,"openfl.media.SoundChannel.new","openfl/media/SoundChannel.hx",65,0xa4290000)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(67)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(69)
	this->leftPeak = (int)1;
	HX_STACK_LINE(70)
	this->rightPeak = (int)1;
	HX_STACK_LINE(74)
	bool tmp = (source != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	if ((tmp)){
		HX_STACK_LINE(76)
		this->__source = source;
		HX_STACK_LINE(77)
		::lime::audio::AudioSource tmp1 = this->__source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		Dynamic tmp2 = this->source_onComplete_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		tmp1->onComplete->add(tmp2,null(),null());
		HX_STACK_LINE(78)
		this->__isValid = true;
		HX_STACK_LINE(80)
		::lime::audio::AudioSource tmp3 = this->__source;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		tmp3->play();
	}
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(::lime::audio::AudioSource source)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","stop",0x090ae1f4,"openfl.media.SoundChannel.stop","openfl/media/SoundChannel.hx",103,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(105)
			return null();
		}
		HX_STACK_LINE(108)
		::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		tmp2->stop();
		HX_STACK_LINE(109)
		this->__dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

Void SoundChannel_obj::__dispose( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","__dispose",0x8d7f924d,"openfl.media.SoundChannel.__dispose","openfl/media/SoundChannel.hx",117,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(122)
		::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		tmp2->dispose();
		HX_STACK_LINE(128)
		this->__isValid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__dispose,(void))

Float SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("openfl.media.SoundChannel","get_position",0x46d188a4,"openfl.media.SoundChannel.get_position","openfl/media/SoundChannel.hx",140,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	if ((tmp1)){
		HX_STACK_LINE(142)
		return (int)0;
	}
	HX_STACK_LINE(145)
	::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	int tmp3 = tmp2->get_currentTime();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	::lime::audio::AudioSource tmp4 = this->__source;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	int tmp5 = tmp4->offset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	int tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(145)
	Float tmp7 = (Float(tmp6) / Float((int)1000));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(145)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_FRAME("openfl.media.SoundChannel","set_position",0x5bcaac18,"openfl.media.SoundChannel.set_position","openfl/media/SoundChannel.hx",153,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(155)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	if ((tmp1)){
		HX_STACK_LINE(155)
		return (int)0;
	}
	HX_STACK_LINE(158)
	::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	Float tmp3 = (value * (int)1000);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(158)
	::lime::audio::AudioSource tmp5 = this->__source;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(158)
	int tmp6 = tmp5->offset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(158)
	int tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(158)
	tmp2->set_currentTime(tmp7);
	HX_STACK_LINE(159)
	Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(159)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl.media.SoundChannel","get_soundTransform",0xc6e884d8,"openfl.media.SoundChannel.get_soundTransform","openfl/media/SoundChannel.hx",168,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(170)
		::openfl::media::SoundTransform tmp2 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		return tmp2;
	}
	HX_STACK_LINE(175)
	::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	Float tmp3 = tmp2->get_gain();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	::openfl::media::SoundTransform tmp4 = ::openfl::media::SoundTransform_obj::__new(tmp3,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(175)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl.media.SoundChannel","set_soundTransform",0xa397b74c,"openfl.media.SoundChannel.set_soundTransform","openfl/media/SoundChannel.hx",183,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(185)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	if ((tmp1)){
		HX_STACK_LINE(185)
		::openfl::media::SoundTransform tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		return tmp2;
	}
	HX_STACK_LINE(188)
	::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	Float tmp3 = value->volume;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	tmp2->set_gain(tmp3);
	HX_STACK_LINE(192)
	::openfl::media::SoundTransform tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(192)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

Void SoundChannel_obj::source_onComplete( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","source_onComplete",0xb57ef7ea,"openfl.media.SoundChannel.source_onComplete","openfl/media/SoundChannel.hx",219,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		this->__dispose();
		HX_STACK_LINE(222)
		::String tmp = ::openfl::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,source_onComplete,(void))


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__source,"__source");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__source,"__source");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return leftPeak; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"__source") ) { return __source; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return rightPeak; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__dispose") ) { return __dispose_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return get_soundTransform(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"source_onComplete") ) { return source_onComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"__source") ) { __source=inValue.Cast< ::lime::audio::AudioSource >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return set_soundTransform(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__source","\xfb","\x1b","\x61","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*::lime::audio::AudioSource*/ ,(int)offsetof(SoundChannel_obj,__source),HX_HCSTRING("__source","\xfb","\x1b","\x61","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"),
	HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__source","\xfb","\x1b","\x61","\xda"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__dispose","\x7f","\xd1","\x9a","\x3c"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	HX_HCSTRING("source_onComplete","\x1c","\xb9","\x97","\x13"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundChannel","\xbc","\xb3","\xae","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundChannel_obj >;
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

} // end namespace openfl
} // end namespace media
