#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_console_VertexBuffer
#include <lime/graphics/console/VertexBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_console_VertexOutput
#include <lime/graphics/console/VertexOutput.h>
#endif
namespace lime{
namespace graphics{
namespace console{

Void VertexBuffer_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.console.VertexBuffer","new",0xc02831f7,"lime.graphics.console.VertexBuffer.new","lime/graphics/console/VertexBuffer.hx",26,0xe71f2698)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VertexBuffer_obj::~VertexBuffer_obj() { }

Dynamic VertexBuffer_obj::__CreateEmpty() { return  new VertexBuffer_obj; }
hx::ObjectPtr< VertexBuffer_obj > VertexBuffer_obj::__new()
{  hx::ObjectPtr< VertexBuffer_obj > _result_ = new VertexBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic VertexBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer_obj > _result_ = new VertexBuffer_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::console::VertexOutput VertexBuffer_obj::lock( ){
	HX_STACK_FRAME("lime.graphics.console.VertexBuffer","lock",0x61b89e74,"lime.graphics.console.VertexBuffer.lock","lime/graphics/console/VertexBuffer.hx",28,0xe71f2698)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::lime::graphics::console::VertexOutput tmp = ::lime::graphics::console::VertexOutput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,lock,return )

Void VertexBuffer_obj::unlock( ){
{
		HX_STACK_FRAME("lime.graphics.console.VertexBuffer","unlock",0xc3ba198d,"lime.graphics.console.VertexBuffer.unlock","lime/graphics/console/VertexBuffer.hx",29,0xe71f2698)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer_obj,unlock,(void))


VertexBuffer_obj::VertexBuffer_obj()
{
}

Dynamic VertexBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer_obj::__mClass;

void VertexBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.console.VertexBuffer","\x85","\x6a","\xa4","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer_obj >;
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
} // end namespace graphics
} // end namespace console
