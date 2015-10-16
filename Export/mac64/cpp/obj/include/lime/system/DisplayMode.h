#ifndef INCLUDED_lime_system_DisplayMode
#define INCLUDED_lime_system_DisplayMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_system,DisplayMode)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  DisplayMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DisplayMode_obj OBJ_;
		DisplayMode_obj();
		Void __construct(int width,int height,int refreshRate,int pixelFormat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.system.DisplayMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayMode_obj > __new(int width,int height,int refreshRate,int pixelFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DisplayMode","\xa5","\x0a","\x86","\x14"); }

		int height;
		int pixelFormat;
		int refreshRate;
		int width;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_DisplayMode */ 
