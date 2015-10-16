#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineGradientStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineGradientStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void LineGradientStyleView_Impl__obj::__construct()
{
	return null();
}

//LineGradientStyleView_Impl__obj::~LineGradientStyleView_Impl__obj() { }

Dynamic LineGradientStyleView_Impl__obj::__CreateEmpty() { return  new LineGradientStyleView_Impl__obj; }
hx::ObjectPtr< LineGradientStyleView_Impl__obj > LineGradientStyleView_Impl__obj::__new()
{  hx::ObjectPtr< LineGradientStyleView_Impl__obj > _result_ = new LineGradientStyleView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic LineGradientStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineGradientStyleView_Impl__obj > _result_ = new LineGradientStyleView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader LineGradientStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","_new",0x223b6625,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",401,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(401)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,_new,return )

::openfl::display::GradientType LineGradientStyleView_Impl__obj::get_type( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_type",0x56d1b107,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_type","openfl/_internal/renderer/DrawCommandReader.hx",402,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(402)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	::openfl::display::GradientType tmp2 = ((::openfl::display::GradientType)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_type,return )

Array< int > LineGradientStyleView_Impl__obj::get_colors( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_colors",0x62b5713d,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_colors","openfl/_internal/renderer/DrawCommandReader.hx",403,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(403)
	int tmp = this1->iiPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	return this1->buffer->ii->__get(tmp).StaticCast< Array< int > >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_colors,return )

Array< Float > LineGradientStyleView_Impl__obj::get_alphas( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_alphas",0xde6a76e2,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_alphas","openfl/_internal/renderer/DrawCommandReader.hx",404,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(404)
	int tmp = this1->ffPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	return this1->buffer->ff->__get(tmp).StaticCast< Array< Float > >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_alphas,return )

Array< int > LineGradientStyleView_Impl__obj::get_ratios( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_ratios",0x57b8e095,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_ratios","openfl/_internal/renderer/DrawCommandReader.hx",405,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(405)
	int tmp = (this1->iiPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	return this1->buffer->ii->__get(tmp).StaticCast< Array< int > >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_ratios,return )

::openfl::geom::Matrix LineGradientStyleView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_matrix",0x57f6e1ce,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",406,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(406)
	int tmp = (this1->oPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	::openfl::geom::Matrix tmp2 = ((::openfl::geom::Matrix)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_matrix,return )

::openfl::display::SpreadMethod LineGradientStyleView_Impl__obj::get_spreadMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_spreadMethod",0x9d775901,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_spreadMethod","openfl/_internal/renderer/DrawCommandReader.hx",407,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(407)
	int tmp = (this1->oPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	::openfl::display::SpreadMethod tmp2 = ((::openfl::display::SpreadMethod)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(407)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_spreadMethod,return )

::openfl::display::InterpolationMethod LineGradientStyleView_Impl__obj::get_interpolationMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_interpolationMethod",0xa82def78,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_interpolationMethod","openfl/_internal/renderer/DrawCommandReader.hx",408,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(408)
	int tmp = (this1->oPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(408)
	::openfl::display::InterpolationMethod tmp2 = ((::openfl::display::InterpolationMethod)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(408)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_interpolationMethod,return )

Dynamic LineGradientStyleView_Impl__obj::get_focalPointRatio( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_focalPointRatio",0xd5f26c33,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_focalPointRatio","openfl/_internal/renderer/DrawCommandReader.hx",409,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(409)
	int tmp = (this1->oPos + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_focalPointRatio,return )


LineGradientStyleView_Impl__obj::LineGradientStyleView_Impl__obj()
{
}

bool LineGradientStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colors") ) { outValue = get_colors_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_alphas") ) { outValue = get_alphas_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ratios") ) { outValue = get_ratios_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_spreadMethod") ) { outValue = get_spreadMethod_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_focalPointRatio") ) { outValue = get_focalPointRatio_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_interpolationMethod") ) { outValue = get_interpolationMethod_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineGradientStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineGradientStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineGradientStyleView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("get_colors","\x79","\x35","\x0e","\xb7"),
	HX_HCSTRING("get_alphas","\x1e","\x3b","\xc3","\x32"),
	HX_HCSTRING("get_ratios","\xd1","\xa4","\x11","\xac"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("get_spreadMethod","\x3d","\xf2","\xc2","\xf1"),
	HX_HCSTRING("get_interpolationMethod","\xbc","\x35","\x4a","\xd1"),
	HX_HCSTRING("get_focalPointRatio","\x77","\x40","\xd5","\x4b"),
	::String(null()) };

void LineGradientStyleView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","\x2a","\xc6","\x21","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineGradientStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineGradientStyleView_Impl__obj >;
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
