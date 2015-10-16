#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event_Dynamic_Void
#include <lime/app/Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif
namespace lime{
namespace app{

Void Future_obj::__construct(Dynamic work)
{
HX_STACK_FRAME("lime.app.Future","new",0xc0e3b2bb,"lime.app.Future.new","lime/app/Future.hx",25,0x058e0853)
HX_STACK_THIS(this)
HX_STACK_ARG(work,"work")
{
	HX_STACK_LINE(27)
	bool tmp = (work != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	if ((tmp)){
		HX_STACK_LINE(29)
		::lime::_system::ThreadPool tmp1 = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(31)
			::lime::_system::ThreadPool tmp3 = ::lime::_system::ThreadPool_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			::lime::app::Future_obj::__threadPool = tmp3;
			HX_STACK_LINE(32)
			::lime::_system::ThreadPool tmp4 = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			Dynamic tmp5 = ::lime::app::Future_obj::threadPool_doWork_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			tmp4->__Field(HX_HCSTRING("doWork","\xfc","\xa6","\x00","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp5,null(),null());
			HX_STACK_LINE(33)
			::lime::_system::ThreadPool tmp6 = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			Dynamic tmp7 = ::lime::app::Future_obj::threadPool_onComplete_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			tmp6->__Field(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp7,null(),null());
			HX_STACK_LINE(34)
			::lime::_system::ThreadPool tmp8 = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			Dynamic tmp9 = ::lime::app::Future_obj::threadPool_onError_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			tmp8->__Field(HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp9,null(),null());
		}
		HX_STACK_LINE(38)
		::lime::app::Promise tmp3 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		::lime::app::Promise promise = tmp3;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(39)
		promise->future = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(41)
		::lime::_system::ThreadPool tmp4 = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_2_1{
			inline static Dynamic Block( ::lime::app::Promise &promise,Dynamic &work){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Future.hx",41,0x058e0853)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , promise,false);
					__result->Add(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e") , work,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		Dynamic tmp5 = _Function_2_1::Block(promise,work);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		tmp4->__Field(HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"), hx::paccDynamic )(tmp5);
	}
}
;
	return null();
}

//Future_obj::~Future_obj() { }

Dynamic Future_obj::__CreateEmpty() { return  new Future_obj; }
hx::ObjectPtr< Future_obj > Future_obj::__new(Dynamic work)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(work);
	return _result_;}

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::lime::app::Future Future_obj::onComplete( Dynamic listener){
	HX_STACK_FRAME("lime.app.Future","onComplete",0x3a7dc3fd,"lime.app.Future.onComplete","lime/app/Future.hx",48,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(50)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(52)
		bool tmp1 = this->__completed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(54)
			Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			listener(tmp2).Cast< Void >();
		}
		else{
			HX_STACK_LINE(56)
			bool tmp2 = this->__errored;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			if ((tmp3)){
				HX_STACK_LINE(58)
				bool tmp4 = (this->__completeListeners == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				if ((tmp4)){
					HX_STACK_LINE(60)
					this->__completeListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(64)
				Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				this->__completeListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	HX_STACK_LINE(70)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

::lime::app::Future Future_obj::onError( Dynamic listener){
	HX_STACK_FRAME("lime.app.Future","onError",0xb2071604,"lime.app.Future.onError","lime/app/Future.hx",75,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(77)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(79)
		bool tmp1 = this->__errored;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(81)
			Dynamic tmp2 = this->__errorMessage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			listener(tmp2).Cast< Void >();
		}
		else{
			HX_STACK_LINE(83)
			bool tmp2 = this->__completed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			if ((tmp3)){
				HX_STACK_LINE(85)
				bool tmp4 = (this->__errorListeners == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				if ((tmp4)){
					HX_STACK_LINE(87)
					this->__errorListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(91)
				Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				this->__errorListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	HX_STACK_LINE(97)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

::lime::app::Future Future_obj::onProgress( Dynamic listener){
	HX_STACK_FRAME("lime.app.Future","onProgress",0x40e0baf1,"lime.app.Future.onProgress","lime/app/Future.hx",102,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(104)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	if ((tmp)){
		HX_STACK_LINE(106)
		bool tmp1 = (this->__progressListeners == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(108)
			this->__progressListeners = Dynamic( Array_obj<Dynamic>::__new() );
		}
		HX_STACK_LINE(112)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		this->__progressListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(116)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

::lime::app::Future Future_obj::then( Dynamic next){
	HX_STACK_FRAME("lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",121,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(next,"next")
	HX_STACK_LINE(123)
	bool tmp = this->__completed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	if ((tmp)){
		HX_STACK_LINE(125)
		Dynamic tmp1 = this->value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		::lime::app::Future tmp2 = next(tmp1).Cast< ::lime::app::Future >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		return tmp2;
	}
	else{
		HX_STACK_LINE(127)
		bool tmp1 = this->__errored;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		if ((tmp1)){
			HX_STACK_LINE(129)
			::lime::app::Future tmp2 = ::lime::app::Future_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(129)
			::lime::app::Future future = tmp2;		HX_STACK_VAR(future,"future");
			HX_STACK_LINE(130)
			Dynamic tmp3 = this->__errorMessage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			future->onError(tmp3);
			HX_STACK_LINE(131)
			::lime::app::Future tmp4 = future;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			return tmp4;
		}
		else{
			HX_STACK_LINE(135)
			::lime::app::Promise tmp2 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(135)
			::lime::app::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
			HX_STACK_LINE(137)
			Dynamic tmp3 = promise->error_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			this->onError(tmp3);
			HX_STACK_LINE(138)
			Dynamic tmp4 = promise->progress_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			this->onProgress(tmp4);

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::lime::app::Promise,promise,Dynamic,next)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/app/Future.hx",140,0x058e0853)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(142)
					Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(142)
					::lime::app::Future tmp6 = next(tmp5).Cast< ::lime::app::Future >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(142)
					::lime::app::Future future = tmp6;		HX_STACK_VAR(future,"future");
					HX_STACK_LINE(143)
					Dynamic tmp7 = promise->error_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(143)
					future->onError(tmp7);
					HX_STACK_LINE(144)
					Dynamic tmp8 = promise->complete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(144)
					future->onComplete(tmp8);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(140)
			this->onComplete( Dynamic(new _Function_3_1(promise,next)));
			HX_STACK_LINE(148)
			::lime::app::Future tmp5 = promise->future;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			return tmp5;
		}
	}
	HX_STACK_LINE(123)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

bool Future_obj::get_isCompleted( ){
	HX_STACK_FRAME("lime.app.Future","get_isCompleted",0x83e28eb3,"lime.app.Future.get_isCompleted","lime/app/Future.hx",199,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	bool tmp = this->__completed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	if ((tmp1)){
		HX_STACK_LINE(201)
		tmp2 = this->__errored;
	}
	else{
		HX_STACK_LINE(201)
		tmp2 = true;
	}
	HX_STACK_LINE(201)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,get_isCompleted,return )

::lime::_system::ThreadPool Future_obj::__threadPool;

Void Future_obj::threadPool_doWork( Dynamic state){
{
		HX_STACK_FRAME("lime.app.Future","threadPool_doWork",0x65b25430,"lime.app.Future.threadPool_doWork","lime/app/Future.hx",164,0x058e0853)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(164)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(166)
			Dynamic tmp = state->__Field(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(166)
			Dynamic result = tmp;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(167)
			::lime::_system::ThreadPool tmp1 = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp1,"tmp1");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &result,Dynamic &state){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Future.hx",167,0x058e0853)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic ),false);
						__result->Add(HX_HCSTRING("result","\xdd","\x68","\x84","\x08") , result,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(167)
			Dynamic tmp2 = _Function_2_1::Block(result,state);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			tmp1->__Field(HX_HCSTRING("sendComplete","\x21","\xd2","\x84","\xc0"), hx::paccDynamic )(tmp2);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(171)
					::lime::_system::ThreadPool tmp = ::lime::app::Future_obj::__threadPool;		HX_STACK_VAR(tmp,"tmp");
					struct _Function_2_1{
						inline static Dynamic Block( Dynamic &e,Dynamic &state){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Future.hx",171,0x058e0853)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic ),false);
								__result->Add(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73") , e,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(171)
					Dynamic tmp1 = _Function_2_1::Block(e,state);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(171)
					tmp->__Field(HX_HCSTRING("sendError","\x60","\x89","\x99","\x33"), hx::paccDynamic )(tmp1);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,threadPool_doWork,(void))

Void Future_obj::threadPool_onComplete( Dynamic state){
{
		HX_STACK_FRAME("lime.app.Future","threadPool_onComplete",0x93e12c2c,"lime.app.Future.threadPool_onComplete","lime/app/Future.hx",180,0x058e0853)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(180)
		state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic )->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic )(state->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,threadPool_onComplete,(void))

Void Future_obj::threadPool_onError( Dynamic state){
{
		HX_STACK_FRAME("lime.app.Future","threadPool_onError",0x9e2d4a75,"lime.app.Future.threadPool_onError","lime/app/Future.hx",187,0x058e0853)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(187)
		state->__Field(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7"), hx::paccDynamic )->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic )(state->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,threadPool_onError,(void))


Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(isCompleted,"isCompleted");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(__completed,"__completed");
	HX_MARK_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(__errored,"__errored");
	HX_MARK_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(__errorMessage,"__errorMessage");
	HX_MARK_MEMBER_NAME(__progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isCompleted,"isCompleted");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(__completed,"__completed");
	HX_VISIT_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(__errored,"__errored");
	HX_VISIT_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(__errorMessage,"__errorMessage");
	HX_VISIT_MEMBER_NAME(__progressListeners,"__progressListeners");
}

Dynamic Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { return __errored; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { return inCallProp == hx::paccAlways ? get_isCompleted() : isCompleted; }
		if (HX_FIELD_EQ(inName,"__completed") ) { return __completed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { return __errorMessage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isCompleted") ) { return get_isCompleted_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return __errorListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return __completeListeners; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return __progressListeners; }
	}
	return super::__Field(inName,inCallProp);
}

bool Future_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__threadPool") ) { outValue = __threadPool; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true;  }
	}
	return false;
}

Dynamic Future_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__errored") ) { __errored=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCompleted") ) { isCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__completed") ) { __completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__errorMessage") ) { __errorMessage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { __errorListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { __completeListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { __progressListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Future_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__threadPool") ) { __threadPool=ioValue.Cast< ::lime::_system::ThreadPool >(); return true; }
	}
	return false;
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Future_obj,isCompleted),HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(Future_obj,__completed),HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsBool,(int)offsetof(Future_obj,__errored),HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,__errorMessage),HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_system::ThreadPool*/ ,(void *) &Future_obj::__threadPool,HX_HCSTRING("__threadPool","\xe6","\xcf","\xb8","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isCompleted","\x41","\x58","\xb9","\x2d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completed","\x6b","\xea","\x64","\x7d"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errored","\x07","\xf7","\x58","\x6b"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__errorMessage","\xff","\x9d","\x01","\x6c"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	HX_HCSTRING("get_isCompleted","\xd8","\x0f","\x9b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Future_obj::__threadPool,"__threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Future_obj::__threadPool,"__threadPool");
};

#endif

hx::Class Future_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__threadPool","\xe6","\xcf","\xb8","\x7e"),
	HX_HCSTRING("threadPool_doWork","\x95","\x28","\x69","\x50"),
	HX_HCSTRING("threadPool_onComplete","\x11","\x97","\x0a","\x2c"),
	HX_HCSTRING("threadPool_onError","\x70","\x4e","\x70","\x13"),
	::String(null()) };

void Future_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Future","\x49","\x39","\x57","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_obj::__GetStatic;
	__mClass->mSetStaticField = &Future_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
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
} // end namespace app
