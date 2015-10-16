#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TouchEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  TouchEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TouchEventInfo_obj OBJ_;
		TouchEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id,hx::Null< Float >  __o_dx,hx::Null< Float >  __o_dy,hx::Null< Float >  __o_pressure,hx::Null< int >  __o_device);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.TouchEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TouchEventInfo_obj > __new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id,hx::Null< Float >  __o_dx,hx::Null< Float >  __o_dy,hx::Null< Float >  __o_pressure,hx::Null< int >  __o_device);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TouchEventInfo","\x09","\x2e","\xb2","\xb6"); }

		int device;
		Float dx;
		Float dy;
		int id;
		Float pressure;
		int type;
		Float x;
		Float y;
		virtual ::lime::_backend::native::_NativeApplication::TouchEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo */ 
