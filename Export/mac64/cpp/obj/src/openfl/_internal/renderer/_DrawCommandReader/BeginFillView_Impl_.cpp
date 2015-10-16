#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginFillView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/BeginFillView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void BeginFillView_Impl__obj::__construct()
{
	return null();
}

//BeginFillView_Impl__obj::~BeginFillView_Impl__obj() { }

Dynamic BeginFillView_Impl__obj::__CreateEmpty() { return  new BeginFillView_Impl__obj; }
hx::ObjectPtr< BeginFillView_Impl__obj > BeginFillView_Impl__obj::__new()
{  hx::ObjectPtr< BeginFillView_Impl__obj > _result_ = new BeginFillView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic BeginFillView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BeginFillView_Impl__obj > _result_ = new BeginFillView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader BeginFillView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","_new",0xff2dc446,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",255,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(255)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,_new,return )

int BeginFillView_Impl__obj::get_color( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","get_color",0x83ba00b5,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_.get_color","openfl/_internal/renderer/DrawCommandReader.hx",256,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(256)
	int tmp = this1->iPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	int tmp1 = this1->buffer->i->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,get_color,return )

Float BeginFillView_Impl__obj::get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","get_alpha",0x5af436b0,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_.get_alpha","openfl/_internal/renderer/DrawCommandReader.hx",257,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(257)
	int tmp = this1->fPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BeginFillView_Impl__obj,get_alpha,return )


BeginFillView_Impl__obj::BeginFillView_Impl__obj()
{
}

bool BeginFillView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BeginFillView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BeginFillView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class BeginFillView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	::String(null()) };

void BeginFillView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_","\xa9","\x1b","\xae","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BeginFillView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BeginFillView_Impl__obj >;
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
