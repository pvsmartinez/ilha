#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
namespace lime{
namespace math{

Void Matrix3_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("lime.math.Matrix3","new",0xb5a52a77,"lime.math.Matrix3.new","lime/math/Matrix3.hx",17,0xeabca539)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(19)
	this->a = a;
	HX_STACK_LINE(20)
	this->b = b;
	HX_STACK_LINE(21)
	this->c = c;
	HX_STACK_LINE(22)
	this->d = d;
	HX_STACK_LINE(23)
	this->tx = tx;
	HX_STACK_LINE(24)
	this->ty = ty;
}
;
	return null();
}

//Matrix3_obj::~Matrix3_obj() { }

Dynamic Matrix3_obj::__CreateEmpty() { return  new Matrix3_obj; }
hx::ObjectPtr< Matrix3_obj > Matrix3_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix3_obj > _result_ = new Matrix3_obj();
	_result_->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _result_;}

Dynamic Matrix3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3_obj > _result_ = new Matrix3_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::lime::math::Matrix3 Matrix3_obj::clone( ){
	HX_STACK_FRAME("lime.math.Matrix3","clone",0xf8506134,"lime.math.Matrix3.clone","lime/math/Matrix3.hx",29,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = this->c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	::lime::math::Matrix3 tmp6 = ::lime::math::Matrix3_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,clone,return )

Void Matrix3_obj::concat( ::lime::math::Matrix3 m){
{
		HX_STACK_FRAME("lime.math.Matrix3","concat",0x0786d75d,"lime.math.Matrix3.concat","lime/math/Matrix3.hx",36,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(38)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		Float tmp1 = m->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		Float tmp4 = m->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Float a1 = tmp6;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(39)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		Float tmp8 = m->b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		Float tmp11 = m->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		this->b = tmp13;
		HX_STACK_LINE(40)
		this->a = a1;
		HX_STACK_LINE(42)
		Float tmp14 = this->c;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		Float tmp15 = m->a;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(42)
		Float tmp17 = this->d;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(42)
		Float tmp18 = m->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(42)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(42)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(42)
		Float c1 = tmp20;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(43)
		Float tmp21 = this->c;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		Float tmp22 = m->b;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		Float tmp24 = this->d;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		Float tmp25 = m->d;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(43)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(43)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(43)
		this->d = tmp27;
		HX_STACK_LINE(44)
		this->c = c1;
		HX_STACK_LINE(46)
		Float tmp28 = this->tx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(46)
		Float tmp29 = m->a;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(46)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(46)
		Float tmp31 = this->ty;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(46)
		Float tmp32 = m->c;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(46)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(46)
		Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(46)
		Float tmp35 = m->tx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(46)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(46)
		Float tx1 = tmp36;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(47)
		Float tmp37 = this->tx;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(47)
		Float tmp38 = m->b;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(47)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(47)
		Float tmp40 = this->ty;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(47)
		Float tmp41 = m->d;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(47)
		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(47)
		Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(47)
		Float tmp44 = m->ty;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(47)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(47)
		this->ty = tmp45;
		HX_STACK_LINE(48)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,concat,(void))

Void Matrix3_obj::copyColumnFrom( int column,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyColumnFrom",0x89c156be,"lime.math.Matrix3.copyColumnFrom","lime/math/Matrix3.hx",55,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(57)
		bool tmp = (column > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		if ((tmp)){
			HX_STACK_LINE(59)
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(61)
			bool tmp1 = (column == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			if ((tmp1)){
				HX_STACK_LINE(63)
				this->a = vector4->x;
				HX_STACK_LINE(64)
				this->c = vector4->y;
			}
			else{
				HX_STACK_LINE(66)
				bool tmp2 = (column == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				if ((tmp2)){
					HX_STACK_LINE(68)
					this->b = vector4->x;
					HX_STACK_LINE(69)
					this->d = vector4->y;
				}
				else{
					HX_STACK_LINE(73)
					this->tx = vector4->x;
					HX_STACK_LINE(74)
					this->ty = vector4->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnFrom,(void))

Void Matrix3_obj::copyColumnTo( int column,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyColumnTo",0x045a59cf,"lime.math.Matrix3.copyColumnTo","lime/math/Matrix3.hx",81,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(83)
		bool tmp = (column > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		if ((tmp)){
			HX_STACK_LINE(85)
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(87)
			bool tmp1 = (column == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(87)
			if ((tmp1)){
				HX_STACK_LINE(89)
				Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(89)
				vector4->x = tmp2;
				HX_STACK_LINE(90)
				Float tmp3 = this->c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				vector4->y = tmp3;
				HX_STACK_LINE(91)
				vector4->z = (int)0;
			}
			else{
				HX_STACK_LINE(93)
				bool tmp2 = (column == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(93)
				if ((tmp2)){
					HX_STACK_LINE(95)
					Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(95)
					vector4->x = tmp3;
					HX_STACK_LINE(96)
					Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(96)
					vector4->y = tmp4;
					HX_STACK_LINE(97)
					vector4->z = (int)0;
				}
				else{
					HX_STACK_LINE(101)
					Float tmp3 = this->tx;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					vector4->x = tmp3;
					HX_STACK_LINE(102)
					Float tmp4 = this->ty;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(102)
					vector4->y = tmp4;
					HX_STACK_LINE(103)
					vector4->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyColumnTo,(void))

Void Matrix3_obj::copyFrom( ::lime::math::Matrix3 sourceMatrix3){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyFrom",0x7e1ebe48,"lime.math.Matrix3.copyFrom","lime/math/Matrix3.hx",110,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceMatrix3,"sourceMatrix3")
		HX_STACK_LINE(112)
		this->a = sourceMatrix3->a;
		HX_STACK_LINE(113)
		this->b = sourceMatrix3->b;
		HX_STACK_LINE(114)
		this->c = sourceMatrix3->c;
		HX_STACK_LINE(115)
		this->d = sourceMatrix3->d;
		HX_STACK_LINE(116)
		this->tx = sourceMatrix3->tx;
		HX_STACK_LINE(117)
		this->ty = sourceMatrix3->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,copyFrom,(void))

Void Matrix3_obj::copyRowFrom( int row,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyRowFrom",0xb0770e86,"lime.math.Matrix3.copyRowFrom","lime/math/Matrix3.hx",122,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(124)
		bool tmp = (row > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(126)
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(128)
			bool tmp1 = (row == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			if ((tmp1)){
				HX_STACK_LINE(130)
				this->a = vector4->x;
				HX_STACK_LINE(131)
				this->c = vector4->y;
			}
			else{
				HX_STACK_LINE(133)
				bool tmp2 = (row == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				if ((tmp2)){
					HX_STACK_LINE(135)
					this->b = vector4->x;
					HX_STACK_LINE(136)
					this->d = vector4->y;
				}
				else{
					HX_STACK_LINE(140)
					this->tx = vector4->x;
					HX_STACK_LINE(141)
					this->ty = vector4->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowFrom,(void))

Void Matrix3_obj::copyRowTo( int row,::lime::math::Vector4 vector4){
{
		HX_STACK_FRAME("lime.math.Matrix3","copyRowTo",0xc3a10f97,"lime.math.Matrix3.copyRowTo","lime/math/Matrix3.hx",148,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector4,"vector4")
		HX_STACK_LINE(150)
		bool tmp = (row > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		if ((tmp)){
			HX_STACK_LINE(152)
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(154)
			bool tmp1 = (row == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			if ((tmp1)){
				HX_STACK_LINE(156)
				Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(156)
				vector4->x = tmp2;
				HX_STACK_LINE(157)
				Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(157)
				vector4->y = tmp3;
				HX_STACK_LINE(158)
				Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(158)
				vector4->z = tmp4;
			}
			else{
				HX_STACK_LINE(160)
				bool tmp2 = (row == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(160)
				if ((tmp2)){
					HX_STACK_LINE(162)
					Float tmp3 = this->c;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(162)
					vector4->x = tmp3;
					HX_STACK_LINE(163)
					Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(163)
					vector4->y = tmp4;
					HX_STACK_LINE(164)
					Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(164)
					vector4->z = tmp5;
				}
				else{
					HX_STACK_LINE(168)
					vector4->x = (int)0;
					HX_STACK_LINE(168)
					vector4->y = (int)0;
					HX_STACK_LINE(168)
					vector4->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,copyRowTo,(void))

Void Matrix3_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("lime.math.Matrix3","createBox",0x9a1719c6,"lime.math.Matrix3.createBox","lime/math/Matrix3.hx",175,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(177)
		this->a = scaleX;
		HX_STACK_LINE(178)
		this->d = scaleY;
		HX_STACK_LINE(179)
		this->b = rotation;
		HX_STACK_LINE(180)
		this->tx = tx;
		HX_STACK_LINE(181)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createBox,(void))

Void Matrix3_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("lime.math.Matrix3","createGradientBox",0xff9720b6,"lime.math.Matrix3.createGradientBox","lime/math/Matrix3.hx",186,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(188)
		Float tmp = (Float(width) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		this->a = tmp;
		HX_STACK_LINE(189)
		Float tmp1 = (Float(height) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		this->d = tmp1;
		HX_STACK_LINE(192)
		bool tmp2 = (rotation != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp2)){
			HX_STACK_LINE(194)
			Float tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			Float cos = tmp4;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(195)
			Float tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(195)
			Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(195)
			Float sin = tmp6;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(197)
			Float tmp7 = sin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			Float tmp8 = this->d;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(197)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(197)
			this->b = tmp9;
			HX_STACK_LINE(198)
			Float tmp10 = sin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(198)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(198)
			Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			this->c = tmp13;
			HX_STACK_LINE(199)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(200)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(204)
			this->b = (int)0;
			HX_STACK_LINE(205)
			this->c = (int)0;
		}
		HX_STACK_LINE(209)
		Float tmp3 = tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(209)
		this->tx = tmp5;
		HX_STACK_LINE(210)
		Float tmp6 = ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		this->ty = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix3_obj,createGradientBox,(void))

bool Matrix3_obj::equals( Dynamic Matrix3){
	HX_STACK_FRAME("lime.math.Matrix3","equals",0xffa9bc88,"lime.math.Matrix3.equals","lime/math/Matrix3.hx",215,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Matrix3,"Matrix3")
	HX_STACK_LINE(217)
	bool tmp = (Matrix3 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	if ((tmp1)){
		HX_STACK_LINE(217)
		Float tmp3 = this->tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		Float tmp6 = Matrix3->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(217)
		tmp2 = false;
	}
	HX_STACK_LINE(217)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(217)
	if ((tmp3)){
		HX_STACK_LINE(217)
		Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		Float tmp8 = Matrix3->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(217)
		tmp4 = false;
	}
	HX_STACK_LINE(217)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(217)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(217)
	if ((tmp5)){
		HX_STACK_LINE(217)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		Float tmp10 = Matrix3->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(217)
		tmp6 = false;
	}
	HX_STACK_LINE(217)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(217)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(217)
	if ((tmp7)){
		HX_STACK_LINE(217)
		Float tmp9 = this->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		Float tmp12 = Matrix3->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		tmp8 = (tmp11 == tmp12);
	}
	else{
		HX_STACK_LINE(217)
		tmp8 = false;
	}
	HX_STACK_LINE(217)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(217)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(217)
	if ((tmp9)){
		HX_STACK_LINE(217)
		Float tmp11 = this->c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(217)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		Float tmp14 = Matrix3->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		tmp10 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(217)
		tmp10 = false;
	}
	HX_STACK_LINE(217)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(217)
	if ((tmp10)){
		HX_STACK_LINE(217)
		Float tmp12 = this->d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(217)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(217)
		Float tmp14 = Matrix3->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		tmp11 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(217)
		tmp11 = false;
	}
	HX_STACK_LINE(217)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,equals,return )

::lime::math::Vector2 Matrix3_obj::deltaTransformVector2( ::lime::math::Vector2 Vector2){
	HX_STACK_FRAME("lime.math.Matrix3","deltaTransformVector2",0xf0c299f2,"lime.math.Matrix3.deltaTransformVector2","lime/math/Matrix3.hx",222,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Vector2,"Vector2")
	HX_STACK_LINE(224)
	Float tmp = Vector2->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	Float tmp3 = Vector2->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(224)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(224)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(224)
	Float tmp7 = Vector2->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(224)
	Float tmp8 = this->b;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(224)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(224)
	Float tmp10 = Vector2->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(224)
	Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(224)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(224)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(224)
	::lime::math::Vector2 tmp14 = ::lime::math::Vector2_obj::__new(tmp6,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(224)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,deltaTransformVector2,return )

Void Matrix3_obj::identity( ){
{
		HX_STACK_FRAME("lime.math.Matrix3","identity",0x6eecf7c7,"lime.math.Matrix3.identity","lime/math/Matrix3.hx",229,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->a = (int)1;
		HX_STACK_LINE(232)
		this->b = (int)0;
		HX_STACK_LINE(233)
		this->c = (int)0;
		HX_STACK_LINE(234)
		this->d = (int)1;
		HX_STACK_LINE(235)
		this->tx = (int)0;
		HX_STACK_LINE(236)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,identity,(void))

::lime::math::Matrix3 Matrix3_obj::invert( ){
	HX_STACK_FRAME("lime.math.Matrix3","invert",0xdf8fb55f,"lime.math.Matrix3.invert","lime/math/Matrix3.hx",241,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(243)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(243)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(243)
	Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(245)
	bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(245)
	if ((tmp7)){
		HX_STACK_LINE(247)
		Float tmp8 = this->d = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		Float tmp9 = this->c = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(247)
		Float tmp10 = this->b = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(247)
		this->a = tmp10;
		HX_STACK_LINE(248)
		Float tmp11 = this->tx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(248)
		this->tx = tmp12;
		HX_STACK_LINE(249)
		Float tmp13 = this->ty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(249)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(249)
		this->ty = tmp14;
	}
	else{
		HX_STACK_LINE(253)
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(253)
		norm = tmp8;
		HX_STACK_LINE(254)
		Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(254)
		Float tmp10 = norm;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(254)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(254)
		Float a1 = tmp11;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(255)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(255)
		Float tmp13 = norm;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(255)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(255)
		this->d = tmp14;
		HX_STACK_LINE(256)
		this->a = a1;
		HX_STACK_LINE(257)
		Float tmp15 = norm;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(257)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(257)
		hx::MultEq(this->b,tmp16);
		HX_STACK_LINE(258)
		Float tmp17 = norm;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(258)
		Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(258)
		hx::MultEq(this->c,tmp18);
		HX_STACK_LINE(260)
		Float tmp19 = this->a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(260)
		Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(260)
		Float tmp21 = this->tx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(260)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(260)
		Float tmp23 = this->c;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(260)
		Float tmp24 = this->ty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(260)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(260)
		Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(260)
		Float tx1 = tmp26;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(261)
		Float tmp27 = this->b;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(261)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(261)
		Float tmp29 = this->tx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(261)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(261)
		Float tmp31 = this->d;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(261)
		Float tmp32 = this->ty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(261)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(261)
		Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(261)
		this->ty = tmp34;
		HX_STACK_LINE(262)
		this->tx = tx1;
	}
	HX_STACK_LINE(268)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,invert,return )

::lime::math::Matrix3 Matrix3_obj::mult( ::lime::math::Matrix3 m){
	HX_STACK_FRAME("lime.math.Matrix3","mult",0x3a42e1f9,"lime.math.Matrix3.mult","lime/math/Matrix3.hx",273,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(275)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(275)
	Float tmp2 = this->c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(275)
	Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(275)
	Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(275)
	::lime::math::Matrix3 tmp6 = ::lime::math::Matrix3_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(275)
	::lime::math::Matrix3 result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(276)
	::lime::math::Matrix3 tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(276)
	result->concat(tmp7);
	HX_STACK_LINE(277)
	::lime::math::Matrix3 tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(277)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,mult,return )

Void Matrix3_obj::rotate( Float theta){
{
		HX_STACK_FRAME("lime.math.Matrix3","rotate",0x0ad714a4,"lime.math.Matrix3.rotate","lime/math/Matrix3.hx",282,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(theta,"theta")
		HX_STACK_LINE(298)
		Float tmp = theta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		Float cos = tmp1;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(299)
		Float tmp2 = theta;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		Float sin = tmp3;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(301)
		Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(301)
		Float tmp5 = cos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(301)
		Float tmp7 = this->b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(301)
		Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(301)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(301)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(301)
		Float a1 = tmp10;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(302)
		Float tmp11 = this->a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(302)
		Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(302)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(302)
		Float tmp14 = this->b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(302)
		Float tmp15 = cos;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(302)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(302)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(302)
		this->b = tmp17;
		HX_STACK_LINE(303)
		this->a = a1;
		HX_STACK_LINE(305)
		Float tmp18 = this->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(305)
		Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(305)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(305)
		Float tmp21 = this->d;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(305)
		Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(305)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(305)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(305)
		Float c1 = tmp24;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(306)
		Float tmp25 = this->c;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(306)
		Float tmp26 = sin;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(306)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(306)
		Float tmp28 = this->d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(306)
		Float tmp29 = cos;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(306)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(306)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(306)
		this->d = tmp31;
		HX_STACK_LINE(307)
		this->c = c1;
		HX_STACK_LINE(309)
		Float tmp32 = this->tx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(309)
		Float tmp33 = cos;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(309)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(309)
		Float tmp35 = this->ty;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(309)
		Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(309)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(309)
		Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(309)
		Float tx1 = tmp38;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(310)
		Float tmp39 = this->tx;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(310)
		Float tmp40 = sin;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(310)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(310)
		Float tmp42 = this->ty;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(310)
		Float tmp43 = cos;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(310)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(310)
		Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(310)
		this->ty = tmp45;
		HX_STACK_LINE(311)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,rotate,(void))

Void Matrix3_obj::scale( Float sx,Float sy){
{
		HX_STACK_FRAME("lime.math.Matrix3","scale",0x28bc1c61,"lime.math.Matrix3.scale","lime/math/Matrix3.hx",318,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(329)
		hx::MultEq(this->a,sx);
		HX_STACK_LINE(330)
		hx::MultEq(this->b,sy);
		HX_STACK_LINE(331)
		hx::MultEq(this->c,sx);
		HX_STACK_LINE(332)
		hx::MultEq(this->d,sy);
		HX_STACK_LINE(333)
		hx::MultEq(this->tx,sx);
		HX_STACK_LINE(334)
		hx::MultEq(this->ty,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,scale,(void))

Void Matrix3_obj::setRotation( Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("lime.math.Matrix3","setRotation",0xf9d2d017,"lime.math.Matrix3.setRotation","lime/math/Matrix3.hx",341,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(theta,"theta")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(343)
		Float tmp = theta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(343)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		Float tmp2 = scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		this->a = tmp3;
		HX_STACK_LINE(344)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		Float tmp6 = scale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(344)
		this->c = tmp7;
		HX_STACK_LINE(345)
		Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		this->b = tmp9;
		HX_STACK_LINE(346)
		Float tmp10 = this->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(346)
		this->d = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,setRotation,(void))

Void Matrix3_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("lime.math.Matrix3","setTo",0x2a1cdf94,"lime.math.Matrix3.setTo","lime/math/Matrix3.hx",353,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(355)
		this->a = a;
		HX_STACK_LINE(356)
		this->b = b;
		HX_STACK_LINE(357)
		this->c = c;
		HX_STACK_LINE(358)
		this->d = d;
		HX_STACK_LINE(359)
		this->tx = tx;
		HX_STACK_LINE(360)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix3_obj,setTo,(void))

::String Matrix3_obj::to3DString( hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
	HX_STACK_FRAME("lime.math.Matrix3","to3DString",0x3565e3a6,"lime.math.Matrix3.to3DString","lime/math/Matrix3.hx",365,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(roundPixels,"roundPixels")
{
		HX_STACK_LINE(375)
		bool tmp = roundPixels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		if ((tmp)){
			HX_STACK_LINE(377)
			Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(377)
			::String tmp2 = (HX_HCSTRING("Matrix33d(","\xc5","\xda","\xb4","\x68") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(377)
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(377)
			Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(377)
			::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			::String tmp7 = (tmp6 + HX_HCSTRING("0, 0, ","\x80","\x3e","\x0e","\x9c"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(377)
			::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(377)
			Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(377)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(377)
			::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(377)
			::String tmp14 = (tmp13 + HX_HCSTRING("0, 0, 0, 0, 1, 0, ","\xdf","\xb7","\x27","\x12"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(377)
			Float tmp15 = this->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(377)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(377)
			::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(377)
			::String tmp18 = (tmp17 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(377)
			Float tmp19 = this->ty;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(377)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(377)
			::String tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(377)
			::String tmp22 = (tmp21 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(377)
			return tmp22;
		}
		else{
			HX_STACK_LINE(381)
			Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(381)
			::String tmp2 = (HX_HCSTRING("Matrix33d(","\xc5","\xda","\xb4","\x68") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			::String tmp7 = (tmp6 + HX_HCSTRING("0, 0, ","\x80","\x3e","\x0e","\x9c"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(381)
			::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(381)
			::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(381)
			Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(381)
			::String tmp14 = (tmp13 + HX_HCSTRING("0, 0, 0, 0, 1, 0, ","\xdf","\xb7","\x27","\x12"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(381)
			Float tmp15 = this->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(381)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(381)
			::String tmp17 = (tmp16 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(381)
			Float tmp18 = this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(381)
			::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(381)
			::String tmp20 = (tmp19 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(381)
			return tmp20;
		}
		HX_STACK_LINE(375)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,to3DString,return )

::String Matrix3_obj::toMozString( ){
	HX_STACK_FRAME("lime.math.Matrix3","toMozString",0xdc79a1e5,"lime.math.Matrix3.toMozString","lime/math/Matrix3.hx",388,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	::String tmp1 = (HX_HCSTRING("Matrix3(","\x36","\xf1","\xa4","\x40") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(390)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(390)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(390)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(390)
	Float tmp6 = this->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(390)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(390)
	::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(390)
	Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(390)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(390)
	::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(390)
	Float tmp12 = this->tx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(390)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(390)
	::String tmp14 = (tmp13 + HX_HCSTRING("px, ","\x7c","\x1a","\x63","\x4a"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(390)
	Float tmp15 = this->ty;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(390)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(390)
	::String tmp17 = (tmp16 + HX_HCSTRING("px)","\x21","\x65","\x55","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(390)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toMozString,return )

::String Matrix3_obj::toString( ){
	HX_STACK_FRAME("lime.math.Matrix3","toString",0xee2c8335,"lime.math.Matrix3.toString","lime/math/Matrix3.hx",395,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(397)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	::String tmp1 = (HX_HCSTRING("Matrix3(","\x36","\xf1","\xa4","\x40") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(397)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(397)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(397)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(397)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(397)
	Float tmp6 = this->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(397)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(397)
	::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(397)
	Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(397)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(397)
	::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(397)
	Float tmp12 = this->tx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(397)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(397)
	::String tmp14 = (tmp13 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(397)
	Float tmp15 = this->ty;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(397)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(397)
	::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(397)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,toString,return )

::lime::math::Vector2 Matrix3_obj::transformVector2( ::lime::math::Vector2 pos){
	HX_STACK_FRAME("lime.math.Matrix3","transformVector2",0x83039d8c,"lime.math.Matrix3.transformVector2","lime/math/Matrix3.hx",402,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(404)
	Float tmp = pos->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	Float tmp3 = pos->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(404)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(404)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(404)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(404)
	Float tmp9 = pos->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(404)
	Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(404)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(404)
	Float tmp12 = pos->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(404)
	Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(404)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(404)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(404)
	Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(404)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(404)
	::lime::math::Vector2 tmp18 = ::lime::math::Vector2_obj::__new(tmp8,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(404)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,transformVector2,return )

Void Matrix3_obj::translate( Float dx,Float dy){
{
		HX_STACK_FRAME("lime.math.Matrix3","translate",0x99be5ca5,"lime.math.Matrix3.translate","lime/math/Matrix3.hx",409,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(411)
		hx::AddEq(this->tx,dx);
		HX_STACK_LINE(412)
		hx::AddEq(this->ty,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3_obj,translate,(void))

Void Matrix3_obj::__cleanValues( ){
{
		HX_STACK_FRAME("lime.math.Matrix3","__cleanValues",0x3007f402,"lime.math.Matrix3.__cleanValues","lime/math/Matrix3.hx",417,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		Float tmp1 = (tmp * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		this->a = tmp3;
		HX_STACK_LINE(420)
		Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(420)
		Float tmp5 = (tmp4 * (int)1000);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(420)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		Float tmp7 = (Float(tmp6) / Float((int)1000));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		this->b = tmp7;
		HX_STACK_LINE(421)
		Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(421)
		Float tmp9 = (tmp8 * (int)1000);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(421)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(421)
		Float tmp11 = (Float(tmp10) / Float((int)1000));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(421)
		this->c = tmp11;
		HX_STACK_LINE(422)
		Float tmp12 = this->d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(422)
		Float tmp13 = (tmp12 * (int)1000);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(422)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(422)
		Float tmp15 = (Float(tmp14) / Float((int)1000));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(422)
		this->d = tmp15;
		HX_STACK_LINE(423)
		Float tmp16 = this->tx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(423)
		Float tmp17 = (tmp16 * (int)10);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(423)
		int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(423)
		Float tmp19 = (Float(tmp18) / Float((int)10));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(423)
		this->tx = tmp19;
		HX_STACK_LINE(424)
		Float tmp20 = this->ty;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(424)
		Float tmp21 = (tmp20 * (int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(424)
		int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(424)
		Float tmp23 = (Float(tmp22) / Float((int)10));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(424)
		this->ty = tmp23;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3_obj,__cleanValues,(void))

Float Matrix3_obj::__transformX( ::lime::math::Vector2 pos){
	HX_STACK_FRAME("lime.math.Matrix3","__transformX",0xe12c3795,"lime.math.Matrix3.__transformX","lime/math/Matrix3.hx",429,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(431)
	Float tmp = pos->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(431)
	Float tmp3 = pos->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(431)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(431)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(431)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(431)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(431)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__transformX,return )

Float Matrix3_obj::__transformY( ::lime::math::Vector2 pos){
	HX_STACK_FRAME("lime.math.Matrix3","__transformY",0xe12c3796,"lime.math.Matrix3.__transformY","lime/math/Matrix3.hx",436,0xeabca539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(438)
	Float tmp = pos->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	Float tmp3 = pos->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(438)
	Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(438)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(438)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(438)
	Float tmp7 = this->ty;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(438)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(438)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__transformY,return )

Void Matrix3_obj::__translateTransformed( ::lime::math::Vector2 pos){
{
		HX_STACK_FRAME("lime.math.Matrix3","__translateTransformed",0x7b249386,"lime.math.Matrix3.__translateTransformed","lime/math/Matrix3.hx",443,0xeabca539)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(445)
		Float tmp = pos->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		Float tmp3 = pos->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(445)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(445)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(445)
		Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		this->tx = tmp8;
		HX_STACK_LINE(446)
		Float tmp9 = pos->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(446)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(446)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(446)
		Float tmp12 = pos->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(446)
		Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(446)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(446)
		Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(446)
		Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(446)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(446)
		this->ty = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3_obj,__translateTransformed,(void))

::lime::math::Matrix3 Matrix3_obj::__identity;


Matrix3_obj::Matrix3_obj()
{
}

Dynamic Matrix3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"to3DString") ) { return to3DString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return toMozString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return __transformX_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return __transformY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return __cleanValues_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVector2") ) { return transformVector2_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"deltaTransformVector2") ) { return deltaTransformVector2_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return __translateTransformed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = __identity; return true;  }
	}
	return false;
}

Dynamic Matrix3_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix3_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { __identity=ioValue.Cast< ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

void Matrix3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix3_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::math::Matrix3*/ ,(void *) &Matrix3_obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("deltaTransformVector2","\x1b","\xee","\xe5","\x85"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("to3DString","\xdd","\xbc","\xef","\x4e"),
	HX_HCSTRING("toMozString","\xce","\xd8","\x8d","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformVector2","\x03","\xba","\x12","\x8a"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("__cleanValues","\x2b","\x77","\xc6","\x85"),
	HX_HCSTRING("__transformX","\x8c","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__transformY","\x8d","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__translateTransformed","\x3d","\xe3","\xea","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix3_obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix3_obj::__identity,"__identity");
};

#endif

hx::Class Matrix3_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	::String(null()) };

void Matrix3_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.Matrix3","\x05","\x23","\x1b","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix3_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3_obj >;
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

void Matrix3_obj::__boot()
{
	__identity= ::lime::math::Matrix3_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace lime
} // end namespace math
