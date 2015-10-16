#ifndef INCLUDED_openfl_media_Sound
#define INCLUDED_openfl_media_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,ID3Info)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.media.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		static ::openfl::media::Sound fromAudioBuffer( ::lime::audio::AudioBuffer buffer);
		static Dynamic fromAudioBuffer_dyn();

		static ::openfl::media::Sound fromFile( ::String path);
		static Dynamic fromFile_dyn();

		int bytesLoaded;
		int bytesTotal;
		::openfl::media::ID3Info id3;
		bool isBuffering;
		::String url;
		::lime::audio::AudioBuffer __buffer;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void load( ::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context);
		Dynamic load_dyn();

		virtual Void loadCompressedDataFromByteArray( ::lime::utils::ByteArray bytes,int bytesLength,hx::Null< bool >  forcePlayAsMusic);
		Dynamic loadCompressedDataFromByteArray_dyn();

		virtual Void loadPCMFromByteArray( ::lime::utils::ByteArray bytes,int samples,::String format,hx::Null< bool >  stereo,hx::Null< Float >  sampleRate);
		Dynamic loadPCMFromByteArray_dyn();

		virtual ::openfl::media::SoundChannel play( hx::Null< Float >  startTime,hx::Null< int >  loops,::openfl::media::SoundTransform sndTransform);
		Dynamic play_dyn();

		virtual ::openfl::media::ID3Info get_id3( );
		Dynamic get_id3_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual Void AudioBuffer_onURLLoad( ::lime::audio::AudioBuffer buffer);
		Dynamic AudioBuffer_onURLLoad_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_Sound */ 
