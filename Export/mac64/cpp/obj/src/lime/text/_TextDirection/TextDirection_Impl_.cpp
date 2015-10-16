#include <hxcpp.h>

#ifndef INCLUDED_lime_text__TextDirection_TextDirection_Impl_
#include <lime/text/_TextDirection/TextDirection_Impl_.h>
#endif
namespace lime{
namespace text{
namespace _TextDirection{

Void TextDirection_Impl__obj::__construct()
{
	return null();
}

//TextDirection_Impl__obj::~TextDirection_Impl__obj() { }

Dynamic TextDirection_Impl__obj::__CreateEmpty() { return  new TextDirection_Impl__obj; }
hx::ObjectPtr< TextDirection_Impl__obj > TextDirection_Impl__obj::__new()
{  hx::ObjectPtr< TextDirection_Impl__obj > _result_ = new TextDirection_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextDirection_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextDirection_Impl__obj > _result_ = new TextDirection_Impl__obj();
	_result_->__construct();
	return _result_;}

int TextDirection_Impl__obj::INVALID;

int TextDirection_Impl__obj::LEFT_TO_RIGHT;

int TextDirection_Impl__obj::RIGHT_TO_LEFT;

int TextDirection_Impl__obj::TOP_TO_BOTTOM;

int TextDirection_Impl__obj::BOTTOM_TO_TOP;

Void TextDirection_Impl__obj::reverse( int this1){
{
		HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","reverse",0x86baba53,"lime.text._TextDirection.TextDirection_Impl_.reverse","lime/text/TextDirection.hx",20,0x7a217b74)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(22)
		int tmp = (int(this1) ^ int((int)1));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this1 = tmp;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,reverse,(void))

::String TextDirection_Impl__obj::toString( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","toString",0x13615a5b,"lime.text._TextDirection.TextDirection_Impl_.toString","lime/text/TextDirection.hx",27,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(29)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	switch( (int)(tmp)){
		case (int)4: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("leftToRight","\x1a","\x97","\x7b","\xb5");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("rightToLeft","\x1e","\x40","\xee","\xe6");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("topToBottom","\x7b","\xce","\x19","\x75");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("bottomToTop","\xef","\xac","\xaa","\x79");
		}
		;break;
		default: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
	}
	HX_STACK_LINE(29)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,toString,return )

bool TextDirection_Impl__obj::get_backward( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_backward",0xc0bd1d1b,"lime.text._TextDirection.TextDirection_Impl_.get_backward","lime/text/TextDirection.hx",42,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(44)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = (int)-3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	bool tmp3 = (tmp2 == (int)5);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_backward,return )

bool TextDirection_Impl__obj::get_forward( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_forward",0x75faaf8d,"lime.text._TextDirection.TextDirection_Impl_.get_forward","lime/text/TextDirection.hx",49,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(51)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = (int)-3;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	bool tmp3 = (tmp2 == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_forward,return )

bool TextDirection_Impl__obj::get_horizontal( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_horizontal",0x91e4fc1c,"lime.text._TextDirection.TextDirection_Impl_.get_horizontal","lime/text/TextDirection.hx",56,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(58)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = (int)-2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3 = (tmp2 == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_horizontal,return )

bool TextDirection_Impl__obj::get_vertical( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_vertical",0x03b9fdae,"lime.text._TextDirection.TextDirection_Impl_.get_vertical","lime/text/TextDirection.hx",63,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(65)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1 = (int)-2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	bool tmp3 = (tmp2 == (int)6);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_vertical,return )


TextDirection_Impl__obj::TextDirection_Impl__obj()
{
}

bool TextDirection_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_forward") ) { outValue = get_forward_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_backward") ) { outValue = get_backward_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_vertical") ) { outValue = get_vertical_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_horizontal") ) { outValue = get_horizontal_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextDirection_Impl__obj::INVALID,HX_HCSTRING("INVALID","\xd7","\xae","\x1b","\xbb")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::LEFT_TO_RIGHT,HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::RIGHT_TO_LEFT,HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::TOP_TO_BOTTOM,HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32")},
	{hx::fsInt,(void *) &TextDirection_Impl__obj::BOTTOM_TO_TOP,HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#endif

hx::Class TextDirection_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("INVALID","\xd7","\xae","\x1b","\xbb"),
	HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07"),
	HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b"),
	HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32"),
	HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_backward","\xec","\x8f","\x32","\xdc"),
	HX_HCSTRING("get_forward","\xdc","\x41","\xc5","\x6b"),
	HX_HCSTRING("get_horizontal","\x2d","\x85","\xb9","\x8b"),
	HX_HCSTRING("get_vertical","\x7f","\x70","\x2f","\x1f"),
	::String(null()) };

void TextDirection_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text._TextDirection.TextDirection_Impl_","\x9f","\xc8","\xb5","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextDirection_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextDirection_Impl__obj >;
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

void TextDirection_Impl__obj::__boot()
{
	INVALID= (int)0;
	LEFT_TO_RIGHT= (int)4;
	RIGHT_TO_LEFT= (int)5;
	TOP_TO_BOTTOM= (int)6;
	BOTTOM_TO_TOP= (int)7;
}

} // end namespace lime
} // end namespace text
} // end namespace _TextDirection
