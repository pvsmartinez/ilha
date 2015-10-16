#ifndef INCLUDED_lime_system_Clipboard
#define INCLUDED_lime_system_Clipboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_system,Clipboard)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  Clipboard_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Clipboard_obj OBJ_;
		Clipboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.system.Clipboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Clipboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Clipboard_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Clipboard","\xb6","\x45","\xaa","\xe3"); }

		static void __boot();
		static ::String get_text( );
		static Dynamic get_text_dyn();

		static ::String set_text( ::String value);
		static Dynamic set_text_dyn();

		static Dynamic lime_clipboard_get_text( );
		static Dynamic lime_clipboard_get_text_dyn();

		static Void lime_clipboard_set_text( ::String text);
		static Dynamic lime_clipboard_set_text_dyn();

		static ::cpp::Function< ::hx::Object * ( ) > cffi_lime_clipboard_get_text;
		static ::cpp::Function< void ( ::String ) > cffi_lime_clipboard_set_text;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Clipboard */ 
