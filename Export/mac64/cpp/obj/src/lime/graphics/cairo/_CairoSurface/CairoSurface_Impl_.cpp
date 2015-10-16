#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{

Void CairoSurface_Impl__obj::__construct()
{
	return null();
}

//CairoSurface_Impl__obj::~CairoSurface_Impl__obj() { }

Dynamic CairoSurface_Impl__obj::__CreateEmpty() { return  new CairoSurface_Impl__obj; }
hx::ObjectPtr< CairoSurface_Impl__obj > CairoSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoSurface_Impl__obj > _result_ = new CairoSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoSurface_Impl__obj > _result_ = new CairoSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Void CairoSurface_Impl__obj::flush( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","flush",0x2a892755,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.flush","lime/graphics/cairo/CairoSurface.hx",17,0x58ce1be8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(17)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::cffi_lime_cairo_surface_flush.call(hx::DynamicPtr(this1));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,flush,(void))

Void CairoSurface_Impl__obj::lime_cairo_surface_flush( Dynamic surface){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","lime_cairo_surface_flush",0x9afd7f60,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.lime_cairo_surface_flush","lime/graphics/cairo/CairoSurface.hx",31,0x58ce1be8)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_LINE(31)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::cffi_lime_cairo_surface_flush.call(hx::DynamicPtr(surface));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,lime_cairo_surface_flush,(void))

::cpp::Function< void ( ::hx::Object * ) > CairoSurface_Impl__obj::cffi_lime_cairo_surface_flush;


CairoSurface_Impl__obj::CairoSurface_Impl__obj()
{
}

bool CairoSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_cairo_surface_flush") ) { outValue = lime_cairo_surface_flush_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &CairoSurface_Impl__obj::cffi_lime_cairo_surface_flush,HX_HCSTRING("cffi_lime_cairo_surface_flush","\x4a","\xdb","\xf2","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::cffi_lime_cairo_surface_flush,"cffi_lime_cairo_surface_flush");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::cffi_lime_cairo_surface_flush,"cffi_lime_cairo_surface_flush");
};

#endif

hx::Class CairoSurface_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed"),
	HX_HCSTRING("cffi_lime_cairo_surface_flush","\x4a","\xdb","\xf2","\xdb"),
	::String(null()) };

void CairoSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","\x3f","\x72","\x19","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoSurface_Impl__obj >;
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

void CairoSurface_Impl__obj::__boot()
{
	cffi_lime_cairo_surface_flush= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface
