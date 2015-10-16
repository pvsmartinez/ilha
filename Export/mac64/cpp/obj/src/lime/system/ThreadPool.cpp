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
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#include <lime/system/_ThreadPool/ThreadPoolMessage.h>
#endif
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _system{

Void ThreadPool_obj::__construct(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads)
{
HX_STACK_FRAME("lime.system.ThreadPool","new",0xfea2d35e,"lime.system.ThreadPool.new","lime/system/ThreadPool.hx",16,0x8993fbb2)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_minThreads,"minThreads")
HX_STACK_ARG(__o_maxThreads,"maxThreads")
int minThreads = __o_minThreads.Default(0);
int maxThreads = __o_maxThreads.Default(1);
{
	HX_STACK_LINE(31)
	this->__workResult = ::cpp::vm::Deque_obj::__new();
	HX_STACK_LINE(29)
	this->__workIncoming = ::cpp::vm::Deque_obj::__new();
	HX_STACK_LINE(25)
	this->onProgress = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(24)
	this->onError = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(23)
	this->onComplete = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(20)
	this->doWork = ::lime::app::Event_Dynamic_Void_obj::__new();
	HX_STACK_LINE(37)
	this->minThreads = minThreads;
	HX_STACK_LINE(38)
	this->maxThreads = maxThreads;
	HX_STACK_LINE(40)
	this->currentThreads = (int)0;
	HX_STACK_LINE(43)
	this->__workQueued = (int)0;
	HX_STACK_LINE(44)
	this->__workCompleted = (int)0;
}
;
	return null();
}

//ThreadPool_obj::~ThreadPool_obj() { }

Dynamic ThreadPool_obj::__CreateEmpty() { return  new ThreadPool_obj; }
hx::ObjectPtr< ThreadPool_obj > ThreadPool_obj::__new(hx::Null< int >  __o_minThreads,hx::Null< int >  __o_maxThreads)
{  hx::ObjectPtr< ThreadPool_obj > _result_ = new ThreadPool_obj();
	_result_->__construct(__o_minThreads,__o_maxThreads);
	return _result_;}

