#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Int_Void
#include <lime/app/Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_BackgroundWorker
#include <lime/system/BackgroundWorker.h>
#endif
namespace lime{
namespace _system{

Void BackgroundWorker_obj::__construct()
{
HX_STACK_FRAME("lime.system.BackgroundWorker","new",0x36e47924,"lime.system.BackgroundWorker.new","lime/system/BackgroundWorker.hx",16,0x4a0958ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->onProgress = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(25)
	this->onError = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(24)
	this->onComplete = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(23)
	this->doWork = ::lime::app::Event_Dynamic_Void_obj::__new();
}
;
	return null();
}

//BackgroundWorker_obj::~BackgroundWorker_obj() { }

Dynamic BackgroundWorker_obj::__CreateEmpty() { return  new BackgroundWorker_obj; }
hx::ObjectPtr< BackgroundWorker_obj > BackgroundWorker_obj::__new()
{  hx::ObjectPtr< BackgroundWorker_obj > _result_ = new BackgroundWorker_obj();
	_result_->__construct();
	return _result_;}

Dynamic BackgroundWorker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackgroundWorker_obj > _result_ = new BackgroundWorker_obj();
	_result_->__construct();
	return _result_;}

Void BackgroundWorker_obj::cancel( ){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","cancel",0x890a1736,"lime.system.BackgroundWorker.cancel","lime/system/BackgroundWorker.hx",43,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->canceled = true;
		HX_STACK_LINE(49)
		this->__workerThread = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundWorker_obj,cancel,(void))

Void BackgroundWorker_obj::run( Dynamic message){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","run",0x36e7900f,"lime.system.BackgroundWorker.run","lime/system/BackgroundWorker.hx",56,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(58)
		this->canceled = false;
		HX_STACK_LINE(59)
		this->__runMessage = message;
		HX_STACK_LINE(63)
		::cpp::vm::Deque tmp = ::cpp::vm::Deque_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		this->__messageQueue = tmp;
		HX_STACK_LINE(64)
		Dynamic tmp1 = this->__doWork_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::cpp::vm::Thread tmp2 = ::cpp::vm::Thread_obj::create(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		this->__workerThread = tmp2;
		HX_STACK_LINE(66)
		::lime::app::Application tmp3 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Dynamic tmp4 = this->__update_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp3->onUpdate->add(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,run,(void))

Void BackgroundWorker_obj::sendComplete( Dynamic message){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","sendComplete",0x4fa2f0dd,"lime.system.BackgroundWorker.sendComplete","lime/system/BackgroundWorker.hx",77,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(81)
		::cpp::vm::Deque tmp = this->__messageQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::String tmp1 = ::lime::_system::BackgroundWorker_obj::MESSAGE_COMPLETE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		tmp->add(tmp1);
		HX_STACK_LINE(82)
		::cpp::vm::Deque tmp2 = this->__messageQueue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Dynamic tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		tmp2->add(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,sendComplete,(void))

Void BackgroundWorker_obj::sendError( Dynamic message){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","sendError",0xa2871d24,"lime.system.BackgroundWorker.sendError","lime/system/BackgroundWorker.hx",98,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(102)
		::cpp::vm::Deque tmp = this->__messageQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::String tmp1 = ::lime::_system::BackgroundWorker_obj::MESSAGE_ERROR;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		tmp->add(tmp1);
		HX_STACK_LINE(103)
		::cpp::vm::Deque tmp2 = this->__messageQueue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		Dynamic tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		tmp2->add(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,sendError,(void))

Void BackgroundWorker_obj::sendProgress( Dynamic message){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","sendProgress",0x5605e7d1,"lime.system.BackgroundWorker.sendProgress","lime/system/BackgroundWorker.hx",119,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(123)
		::cpp::vm::Deque tmp = this->__messageQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		Dynamic tmp1 = message;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,sendProgress,(void))

Void BackgroundWorker_obj::__doWork( ){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","__doWork",0x193122d8,"lime.system.BackgroundWorker.__doWork","lime/system/BackgroundWorker.hx",138,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		::lime::app::Event_Dynamic_Void tmp = this->doWork;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		Dynamic tmp1 = this->__runMessage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		tmp->dispatch(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BackgroundWorker_obj,__doWork,(void))

Void BackgroundWorker_obj::__update( int deltaTime){
{
		HX_STACK_FRAME("lime.system.BackgroundWorker","__update",0x813601e5,"lime.system.BackgroundWorker.__update","lime/system/BackgroundWorker.hx",160,0x4a0958ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(164)
		::cpp::vm::Deque tmp = this->__messageQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		Dynamic tmp1 = tmp->pop(false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		Dynamic message = tmp1;		HX_STACK_VAR(message,"message");
		HX_STACK_LINE(166)
		bool tmp2 = (message != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		if ((tmp2)){
			HX_STACK_LINE(168)
			Dynamic tmp3 = message;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			::String tmp4 = ::lime::_system::BackgroundWorker_obj::MESSAGE_ERROR;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			if ((tmp5)){
				HX_STACK_LINE(170)
				::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(170)
				Dynamic tmp7 = this->__update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(170)
				tmp6->onUpdate->remove(tmp7);
				HX_STACK_LINE(172)
				bool tmp8 = this->canceled;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				if ((tmp9)){
					HX_STACK_LINE(174)
					this->canceled = true;
					HX_STACK_LINE(175)
					::lime::app::Event_Dynamic_Void tmp10 = this->onError;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(175)
					::cpp::vm::Deque tmp11 = this->__messageQueue;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(175)
					Dynamic tmp12 = tmp11->pop(false);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(175)
					tmp10->dispatch(tmp12);
				}
			}
			else{
				HX_STACK_LINE(179)
				Dynamic tmp6 = message;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(179)
				::String tmp7 = ::lime::_system::BackgroundWorker_obj::MESSAGE_COMPLETE;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(179)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				if ((tmp8)){
					HX_STACK_LINE(181)
					::lime::app::Application tmp9 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(181)
					Dynamic tmp10 = this->__update_dyn();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(181)
					tmp9->onUpdate->remove(tmp10);
					HX_STACK_LINE(183)
					bool tmp11 = this->canceled;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(183)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(183)
					if ((tmp12)){
						HX_STACK_LINE(185)
						this->canceled = true;
						HX_STACK_LINE(186)
						::lime::app::Event_Dynamic_Void tmp13 = this->onComplete;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(186)
						::cpp::vm::Deque tmp14 = this->__messageQueue;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(186)
						Dynamic tmp15 = tmp14->pop(false);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(186)
						tmp13->dispatch(tmp15);
					}
				}
				else{
					HX_STACK_LINE(192)
					bool tmp9 = this->canceled;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(192)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(192)
					if ((tmp10)){
						HX_STACK_LINE(194)
						::lime::app::Event_Dynamic_Void tmp11 = this->onProgress;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(194)
						Dynamic tmp12 = message;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(194)
						tmp11->dispatch(tmp12);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BackgroundWorker_obj,__update,(void))

::String BackgroundWorker_obj::MESSAGE_COMPLETE;

::String BackgroundWorker_obj::MESSAGE_ERROR;


BackgroundWorker_obj::BackgroundWorker_obj()
{
}

void BackgroundWorker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BackgroundWorker);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(doWork,"doWork");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(__runMessage,"__runMessage");
	HX_MARK_MEMBER_NAME(__messageQueue,"__messageQueue");
	HX_MARK_MEMBER_NAME(__workerThread,"__workerThread");
	HX_MARK_END_CLASS();
}

void BackgroundWorker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(doWork,"doWork");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(__runMessage,"__runMessage");
	HX_VISIT_MEMBER_NAME(__messageQueue,"__messageQueue");
	HX_VISIT_MEMBER_NAME(__workerThread,"__workerThread");
}

Dynamic BackgroundWorker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { return doWork; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return canceled; }
		if (HX_FIELD_EQ(inName,"__doWork") ) { return __doWork_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendError") ) { return sendError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__runMessage") ) { return __runMessage; }
		if (HX_FIELD_EQ(inName,"sendComplete") ) { return sendComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"sendProgress") ) { return sendProgress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__messageQueue") ) { return __messageQueue; }
		if (HX_FIELD_EQ(inName,"__workerThread") ) { return __workerThread; }
	}
	return super::__Field(inName,inCallProp);
}

bool BackgroundWorker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MESSAGE_ERROR") ) { outValue = MESSAGE_ERROR; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MESSAGE_COMPLETE") ) { outValue = MESSAGE_COMPLETE; return true;  }
	}
	return false;
}

Dynamic BackgroundWorker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { doWork=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__runMessage") ) { __runMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__messageQueue") ) { __messageQueue=inValue.Cast< ::cpp::vm::Deque >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__workerThread") ) { __workerThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BackgroundWorker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MESSAGE_ERROR") ) { MESSAGE_ERROR=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MESSAGE_COMPLETE") ) { MESSAGE_COMPLETE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void BackgroundWorker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	outFields->push(HX_HCSTRING("__runMessage","\xdc","\x40","\x21","\x3d"));
	outFields->push(HX_HCSTRING("__messageQueue","\x6a","\xf9","\x4b","\xd5"));
	outFields->push(HX_HCSTRING("__workerThread","\x08","\x15","\x01","\x36"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BackgroundWorker_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(BackgroundWorker_obj,doWork),HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(BackgroundWorker_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(BackgroundWorker_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(BackgroundWorker_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BackgroundWorker_obj,__runMessage),HX_HCSTRING("__runMessage","\xdc","\x40","\x21","\x3d")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(int)offsetof(BackgroundWorker_obj,__messageQueue),HX_HCSTRING("__messageQueue","\x6a","\xf9","\x4b","\xd5")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(BackgroundWorker_obj,__workerThread),HX_HCSTRING("__workerThread","\x08","\x15","\x01","\x36")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &BackgroundWorker_obj::MESSAGE_COMPLETE,HX_HCSTRING("MESSAGE_COMPLETE","\x91","\x91","\x29","\x31")},
	{hx::fsString,(void *) &BackgroundWorker_obj::MESSAGE_ERROR,HX_HCSTRING("MESSAGE_ERROR","\xd0","\x8b","\x51","\x62")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("__runMessage","\xdc","\x40","\x21","\x3d"),
	HX_HCSTRING("__messageQueue","\x6a","\xf9","\x4b","\xd5"),
	HX_HCSTRING("__workerThread","\x08","\x15","\x01","\x36"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"),
	HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"),
	HX_HCSTRING("sendProgress","\x15","\xc9","\xe7","\xc6"),
	HX_HCSTRING("__doWork","\x1c","\x12","\x30","\xc7"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackgroundWorker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_COMPLETE,"MESSAGE_COMPLETE");
	HX_MARK_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_ERROR,"MESSAGE_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackgroundWorker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_COMPLETE,"MESSAGE_COMPLETE");
	HX_VISIT_MEMBER_NAME(BackgroundWorker_obj::MESSAGE_ERROR,"MESSAGE_ERROR");
};

#endif

hx::Class BackgroundWorker_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MESSAGE_COMPLETE","\x91","\x91","\x29","\x31"),
	HX_HCSTRING("MESSAGE_ERROR","\xd0","\x8b","\x51","\x62"),
	::String(null()) };

void BackgroundWorker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.BackgroundWorker","\x32","\x57","\xa8","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BackgroundWorker_obj::__GetStatic;
	__mClass->mSetStaticField = &BackgroundWorker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackgroundWorker_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void BackgroundWorker_obj::__boot()
{
	MESSAGE_COMPLETE= HX_HCSTRING("__COMPLETE__","\x39","\xbf","\xf1","\x2c");
	MESSAGE_ERROR= HX_HCSTRING("__ERROR__","\xa8","\xe1","\x2c","\xeb");
}

} // end namespace lime
} // end namespace system
