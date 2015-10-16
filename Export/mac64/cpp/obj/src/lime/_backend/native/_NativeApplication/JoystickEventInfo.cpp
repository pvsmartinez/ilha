#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#include <lime/_backend/native/_NativeApplication/JoystickEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void JoystickEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< Float >  __o_value,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.JoystickEventInfo","new",0x2df84fa1,"lime._backend.native._NativeApplication.JoystickEventInfo.new","lime/_backend/native/NativeApplication.hx",697,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_index,"index")
HX_STACK_ARG(__o_value,"value")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int id = __o_id.Default(0);
int index = __o_index.Default(0);
Float value = __o_value.Default(0);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(699)
	this->type = type;
	HX_STACK_LINE(700)
	this->id = id;
	HX_STACK_LINE(701)
	this->index = index;
	HX_STACK_LINE(702)
	this->value = value;
	HX_STACK_LINE(703)
	this->x = x;
	HX_STACK_LINE(704)
	this->y = y;
}
;
	return null();
}

//JoystickEventInfo_obj::~JoystickEventInfo_obj() { }

Dynamic JoystickEventInfo_obj::__CreateEmpty() { return  new JoystickEventInfo_obj; }
hx::ObjectPtr< JoystickEventInfo_obj > JoystickEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< Float >  __o_value,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< JoystickEventInfo_obj > _result_ = new JoystickEventInfo_obj();
	_result_->__construct(type,__o_id,__o_index,__o_value,__o_x,__o_y);
	return _result_;}

Dynamic JoystickEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoystickEventInfo_obj > _result_ = new JoystickEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::lime::_backend::native::_NativeApplication::JoystickEventInfo JoystickEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.JoystickEventInfo","clone",0x8796a4de,"lime._backend.native._NativeApplication.JoystickEventInfo.clone","lime/_backend/native/NativeApplication.hx",709,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(711)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(711)
	int tmp1 = this->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	int tmp2 = this->index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(711)
	Float tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(711)
	int tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(711)
	int tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(711)
	::lime::_backend::native::_NativeApplication::JoystickEventInfo tmp6 = ::lime::_backend::native::_NativeApplication::JoystickEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(711)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(JoystickEventInfo_obj,clone,return )


JoystickEventInfo_obj::JoystickEventInfo_obj()
{
}

Dynamic JoystickEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JoystickEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(JoystickEventInfo_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class JoystickEventInfo_obj::__mClass;

void JoystickEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.JoystickEventInfo","\x2f","\xeb","\x95","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickEventInfo_obj >;
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
