#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
namespace openfl{
namespace events{

Void Event_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl.events.Event","new",0x2731c6f5,"openfl.events.Event.new","openfl/events/Event.hx",358,0x7220a03b)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(360)
	this->type = type;
	HX_STACK_LINE(361)
	this->bubbles = bubbles;
	HX_STACK_LINE(362)
	this->cancelable = cancelable;
	HX_STACK_LINE(363)
	this->eventPhase = ::openfl::events::EventPhase_obj::AT_TARGET;
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable);
	return _result_;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::openfl::events::Event Event_obj::clone( ){
	HX_STACK_FRAME("openfl.events.Event","clone",0x5b9b9932,"openfl.events.Event.clone","openfl/events/Event.hx",391,0x7220a03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(393)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(393)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(393)
	::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(393)
	::openfl::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(394)
	::openfl::events::EventPhase tmp4 = this->eventPhase;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(394)
	event->eventPhase = tmp4;
	HX_STACK_LINE(395)
	Dynamic tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(395)
	event->target = tmp5;
	HX_STACK_LINE(396)
	Dynamic tmp6 = this->currentTarget;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(396)
	event->currentTarget = tmp6;
	HX_STACK_LINE(397)
	::openfl::events::Event tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(397)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,clone,return )

bool Event_obj::isDefaultPrevented( ){
	HX_STACK_FRAME("openfl.events.Event","isDefaultPrevented",0x5475e94b,"openfl.events.Event.isDefaultPrevented","openfl/events/Event.hx",410,0x7220a03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(412)
	bool tmp = this->__preventDefault;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,isDefaultPrevented,return )

Void Event_obj::preventDefault( ){
{
		HX_STACK_FRAME("openfl.events.Event","preventDefault",0xdba9c454,"openfl.events.Event.preventDefault","openfl/events/Event.hx",423,0x7220a03b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		bool tmp = this->cancelable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(425)
		if ((tmp)){
			HX_STACK_LINE(427)
			this->__preventDefault = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,preventDefault,(void))

Void Event_obj::stopImmediatePropagation( ){
{
		HX_STACK_FRAME("openfl.events.Event","stopImmediatePropagation",0xa67252c8,"openfl.events.Event.stopImmediatePropagation","openfl/events/Event.hx",445,0x7220a03b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(447)
		this->__isCancelled = true;
		HX_STACK_LINE(448)
		this->__isCancelledNow = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

Void Event_obj::stopPropagation( ){
{
		HX_STACK_FRAME("openfl.events.Event","stopPropagation",0xb07183ff,"openfl.events.Event.stopPropagation","openfl/events/Event.hx",468,0x7220a03b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(468)
		this->__isCancelled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

::String Event_obj::toString( ){
	HX_STACK_FRAME("openfl.events.Event","toString",0x6e61ddf7,"openfl.events.Event.toString","openfl/events/Event.hx",482,0x7220a03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(484)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	::String tmp1 = (HX_HCSTRING("[Event type=\"","\xc0","\x5a","\x68","\xe0") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(484)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(484)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(484)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(484)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(484)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(484)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(484)
	::String tmp10 = (tmp9 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(484)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CANCEL;

::String Event_obj::CHANGE;

::String Event_obj::CLOSE;

::String Event_obj::COMPLETE;

::String Event_obj::CONNECT;

::String Event_obj::CONTEXT3D_CREATE;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::ID3;

::String Event_obj::INIT;

::String Event_obj::MOUSE_LEAVE;

::String Event_obj::OPEN;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SCROLL;

::String Event_obj::SELECT;

::String Event_obj::SOUND_COMPLETE;

::String Event_obj::TAB_CHILDREN_CHANGE;

::String Event_obj::TAB_ENABLED_CHANGE;

::String Event_obj::TAB_INDEX_CHANGE;

::String Event_obj::UNLOAD;


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(bubbles,"bubbles");
	HX_MARK_MEMBER_NAME(cancelable,"cancelable");
	HX_MARK_MEMBER_NAME(currentTarget,"currentTarget");
	HX_MARK_MEMBER_NAME(eventPhase,"eventPhase");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_MARK_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_MARK_MEMBER_NAME(__preventDefault,"__preventDefault");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bubbles,"bubbles");
	HX_VISIT_MEMBER_NAME(cancelable,"cancelable");
	HX_VISIT_MEMBER_NAME(currentTarget,"currentTarget");
	HX_VISIT_MEMBER_NAME(eventPhase,"eventPhase");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_VISIT_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_VISIT_MEMBER_NAME(__preventDefault,"__preventDefault");
}

Dynamic Event_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { return bubbles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { return cancelable; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { return eventPhase; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return currentTarget; }
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { return __isCancelled; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preventDefault") ) { return preventDefault_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { return __isCancelledNow; }
		if (HX_FIELD_EQ(inName,"__preventDefault") ) { return __preventDefault; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isDefaultPrevented") ) { return isDefaultPrevented_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Event_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { outValue = ID3; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { outValue = INIT; return true;  }
		if (HX_FIELD_EQ(inName,"OPEN") ) { outValue = OPEN; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { outValue = ADDED; return true;  }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { outValue = CLOSE; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { outValue = CANCEL; return true;  }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { outValue = CHANGE; return true;  }
		if (HX_FIELD_EQ(inName,"RENDER") ) { outValue = RENDER; return true;  }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { outValue = RESIZE; return true;  }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { outValue = SCROLL; return true;  }
		if (HX_FIELD_EQ(inName,"SELECT") ) { outValue = SELECT; return true;  }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { outValue = UNLOAD; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { outValue = CONNECT; return true;  }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { outValue = REMOVED; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { outValue = ACTIVATE; return true;  }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { outValue = COMPLETE; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { outValue = DEACTIVATE; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { outValue = ENTER_FRAME; return true;  }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { outValue = MOUSE_LEAVE; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { outValue = ADDED_TO_STAGE; return true;  }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { outValue = SOUND_COMPLETE; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { outValue = CONTEXT3D_CREATE; return true;  }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { outValue = TAB_INDEX_CHANGE; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { outValue = REMOVED_FROM_STAGE; return true;  }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { outValue = TAB_ENABLED_CHANGE; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { outValue = TAB_CHILDREN_CHANGE; return true;  }
	}
	return false;
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { eventPhase=inValue.Cast< ::openfl::events::EventPhase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { __isCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { __isCancelledNow=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__preventDefault") ) { __preventDefault=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Event_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { ID3=ioValue.Cast< ::String >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { INIT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { ADDED=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { RENDER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { SCROLL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { UNLOAD=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { CONNECT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { REMOVED=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { ACTIVATE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { DEACTIVATE=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { ENTER_FRAME=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { MOUSE_LEAVE=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { ADDED_TO_STAGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { SOUND_COMPLETE=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { CONTEXT3D_CREATE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { TAB_INDEX_CHANGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { REMOVED_FROM_STAGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { TAB_ENABLED_CHANGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { TAB_CHILDREN_CHANGE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61"));
	outFields->push(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4"));
	outFields->push(HX_HCSTRING("currentTarget","\x6a","\x74","\x49","\x6a"));
	outFields->push(HX_HCSTRING("eventPhase","\xc1","\x31","\x44","\x3e"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("__isCancelled","\x27","\x7e","\x2d","\x49"));
	outFields->push(HX_HCSTRING("__isCancelledNow","\x2f","\x25","\xd8","\x53"));
	outFields->push(HX_HCSTRING("__preventDefault","\xe9","\xb7","\xe4","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,bubbles),HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")},
	{hx::fsBool,(int)offsetof(Event_obj,cancelable),HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,currentTarget),HX_HCSTRING("currentTarget","\x6a","\x74","\x49","\x6a")},
	{hx::fsObject /*::openfl::events::EventPhase*/ ,(int)offsetof(Event_obj,eventPhase),HX_HCSTRING("eventPhase","\xc1","\x31","\x44","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsString,(int)offsetof(Event_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelled),HX_HCSTRING("__isCancelled","\x27","\x7e","\x2d","\x49")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelledNow),HX_HCSTRING("__isCancelledNow","\x2f","\x25","\xd8","\x53")},
	{hx::fsBool,(int)offsetof(Event_obj,__preventDefault),HX_HCSTRING("__preventDefault","\xe9","\xb7","\xe4","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Event_obj::ACTIVATE,HX_HCSTRING("ACTIVATE","\xb3","\xab","\x31","\x3f")},
	{hx::fsString,(void *) &Event_obj::ADDED,HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a")},
	{hx::fsString,(void *) &Event_obj::ADDED_TO_STAGE,HX_HCSTRING("ADDED_TO_STAGE","\x59","\x58","\xdb","\x1a")},
	{hx::fsString,(void *) &Event_obj::CANCEL,HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a")},
	{hx::fsString,(void *) &Event_obj::CHANGE,HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69")},
	{hx::fsString,(void *) &Event_obj::CLOSE,HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6")},
	{hx::fsString,(void *) &Event_obj::COMPLETE,HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9")},
	{hx::fsString,(void *) &Event_obj::CONNECT,HX_HCSTRING("CONNECT","\xca","\x0f","\x54","\x95")},
	{hx::fsString,(void *) &Event_obj::CONTEXT3D_CREATE,HX_HCSTRING("CONTEXT3D_CREATE","\x5b","\xc4","\x3d","\x41")},
	{hx::fsString,(void *) &Event_obj::DEACTIVATE,HX_HCSTRING("DEACTIVATE","\x34","\xd0","\x0a","\x2e")},
	{hx::fsString,(void *) &Event_obj::ENTER_FRAME,HX_HCSTRING("ENTER_FRAME","\x46","\xa6","\xab","\xc6")},
	{hx::fsString,(void *) &Event_obj::ID3,HX_HCSTRING("ID3","\xf8","\x9f","\x37","\x00")},
	{hx::fsString,(void *) &Event_obj::INIT,HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30")},
	{hx::fsString,(void *) &Event_obj::MOUSE_LEAVE,HX_HCSTRING("MOUSE_LEAVE","\xdd","\xd3","\xd5","\xd0")},
	{hx::fsString,(void *) &Event_obj::OPEN,HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34")},
	{hx::fsString,(void *) &Event_obj::REMOVED,HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72")},
	{hx::fsString,(void *) &Event_obj::REMOVED_FROM_STAGE,HX_HCSTRING("REMOVED_FROM_STAGE","\x68","\xcc","\x72","\xdb")},
	{hx::fsString,(void *) &Event_obj::RENDER,HX_HCSTRING("RENDER","\x56","\x17","\xac","\xb7")},
	{hx::fsString,(void *) &Event_obj::RESIZE,HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba")},
	{hx::fsString,(void *) &Event_obj::SCROLL,HX_HCSTRING("SCROLL","\x0d","\x84","\xe7","\xf9")},
	{hx::fsString,(void *) &Event_obj::SELECT,HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c")},
	{hx::fsString,(void *) &Event_obj::SOUND_COMPLETE,HX_HCSTRING("SOUND_COMPLETE","\x89","\x35","\x98","\xf1")},
	{hx::fsString,(void *) &Event_obj::TAB_CHILDREN_CHANGE,HX_HCSTRING("TAB_CHILDREN_CHANGE","\x66","\x8e","\x83","\x1c")},
	{hx::fsString,(void *) &Event_obj::TAB_ENABLED_CHANGE,HX_HCSTRING("TAB_ENABLED_CHANGE","\xd8","\x4a","\xcd","\x8b")},
	{hx::fsString,(void *) &Event_obj::TAB_INDEX_CHANGE,HX_HCSTRING("TAB_INDEX_CHANGE","\xe7","\xbd","\xc6","\xb6")},
	{hx::fsString,(void *) &Event_obj::UNLOAD,HX_HCSTRING("UNLOAD","\xff","\x4c","\x0f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61"),
	HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4"),
	HX_HCSTRING("currentTarget","\x6a","\x74","\x49","\x6a"),
	HX_HCSTRING("eventPhase","\xc1","\x31","\x44","\x3e"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("__isCancelled","\x27","\x7e","\x2d","\x49"),
	HX_HCSTRING("__isCancelledNow","\x2f","\x25","\xd8","\x53"),
	HX_HCSTRING("__preventDefault","\xe9","\xb7","\xe4","\x9b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("isDefaultPrevented","\x40","\x30","\x27","\x04"),
	HX_HCSTRING("preventDefault","\xc9","\x2c","\xa5","\x67"),
	HX_HCSTRING("stopImmediatePropagation","\x7d","\xbf","\x66","\x5b"),
	HX_HCSTRING("stopPropagation","\xea","\x81","\x71","\xa0"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_MARK_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_VISIT_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_VISIT_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_VISIT_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_VISIT_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

#endif

hx::Class Event_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACTIVATE","\xb3","\xab","\x31","\x3f"),
	HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a"),
	HX_HCSTRING("ADDED_TO_STAGE","\x59","\x58","\xdb","\x1a"),
	HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a"),
	HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69"),
	HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6"),
	HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9"),
	HX_HCSTRING("CONNECT","\xca","\x0f","\x54","\x95"),
	HX_HCSTRING("CONTEXT3D_CREATE","\x5b","\xc4","\x3d","\x41"),
	HX_HCSTRING("DEACTIVATE","\x34","\xd0","\x0a","\x2e"),
	HX_HCSTRING("ENTER_FRAME","\x46","\xa6","\xab","\xc6"),
	HX_HCSTRING("ID3","\xf8","\x9f","\x37","\x00"),
	HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30"),
	HX_HCSTRING("MOUSE_LEAVE","\xdd","\xd3","\xd5","\xd0"),
	HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34"),
	HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72"),
	HX_HCSTRING("REMOVED_FROM_STAGE","\x68","\xcc","\x72","\xdb"),
	HX_HCSTRING("RENDER","\x56","\x17","\xac","\xb7"),
	HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba"),
	HX_HCSTRING("SCROLL","\x0d","\x84","\xe7","\xf9"),
	HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c"),
	HX_HCSTRING("SOUND_COMPLETE","\x89","\x35","\x98","\xf1"),
	HX_HCSTRING("TAB_CHILDREN_CHANGE","\x66","\x8e","\x83","\x1c"),
	HX_HCSTRING("TAB_ENABLED_CHANGE","\xd8","\x4a","\xcd","\x8b"),
	HX_HCSTRING("TAB_INDEX_CHANGE","\xe7","\xbd","\xc6","\xb6"),
	HX_HCSTRING("UNLOAD","\xff","\x4c","\x0f","\x18"),
	::String(null()) };

void Event_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.Event","\x83","\x28","\xc4","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Event_obj::__GetStatic;
	__mClass->mSetStaticField = &Event_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Event_obj >;
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

void Event_obj::__boot()
{
	ACTIVATE= HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5");
	ADDED= HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c");
	ADDED_TO_STAGE= HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c");
	CANCEL= HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8");
	CHANGE= HX_HCSTRING("change","\x70","\x91","\x72","\xb7");
	CLOSE= HX_HCSTRING("close","\xb8","\x17","\x63","\x48");
	COMPLETE= HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f");
	CONNECT= HX_HCSTRING("connect","\xea","\x3b","\x80","\x15");
	CONTEXT3D_CREATE= HX_HCSTRING("context3DCreate","\x7c","\xbf","\x59","\x7b");
	DEACTIVATE= HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c");
	ENTER_FRAME= HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02");
	ID3= HX_HCSTRING("id3","\xf8","\x03","\x50","\x00");
	INIT= HX_HCSTRING("init","\x10","\x3b","\xbb","\x45");
	MOUSE_LEAVE= HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90");
	OPEN= HX_HCSTRING("open","\xca","\x03","\xb4","\x49");
	REMOVED= HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3");
	REMOVED_FROM_STAGE= HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba");
	RENDER= HX_HCSTRING("render","\x56","\x6b","\x29","\x05");
	RESIZE= HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08");
	SCROLL= HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47");
	SELECT= HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a");
	SOUND_COMPLETE= HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c");
	TAB_CHILDREN_CHANGE= HX_HCSTRING("tabChildrenChange","\x44","\x91","\xb5","\xde");
	TAB_ENABLED_CHANGE= HX_HCSTRING("tabEnabledChange","\x3c","\x45","\x98","\x72");
	TAB_INDEX_CHANGE= HX_HCSTRING("tabIndexChange","\xcd","\x1d","\x78","\x90");
	UNLOAD= HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65");
}

} // end namespace openfl
} // end namespace events
