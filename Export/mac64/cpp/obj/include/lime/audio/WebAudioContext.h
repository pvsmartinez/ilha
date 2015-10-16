#ifndef INCLUDED_lime_audio_WebAudioContext
#define INCLUDED_lime_audio_WebAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,WebAudioContext)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  WebAudioContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WebAudioContext_obj OBJ_;
		WebAudioContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.audio.WebAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WebAudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WebAudioContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WebAudioContext","\x4d","\x32","\x9a","\x10"); }

		int activeSourceCount;
		Float currentTime;
		Dynamic destination;
		Dynamic listener;
		Dynamic oncomplete;
		Float sampleRate;
		virtual Dynamic createAnalyser( );
		Dynamic createAnalyser_dyn();

		virtual Dynamic createBiquadFilter( );
		Dynamic createBiquadFilter_dyn();

		virtual Dynamic createBuffer( Dynamic buffer,bool mixToMono);
		Dynamic createBuffer_dyn();

		virtual Dynamic createBufferSource( );
		Dynamic createBufferSource_dyn();

		virtual Dynamic createChannelMerger( Dynamic numberOfInputs);
		Dynamic createChannelMerger_dyn();

		virtual Dynamic createChannelSplitter( Dynamic numberOfOutputs);
		Dynamic createChannelSplitter_dyn();

		virtual Dynamic createConvolver( );
		Dynamic createConvolver_dyn();

		virtual Dynamic createDelay( Dynamic maxDelayTime);
		Dynamic createDelay_dyn();

		virtual Dynamic createDynamicsCompressor( );
		Dynamic createDynamicsCompressor_dyn();

		virtual Dynamic createGain( );
		Dynamic createGain_dyn();

		virtual Dynamic createMediaElementSource( Dynamic mediaElement);
		Dynamic createMediaElementSource_dyn();

		virtual Dynamic createMediaStreamSource( Dynamic mediaStream);
		Dynamic createMediaStreamSource_dyn();

		virtual Dynamic createOscillator( );
		Dynamic createOscillator_dyn();

		virtual Dynamic createPanner( );
		Dynamic createPanner_dyn();

		virtual Dynamic createScriptProcessor( int bufferSize,Dynamic numberOfInputChannels,Dynamic numberOfOutputChannels);
		Dynamic createScriptProcessor_dyn();

		virtual Dynamic createWaveShaper( );
		Dynamic createWaveShaper_dyn();

		virtual Dynamic createWaveTable( Dynamic real,Dynamic imag);
		Dynamic createWaveTable_dyn();

		virtual Void decodeAudioData( Dynamic audioData,Dynamic successCallback,Dynamic errorCallback);
		Dynamic decodeAudioData_dyn();

		virtual Void startRendering( );
		Dynamic startRendering_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_WebAudioContext */ 
