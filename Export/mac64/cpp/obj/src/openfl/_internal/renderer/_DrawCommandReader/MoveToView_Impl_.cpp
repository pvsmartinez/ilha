#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_MoveToView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/MoveToView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void MoveToView_Impl__obj::__construct()
{
	return null();
}

//MoveToView_Impl__obj::~MoveToView_Impl__obj() { }

Dynamic MoveToView_Impl__obj::__CreateEmpty() { return  new MoveToView_Impl__obj; }
hx::ObjectPtr< MoveToView_Impl__obj > MoveToView_Impl__obj::__new()
{  hx::ObjectPtr< MoveToView_Impl__obj > _result_ = new MoveToView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic MoveToView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MoveToView_Impl__obj > _result_ = new MoveToView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader MoveToView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","_new",0x9bdb8896,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",440,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(440)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,_new,return )

Float MoveToView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","get_x",0x5989007a,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",441,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(441)
	int tmp = this1->fPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,get_x,return )

Float MoveToView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","get_y",0x5989007b,"openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",442,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(442)
	int tmp = (this1->fPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MoveToView_Impl__obj,get_y,return )


MoveToView_Impl__obj::MoveToView_Impl__obj()
{
}

bool MoveToView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MoveToView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MoveToView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class MoveToView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	::String(null()) };

void MoveToView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.MoveToView_Impl_","\x59","\xb9","\x76","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MoveToView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MoveToView_Impl__obj >;
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
