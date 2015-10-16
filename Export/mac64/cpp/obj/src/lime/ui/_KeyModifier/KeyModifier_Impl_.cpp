#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _KeyModifier{

Void KeyModifier_Impl__obj::__construct()
{
	return null();
}

//KeyModifier_Impl__obj::~KeyModifier_Impl__obj() { }

Dynamic KeyModifier_Impl__obj::__CreateEmpty() { return  new KeyModifier_Impl__obj; }
hx::ObjectPtr< KeyModifier_Impl__obj > KeyModifier_Impl__obj::__new()
{  hx::ObjectPtr< KeyModifier_Impl__obj > _result_ = new KeyModifier_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic KeyModifier_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyModifier_Impl__obj > _result_ = new KeyModifier_Impl__obj();
	_result_->__construct();
	return _result_;}

int KeyModifier_Impl__obj::NONE;

int KeyModifier_Impl__obj::LEFT_SHIFT;

int KeyModifier_Impl__obj::RIGHT_SHIFT;

int KeyModifier_Impl__obj::LEFT_CTRL;

int KeyModifier_Impl__obj::RIGHT_CTRL;

int KeyModifier_Impl__obj::LEFT_ALT;

int KeyModifier_Impl__obj::RIGHT_ALT;

int KeyModifier_Impl__obj::LEFT_META;

int KeyModifier_Impl__obj::RIGHT_META;

int KeyModifier_Impl__obj::NUM_LOCK;

int KeyModifier_Impl__obj::CAPS_LOCK;

int KeyModifier_Impl__obj::MODE;

int KeyModifier_Impl__obj::CTRL;

int KeyModifier_Impl__obj::SHIFT;

int KeyModifier_Impl__obj::ALT;

int KeyModifier_Impl__obj::META;

bool KeyModifier_Impl__obj::get_altKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_altKey",0x98ede94d,"lime.ui._KeyModifier.KeyModifier_Impl_.get_altKey","lime/ui/KeyModifier.hx",33,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(35)
	int tmp = (int(this1) & int((int)256));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp2)){
		HX_STACK_LINE(35)
		int tmp4 = (int(this1) & int((int)512));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(35)
		tmp3 = true;
	}
	HX_STACK_LINE(35)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_altKey,return )

bool KeyModifier_Impl__obj::set_altKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_altKey",0x9c6b87c1,"lime.ui._KeyModifier.KeyModifier_Impl_.set_altKey","lime/ui/KeyModifier.hx",40,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(42)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	if ((tmp)){
		HX_STACK_LINE(44)
		hx::OrEq(this1,(int)768);
	}
	else{
		HX_STACK_LINE(48)
		int tmp1 = ((int)268435455 - (int)768);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(52)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_altKey,return )

bool KeyModifier_Impl__obj::get_capsLock( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_capsLock",0x26398dc3,"lime.ui._KeyModifier.KeyModifier_Impl_.get_capsLock","lime/ui/KeyModifier.hx",57,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(59)
	int tmp = (int(this1) & int((int)8192));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp2)){
		HX_STACK_LINE(59)
		int tmp4 = (int(this1) & int((int)8192));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(59)
		tmp3 = true;
	}
	HX_STACK_LINE(59)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_capsLock,return )

bool KeyModifier_Impl__obj::set_capsLock( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_capsLock",0x3b32b137,"lime.ui._KeyModifier.KeyModifier_Impl_.set_capsLock","lime/ui/KeyModifier.hx",64,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(68)
		hx::OrEq(this1,(int)8192);
	}
	else{
		HX_STACK_LINE(72)
		int tmp1 = ((int)268435455 - (int)8192);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(76)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_capsLock,return )

bool KeyModifier_Impl__obj::get_ctrlKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_ctrlKey",0xac33207d,"lime.ui._KeyModifier.KeyModifier_Impl_.get_ctrlKey","lime/ui/KeyModifier.hx",81,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(83)
	int tmp = (int(this1) & int((int)64));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	if ((tmp2)){
		HX_STACK_LINE(83)
		int tmp4 = (int(this1) & int((int)128));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(83)
		tmp3 = true;
	}
	HX_STACK_LINE(83)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_ctrlKey,return )

bool KeyModifier_Impl__obj::set_ctrlKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_ctrlKey",0xb6a02789,"lime.ui._KeyModifier.KeyModifier_Impl_.set_ctrlKey","lime/ui/KeyModifier.hx",88,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(92)
		hx::OrEq(this1,(int)192);
	}
	else{
		HX_STACK_LINE(96)
		int tmp1 = ((int)268435455 - (int)192);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(100)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_ctrlKey,return )

