#ifndef INCLUDED_lime_audio_AudioSource
#define INCLUDED_lime_audio_AudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(lime,app,Event_Void_Void)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,audio,AudioSource)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  AudioSource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioSource_obj OBJ_;
		AudioSource_obj();
		Void __construct(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.audio.AudioSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioSource_obj > __new(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioSource","\x31","\x7a","\x14","\xe5"); }

		::lime::app::Event_Void_Void onComplete;
		::lime::audio::AudioBuffer buffer;
		int offset;
		int id;
		bool playing;
		int pauseTime;
		Dynamic __length;
		int __loops;
		::haxe::Timer timer;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void timer_onRun( );
		Dynamic timer_onRun_dyn();

		virtual int get_currentTime( );
		Dynamic get_currentTime_dyn();

		virtual int set_currentTime( int value);
		Dynamic set_currentTime_dyn();

		virtual Float get_gain( );
		Dynamic get_gain_dyn();

		virtual Float set_gain( Float value);
		Dynamic set_gain_dyn();

		virtual int get_loops( );
		Dynamic get_loops_dyn();

		virtual int set_loops( int loops);
		Dynamic set_loops_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int set_length( int value);
		Dynamic set_length_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_AudioSource */ 
