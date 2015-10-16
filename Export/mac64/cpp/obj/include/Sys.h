#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)


class HXCPP_CLASS_ATTRIBUTES  Sys_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Sys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00"); }

		static Void print( Dynamic v);
		static Dynamic print_dyn();

		static Void println( Dynamic v);
		static Dynamic println_dyn();

		static Array< ::String > args( );
		static Dynamic args_dyn();

		static Void exit( int code);
		static Dynamic exit_dyn();

};


#endif /* INCLUDED_Sys */ 
