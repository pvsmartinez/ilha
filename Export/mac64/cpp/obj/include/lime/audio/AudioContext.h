#ifndef INCLUDED_lime_audio_AudioContext
#define INCLUDED_lime_audio_AudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,ALAudioContext)
HX_DECLARE_CLASS2(lime,audio,ALCAudioContext)
HX_DECLARE_CLASS2(lime,audio,AudioContext)
HX_DECLARE_CLASS2(lime,audio,FlashAudioContext)
HX_DECLARE_CLASS2(lime,audio,HTML5AudioContext)
HX_DECLARE_CLASS2(lime,audio,WebAudioContext)
namespace lime{
namespace audio{


class AudioContext_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef AudioContext_obj OBJ_;

	public:
		AudioContext_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.audio.AudioContext","\x2a","\x2c","\xa6","\x27"); }
		::String __ToString() const { return HX_HCSTRING("AudioContext.","\x35","\xe6","\x53","\x77") + tag; }

		static ::lime::audio::AudioContext CUSTOM(Dynamic data);
		static Dynamic CUSTOM_dyn();
		static ::lime::audio::AudioContext FLASH(::lime::audio::FlashAudioContext context);
		static Dynamic FLASH_dyn();
		static ::lime::audio::AudioContext HTML5(::lime::audio::HTML5AudioContext context);
		static Dynamic HTML5_dyn();
		static ::lime::audio::AudioContext OPENAL(::lime::audio::ALCAudioContext alc,::lime::audio::ALAudioContext al);
		static Dynamic OPENAL_dyn();
		static ::lime::audio::AudioContext WEB(::lime::audio::WebAudioContext context);
		static Dynamic WEB_dyn();
};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_AudioContext */ 
