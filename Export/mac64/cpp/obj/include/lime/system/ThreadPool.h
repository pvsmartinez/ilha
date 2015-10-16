#ifndef INCLUDED_lime_system_ThreadPool
#define INCLUDED_lime_system_ThreadPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(lime,app,Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,_system,ThreadPool)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  ThreadPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ThreadPool_obj OBJ_;
		ThreadPool_obj();
		Void __construct(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.system.ThreadPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ThreadPool_obj > __new(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThreadPool_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ThreadPool","\xe6","\x58","\xd6","\x3c"); }

		int currentThreads;
		::lime::app::Event_Dynamic_Void doWork;
		int maxThreads;
		int minThreads;
		::lime::app::Event_Dynamic_Void onComplete;
		::lime::app::Event_Dynamic_Void onError;
		::lime::app::Event_Dynamic_Void onProgress;
		int __workCompleted;
		::cpp::vm::Deque __workIncoming;
		int __workQueued;
		::cpp::vm::Deque __workResult;
		virtual Void queue( Dynamic state);
		Dynamic queue_dyn();

		virtual Void sendComplete( Dynamic state);
		Dynamic sendComplete_dyn();

		virtual Void sendError( Dynamic state);
		Dynamic sendError_dyn();

		virtual Void sendProgress( Dynamic state);
		Dynamic sendProgress_dyn();

		virtual Void __doWork( );
		Dynamic __doWork_dyn();

		virtual Void __update( int deltaTime);
		Dynamic __update_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_ThreadPool */ 
