#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
namespace openfl{
namespace display{

Void GraphicsSolidFill_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha)
{
HX_STACK_FRAME("openfl.display.GraphicsSolidFill","new",0x800a4bcb,"openfl.display.GraphicsSolidFill.new","openfl/display/GraphicsSolidFill.hx",44,0x9b142c07)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_color,"color")
HX_STACK_ARG(__o_alpha,"alpha")
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
{
	HX_STACK_LINE(46)
	this->alpha = alpha;
	HX_STACK_LINE(47)
	this->color = color;
	HX_STACK_LINE(48)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::SOLID;
	HX_STACK_LINE(49)
	this->__graphicsFillType = ::openfl::display::GraphicsFillType_obj::SOLID_FILL;
}
;
	return null();
}

//GraphicsSolidFill_obj::~GraphicsSolidFill_obj() { }

Dynamic GraphicsSolidFill_obj::__CreateEmpty() { return  new GraphicsSolidFill_obj; }
hx::ObjectPtr< GraphicsSolidFill_obj > GraphicsSolidFill_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha)
{  hx::ObjectPtr< GraphicsSolidFill_obj > _result_ = new GraphicsSolidFill_obj();
	_result_->__construct(__o_color,__o_alpha);
	return _result_;}

Dynamic GraphicsSolidFill_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsSolidFill_obj > _result_ = new GraphicsSolidFill_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *GraphicsSolidFill_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsFill_obj)) return operator ::openfl::display::IGraphicsFill_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsSolidFill_obj::operator ::openfl::display::IGraphicsFill_obj *()
	{ return new ::openfl::display::IGraphicsFill_delegate_< GraphicsSolidFill_obj >(this); }
GraphicsSolidFill_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsSolidFill_obj >(this); }

GraphicsSolidFill_obj::GraphicsSolidFill_obj()
{
}

void GraphicsSolidFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsSolidFill);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsSolidFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
}

Dynamic GraphicsSolidFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return __graphicsFillType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsSolidFill_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { __graphicsFillType=inValue.Cast< ::openfl::display::GraphicsFillType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsSolidFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GraphicsSolidFill_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsInt,(int)offsetof(GraphicsSolidFill_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsSolidFill_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsSolidFill_obj,__graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsSolidFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsSolidFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsSolidFill_obj::__mClass;

void GraphicsSolidFill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsSolidFill","\x59","\x0a","\xd8","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsSolidFill_obj >;
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
