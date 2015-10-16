#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextLayoutGroup_obj::__construct(::openfl::text::TextFormat format,int startIndex,int endIndex)
{
HX_STACK_FRAME("openfl._internal.text.TextLayoutGroup","new",0x78a7f549,"openfl._internal.text.TextLayoutGroup.new","openfl/_internal/text/TextLayoutGroup.hx",24,0xbe6fd786)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(startIndex,"startIndex")
HX_STACK_ARG(endIndex,"endIndex")
{
	HX_STACK_LINE(26)
	this->format = format;
	HX_STACK_LINE(27)
	this->startIndex = startIndex;
	HX_STACK_LINE(28)
	this->endIndex = endIndex;
}
;
	return null();
}

//TextLayoutGroup_obj::~TextLayoutGroup_obj() { }

Dynamic TextLayoutGroup_obj::__CreateEmpty() { return  new TextLayoutGroup_obj; }
hx::ObjectPtr< TextLayoutGroup_obj > TextLayoutGroup_obj::__new(::openfl::text::TextFormat format,int startIndex,int endIndex)
{  hx::ObjectPtr< TextLayoutGroup_obj > _result_ = new TextLayoutGroup_obj();
	_result_->__construct(format,startIndex,endIndex);
	return _result_;}

Dynamic TextLayoutGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLayoutGroup_obj > _result_ = new TextLayoutGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


TextLayoutGroup_obj::TextLayoutGroup_obj()
{
}

void TextLayoutGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayoutGroup);
	HX_MARK_MEMBER_NAME(advances,"advances");
	HX_MARK_MEMBER_NAME(ascent,"ascent");
	HX_MARK_MEMBER_NAME(descent,"descent");
	HX_MARK_MEMBER_NAME(endIndex,"endIndex");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(lineIndex,"lineIndex");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(startIndex,"startIndex");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void TextLayoutGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advances,"advances");
	HX_VISIT_MEMBER_NAME(ascent,"ascent");
	HX_VISIT_MEMBER_NAME(descent,"descent");
	HX_VISIT_MEMBER_NAME(endIndex,"endIndex");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(lineIndex,"lineIndex");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(startIndex,"startIndex");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic TextLayoutGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ascent; }
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return descent; }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { return advances; }
		if (HX_FIELD_EQ(inName,"endIndex") ) { return endIndex; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineIndex") ) { return lineIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { return startIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextLayoutGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advances") ) { advances=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endIndex") ) { endIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineIndex") ) { lineIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startIndex") ) { startIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLayoutGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advances","\xb1","\x69","\x7b","\x3b"));
	outFields->push(HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"));
	outFields->push(HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"));
	outFields->push(HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("lineIndex","\x7e","\x9e","\x0f","\x05"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextLayoutGroup_obj,advances),HX_HCSTRING("advances","\xb1","\x69","\x7b","\x3b")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,ascent),HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,descent),HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,endIndex),HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextLayoutGroup_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,lineIndex),HX_HCSTRING("lineIndex","\x7e","\x9e","\x0f","\x05")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(TextLayoutGroup_obj,startIndex),HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda")},
	{hx::fsFloat,(int)offsetof(TextLayoutGroup_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("advances","\xb1","\x69","\x7b","\x3b"),
	HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"),
	HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"),
	HX_HCSTRING("endIndex","\x37","\x2d","\x12","\xbc"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("lineIndex","\x7e","\x9e","\x0f","\x05"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("startIndex","\x50","\x73","\x2b","\xda"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayoutGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayoutGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class TextLayoutGroup_obj::__mClass;

void TextLayoutGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextLayoutGroup","\xd7","\x9c","\xc7","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLayoutGroup_obj >;
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
