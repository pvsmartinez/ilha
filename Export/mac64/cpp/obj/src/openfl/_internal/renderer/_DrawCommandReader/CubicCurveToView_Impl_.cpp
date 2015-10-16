#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_CubicCurveToView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/CubicCurveToView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void CubicCurveToView_Impl__obj::__construct()
{
	return null();
}

//CubicCurveToView_Impl__obj::~CubicCurveToView_Impl__obj() { }

Dynamic CubicCurveToView_Impl__obj::__CreateEmpty() { return  new CubicCurveToView_Impl__obj; }
hx::ObjectPtr< CubicCurveToView_Impl__obj > CubicCurveToView_Impl__obj::__new()
{  hx::ObjectPtr< CubicCurveToView_Impl__obj > _result_ = new CubicCurveToView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CubicCurveToView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicCurveToView_Impl__obj > _result_ = new CubicCurveToView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader CubicCurveToView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","_new",0x4a8bb022,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",279,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(279)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,_new,return )

Float CubicCurveToView_Impl__obj::get_controlX1( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlX1",0x39f1626c,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlX1","openfl/_internal/renderer/DrawCommandReader.hx",280,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(280)
	int tmp = this1->fPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlX1,return )

Float CubicCurveToView_Impl__obj::get_controlY1( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlY1",0x39f1634b,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlY1","openfl/_internal/renderer/DrawCommandReader.hx",281,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(281)
	int tmp = (this1->fPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlY1,return )

Float CubicCurveToView_Impl__obj::get_controlX2( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlX2",0x39f1626d,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlX2","openfl/_internal/renderer/DrawCommandReader.hx",282,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(282)
	int tmp = (this1->fPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(282)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(282)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlX2,return )

Float CubicCurveToView_Impl__obj::get_controlY2( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_controlY2",0x39f1634c,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_controlY2","openfl/_internal/renderer/DrawCommandReader.hx",283,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(283)
	int tmp = (this1->fPos + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_controlY2,return )

Float CubicCurveToView_Impl__obj::get_anchorX( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_anchorX",0x7a5efbb9,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_anchorX","openfl/_internal/renderer/DrawCommandReader.hx",284,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(284)
	int tmp = (this1->fPos + (int)5);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_anchorX,return )

Float CubicCurveToView_Impl__obj::get_anchorY( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","get_anchorY",0x7a5efbba,"openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_.get_anchorY","openfl/_internal/renderer/DrawCommandReader.hx",285,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(285)
	int tmp = (this1->fPos + (int)6);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CubicCurveToView_Impl__obj,get_anchorY,return )


CubicCurveToView_Impl__obj::CubicCurveToView_Impl__obj()
{
}

bool CubicCurveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_anchorX") ) { outValue = get_anchorX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_anchorY") ) { outValue = get_anchorY_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_controlX1") ) { outValue = get_controlX1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_controlY1") ) { outValue = get_controlY1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_controlX2") ) { outValue = get_controlX2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_controlY2") ) { outValue = get_controlY2_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicCurveToView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicCurveToView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CubicCurveToView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_controlX1","\x4d","\xdd","\x9c","\x4e"),
	HX_HCSTRING("get_controlY1","\x2c","\xde","\x9c","\x4e"),
	HX_HCSTRING("get_controlX2","\x4e","\xdd","\x9c","\x4e"),
	HX_HCSTRING("get_controlY2","\x2d","\xde","\x9c","\x4e"),
	HX_HCSTRING("get_anchorX","\x5a","\x4c","\x9c","\x88"),
	HX_HCSTRING("get_anchorY","\x5b","\x4c","\x9c","\x88"),
	::String(null()) };

void CubicCurveToView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.CubicCurveToView_Impl_","\x4d","\xbd","\x4f","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CubicCurveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CubicCurveToView_Impl__obj >;
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
