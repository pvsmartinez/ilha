#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void MouseEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.MouseEventInfo","new",0x1e4161f2,"lime._backend.native._NativeApplication.MouseEventInfo.new","lime/_backend/native/NativeApplication.hx",782,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_windowID,"windowID")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_button,"button")
HX_STACK_ARG(__o_movementX,"movementX")
HX_STACK_ARG(__o_movementY,"movementY")
int windowID = __o_windowID.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int button = __o_button.Default(0);
Float movementX = __o_movementX.Default(0);
Float movementY = __o_movementY.Default(0);
{
	HX_STACK_LINE(784)
	this->type = type;
	HX_STACK_LINE(785)
	this->windowID = (int)0;
	HX_STACK_LINE(786)
	this->x = x;
	HX_STACK_LINE(787)
	this->y = y;
	HX_STACK_LINE(788)
	this->button = button;
	HX_STACK_LINE(789)
	this->movementX = movementX;
	HX_STACK_LINE(790)
	this->movementY = movementY;
}
;
	return null();
}

//MouseEventInfo_obj::~MouseEventInfo_obj() { }

Dynamic MouseEventInfo_obj::__CreateEmpty() { return  new MouseEventInfo_obj; }
hx::ObjectPtr< MouseEventInfo_obj > MouseEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_button,hx::Null< Float >  __o_movementX,hx::Null< Float >  __o_movementY)
{  hx::ObjectPtr< MouseEventInfo_obj > _result_ = new MouseEventInfo_obj();
	_result_->__construct(type,__o_windowID,__o_x,__o_y,__o_button,__o_movementX,__o_movementY);
	return _result_;}

Dynamic MouseEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEventInfo_obj > _result_ = new MouseEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::lime::_backend::native::_NativeApplication::MouseEventInfo MouseEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.MouseEventInfo","clone",0xea05ad6f,"lime._backend.native._NativeApplication.MouseEventInfo.clone","lime/_backend/native/NativeApplication.hx",795,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(797)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(797)
	int tmp1 = this->windowID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(797)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(797)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(797)
	int tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(797)
	Float tmp5 = this->movementX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(797)
	Float tmp6 = this->movementY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(797)
	::lime::_backend::native::_NativeApplication::MouseEventInfo tmp7 = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(797)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEventInfo_obj,clone,return )


MouseEventInfo_obj::MouseEventInfo_obj()
{
}

Dynamic MouseEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return windowID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { return movementX; }
		if (HX_FIELD_EQ(inName,"movementY") ) { return movementY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { movementX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movementY") ) { movementY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("movementX","\x49","\x04","\x5d","\x30"));
	outFields->push(HX_HCSTRING("movementY","\x4a","\x04","\x5d","\x30"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,movementX),HX_HCSTRING("movementX","\x49","\x04","\x5d","\x30")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,movementY),HX_HCSTRING("movementY","\x4a","\x04","\x5d","\x30")},
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(MouseEventInfo_obj,windowID),HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(MouseEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("movementX","\x49","\x04","\x5d","\x30"),
	HX_HCSTRING("movementY","\x4a","\x04","\x5d","\x30"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class MouseEventInfo_obj::__mClass;

void MouseEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.MouseEventInfo","\x00","\x41","\x51","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEventInfo_obj >;
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
