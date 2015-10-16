#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_TextEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,TextEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  TextEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextEventInfo_obj OBJ_;
		TextEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_windowID,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native._NativeApplication.TextEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_windowID,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEventInfo","\x1b","\x27","\x4b","\xf4"); }

		int id;
		int length;
		int start;
		::String text;
		int type;
		int windowID;
		virtual ::lime::_backend::native::_NativeApplication::TextEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_TextEventInfo */ 
