#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_EndFillView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/EndFillView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void EndFillView_Impl__obj::__construct()
{
	return null();
}

//EndFillView_Impl__obj::~EndFillView_Impl__obj() { }

Dynamic EndFillView_Impl__obj::__CreateEmpty() { return  new EndFillView_Impl__obj; }
hx::ObjectPtr< EndFillView_Impl__obj > EndFillView_Impl__obj::__new()
{  hx::ObjectPtr< EndFillView_Impl__obj > _result_ = new EndFillView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic EndFillView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EndFillView_Impl__obj > _result_ = new EndFillView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader EndFillView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.EndFillView_Impl_","_new",0xde898fd4,"openfl._internal.renderer._DrawCommandReader.EndFillView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",383,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(383)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EndFillView_Impl__obj,_new,return )


EndFillView_Impl__obj::EndFillView_Impl__obj()
{
}

bool EndFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EndFillView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EndFillView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class EndFillView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null()) };

void EndFillView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.EndFillView_Impl_","\xdb","\xfa","\xc1","\xa9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EndFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EndFillView_Impl__obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
