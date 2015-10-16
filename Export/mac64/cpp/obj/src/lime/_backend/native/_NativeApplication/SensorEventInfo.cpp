#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo
#include <lime/_backend/native/_NativeApplication/SensorEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void SensorEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.SensorEventInfo","new",0x51c6b8a3,"lime._backend.native._NativeApplication.SensorEventInfo.new","lime/_backend/native/NativeApplication.hx",859,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
int id = __o_id.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(861)
	this->type = type;
	HX_STACK_LINE(862)
	this->id = id;
	HX_STACK_LINE(863)
	this->x = x;
	HX_STACK_LINE(864)
	this->y = y;
	HX_STACK_LINE(865)
	this->z = z;
}
;
	return null();
}

//SensorEventInfo_obj::~SensorEventInfo_obj() { }

Dynamic SensorEventInfo_obj::__CreateEmpty() { return  new SensorEventInfo_obj; }
hx::ObjectPtr< SensorEventInfo_obj > SensorEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< SensorEventInfo_obj > _result_ = new SensorEventInfo_obj();
	_result_->__construct(type,__o_id,__o_x,__o_y,__o_z);
	return _result_;}

Dynamic SensorEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SensorEventInfo_obj > _result_ = new SensorEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::lime::_backend::native::_NativeApplication::SensorEventInfo SensorEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.SensorEventInfo","clone",0x0a92d260,"lime._backend.native._NativeApplication.SensorEventInfo.clone","lime/_backend/native/NativeApplication.hx",870,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(872)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(872)
	int tmp1 = this->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(872)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(872)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(872)
	Float tmp4 = this->z;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(872)
	::lime::_backend::native::_NativeApplication::SensorEventInfo tmp5 = ::lime::_backend::native::_NativeApplication::SensorEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(872)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(SensorEventInfo_obj,clone,return )


SensorEventInfo_obj::SensorEventInfo_obj()
{
}

Dynamic SensorEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SensorEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SensorEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SensorEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SensorEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SensorEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(SensorEventInfo_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SensorEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SensorEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SensorEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class SensorEventInfo_obj::__mClass;

void SensorEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.SensorEventInfo","\x31","\x2b","\xf7","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SensorEventInfo_obj >;
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
