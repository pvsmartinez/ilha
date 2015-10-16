#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace geom{

Void Point_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("openfl.geom.Point","new",0xa6fb3c0e,"openfl.geom.Point.new","openfl/geom/Point.hx",55,0x18173b82)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(57)
	this->x = x;
	HX_STACK_LINE(58)
	this->y = y;
}
;
	return null();
}

//Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Point_obj > _result_ = new Point_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > _result_ = new Point_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::geom::Point Point_obj::add( ::openfl::geom::Point v){
	HX_STACK_FRAME("openfl.geom.Point","add",0xa6f15dcf,"openfl.geom.Point.add","openfl/geom/Point.hx",70,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(72)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	Float tmp3 = v->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

::openfl::geom::Point Point_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Point","clone",0x787f468b,"openfl.geom.Point.clone","openfl/geom/Point.hx",82,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

Void Point_obj::copyFrom( ::openfl::geom::Point sourcePoint){
{
		HX_STACK_FRAME("openfl.geom.Point","copyFrom",0x660e8951,"openfl.geom.Point.copyFrom","openfl/geom/Point.hx",89,0x18173b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourcePoint,"sourcePoint")
		HX_STACK_LINE(91)
		this->x = sourcePoint->x;
		HX_STACK_LINE(92)
		this->y = sourcePoint->y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::geom::Point toCompare){
	HX_STACK_FRAME("openfl.geom.Point","equals",0xa8838351,"openfl.geom.Point.equals","openfl/geom/Point.hx",121,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(123)
	bool tmp = (toCompare != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	if ((tmp1)){
		HX_STACK_LINE(123)
		Float tmp3 = toCompare->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		tmp2 = (tmp3 == tmp6);
	}
	else{
		HX_STACK_LINE(123)
		tmp2 = false;
	}
	HX_STACK_LINE(123)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		Float tmp4 = toCompare->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		tmp3 = (tmp4 == tmp6);
	}
	else{
		HX_STACK_LINE(123)
		tmp3 = false;
	}
	HX_STACK_LINE(123)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

Void Point_obj::normalize( Float thickness){
{
		HX_STACK_FRAME("openfl.geom.Point","normalize",0x05c199bb,"openfl.geom.Point.normalize","openfl/geom/Point.hx",163,0x18173b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_LINE(165)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(165)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(165)
			tmp2 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(167)
			return null();
		}
		else{
			HX_STACK_LINE(171)
			Float tmp3 = thickness;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(171)
			Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			Float tmp12 = (Float(tmp3) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(171)
			Float norm = tmp12;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(172)
			hx::MultEq(this->x,norm);
			HX_STACK_LINE(173)
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

Void Point_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Point","offset",0x48d02ca5,"openfl.geom.Point.offset","openfl/geom/Point.hx",190,0x18173b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(192)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(193)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

Void Point_obj::setTo( Float xa,Float ya){
{
		HX_STACK_FRAME("openfl.geom.Point","setTo",0xaa4bc4eb,"openfl.geom.Point.setTo","openfl/geom/Point.hx",212,0x18173b82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_LINE(214)
		this->x = xa;
		HX_STACK_LINE(215)
		this->y = ya;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

::openfl::geom::Point Point_obj::subtract( ::openfl::geom::Point v){
	HX_STACK_FRAME("openfl.geom.Point","subtract",0x95bef2a6,"openfl.geom.Point.subtract","openfl/geom/Point.hx",226,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(228)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(228)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(228)
	::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(228)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

::String Point_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.Point","toString",0xd61c4e3e,"openfl.geom.Point.toString","openfl/geom/Point.hx",241,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	::String tmp1 = (HX_HCSTRING("(x=","\xed","\xc2","\x1e","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	::String tmp2 = (tmp1 + HX_HCSTRING(", y=","\x18","\x15","\x2e","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(243)
	::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(243)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

::lime::math::Vector2 Point_obj::__toLimeVector2( ){
	HX_STACK_FRAME("openfl.geom.Point","__toLimeVector2",0x318eb74d,"openfl.geom.Point.__toLimeVector2","openfl/geom/Point.hx",248,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	::lime::math::Vector2 tmp2 = ::lime::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,__toLimeVector2,return )

Float Point_obj::get_length( ){
	HX_STACK_FRAME("openfl.geom.Point","get_length",0x11c48ac1,"openfl.geom.Point.get_length","openfl/geom/Point.hx",262,0x18173b82)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(264)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(264)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(264)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(264)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(264)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(264)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

Float Point_obj::distance( ::openfl::geom::Point pt1,::openfl::geom::Point pt2){
	HX_STACK_FRAME("openfl.geom.Point","distance",0x09a710c7,"openfl.geom.Point.distance","openfl/geom/Point.hx",104,0x18173b82)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(106)
	Float tmp = (pt1->x - pt2->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(107)
	Float tmp1 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(108)
	Float tmp2 = (dx * dx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	Float tmp3 = (dy * dy);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(108)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

::openfl::geom::Point Point_obj::interpolate( ::openfl::geom::Point pt1,::openfl::geom::Point pt2,Float f){
	HX_STACK_FRAME("openfl.geom.Point","interpolate",0x8bd29e6f,"openfl.geom.Point.interpolate","openfl/geom/Point.hx",147,0x18173b82)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(149)
	Float tmp = pt2->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	Float tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	Float tmp2 = (pt1->x - pt2->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	Float tmp5 = pt2->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(149)
	Float tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(149)
	Float tmp7 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(149)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(149)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(149)
	::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(149)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

::openfl::geom::Point Point_obj::polar( Float len,Float angle){
	HX_STACK_FRAME("openfl.geom.Point","polar",0xf6ae22ec,"openfl.geom.Point.polar","openfl/geom/Point.hx",205,0x18173b82)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(207)
	Float tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	Float tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	Float tmp5 = angle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(207)
	Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(207)
	::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(207)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


Point_obj::Point_obj()
{
}

Dynamic Point_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__toLimeVector2") ) { return __toLimeVector2_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
	}
	return false;
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Point_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Point_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Point_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__toLimeVector2","\x9f","\x7e","\x1d","\xcf"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#endif

hx::Class Point_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("polar","\xbe","\xef","\x91","\xc6"),
	::String(null()) };

void Point_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Point","\x1c","\xdd","\xd4","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Point_obj >;
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
} // end namespace geom