bool KeyModifier_Impl__obj::get_metaKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_metaKey",0x6c372aa3,"lime.ui._KeyModifier.KeyModifier_Impl_.get_metaKey","lime/ui/KeyModifier.hx",105,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(107)
	int tmp = (int(this1) & int((int)1024));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	if ((tmp2)){
		HX_STACK_LINE(107)
		int tmp4 = (int(this1) & int((int)2048));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(107)
		tmp3 = true;
	}
	HX_STACK_LINE(107)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_metaKey,return )

bool KeyModifier_Impl__obj::set_metaKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_metaKey",0x76a431af,"lime.ui._KeyModifier.KeyModifier_Impl_.set_metaKey","lime/ui/KeyModifier.hx",112,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(114)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	if ((tmp)){
		HX_STACK_LINE(116)
		hx::OrEq(this1,(int)3072);
	}
	else{
		HX_STACK_LINE(120)
		int tmp1 = ((int)268435455 - (int)3072);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(124)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_metaKey,return )

bool KeyModifier_Impl__obj::get_numLock( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_numLock",0xe5ee2c1a,"lime.ui._KeyModifier.KeyModifier_Impl_.get_numLock","lime/ui/KeyModifier.hx",129,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(131)
	int tmp = (int(this1) & int((int)4096));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	if ((tmp2)){
		HX_STACK_LINE(131)
		int tmp4 = (int(this1) & int((int)4096));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(131)
		tmp3 = true;
	}
	HX_STACK_LINE(131)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_numLock,return )

bool KeyModifier_Impl__obj::set_numLock( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_numLock",0xf05b3326,"lime.ui._KeyModifier.KeyModifier_Impl_.set_numLock","lime/ui/KeyModifier.hx",136,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(140)
		hx::OrEq(this1,(int)4096);
	}
	else{
		HX_STACK_LINE(144)
		int tmp1 = ((int)268435455 - (int)4096);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(148)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_numLock,return )

