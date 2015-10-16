#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void KeyEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.KeyEventInfo","new",0x9d1330f8,"lime._backend.native._NativeApplication.KeyEventInfo.new","lime/_backend/native/NativeApplication.hx",741,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_windowID,"windowID")
HX_STACK_ARG(__o_keyCode,"keyCode")
HX_STACK_ARG(__o_modifier,"modifier")
int windowID = __o_windowID.Default(0);
int keyCode = __o_keyCode.Default(0);
int modifier = __o_modifier.Default(0);
{
	HX_STACK_LINE(743)
	this->type = type;
	HX_STACK_LINE(744)
	this->windowID = windowID;
	HX_STACK_LINE(745)
	this->keyCode = keyCode;
	HX_STACK_LINE(746)
	this->modifier = modifier;
}
;
	return null();
}

//KeyEventInfo_obj::~KeyEventInfo_obj() { }

Dynamic KeyEventInfo_obj::__CreateEmpty() { return  new KeyEventInfo_obj; }
hx::ObjectPtr< KeyEventInfo_obj > KeyEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier)
{  hx::ObjectPtr< KeyEventInfo_obj > _result_ = new KeyEventInfo_obj();
	_result_->__construct(type,__o_windowID,__o_keyCode,__o_modifier);
	return _result_;}

Dynamic KeyEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyEventInfo_obj > _result_ = new KeyEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::lime::_backend::native::_NativeApplication::KeyEventInfo KeyEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.KeyEventInfo","clone",0x1c2dc9f5,"lime._backend.native._NativeApplication.KeyEventInfo.clone","lime/_backend/native/NativeApplication.hx",751,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(753)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(753)
	int tmp1 = this->windowID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(753)
	int tmp2 = this->keyCode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(753)
	int tmp3 = this->modifier;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(753)
	::lime::_backend::native::_NativeApplication::KeyEventInfo tmp4 = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(753)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(KeyEventInfo_obj,clone,return )


KeyEventInfo_obj::KeyEventInfo_obj()
{
}

Dynamic KeyEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modifier") ) { return modifier; }
		if (HX_FIELD_EQ(inName,"windowID") ) { return windowID; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modifier") ) { modifier=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("modifier","\x57","\xdb","\xc7","\x16"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,keyCode),HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")},
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,modifier),HX_HCSTRING("modifier","\x57","\xdb","\xc7","\x16")},
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(KeyEventInfo_obj,windowID),HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("modifier","\x57","\xdb","\xc7","\x16"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class KeyEventInfo_obj::__mClass;

void KeyEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.KeyEventInfo","\x06","\x95","\x01","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyEventInfo_obj >;
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
