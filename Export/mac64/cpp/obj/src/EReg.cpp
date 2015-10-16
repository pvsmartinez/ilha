#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void EReg_obj::__construct(::String r,::String opt)
{
HX_STACK_FRAME("EReg","new",0x8b859e81,"EReg.new","/usr/local/lib/haxe/std/cpp/_std/EReg.hx",28,0x5a2fdacd)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
HX_STACK_ARG(opt,"opt")
{
	HX_STACK_LINE(29)
	Array< ::String > a = opt.split(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(30)
	bool tmp = (a->length > (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->global = tmp;
	HX_STACK_LINE(31)
	bool tmp1 = this->global;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(32)
		::String tmp2 = a->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		opt = tmp2;
	}
	HX_STACK_LINE(33)
	::String tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::String tmp3 = opt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Dynamic tmp4 = ::EReg_obj::regexp_new_options(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	this->r = tmp4;
}
;
	return null();
}

//EReg_obj::~EReg_obj() { }

Dynamic EReg_obj::__CreateEmpty() { return  new EReg_obj; }
hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt)
{  hx::ObjectPtr< EReg_obj > _result_ = new EReg_obj();
	_result_->__construct(r,opt);
	return _result_;}

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EReg_obj > _result_ = new EReg_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String EReg_obj::replace( ::String s,::String by){
	HX_STACK_FRAME("EReg","replace",0xae923ad5,"EReg.replace","/usr/local/lib/haxe/std/cpp/_std/EReg.hx",98,0x5a2fdacd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(99)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::StringBuf b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(100)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(101)
	int len = s.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(102)
	Array< ::String > a = by.split(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(103)
	bool first = true;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(104)
	while((true)){
		HX_STACK_LINE(105)
		Dynamic tmp1 = this->r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		Dynamic tmp5 = ::EReg_obj::regexp_match(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		if ((tmp6)){
			HX_STACK_LINE(106)
			break;
		}
		HX_STACK_LINE(107)
		Dynamic tmp7 = this->r;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		Dynamic tmp8 = ::EReg_obj::regexp_matched_pos(tmp7,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		Dynamic p = tmp8;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(108)
		bool tmp9 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		if ((tmp9)){
			HX_STACK_LINE(108)
			bool tmp11 = first;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			tmp10 = !(tmp12);
		}
		else{
			HX_STACK_LINE(108)
			tmp10 = false;
		}
		HX_STACK_LINE(108)
		if ((tmp10)){
			HX_STACK_LINE(109)
			bool tmp11 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == s.length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(109)
			if ((tmp11)){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(111)
			hx::AddEq(p->__FieldRef(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")),(int)1);
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int tmp11 = pos;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			int tmp12 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) - pos);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			::String tmp13 = s.substr(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			b->b->push(tmp13);
		}
		HX_STACK_LINE(114)
		bool tmp11 = (a->length > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		if ((tmp11)){
			HX_STACK_LINE(115)
			::String tmp12 = a->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			b->add(tmp12);
		}
		HX_STACK_LINE(116)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(117)
		while((true)){
			HX_STACK_LINE(117)
			bool tmp12 = (i < a->length);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			if ((tmp13)){
				HX_STACK_LINE(117)
				break;
			}
			HX_STACK_LINE(118)
			::String tmp14 = a->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			::String k = tmp14;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(119)
			Dynamic tmp15 = k.charCodeAt((int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			Dynamic c = tmp15;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(121)
			bool tmp16 = (c >= (int)49);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			if ((tmp16)){
				HX_STACK_LINE(121)
				tmp17 = (c <= (int)57);
			}
			else{
				HX_STACK_LINE(121)
				tmp17 = false;
			}
			HX_STACK_LINE(121)
			if ((tmp17)){
				HX_STACK_LINE(122)
				Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(122)
				try
				{
				HX_STACK_CATCHABLE(::String, 0);
				{
					HX_STACK_LINE(122)
					Dynamic tmp19 = this->r;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(122)
					Dynamic tmp20 = c;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(122)
					int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(122)
					int tmp22 = (tmp21 - (int)48);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(122)
					tmp18 = ::EReg_obj::regexp_matched_pos(tmp19,tmp22);
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String e = __e;{
							HX_STACK_LINE(122)
							tmp18 = null();
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
				HX_STACK_LINE(122)
				Dynamic p1 = tmp18;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(123)
				bool tmp19 = (p1 == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(123)
				if ((tmp19)){
					HX_STACK_LINE(124)
					b->add(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));
					HX_STACK_LINE(125)
					::String tmp20 = k;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(125)
					b->add(tmp20);
				}
				else{
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						int tmp20 = p1->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(127)
						int tmp21 = p1->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(127)
						::String tmp22 = s.substr(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(127)
						b->b->push(tmp22);
					}
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						int tmp20 = (k.length - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(128)
						::String tmp21 = k.substr((int)1,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(128)
						b->b->push(tmp21);
					}
				}
			}
			else{
				HX_STACK_LINE(130)
				bool tmp18 = (c == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				if ((tmp18)){
					HX_STACK_LINE(131)
					b->add(HX_HCSTRING("$","\x24","\x00","\x00","\x00"));
					HX_STACK_LINE(132)
					(i)++;
					HX_STACK_LINE(133)
					::String tmp19 = a->__get(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(133)
					::String k2 = tmp19;		HX_STACK_VAR(k2,"k2");
					HX_STACK_LINE(134)
					bool tmp20 = (k2 != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(134)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(134)
					if ((tmp20)){
						HX_STACK_LINE(134)
						tmp21 = (k2.length > (int)0);
					}
					else{
						HX_STACK_LINE(134)
						tmp21 = false;
					}
					HX_STACK_LINE(134)
					if ((tmp21)){
						HX_STACK_LINE(135)
						::String tmp22 = k2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(135)
						b->add(tmp22);
					}
				}
				else{
					HX_STACK_LINE(137)
					::String tmp19 = (HX_HCSTRING("$","\x24","\x00","\x00","\x00") + k);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(137)
					b->add(tmp19);
				}
			}
			HX_STACK_LINE(138)
			(i)++;
		}
		HX_STACK_LINE(140)
		int tmp12 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		int tmp13 = pos;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		int tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(140)
		int tot = tmp14;		HX_STACK_VAR(tot,"tot");
		HX_STACK_LINE(141)
		hx::AddEq(pos,tot);
		HX_STACK_LINE(142)
		hx::SubEq(len,tot);
		HX_STACK_LINE(143)
		first = false;
		HX_STACK_LINE(144)
		bool tmp15 = this->global;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(144)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		if ((tmp16)){
			HX_STACK_LINE(104)
			break;
		}
	}
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		int tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		::String tmp3 = s.substr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		b->b->push(tmp3);
	}
	HX_STACK_LINE(146)
	::String tmp1 = b->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )

Dynamic EReg_obj::regexp_new_options;

Dynamic EReg_obj::regexp_match;

Dynamic EReg_obj::regexp_matched_pos;


EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(global,"global");
}

Dynamic EReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return global; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EReg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { outValue = regexp_match; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { outValue = regexp_new_options; return true;  }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { outValue = regexp_matched_pos; return true;  }
	}
	return false;
}

Dynamic EReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EReg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { regexp_match=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { regexp_new_options=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { regexp_matched_pos=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_new_options,HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_match,HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &EReg_obj::regexp_matched_pos,HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#endif

hx::Class EReg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56"),
	HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6"),
	HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a"),
	::String(null()) };

void EReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EReg_obj::__GetStatic;
	__mClass->mSetStaticField = &EReg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EReg_obj >;
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

void EReg_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/local/lib/haxe/std/cpp/_std/EReg.hx",174,0x5a2fdacd)
		{
			HX_STACK_LINE(174)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_new_options","\x89","\x34","\xba","\x56"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(174)
			return tmp;
		}
		return null();
	}
};
	regexp_new_options= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/local/lib/haxe/std/cpp/_std/EReg.hx",175,0x5a2fdacd)
		{
			HX_STACK_LINE(175)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_match","\x0f","\xcd","\x47","\xb6"),(int)4);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(175)
			return tmp;
		}
		return null();
	}
};
	regexp_match= _Function_0_2::Block();
struct _Function_0_3{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","/usr/local/lib/haxe/std/cpp/_std/EReg.hx",177,0x5a2fdacd)
		{
			HX_STACK_LINE(177)
			Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("regexp","\xc9","\xbf","\x89","\x00"),HX_HCSTRING("regexp_matched_pos","\xc3","\x98","\x9f","\x7a"),(int)2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(177)
			return tmp;
		}
		return null();
	}
};
	regexp_matched_pos= _Function_0_3::Block();
}

