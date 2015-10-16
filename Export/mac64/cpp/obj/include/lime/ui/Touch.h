#ifndef INCLUDED_lime_ui_Touch
#define INCLUDED_lime_ui_Touch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event_lime_ui_Touch_Void)
HX_DECLARE_CLASS2(lime,ui,Touch)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Touch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Touch_obj OBJ_;
		Touch_obj();
		Void __construct(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.ui.Touch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Touch_obj > __new(Float x,Float y,int id,Float dx,Float dy,Float pressure,int device);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Touch_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Touch","\x9f","\x87","\x60","\xa7"); }

		static void __boot();
		static ::lime::app::Event_lime_ui_Touch_Void onEnd;
		static ::lime::app::Event_lime_ui_Touch_Void onMove;
		static ::lime::app::Event_lime_ui_Touch_Void onStart;
		int device;
		Float dx;
		Float dy;
		int id;
		Float pressure;
		Float x;
		Float y;
};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Touch */ 
