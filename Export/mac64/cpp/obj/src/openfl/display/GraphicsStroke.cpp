#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
namespace openfl{
namespace display{

Void GraphicsStroke_obj::__construct(hx::Null< Float >  __o_thickness,hx::Null< bool >  __o_pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,hx::Null< Float >  __o_miterLimit,::openfl::display::IGraphicsFill fill)
{
HX_STACK_FRAME("openfl.display.GraphicsStroke","new",0x5684f03f,"openfl.display.GraphicsStroke.new","openfl/display/GraphicsStroke.hx",213,0x5e4870cf)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_thickness,"thickness")
HX_STACK_ARG(__o_pixelHinting,"pixelHinting")
HX_STACK_ARG(scaleMode,"scaleMode")
HX_STACK_ARG(caps,"caps")
HX_STACK_ARG(joints,"joints")
HX_STACK_ARG(__o_miterLimit,"miterLimit")
HX_STACK_ARG(fill,"fill")
Float thickness = __o_thickness.Default(((Float)0.0));
bool pixelHinting = __o_pixelHinting.Default(false);
Float miterLimit = __o_miterLimit.Default(3);
{
	HX_STACK_LINE(215)
	bool tmp = (caps != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	::openfl::display::CapsStyle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp)){
		HX_STACK_LINE(215)
		tmp1 = caps;
	}
	else{
		HX_STACK_LINE(215)
		tmp1 = ::openfl::display::CapsStyle_obj::NONE;
	}
	HX_STACK_LINE(215)
	this->caps = tmp1;
	HX_STACK_LINE(216)
	this->fill = fill;
	HX_STACK_LINE(217)
	bool tmp2 = (joints != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	::openfl::display::JointStyle tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	if ((tmp2)){
		HX_STACK_LINE(217)
		tmp3 = joints;
	}
	else{
		HX_STACK_LINE(217)
		tmp3 = ::openfl::display::JointStyle_obj::ROUND;
	}
	HX_STACK_LINE(217)
	this->joints = tmp3;
	HX_STACK_LINE(218)
	this->miterLimit = miterLimit;
	HX_STACK_LINE(219)
	this->pixelHinting = pixelHinting;
	HX_STACK_LINE(220)
	bool tmp4 = (scaleMode != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(220)
	::openfl::display::LineScaleMode tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(220)
	if ((tmp4)){
		HX_STACK_LINE(220)
		tmp5 = scaleMode;
	}
	else{
		HX_STACK_LINE(220)
		tmp5 = ::openfl::display::LineScaleMode_obj::NORMAL;
	}
	HX_STACK_LINE(220)
	this->scaleMode = tmp5;
	HX_STACK_LINE(221)
	this->thickness = thickness;
	HX_STACK_LINE(222)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::STROKE;
}
;
	return null();
}

//GraphicsStroke_obj::~GraphicsStroke_obj() { }

Dynamic GraphicsStroke_obj::__CreateEmpty() { return  new GraphicsStroke_obj; }
hx::ObjectPtr< GraphicsStroke_obj > GraphicsStroke_obj::__new(hx::Null< Float >  __o_thickness,hx::Null< bool >  __o_pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,hx::Null< Float >  __o_miterLimit,::openfl::display::IGraphicsFill fill)
{  hx::ObjectPtr< GraphicsStroke_obj > _result_ = new GraphicsStroke_obj();
	_result_->__construct(__o_thickness,__o_pixelHinting,scaleMode,caps,joints,__o_miterLimit,fill);
	return _result_;}

Dynamic GraphicsStroke_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsStroke_obj > _result_ = new GraphicsStroke_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

hx::Object *GraphicsStroke_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsStroke_obj)) return operator ::openfl::display::IGraphicsStroke_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsStroke_obj::operator ::openfl::display::IGraphicsStroke_obj *()
	{ return new ::openfl::display::IGraphicsStroke_delegate_< GraphicsStroke_obj >(this); }
GraphicsStroke_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsStroke_obj >(this); }

GraphicsStroke_obj::GraphicsStroke_obj()
{
}

void GraphicsStroke_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsStroke);
	HX_MARK_MEMBER_NAME(caps,"caps");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_MEMBER_NAME(pixelHinting,"pixelHinting");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsStroke_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(caps,"caps");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
	HX_VISIT_MEMBER_NAME(pixelHinting,"pixelHinting");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
}

Dynamic GraphicsStroke_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { return caps; }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return joints; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return miterLimit; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pixelHinting") ) { return pixelHinting; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsStroke_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { caps=inValue.Cast< ::openfl::display::CapsStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::openfl::display::IGraphicsFill >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::openfl::display::JointStyle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< ::openfl::display::LineScaleMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pixelHinting") ) { pixelHinting=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsStroke_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("caps","\x21","\x1c","\xba","\x41"));
	outFields->push(HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"));
	outFields->push(HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"));
	outFields->push(HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::CapsStyle*/ ,(int)offsetof(GraphicsStroke_obj,caps),HX_HCSTRING("caps","\x21","\x1c","\xba","\x41")},
	{hx::fsObject /*::openfl::display::IGraphicsFill*/ ,(int)offsetof(GraphicsStroke_obj,fill),HX_HCSTRING("fill","\x83","\xce","\xbb","\x43")},
	{hx::fsObject /*::openfl::display::JointStyle*/ ,(int)offsetof(GraphicsStroke_obj,joints),HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91")},
	{hx::fsFloat,(int)offsetof(GraphicsStroke_obj,miterLimit),HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54")},
	{hx::fsBool,(int)offsetof(GraphicsStroke_obj,pixelHinting),HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c")},
	{hx::fsObject /*::openfl::display::LineScaleMode*/ ,(int)offsetof(GraphicsStroke_obj,scaleMode),HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsFloat,(int)offsetof(GraphicsStroke_obj,thickness),HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsStroke_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("caps","\x21","\x1c","\xba","\x41"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("joints","\xe9","\xe7","\x09","\x91"),
	HX_HCSTRING("miterLimit","\xf6","\x5c","\x6a","\x54"),
	HX_HCSTRING("pixelHinting","\xd5","\x9b","\xfb","\x6c"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsStroke_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsStroke_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsStroke_obj::__mClass;

void GraphicsStroke_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsStroke","\xcd","\x64","\xa2","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsStroke_obj >;
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
