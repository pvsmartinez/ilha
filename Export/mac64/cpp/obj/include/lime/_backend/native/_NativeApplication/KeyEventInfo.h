#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,KeyEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  KeyEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEventInfo_obj OBJ_;
		KeyEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.KeyEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KeyEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KeyEventInfo","\x29","\x38","\xa3","\x94"); }

		int keyCode;
		int modifier;
		int type;
		int windowID;
		virtual ::lime::_backend::native::_NativeApplication::KeyEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo */ 
