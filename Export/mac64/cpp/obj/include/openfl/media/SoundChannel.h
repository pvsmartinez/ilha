#ifndef INCLUDED_openfl_media_SoundChannel
#define INCLUDED_openfl_media_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,audio,AudioSource)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundChannel_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();
		Void __construct(::lime::audio::AudioSource source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.media.SoundChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundChannel_obj > __new(::lime::audio::AudioSource source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundChannel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SoundChannel","\xd4","\xaf","\x1c","\xa9"); }

		Float leftPeak;
		Float rightPeak;
		bool __isValid;
		::lime::audio::AudioSource __source;
		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void __dispose( );
		Dynamic __dispose_dyn();

		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual Float set_position( Float value);
		Dynamic set_position_dyn();

		virtual ::openfl::media::SoundTransform get_soundTransform( );
		Dynamic get_soundTransform_dyn();

		virtual ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		Dynamic set_soundTransform_dyn();

		virtual Void source_onComplete( );
		Dynamic source_onComplete_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundChannel */ 
