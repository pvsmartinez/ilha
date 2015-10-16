#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
namespace openfl{
namespace display{

Void TextureUvs_obj::__construct()
{
HX_STACK_FRAME("openfl.display.TextureUvs","new",0xe69f4b33,"openfl.display.TextureUvs.new","openfl/display/BitmapData.hx",2441,0xdd12d5b9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(2451)
	this->y3 = ((Float)0);
	HX_STACK_LINE(2450)
	this->y2 = ((Float)0);
	HX_STACK_LINE(2449)
	this->y1 = ((Float)0);
	HX_STACK_LINE(2448)
	this->y0 = ((Float)0);
	HX_STACK_LINE(2447)
	this->x3 = ((Float)0);
	HX_STACK_LINE(2446)
	this->x2 = ((Float)0);
	HX_STACK_LINE(2445)
	this->x1 = ((Float)0);
	HX_STACK_LINE(2444)
	this->x0 = ((Float)0);
}
;
	return null();
}

//TextureUvs_obj::~TextureUvs_obj() { }

Dynamic TextureUvs_obj::__CreateEmpty() { return  new TextureUvs_obj; }
hx::ObjectPtr< TextureUvs_obj > TextureUvs_obj::__new()
{  hx::ObjectPtr< TextureUvs_obj > _result_ = new TextureUvs_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextureUvs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureUvs_obj > _result_ = new TextureUvs_obj();
	_result_->__construct();
	return _result_;}

Void TextureUvs_obj::reset( ){
{
		HX_STACK_FRAME("openfl.display.TextureUvs","reset",0x93065f62,"openfl.display.TextureUvs.reset","openfl/display/BitmapData.hx",2453,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2454)
		Float tmp = this->y3 = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2454)
		Float tmp1 = this->y2 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2454)
		Float tmp2 = this->y1 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2454)
		Float tmp3 = this->y0 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2454)
		Float tmp4 = this->x3 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2454)
		Float tmp5 = this->x2 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2454)
		Float tmp6 = this->x1 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2454)
		this->x0 = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureUvs_obj,reset,(void))


TextureUvs_obj::TextureUvs_obj()
{
}

Dynamic TextureUvs_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"x2") ) { return x2; }
		if (HX_FIELD_EQ(inName,"x3") ) { return x3; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		if (HX_FIELD_EQ(inName,"y2") ) { return y2; }
		if (HX_FIELD_EQ(inName,"y3") ) { return y3; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureUvs_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x2") ) { x2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x3") ) { x3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y2") ) { y2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y3") ) { y3=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureUvs_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x2","\xba","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("x3","\xbb","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y0","\x97","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y1","\x98","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y2","\x99","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("y3","\x9a","\x69","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x0),HX_HCSTRING("x0","\xb8","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x1),HX_HCSTRING("x1","\xb9","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x2),HX_HCSTRING("x2","\xba","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x3),HX_HCSTRING("x3","\xbb","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y0),HX_HCSTRING("y0","\x97","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y1),HX_HCSTRING("y1","\x98","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y2),HX_HCSTRING("y2","\x99","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y3),HX_HCSTRING("y3","\x9a","\x69","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x0","\xb8","\x68","\x00","\x00"),
	HX_HCSTRING("x1","\xb9","\x68","\x00","\x00"),
	HX_HCSTRING("x2","\xba","\x68","\x00","\x00"),
	HX_HCSTRING("x3","\xbb","\x68","\x00","\x00"),
	HX_HCSTRING("y0","\x97","\x69","\x00","\x00"),
	HX_HCSTRING("y1","\x98","\x69","\x00","\x00"),
	HX_HCSTRING("y2","\x99","\x69","\x00","\x00"),
	HX_HCSTRING("y3","\x9a","\x69","\x00","\x00"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUvs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUvs_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureUvs_obj::__mClass;

void TextureUvs_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.TextureUvs","\xc1","\x35","\x4f","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureUvs_obj >;
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
} // end namespace display
