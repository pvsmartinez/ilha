#ifndef INCLUDED_lime_system_Display
#define INCLUDED_lime_system_Display

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,_system,Display)
HX_DECLARE_CLASS2(lime,_system,DisplayMode)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  Display_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Display_obj OBJ_;
		Display_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.system.Display")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Display_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Display_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Display","\x22","\x52","\x9b","\x88"); }

		::lime::math::Rectangle bounds;
		::lime::_system::DisplayMode currentMode;
		int id;
		::String name;
		Array< ::Dynamic > supportedModes;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Display */ 
