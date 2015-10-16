#ifndef INCLUDED_lime_app_Future
#define INCLUDED_lime_app_Future

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,_system,ThreadPool)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Future_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Future_obj OBJ_;
		Future_obj();
		Void __construct(Dynamic work);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Future")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Future_obj > __new(Dynamic work);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Future_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Future","\x63","\x0c","\xe3","\xa7"); }

		static ::lime::_system::ThreadPool __threadPool;
		static Void threadPool_doWork( Dynamic state);
		static Dynamic threadPool_doWork_dyn();

		static Void threadPool_onComplete( Dynamic state);
		static Dynamic threadPool_onComplete_dyn();

		static Void threadPool_onError( Dynamic state);
		static Dynamic threadPool_onError_dyn();

		bool isCompleted;
		Dynamic value;
		bool __completed;
		cpp::ArrayBase __completeListeners;
		bool __errored;
		cpp::ArrayBase __errorListeners;
		Dynamic __errorMessage;
		cpp::ArrayBase __progressListeners;
		virtual ::lime::app::Future onComplete( Dynamic listener);
		Dynamic onComplete_dyn();

		virtual ::lime::app::Future onError( Dynamic listener);
		Dynamic onError_dyn();

		virtual ::lime::app::Future onProgress( Dynamic listener);
		Dynamic onProgress_dyn();

		virtual ::lime::app::Future then( Dynamic next);
		Dynamic then_dyn();

		virtual bool get_isCompleted( );
		Dynamic get_isCompleted_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Future */ 
