#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,WindowEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  WindowEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowEventInfo_obj OBJ_;
		WindowEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.WindowEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WindowEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WindowEventInfo","\x78","\x97","\xc0","\xfb"); }

		int height;
		int type;
		int width;
		int windowID;
		int x;
		int y;
		virtual ::lime::_backend::native::_NativeApplication::WindowEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo */ 
