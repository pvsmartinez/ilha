#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_CurveToView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/CurveToView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void CurveToView_Impl__obj::__construct()
{
	return null();
}

//CurveToView_Impl__obj::~CurveToView_Impl__obj() { }

Dynamic CurveToView_Impl__obj::__CreateEmpty() { return  new CurveToView_Impl__obj; }
hx::ObjectPtr< CurveToView_Impl__obj > CurveToView_Impl__obj::__new()
{  hx::ObjectPtr< CurveToView_Impl__obj > _result_ = new CurveToView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CurveToView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CurveToView_Impl__obj > _result_ = new CurveToView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader CurveToView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_","_new",0x02b6a548,"openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",292,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(292)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,_new,return )

Float CurveToView_Impl__obj::get_controlX( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_","get_controlX",0xd0ea894b,"openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_.get_controlX","openfl/_internal/renderer/DrawCommandReader.hx",293,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(293)
	int tmp = this1->fPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_controlX,return )

Float CurveToView_Impl__obj::get_controlY( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_","get_controlY",0xd0ea894c,"openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_.get_controlY","openfl/_internal/renderer/DrawCommandReader.hx",294,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(294)
	int tmp = (this1->fPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_controlY,return )

Float CurveToView_Impl__obj::get_anchorX( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_","get_anchorX",0x40299753,"openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_.get_anchorX","openfl/_internal/renderer/DrawCommandReader.hx",295,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(295)
	int tmp = (this1->fPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_anchorX,return )

Float CurveToView_Impl__obj::get_anchorY( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_","get_anchorY",0x40299754,"openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_.get_anchorY","openfl/_internal/renderer/DrawCommandReader.hx",296,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(296)
	int tmp = (this1->fPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CurveToView_Impl__obj,get_anchorY,return )


CurveToView_Impl__obj::CurveToView_Impl__obj()
{
}

bool CurveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchorX") ) { outValue = get_anchorX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_anchorY") ) { outValue = get_anchorY_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_controlX") ) { outValue = get_controlX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_controlY") ) { outValue = get_controlY_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurveToView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurveToView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CurveToView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_controlX","\x64","\x3a","\xd6","\xec"),
	HX_HCSTRING("get_controlY","\x65","\x3a","\xd6","\xec"),
	HX_HCSTRING("get_anchorX","\x5a","\x4c","\x9c","\x88"),
	HX_HCSTRING("get_anchorY","\x5b","\x4c","\x9c","\x88"),
	::String(null()) };

void CurveToView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_","\xe7","\xd9","\x14","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CurveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CurveToView_Impl__obj >;
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
