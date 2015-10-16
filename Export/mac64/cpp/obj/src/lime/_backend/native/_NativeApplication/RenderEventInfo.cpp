#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void RenderEventInfo_obj::__construct(Dynamic type,::lime::graphics::RenderContext context)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.RenderEventInfo","new",0xcf12fe07,"lime._backend.native._NativeApplication.RenderEventInfo.new","lime/_backend/native/NativeApplication.hx",822,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(824)
	this->type = type;
	HX_STACK_LINE(825)
	this->context = context;
}
;
	return null();
}

//RenderEventInfo_obj::~RenderEventInfo_obj() { }

Dynamic RenderEventInfo_obj::__CreateEmpty() { return  new RenderEventInfo_obj; }
hx::ObjectPtr< RenderEventInfo_obj > RenderEventInfo_obj::__new(Dynamic type,::lime::graphics::RenderContext context)
{  hx::ObjectPtr< RenderEventInfo_obj > _result_ = new RenderEventInfo_obj();
	_result_->__construct(type,context);
	return _result_;}

Dynamic RenderEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderEventInfo_obj > _result_ = new RenderEventInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::_backend::native::_NativeApplication::RenderEventInfo RenderEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.RenderEventInfo","clone",0xa78638c4,"lime._backend.native._NativeApplication.RenderEventInfo.clone","lime/_backend/native/NativeApplication.hx",830,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(832)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(832)
	::lime::graphics::RenderContext tmp1 = this->context;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(832)
	::lime::_backend::native::_NativeApplication::RenderEventInfo tmp2 = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(832)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(RenderEventInfo_obj,clone,return )


RenderEventInfo_obj::RenderEventInfo_obj()
{
}

void RenderEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderEventInfo);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void RenderEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic RenderEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::RenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(RenderEventInfo_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(RenderEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderEventInfo_obj::__mClass;

void RenderEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.RenderEventInfo","\x95","\xee","\x13","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderEventInfo_obj >;
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