Dynamic ThreadPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ThreadPool_obj > _result_ = new ThreadPool_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ThreadPool_obj::queue( Dynamic state){
{
		HX_STACK_FRAME("lime.system.ThreadPool","queue",0xd03ecc0f,"lime.system.ThreadPool.queue","lime/system/ThreadPool.hx",64,0x8993fbb2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(68)
		::cpp::vm::Deque tmp = this->__workIncoming;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::lime::_system::_ThreadPool::ThreadPoolMessage tmp1 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::WORK,state);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		tmp->add(tmp1);
		HX_STACK_LINE(69)
		(this->__workQueued)++;
		HX_STACK_LINE(71)
		int tmp2 = this->currentThreads;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		int tmp3 = this->maxThreads;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		if ((tmp4)){
			HX_STACK_LINE(71)
			int tmp6 = this->currentThreads;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			int tmp8 = this->__workQueued;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(71)
			int tmp10 = this->__workCompleted;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			int tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(71)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			tmp5 = (tmp7 < tmp13);
		}
		else{
			HX_STACK_LINE(71)
			tmp5 = false;
		}
		HX_STACK_LINE(71)
		if ((tmp5)){
			HX_STACK_LINE(73)
			(this->currentThreads)++;
			HX_STACK_LINE(74)
			Dynamic tmp6 = this->__doWork_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			::cpp::vm::Thread_obj::create(tmp6);
		}
		HX_STACK_LINE(78)
		::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		Dynamic tmp7 = this->__update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(78)
		bool tmp8 = tmp6->onUpdate->has(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(78)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		if ((tmp9)){
			HX_STACK_LINE(80)
			::lime::app::Application tmp10 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(80)
			Dynamic tmp11 = this->__update_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(80)
			tmp10->onUpdate->add(tmp11,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,queue,(void))

Void ThreadPool_obj::sendComplete( Dynamic state){
{
		HX_STACK_FRAME("lime.system.ThreadPool","sendComplete",0x5f287f63,"lime.system.ThreadPool.sendComplete","lime/system/ThreadPool.hx",93,0x8993fbb2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(96)
		::cpp::vm::Deque tmp = this->__workResult;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::lime::_system::_ThreadPool::ThreadPoolMessage tmp1 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::COMPLETE,state);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,sendComplete,(void))

Void ThreadPool_obj::sendError( Dynamic state){
{
		HX_STACK_FRAME("lime.system.ThreadPool","sendError",0xc461dede,"lime.system.ThreadPool.sendError","lime/system/ThreadPool.hx",104,0x8993fbb2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(107)
		::cpp::vm::Deque tmp = this->__workResult;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::lime::_system::_ThreadPool::ThreadPoolMessage tmp1 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::ERROR,state);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,sendError,(void))

Void ThreadPool_obj::sendProgress( Dynamic state){
{
		HX_STACK_FRAME("lime.system.ThreadPool","sendProgress",0x658b7657,"lime.system.ThreadPool.sendProgress","lime/system/ThreadPool.hx",115,0x8993fbb2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(118)
		::cpp::vm::Deque tmp = this->__workResult;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::lime::_system::_ThreadPool::ThreadPoolMessage tmp1 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::PROGRESS,state);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		tmp->add(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,sendProgress,(void))

Void ThreadPool_obj::__doWork( ){
{
		HX_STACK_FRAME("lime.system.ThreadPool","__doWork",0xcfdf765e,"lime.system.ThreadPool.__doWork","lime/system/ThreadPool.hx",130,0x8993fbb2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(132)
			::cpp::vm::Deque tmp = this->__workIncoming;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(132)
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp1 = tmp->pop(true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			::lime::_system::_ThreadPool::ThreadPoolMessage message = tmp1;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(134)
			bool tmp2 = (message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::WORK);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			if ((tmp2)){
				HX_STACK_LINE(136)
				::lime::app::Event_Dynamic_Void tmp3 = this->doWork;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(136)
				Dynamic tmp4 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(136)
				tmp3->dispatch(tmp4);
			}
			else{
				HX_STACK_LINE(138)
				bool tmp3 = (message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::EXIT);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				if ((tmp3)){
					HX_STACK_LINE(140)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ThreadPool_obj,__doWork,(void))

Void ThreadPool_obj::__update( int deltaTime){
{
		HX_STACK_FRAME("lime.system.ThreadPool","__update",0x37e4556b,"lime.system.ThreadPool.__update","lime/system/ThreadPool.hx",149,0x8993fbb2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(151)
		int tmp = this->__workQueued;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		int tmp1 = this->__workCompleted;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		if ((tmp2)){
			HX_STACK_LINE(153)
			::cpp::vm::Deque tmp3 = this->__workResult;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			::lime::_system::_ThreadPool::ThreadPoolMessage tmp4 = tmp3->pop(false);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			::lime::_system::_ThreadPool::ThreadPoolMessage message = tmp4;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(155)
			while((true)){
				HX_STACK_LINE(155)
				bool tmp5 = (message != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(155)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(155)
				if ((tmp6)){
					HX_STACK_LINE(155)
					break;
				}
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::lime::_system::_ThreadPool::ThreadPoolMessageType _g = message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(157)
					switch( (int)(_g->__Index())){
						case (int)3: {
							HX_STACK_LINE(161)
							::lime::app::Event_Dynamic_Void tmp7 = this->onProgress;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(161)
							Dynamic tmp8 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(161)
							tmp7->dispatch(tmp8);
						}
						;break;
						case (int)0: case (int)1: {
							HX_STACK_LINE(165)
							(this->__workCompleted)++;
							HX_STACK_LINE(167)
							int tmp7 = this->currentThreads;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(167)
							int tmp8 = this->__workQueued;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(167)
							int tmp9 = this->__workCompleted;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(167)
							int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(167)
							bool tmp11 = (tmp7 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(167)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(167)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(167)
							if ((tmp12)){
								HX_STACK_LINE(167)
								int tmp14 = this->currentThreads;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(167)
								int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(167)
								int tmp16 = this->maxThreads;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(167)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(167)
								tmp13 = (tmp15 > tmp17);
							}
							else{
								HX_STACK_LINE(167)
								tmp13 = true;
							}
							HX_STACK_LINE(167)
							if ((tmp13)){
								HX_STACK_LINE(169)
								(this->currentThreads)--;
								HX_STACK_LINE(170)
								::cpp::vm::Deque tmp14 = this->__workIncoming;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(170)
								::lime::_system::_ThreadPool::ThreadPoolMessage tmp15 = ::lime::_system::_ThreadPool::ThreadPoolMessage_obj::__new(::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::EXIT,null());		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(170)
								tmp14->add(tmp15);
							}
							HX_STACK_LINE(174)
							bool tmp14 = (message->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::lime::_system::_ThreadPool::ThreadPoolMessageType_obj::COMPLETE);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(174)
							if ((tmp14)){
								HX_STACK_LINE(176)
								::lime::app::Event_Dynamic_Void tmp15 = this->onComplete;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(176)
								Dynamic tmp16 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(176)
								tmp15->dispatch(tmp16);
							}
							else{
								HX_STACK_LINE(180)
								::lime::app::Event_Dynamic_Void tmp15 = this->onError;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								Dynamic tmp16 = message->__Field(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								tmp15->dispatch(tmp16);
							}
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(188)
				::cpp::vm::Deque tmp7 = this->__workResult;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(188)
				::lime::_system::_ThreadPool::ThreadPoolMessage tmp8 = tmp7->pop(false);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				message = tmp8;
			}
		}
		else{
			HX_STACK_LINE(196)
			int tmp3 = this->currentThreads;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			if ((tmp4)){
				HX_STACK_LINE(196)
				int tmp6 = this->minThreads;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				tmp5 = (tmp7 <= (int)0);
			}
			else{
				HX_STACK_LINE(196)
				tmp5 = false;
			}
			HX_STACK_LINE(196)
			if ((tmp5)){
				HX_STACK_LINE(198)
				::lime::app::Application tmp6 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(198)
				Dynamic tmp7 = this->__update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(198)
				tmp6->onUpdate->remove(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ThreadPool_obj,__update,(void))


ThreadPool_obj::ThreadPool_obj()
{
}

void ThreadPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadPool);
	HX_MARK_MEMBER_NAME(currentThreads,"currentThreads");
	HX_MARK_MEMBER_NAME(doWork,"doWork");
	HX_MARK_MEMBER_NAME(maxThreads,"maxThreads");
	HX_MARK_MEMBER_NAME(minThreads,"minThreads");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(__workCompleted,"__workCompleted");
	HX_MARK_MEMBER_NAME(__workIncoming,"__workIncoming");
	HX_MARK_MEMBER_NAME(__workQueued,"__workQueued");
	HX_MARK_MEMBER_NAME(__workResult,"__workResult");
	HX_MARK_END_CLASS();
}

void ThreadPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentThreads,"currentThreads");
	HX_VISIT_MEMBER_NAME(doWork,"doWork");
	HX_VISIT_MEMBER_NAME(maxThreads,"maxThreads");
	HX_VISIT_MEMBER_NAME(minThreads,"minThreads");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(__workCompleted,"__workCompleted");
	HX_VISIT_MEMBER_NAME(__workIncoming,"__workIncoming");
	HX_VISIT_MEMBER_NAME(__workQueued,"__workQueued");
	HX_VISIT_MEMBER_NAME(__workResult,"__workResult");
}

Dynamic ThreadPool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { return doWork; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__doWork") ) { return __doWork_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendError") ) { return sendError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxThreads") ) { return maxThreads; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { return minThreads; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__workQueued") ) { return __workQueued; }
		if (HX_FIELD_EQ(inName,"__workResult") ) { return __workResult; }
		if (HX_FIELD_EQ(inName,"sendComplete") ) { return sendComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"sendProgress") ) { return sendProgress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentThreads") ) { return currentThreads; }
		if (HX_FIELD_EQ(inName,"__workIncoming") ) { return __workIncoming; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__workCompleted") ) { return __workCompleted; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ThreadPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"doWork") ) { doWork=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxThreads") ) { maxThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minThreads") ) { minThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::lime::app::Event_Dynamic_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__workQueued") ) { __workQueued=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__workResult") ) { __workResult=inValue.Cast< ::cpp::vm::Deque >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentThreads") ) { currentThreads=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__workIncoming") ) { __workIncoming=inValue.Cast< ::cpp::vm::Deque >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__workCompleted") ) { __workCompleted=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentThreads","\x30","\x6b","\x26","\x61"));
	outFields->push(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"));
	outFields->push(HX_HCSTRING("maxThreads","\x25","\x70","\xb6","\xbd"));
	outFields->push(HX_HCSTRING("minThreads","\xf7","\x42","\x49","\x19"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	outFields->push(HX_HCSTRING("__workCompleted","\x5a","\x76","\x64","\x29"));
	outFields->push(HX_HCSTRING("__workIncoming","\xf7","\x3a","\x04","\x52"));
	outFields->push(HX_HCSTRING("__workQueued","\x84","\xf5","\xb2","\xef"));
	outFields->push(HX_HCSTRING("__workResult","\xae","\x0c","\xe6","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ThreadPool_obj,currentThreads),HX_HCSTRING("currentThreads","\x30","\x6b","\x26","\x61")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,doWork),HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,maxThreads),HX_HCSTRING("maxThreads","\x25","\x70","\xb6","\xbd")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,minThreads),HX_HCSTRING("minThreads","\xf7","\x42","\x49","\x19")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,onError),HX_HCSTRING("onError","\x29","\x6a","\x67","\x09")},
	{hx::fsObject /*::lime::app::Event_Dynamic_Void*/ ,(int)offsetof(ThreadPool_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,__workCompleted),HX_HCSTRING("__workCompleted","\x5a","\x76","\x64","\x29")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(int)offsetof(ThreadPool_obj,__workIncoming),HX_HCSTRING("__workIncoming","\xf7","\x3a","\x04","\x52")},
	{hx::fsInt,(int)offsetof(ThreadPool_obj,__workQueued),HX_HCSTRING("__workQueued","\x84","\xf5","\xb2","\xef")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(int)offsetof(ThreadPool_obj,__workResult),HX_HCSTRING("__workResult","\xae","\x0c","\xe6","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentThreads","\x30","\x6b","\x26","\x61"),
	HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"),
	HX_HCSTRING("maxThreads","\x25","\x70","\xb6","\xbd"),
	HX_HCSTRING("minThreads","\xf7","\x42","\x49","\x19"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("__workCompleted","\x5a","\x76","\x64","\x29"),
	HX_HCSTRING("__workIncoming","\xf7","\x3a","\x04","\x52"),
	HX_HCSTRING("__workQueued","\x84","\xf5","\xb2","\xef"),
	HX_HCSTRING("__workResult","\xae","\x0c","\xe6","\x28"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"),
	HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"),
	HX_HCSTRING("sendProgress","\x15","\xc9","\xe7","\xc6"),
	HX_HCSTRING("__doWork","\x1c","\x12","\x30","\xc7"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPool_obj::__mClass,"__mClass");
};

#endif

hx::Class ThreadPool_obj::__mClass;

void ThreadPool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.ThreadPool","\x6c","\x8c","\x6a","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThreadPool_obj >;
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

} // end namespace lime
} // end namespace system
