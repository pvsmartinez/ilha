#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_console_VertexOutput
#include <lime/graphics/console/VertexOutput.h>
#endif
namespace lime{
namespace graphics{
namespace console{

Void VertexOutput_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.console.VertexOutput","new",0xd10c1878,"lime.graphics.console.VertexOutput.new","lime/graphics/console/VertexOutput.hx",25,0x1adb4b37)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VertexOutput_obj::~VertexOutput_obj() { }

Dynamic VertexOutput_obj::__CreateEmpty() { return  new VertexOutput_obj; }
hx::ObjectPtr< VertexOutput_obj > VertexOutput_obj::__new()
{  hx::ObjectPtr< VertexOutput_obj > _result_ = new VertexOutput_obj();
	_result_->__construct();
	return _result_;}

Dynamic VertexOutput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexOutput_obj > _result_ = new VertexOutput_obj();
	_result_->__construct();
	return _result_;}

Void VertexOutput_obj::vec2( Dynamic x,Dynamic y){
{
		HX_STACK_FRAME("lime.graphics.console.VertexOutput","vec2",0x1ed2f446,"lime.graphics.console.VertexOutput.vec2","lime/graphics/console/VertexOutput.hx",27,0x1adb4b37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexOutput_obj,vec2,(void))

Void VertexOutput_obj::vec3( Dynamic x,Dynamic y,Dynamic z){
{
		HX_STACK_FRAME("lime.graphics.console.VertexOutput","vec3",0x1ed2f447,"lime.graphics.console.VertexOutput.vec3","lime/graphics/console/VertexOutput.hx",28,0x1adb4b37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexOutput_obj,vec3,(void))

Void VertexOutput_obj::color( Dynamic r,Dynamic g,Dynamic b,Dynamic a){
{
		HX_STACK_FRAME("lime.graphics.console.VertexOutput","color",0xefc8ef7b,"lime.graphics.console.VertexOutput.color","lime/graphics/console/VertexOutput.hx",29,0x1adb4b37)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexOutput_obj,color,(void))


VertexOutput_obj::VertexOutput_obj()
{
}

Dynamic VertexOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"vec2") ) { return vec2_dyn(); }
		if (HX_FIELD_EQ(inName,"vec3") ) { return vec3_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vec2","\x5e","\x27","\x4c","\x4e"),
	HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexOutput_obj::__mClass;

void VertexOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.console.VertexOutput","\x86","\xbc","\x90","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexOutput_obj >;
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
