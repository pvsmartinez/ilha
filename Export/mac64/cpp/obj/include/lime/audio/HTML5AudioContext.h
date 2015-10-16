#ifndef INCLUDED_lime_audio_HTML5AudioContext
#define INCLUDED_lime_audio_HTML5AudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,audio,HTML5AudioContext)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  HTML5AudioContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HTML5AudioContext_obj OBJ_;
		HTML5AudioContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.audio.HTML5AudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HTML5AudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTML5AudioContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HTML5AudioContext","\x43","\x4f","\x63","\x29"); }

		int HAVE_CURRENT_DATA;
		int HAVE_ENOUGH_DATA;
		int HAVE_FUTURE_DATA;
		int HAVE_METADATA;
		int HAVE_NOTHING;
		int NETWORK_EMPTY;
		int NETWORK_IDLE;
		int NETWORK_LOADING;
		int NETWORK_NO_SOURCE;
		virtual ::String canPlayType( ::lime::audio::AudioBuffer buffer,::String type);
		Dynamic canPlayType_dyn();

		virtual ::lime::audio::AudioBuffer createBuffer( ::String urlString);
		Dynamic createBuffer_dyn();

		virtual bool getAutoplay( ::lime::audio::AudioBuffer buffer);
		Dynamic getAutoplay_dyn();

		virtual Dynamic getBuffered( ::lime::audio::AudioBuffer buffer);
		Dynamic getBuffered_dyn();

		virtual ::String getCurrentSrc( ::lime::audio::AudioBuffer buffer);
		Dynamic getCurrentSrc_dyn();

		virtual Float getCurrentTime( ::lime::audio::AudioBuffer buffer);
		Dynamic getCurrentTime_dyn();

		virtual Float getDefaultPlaybackRate( ::lime::audio::AudioBuffer buffer);
		Dynamic getDefaultPlaybackRate_dyn();

		virtual Float getDuration( ::lime::audio::AudioBuffer buffer);
		Dynamic getDuration_dyn();

		virtual bool getEnded( ::lime::audio::AudioBuffer buffer);
		Dynamic getEnded_dyn();

		virtual Dynamic getError( ::lime::audio::AudioBuffer buffer);
		Dynamic getError_dyn();

		virtual bool getLoop( ::lime::audio::AudioBuffer buffer);
		Dynamic getLoop_dyn();

		virtual bool getMuted( ::lime::audio::AudioBuffer buffer);
		Dynamic getMuted_dyn();

		virtual int getNetworkState( ::lime::audio::AudioBuffer buffer);
		Dynamic getNetworkState_dyn();

		virtual bool getPaused( ::lime::audio::AudioBuffer buffer);
		Dynamic getPaused_dyn();

		virtual Float getPlaybackRate( ::lime::audio::AudioBuffer buffer);
		Dynamic getPlaybackRate_dyn();

		virtual Dynamic getPlayed( ::lime::audio::AudioBuffer buffer);
		Dynamic getPlayed_dyn();

		virtual ::String getPreload( ::lime::audio::AudioBuffer buffer);
		Dynamic getPreload_dyn();

		virtual int getReadyState( ::lime::audio::AudioBuffer buffer);
		Dynamic getReadyState_dyn();

		virtual Dynamic getSeekable( ::lime::audio::AudioBuffer buffer);
		Dynamic getSeekable_dyn();

		virtual bool getSeeking( ::lime::audio::AudioBuffer buffer);
		Dynamic getSeeking_dyn();

		virtual ::String getSrc( ::lime::audio::AudioBuffer buffer);
		Dynamic getSrc_dyn();

		virtual Float getStartTime( ::lime::audio::AudioBuffer buffer);
		Dynamic getStartTime_dyn();

		virtual Float getVolume( ::lime::audio::AudioBuffer buffer);
		Dynamic getVolume_dyn();

		virtual Void load( ::lime::audio::AudioBuffer buffer);
		Dynamic load_dyn();

		virtual Void pause( ::lime::audio::AudioBuffer buffer);
		Dynamic pause_dyn();

		virtual Void play( ::lime::audio::AudioBuffer buffer);
		Dynamic play_dyn();

		virtual Void setAutoplay( ::lime::audio::AudioBuffer buffer,bool value);
		Dynamic setAutoplay_dyn();

		virtual Void setCurrentTime( ::lime::audio::AudioBuffer buffer,Float value);
		Dynamic setCurrentTime_dyn();

		virtual Void setDefaultPlaybackRate( ::lime::audio::AudioBuffer buffer,Float value);
		Dynamic setDefaultPlaybackRate_dyn();

		virtual Void setLoop( ::lime::audio::AudioBuffer buffer,bool value);
		Dynamic setLoop_dyn();

		virtual Void setMuted( ::lime::audio::AudioBuffer buffer,bool value);
		Dynamic setMuted_dyn();

		virtual Void setPlaybackRate( ::lime::audio::AudioBuffer buffer,Float value);
		Dynamic setPlaybackRate_dyn();

		virtual Void setPreload( ::lime::audio::AudioBuffer buffer,::String value);
		Dynamic setPreload_dyn();

		virtual Void setSrc( ::lime::audio::AudioBuffer buffer,::String value);
		Dynamic setSrc_dyn();

		virtual Void setVolume( ::lime::audio::AudioBuffer buffer,Float value);
		Dynamic setVolume_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_HTML5AudioContext */ 
