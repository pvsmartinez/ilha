#ifndef INCLUDED_lime_audio_openal__ALContext_ALContext_Impl_
#define INCLUDED_lime_audio_openal__ALContext_ALContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,audio,openal,_ALContext,ALContext_Impl_)
namespace lime{
namespace audio{
namespace openal{
namespace _ALContext{


class HXCPP_CLASS_ATTRIBUTES  ALContext_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALContext_Impl__obj OBJ_;
		ALContext_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.audio.openal._ALContext.ALContext_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALContext_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALContext_Impl_","\xe4","\x0f","\x31","\x11"); }

		static Dynamic _new( Dynamic handle);
		static Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace audio
} // end namespace openal
} // end namespace _ALContext

#endif /* INCLUDED_lime_audio_openal__ALContext_ALContext_Impl_ */ 
