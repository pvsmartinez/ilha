#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void WindowEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.WindowEventInfo","new",0xd11afd2d,"lime._backend.native._NativeApplication.WindowEventInfo.new","lime/_backend/native/NativeApplication.hx",984,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_windowID,"windowID")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int windowID = __o_windowID.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(986)
	this->type = type;
	HX_STACK_LINE(987)
	this->windowID = windowID;
	HX_STACK_LINE(988)
	this->width = width;
	HX_STACK_LINE(989)
	this->height = height;
	HX_STACK_LINE(990)
	this->x = x;
	HX_STACK_LINE(991)
	this->y = y;
}
;
	return null();
}

//WindowEventInfo_obj::~WindowEventInfo_obj() { }

Dynamic WindowEventInfo_obj::__CreateEmpty() { return  new WindowEventInfo_obj; }
hx::ObjectPtr< WindowEventInfo_obj > WindowEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< WindowEventInfo_obj > _result_ = new WindowEventInfo_obj();
	_result_->__construct(type,__o_windowID,__o_width,__o_height,__o_x,__o_y);
	return _result_;}

Dynamic WindowEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindowEventInfo_obj > _result_ = new WindowEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::lime::_backend::native::_NativeApplication::WindowEventInfo WindowEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.WindowEventInfo","clone",0x3ae8cd6a,"lime._backend.native._NativeApplication.WindowEventInfo.clone","lime/_backend/native/NativeApplication.hx",996,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(998)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(998)
	int tmp1 = this->windowID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(998)
	int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(998)
	int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(998)
	int tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(998)
	int tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(998)
	::lime::_backend::native::_NativeApplication::WindowEventInfo tmp6 = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(998)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(WindowEventInfo_obj,clone,return )


WindowEventInfo_obj::WindowEventInfo_obj()
{
}

Dynamic WindowEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return windowID; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WindowEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,windowID),HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowEventInfo_obj::__mClass;

void WindowEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.WindowEventInfo","\xbb","\xe2","\xd7","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowEventInfo_obj >;
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
