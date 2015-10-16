#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void TextEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text)
{
HX_STACK_FRAME("openfl.events.TextEvent","new",0x29e58508,"openfl.events.TextEvent.new","openfl/events/TextEvent.hx",63,0x23b91588)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_text,"text")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(65)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(67)
	this->text = text;
}
;
	return null();
}

//TextEvent_obj::~TextEvent_obj() { }

Dynamic TextEvent_obj::__CreateEmpty() { return  new TextEvent_obj; }
hx::ObjectPtr< TextEvent_obj > TextEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text)
{  hx::ObjectPtr< TextEvent_obj > _result_ = new TextEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text);
	return _result_;}

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEvent_obj > _result_ = new TextEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::events::Event TextEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.TextEvent","clone",0x41494205,"openfl.events.TextEvent.clone","openfl/events/TextEvent.hx",72,0x23b91588)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	::openfl::events::TextEvent tmp4 = ::openfl::events::TextEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	return tmp4;
}


::String TextEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.TextEvent","toString",0x2a253b04,"openfl.events.TextEvent.toString","openfl/events/TextEvent.hx",79,0x23b91588)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::String tmp1 = (HX_HCSTRING("[TextEvent type=\"","\x8d","\xdc","\x32","\xa1") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(81)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(81)
	::String tmp10 = (tmp9 + HX_HCSTRING(" text=\"","\x52","\x1f","\x37","\x0b"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(81)
	::String tmp11 = this->text;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(81)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(81)
	::String tmp13 = (tmp12 + HX_HCSTRING("\"]","\xfb","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(81)
	return tmp13;
}


::String TextEvent_obj::LINK;

::String TextEvent_obj::TEXT_INPUT;


TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(text,"text");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LINK") ) { outValue = LINK; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TEXT_INPUT") ) { outValue = TEXT_INPUT; return true;  }
	}
	return false;
}

Dynamic TextEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LINK") ) { LINK=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TEXT_INPUT") ) { TEXT_INPUT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TextEvent_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TextEvent_obj::LINK,HX_HCSTRING("LINK","\xfa","\xdf","\x73","\x32")},
	{hx::fsString,(void *) &TextEvent_obj::TEXT_INPUT,HX_HCSTRING("TEXT_INPUT","\x98","\x17","\xd6","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_MARK_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::LINK,"LINK");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::TEXT_INPUT,"TEXT_INPUT");
};

#endif

hx::Class TextEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LINK","\xfa","\xdf","\x73","\x32"),
	HX_HCSTRING("TEXT_INPUT","\x98","\x17","\xd6","\x79"),
	::String(null()) };

void TextEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.TextEvent","\x16","\xa1","\xf4","\x52");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEvent_obj >;
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

void TextEvent_obj::__boot()
{
	LINK= HX_HCSTRING("link","\xfa","\x17","\xb3","\x47");
	TEXT_INPUT= HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57");
}

} // end namespace openfl
} // end namespace events
