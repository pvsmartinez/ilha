#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#include <lime/_backend/native/_NativeApplication/ApplicationEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void ApplicationEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_deltaTime)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.ApplicationEventInfo","new",0x285f59a7,"lime._backend.native._NativeApplication.ApplicationEventInfo.new","lime/_backend/native/NativeApplication.hx",618,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_deltaTime,"deltaTime")
int deltaTime = __o_deltaTime.Default(0);
{
	HX_STACK_LINE(620)
	this->type = type;
	HX_STACK_LINE(621)
	this->deltaTime = deltaTime;
}
;
	return null();
}

//ApplicationEventInfo_obj::~ApplicationEventInfo_obj() { }

Dynamic ApplicationEventInfo_obj::__CreateEmpty() { return  new ApplicationEventInfo_obj; }
hx::ObjectPtr< ApplicationEventInfo_obj > ApplicationEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_deltaTime)
{  hx::ObjectPtr< ApplicationEventInfo_obj > _result_ = new ApplicationEventInfo_obj();
	_result_->__construct(type,__o_deltaTime);
	return _result_;}

Dynamic ApplicationEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationEventInfo_obj > _result_ = new ApplicationEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::_backend::native::_NativeApplication::ApplicationEventInfo ApplicationEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.ApplicationEventInfo","clone",0x3158bc64,"lime._backend.native._NativeApplication.ApplicationEventInfo.clone","lime/_backend/native/NativeApplication.hx",626,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(628)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(628)
	int tmp1 = this->deltaTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	::lime::_backend::native::_NativeApplication::ApplicationEventInfo tmp2 = ::lime::_backend::native::_NativeApplication::ApplicationEventInfo_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ApplicationEventInfo_obj,clone,return )


ApplicationEventInfo_obj::ApplicationEventInfo_obj()
{
}

Dynamic ApplicationEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return deltaTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("deltaTime","\x25","\x3c","\x5c","\xf5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ApplicationEventInfo_obj,deltaTime),HX_HCSTRING("deltaTime","\x25","\x3c","\x5c","\xf5")},
	{hx::fsInt,(int)offsetof(ApplicationEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("deltaTime","\x25","\x3c","\x5c","\xf5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplicationEventInfo_obj::__mClass;

void ApplicationEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.ApplicationEventInfo","\x35","\xfa","\xe1","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ApplicationEventInfo_obj >;
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
