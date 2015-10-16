#ifndef INCLUDED_lime_system_CFFI
#define INCLUDED_lime_system_CFFI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,_system,CFFI)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  CFFI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CFFI_obj OBJ_;
		CFFI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.system.CFFI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CFFI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CFFI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("CFFI","\xa6","\xa6","\x7e","\x2c"); }

		static void __boot();
		static ::haxe::ds::StringMap __moduleNames;
		static bool available;
		static bool enabled;
		static Dynamic load( ::String library,::String method,hx::Null< int >  args,hx::Null< bool >  lazy);
		static Dynamic load_dyn();

		static ::String __findHaxelib( ::String library);
		static Dynamic __findHaxelib_dyn();

		static Void __loaderTrace( ::String message);
		static Dynamic __loaderTrace_dyn();

		static ::String __sysName( );
		static Dynamic __sysName_dyn();

		static Dynamic __tryLoad( ::String name,::String library,::String func,int args);
		static Dynamic __tryLoad_dyn();

		static Dynamic lime_cffi_set_finalizer;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_CFFI */ 
