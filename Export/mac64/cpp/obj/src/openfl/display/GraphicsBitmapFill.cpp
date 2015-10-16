#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace display{

Void GraphicsBitmapFill_obj::__construct(::openfl::display::BitmapData bitmapData,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth)
{
HX_STACK_FRAME("openfl.display.GraphicsBitmapFill","new",0x9f0e8e19,"openfl.display.GraphicsBitmapFill.new","openfl/display/GraphicsBitmapFill.hx",22,0x222b0335)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(matrix,"matrix")
HX_STACK_ARG(__o_repeat,"repeat")
HX_STACK_ARG(__o_smooth,"smooth")
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
{
	HX_STACK_LINE(24)
	this->bitmapData = bitmapData;
	HX_STACK_LINE(25)
	this->matrix = matrix;
	HX_STACK_LINE(26)
	this->repeat = repeat;
	HX_STACK_LINE(27)
	this->smooth = smooth;
	HX_STACK_LINE(29)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::BITMAP;
	HX_STACK_LINE(30)
	this->__graphicsFillType = ::openfl::display::GraphicsFillType_obj::BITMAP_FILL;
}
;
	return null();
}

//GraphicsBitmapFill_obj::~GraphicsBitmapFill_obj() { }

Dynamic GraphicsBitmapFill_obj::__CreateEmpty() { return  new GraphicsBitmapFill_obj; }
hx::ObjectPtr< GraphicsBitmapFill_obj > GraphicsBitmapFill_obj::__new(::openfl::display::BitmapData bitmapData,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth)
{  hx::ObjectPtr< GraphicsBitmapFill_obj > _result_ = new GraphicsBitmapFill_obj();
	_result_->__construct(bitmapData,matrix,__o_repeat,__o_smooth);
	return _result_;}

Dynamic GraphicsBitmapFill_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsBitmapFill_obj > _result_ = new GraphicsBitmapFill_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *GraphicsBitmapFill_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsFill_obj)) return operator ::openfl::display::IGraphicsFill_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsBitmapFill_obj::operator ::openfl::display::IGraphicsFill_obj *()
	{ return new ::openfl::display::IGraphicsFill_delegate_< GraphicsBitmapFill_obj >(this); }
GraphicsBitmapFill_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsBitmapFill_obj >(this); }

GraphicsBitmapFill_obj::GraphicsBitmapFill_obj()
{
}

void GraphicsBitmapFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsBitmapFill);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsBitmapFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
}

Dynamic GraphicsBitmapFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return __graphicsFillType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsBitmapFill_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { __graphicsFillType=inValue.Cast< ::openfl::display::GraphicsFillType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsBitmapFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GraphicsBitmapFill_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GraphicsBitmapFill_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsBool,(int)offsetof(GraphicsBitmapFill_obj,repeat),HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06")},
	{hx::fsBool,(int)offsetof(GraphicsBitmapFill_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsBitmapFill_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsBitmapFill_obj,__graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsBitmapFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsBitmapFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsBitmapFill_obj::__mClass;

void GraphicsBitmapFill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsBitmapFill","\xa7","\x8d","\x1d","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsBitmapFill_obj >;
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