bool KeyModifier_Impl__obj::get_shiftKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_shiftKey",0xae171754,"lime.ui._KeyModifier.KeyModifier_Impl_.get_shiftKey","lime/ui/KeyModifier.hx",153,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(155)
	int tmp = (int(this1) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	if ((tmp2)){
		HX_STACK_LINE(155)
		int tmp4 = (int(this1) & int((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		tmp3 = (tmp5 > (int)0);
	}
	else{
		HX_STACK_LINE(155)
		tmp3 = true;
	}
	HX_STACK_LINE(155)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_shiftKey,return )

bool KeyModifier_Impl__obj::set_shiftKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_shiftKey",0xc3103ac8,"lime.ui._KeyModifier.KeyModifier_Impl_.set_shiftKey","lime/ui/KeyModifier.hx",160,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(162)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(164)
		hx::OrEq(this1,(int)3);
	}
	else{
		HX_STACK_LINE(168)
		int tmp1 = ((int)268435455 - (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(172)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_shiftKey,return )


KeyModifier_Impl__obj::KeyModifier_Impl__obj()
{
}

bool KeyModifier_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"get_altKey") ) { outValue = get_altKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_altKey") ) { outValue = set_altKey_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_ctrlKey") ) { outValue = get_ctrlKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_ctrlKey") ) { outValue = set_ctrlKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_metaKey") ) { outValue = get_metaKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_metaKey") ) { outValue = set_metaKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_numLock") ) { outValue = get_numLock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_numLock") ) { outValue = set_numLock_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_capsLock") ) { outValue = get_capsLock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_capsLock") ) { outValue = set_capsLock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_shiftKey") ) { outValue = get_shiftKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_shiftKey") ) { outValue = set_shiftKey_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::LEFT_SHIFT,HX_HCSTRING("LEFT_SHIFT","\xea","\x7a","\xfb","\x2f")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::RIGHT_SHIFT,HX_HCSTRING("RIGHT_SHIFT","\x5f","\x24","\xa2","\x4e")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::LEFT_CTRL,HX_HCSTRING("LEFT_CTRL","\x23","\x23","\xb7","\xde")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::RIGHT_CTRL,HX_HCSTRING("RIGHT_CTRL","\x4e","\x1f","\x4d","\xc3")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::LEFT_ALT,HX_HCSTRING("LEFT_ALT","\x91","\xb9","\xe3","\xc9")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::RIGHT_ALT,HX_HCSTRING("RIGHT_ALT","\xc6","\xab","\x81","\xcf")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::LEFT_META,HX_HCSTRING("LEFT_META","\x3d","\xe5","\x47","\xe5")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::RIGHT_META,HX_HCSTRING("RIGHT_META","\x68","\xe1","\xdd","\xc9")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::NUM_LOCK,HX_HCSTRING("NUM_LOCK","\xe4","\x7b","\x03","\xeb")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::CAPS_LOCK,HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::MODE,HX_HCSTRING("MODE","\x63","\x9b","\x21","\x33")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::CTRL,HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::SHIFT,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::ALT,HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")},
	{hx::fsInt,(void *) &KeyModifier_Impl__obj::META,HX_HCSTRING("META","\xc5","\x12","\x1a","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_SHIFT,"LEFT_SHIFT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_SHIFT,"RIGHT_SHIFT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_CTRL,"LEFT_CTRL");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_CTRL,"RIGHT_CTRL");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_ALT,"LEFT_ALT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_ALT,"RIGHT_ALT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_META,"LEFT_META");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_META,"RIGHT_META");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::NUM_LOCK,"NUM_LOCK");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::MODE,"MODE");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::CTRL,"CTRL");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::META,"META");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_SHIFT,"LEFT_SHIFT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_SHIFT,"RIGHT_SHIFT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_CTRL,"LEFT_CTRL");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_CTRL,"RIGHT_CTRL");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_ALT,"LEFT_ALT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_ALT,"RIGHT_ALT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_META,"LEFT_META");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_META,"RIGHT_META");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::NUM_LOCK,"NUM_LOCK");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::MODE,"MODE");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::CTRL,"CTRL");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::META,"META");
};

#endif

hx::Class KeyModifier_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("LEFT_SHIFT","\xea","\x7a","\xfb","\x2f"),
	HX_HCSTRING("RIGHT_SHIFT","\x5f","\x24","\xa2","\x4e"),
	HX_HCSTRING("LEFT_CTRL","\x23","\x23","\xb7","\xde"),
	HX_HCSTRING("RIGHT_CTRL","\x4e","\x1f","\x4d","\xc3"),
	HX_HCSTRING("LEFT_ALT","\x91","\xb9","\xe3","\xc9"),
	HX_HCSTRING("RIGHT_ALT","\xc6","\xab","\x81","\xcf"),
	HX_HCSTRING("LEFT_META","\x3d","\xe5","\x47","\xe5"),
	HX_HCSTRING("RIGHT_META","\x68","\xe1","\xdd","\xc9"),
	HX_HCSTRING("NUM_LOCK","\xe4","\x7b","\x03","\xeb"),
	HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce"),
	HX_HCSTRING("MODE","\x63","\x9b","\x21","\x33"),
	HX_HCSTRING("CTRL","\xab","\x50","\x89","\x2c"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	HX_HCSTRING("META","\xc5","\x12","\x1a","\x33"),
	HX_HCSTRING("get_altKey","\xbf","\x17","\x52","\x35"),
	HX_HCSTRING("set_altKey","\x33","\xb6","\xcf","\x38"),
	HX_HCSTRING("get_capsLock","\xb5","\xbc","\xdb","\xc6"),
	HX_HCSTRING("set_capsLock","\x29","\xe0","\xd4","\xdb"),
	HX_HCSTRING("get_ctrlKey","\xcb","\x95","\x77","\xe7"),
	HX_HCSTRING("set_ctrlKey","\xd7","\x9c","\xe4","\xf1"),
	HX_HCSTRING("get_metaKey","\xf1","\x9f","\x7b","\xa7"),
	HX_HCSTRING("set_metaKey","\xfd","\xa6","\xe8","\xb1"),
	HX_HCSTRING("get_numLock","\x68","\xa1","\x32","\x21"),
	HX_HCSTRING("set_numLock","\x74","\xa8","\x9f","\x2b"),
	HX_HCSTRING("get_shiftKey","\x46","\x46","\xb9","\x4e"),
	HX_HCSTRING("set_shiftKey","\xba","\x69","\xb2","\x63"),
	::String(null()) };

void KeyModifier_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui._KeyModifier.KeyModifier_Impl_","\x20","\x28","\xaa","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyModifier_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< KeyModifier_Impl__obj >;
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

void KeyModifier_Impl__obj::__boot()
{
	NONE= (int)0;
	LEFT_SHIFT= (int)1;
	RIGHT_SHIFT= (int)2;
	LEFT_CTRL= (int)64;
	RIGHT_CTRL= (int)128;
	LEFT_ALT= (int)256;
	RIGHT_ALT= (int)512;
	LEFT_META= (int)1024;
	RIGHT_META= (int)2048;
	NUM_LOCK= (int)4096;
	CAPS_LOCK= (int)8192;
	MODE= (int)16384;
	CTRL= (int)192;
	SHIFT= (int)3;
	ALT= (int)768;
	META= (int)3072;
}

} // end namespace lime
} // end namespace ui
} // end namespace _KeyModifier
