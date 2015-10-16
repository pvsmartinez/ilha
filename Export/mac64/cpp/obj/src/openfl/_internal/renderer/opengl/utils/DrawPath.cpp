#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void DrawPath_obj::__construct(hx::Null< bool >  __o_makeArray)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","new",0xc087ab9c,"openfl._internal.renderer.opengl.utils.DrawPath.new","openfl/_internal/renderer/opengl/utils/DrawPath.hx",26,0xf0fd7951)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_makeArray,"makeArray")
bool makeArray = __o_makeArray.Default(true);
{
	HX_STACK_LINE(37)
	this->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
	HX_STACK_LINE(35)
	this->points = null();
	HX_STACK_LINE(33)
	this->winding = (int)0;
	HX_STACK_LINE(32)
	this->isRemovable = true;
	HX_STACK_LINE(31)
	this->fillIndex = (int)0;
	HX_STACK_LINE(40)
	::openfl::_internal::renderer::opengl::utils::LineStyle tmp = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->line = tmp;
	HX_STACK_LINE(41)
	this->fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
	HX_STACK_LINE(42)
	bool tmp1 = makeArray;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	if ((tmp1)){
		HX_STACK_LINE(44)
		this->points = Array_obj< Float >::__new();
	}
}
;
	return null();
}

//DrawPath_obj::~DrawPath_obj() { }

Dynamic DrawPath_obj::__CreateEmpty() { return  new DrawPath_obj; }
hx::ObjectPtr< DrawPath_obj > DrawPath_obj::__new(hx::Null< bool >  __o_makeArray)
{  hx::ObjectPtr< DrawPath_obj > _result_ = new DrawPath_obj();
	_result_->__construct(__o_makeArray);
	return _result_;}

Dynamic DrawPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawPath_obj > _result_ = new DrawPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DrawPath_obj::update( ::openfl::_internal::renderer::opengl::utils::LineStyle line,::openfl::_internal::renderer::opengl::utils::FillType fill,int fillIndex,int winding){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","update",0x9215584d,"openfl._internal.renderer.opengl.utils.DrawPath.update","openfl/_internal/renderer/opengl/utils/DrawPath.hx",48,0xf0fd7951)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_ARG(fill,"fill")
		HX_STACK_ARG(fillIndex,"fillIndex")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(49)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp = line;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->updateLine(tmp);
		HX_STACK_LINE(50)
		this->fill = fill;
		HX_STACK_LINE(51)
		this->fillIndex = fillIndex;
		HX_STACK_LINE(52)
		this->winding = winding;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawPath_obj,update,(void))

Void DrawPath_obj::updateLine( ::openfl::_internal::renderer::opengl::utils::LineStyle line){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","updateLine",0x8c0846e1,"openfl._internal.renderer.opengl.utils.DrawPath.updateLine","openfl/_internal/renderer/opengl/utils/DrawPath.hx",55,0xf0fd7951)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_LINE(56)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp = this->line;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		tmp->width = line->width;
		HX_STACK_LINE(57)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp1 = this->line;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		tmp1->color = line->color;
		HX_STACK_LINE(58)
		bool tmp2 = (line->alpha == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		if ((tmp2)){
			HX_STACK_LINE(58)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(58)
			tmp3 = line->alpha;
		}
		HX_STACK_LINE(58)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp4 = this->line;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		tmp4->alpha = tmp3;
		HX_STACK_LINE(59)
		bool tmp5 = (line->scaleMode == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		::openfl::display::LineScaleMode tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		if ((tmp5)){
			HX_STACK_LINE(59)
			tmp6 = ::openfl::display::LineScaleMode_obj::NORMAL;
		}
		else{
			HX_STACK_LINE(59)
			tmp6 = line->scaleMode;
		}
		HX_STACK_LINE(59)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp7 = this->line;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		tmp7->scaleMode = tmp6;
		HX_STACK_LINE(60)
		bool tmp8 = (line->caps == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		::openfl::display::CapsStyle tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(60)
		if ((tmp8)){
			HX_STACK_LINE(60)
			tmp9 = ::openfl::display::CapsStyle_obj::ROUND;
		}
		else{
			HX_STACK_LINE(60)
			tmp9 = line->caps;
		}
		HX_STACK_LINE(60)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp10 = this->line;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(60)
		tmp10->caps = tmp9;
		HX_STACK_LINE(61)
		bool tmp11 = (line->joints == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		::openfl::display::JointStyle tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(61)
		if ((tmp11)){
			HX_STACK_LINE(61)
			tmp12 = ::openfl::display::JointStyle_obj::ROUND;
		}
		else{
			HX_STACK_LINE(61)
			tmp12 = line->joints;
		}
		HX_STACK_LINE(61)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp13 = this->line;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		tmp13->joints = tmp12;
		HX_STACK_LINE(62)
		::openfl::_internal::renderer::opengl::utils::LineStyle tmp14 = this->line;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(62)
		tmp14->miterLimit = line->miterLimit;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawPath_obj,updateLine,(void))

::openfl::_internal::renderer::opengl::utils::GLStack DrawPath_obj::getStack( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","getStack",0xb03e6216,"openfl._internal.renderer.opengl.utils.DrawPath.getStack","openfl/_internal/renderer/opengl/utils/DrawPath.hx",65,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(66)
	::openfl::display::Graphics tmp = graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::lime::graphics::GLRenderContext tmp1 = gl;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	::openfl::_internal::renderer::opengl::utils::GLStack tmp2 = ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::build(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPath_obj,getStack,return )


DrawPath_obj::DrawPath_obj()
{
}

void DrawPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawPath);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(fillIndex,"fillIndex");
	HX_MARK_MEMBER_NAME(isRemovable,"isRemovable");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DrawPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(fillIndex,"fillIndex");
	HX_VISIT_MEMBER_NAME(isRemovable,"isRemovable");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic DrawPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return winding; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillIndex") ) { return fillIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateLine") ) { return updateLine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isRemovable") ) { return isRemovable; }
	}
	return super::__Field(inName,inCallProp);
}

bool DrawPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getStack") ) { outValue = getStack_dyn(); return true;  }
	}
	return false;
}

Dynamic DrawPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::LineStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GraphicType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillIndex") ) { fillIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isRemovable") ) { isRemovable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c"));
	outFields->push(HX_HCSTRING("isRemovable","\xd1","\xfd","\xd9","\xa6"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(int)offsetof(DrawPath_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(int)offsetof(DrawPath_obj,fill),HX_HCSTRING("fill","\x83","\xce","\xbb","\x43")},
	{hx::fsInt,(int)offsetof(DrawPath_obj,fillIndex),HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c")},
	{hx::fsBool,(int)offsetof(DrawPath_obj,isRemovable),HX_HCSTRING("isRemovable","\xd1","\xfd","\xd9","\xa6")},
	{hx::fsInt,(int)offsetof(DrawPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawPath_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GraphicType*/ ,(int)offsetof(DrawPath_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("fillIndex","\x8f","\xc1","\xbb","\x8c"),
	HX_HCSTRING("isRemovable","\xd1","\xfd","\xd9","\xa6"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateLine","\x9d","\x02","\x68","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawPath_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawPath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getStack","\xd2","\x76","\xe2","\xe3"),
	::String(null()) };

void DrawPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.DrawPath","\xaa","\xed","\x32","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawPath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawPath_obj >;
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
} // end namespace opengl
} // end namespace utils
