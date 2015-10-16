#include <hxcpp.h>

#include "cpp/Pointer.h"
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

::String StringTools_obj::urlEncode( ::String s){
	HX_STACK_FRAME("StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","/usr/local/lib/haxe/std/StringTools.hx",36,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(44)
	::String tmp = s.__URLEncode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode( ::String s){
	HX_STACK_FRAME("StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","/usr/local/lib/haxe/std/StringTools.hx",61,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(69)
	::String tmp = s.__URLDecode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith( ::String s,::String start){
	HX_STACK_FRAME("StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","/usr/local/lib/haxe/std/StringTools.hx",127,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(start,"start")
	HX_STACK_LINE(133)
	bool tmp = (s.length < start.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	if ((tmp)){
		HX_STACK_LINE(134)
		return false;
	}
	HX_STACK_LINE(135)
	::cpp::Pointer< ::cpp::Char > p0 = ::cpp::Pointer< ::cpp::Char >(::cpp::Pointer_obj::fromPointer(s.__s));		HX_STACK_VAR(p0,"p0");
	HX_STACK_LINE(136)
	::cpp::Pointer< ::cpp::Char > p1 = ::cpp::Pointer< ::cpp::Char >(::cpp::Pointer_obj::fromPointer(start.__s));		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		int _g = start.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		while((true)){
			HX_STACK_LINE(137)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			if ((tmp2)){
				HX_STACK_LINE(137)
				break;
			}
			HX_STACK_LINE(137)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(138)
			bool tmp4 = (p0->at(i) != p1->at(i));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			if ((tmp4)){
				HX_STACK_LINE(139)
				return false;
			}
		}
	}
	HX_STACK_LINE(140)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::isSpace( ::String s,int pos){
	HX_STACK_FRAME("StringTools","isSpace",0xe0290778,"StringTools.isSpace","/usr/local/lib/haxe/std/StringTools.hx",183,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(187)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	Dynamic tmp1 = s.charCodeAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	Dynamic c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(188)
	bool tmp2 = (c > (int)8);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(188)
	if ((tmp3)){
		HX_STACK_LINE(188)
		tmp4 = (c < (int)14);
	}
	else{
		HX_STACK_LINE(188)
		tmp4 = false;
	}
	HX_STACK_LINE(188)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(188)
	if ((tmp5)){
		HX_STACK_LINE(188)
		tmp6 = (c == (int)32);
	}
	else{
		HX_STACK_LINE(188)
		tmp6 = true;
	}
	HX_STACK_LINE(188)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim( ::String s){
	HX_STACK_FRAME("StringTools","ltrim",0x24d2234a,"StringTools.ltrim","/usr/local/lib/haxe/std/StringTools.hx",200,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(204)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(205)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(206)
	while((true)){
		HX_STACK_LINE(206)
		bool tmp = (r < l);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		if ((tmp)){
			HX_STACK_LINE(206)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			int tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::String tmp4 = tmp2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			int tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			tmp1 = ::StringTools_obj::isSpace(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(206)
			tmp1 = false;
		}
		HX_STACK_LINE(206)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		if ((tmp2)){
			HX_STACK_LINE(206)
			break;
		}
		HX_STACK_LINE(207)
		(r)++;
	}
	HX_STACK_LINE(209)
	bool tmp = (r > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	if ((tmp)){
		HX_STACK_LINE(210)
		int tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		int tmp2 = (l - r);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		::String tmp3 = s.substr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		return tmp3;
	}
	else{
		HX_STACK_LINE(212)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		return tmp1;
	}
	HX_STACK_LINE(209)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim( ::String s){
	HX_STACK_FRAME("StringTools","rtrim",0x99399e50,"StringTools.rtrim","/usr/local/lib/haxe/std/StringTools.hx",225,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(229)
	int l = s.length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(230)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(231)
	while((true)){
		HX_STACK_LINE(231)
		bool tmp = (r < l);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp)){
			HX_STACK_LINE(231)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			int tmp3 = (l - r);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			::String tmp7 = tmp2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			int tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(231)
			tmp1 = ::StringTools_obj::isSpace(tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(231)
			tmp1 = false;
		}
		HX_STACK_LINE(231)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		if ((tmp2)){
			HX_STACK_LINE(231)
			break;
		}
		HX_STACK_LINE(232)
		(r)++;
	}
	HX_STACK_LINE(234)
	bool tmp = (r > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	if ((tmp)){
		HX_STACK_LINE(235)
		int tmp1 = (l - r);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		::String tmp2 = s.substr((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		return tmp2;
	}
	else{
		HX_STACK_LINE(237)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		return tmp1;
	}
	HX_STACK_LINE(234)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim( ::String s){
	HX_STACK_FRAME("StringTools","trim",0x2908d066,"StringTools.trim","/usr/local/lib/haxe/std/StringTools.hx",247,0x3f930611)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(253)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	::String tmp1 = ::StringTools_obj::rtrim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	::String tmp2 = ::StringTools_obj::ltrim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::hex( int n,Dynamic digits){
	HX_STACK_FRAME("StringTools","hex",0xd91debd7,"StringTools.hex","/usr/local/lib/haxe/std/StringTools.hx",334,0x3f930611)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(digits,"digits")
	HX_STACK_LINE(340)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(341)
	::String hexChars = HX_HCSTRING("0123456789ABCDEF","\x68","\x2a","\x58","\xa2");		HX_STACK_VAR(hexChars,"hexChars");
	HX_STACK_LINE(342)
	while((true)){
		HX_STACK_LINE(343)
		int tmp = (int(n) & int((int)15));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		::String tmp1 = hexChars.charAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		s = tmp3;
		HX_STACK_LINE(344)
		hx::UShrEq(n,(int)4);
		HX_STACK_LINE(345)
		bool tmp4 = (n > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(345)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(342)
		if ((tmp5)){
			HX_STACK_LINE(342)
			break;
		}
	}
	HX_STACK_LINE(355)
	bool tmp = (digits != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	if ((tmp)){
		HX_STACK_LINE(356)
		while((true)){
			HX_STACK_LINE(356)
			bool tmp1 = (s.length < digits);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(356)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			if ((tmp2)){
				HX_STACK_LINE(356)
				break;
			}
			HX_STACK_LINE(357)
			::String tmp3 = (HX_HCSTRING("0","\x30","\x00","\x00","\x00") + s);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			s = tmp3;
		}
	}
	HX_STACK_LINE(359)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("urlDecode","\xfd","\xb9","\x5b","\x05"),
	HX_HCSTRING("startsWith","\x77","\xc0","\xcf","\xf9"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("ltrim","\x4e","\x43","\x4a","\x7c"),
	HX_HCSTRING("rtrim","\x54","\xbe","\xb1","\xf0"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	::String(null()) };

void StringTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
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

