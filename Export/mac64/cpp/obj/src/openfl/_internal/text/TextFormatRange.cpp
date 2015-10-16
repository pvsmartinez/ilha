#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextFormatRange_obj::__construct(::openfl::text::TextFormat format,int start,int end)
{
HX_STACK_FRAME("openfl._internal.text.TextFormatRange","new",0x4f23249a,"openfl._internal.text.TextFormatRange.new","openfl/_internal/text/TextFormatRange.hx",15,0x601dbd55)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(start,"start")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(17)
	this->format = format;
	HX_STACK_LINE(18)
	this->start = start;
	HX_STACK_LINE(19)
	this->end = end;
}
;
	return null();
}

//TextFormatRange_obj::~TextFormatRange_obj() { }

Dynamic TextFormatRange_obj::__CreateEmpty() { return  new TextFormatRange_obj; }
hx::ObjectPtr< TextFormatRange_obj > TextFormatRange_obj::__new(::openfl::text::TextFormat format,int start,int end)
{  hx::ObjectPtr< TextFormatRange_obj > _result_ = new TextFormatRange_obj();
	_result_->__construct(format,start,end);
	return _result_;}

Dynamic TextFormatRange_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormatRange_obj > _result_ = new TextFormatRange_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


TextFormatRange_obj::TextFormatRange_obj()
{
}

void TextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormatRange);
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_END_CLASS();
}

void TextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(start,"start");
}

Dynamic TextFormatRange_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFormatRange_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextFormatRange_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextFormatRange_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(TextFormatRange_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatRange_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFormatRange_obj::__mClass;

void TextFormatRange_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextFormatRange","\xa8","\x8f","\x22","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFormatRange_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace text
