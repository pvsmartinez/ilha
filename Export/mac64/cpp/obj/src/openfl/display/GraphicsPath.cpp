#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
namespace openfl{
namespace display{

Void GraphicsPath_obj::__construct(Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding)
{
HX_STACK_FRAME("openfl.display.GraphicsPath","new",0x778d9d6c,"openfl.display.GraphicsPath.new","openfl/display/GraphicsPath.hx",54,0x0a58fcc2)
HX_STACK_THIS(this)
HX_STACK_ARG(commands,"commands")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(winding,"winding")
{
	HX_STACK_LINE(56)
	bool tmp = (winding == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(58)
		winding = ::openfl::display::GraphicsPathWinding_obj::EVEN_ODD;
	}
	HX_STACK_LINE(62)
	this->commands = commands;
	HX_STACK_LINE(63)
	this->data = data;
	HX_STACK_LINE(64)
	this->winding = winding;
	HX_STACK_LINE(65)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::PATH;
}
;
	return null();
}

//GraphicsPath_obj::~GraphicsPath_obj() { }

Dynamic GraphicsPath_obj::__CreateEmpty() { return  new GraphicsPath_obj; }
hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__new(Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding)
{  hx::ObjectPtr< GraphicsPath_obj > _result_ = new GraphicsPath_obj();
	_result_->__construct(commands,data,winding);
	return _result_;}

Dynamic GraphicsPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPath_obj > _result_ = new GraphicsPath_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *GraphicsPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsPath_obj)) return operator ::openfl::display::IGraphicsPath_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsPath_obj::operator ::openfl::display::IGraphicsPath_obj *()
	{ return new ::openfl::display::IGraphicsPath_delegate_< GraphicsPath_obj >(this); }
GraphicsPath_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsPath_obj >(this); }
Void GraphicsPath_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","curveTo",0xe3fba316,"openfl.display.GraphicsPath.curveTo","openfl/display/GraphicsPath.hx",87,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(89)
		Array< int > tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(89)
			Array< Float > tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			Array< Float > tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(89)
			tmp2 = false;
		}
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(91)
			Array< int > tmp3 = this->commands;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			tmp3->push((int)3);
			HX_STACK_LINE(92)
			Array< Float > tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			Float tmp5 = anchorX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp4->push(tmp5);
			HX_STACK_LINE(93)
			Array< Float > tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			Float tmp7 = anchorY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			tmp6->push(tmp7);
			HX_STACK_LINE(94)
			Array< Float > tmp8 = this->data;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Float tmp9 = controlX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			tmp8->push(tmp9);
			HX_STACK_LINE(95)
			Array< Float > tmp10 = this->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(95)
			Float tmp11 = controlY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			tmp10->push(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,curveTo,(void))

Void GraphicsPath_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","lineTo",0x87b32903,"openfl.display.GraphicsPath.lineTo","openfl/display/GraphicsPath.hx",109,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(111)
		Array< int > tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(111)
			Array< Float > tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			Array< Float > tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(111)
			tmp2 = false;
		}
		HX_STACK_LINE(111)
		if ((tmp2)){
			HX_STACK_LINE(113)
			Array< int > tmp3 = this->commands;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			tmp3->push((int)2);
			HX_STACK_LINE(114)
			Array< Float > tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			tmp4->push(tmp5);
			HX_STACK_LINE(115)
			Array< Float > tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			tmp6->push(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,lineTo,(void))

Void GraphicsPath_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","moveTo",0x67bfb560,"openfl.display.GraphicsPath.moveTo","openfl/display/GraphicsPath.hx",129,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(131)
		Array< int > tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(131)
			Array< Float > tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			Array< Float > tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(131)
			tmp2 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp2)){
			HX_STACK_LINE(133)
			Array< int > tmp3 = this->commands;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			tmp3->push((int)1);
			HX_STACK_LINE(134)
			Array< Float > tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			tmp4->push(tmp5);
			HX_STACK_LINE(135)
			Array< Float > tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(135)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(135)
			tmp6->push(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,moveTo,(void))

Void GraphicsPath_obj::wideLineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","wideLineTo",0xae2a1f76,"openfl.display.GraphicsPath.wideLineTo","openfl/display/GraphicsPath.hx",149,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(151)
		Array< int > tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(151)
			Array< Float > tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Array< Float > tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(151)
			tmp2 = false;
		}
		HX_STACK_LINE(151)
		if ((tmp2)){
			HX_STACK_LINE(153)
			Array< int > tmp3 = this->commands;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			tmp3->push((int)2);
			HX_STACK_LINE(154)
			Array< Float > tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			tmp4->push(tmp5);
			HX_STACK_LINE(155)
			Array< Float > tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			tmp6->push(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideLineTo,(void))

Void GraphicsPath_obj::wideMoveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","wideMoveTo",0x8e36abd3,"openfl.display.GraphicsPath.wideMoveTo","openfl/display/GraphicsPath.hx",169,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(171)
		Array< int > tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		if ((tmp1)){
			HX_STACK_LINE(171)
			Array< Float > tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			Array< Float > tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(171)
			tmp2 = false;
		}
		HX_STACK_LINE(171)
		if ((tmp2)){
			HX_STACK_LINE(173)
			Array< int > tmp3 = this->commands;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			tmp3->push((int)1);
			HX_STACK_LINE(174)
			Array< Float > tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			tmp4->push(tmp5);
			HX_STACK_LINE(175)
			Array< Float > tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			tmp6->push(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideMoveTo,(void))


GraphicsPath_obj::GraphicsPath_obj()
{
}

void GraphicsPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsPath);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
}

Dynamic GraphicsPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return winding; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wideLineTo") ) { return wideLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"wideMoveTo") ) { return wideMoveTo_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast< ::openfl::display::GraphicsPathWinding >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GraphicsPath_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GraphicsPath_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::openfl::display::GraphicsPathWinding*/ ,(int)offsetof(GraphicsPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsPath_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("wideLineTo","\x02","\xf3","\x82","\xc8"),
	HX_HCSTRING("wideMoveTo","\x5f","\x7f","\x8f","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsPath_obj::__mClass;

void GraphicsPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsPath","\x7a","\xb7","\x47","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsPath_obj >;
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
