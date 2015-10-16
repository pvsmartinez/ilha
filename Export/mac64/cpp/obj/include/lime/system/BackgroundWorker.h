#ifndef INCLUDED_lime_system_BackgroundWorker
#define INCLUDED_lime_system_BackgroundWorker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS2(lime,app,Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,_system,BackgroundWorker)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  BackgroundWorker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackgroundWorker_obj OBJ_;
		BackgroundWorker_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.system.BackgroundWorker")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BackgroundWorker_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackgroundWorker_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BackgroundWorker","\x2c","\xbb","\x2f","\xae"); }

		static void __boot();
		static ::String MESSAGE_COMPLETE;
		static ::String MESSAGE_ERROR;
		bool canceled;
		::lime::app::Event_Dynamic_Void doWork;
		::lime::app::Event_Dynamic_Void onComplete;
		::lime::app::Event_Dynamic_Void onError;
		::lime::app::Event_Dynamic_Void onProgress;
		Dynamic __runMessage;
		::cpp::vm::Deque __messageQueue;
		::cpp::vm::Thread __workerThread;
		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void run( Dynamic message);
		Dynamic run_dyn();

		virtual Void sendComplete( Dynamic message);
		Dynamic sendComplete_dyn();

		virtual Void sendError( Dynamic message);
		Dynamic sendError_dyn();

		virtual Void sendProgress( Dynamic message);
		Dynamic sendProgress_dyn();

		virtual Void __doWork( );
		Dynamic __doWork_dyn();

		virtual Void __update( int deltaTime);
		Dynamic __update_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_BackgroundWorker */ 
