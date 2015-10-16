#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__JoystickHatPosition_JoystickHatPosition_Impl_
#include <lime/ui/_JoystickHatPosition/JoystickHatPosition_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _JoystickHatPosition{

Void JoystickHatPosition_Impl__obj::__construct()
{
	return null();
}

//JoystickHatPosition_Impl__obj::~JoystickHatPosition_Impl__obj() { }

Dynamic JoystickHatPosition_Impl__obj::__CreateEmpty() { return  new JoystickHatPosition_Impl__obj; }
hx::ObjectPtr< JoystickHatPosition_Impl__obj > JoystickHatPosition_Impl__obj::__new()
{  hx::ObjectPtr< JoystickHatPosition_Impl__obj > _result_ = new JoystickHatPosition_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic JoystickHatPosition_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoystickHatPosition_Impl__obj > _result_ = new JoystickHatPosition_Impl__obj();
	_result_->__construct();
	return _result_;}

int JoystickHatPosition_Impl__obj::CENTER;

int JoystickHatPosition_Impl__obj::DOWN;

int JoystickHatPosition_Impl__obj::LEFT;

int JoystickHatPosition_Impl__obj::RIGHT;

int JoystickHatPosition_Impl__obj::UP;

int JoystickHatPosition_Impl__obj::DOWN_LEFT;

int JoystickHatPosition_Impl__obj::DOWN_RIGHT;

int JoystickHatPosition_Impl__obj::UP_LEFT;

int JoystickHatPosition_Impl__obj::UP_RIGHT;

int JoystickHatPosition_Impl__obj::_new( int value){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","_new",0x06d06a8b,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_._new","lime/ui/JoystickHatPosition.hx",27,0x4bf9acf7)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickHatPosition_Impl__obj,_new,return )

bool JoystickHatPosition_Impl__obj::get_center( int this1){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","get_center",0x8bc72648,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.get_center","lime/ui/JoystickHatPosition.hx",32,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(34)
	bool tmp = (this1 == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickHatPosition_Impl__obj,get_center,return )

bool JoystickHatPosition_Impl__obj::set_center( int this1,bool value){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","set_center",0x8f44c4bc,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.set_center","lime/ui/JoystickHatPosition.hx",39,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(43)
		this1 = (int)0;
	}
	HX_STACK_LINE(47)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickHatPosition_Impl__obj,set_center,return )

bool JoystickHatPosition_Impl__obj::get_down( int this1){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","get_down",0xf47ce615,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.get_down","lime/ui/JoystickHatPosition.hx",52,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(54)
	int tmp = (int(this1) & int((int)4));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickHatPosition_Impl__obj,get_down,return )

