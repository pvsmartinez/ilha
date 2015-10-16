#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,ApplicationEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  ApplicationEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ApplicationEventInfo_obj OBJ_;
		ApplicationEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_deltaTime);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.ApplicationEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ApplicationEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_deltaTime);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ApplicationEventInfo","\x58","\xf8","\x5f","\x3d"); }

		int deltaTime;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::ApplicationEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo */ 
