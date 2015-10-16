#ifndef INCLUDED_lime_app_Promise
#define INCLUDED_lime_app_Promise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Promise_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promise_obj OBJ_;
		Promise_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Promise")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promise_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Promise","\x7b","\xf5","\x3a","\xc5"); }

		::lime::app::Future future;
		bool isCompleted;
		virtual ::lime::app::Promise complete( Dynamic data);
		Dynamic complete_dyn();

		virtual ::lime::app::Promise completeWith( ::lime::app::Future future);
		Dynamic completeWith_dyn();

		virtual ::lime::app::Promise error( Dynamic msg);
		Dynamic error_dyn();

		virtual ::lime::app::Promise progress( Float progress);
		Dynamic progress_dyn();

		virtual bool get_isCompleted( );
		Dynamic get_isCompleted_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Promise */ 
