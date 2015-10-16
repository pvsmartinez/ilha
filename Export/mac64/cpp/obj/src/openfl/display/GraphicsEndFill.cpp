#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
namespace openfl{
namespace display{

Void GraphicsEndFill_obj::__construct()
{
HX_STACK_FRAME("openfl.display.GraphicsEndFill","new",0x1f8242bb,"openfl.display.GraphicsEndFill.new","openfl/display/GraphicsEndFill.hx",26,0x45937e97)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::END;
	HX_STACK_LINE(29)
	this->__graphicsFillType = ::openfl::display::GraphicsFillType_obj::END_FILL;
}
;
	return null();
}

//GraphicsEndFill_obj::~GraphicsEndFill_obj() { }

Dynamic GraphicsEndFill_obj::__CreateEmpty() { return  new GraphicsEndFill_obj; }
hx::ObjectPtr< GraphicsEndFill_obj > GraphicsEndFill_obj::__new()
{  hx::ObjectPtr< GraphicsEndFill_obj > _result_ = new GraphicsEndFill_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsEndFill_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsEndFill_obj > _result_ = new GraphicsEndFill_obj();
	_result_->__construct();
	return _result_;}

hx::Object *GraphicsEndFill_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsFill_obj)) return operator ::openfl::display::IGraphicsFill_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsEndFill_obj::operator ::openfl::display::IGraphicsFill_obj *()
	{ return new ::openfl::display::IGraphicsFill_delegate_< GraphicsEndFill_obj >(this); }
GraphicsEndFill_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsEndFill_obj >(this); }

GraphicsEndFill_obj::GraphicsEndFill_obj()
{
}

void GraphicsEndFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsEndFill);
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsEndFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
}

Dynamic GraphicsEndFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return __graphicsFillType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsEndFill_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { __graphicsFillType=inValue.Cast< ::openfl::display::GraphicsFillType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsEndFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsEndFill_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsEndFill_obj,__graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsEndFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsEndFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsEndFill_obj::__mClass;

void GraphicsEndFill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsEndFill","\x49","\xc9","\x6d","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsEndFill_obj >;
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
} // end namespace display
