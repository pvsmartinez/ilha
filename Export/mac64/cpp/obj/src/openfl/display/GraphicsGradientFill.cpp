#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
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
namespace display{

Void GraphicsGradientFill_obj::__construct(::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio)
{
HX_STACK_FRAME("openfl.display.GraphicsGradientFill","new",0xc9ac905a,"openfl.display.GraphicsGradientFill.new","openfl/display/GraphicsGradientFill.hx",25,0x0dfeaf94)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(colors,"colors")
HX_STACK_ARG(alphas,"alphas")
HX_STACK_ARG(ratios,"ratios")
HX_STACK_ARG(matrix,"matrix")
HX_STACK_ARG(spreadMethod,"spreadMethod")
HX_STACK_ARG(interpolationMethod,"interpolationMethod")
HX_STACK_ARG(__o_focalPointRatio,"focalPointRatio")
Float focalPointRatio = __o_focalPointRatio.Default(0);
{
	HX_STACK_LINE(27)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	if ((tmp)){
		HX_STACK_LINE(29)
		type = ::openfl::display::GradientType_obj::LINEAR;
	}
	HX_STACK_LINE(33)
	bool tmp1 = (spreadMethod == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(35)
		spreadMethod = ::openfl::display::SpreadMethod_obj::PAD;
	}
	HX_STACK_LINE(39)
	bool tmp2 = (interpolationMethod == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	if ((tmp2)){
		HX_STACK_LINE(41)
		interpolationMethod = ::openfl::display::InterpolationMethod_obj::RGB;
	}
	HX_STACK_LINE(45)
	this->type = type;
	HX_STACK_LINE(46)
	this->colors = colors;
	HX_STACK_LINE(47)
	this->alphas = alphas;
	HX_STACK_LINE(48)
	this->ratios = ratios;
	HX_STACK_LINE(49)
	this->matrix = matrix;
	HX_STACK_LINE(50)
	this->spreadMethod = spreadMethod;
	HX_STACK_LINE(51)
	this->interpolationMethod = interpolationMethod;
	HX_STACK_LINE(52)
	this->focalPointRatio = focalPointRatio;
	HX_STACK_LINE(53)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::GRADIENT;
	HX_STACK_LINE(54)
	this->__graphicsFillType = ::openfl::display::GraphicsFillType_obj::GRADIENT_FILL;
}
;
	return null();
}

//GraphicsGradientFill_obj::~GraphicsGradientFill_obj() { }

Dynamic GraphicsGradientFill_obj::__CreateEmpty() { return  new GraphicsGradientFill_obj; }
hx::ObjectPtr< GraphicsGradientFill_obj > GraphicsGradientFill_obj::__new(::openfl::display::GradientType type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,::openfl::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio)
{  hx::ObjectPtr< GraphicsGradientFill_obj > _result_ = new GraphicsGradientFill_obj();
	_result_->__construct(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,__o_focalPointRatio);
	return _result_;}

Dynamic GraphicsGradientFill_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsGradientFill_obj > _result_ = new GraphicsGradientFill_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

hx::Object *GraphicsGradientFill_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsFill_obj)) return operator ::openfl::display::IGraphicsFill_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsGradientFill_obj::operator ::openfl::display::IGraphicsFill_obj *()
	{ return new ::openfl::display::IGraphicsFill_delegate_< GraphicsGradientFill_obj >(this); }
GraphicsGradientFill_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsGradientFill_obj >(this); }

GraphicsGradientFill_obj::GraphicsGradientFill_obj()
{
}

void GraphicsGradientFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsGradientFill);
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(focalPointRatio,"focalPointRatio");
	HX_MARK_MEMBER_NAME(interpolationMethod,"interpolationMethod");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(ratios,"ratios");
	HX_MARK_MEMBER_NAME(spreadMethod,"spreadMethod");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsGradientFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(focalPointRatio,"focalPointRatio");
	HX_VISIT_MEMBER_NAME(interpolationMethod,"interpolationMethod");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(ratios,"ratios");
	HX_VISIT_MEMBER_NAME(spreadMethod,"spreadMethod");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(__graphicsFillType,"__graphicsFillType");
}

Dynamic GraphicsGradientFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"alphas") ) { return alphas; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"ratios") ) { return ratios; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadMethod") ) { return spreadMethod; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"focalPointRatio") ) { return focalPointRatio; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return __graphicsFillType; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolationMethod") ) { return interpolationMethod; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsGradientFill_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::display::GradientType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratios") ) { ratios=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadMethod") ) { spreadMethod=inValue.Cast< ::openfl::display::SpreadMethod >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"focalPointRatio") ) { focalPointRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { __graphicsFillType=inValue.Cast< ::openfl::display::GraphicsFillType >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolationMethod") ) { interpolationMethod=inValue.Cast< ::openfl::display::InterpolationMethod >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsGradientFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("focalPointRatio","\x60","\x71","\xca","\xc0"));
	outFields->push(HX_HCSTRING("interpolationMethod","\x25","\x8f","\xf4","\xc8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("ratios","\x08","\x35","\x8a","\xbb"));
	outFields->push(HX_HCSTRING("spreadMethod","\xb4","\x05","\x24","\xed"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GraphicsGradientFill_obj,alphas),HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GraphicsGradientFill_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsFloat,(int)offsetof(GraphicsGradientFill_obj,focalPointRatio),HX_HCSTRING("focalPointRatio","\x60","\x71","\xca","\xc0")},
	{hx::fsObject /*::openfl::display::InterpolationMethod*/ ,(int)offsetof(GraphicsGradientFill_obj,interpolationMethod),HX_HCSTRING("interpolationMethod","\x25","\x8f","\xf4","\xc8")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GraphicsGradientFill_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GraphicsGradientFill_obj,ratios),HX_HCSTRING("ratios","\x08","\x35","\x8a","\xbb")},
	{hx::fsObject /*::openfl::display::SpreadMethod*/ ,(int)offsetof(GraphicsGradientFill_obj,spreadMethod),HX_HCSTRING("spreadMethod","\xb4","\x05","\x24","\xed")},
	{hx::fsObject /*::openfl::display::GradientType*/ ,(int)offsetof(GraphicsGradientFill_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsGradientFill_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsGradientFill_obj,__graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("focalPointRatio","\x60","\x71","\xca","\xc0"),
	HX_HCSTRING("interpolationMethod","\x25","\x8f","\xf4","\xc8"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("ratios","\x08","\x35","\x8a","\xbb"),
	HX_HCSTRING("spreadMethod","\xb4","\x05","\x24","\xed"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsGradientFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsGradientFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsGradientFill_obj::__mClass;

void GraphicsGradientFill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsGradientFill","\x68","\x1b","\x1b","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsGradientFill_obj >;
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
