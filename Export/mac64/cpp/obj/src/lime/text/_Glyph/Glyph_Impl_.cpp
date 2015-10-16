#include <hxcpp.h>

#ifndef INCLUDED_lime_text__Glyph_Glyph_Impl_
#include <lime/text/_Glyph/Glyph_Impl_.h>
#endif
namespace lime{
namespace text{
namespace _Glyph{

Void Glyph_Impl__obj::__construct()
{
	return null();
}

//Glyph_Impl__obj::~Glyph_Impl__obj() { }

Dynamic Glyph_Impl__obj::__CreateEmpty() { return  new Glyph_Impl__obj; }
hx::ObjectPtr< Glyph_Impl__obj > Glyph_Impl__obj::__new()
{  hx::ObjectPtr< Glyph_Impl__obj > _result_ = new Glyph_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Glyph_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Glyph_Impl__obj > _result_ = new Glyph_Impl__obj();
	_result_->__construct();
	return _result_;}

int Glyph_Impl__obj::_new( int i){
	HX_STACK_FRAME("lime.text._Glyph.Glyph_Impl_","_new",0x786a5adc,"lime.text._Glyph.Glyph_Impl_._new","lime/text/Glyph.hx",9,0x27d291da)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(9)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Glyph_Impl__obj,_new,return )


Glyph_Impl__obj::Glyph_Impl__obj()
{
}

bool Glyph_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Glyph_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Glyph_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Glyph_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null()) };

void Glyph_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text._Glyph.Glyph_Impl_","\xd3","\x0c","\xa5","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Glyph_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Glyph_Impl__obj >;
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
} // end namespace text
} // end namespace _Glyph
