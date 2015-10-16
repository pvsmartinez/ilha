#ifndef INCLUDED_lime_audio_ALCAudioContext
#define INCLUDED_lime_audio_ALCAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,ALCAudioContext)
namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES  ALCAudioContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALCAudioContext_obj OBJ_;
		ALCAudioContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.audio.ALCAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALCAudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALCAudioContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALCAudioContext","\xd1","\x20","\xbe","\xcd"); }

		int FALSE;
		int TRUE;
		int FREQUENCY;
		int REFRESH;
		int SYNC;
		int MONO_SOURCES;
		int STEREO_SOURCES;
		int NO_ERROR;
		int INVALID_DEVICE;
		int INVALID_CONTEXT;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int OUT_OF_MEMORY;
		int ATTRIBUTES_SIZE;
		int ALL_ATTRIBUTES;
		int DEFAULT_DEVICE_SPECIFIER;
		int DEVICE_SPECIFIER;
		int EXTENSIONS;
		int ENUMERATE_ALL_EXT;
		int DEFAULT_ALL_DEVICES_SPECIFIER;
		int ALL_DEVICES_SPECIFIER;
		virtual bool closeDevice( Dynamic device);
		Dynamic closeDevice_dyn();

		virtual Dynamic createContext( Dynamic device,Array< int > attrlist);
		Dynamic createContext_dyn();

		virtual Void destroyContext( Dynamic context);
		Dynamic destroyContext_dyn();

		virtual Dynamic getContextsDevice( Dynamic context);
		Dynamic getContextsDevice_dyn();

		virtual Dynamic getCurrentContext( );
		Dynamic getCurrentContext_dyn();

		virtual int getError( Dynamic device);
		Dynamic getError_dyn();

		virtual ::String getErrorString( Dynamic device);
		Dynamic getErrorString_dyn();

		virtual Array< int > getIntegerv( Dynamic device,int param,hx::Null< int >  count);
		Dynamic getIntegerv_dyn();

		virtual ::String getString( Dynamic device,int param);
		Dynamic getString_dyn();

		virtual bool makeContextCurrent( Dynamic context);
		Dynamic makeContextCurrent_dyn();

		virtual Dynamic openDevice( ::String deviceName);
		Dynamic openDevice_dyn();

		virtual Void processContext( Dynamic context);
		Dynamic processContext_dyn();

		virtual Void suspendContext( Dynamic context);
		Dynamic suspendContext_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_ALCAudioContext */ 