bool JoystickHatPosition_Impl__obj::set_down( int this1,bool value){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","set_down",0xa2da3f89,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.set_down","lime/ui/JoystickHatPosition.hx",59,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(61)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(63)
		hx::OrEq(this1,(int)4);
	}
	else{
		HX_STACK_LINE(67)
		int tmp1 = ((int)268435455 - (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(71)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickHatPosition_Impl__obj,set_down,return )

bool JoystickHatPosition_Impl__obj::get_left( int this1){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","get_left",0xf9bef5ba,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.get_left","lime/ui/JoystickHatPosition.hx",76,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(78)
	int tmp = (int(this1) & int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickHatPosition_Impl__obj,get_left,return )

bool JoystickHatPosition_Impl__obj::set_left( int this1,bool value){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","set_left",0xa81c4f2e,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.set_left","lime/ui/JoystickHatPosition.hx",83,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(85)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(87)
		hx::OrEq(this1,(int)8);
	}
	else{
		HX_STACK_LINE(91)
		int tmp1 = ((int)268435455 - (int)8);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(95)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickHatPosition_Impl__obj,set_left,return )

bool JoystickHatPosition_Impl__obj::get_right( int this1){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","get_right",0x04651ac9,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.get_right","lime/ui/JoystickHatPosition.hx",100,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(102)
	int tmp = (int(this1) & int((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickHatPosition_Impl__obj,get_right,return )

bool JoystickHatPosition_Impl__obj::set_right( int this1,bool value){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","set_right",0xe7b606d5,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.set_right","lime/ui/JoystickHatPosition.hx",107,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(109)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	if ((tmp)){
		HX_STACK_LINE(111)
		hx::OrEq(this1,(int)2);
	}
	else{
		HX_STACK_LINE(115)
		int tmp1 = ((int)268435455 - (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(119)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickHatPosition_Impl__obj,set_right,return )

bool JoystickHatPosition_Impl__obj::get_up( int this1){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","get_up",0xb9c0714e,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.get_up","lime/ui/JoystickHatPosition.hx",124,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(126)
	int tmp = (int(this1) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickHatPosition_Impl__obj,get_up,return )

bool JoystickHatPosition_Impl__obj::set_up( int this1,bool value){
	HX_STACK_FRAME("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","set_up",0x8608c5c2,"lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_.set_up","lime/ui/JoystickHatPosition.hx",131,0x4bf9acf7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(133)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	if ((tmp)){
		HX_STACK_LINE(135)
		hx::OrEq(this1,(int)1);
	}
	else{
		HX_STACK_LINE(139)
		int tmp1 = ((int)268435455 - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		hx::AndEq(this1,tmp1);
	}
	HX_STACK_LINE(143)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JoystickHatPosition_Impl__obj,set_up,return )


JoystickHatPosition_Impl__obj::JoystickHatPosition_Impl__obj()
{
}

bool JoystickHatPosition_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_up") ) { outValue = get_up_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_up") ) { outValue = set_up_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_down") ) { outValue = get_down_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_down") ) { outValue = set_down_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_left") ) { outValue = get_left_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_left") ) { outValue = set_left_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { outValue = get_right_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_right") ) { outValue = set_right_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_center") ) { outValue = get_center_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_center") ) { outValue = set_center_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::DOWN_LEFT,HX_HCSTRING("DOWN_LEFT","\x44","\x88","\xd4","\xe5")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::DOWN_RIGHT,HX_HCSTRING("DOWN_RIGHT","\xdf","\xc0","\x2f","\xab")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::UP_LEFT,HX_HCSTRING("UP_LEFT","\xab","\x37","\xaf","\xb0")},
	{hx::fsInt,(void *) &JoystickHatPosition_Impl__obj::UP_RIGHT,HX_HCSTRING("UP_RIGHT","\x98","\x8b","\xae","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::UP,"UP");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::DOWN_LEFT,"DOWN_LEFT");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::DOWN_RIGHT,"DOWN_RIGHT");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::UP_LEFT,"UP_LEFT");
	HX_MARK_MEMBER_NAME(JoystickHatPosition_Impl__obj::UP_RIGHT,"UP_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::DOWN_LEFT,"DOWN_LEFT");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::DOWN_RIGHT,"DOWN_RIGHT");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::UP_LEFT,"UP_LEFT");
	HX_VISIT_MEMBER_NAME(JoystickHatPosition_Impl__obj::UP_RIGHT,"UP_RIGHT");
};

#endif

hx::Class JoystickHatPosition_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN_LEFT","\x44","\x88","\xd4","\xe5"),
	HX_HCSTRING("DOWN_RIGHT","\xdf","\xc0","\x2f","\xab"),
	HX_HCSTRING("UP_LEFT","\xab","\x37","\xaf","\xb0"),
	HX_HCSTRING("UP_RIGHT","\x98","\x8b","\xae","\x5f"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_center","\x9e","\x95","\x62","\xf6"),
	HX_HCSTRING("set_center","\x12","\x34","\xe0","\xf9"),
	HX_HCSTRING("get_down","\xeb","\xb3","\x28","\xc2"),
	HX_HCSTRING("set_down","\x5f","\x0d","\x86","\x70"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_up","\xa4","\xfd","\x2f","\xa3"),
	HX_HCSTRING("set_up","\x18","\x52","\x78","\x6f"),
	::String(null()) };

void JoystickHatPosition_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui._JoystickHatPosition.JoystickHatPosition_Impl_","\x84","\x1b","\x37","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JoystickHatPosition_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JoystickHatPosition_Impl__obj >;
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

void JoystickHatPosition_Impl__obj::__boot()
{
	CENTER= (int)0;
	DOWN= (int)4;
	LEFT= (int)8;
	RIGHT= (int)2;
	UP= (int)1;
	DOWN_LEFT= (int)12;
	DOWN_RIGHT= (int)6;
	UP_LEFT= (int)9;
	UP_RIGHT= (int)3;
}

} // end namespace lime
} // end namespace ui
} // end namespace _JoystickHatPosition
