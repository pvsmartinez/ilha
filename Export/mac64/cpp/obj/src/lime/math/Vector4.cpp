#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
namespace lime{
namespace math{

Void Vector4_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_FRAME("lime.math.Vector4","new",0xd5c0ed36,"lime.math.Vector4.new","lime/math/Vector4.hx",19,0x7257bf5a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
Float x = __o_x.Default(((Float)0.));
Float y = __o_y.Default(((Float)0.));
Float z = __o_z.Default(((Float)0.));
Float w = __o_w.Default(((Float)0.));
{
	HX_STACK_LINE(21)
	this->w = w;
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->z = z;
}
;
	return null();
}

//Vector4_obj::~Vector4_obj() { }

Dynamic Vector4_obj::__CreateEmpty() { return  new Vector4_obj; }
hx::ObjectPtr< Vector4_obj > Vector4_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Vector4_obj > _result_ = new Vector4_obj();
	_result_->__construct(__o_x,__o_y,__o_z,__o_w);
	return _result_;}

Dynamic Vector4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector4_obj > _result_ = new Vector4_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::lime::math::Vector4 Vector4_obj::add( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","add",0xd5b70ef7,"lime.math.Vector4.add","lime/math/Vector4.hx",29,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(31)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = a->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	Float tmp7 = a->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	::lime::math::Vector4 tmp9 = ::lime::math::Vector4_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,add,return )

::lime::math::Vector4 Vector4_obj::clone( ){
	HX_STACK_FRAME("lime.math.Vector4","clone",0x28f191b3,"lime.math.Vector4.clone","lime/math/Vector4.hx",48,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = this->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	Float tmp3 = this->w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	::lime::math::Vector4 tmp4 = ::lime::math::Vector4_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,clone,return )

Void Vector4_obj::copyFrom( ::lime::math::Vector4 sourceVector4){
{
		HX_STACK_FRAME("lime.math.Vector4","copyFrom",0xb64da729,"lime.math.Vector4.copyFrom","lime/math/Vector4.hx",55,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceVector4,"sourceVector4")
		HX_STACK_LINE(57)
		this->x = sourceVector4->x;
		HX_STACK_LINE(58)
		this->y = sourceVector4->y;
		HX_STACK_LINE(59)
		this->z = sourceVector4->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,copyFrom,(void))

::lime::math::Vector4 Vector4_obj::crossProduct( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","crossProduct",0xdc193ff9,"lime.math.Vector4.crossProduct","lime/math/Vector4.hx",64,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(66)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Float tmp1 = a->z;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	Float tmp3 = this->z;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(66)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(66)
	Float tmp8 = a->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(66)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(66)
	Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(66)
	Float tmp11 = a->z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(66)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(66)
	Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(66)
	Float tmp15 = a->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(66)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(66)
	Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(66)
	Float tmp18 = a->x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(66)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(66)
	Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(66)
	::lime::math::Vector4 tmp21 = ::lime::math::Vector4_obj::__new(tmp6,tmp13,tmp20,(int)1);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(66)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,crossProduct,return )

Void Vector4_obj::decrementBy( ::lime::math::Vector4 a){
{
		HX_STACK_FRAME("lime.math.Vector4","decrementBy",0xf530fda0,"lime.math.Vector4.decrementBy","lime/math/Vector4.hx",71,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(73)
		hx::SubEq(this->x,a->x);
		HX_STACK_LINE(74)
		hx::SubEq(this->y,a->y);
		HX_STACK_LINE(75)
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,decrementBy,(void))

Float Vector4_obj::dotProduct( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","dotProduct",0xf4c9f190,"lime.math.Vector4.dotProduct","lime/math/Vector4.hx",91,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(93)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float tmp1 = a->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	Float tmp8 = a->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(93)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(93)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(93)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,dotProduct,return )

bool Vector4_obj::equals( ::lime::math::Vector4 toCompare,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("lime.math.Vector4","equals",0x5c12fb29,"lime.math.Vector4.equals","lime/math/Vector4.hx",98,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(100)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		Float tmp1 = toCompare->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(100)
			Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			Float tmp8 = toCompare->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			tmp4 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(100)
			tmp4 = false;
		}
		HX_STACK_LINE(100)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		if ((tmp5)){
			HX_STACK_LINE(100)
			Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Float tmp10 = toCompare->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			tmp6 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(100)
			tmp6 = false;
		}
		HX_STACK_LINE(100)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		if ((tmp6)){
			HX_STACK_LINE(100)
			Dynamic tmp8 = allFour;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			if ((tmp16)){
				HX_STACK_LINE(100)
				Float tmp17 = this->w;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(100)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(100)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(100)
				Float tmp20 = toCompare->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(100)
				tmp7 = (tmp19 == tmp20);
			}
			else{
				HX_STACK_LINE(100)
				tmp7 = true;
			}
		}
		else{
			HX_STACK_LINE(100)
			tmp7 = false;
		}
		HX_STACK_LINE(100)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,equals,return )

Void Vector4_obj::incrementBy( ::lime::math::Vector4 a){
{
		HX_STACK_FRAME("lime.math.Vector4","incrementBy",0x3c274cbc,"lime.math.Vector4.incrementBy","lime/math/Vector4.hx",105,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(107)
		hx::AddEq(this->x,a->x);
		HX_STACK_LINE(108)
		hx::AddEq(this->y,a->y);
		HX_STACK_LINE(109)
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,incrementBy,(void))

bool Vector4_obj::nearEquals( ::lime::math::Vector4 toCompare,Float tolerance,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("lime.math.Vector4","nearEquals",0xb54b3b31,"lime.math.Vector4.nearEquals","lime/math/Vector4.hx",114,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(tolerance,"tolerance")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(116)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		Float tmp1 = toCompare->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		Float tmp4 = tolerance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		if ((tmp6)){
			HX_STACK_LINE(116)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			Float tmp11 = toCompare->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(116)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(116)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(116)
			Float tmp20 = tolerance;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(116)
			tmp7 = (tmp19 < tmp20);
		}
		else{
			HX_STACK_LINE(116)
			tmp7 = false;
		}
		HX_STACK_LINE(116)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(116)
		if ((tmp8)){
			HX_STACK_LINE(116)
			Float tmp10 = this->z;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			Float tmp13 = toCompare->z;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(116)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(116)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(116)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(116)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(116)
			Float tmp22 = tolerance;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(116)
			tmp9 = (tmp21 < tmp22);
		}
		else{
			HX_STACK_LINE(116)
			tmp9 = false;
		}
		HX_STACK_LINE(116)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(116)
		if ((tmp9)){
			HX_STACK_LINE(116)
			Dynamic tmp11 = allFour;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(116)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(116)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(116)
			if ((tmp19)){
				HX_STACK_LINE(116)
				Float tmp20 = this->w;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(116)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(116)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(116)
				Float tmp23 = toCompare->w;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(116)
				Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(116)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(116)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(116)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(116)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(116)
				Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(116)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(116)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(116)
				Float tmp32 = tolerance;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(116)
				tmp10 = (tmp31 < tmp32);
			}
			else{
				HX_STACK_LINE(116)
				tmp10 = true;
			}
		}
		else{
			HX_STACK_LINE(116)
			tmp10 = false;
		}
		HX_STACK_LINE(116)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,nearEquals,return )

Void Vector4_obj::negate( ){
{
		HX_STACK_FRAME("lime.math.Vector4","negate",0x03394eac,"lime.math.Vector4.negate","lime/math/Vector4.hx",121,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		hx::MultEq(this->x,(int)-1);
		HX_STACK_LINE(124)
		hx::MultEq(this->y,(int)-1);
		HX_STACK_LINE(125)
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,negate,(void))

Float Vector4_obj::normalize( ){
	HX_STACK_FRAME("lime.math.Vector4","normalize",0xecbc98e3,"lime.math.Vector4.normalize","lime/math/Vector4.hx",130,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(132)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(132)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(132)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(132)
	Float l = tmp11;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(134)
	bool tmp12 = (l != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(134)
	if ((tmp12)){
		HX_STACK_LINE(136)
		hx::DivEq(this->x,l);
		HX_STACK_LINE(137)
		hx::DivEq(this->y,l);
		HX_STACK_LINE(138)
		hx::DivEq(this->z,l);
	}
	HX_STACK_LINE(142)
	Float tmp13 = l;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(142)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,normalize,return )

Void Vector4_obj::project( ){
{
		HX_STACK_FRAME("lime.math.Vector4","project",0xf5d652af,"lime.math.Vector4.project","lime/math/Vector4.hx",147,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		Float tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		hx::DivEq(this->x,tmp);
		HX_STACK_LINE(150)
		Float tmp1 = this->w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		hx::DivEq(this->y,tmp1);
		HX_STACK_LINE(151)
		Float tmp2 = this->w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		hx::DivEq(this->z,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,project,(void))

Void Vector4_obj::scaleBy( Float s){
{
		HX_STACK_FRAME("lime.math.Vector4","scaleBy",0x64f27ed7,"lime.math.Vector4.scaleBy","lime/math/Vector4.hx",156,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(158)
		hx::MultEq(this->x,s);
		HX_STACK_LINE(159)
		hx::MultEq(this->y,s);
		HX_STACK_LINE(160)
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,scaleBy,(void))

Void Vector4_obj::setTo( Float xa,Float ya,Float za){
{
		HX_STACK_FRAME("lime.math.Vector4","setTo",0x5abe1013,"lime.math.Vector4.setTo","lime/math/Vector4.hx",165,0x7257bf5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(za,"za")
		HX_STACK_LINE(167)
		this->x = xa;
		HX_STACK_LINE(168)
		this->y = ya;
		HX_STACK_LINE(169)
		this->z = za;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector4_obj,setTo,(void))

::lime::math::Vector4 Vector4_obj::subtract( ::lime::math::Vector4 a){
	HX_STACK_FRAME("lime.math.Vector4","subtract",0xe5fe107e,"lime.math.Vector4.subtract","lime/math/Vector4.hx",174,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(176)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	Float tmp1 = a->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(176)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(176)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(176)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(176)
	Float tmp7 = a->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(176)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(176)
	::lime::math::Vector4 tmp9 = ::lime::math::Vector4_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(176)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Vector4_obj,subtract,return )

::String Vector4_obj::toString( ){
	HX_STACK_FRAME("lime.math.Vector4","toString",0x265b6c16,"lime.math.Vector4.toString","lime/math/Vector4.hx",181,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	::String tmp1 = (HX_HCSTRING("Vector4(","\x17","\x91","\x6f","\x48") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	Float tmp6 = this->z;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(183)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(183)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,toString,return )

Float Vector4_obj::get_length( ){
	HX_STACK_FRAME("lime.math.Vector4","get_length",0x4668ce99,"lime.math.Vector4.get_length","lime/math/Vector4.hx",195,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(197)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(197)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(197)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(197)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(197)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(197)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(197)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(197)
	Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(197)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_length,return )

Float Vector4_obj::get_lengthSquared( ){
	HX_STACK_FRAME("lime.math.Vector4","get_lengthSquared",0xe5b2d78e,"lime.math.Vector4.get_lengthSquared","lime/math/Vector4.hx",202,0x7257bf5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(204)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(204)
	Float tmp7 = this->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(204)
	Float tmp8 = this->z;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(204)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(204)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(204)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_lengthSquared,return )

::lime::math::Vector4 Vector4_obj::X_AXIS;

::lime::math::Vector4 Vector4_obj::Y_AXIS;

::lime::math::Vector4 Vector4_obj::Z_AXIS;

Float Vector4_obj::angleBetween( ::lime::math::Vector4 a,::lime::math::Vector4 b){
	HX_STACK_FRAME("lime.math.Vector4","angleBetween",0xe2247e9f,"lime.math.Vector4.angleBetween","lime/math/Vector4.hx",36,0x7257bf5a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	::lime::math::Vector4 tmp = ::lime::math::Vector4_obj::__new(a->x,a->y,a->z,a->w);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::lime::math::Vector4 a0 = tmp;		HX_STACK_VAR(a0,"a0");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		Float tmp1 = (a0->x * a0->x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		Float tmp2 = (a0->y * a0->y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		Float tmp4 = (a0->z * a0->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		Float tmp6 = ::Math_obj::sqrt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		Float l = tmp6;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(39)
		bool tmp7 = (l != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		if ((tmp7)){
			HX_STACK_LINE(39)
			hx::DivEq(a0->x,l);
			HX_STACK_LINE(39)
			hx::DivEq(a0->y,l);
			HX_STACK_LINE(39)
			hx::DivEq(a0->z,l);
		}
		HX_STACK_LINE(39)
		l;
	}
	HX_STACK_LINE(40)
	::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new(b->x,b->y,b->z,b->w);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::lime::math::Vector4 b0 = tmp1;		HX_STACK_VAR(b0,"b0");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float tmp2 = (b0->x * b0->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Float tmp3 = (b0->y * b0->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		Float tmp5 = (b0->z * b0->z);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		Float l = tmp7;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(41)
		bool tmp8 = (l != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		if ((tmp8)){
			HX_STACK_LINE(41)
			hx::DivEq(b0->x,l);
			HX_STACK_LINE(41)
			hx::DivEq(b0->y,l);
			HX_STACK_LINE(41)
			hx::DivEq(b0->z,l);
		}
		HX_STACK_LINE(41)
		l;
	}
	HX_STACK_LINE(43)
	Float tmp2 = (a0->x * b0->x);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float tmp3 = (a0->y * b0->y);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	Float tmp5 = (a0->z * b0->z);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	Float tmp7 = ::Math_obj::acos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,angleBetween,return )

Float Vector4_obj::distance( ::lime::math::Vector4 pt1,::lime::math::Vector4 pt2){
	HX_STACK_FRAME("lime.math.Vector4","distance",0x59e62e9f,"lime.math.Vector4.distance","lime/math/Vector4.hx",80,0x7257bf5a)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(82)
	Float tmp = (pt2->x - pt1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Float x = tmp;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(83)
	Float tmp1 = (pt2->y - pt1->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Float y = tmp1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(84)
	Float tmp2 = (pt2->z - pt1->z);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	Float z = tmp2;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(86)
	Float tmp3 = (x * x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	Float tmp4 = (y * y);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	Float tmp6 = (z * z);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(86)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector4_obj,distance,return )

::lime::math::Vector4 Vector4_obj::get_X_AXIS( ){
	HX_STACK_FRAME("lime.math.Vector4","get_X_AXIS",0xb513fadb,"lime.math.Vector4.get_X_AXIS","lime/math/Vector4.hx",209,0x7257bf5a)
	HX_STACK_LINE(211)
	::lime::math::Vector4 tmp = ::lime::math::Vector4_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_X_AXIS,return )

::lime::math::Vector4 Vector4_obj::get_Y_AXIS( ){
	HX_STACK_FRAME("lime.math.Vector4","get_Y_AXIS",0x1b6f573a,"lime.math.Vector4.get_Y_AXIS","lime/math/Vector4.hx",216,0x7257bf5a)
	HX_STACK_LINE(218)
	::lime::math::Vector4 tmp = ::lime::math::Vector4_obj::__new((int)0,(int)1,(int)0,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_Y_AXIS,return )

::lime::math::Vector4 Vector4_obj::get_Z_AXIS( ){
	HX_STACK_FRAME("lime.math.Vector4","get_Z_AXIS",0x81cab399,"lime.math.Vector4.get_Z_AXIS","lime/math/Vector4.hx",223,0x7257bf5a)
	HX_STACK_LINE(225)
	::lime::math::Vector4 tmp = ::lime::math::Vector4_obj::__new((int)0,(int)0,(int)1,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector4_obj,get_Z_AXIS,return )


Vector4_obj::Vector4_obj()
{
}

Dynamic Vector4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
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
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBy") ) { return scaleBy_dyn(); }
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
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { return nearEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decrementBy") ) { return decrementBy_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementBy") ) { return incrementBy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"crossProduct") ) { return crossProduct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return inCallProp == hx::paccAlways ? get_lengthSquared() : lengthSquared; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Vector4_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { outValue = inCallProp == hx::paccAlways ? get_X_AXIS() : X_AXIS; return true; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { outValue = inCallProp == hx::paccAlways ? get_Y_AXIS() : Y_AXIS; return true; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { outValue = inCallProp == hx::paccAlways ? get_Z_AXIS() : Z_AXIS; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_X_AXIS") ) { outValue = get_X_AXIS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Y_AXIS") ) { outValue = get_Y_AXIS_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_Z_AXIS") ) { outValue = get_Z_AXIS_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true;  }
	}
	return false;
}

Dynamic Vector4_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { lengthSquared=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Vector4_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { X_AXIS=ioValue.Cast< ::lime::math::Vector4 >(); return true; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { Y_AXIS=ioValue.Cast< ::lime::math::Vector4 >(); return true; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { Z_AXIS=ioValue.Cast< ::lime::math::Vector4 >(); return true; }
	}
	return false;
}

void Vector4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector4_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,lengthSquared),HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Vector4_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector4*/ ,(void *) &Vector4_obj::X_AXIS,HX_HCSTRING("X_AXIS","\x28","\xc1","\xb2","\x0d")},
	{hx::fsObject /*::lime::math::Vector4*/ ,(void *) &Vector4_obj::Y_AXIS,HX_HCSTRING("Y_AXIS","\x87","\x1d","\x0e","\x74")},
	{hx::fsObject /*::lime::math::Vector4*/ ,(void *) &Vector4_obj::Z_AXIS,HX_HCSTRING("Z_AXIS","\xe6","\x79","\x69","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("crossProduct","\x8f","\xa7","\xc9","\x63"),
	HX_HCSTRING("decrementBy","\xca","\x1a","\x7a","\xad"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("incrementBy","\xe6","\x69","\x70","\xf4"),
	HX_HCSTRING("nearEquals","\x47","\x71","\x71","\xfe"),
	HX_HCSTRING("negate","\xc2","\x41","\x19","\x67"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("scaleBy","\x01","\x3f","\x07","\x65"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_lengthSquared","\x38","\x30","\xb5","\x3b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector4_obj::X_AXIS,"X_AXIS");
	HX_MARK_MEMBER_NAME(Vector4_obj::Y_AXIS,"Y_AXIS");
	HX_MARK_MEMBER_NAME(Vector4_obj::Z_AXIS,"Z_AXIS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector4_obj::X_AXIS,"X_AXIS");
	HX_VISIT_MEMBER_NAME(Vector4_obj::Y_AXIS,"Y_AXIS");
	HX_VISIT_MEMBER_NAME(Vector4_obj::Z_AXIS,"Z_AXIS");
};

#endif

hx::Class Vector4_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("X_AXIS","\x28","\xc1","\xb2","\x0d"),
	HX_HCSTRING("Y_AXIS","\x87","\x1d","\x0e","\x74"),
	HX_HCSTRING("Z_AXIS","\xe6","\x79","\x69","\xda"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("get_X_AXIS","\xf1","\x30","\x3a","\xfe"),
	HX_HCSTRING("get_Y_AXIS","\x50","\x8d","\x95","\x64"),
	HX_HCSTRING("get_Z_AXIS","\xaf","\xe9","\xf0","\xca"),
	::String(null()) };

void Vector4_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.Vector4","\x44","\xda","\x50","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector4_obj::__GetStatic;
	__mClass->mSetStaticField = &Vector4_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector4_obj >;
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
