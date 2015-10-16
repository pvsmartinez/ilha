#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
namespace lime{
namespace math{

Void Vector2_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{
HX_STACK_FRAME("lime.math.Vector2","new",0xaef3c434,"lime.math.Vector2.new","lime/math/Vector2.hx",17,0x7105521c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(19)
	this->x = x;
	HX_STACK_LINE(20)
	this->y = y;
}
;
	return null();
}

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y)
{  hx::ObjectPtr< Vector2_obj > _result_ = new Vector2_obj();
	_result_->__construct(__o_x,__o_y);
	return _result_;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > _result_ = new Vector2_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::math::Vector2 Vector2_obj::add( ::lime::math::Vector2 v){
	HX_STACK_FRAME("lime.math.Vector2","add",0xaee9e5f5,"lime.math.Vector2.add","lime/math/Vector2.hx",25,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(27)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	Float tmp3 = v->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,add,return )

::lime::math::Vector2 Vector2_obj::clone( ){
	HX_STACK_FRAME("lime.math.Vector2","clone",0xd5c6a431,"lime.math.Vector2.clone","lime/math/Vector2.hx",32,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::lime::math::Vector2 tmp2 = ::lime::math::Vector2_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,clone,return )

bool Vector2_obj::equals( ::lime::math::Vector2 toCompare){
	HX_STACK_FRAME("lime.math.Vector2","equals",0xe9ae16eb,"lime.math.Vector2.equals","lime/math/Vector2.hx",48,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(50)
	bool tmp = (toCompare != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp1)){
		HX_STACK_LINE(50)
		Float tmp3 = toCompare->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		tmp2 = (tmp3 == tmp6);
	}
	else{
		HX_STACK_LINE(50)
		tmp2 = false;
	}
	HX_STACK_LINE(50)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(50)
		Float tmp4 = toCompare->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		tmp3 = (tmp4 == tmp6);
	}
	else{
		HX_STACK_LINE(50)
		tmp3 = false;
	}
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,equals,return )

Void Vector2_obj::normalize( Float thickness){
{
		HX_STACK_FRAME("lime.math.Vector2","normalize",0xeaffc261,"lime.math.Vector2.normalize","lime/math/Vector2.hx",62,0x7105521c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_LINE(64)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(64)
			Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(64)
			tmp2 = false;
		}
		HX_STACK_LINE(64)
		if ((tmp2)){
			HX_STACK_LINE(66)
			return null();
		}
		else{
			HX_STACK_LINE(70)
			Float tmp3 = thickness;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			Float tmp12 = (Float(tmp3) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			Float norm = tmp12;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(71)
			hx::MultEq(this->x,norm);
			HX_STACK_LINE(72)
			hx::MultEq(this->y,norm);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,normalize,(void))

Void Vector2_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.math.Vector2","offset",0x89fac03f,"lime.math.Vector2.offset","lime/math/Vector2.hx",79,0x7105521c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(81)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(82)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,offset,(void))

Void Vector2_obj::setTo( Float xa,Float ya){
{
		HX_STACK_FRAME("lime.math.Vector2","setTo",0x07932291,"lime.math.Vector2.setTo","lime/math/Vector2.hx",94,0x7105521c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_LINE(96)
		this->x = xa;
		HX_STACK_LINE(97)
		this->y = ya;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,setTo,(void))

::lime::math::Vector2 Vector2_obj::subtract( ::lime::math::Vector2 v){
	HX_STACK_FRAME("lime.math.Vector2","subtract",0x656920c0,"lime.math.Vector2.subtract","lime/math/Vector2.hx",101,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(103)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector2_obj,subtract,return )

Dynamic Vector2_obj::__toFlashPoint( ){
	HX_STACK_FRAME("lime.math.Vector2","__toFlashPoint",0xf695b9a7,"lime.math.Vector2.__toFlashPoint","lime/math/Vector2.hx",113,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,__toFlashPoint,return )

Float Vector2_obj::get_length( ){
	HX_STACK_FRAME("lime.math.Vector2","get_length",0xc2e9f35b,"lime.math.Vector2.get_length","lime/math/Vector2.hx",126,0x7105521c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(128)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector2_obj,get_length,return )

Float Vector2_obj::distance( ::lime::math::Vector2 pt1,::lime::math::Vector2 pt2){
	HX_STACK_FRAME("lime.math.Vector2","distance",0xd9513ee1,"lime.math.Vector2.distance","lime/math/Vector2.hx",39,0x7105521c)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(41)
	Float tmp = (pt1->x - pt2->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(42)
	Float tmp1 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(43)
	Float tmp2 = (dx * dx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float tmp3 = (dy * dy);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,distance,return )

::lime::math::Vector2 Vector2_obj::interpolate( ::lime::math::Vector2 pt1,::lime::math::Vector2 pt2,Float f){
	HX_STACK_FRAME("lime.math.Vector2","interpolate",0xdb68bc95,"lime.math.Vector2.interpolate","lime/math/Vector2.hx",55,0x7105521c)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(57)
	Float tmp = pt2->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	Float tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	Float tmp2 = (pt1->x - pt2->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	Float tmp5 = pt2->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	Float tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	Float tmp7 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(57)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(57)
	::lime::math::Vector2 tmp10 = ::lime::math::Vector2_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(57)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector2_obj,interpolate,return )

::lime::math::Vector2 Vector2_obj::polar( Float len,Float angle){
	HX_STACK_FRAME("lime.math.Vector2","polar",0x53f58092,"lime.math.Vector2.polar","lime/math/Vector2.hx",87,0x7105521c)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(89)
	Float tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	Float tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	Float tmp5 = angle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(89)
	::lime::math::Vector2 tmp8 = ::lime::math::Vector2_obj::__new(tmp3,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector2_obj,polar,return )


Vector2_obj::Vector2_obj()
{
}

Dynamic Vector2_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__toFlashPoint") ) { return __toFlashPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector2_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector2_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
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
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("__toFlashPoint","\xfb","\x04","\x40","\xa7"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#endif

hx::Class Vector2_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("polar","\xbe","\xef","\x91","\xc6"),
	::String(null()) };

void Vector2_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.Vector2","\x42","\xda","\x50","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector2_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector2_obj >;
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
} // end namespace math
