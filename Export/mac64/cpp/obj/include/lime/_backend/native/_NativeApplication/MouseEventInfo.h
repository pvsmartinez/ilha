#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,MouseEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  MouseEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseEventInfo_obj OBJ_;
		MouseEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.MouseEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MouseEventInfo","\xe3","\x32","\xfc","\x30"); }

		int button;
		Float movementX;
		Float movementY;
		int type;
		int windowID;
		Float x;
		Float y;
		virtual ::lime::_backend::native::_NativeApplication::MouseEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo */ 
