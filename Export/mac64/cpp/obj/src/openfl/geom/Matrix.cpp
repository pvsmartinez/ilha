#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("openfl.geom.Matrix","new",0xd1b9ff67,"openfl.geom.Matrix.new","openfl/geom/Matrix.hx",131,0xa0d54189)
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
	HX_STACK_LINE(133)
	this->a = a;
	HX_STACK_LINE(134)
	this->b = b;
	HX_STACK_LINE(135)
	this->c = c;
	HX_STACK_LINE(136)
	this->d = d;
	HX_STACK_LINE(137)
	this->tx = tx;
	HX_STACK_LINE(138)
	this->ty = ty;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return _result_;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::openfl::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Matrix","clone",0xe2f85224,"openfl.geom.Matrix.clone","openfl/geom/Matrix.hx",149,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	Float tmp2 = this->c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(151)
	::openfl::geom::Matrix tmp6 = ::openfl::geom::Matrix_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(151)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

Void Matrix_obj::concat( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.geom.Matrix","concat",0x6fd1b86d,"openfl.geom.Matrix.concat","openfl/geom/Matrix.hx",174,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(176)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		Float tmp1 = m->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		Float tmp4 = m->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		Float a1 = tmp6;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(177)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		Float tmp8 = m->b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		Float tmp11 = m->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(177)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(177)
		this->b = tmp13;
		HX_STACK_LINE(178)
		this->a = a1;
		HX_STACK_LINE(180)
		Float tmp14 = this->c;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(180)
		Float tmp15 = m->a;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(180)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(180)
		Float tmp17 = this->d;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(180)
		Float tmp18 = m->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(180)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(180)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(180)
		Float c1 = tmp20;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(181)
		Float tmp21 = this->c;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(181)
		Float tmp22 = m->b;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(181)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(181)
		Float tmp24 = this->d;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(181)
		Float tmp25 = m->d;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(181)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(181)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(181)
		this->d = tmp27;
		HX_STACK_LINE(182)
		this->c = c1;
		HX_STACK_LINE(184)
		Float tmp28 = this->tx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(184)
		Float tmp29 = m->a;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(184)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(184)
		Float tmp31 = this->ty;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(184)
		Float tmp32 = m->c;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(184)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(184)
		Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(184)
		Float tmp35 = m->tx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(184)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(184)
		Float tx1 = tmp36;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(185)
		Float tmp37 = this->tx;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(185)
		Float tmp38 = m->b;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(185)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(185)
		Float tmp40 = this->ty;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(185)
		Float tmp41 = m->d;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(185)
		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(185)
		Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(185)
		Float tmp44 = m->ty;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(185)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(185)
		this->ty = tmp45;
		HX_STACK_LINE(186)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

Void Matrix_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyColumnFrom",0xa86bc7ce,"openfl.geom.Matrix.copyColumnFrom","openfl/geom/Matrix.hx",193,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(195)
		bool tmp = (column > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		if ((tmp)){
			HX_STACK_LINE(197)
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(199)
			bool tmp1 = (column == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(199)
			if ((tmp1)){
				HX_STACK_LINE(201)
				this->a = vector3D->x;
				HX_STACK_LINE(202)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(204)
				bool tmp2 = (column == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(204)
				if ((tmp2)){
					HX_STACK_LINE(206)
					this->b = vector3D->x;
					HX_STACK_LINE(207)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(211)
					this->tx = vector3D->x;
					HX_STACK_LINE(212)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

Void Matrix_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyColumnTo",0xb6db66df,"openfl.geom.Matrix.copyColumnTo","openfl/geom/Matrix.hx",219,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(221)
		bool tmp = (column > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		if ((tmp)){
			HX_STACK_LINE(223)
			::String tmp1 = (HX_HCSTRING("Column ","\x6a","\xd4","\xaa","\xc0") + column);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(225)
			bool tmp1 = (column == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(225)
			if ((tmp1)){
				HX_STACK_LINE(227)
				Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(227)
				vector3D->x = tmp2;
				HX_STACK_LINE(228)
				Float tmp3 = this->c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				vector3D->y = tmp3;
				HX_STACK_LINE(229)
				vector3D->z = (int)0;
			}
			else{
				HX_STACK_LINE(231)
				bool tmp2 = (column == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(231)
				if ((tmp2)){
					HX_STACK_LINE(233)
					Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(233)
					vector3D->x = tmp3;
					HX_STACK_LINE(234)
					Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(234)
					vector3D->y = tmp4;
					HX_STACK_LINE(235)
					vector3D->z = (int)0;
				}
				else{
					HX_STACK_LINE(239)
					Float tmp3 = this->tx;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(239)
					vector3D->x = tmp3;
					HX_STACK_LINE(240)
					Float tmp4 = this->ty;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(240)
					vector3D->y = tmp4;
					HX_STACK_LINE(241)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

Void Matrix_obj::copyFrom( ::openfl::geom::Matrix sourceMatrix){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyFrom",0xb7b00358,"openfl.geom.Matrix.copyFrom","openfl/geom/Matrix.hx",248,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceMatrix,"sourceMatrix")
		HX_STACK_LINE(250)
		this->a = sourceMatrix->a;
		HX_STACK_LINE(251)
		this->b = sourceMatrix->b;
		HX_STACK_LINE(252)
		this->c = sourceMatrix->c;
		HX_STACK_LINE(253)
		this->d = sourceMatrix->d;
		HX_STACK_LINE(254)
		this->tx = sourceMatrix->tx;
		HX_STACK_LINE(255)
		this->ty = sourceMatrix->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyRowFrom",0xadd25376,"openfl.geom.Matrix.copyRowFrom","openfl/geom/Matrix.hx",260,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(262)
		bool tmp = (row > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		if ((tmp)){
			HX_STACK_LINE(264)
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(264)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(264)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(266)
			bool tmp1 = (row == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(266)
			if ((tmp1)){
				HX_STACK_LINE(268)
				this->a = vector3D->x;
				HX_STACK_LINE(269)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(271)
				bool tmp2 = (row == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(271)
				if ((tmp2)){
					HX_STACK_LINE(273)
					this->b = vector3D->x;
					HX_STACK_LINE(274)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(278)
					this->tx = vector3D->x;
					HX_STACK_LINE(279)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

Void Matrix_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyRowTo",0xe92c3887,"openfl.geom.Matrix.copyRowTo","openfl/geom/Matrix.hx",286,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(288)
		bool tmp = (row > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(290)
			::String tmp1 = (HX_HCSTRING("Row ","\xe6","\x20","\x88","\x36") + row);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds (2)","\xeb","\xc3","\xf0","\xde"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			HX_STACK_DO_THROW(tmp2);
		}
		else{
			HX_STACK_LINE(292)
			bool tmp1 = (row == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(292)
			if ((tmp1)){
				HX_STACK_LINE(294)
				Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(294)
				vector3D->x = tmp2;
				HX_STACK_LINE(295)
				Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(295)
				vector3D->y = tmp3;
				HX_STACK_LINE(296)
				Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				vector3D->z = tmp4;
			}
			else{
				HX_STACK_LINE(298)
				bool tmp2 = (row == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(298)
				if ((tmp2)){
					HX_STACK_LINE(300)
					Float tmp3 = this->c;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(300)
					vector3D->x = tmp3;
					HX_STACK_LINE(301)
					Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(301)
					vector3D->y = tmp4;
					HX_STACK_LINE(302)
					Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(302)
					vector3D->z = tmp5;
				}
				else{
					HX_STACK_LINE(306)
					vector3D->x = (int)0;
					HX_STACK_LINE(306)
					vector3D->y = (int)0;
					HX_STACK_LINE(306)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix","createBox",0xbfa242b6,"openfl.geom.Matrix.createBox","openfl/geom/Matrix.hx",331,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(338)
		bool tmp = (rotation != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		if ((tmp)){
			HX_STACK_LINE(340)
			Float tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(340)
			Float tmp2 = ::Math_obj::cos(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(340)
			Float cos = tmp2;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(341)
			Float tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(341)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(341)
			Float sin = tmp4;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(343)
			Float tmp5 = (cos * scaleX);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(343)
			this->a = tmp5;
			HX_STACK_LINE(344)
			Float tmp6 = (sin * scaleY);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			this->b = tmp6;
			HX_STACK_LINE(345)
			Float tmp7 = sin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(345)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(345)
			Float tmp9 = scaleX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(345)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(345)
			this->c = tmp10;
			HX_STACK_LINE(346)
			Float tmp11 = (cos * scaleY);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(346)
			this->d = tmp11;
		}
		else{
			HX_STACK_LINE(350)
			this->a = scaleX;
			HX_STACK_LINE(351)
			this->b = (int)0;
			HX_STACK_LINE(352)
			this->c = (int)0;
			HX_STACK_LINE(353)
			this->d = scaleY;
		}
		HX_STACK_LINE(357)
		this->tx = tx;
		HX_STACK_LINE(358)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix","createGradientBox",0xa2dcb9a6,"openfl.geom.Matrix.createGradientBox","openfl/geom/Matrix.hx",396,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(398)
		Float tmp = (Float(width) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		this->a = tmp;
		HX_STACK_LINE(399)
		Float tmp1 = (Float(height) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		this->d = tmp1;
		HX_STACK_LINE(402)
		bool tmp2 = (rotation != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		if ((tmp2)){
			HX_STACK_LINE(404)
			Float tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(404)
			Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(404)
			Float cos = tmp4;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(405)
			Float tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(405)
			Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(405)
			Float sin = tmp6;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(407)
			Float tmp7 = sin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(407)
			Float tmp8 = this->d;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(407)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(407)
			this->b = tmp9;
			HX_STACK_LINE(408)
			Float tmp10 = sin;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(408)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(408)
			Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(408)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(408)
			this->c = tmp13;
			HX_STACK_LINE(409)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(410)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(414)
			this->b = (int)0;
			HX_STACK_LINE(415)
			this->c = (int)0;
		}
		HX_STACK_LINE(419)
		Float tmp3 = tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(419)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(419)
		this->tx = tmp5;
		HX_STACK_LINE(420)
		Float tmp6 = ty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		this->ty = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

::openfl::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.geom.Matrix","deltaTransformPoint",0xeb963a63,"openfl.geom.Matrix.deltaTransformPoint","openfl/geom/Matrix.hx",437,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(439)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(439)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(439)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(439)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(439)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(439)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(439)
	Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(439)
	Float tmp8 = this->b;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(439)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(439)
	Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(439)
	Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(439)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(439)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(439)
	::openfl::geom::Point tmp14 = ::openfl::geom::Point_obj::__new(tmp6,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(439)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

bool Matrix_obj::equals( Dynamic matrix){
	HX_STACK_FRAME("openfl.geom.Matrix","equals",0x67f49d98,"openfl.geom.Matrix.equals","openfl/geom/Matrix.hx",444,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(446)
	bool tmp = (matrix != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	if ((tmp1)){
		HX_STACK_LINE(446)
		Float tmp3 = this->tx;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(446)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		Float tmp6 = matrix->__Field(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(446)
		tmp2 = false;
	}
	HX_STACK_LINE(446)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(446)
	if ((tmp3)){
		HX_STACK_LINE(446)
		Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		Float tmp8 = matrix->__Field(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(446)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(446)
		tmp4 = false;
	}
	HX_STACK_LINE(446)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(446)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(446)
	if ((tmp5)){
		HX_STACK_LINE(446)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(446)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(446)
		Float tmp10 = matrix->__Field(HX_HCSTRING("a","\x61","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(446)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(446)
		tmp6 = false;
	}
	HX_STACK_LINE(446)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(446)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(446)
	if ((tmp7)){
		HX_STACK_LINE(446)
		Float tmp9 = this->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(446)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(446)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(446)
		Float tmp12 = matrix->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(446)
		tmp8 = (tmp11 == tmp12);
	}
	else{
		HX_STACK_LINE(446)
		tmp8 = false;
	}
	HX_STACK_LINE(446)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(446)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(446)
	if ((tmp9)){
		HX_STACK_LINE(446)
		Float tmp11 = this->c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(446)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(446)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(446)
		Float tmp14 = matrix->__Field(HX_HCSTRING("c","\x63","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(446)
		tmp10 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(446)
		tmp10 = false;
	}
	HX_STACK_LINE(446)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(446)
	if ((tmp10)){
		HX_STACK_LINE(446)
		Float tmp12 = this->d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(446)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(446)
		Float tmp14 = matrix->__Field(HX_HCSTRING("d","\x64","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(446)
		tmp11 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(446)
		tmp11 = false;
	}
	HX_STACK_LINE(446)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix","identity",0xa87e3cd7,"openfl.geom.Matrix.identity","openfl/geom/Matrix.hx",464,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		this->a = (int)1;
		HX_STACK_LINE(467)
		this->b = (int)0;
		HX_STACK_LINE(468)
		this->c = (int)0;
		HX_STACK_LINE(469)
		this->d = (int)1;
		HX_STACK_LINE(470)
		this->tx = (int)0;
		HX_STACK_LINE(471)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::openfl::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_FRAME("openfl.geom.Matrix","invert",0x47da966f,"openfl.geom.Matrix.invert","openfl/geom/Matrix.hx",482,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(484)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(484)
	Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(484)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(484)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(484)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(484)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(484)
	Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(486)
	bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(486)
	if ((tmp7)){
		HX_STACK_LINE(488)
		Float tmp8 = this->d = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(488)
		Float tmp9 = this->c = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(488)
		Float tmp10 = this->b = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(488)
		this->a = tmp10;
		HX_STACK_LINE(489)
		Float tmp11 = this->tx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(489)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(489)
		this->tx = tmp12;
		HX_STACK_LINE(490)
		Float tmp13 = this->ty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(490)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(490)
		this->ty = tmp14;
	}
	else{
		HX_STACK_LINE(494)
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(494)
		norm = tmp8;
		HX_STACK_LINE(495)
		Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(495)
		Float tmp10 = norm;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(495)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(495)
		Float a1 = tmp11;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(496)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(496)
		Float tmp13 = norm;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(496)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(496)
		this->d = tmp14;
		HX_STACK_LINE(497)
		this->a = a1;
		HX_STACK_LINE(498)
		Float tmp15 = norm;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(498)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(498)
		hx::MultEq(this->b,tmp16);
		HX_STACK_LINE(499)
		Float tmp17 = norm;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(499)
		Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(499)
		hx::MultEq(this->c,tmp18);
		HX_STACK_LINE(501)
		Float tmp19 = this->a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(501)
		Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(501)
		Float tmp21 = this->tx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(501)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(501)
		Float tmp23 = this->c;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(501)
		Float tmp24 = this->ty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(501)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(501)
		Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(501)
		Float tx1 = tmp26;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(502)
		Float tmp27 = this->b;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(502)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(502)
		Float tmp29 = this->tx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(502)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(502)
		Float tmp31 = this->d;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(502)
		Float tmp32 = this->ty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(502)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(502)
		Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(502)
		this->ty = tmp34;
		HX_STACK_LINE(503)
		this->tx = tx1;
	}
	HX_STACK_LINE(509)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

Void Matrix_obj::rotate( Float theta){
{
		HX_STACK_FRAME("openfl.geom.Matrix","rotate",0x7321f5b4,"openfl.geom.Matrix.rotate","openfl/geom/Matrix.hx",524,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(theta,"theta")
		HX_STACK_LINE(540)
		Float tmp = theta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		Float cos = tmp1;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(541)
		Float tmp2 = theta;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(541)
		Float sin = tmp3;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(543)
		Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(543)
		Float tmp5 = cos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(543)
		Float tmp7 = this->b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(543)
		Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(543)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(543)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(543)
		Float a1 = tmp10;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(544)
		Float tmp11 = this->a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(544)
		Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(544)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(544)
		Float tmp14 = this->b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(544)
		Float tmp15 = cos;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(544)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(544)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(544)
		this->b = tmp17;
		HX_STACK_LINE(545)
		this->a = a1;
		HX_STACK_LINE(547)
		Float tmp18 = this->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(547)
		Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(547)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(547)
		Float tmp21 = this->d;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(547)
		Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(547)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(547)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(547)
		Float c1 = tmp24;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(548)
		Float tmp25 = this->c;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(548)
		Float tmp26 = sin;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(548)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(548)
		Float tmp28 = this->d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(548)
		Float tmp29 = cos;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(548)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(548)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(548)
		this->d = tmp31;
		HX_STACK_LINE(549)
		this->c = c1;
		HX_STACK_LINE(551)
		Float tmp32 = this->tx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(551)
		Float tmp33 = cos;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(551)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(551)
		Float tmp35 = this->ty;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(551)
		Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(551)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(551)
		Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(551)
		Float tx1 = tmp38;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(552)
		Float tmp39 = this->tx;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(552)
		Float tmp40 = sin;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(552)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(552)
		Float tmp42 = this->ty;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(552)
		Float tmp43 = cos;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(552)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(552)
		Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(552)
		this->ty = tmp45;
		HX_STACK_LINE(553)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

Void Matrix_obj::scale( Float sx,Float sy){
{
		HX_STACK_FRAME("openfl.geom.Matrix","scale",0x13640d51,"openfl.geom.Matrix.scale","openfl/geom/Matrix.hx",573,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(584)
		hx::MultEq(this->a,sx);
		HX_STACK_LINE(585)
		hx::MultEq(this->b,sy);
		HX_STACK_LINE(586)
		hx::MultEq(this->c,sx);
		HX_STACK_LINE(587)
		hx::MultEq(this->d,sy);
		HX_STACK_LINE(588)
		hx::MultEq(this->tx,sx);
		HX_STACK_LINE(589)
		hx::MultEq(this->ty,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::setRotation( Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("openfl.geom.Matrix","setRotation",0xf72e1507,"openfl.geom.Matrix.setRotation","openfl/geom/Matrix.hx",596,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(theta,"theta")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(598)
		Float tmp = theta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(598)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(598)
		Float tmp2 = scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(598)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(598)
		this->a = tmp3;
		HX_STACK_LINE(599)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(599)
		Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(599)
		Float tmp6 = scale;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(599)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(599)
		this->c = tmp7;
		HX_STACK_LINE(600)
		Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(600)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(600)
		this->b = tmp9;
		HX_STACK_LINE(601)
		Float tmp10 = this->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(601)
		this->d = tmp10;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("openfl.geom.Matrix","setTo",0x14c4d084,"openfl.geom.Matrix.setTo","openfl/geom/Matrix.hx",608,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(610)
		this->a = a;
		HX_STACK_LINE(611)
		this->b = b;
		HX_STACK_LINE(612)
		this->c = c;
		HX_STACK_LINE(613)
		this->d = d;
		HX_STACK_LINE(614)
		this->tx = tx;
		HX_STACK_LINE(615)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::to3DString( hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix","to3DString",0xe99e8cb6,"openfl.geom.Matrix.to3DString","openfl/geom/Matrix.hx",620,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(roundPixels,"roundPixels")
{
		HX_STACK_LINE(630)
		bool tmp = roundPixels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(630)
		if ((tmp)){
			HX_STACK_LINE(632)
			Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(632)
			::String tmp2 = (HX_HCSTRING("matrix3d(","\x96","\x72","\xdb","\xad") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(632)
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(632)
			Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(632)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(632)
			::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(632)
			::String tmp7 = (tmp6 + HX_HCSTRING("0, 0, ","\x80","\x3e","\x0e","\x9c"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(632)
			Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(632)
			::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(632)
			::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(632)
			Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(632)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(632)
			::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(632)
			::String tmp14 = (tmp13 + HX_HCSTRING("0, 0, 0, 0, 1, 0, ","\xdf","\xb7","\x27","\x12"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(632)
			Float tmp15 = this->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(632)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(632)
			::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(632)
			::String tmp18 = (tmp17 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(632)
			Float tmp19 = this->ty;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(632)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(632)
			::String tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(632)
			::String tmp22 = (tmp21 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(632)
			return tmp22;
		}
		else{
			HX_STACK_LINE(636)
			Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(636)
			::String tmp2 = (HX_HCSTRING("matrix3d(","\x96","\x72","\xdb","\xad") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(636)
			::String tmp3 = (tmp2 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(636)
			Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(636)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(636)
			::String tmp6 = (tmp5 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(636)
			::String tmp7 = (tmp6 + HX_HCSTRING("0, 0, ","\x80","\x3e","\x0e","\x9c"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(636)
			Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(636)
			::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(636)
			::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(636)
			Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(636)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(636)
			::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(636)
			::String tmp14 = (tmp13 + HX_HCSTRING("0, 0, 0, 0, 1, 0, ","\xdf","\xb7","\x27","\x12"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(636)
			Float tmp15 = this->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(636)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(636)
			::String tmp17 = (tmp16 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(636)
			Float tmp18 = this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(636)
			::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(636)
			::String tmp20 = (tmp19 + HX_HCSTRING(", 0, 1)","\x88","\xa3","\x85","\xb1"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(636)
			return tmp20;
		}
		HX_STACK_LINE(630)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,to3DString,return )

::String Matrix_obj::toMozString( ){
	HX_STACK_FRAME("openfl.geom.Matrix","toMozString",0xd9d4e6d5,"openfl.geom.Matrix.toMozString","openfl/geom/Matrix.hx",643,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(645)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(645)
	::String tmp1 = (HX_HCSTRING("matrix(","\xc7","\x42","\x67","\x93") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(645)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(645)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(645)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(645)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(645)
	Float tmp6 = this->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(645)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(645)
	::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(645)
	Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(645)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(645)
	::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(645)
	Float tmp12 = this->tx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(645)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(645)
	::String tmp14 = (tmp13 + HX_HCSTRING("px, ","\x7c","\x1a","\x63","\x4a"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(645)
	Float tmp15 = this->ty;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(645)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(645)
	::String tmp17 = (tmp16 + HX_HCSTRING("px)","\x21","\x65","\x55","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(645)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toMozString,return )

::String Matrix_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.Matrix","toString",0x27bdc845,"openfl.geom.Matrix.toString","openfl/geom/Matrix.hx",657,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(659)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	::String tmp1 = (HX_HCSTRING("matrix(","\xc7","\x42","\x67","\x93") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(659)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(659)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(659)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(659)
	::String tmp5 = (tmp4 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(659)
	Float tmp6 = this->c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(659)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(659)
	::String tmp8 = (tmp7 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(659)
	Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(659)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(659)
	::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(659)
	Float tmp12 = this->tx;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(659)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(659)
	::String tmp14 = (tmp13 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(659)
	Float tmp15 = this->ty;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(659)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(659)
	::String tmp17 = (tmp16 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(659)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

::openfl::geom::Point Matrix_obj::transformPoint( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.geom.Matrix","transformPoint",0xaac7ff9d,"openfl.geom.Matrix.transformPoint","openfl/geom/Matrix.hx",672,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(674)
	Float tmp = pos->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(674)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(674)
	Float tmp3 = pos->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(674)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(674)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(674)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(674)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(674)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(674)
	Float tmp9 = pos->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(674)
	Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(674)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(674)
	Float tmp12 = pos->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(674)
	Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(674)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(674)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(674)
	Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(674)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(674)
	::openfl::geom::Point tmp18 = ::openfl::geom::Point_obj::__new(tmp8,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(674)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::translate( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Matrix","translate",0xbf498595,"openfl.geom.Matrix.translate","openfl/geom/Matrix.hx",687,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(689)
		hx::AddEq(this->tx,dx);
		HX_STACK_LINE(690)
		hx::AddEq(this->ty,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

::lime::utils::ArrayBufferView Matrix_obj::toArray( hx::Null< bool >  __o_transpose){
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix","toArray",0x4b8b78a5,"openfl.geom.Matrix.toArray","openfl/geom/Matrix.hx",695,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(697)
		::lime::utils::ArrayBufferView tmp = this->__array;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		if ((tmp1)){
			HX_STACK_LINE(699)
			::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(699)
				bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(699)
				if ((tmp3)){
					HX_STACK_LINE(699)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)9,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(699)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(699)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(699)
					if ((tmp4)){
						HX_STACK_LINE(699)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(699)
						{
							HX_STACK_LINE(699)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(699)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(699)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(699)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(699)
							_this->length = tmp7;
							HX_STACK_LINE(699)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(699)
							_this->byteLength = tmp8;
							HX_STACK_LINE(699)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(699)
							{
								HX_STACK_LINE(699)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(699)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(699)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(699)
								this2 = tmp11;
								HX_STACK_LINE(699)
								tmp9 = this2;
							}
							HX_STACK_LINE(699)
							_this->buffer = tmp9;
							HX_STACK_LINE(699)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(699)
							tmp5 = _this;
						}
						HX_STACK_LINE(699)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(699)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(699)
						if ((tmp5)){
							HX_STACK_LINE(699)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(699)
							{
								HX_STACK_LINE(699)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(699)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(699)
								::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(699)
								::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(699)
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(699)
								int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(699)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(699)
								int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(699)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(699)
								int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(699)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(699)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(699)
								int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(699)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(699)
								if ((tmp14)){
									HX_STACK_LINE(699)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(699)
									int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(699)
									int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(699)
									::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(699)
									{
										HX_STACK_LINE(699)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(699)
										int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(699)
										::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(699)
										this2 = tmp18;
										HX_STACK_LINE(699)
										tmp16 = this2;
									}
									HX_STACK_LINE(699)
									_this->buffer = tmp16;
									HX_STACK_LINE(699)
									::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(699)
									int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(699)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(699)
									_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
								}
								else{
									HX_STACK_LINE(699)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(699)
								int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(699)
								_this->byteLength = tmp15;
								HX_STACK_LINE(699)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(699)
								_this->length = srcLength;
								HX_STACK_LINE(699)
								tmp6 = _this;
							}
							HX_STACK_LINE(699)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(699)
							bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(699)
							if ((tmp6)){
								HX_STACK_LINE(699)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(699)
								{
									HX_STACK_LINE(699)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(699)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(699)
									bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(699)
									if ((tmp9)){
										HX_STACK_LINE(699)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(699)
									int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(699)
									bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(699)
									if ((tmp11)){
										HX_STACK_LINE(699)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(699)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(699)
									int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(699)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(699)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(699)
									bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(699)
									if ((tmp13)){
										HX_STACK_LINE(699)
										int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(699)
										newByteLength = tmp14;
										HX_STACK_LINE(699)
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(699)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(699)
										if ((tmp16)){
											HX_STACK_LINE(699)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(699)
										bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(699)
										if ((tmp17)){
											HX_STACK_LINE(699)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(699)
										int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(699)
										newByteLength = tmp14;
										HX_STACK_LINE(699)
										int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(699)
										int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(699)
										bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(699)
										if ((tmp16)){
											HX_STACK_LINE(699)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(699)
									_this->buffer = null();
									HX_STACK_LINE(699)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(699)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(699)
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(699)
									int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(699)
									_this->length = tmp15;
									HX_STACK_LINE(699)
									tmp7 = _this;
								}
								HX_STACK_LINE(699)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(699)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
				HX_STACK_LINE(699)
				tmp2 = this1;
			}
			HX_STACK_LINE(699)
			this->__array = tmp2;
		}
		HX_STACK_LINE(703)
		bool tmp2 = transpose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		if ((tmp2)){
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(705)
				Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(705)
					::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
					HX_STACK_LINE(705)
					val;
				}
			}
			HX_STACK_LINE(706)
			{
				HX_STACK_LINE(706)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(706)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(706)
				Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(706)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(706)
				{
					HX_STACK_LINE(706)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(706)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
					HX_STACK_LINE(706)
					val;
				}
			}
			HX_STACK_LINE(707)
			{
				HX_STACK_LINE(707)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(707)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(707)
				{
					HX_STACK_LINE(707)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(707)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),(int)0);
					HX_STACK_LINE(707)
					(int)0;
				}
			}
			HX_STACK_LINE(708)
			{
				HX_STACK_LINE(708)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(708)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(708)
				Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(708)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(708)
				{
					HX_STACK_LINE(708)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(708)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
					HX_STACK_LINE(708)
					val;
				}
			}
			HX_STACK_LINE(709)
			{
				HX_STACK_LINE(709)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(709)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(709)
				Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(709)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(709)
				{
					HX_STACK_LINE(709)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(709)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
					HX_STACK_LINE(709)
					val;
				}
			}
			HX_STACK_LINE(710)
			{
				HX_STACK_LINE(710)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(710)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(710)
				{
					HX_STACK_LINE(710)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(710)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),(int)0);
					HX_STACK_LINE(710)
					(int)0;
				}
			}
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(711)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(711)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(711)
				Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(711)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(711)
				{
					HX_STACK_LINE(711)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(711)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
					HX_STACK_LINE(711)
					val;
				}
			}
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(712)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(712)
				Float tmp4 = this->ty;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(712)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(712)
				{
					HX_STACK_LINE(712)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(712)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),val);
					HX_STACK_LINE(712)
					val;
				}
			}
			HX_STACK_LINE(713)
			{
				HX_STACK_LINE(713)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(713)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(713)
				{
					HX_STACK_LINE(713)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(713)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)1);
					HX_STACK_LINE(713)
					(int)1;
				}
			}
		}
		else{
			HX_STACK_LINE(717)
			{
				HX_STACK_LINE(717)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(717)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(717)
				Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(717)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(717)
					::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
					HX_STACK_LINE(717)
					val;
				}
			}
			HX_STACK_LINE(718)
			{
				HX_STACK_LINE(718)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(718)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(718)
				Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(718)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(718)
				{
					HX_STACK_LINE(718)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(718)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),val);
					HX_STACK_LINE(718)
					val;
				}
			}
			HX_STACK_LINE(719)
			{
				HX_STACK_LINE(719)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(719)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(719)
				Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(719)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(719)
				{
					HX_STACK_LINE(719)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(719)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),val);
					HX_STACK_LINE(719)
					val;
				}
			}
			HX_STACK_LINE(720)
			{
				HX_STACK_LINE(720)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(720)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(720)
				Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(720)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(720)
				{
					HX_STACK_LINE(720)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(720)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),val);
					HX_STACK_LINE(720)
					val;
				}
			}
			HX_STACK_LINE(721)
			{
				HX_STACK_LINE(721)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(721)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(721)
				Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(721)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(721)
				{
					HX_STACK_LINE(721)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(721)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
					HX_STACK_LINE(721)
					val;
				}
			}
			HX_STACK_LINE(722)
			{
				HX_STACK_LINE(722)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(722)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(722)
				Float tmp4 = this->ty;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(722)
				Float val = tmp4;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(722)
				{
					HX_STACK_LINE(722)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(722)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),val);
					HX_STACK_LINE(722)
					val;
				}
			}
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(723)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(723)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(723)
				{
					HX_STACK_LINE(723)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(723)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)0);
					HX_STACK_LINE(723)
					(int)0;
				}
			}
			HX_STACK_LINE(724)
			{
				HX_STACK_LINE(724)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(724)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(724)
				{
					HX_STACK_LINE(724)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(724)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),(int)0);
					HX_STACK_LINE(724)
					(int)0;
				}
			}
			HX_STACK_LINE(725)
			{
				HX_STACK_LINE(725)
				::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(725)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(725)
				{
					HX_STACK_LINE(725)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(725)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)1);
					HX_STACK_LINE(725)
					(int)1;
				}
			}
		}
		HX_STACK_LINE(729)
		::lime::utils::ArrayBufferView tmp3 = this->__array;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(729)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,toArray,return )

Void Matrix_obj::__cleanValues( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix","__cleanValues",0xae7254f2,"openfl.geom.Matrix.__cleanValues","openfl/geom/Matrix.hx",734,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_LINE(736)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(736)
		Float tmp1 = (tmp * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(736)
		int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(736)
		Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(736)
		this->a = tmp3;
		HX_STACK_LINE(737)
		Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(737)
		Float tmp5 = (tmp4 * (int)1000);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(737)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(737)
		Float tmp7 = (Float(tmp6) / Float((int)1000));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(737)
		this->b = tmp7;
		HX_STACK_LINE(738)
		Float tmp8 = this->c;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(738)
		Float tmp9 = (tmp8 * (int)1000);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(738)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(738)
		Float tmp11 = (Float(tmp10) / Float((int)1000));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(738)
		this->c = tmp11;
		HX_STACK_LINE(739)
		Float tmp12 = this->d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(739)
		Float tmp13 = (tmp12 * (int)1000);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(739)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(739)
		Float tmp15 = (Float(tmp14) / Float((int)1000));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(739)
		this->d = tmp15;
		HX_STACK_LINE(740)
		Float tmp16 = this->tx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(740)
		Float tmp17 = (tmp16 * (int)10);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(740)
		int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(740)
		Float tmp19 = (Float(tmp18) / Float((int)10));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(740)
		this->tx = tmp19;
		HX_STACK_LINE(741)
		Float tmp20 = this->ty;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(741)
		Float tmp21 = (tmp20 * (int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(741)
		int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(741)
		Float tmp23 = (Float(tmp22) / Float((int)10));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(741)
		this->ty = tmp23;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,__cleanValues,(void))

::lime::math::Matrix3 Matrix_obj::__toMatrix3( ){
	HX_STACK_FRAME("openfl.geom.Matrix","__toMatrix3",0xaf6ed17e,"openfl.geom.Matrix.__toMatrix3","openfl/geom/Matrix.hx",746,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(748)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(748)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(748)
	Float tmp2 = this->c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(748)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(748)
	Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(748)
	Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(748)
	::lime::math::Matrix3 tmp6 = ::lime::math::Matrix3_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(748)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,__toMatrix3,return )

Void Matrix_obj::__transformInversePoint( ::openfl::geom::Point point){
{
		HX_STACK_FRAME("openfl.geom.Matrix","__transformInversePoint",0xde42fb73,"openfl.geom.Matrix.__transformInversePoint","openfl/geom/Matrix.hx",753,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(755)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(755)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(755)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(755)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(755)
		Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(757)
		bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(757)
		if ((tmp7)){
			HX_STACK_LINE(759)
			Float tmp8 = this->tx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(759)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(759)
			point->x = tmp9;
			HX_STACK_LINE(760)
			Float tmp10 = this->ty;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(760)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(760)
			point->y = tmp11;
		}
		else{
			HX_STACK_LINE(764)
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(764)
			Float tmp9 = this->c;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(764)
			Float tmp10 = this->ty;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(764)
			Float tmp11 = point->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(764)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(764)
			Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(764)
			Float tmp14 = this->d;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(764)
			Float tmp15 = point->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(764)
			Float tmp16 = this->tx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(764)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(764)
			Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(764)
			Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(764)
			Float tmp20 = (tmp8 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(764)
			Float px = tmp20;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(765)
			Float tmp21 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(765)
			Float tmp22 = this->a;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(765)
			Float tmp23 = point->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(765)
			Float tmp24 = this->ty;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(765)
			Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(765)
			Float tmp26 = (tmp22 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(765)
			Float tmp27 = this->b;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(765)
			Float tmp28 = this->tx;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(765)
			Float tmp29 = point->x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(765)
			Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(765)
			Float tmp31 = (tmp27 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(765)
			Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(765)
			Float tmp33 = (tmp21 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(765)
			point->y = tmp33;
			HX_STACK_LINE(766)
			point->x = px;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__transformInversePoint,(void))

Float Matrix_obj::__transformInverseX( Float px,Float py){
	HX_STACK_FRAME("openfl.geom.Matrix","__transformInverseX",0x55523a1b,"openfl.geom.Matrix.__transformInverseX","openfl/geom/Matrix.hx",773,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(775)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(775)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(775)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(775)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(775)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(775)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(775)
	Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(777)
	bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(777)
	if ((tmp7)){
		HX_STACK_LINE(779)
		Float tmp8 = this->tx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(779)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(779)
		return tmp9;
	}
	else{
		HX_STACK_LINE(783)
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(783)
		Float tmp9 = this->c;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(783)
		Float tmp10 = this->ty;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(783)
		Float tmp11 = py;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(783)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(783)
		Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(783)
		Float tmp14 = this->d;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(783)
		Float tmp15 = px;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(783)
		Float tmp16 = this->tx;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(783)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(783)
		Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(783)
		Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(783)
		Float tmp20 = (tmp8 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(783)
		return tmp20;
	}
	HX_STACK_LINE(777)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformInverseX,return )

Float Matrix_obj::__transformInverseY( Float px,Float py){
	HX_STACK_FRAME("openfl.geom.Matrix","__transformInverseY",0x55523a1c,"openfl.geom.Matrix.__transformInverseY","openfl/geom/Matrix.hx",790,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(792)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(792)
	Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(792)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(792)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(792)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(792)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(792)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(792)
	Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(794)
	bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(794)
	if ((tmp7)){
		HX_STACK_LINE(796)
		Float tmp8 = this->ty;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(796)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(796)
		return tmp9;
	}
	else{
		HX_STACK_LINE(800)
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(800)
		Float tmp9 = this->a;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(800)
		Float tmp10 = py;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(800)
		Float tmp11 = this->ty;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(800)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(800)
		Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(800)
		Float tmp14 = this->b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(800)
		Float tmp15 = this->tx;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(800)
		Float tmp16 = px;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(800)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(800)
		Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(800)
		Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(800)
		Float tmp20 = (tmp8 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(800)
		return tmp20;
	}
	HX_STACK_LINE(794)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformInverseY,return )

Void Matrix_obj::__transformPoint( ::openfl::geom::Point point){
{
		HX_STACK_FRAME("openfl.geom.Matrix","__transformPoint",0x5d3712fd,"openfl.geom.Matrix.__transformPoint","openfl/geom/Matrix.hx",807,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(809)
		Float px = point->x;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(810)
		Float py = point->y;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(812)
		Float tmp = px;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(812)
		Float tmp3 = py;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(812)
		Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(812)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(812)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(812)
		Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(812)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(812)
		point->x = tmp8;
		HX_STACK_LINE(813)
		Float tmp9 = px;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(813)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(813)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(813)
		Float tmp12 = py;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(813)
		Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(813)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(813)
		Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(813)
		Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(813)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(813)
		point->y = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__transformPoint,(void))

Float Matrix_obj::__transformX( Float px,Float py){
	HX_STACK_FRAME("openfl.geom.Matrix","__transformX",0x93ad44a5,"openfl.geom.Matrix.__transformX","openfl/geom/Matrix.hx",818,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(820)
	Float tmp = px;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(820)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(820)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(820)
	Float tmp3 = py;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(820)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(820)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(820)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(820)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(820)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(820)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformX,return )

Float Matrix_obj::__transformY( Float px,Float py){
	HX_STACK_FRAME("openfl.geom.Matrix","__transformY",0x93ad44a6,"openfl.geom.Matrix.__transformY","openfl/geom/Matrix.hx",825,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(827)
	Float tmp = px;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(827)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(827)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(827)
	Float tmp3 = py;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(827)
	Float tmp4 = this->d;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(827)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(827)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(827)
	Float tmp7 = this->ty;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(827)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(827)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__transformY,return )

Void Matrix_obj::__translateTransformed( Float px,Float py){
{
		HX_STACK_FRAME("openfl.geom.Matrix","__translateTransformed",0x123e9496,"openfl.geom.Matrix.__translateTransformed","openfl/geom/Matrix.hx",832,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(px,"px")
		HX_STACK_ARG(py,"py")
		HX_STACK_LINE(834)
		Float tmp = px;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(834)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(834)
		Float tmp3 = py;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(834)
		Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(834)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(834)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(834)
		Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(834)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(834)
		this->tx = tmp8;
		HX_STACK_LINE(835)
		Float tmp9 = px;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(835)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(835)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(835)
		Float tmp12 = py;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(835)
		Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(835)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(835)
		Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(835)
		Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(835)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(835)
		this->ty = tmp17;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,__translateTransformed,(void))

::openfl::geom::Matrix Matrix_obj::__temp;

::openfl::geom::Matrix Matrix_obj::__identity;


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return __array; }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
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
		if (HX_FIELD_EQ(inName,"__toMatrix3") ) { return __toMatrix3_dyn(); }
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
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformPoint") ) { return __transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformInverseX") ) { return __transformInverseX_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformInverseY") ) { return __transformInverseY_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return __translateTransformed_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__transformInversePoint") ) { return __transformInversePoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__temp") ) { outValue = __temp; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { outValue = __identity; return true;  }
	}
	return false;
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__temp") ) { __temp=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { __identity=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Matrix_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &Matrix_obj::__temp,HX_HCSTRING("__temp","\x34","\x26","\xf2","\xfb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &Matrix_obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
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
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("deltaTransformPoint","\x5c","\x4d","\xf7","\x15"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("to3DString","\xdd","\xbc","\xef","\x4e"),
	HX_HCSTRING("toMozString","\xce","\xd8","\x8d","\x1b"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("transformPoint","\x44","\xcf","\x11","\x3d"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("__cleanValues","\x2b","\x77","\xc6","\x85"),
	HX_HCSTRING("__toMatrix3","\x77","\xc3","\x27","\xf1"),
	HX_HCSTRING("__transformInversePoint","\xec","\x7e","\x5b","\xe2"),
	HX_HCSTRING("__transformInverseX","\x14","\x4d","\xb3","\x7f"),
	HX_HCSTRING("__transformInverseY","\x15","\x4d","\xb3","\x7f"),
	HX_HCSTRING("__transformPoint","\x64","\x5a","\x51","\x71"),
	HX_HCSTRING("__transformX","\x8c","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__transformY","\x8d","\x0c","\xc8","\xd3"),
	HX_HCSTRING("__translateTransformed","\x3d","\xe3","\xea","\x64"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix_obj::__temp,"__temp");
	HX_MARK_MEMBER_NAME(Matrix_obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix_obj::__temp,"__temp");
	HX_VISIT_MEMBER_NAME(Matrix_obj::__identity,"__identity");
};

#endif

hx::Class Matrix_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__temp","\x34","\x26","\xf2","\xfb"),
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	::String(null()) };

void Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Matrix","\xf5","\xbf","\x06","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix_obj >;
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

void Matrix_obj::__boot()
{
	__temp= ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	__identity= ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace geom
