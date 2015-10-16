#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_OverrideMatrixView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/OverrideMatrixView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void OverrideMatrixView_Impl__obj::__construct()
{
	return null();
}

//OverrideMatrixView_Impl__obj::~OverrideMatrixView_Impl__obj() { }

Dynamic OverrideMatrixView_Impl__obj::__CreateEmpty() { return  new OverrideMatrixView_Impl__obj; }
hx::ObjectPtr< OverrideMatrixView_Impl__obj > OverrideMatrixView_Impl__obj::__new()
{  hx::ObjectPtr< OverrideMatrixView_Impl__obj > _result_ = new OverrideMatrixView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic OverrideMatrixView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OverrideMatrixView_Impl__obj > _result_ = new OverrideMatrixView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader OverrideMatrixView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_","_new",0x139046f5,"openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",449,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(449)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideMatrixView_Impl__obj,_new,return )

::openfl::geom::Matrix OverrideMatrixView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_","get_matrix",0x91a43e9e,"openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",450,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(450)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	::openfl::geom::Matrix tmp2 = ((::openfl::geom::Matrix)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(450)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OverrideMatrixView_Impl__obj,get_matrix,return )


OverrideMatrixView_Impl__obj::OverrideMatrixView_Impl__obj()
{
}

bool OverrideMatrixView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OverrideMatrixView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OverrideMatrixView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class OverrideMatrixView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	::String(null()) };

void OverrideMatrixView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.OverrideMatrixView_Impl_","\x5a","\x97","\x98","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OverrideMatrixView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OverrideMatrixView_Impl__obj >;
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
