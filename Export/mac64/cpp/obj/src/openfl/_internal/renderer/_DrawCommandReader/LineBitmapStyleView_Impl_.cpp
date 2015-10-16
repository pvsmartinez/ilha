#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineBitmapStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineBitmapStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void LineBitmapStyleView_Impl__obj::__construct()
{
	return null();
}

//LineBitmapStyleView_Impl__obj::~LineBitmapStyleView_Impl__obj() { }

Dynamic LineBitmapStyleView_Impl__obj::__CreateEmpty() { return  new LineBitmapStyleView_Impl__obj; }
hx::ObjectPtr< LineBitmapStyleView_Impl__obj > LineBitmapStyleView_Impl__obj::__new()
{  hx::ObjectPtr< LineBitmapStyleView_Impl__obj > _result_ = new LineBitmapStyleView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic LineBitmapStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineBitmapStyleView_Impl__obj > _result_ = new LineBitmapStyleView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader LineBitmapStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","_new",0x6ec636a4,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",390,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(390)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,_new,return )

::openfl::display::BitmapData LineBitmapStyleView_Impl__obj::get_bitmap( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_bitmap",0xeee7753b,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_bitmap","openfl/_internal/renderer/DrawCommandReader.hx",391,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(391)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	::openfl::display::BitmapData tmp2 = ((::openfl::display::BitmapData)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(391)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_bitmap,return )

::openfl::geom::Matrix LineBitmapStyleView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_matrix",0xb9a39b8d,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",392,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(392)
	int tmp = (this1->oPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(392)
	::openfl::geom::Matrix tmp2 = ((::openfl::geom::Matrix)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(392)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_matrix,return )

bool LineBitmapStyleView_Impl__obj::get_repeat( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_repeat",0x0457fca7,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_repeat","openfl/_internal/renderer/DrawCommandReader.hx",393,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(393)
	int tmp = this1->bPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	bool tmp1 = this1->buffer->b->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(393)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(393)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_repeat,return )

bool LineBitmapStyleView_Impl__obj::get_smooth( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","get_smooth",0x05466d7a,"openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_.get_smooth","openfl/_internal/renderer/DrawCommandReader.hx",394,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(394)
	int tmp = (this1->bPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	bool tmp1 = this1->buffer->b->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(394)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineBitmapStyleView_Impl__obj,get_smooth,return )


LineBitmapStyleView_Impl__obj::LineBitmapStyleView_Impl__obj()
{
}

bool LineBitmapStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bitmap") ) { outValue = get_bitmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_repeat") ) { outValue = get_repeat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_smooth") ) { outValue = get_smooth_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineBitmapStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineBitmapStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineBitmapStyleView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_bitmap","\xb8","\x7f","\x93","\xe1"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("get_repeat","\x24","\x07","\x04","\xf7"),
	HX_HCSTRING("get_smooth","\xf7","\x77","\xf2","\xf7"),
	::String(null()) };

void LineBitmapStyleView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineBitmapStyleView_Impl_","\x0b","\xc6","\x66","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineBitmapStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineBitmapStyleView_Impl__obj >;
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
