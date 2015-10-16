#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void TouchEventInfo_obj::__construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id,hx::Null< Float >  __o_dx,hx::Null< Float >  __o_dy,hx::Null< Float >  __o_pressure,hx::Null< int >  __o_device)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.TouchEventInfo","new",0x974ae818,"lime._backend.native._NativeApplication.TouchEventInfo.new","lime/_backend/native/NativeApplication.hx",940,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_dx,"dx")
HX_STACK_ARG(__o_dy,"dy")
HX_STACK_ARG(__o_pressure,"pressure")
HX_STACK_ARG(__o_device,"device")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int id = __o_id.Default(0);
Float dx = __o_dx.Default(0);
Float dy = __o_dy.Default(0);
Float pressure = __o_pressure.Default(0);
int device = __o_device.Default(0);
{
	HX_STACK_LINE(942)
	this->type = type;
	HX_STACK_LINE(943)
	this->x = x;
	HX_STACK_LINE(944)
	this->y = y;
	HX_STACK_LINE(945)
	this->id = id;
	HX_STACK_LINE(946)
	this->dx = dx;
	HX_STACK_LINE(947)
	this->dy = dy;
	HX_STACK_LINE(948)
	this->pressure = pressure;
	HX_STACK_LINE(949)
	this->device = device;
}
;
	return null();
}

//TouchEventInfo_obj::~TouchEventInfo_obj() { }

Dynamic TouchEventInfo_obj::__CreateEmpty() { return  new TouchEventInfo_obj; }
hx::ObjectPtr< TouchEventInfo_obj > TouchEventInfo_obj::__new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id,hx::Null< Float >  __o_dx,hx::Null< Float >  __o_dy,hx::Null< Float >  __o_pressure,hx::Null< int >  __o_device)
{  hx::ObjectPtr< TouchEventInfo_obj > _result_ = new TouchEventInfo_obj();
	_result_->__construct(type,__o_x,__o_y,__o_id,__o_dx,__o_dy,__o_pressure,__o_device);
	return _result_;}

Dynamic TouchEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventInfo_obj > _result_ = new TouchEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

::lime::_backend::native::_NativeApplication::TouchEventInfo TouchEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.TouchEventInfo","clone",0xdd198915,"lime._backend.native._NativeApplication.TouchEventInfo.clone","lime/_backend/native/NativeApplication.hx",954,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(956)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(956)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(956)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(956)
	int tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(956)
	Float tmp4 = this->dx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(956)
	Float tmp5 = this->dy;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(956)
	Float tmp6 = this->pressure;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(956)
	int tmp7 = this->device;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(956)
	::lime::_backend::native::_NativeApplication::TouchEventInfo tmp8 = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(956)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(TouchEventInfo_obj,clone,return )


TouchEventInfo_obj::TouchEventInfo_obj()
{
}

Dynamic TouchEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		if (HX_FIELD_EQ(inName,"dy") ) { return dy; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return pressure; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("device","\x96","\xdc","\x77","\x71"));
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TouchEventInfo_obj,device),HX_HCSTRING("device","\x96","\xdc","\x77","\x71")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,dy),HX_HCSTRING("dy","\x95","\x57","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TouchEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsInt,(int)offsetof(TouchEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("device","\x96","\xdc","\x77","\x71"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class TouchEventInfo_obj::__mClass;

void TouchEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.TouchEventInfo","\x26","\x3c","\x07","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEventInfo_obj >;
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
