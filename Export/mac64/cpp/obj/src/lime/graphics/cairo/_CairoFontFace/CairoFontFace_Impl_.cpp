#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_
#include <lime/graphics/cairo/_CairoFontFace/CairoFontFace_Impl_.h>
#endif
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontFace{

Void CairoFontFace_Impl__obj::__construct()
{
	return null();
}

//CairoFontFace_Impl__obj::~CairoFontFace_Impl__obj() { }

Dynamic CairoFontFace_Impl__obj::__CreateEmpty() { return  new CairoFontFace_Impl__obj; }
hx::ObjectPtr< CairoFontFace_Impl__obj > CairoFontFace_Impl__obj::__new()
{  hx::ObjectPtr< CairoFontFace_Impl__obj > _result_ = new CairoFontFace_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFontFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoFontFace_Impl__obj > _result_ = new CairoFontFace_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoFontFace_Impl__obj::_new( ){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","_new",0x1006fe04,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_._new","lime/graphics/cairo/CairoFontFace.hx",16,0xf163eb1b)
	HX_STACK_LINE(16)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontFace_Impl__obj,_new,return )

int CairoFontFace_Impl__obj::status( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","status",0xcf297e95,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_.status","lime/graphics/cairo/CairoFontFace.hx",24,0xf163eb1b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(24)
	return ::lime::graphics::cairo::_CairoFontFace::CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status.call(hx::DynamicPtr(this1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontFace_Impl__obj,status,return )

int CairoFontFace_Impl__obj::lime_cairo_font_face_status( Dynamic handle){
	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","lime_cairo_font_face_status",0x3533e3e2,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_.lime_cairo_font_face_status","lime/graphics/cairo/CairoFontFace.hx",40,0xf163eb1b)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(40)
	return ::lime::graphics::cairo::_CairoFontFace::CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontFace_Impl__obj,lime_cairo_font_face_status,return )

::cpp::Function< int ( ::hx::Object * ) > CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status;


CairoFontFace_Impl__obj::CairoFontFace_Impl__obj()
{
}

bool CairoFontFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { outValue = status_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_status") ) { outValue = lime_cairo_font_face_status_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status,HX_HCSTRING("cffi_lime_cairo_font_face_status","\xcc","\x03","\xc2","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status,"cffi_lime_cairo_font_face_status");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status,"cffi_lime_cairo_font_face_status");
};

#endif

hx::Class CairoFontFace_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("lime_cairo_font_face_status","\x25","\x18","\x5c","\xf3"),
	HX_HCSTRING("cffi_lime_cairo_font_face_status","\xcc","\x03","\xc2","\x7a"),
	::String(null()) };

void CairoFontFace_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","\xab","\x3a","\x9b","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFontFace_Impl__obj >;
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

void CairoFontFace_Impl__obj::__boot()
{
	cffi_lime_cairo_font_face_status= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_font_face_status","\x25","\x18","\x5c","\xf3"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontFace
