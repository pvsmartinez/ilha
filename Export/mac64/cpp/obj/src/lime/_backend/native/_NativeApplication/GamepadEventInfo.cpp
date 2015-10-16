#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void GamepadEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.GamepadEventInfo","new",0xafb72336,"lime._backend.native._NativeApplication.GamepadEventInfo.new","lime/_backend/native/NativeApplication.hx",654,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_button,"button")
HX_STACK_ARG(__o_axis,"axis")
HX_STACK_ARG(__o_value,"value")
int id = __o_id.Default(0);
int button = __o_button.Default(0);
int axis = __o_axis.Default(0);
Float value = __o_value.Default(0);
{
	HX_STACK_LINE(656)
	this->type = type;
	HX_STACK_LINE(657)
	this->id = id;
	HX_STACK_LINE(658)
	this->button = button;
	HX_STACK_LINE(659)
	this->axis = axis;
	HX_STACK_LINE(660)
	this->value = value;
}
;
	return null();
}

//GamepadEventInfo_obj::~GamepadEventInfo_obj() { }

Dynamic GamepadEventInfo_obj::__CreateEmpty() { return  new GamepadEventInfo_obj; }
hx::ObjectPtr< GamepadEventInfo_obj > GamepadEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value)
{  hx::ObjectPtr< GamepadEventInfo_obj > _result_ = new GamepadEventInfo_obj();
	_result_->__construct(type,__o_id,__o_button,__o_axis,__o_value);
	return _result_;}

Dynamic GamepadEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadEventInfo_obj > _result_ = new GamepadEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::lime::_backend::native::_NativeApplication::GamepadEventInfo GamepadEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.GamepadEventInfo","clone",0x156147b3,"lime._backend.native._NativeApplication.GamepadEventInfo.clone","lime/_backend/native/NativeApplication.hx",665,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(667)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(667)
	int tmp1 = this->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(667)
	int tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(667)
	int tmp3 = this->axis;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(667)
	Float tmp4 = this->value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(667)
	::lime::_backend::native::_NativeApplication::GamepadEventInfo tmp5 = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(667)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(GamepadEventInfo_obj,clone,return )


GamepadEventInfo_obj::GamepadEventInfo_obj()
{
}

Dynamic GamepadEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(GamepadEventInfo_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class GamepadEventInfo_obj::__mClass;

void GamepadEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.GamepadEventInfo","\x44","\x10","\x74","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GamepadEventInfo_obj >;
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
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
