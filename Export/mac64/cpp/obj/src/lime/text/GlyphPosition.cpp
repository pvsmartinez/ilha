#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
namespace lime{
namespace text{

Void GlyphPosition_obj::__construct(int glyph,::lime::math::Vector2 advance,::lime::math::Vector2 offset)
{
HX_STACK_FRAME("lime.text.GlyphPosition","new",0x7d4dcbff,"lime.text.GlyphPosition.new","lime/text/GlyphPosition.hx",15,0x63f214b1)
HX_STACK_THIS(this)
HX_STACK_ARG(glyph,"glyph")
HX_STACK_ARG(advance,"advance")
HX_STACK_ARG(offset,"offset")
{
	HX_STACK_LINE(17)
	this->glyph = glyph;
	HX_STACK_LINE(18)
	this->advance = advance;
	HX_STACK_LINE(20)
	bool tmp = (offset != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(22)
		this->offset = offset;
	}
	else{
		HX_STACK_LINE(26)
		::lime::math::Vector2 tmp1 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		this->offset = tmp1;
	}
}
;
	return null();
}

//GlyphPosition_obj::~GlyphPosition_obj() { }

Dynamic GlyphPosition_obj::__CreateEmpty() { return  new GlyphPosition_obj; }
hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__new(int glyph,::lime::math::Vector2 advance,::lime::math::Vector2 offset)
{  hx::ObjectPtr< GlyphPosition_obj > _result_ = new GlyphPosition_obj();
	_result_->__construct(glyph,advance,offset);
	return _result_;}

Dynamic GlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlyphPosition_obj > _result_ = new GlyphPosition_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


GlyphPosition_obj::GlyphPosition_obj()
{
}

void GlyphPosition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphPosition);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(glyph,"glyph");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void GlyphPosition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(glyph,"glyph");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

Dynamic GlyphPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { return glyph; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return advance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GlyphPosition_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { glyph=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"));
	outFields->push(HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,advance),HX_HCSTRING("advance","\x82","\x08","\x0c","\xef")},
	{hx::fsInt,(int)offsetof(GlyphPosition_obj,glyph),HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#endif

hx::Class GlyphPosition_obj::__mClass;

void GlyphPosition_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.GlyphPosition","\x8d","\x60","\x62","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlyphPosition_obj >;
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
} // end namespace text
