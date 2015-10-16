#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__GamepadButton_GamepadButton_Impl_
#include <lime/ui/_GamepadButton/GamepadButton_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _GamepadButton{

Void GamepadButton_Impl__obj::__construct()
{
	return null();
}

//GamepadButton_Impl__obj::~GamepadButton_Impl__obj() { }

Dynamic GamepadButton_Impl__obj::__CreateEmpty() { return  new GamepadButton_Impl__obj; }
hx::ObjectPtr< GamepadButton_Impl__obj > GamepadButton_Impl__obj::__new()
{  hx::ObjectPtr< GamepadButton_Impl__obj > _result_ = new GamepadButton_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GamepadButton_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadButton_Impl__obj > _result_ = new GamepadButton_Impl__obj();
	_result_->__construct();
	return _result_;}

int GamepadButton_Impl__obj::A;

int GamepadButton_Impl__obj::B;

int GamepadButton_Impl__obj::X;

int GamepadButton_Impl__obj::Y;

int GamepadButton_Impl__obj::BACK;

int GamepadButton_Impl__obj::GUIDE;

int GamepadButton_Impl__obj::START;

int GamepadButton_Impl__obj::LEFT_STICK;

int GamepadButton_Impl__obj::RIGHT_STICK;

int GamepadButton_Impl__obj::LEFT_SHOULDER;

int GamepadButton_Impl__obj::RIGHT_SHOULDER;

int GamepadButton_Impl__obj::DPAD_UP;

int GamepadButton_Impl__obj::DPAD_DOWN;

int GamepadButton_Impl__obj::DPAD_LEFT;

int GamepadButton_Impl__obj::DPAD_RIGHT;

::String GamepadButton_Impl__obj::toString( int this1){
	HX_STACK_FRAME("lime.ui._GamepadButton.GamepadButton_Impl_","toString",0xbd666d80,"lime.ui._GamepadButton.GamepadButton_Impl_.toString","lime/ui/GamepadButton.hx",24,0x5ef9656c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(26)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("A","\x41","\x00","\x00","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("B","\x42","\x00","\x00","\x00");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("X","\x58","\x00","\x00","\x00");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(31)
			tmp1 = HX_HCSTRING("Y","\x59","\x00","\x00","\x00");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("START","\x42","\xac","\xf9","\x01");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(37)
			tmp1 = HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(39)
			tmp1 = HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(40)
			tmp1 = HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(41)
			tmp1 = HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(42)
			tmp1 = HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3");
		}
		;break;
		default: {
			HX_STACK_LINE(43)
			::String tmp2 = (HX_HCSTRING("UNKNOWN (","\xf2","\x41","\x8b","\x8c") + this1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			tmp1 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadButton_Impl__obj,toString,return )


GamepadButton_Impl__obj::GamepadButton_Impl__obj()
{
}

bool GamepadButton_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::GUIDE,HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::LEFT_STICK,HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::RIGHT_STICK,HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::LEFT_SHOULDER,HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::RIGHT_SHOULDER,HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &GamepadButton_Impl__obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::GUIDE,"GUIDE");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::START,"START");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_STICK,"LEFT_STICK");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_STICK,"RIGHT_STICK");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::GUIDE,"GUIDE");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::START,"START");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_STICK,"LEFT_STICK");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_STICK,"RIGHT_STICK");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
};

#endif

hx::Class GamepadButton_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37"),
	HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56"),
	HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"),
	HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GamepadButton_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui._GamepadButton.GamepadButton_Impl_","\x1a","\xae","\x13","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamepadButton_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GamepadButton_Impl__obj >;
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

void GamepadButton_Impl__obj::__boot()
{
	A= (int)0;
	B= (int)1;
	X= (int)2;
	Y= (int)3;
	BACK= (int)4;
	GUIDE= (int)5;
	START= (int)6;
	LEFT_STICK= (int)7;
	RIGHT_STICK= (int)8;
	LEFT_SHOULDER= (int)9;
	RIGHT_SHOULDER= (int)10;
	DPAD_UP= (int)11;
	DPAD_DOWN= (int)12;
	DPAD_LEFT= (int)13;
	DPAD_RIGHT= (int)14;
}

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadButton
