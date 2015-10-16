#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
namespace openfl{
namespace events{

Void ProgressEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal)
{
HX_STACK_FRAME("openfl.events.ProgressEvent","new",0xeed66288,"openfl.events.ProgressEvent.new","openfl/events/ProgressEvent.hx",67,0xea3bf808)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_bytesLoaded,"bytesLoaded")
HX_STACK_ARG(__o_bytesTotal,"bytesTotal")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
Float bytesLoaded = __o_bytesLoaded.Default(0);
Float bytesTotal = __o_bytesTotal.Default(0);
{
	HX_STACK_LINE(69)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(71)
	this->bytesLoaded = bytesLoaded;
	HX_STACK_LINE(72)
	this->bytesTotal = bytesTotal;
}
;
	return null();
}

//ProgressEvent_obj::~ProgressEvent_obj() { }

Dynamic ProgressEvent_obj::__CreateEmpty() { return  new ProgressEvent_obj; }
hx::ObjectPtr< ProgressEvent_obj > ProgressEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal)
{  hx::ObjectPtr< ProgressEvent_obj > _result_ = new ProgressEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
	return _result_;}

Dynamic ProgressEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgressEvent_obj > _result_ = new ProgressEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::events::Event ProgressEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.ProgressEvent","clone",0xca4c7f85,"openfl.events.ProgressEvent.clone","openfl/events/ProgressEvent.hx",77,0xea3bf808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	Float tmp3 = this->bytesLoaded;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	Float tmp4 = this->bytesTotal;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	::openfl::events::ProgressEvent tmp5 = ::openfl::events::ProgressEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	return tmp5;
}


::String ProgressEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.ProgressEvent","toString",0x8ba16d84,"openfl.events.ProgressEvent.toString","openfl/events/ProgressEvent.hx",84,0xea3bf808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	::String tmp1 = (HX_HCSTRING("[ProgressEvent type=\"","\x0d","\xe1","\xaa","\xe9") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(86)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	::String tmp10 = (tmp9 + HX_HCSTRING(" bytesLoaded=","\x8d","\x3f","\x5f","\xaf"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	Float tmp11 = this->bytesLoaded;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	::String tmp13 = (tmp12 + HX_HCSTRING(" bytesTotal=","\xa4","\xca","\x1f","\x11"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	Float tmp14 = this->bytesTotal;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(86)
	::String tmp16 = (tmp15 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(86)
	return tmp16;
}


::String ProgressEvent_obj::PROGRESS;

::String ProgressEvent_obj::SOCKET_DATA;


ProgressEvent_obj::ProgressEvent_obj()
{
}

Dynamic ProgressEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
	}
	return super::__Field(inName,inCallProp);
}

bool ProgressEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"PROGRESS") ) { outValue = PROGRESS; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SOCKET_DATA") ) { outValue = SOCKET_DATA; return true;  }
	}
	return false;
}

Dynamic ProgressEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ProgressEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"PROGRESS") ) { PROGRESS=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SOCKET_DATA") ) { SOCKET_DATA=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void ProgressEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ProgressEvent_obj::PROGRESS,HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf")},
	{hx::fsString,(void *) &ProgressEvent_obj::SOCKET_DATA,HX_HCSTRING("SOCKET_DATA","\x76","\x39","\x86","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
};

#endif

hx::Class ProgressEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf"),
	HX_HCSTRING("SOCKET_DATA","\x76","\x39","\x86","\xc1"),
	::String(null()) };

void ProgressEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ProgressEvent","\x96","\xbe","\xc8","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProgressEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ProgressEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressEvent_obj >;
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

void ProgressEvent_obj::__boot()
{
	PROGRESS= HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86");
	SOCKET_DATA= HX_HCSTRING("socketData","\x7d","\x63","\xde","\xb1");
}

} // end namespace openfl
} // end namespace events
