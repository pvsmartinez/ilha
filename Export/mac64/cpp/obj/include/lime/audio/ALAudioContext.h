#ifndef INCLUDED_lime_audio_ALAudioContext
#define INCLUDED_lime_audio_ALAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,ALAudioContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  ALAudioContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALAudioContext_obj OBJ_;
		ALAudioContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.audio.ALAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALAudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALAudioContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALAudioContext","\x44","\x65","\x2c","\x10"); }

		int NONE;
		int FALSE;
		int TRUE;
		int SOURCE_RELATIVE;
		int CONE_INNER_ANGLE;
		int CONE_OUTER_ANGLE;
		int PITCH;
		int POSITION;
		int DIRECTION;
		int VELOCITY;
		int LOOPING;
		int BUFFER;
		int GAIN;
		int MIN_GAIN;
		int MAX_GAIN;
		int ORIENTATION;
		int SOURCE_STATE;
		int INITIAL;
		int PLAYING;
		int PAUSED;
		int STOPPED;
		int BUFFERS_QUEUED;
		int BUFFERS_PROCESSED;
		int REFERENCE_DISTANCE;
		int ROLLOFF_FACTOR;
		int CONE_OUTER_GAIN;
		int MAX_DISTANCE;
		int SEC_OFFSET;
		int SAMPLE_OFFSET;
		int BYTE_OFFSET;
		int SOURCE_TYPE;
		int STATIC;
		int STREAMING;
		int UNDETERMINED;
		int FORMAT_MONO8;
		int FORMAT_MONO16;
		int FORMAT_STEREO8;
		int FORMAT_STEREO16;
		int FREQUENCY;
		int BITS;
		int CHANNELS;
		int SIZE;
		int NO_ERROR;
		int INVALID_NAME;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int INVALID_OPERATION;
		int OUT_OF_MEMORY;
		int VENDOR;
		int VERSION;
		int RENDERER;
		int EXTENSIONS;
		int DOPPLER_FACTOR;
		int SPEED_OF_SOUND;
		int DOPPLER_VELOCITY;
		int DISTANCE_MODEL;
		int INVERSE_DISTANCE;
		int INVERSE_DISTANCE_CLAMPED;
		int LINEAR_DISTANCE;
		int LINEAR_DISTANCE_CLAMPED;
		int EXPONENT_DISTANCE;
		int EXPONENT_DISTANCE_CLAMPED;
		virtual Void bufferData( int buffer,int format,::lime::utils::ArrayBufferView data,int size,int freq);
		Dynamic bufferData_dyn();

		virtual Void buffer3f( int buffer,int param,Float value1,Float value2,Float value3);
		Dynamic buffer3f_dyn();

		virtual Void buffer3i( int buffer,int param,int value1,int value2,int value3);
		Dynamic buffer3i_dyn();

		virtual Void bufferf( int buffer,int param,Float value);
		Dynamic bufferf_dyn();

		virtual Void bufferfv( int buffer,int param,Array< Float > values);
		Dynamic bufferfv_dyn();

		virtual Void bufferi( int buffer,int param,int value);
		Dynamic bufferi_dyn();

		virtual Void bufferiv( int buffer,int param,Array< int > values);
		Dynamic bufferiv_dyn();

		virtual Void deleteBuffer( int buffer);
		Dynamic deleteBuffer_dyn();

		virtual Void deleteBuffers( Array< int > buffers);
		Dynamic deleteBuffers_dyn();

		virtual Void deleteSource( int source);
		Dynamic deleteSource_dyn();

		virtual Void deleteSources( Array< int > sources);
		Dynamic deleteSources_dyn();

		virtual Void disable( int capability);
		Dynamic disable_dyn();

		virtual Void distanceModel( int distanceModel);
		Dynamic distanceModel_dyn();

		virtual Void dopplerFactor( Float value);
		Dynamic dopplerFactor_dyn();

		virtual Void dopplerVelocity( Float value);
		Dynamic dopplerVelocity_dyn();

		virtual Void enable( int capability);
		Dynamic enable_dyn();

		virtual int genSource( );
		Dynamic genSource_dyn();

		virtual Array< int > genSources( int n);
		Dynamic genSources_dyn();

		virtual int genBuffer( );
		Dynamic genBuffer_dyn();

		virtual Array< int > genBuffers( int n);
		Dynamic genBuffers_dyn();

		virtual bool getBoolean( int param);
		Dynamic getBoolean_dyn();

		virtual Array< bool > getBooleanv( int param,hx::Null< int >  count);
		Dynamic getBooleanv_dyn();

		virtual Array< Float > getBuffer3f( int buffer,int param);
		Dynamic getBuffer3f_dyn();

		virtual Array< int > getBuffer3i( int buffer,int param);
		Dynamic getBuffer3i_dyn();

		virtual Float getBufferf( int buffer,int param);
		Dynamic getBufferf_dyn();

		virtual Array< Float > getBufferfv( int buffer,int param,hx::Null< int >  count);
		Dynamic getBufferfv_dyn();

		virtual int getBufferi( int buffer,int param);
		Dynamic getBufferi_dyn();

		virtual Array< int > getBufferiv( int buffer,int param,hx::Null< int >  count);
		Dynamic getBufferiv_dyn();

		virtual Float getDouble( int param);
		Dynamic getDouble_dyn();

		virtual Array< Float > getDoublev( int param,hx::Null< int >  count);
		Dynamic getDoublev_dyn();

		virtual int getEnumValue( ::String ename);
		Dynamic getEnumValue_dyn();

		virtual int getError( );
		Dynamic getError_dyn();

		virtual ::String getErrorString( );
		Dynamic getErrorString_dyn();

		virtual Float getFloat( int param);
		Dynamic getFloat_dyn();

		virtual Array< Float > getFloatv( int param,hx::Null< int >  count);
		Dynamic getFloatv_dyn();

		virtual int getInteger( int param);
		Dynamic getInteger_dyn();

		virtual Array< int > getIntegerv( int param,hx::Null< int >  count);
		Dynamic getIntegerv_dyn();

		virtual Array< Float > getListener3f( int param);
		Dynamic getListener3f_dyn();

		virtual Array< int > getListener3i( int param);
		Dynamic getListener3i_dyn();

		virtual Float getListenerf( int param);
		Dynamic getListenerf_dyn();

		virtual Array< Float > getListenerfv( int param,hx::Null< int >  count);
		Dynamic getListenerfv_dyn();

		virtual int getListeneri( int param);
		Dynamic getListeneri_dyn();

		virtual Array< int > getListeneriv( int param,hx::Null< int >  count);
		Dynamic getListeneriv_dyn();

		virtual Dynamic getProcAddress( ::String fname);
		Dynamic getProcAddress_dyn();

		virtual Array< Float > getSource3f( int source,int param);
		Dynamic getSource3f_dyn();

		virtual Float getSourcef( int source,int param);
		Dynamic getSourcef_dyn();

		virtual Array< int > getSource3i( int source,int param);
		Dynamic getSource3i_dyn();

		virtual Array< Float > getSourcefv( int source,int param,hx::Null< int >  count);
		Dynamic getSourcefv_dyn();

		virtual int getSourcei( int source,int param);
		Dynamic getSourcei_dyn();

		virtual Array< int > getSourceiv( int source,int param,hx::Null< int >  count);
		Dynamic getSourceiv_dyn();

		virtual ::String getString( int param);
		Dynamic getString_dyn();

		virtual bool isBuffer( int buffer);
		Dynamic isBuffer_dyn();

		virtual bool isEnabled( int capability);
		Dynamic isEnabled_dyn();

		virtual bool isExtensionPresent( ::String extname);
		Dynamic isExtensionPresent_dyn();

		virtual bool isSource( int source);
		Dynamic isSource_dyn();

		virtual Void listener3f( int param,Float value1,Float value2,Float value3);
		Dynamic listener3f_dyn();

		virtual Void listener3i( int param,int value1,int value2,int value3);
		Dynamic listener3i_dyn();

		virtual Void listenerf( int param,Float value);
		Dynamic listenerf_dyn();

		virtual Void listenerfv( int param,Array< Float > values);
		Dynamic listenerfv_dyn();

		virtual Void listeneri( int param,int value);
		Dynamic listeneri_dyn();

		virtual Void listeneriv( int param,Array< int > values);
		Dynamic listeneriv_dyn();

		virtual Void source3f( int source,int param,Float value1,Float value2,Float value3);
		Dynamic source3f_dyn();

		virtual Void source3i( int source,int param,int value1,int value2,int value3);
		Dynamic source3i_dyn();

		virtual Void sourcef( int source,int param,Float value);
		Dynamic sourcef_dyn();

		virtual Void sourcefv( int source,int param,Array< Float > values);
		Dynamic sourcefv_dyn();

		virtual Void sourcei( int source,int param,int value);
		Dynamic sourcei_dyn();

		virtual Void sourceiv( int source,int param,Array< int > values);
		Dynamic sourceiv_dyn();

		virtual Void sourcePlay( int source);
		Dynamic sourcePlay_dyn();

		virtual Void sourcePlayv( Array< int > sources);
		Dynamic sourcePlayv_dyn();

		virtual Void sourceStop( int source);
		Dynamic sourceStop_dyn();

		virtual Void sourceStopv( Array< int > sources);
		Dynamic sourceStopv_dyn();

		virtual Void sourceRewind( int source);
		Dynamic sourceRewind_dyn();

		virtual Void sourceRewindv( Array< int > sources);
		Dynamic sourceRewindv_dyn();

		virtual Void sourcePause( int source);
		Dynamic sourcePause_dyn();

		virtual Void sourcePausev( Array< int > sources);
		Dynamic sourcePausev_dyn();

		virtual Void sourceQueueBuffer( int source,int buffer);
		Dynamic sourceQueueBuffer_dyn();

		virtual Void sourceQueueBuffers( int source,int nb,Array< int > buffers);
		Dynamic sourceQueueBuffers_dyn();

		virtual int sourceUnqueueBuffer( int source);
		Dynamic sourceUnqueueBuffer_dyn();

		virtual Array< int > sourceUnqueueBuffers( int source,int nb);
		Dynamic sourceUnqueueBuffers_dyn();

		virtual Void speedOfSound( Float value);
		Dynamic speedOfSound_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_ALAudioContext */ 
