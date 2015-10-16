#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,JoystickEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  JoystickEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JoystickEventInfo_obj OBJ_;
		JoystickEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< Float >  __o_value,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.JoystickEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JoystickEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< Float >  __o_value,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JoystickEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JoystickEventInfo","\x2c","\x09","\xa3","\x75"); }

		int id;
		int index;
		int type;
		Float value;
		int x;
		int y;
		virtual ::lime::_backend::native::_NativeApplication::JoystickEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo */ 
