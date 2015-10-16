#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Orientation3D
#include <openfl/geom/Orientation3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix3D_obj::__construct(Array< Float > v)
{
HX_STACK_FRAME("openfl.geom.Matrix3D","new",0xe0591fd8,"openfl.geom.Matrix3D.new","openfl/geom/Matrix3D.hx",83,0x3acce238)
HX_STACK_THIS(this)
HX_STACK_ARG(v,"v")
{
	HX_STACK_LINE(85)
	bool tmp = (v != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(85)
		int tmp2 = v->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		tmp1 = (tmp3 == (int)16);
	}
	else{
		HX_STACK_LINE(85)
		tmp1 = false;
	}
	HX_STACK_LINE(85)
	if ((tmp1)){
		HX_STACK_LINE(87)
		this->rawData = v;
	}
	else{
		HX_STACK_LINE(91)
		this->rawData = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
	}
}
;
	return null();
}

//Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(Array< Float > v)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(v);
	return _result_;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > _result_ = new Matrix3D_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Matrix3D_obj::append( ::openfl::geom::Matrix3D lhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","append",0x481b8d62,"openfl.geom.Matrix3D.append","openfl/geom/Matrix3D.hx",98,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(100)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		Float tmp1 = tmp->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		Float m111 = ((Dynamic)(tmp1));		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(100)
		Array< Float > tmp2 = this->rawData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		Float tmp3 = tmp2->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		Float m121 = ((Dynamic)(tmp3));		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(100)
		Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		Float tmp5 = tmp4->__get((int)8);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		Float m131 = ((Dynamic)(tmp5));		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(100)
		Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Float tmp7 = tmp6->__get((int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		Float m141 = ((Dynamic)(tmp7));		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(101)
		Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		Float tmp9 = tmp8->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		Float m112 = ((Dynamic)(tmp9));		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(101)
		Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		Float tmp11 = tmp10->__get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		Float m122 = ((Dynamic)(tmp11));		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(101)
		Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(101)
		Float tmp13 = tmp12->__get((int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(101)
		Float m132 = ((Dynamic)(tmp13));		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(101)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(101)
		Float tmp15 = tmp14->__get((int)13);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(101)
		Float m142 = ((Dynamic)(tmp15));		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(102)
		Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(102)
		Float tmp17 = tmp16->__get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(102)
		Float m113 = ((Dynamic)(tmp17));		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(102)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(102)
		Float tmp19 = tmp18->__get((int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(102)
		Float m123 = ((Dynamic)(tmp19));		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(102)
		Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(102)
		Float tmp21 = tmp20->__get((int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(102)
		Float m133 = ((Dynamic)(tmp21));		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(102)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(102)
		Float tmp23 = tmp22->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(102)
		Float m143 = ((Dynamic)(tmp23));		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(103)
		Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(103)
		Float tmp25 = tmp24->__get((int)3);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(103)
		Float m114 = ((Dynamic)(tmp25));		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(103)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(103)
		Float tmp27 = tmp26->__get((int)7);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(103)
		Float m124 = ((Dynamic)(tmp27));		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(103)
		Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(103)
		Float tmp29 = tmp28->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(103)
		Float m134 = ((Dynamic)(tmp29));		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(103)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(103)
		Float tmp31 = tmp30->__get((int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(103)
		Float m144 = ((Dynamic)(tmp31));		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(104)
		Float tmp32 = lhs->rawData->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(104)
		Float m211 = ((Dynamic)(tmp32));		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(104)
		Float tmp33 = lhs->rawData->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(104)
		Float m221 = ((Dynamic)(tmp33));		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(104)
		Float tmp34 = lhs->rawData->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(104)
		Float m231 = ((Dynamic)(tmp34));		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(104)
		Float tmp35 = lhs->rawData->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(104)
		Float m241 = ((Dynamic)(tmp35));		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(105)
		Float tmp36 = lhs->rawData->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(105)
		Float m212 = ((Dynamic)(tmp36));		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(105)
		Float tmp37 = lhs->rawData->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(105)
		Float m222 = ((Dynamic)(tmp37));		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(105)
		Float tmp38 = lhs->rawData->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(105)
		Float m232 = ((Dynamic)(tmp38));		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(105)
		Float tmp39 = lhs->rawData->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(105)
		Float m242 = ((Dynamic)(tmp39));		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(106)
		Float tmp40 = lhs->rawData->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(106)
		Float m213 = ((Dynamic)(tmp40));		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(106)
		Float tmp41 = lhs->rawData->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(106)
		Float m223 = ((Dynamic)(tmp41));		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(106)
		Float tmp42 = lhs->rawData->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(106)
		Float m233 = ((Dynamic)(tmp42));		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(106)
		Float tmp43 = lhs->rawData->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(106)
		Float m243 = ((Dynamic)(tmp43));		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(107)
		Float tmp44 = lhs->rawData->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(107)
		Float m214 = ((Dynamic)(tmp44));		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(107)
		Float tmp45 = lhs->rawData->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(107)
		Float m224 = ((Dynamic)(tmp45));		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(107)
		Float tmp46 = lhs->rawData->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(107)
		Float m234 = ((Dynamic)(tmp46));		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(107)
		Float tmp47 = lhs->rawData->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(107)
		Float m244 = ((Dynamic)(tmp47));		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(109)
		Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(109)
		Float tmp49 = (m111 * m211);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(109)
		Float tmp50 = (m112 * m221);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(109)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(109)
		Float tmp52 = (m113 * m231);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(109)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(109)
		Float tmp54 = (m114 * m241);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(109)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(109)
		Float tmp56 = tmp48[(int)0] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(109)
		tmp56;
		HX_STACK_LINE(110)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(110)
		Float tmp58 = (m111 * m212);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(110)
		Float tmp59 = (m112 * m222);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(110)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(110)
		Float tmp61 = (m113 * m232);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(110)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(110)
		Float tmp63 = (m114 * m242);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(110)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(110)
		Float tmp65 = tmp57[(int)1] = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(110)
		tmp65;
		HX_STACK_LINE(111)
		Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(111)
		Float tmp67 = (m111 * m213);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(111)
		Float tmp68 = (m112 * m223);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(111)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(111)
		Float tmp70 = (m113 * m233);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(111)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(111)
		Float tmp72 = (m114 * m243);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(111)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(111)
		Float tmp74 = tmp66[(int)2] = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(111)
		tmp74;
		HX_STACK_LINE(112)
		Array< Float > tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(112)
		Float tmp76 = (m111 * m214);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(112)
		Float tmp77 = (m112 * m224);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(112)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(112)
		Float tmp79 = (m113 * m234);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(112)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(112)
		Float tmp81 = (m114 * m244);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(112)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(112)
		Float tmp83 = tmp75[(int)3] = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(112)
		tmp83;
		HX_STACK_LINE(114)
		Array< Float > tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(114)
		Float tmp85 = (m121 * m211);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(114)
		Float tmp86 = (m122 * m221);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(114)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(114)
		Float tmp88 = (m123 * m231);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(114)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(114)
		Float tmp90 = (m124 * m241);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(114)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(114)
		Float tmp92 = tmp84[(int)4] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(114)
		tmp92;
		HX_STACK_LINE(115)
		Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(115)
		Float tmp94 = (m121 * m212);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(115)
		Float tmp95 = (m122 * m222);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(115)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(115)
		Float tmp97 = (m123 * m232);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(115)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(115)
		Float tmp99 = (m124 * m242);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(115)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(115)
		Float tmp101 = tmp93[(int)5] = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(115)
		tmp101;
		HX_STACK_LINE(116)
		Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(116)
		Float tmp103 = (m121 * m213);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(116)
		Float tmp104 = (m122 * m223);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(116)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(116)
		Float tmp106 = (m123 * m233);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(116)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(116)
		Float tmp108 = (m124 * m243);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(116)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(116)
		Float tmp110 = tmp102[(int)6] = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(116)
		tmp110;
		HX_STACK_LINE(117)
		Array< Float > tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(117)
		Float tmp112 = (m121 * m214);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(117)
		Float tmp113 = (m122 * m224);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(117)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(117)
		Float tmp115 = (m123 * m234);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(117)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(117)
		Float tmp117 = (m124 * m244);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(117)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(117)
		Float tmp119 = tmp111[(int)7] = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(117)
		tmp119;
		HX_STACK_LINE(119)
		Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(119)
		Float tmp121 = (m131 * m211);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(119)
		Float tmp122 = (m132 * m221);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(119)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(119)
		Float tmp124 = (m133 * m231);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(119)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(119)
		Float tmp126 = (m134 * m241);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(119)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(119)
		Float tmp128 = tmp120[(int)8] = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(119)
		tmp128;
		HX_STACK_LINE(120)
		Array< Float > tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(120)
		Float tmp130 = (m131 * m212);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(120)
		Float tmp131 = (m132 * m222);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(120)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(120)
		Float tmp133 = (m133 * m232);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(120)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(120)
		Float tmp135 = (m134 * m242);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(120)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(120)
		Float tmp137 = tmp129[(int)9] = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(120)
		tmp137;
		HX_STACK_LINE(121)
		Array< Float > tmp138 = this->rawData;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(121)
		Float tmp139 = (m131 * m213);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(121)
		Float tmp140 = (m132 * m223);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(121)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(121)
		Float tmp142 = (m133 * m233);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(121)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(121)
		Float tmp144 = (m134 * m243);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(121)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(121)
		Float tmp146 = tmp138[(int)10] = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(121)
		tmp146;
		HX_STACK_LINE(122)
		Array< Float > tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(122)
		Float tmp148 = (m131 * m214);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(122)
		Float tmp149 = (m132 * m224);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(122)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(122)
		Float tmp151 = (m133 * m234);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(122)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(122)
		Float tmp153 = (m134 * m244);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(122)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(122)
		Float tmp155 = tmp147[(int)11] = tmp154;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(122)
		tmp155;
		HX_STACK_LINE(124)
		Array< Float > tmp156 = this->rawData;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(124)
		Float tmp157 = (m141 * m211);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(124)
		Float tmp158 = (m142 * m221);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(124)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(124)
		Float tmp160 = (m143 * m231);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(124)
		Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(124)
		Float tmp162 = (m144 * m241);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(124)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(124)
		Float tmp164 = tmp156[(int)12] = tmp163;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(124)
		tmp164;
		HX_STACK_LINE(125)
		Array< Float > tmp165 = this->rawData;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(125)
		Float tmp166 = (m141 * m212);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(125)
		Float tmp167 = (m142 * m222);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(125)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(125)
		Float tmp169 = (m143 * m232);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(125)
		Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(125)
		Float tmp171 = (m144 * m242);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(125)
		Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(125)
		Float tmp173 = tmp165[(int)13] = tmp172;		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(125)
		tmp173;
		HX_STACK_LINE(126)
		Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(126)
		Float tmp175 = (m141 * m213);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(126)
		Float tmp176 = (m142 * m223);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(126)
		Float tmp177 = (tmp175 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(126)
		Float tmp178 = (m143 * m233);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(126)
		Float tmp179 = (tmp177 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(126)
		Float tmp180 = (m144 * m243);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(126)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(126)
		Float tmp182 = tmp174[(int)14] = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(126)
		tmp182;
		HX_STACK_LINE(127)
		Array< Float > tmp183 = this->rawData;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(127)
		Float tmp184 = (m141 * m214);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(127)
		Float tmp185 = (m142 * m224);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(127)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(127)
		Float tmp187 = (m143 * m234);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(127)
		Float tmp188 = (tmp186 + tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(127)
		Float tmp189 = (m144 * m244);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(127)
		Float tmp190 = (tmp188 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(127)
		Float tmp191 = tmp183[(int)15] = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(127)
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendRotation",0xf492b8c0,"openfl.geom.Matrix3D.appendRotation","openfl/geom/Matrix3D.hx",132,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(134)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		::openfl::geom::Matrix3D tmp4 = ::openfl::geom::Matrix3D_obj::getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::openfl::geom::Matrix3D m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(136)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		if ((tmp5)){
			HX_STACK_LINE(138)
			::openfl::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(139)
			{
				HX_STACK_LINE(139)
				Float tmp6 = m->rawData->__get((int)12);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(139)
				Float tmp10 = m->rawData[(int)12] = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				tmp10;
				HX_STACK_LINE(139)
				Float tmp11 = m->rawData->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(139)
				Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(139)
				Float tmp13 = p->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(139)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(139)
				Float tmp15 = m->rawData[(int)13] = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(139)
				tmp15;
				HX_STACK_LINE(139)
				Float tmp16 = m->rawData->__get((int)14);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(139)
				Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(139)
				Float tmp18 = p->z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(139)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(139)
				Float tmp20 = m->rawData[(int)14] = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(139)
				tmp20;
			}
		}
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			Float tmp7 = tmp6->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			Float m111 = ((Dynamic)(tmp7));		HX_STACK_VAR(m111,"m111");
			HX_STACK_LINE(143)
			Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			Float tmp9 = tmp8->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(143)
			Float m121 = ((Dynamic)(tmp9));		HX_STACK_VAR(m121,"m121");
			HX_STACK_LINE(143)
			Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			Float tmp11 = tmp10->__get((int)8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			Float m131 = ((Dynamic)(tmp11));		HX_STACK_VAR(m131,"m131");
			HX_STACK_LINE(143)
			Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(143)
			Float tmp13 = tmp12->__get((int)12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			Float m141 = ((Dynamic)(tmp13));		HX_STACK_VAR(m141,"m141");
			HX_STACK_LINE(143)
			Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(143)
			Float tmp15 = tmp14->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(143)
			Float m112 = ((Dynamic)(tmp15));		HX_STACK_VAR(m112,"m112");
			HX_STACK_LINE(143)
			Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(143)
			Float tmp17 = tmp16->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(143)
			Float m122 = ((Dynamic)(tmp17));		HX_STACK_VAR(m122,"m122");
			HX_STACK_LINE(143)
			Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(143)
			Float tmp19 = tmp18->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(143)
			Float m132 = ((Dynamic)(tmp19));		HX_STACK_VAR(m132,"m132");
			HX_STACK_LINE(143)
			Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(143)
			Float tmp21 = tmp20->__get((int)13);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(143)
			Float m142 = ((Dynamic)(tmp21));		HX_STACK_VAR(m142,"m142");
			HX_STACK_LINE(143)
			Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(143)
			Float tmp23 = tmp22->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(143)
			Float m113 = ((Dynamic)(tmp23));		HX_STACK_VAR(m113,"m113");
			HX_STACK_LINE(143)
			Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(143)
			Float tmp25 = tmp24->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(143)
			Float m123 = ((Dynamic)(tmp25));		HX_STACK_VAR(m123,"m123");
			HX_STACK_LINE(143)
			Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(143)
			Float tmp27 = tmp26->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(143)
			Float m133 = ((Dynamic)(tmp27));		HX_STACK_VAR(m133,"m133");
			HX_STACK_LINE(143)
			Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(143)
			Float tmp29 = tmp28->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(143)
			Float m143 = ((Dynamic)(tmp29));		HX_STACK_VAR(m143,"m143");
			HX_STACK_LINE(143)
			Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(143)
			Float tmp31 = tmp30->__get((int)3);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(143)
			Float m114 = ((Dynamic)(tmp31));		HX_STACK_VAR(m114,"m114");
			HX_STACK_LINE(143)
			Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(143)
			Float tmp33 = tmp32->__get((int)7);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(143)
			Float m124 = ((Dynamic)(tmp33));		HX_STACK_VAR(m124,"m124");
			HX_STACK_LINE(143)
			Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(143)
			Float tmp35 = tmp34->__get((int)11);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(143)
			Float m134 = ((Dynamic)(tmp35));		HX_STACK_VAR(m134,"m134");
			HX_STACK_LINE(143)
			Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(143)
			Float tmp37 = tmp36->__get((int)15);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(143)
			Float m144 = ((Dynamic)(tmp37));		HX_STACK_VAR(m144,"m144");
			HX_STACK_LINE(143)
			Float tmp38 = m->rawData->__get((int)0);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(143)
			Float m211 = ((Dynamic)(tmp38));		HX_STACK_VAR(m211,"m211");
			HX_STACK_LINE(143)
			Float tmp39 = m->rawData->__get((int)4);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(143)
			Float m221 = ((Dynamic)(tmp39));		HX_STACK_VAR(m221,"m221");
			HX_STACK_LINE(143)
			Float tmp40 = m->rawData->__get((int)8);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(143)
			Float m231 = ((Dynamic)(tmp40));		HX_STACK_VAR(m231,"m231");
			HX_STACK_LINE(143)
			Float tmp41 = m->rawData->__get((int)12);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(143)
			Float m241 = ((Dynamic)(tmp41));		HX_STACK_VAR(m241,"m241");
			HX_STACK_LINE(143)
			Float tmp42 = m->rawData->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(143)
			Float m212 = ((Dynamic)(tmp42));		HX_STACK_VAR(m212,"m212");
			HX_STACK_LINE(143)
			Float tmp43 = m->rawData->__get((int)5);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(143)
			Float m222 = ((Dynamic)(tmp43));		HX_STACK_VAR(m222,"m222");
			HX_STACK_LINE(143)
			Float tmp44 = m->rawData->__get((int)9);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(143)
			Float m232 = ((Dynamic)(tmp44));		HX_STACK_VAR(m232,"m232");
			HX_STACK_LINE(143)
			Float tmp45 = m->rawData->__get((int)13);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(143)
			Float m242 = ((Dynamic)(tmp45));		HX_STACK_VAR(m242,"m242");
			HX_STACK_LINE(143)
			Float tmp46 = m->rawData->__get((int)2);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(143)
			Float m213 = ((Dynamic)(tmp46));		HX_STACK_VAR(m213,"m213");
			HX_STACK_LINE(143)
			Float tmp47 = m->rawData->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(143)
			Float m223 = ((Dynamic)(tmp47));		HX_STACK_VAR(m223,"m223");
			HX_STACK_LINE(143)
			Float tmp48 = m->rawData->__get((int)10);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(143)
			Float m233 = ((Dynamic)(tmp48));		HX_STACK_VAR(m233,"m233");
			HX_STACK_LINE(143)
			Float tmp49 = m->rawData->__get((int)14);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(143)
			Float m243 = ((Dynamic)(tmp49));		HX_STACK_VAR(m243,"m243");
			HX_STACK_LINE(143)
			Float tmp50 = m->rawData->__get((int)3);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(143)
			Float m214 = ((Dynamic)(tmp50));		HX_STACK_VAR(m214,"m214");
			HX_STACK_LINE(143)
			Float tmp51 = m->rawData->__get((int)7);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(143)
			Float m224 = ((Dynamic)(tmp51));		HX_STACK_VAR(m224,"m224");
			HX_STACK_LINE(143)
			Float tmp52 = m->rawData->__get((int)11);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(143)
			Float m234 = ((Dynamic)(tmp52));		HX_STACK_VAR(m234,"m234");
			HX_STACK_LINE(143)
			Float tmp53 = m->rawData->__get((int)15);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(143)
			Float m244 = ((Dynamic)(tmp53));		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(143)
			Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(143)
			Float tmp55 = (m111 * m211);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(143)
			Float tmp56 = (m112 * m221);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(143)
			Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(143)
			Float tmp58 = (m113 * m231);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(143)
			Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(143)
			Float tmp60 = (m114 * m241);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(143)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(143)
			Float tmp62 = tmp54[(int)0] = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(143)
			tmp62;
			HX_STACK_LINE(143)
			Array< Float > tmp63 = this->rawData;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(143)
			Float tmp64 = (m111 * m212);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(143)
			Float tmp65 = (m112 * m222);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(143)
			Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(143)
			Float tmp67 = (m113 * m232);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(143)
			Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(143)
			Float tmp69 = (m114 * m242);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(143)
			Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(143)
			Float tmp71 = tmp63[(int)1] = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(143)
			tmp71;
			HX_STACK_LINE(143)
			Array< Float > tmp72 = this->rawData;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(143)
			Float tmp73 = (m111 * m213);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(143)
			Float tmp74 = (m112 * m223);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(143)
			Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(143)
			Float tmp76 = (m113 * m233);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(143)
			Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(143)
			Float tmp78 = (m114 * m243);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(143)
			Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(143)
			Float tmp80 = tmp72[(int)2] = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(143)
			tmp80;
			HX_STACK_LINE(143)
			Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(143)
			Float tmp82 = (m111 * m214);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(143)
			Float tmp83 = (m112 * m224);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(143)
			Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(143)
			Float tmp85 = (m113 * m234);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(143)
			Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(143)
			Float tmp87 = (m114 * m244);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(143)
			Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(143)
			Float tmp89 = tmp81[(int)3] = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(143)
			tmp89;
			HX_STACK_LINE(143)
			Array< Float > tmp90 = this->rawData;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(143)
			Float tmp91 = (m121 * m211);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(143)
			Float tmp92 = (m122 * m221);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(143)
			Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(143)
			Float tmp94 = (m123 * m231);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(143)
			Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(143)
			Float tmp96 = (m124 * m241);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(143)
			Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(143)
			Float tmp98 = tmp90[(int)4] = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(143)
			tmp98;
			HX_STACK_LINE(143)
			Array< Float > tmp99 = this->rawData;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(143)
			Float tmp100 = (m121 * m212);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(143)
			Float tmp101 = (m122 * m222);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(143)
			Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(143)
			Float tmp103 = (m123 * m232);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(143)
			Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(143)
			Float tmp105 = (m124 * m242);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(143)
			Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(143)
			Float tmp107 = tmp99[(int)5] = tmp106;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(143)
			tmp107;
			HX_STACK_LINE(143)
			Array< Float > tmp108 = this->rawData;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(143)
			Float tmp109 = (m121 * m213);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(143)
			Float tmp110 = (m122 * m223);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(143)
			Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(143)
			Float tmp112 = (m123 * m233);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(143)
			Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(143)
			Float tmp114 = (m124 * m243);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(143)
			Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(143)
			Float tmp116 = tmp108[(int)6] = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(143)
			tmp116;
			HX_STACK_LINE(143)
			Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(143)
			Float tmp118 = (m121 * m214);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(143)
			Float tmp119 = (m122 * m224);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(143)
			Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(143)
			Float tmp121 = (m123 * m234);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(143)
			Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(143)
			Float tmp123 = (m124 * m244);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(143)
			Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(143)
			Float tmp125 = tmp117[(int)7] = tmp124;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(143)
			tmp125;
			HX_STACK_LINE(143)
			Array< Float > tmp126 = this->rawData;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(143)
			Float tmp127 = (m131 * m211);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(143)
			Float tmp128 = (m132 * m221);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(143)
			Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(143)
			Float tmp130 = (m133 * m231);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(143)
			Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(143)
			Float tmp132 = (m134 * m241);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(143)
			Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(143)
			Float tmp134 = tmp126[(int)8] = tmp133;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(143)
			tmp134;
			HX_STACK_LINE(143)
			Array< Float > tmp135 = this->rawData;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(143)
			Float tmp136 = (m131 * m212);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(143)
			Float tmp137 = (m132 * m222);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(143)
			Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(143)
			Float tmp139 = (m133 * m232);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(143)
			Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(143)
			Float tmp141 = (m134 * m242);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(143)
			Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(143)
			Float tmp143 = tmp135[(int)9] = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(143)
			tmp143;
			HX_STACK_LINE(143)
			Array< Float > tmp144 = this->rawData;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(143)
			Float tmp145 = (m131 * m213);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(143)
			Float tmp146 = (m132 * m223);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(143)
			Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(143)
			Float tmp148 = (m133 * m233);		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(143)
			Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(143)
			Float tmp150 = (m134 * m243);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(143)
			Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(143)
			Float tmp152 = tmp144[(int)10] = tmp151;		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(143)
			tmp152;
			HX_STACK_LINE(143)
			Array< Float > tmp153 = this->rawData;		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(143)
			Float tmp154 = (m131 * m214);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(143)
			Float tmp155 = (m132 * m224);		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(143)
			Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(143)
			Float tmp157 = (m133 * m234);		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(143)
			Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(143)
			Float tmp159 = (m134 * m244);		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(143)
			Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(143)
			Float tmp161 = tmp153[(int)11] = tmp160;		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(143)
			tmp161;
			HX_STACK_LINE(143)
			Array< Float > tmp162 = this->rawData;		HX_STACK_VAR(tmp162,"tmp162");
			HX_STACK_LINE(143)
			Float tmp163 = (m141 * m211);		HX_STACK_VAR(tmp163,"tmp163");
			HX_STACK_LINE(143)
			Float tmp164 = (m142 * m221);		HX_STACK_VAR(tmp164,"tmp164");
			HX_STACK_LINE(143)
			Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
			HX_STACK_LINE(143)
			Float tmp166 = (m143 * m231);		HX_STACK_VAR(tmp166,"tmp166");
			HX_STACK_LINE(143)
			Float tmp167 = (tmp165 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
			HX_STACK_LINE(143)
			Float tmp168 = (m144 * m241);		HX_STACK_VAR(tmp168,"tmp168");
			HX_STACK_LINE(143)
			Float tmp169 = (tmp167 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
			HX_STACK_LINE(143)
			Float tmp170 = tmp162[(int)12] = tmp169;		HX_STACK_VAR(tmp170,"tmp170");
			HX_STACK_LINE(143)
			tmp170;
			HX_STACK_LINE(143)
			Array< Float > tmp171 = this->rawData;		HX_STACK_VAR(tmp171,"tmp171");
			HX_STACK_LINE(143)
			Float tmp172 = (m141 * m212);		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(143)
			Float tmp173 = (m142 * m222);		HX_STACK_VAR(tmp173,"tmp173");
			HX_STACK_LINE(143)
			Float tmp174 = (tmp172 + tmp173);		HX_STACK_VAR(tmp174,"tmp174");
			HX_STACK_LINE(143)
			Float tmp175 = (m143 * m232);		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(143)
			Float tmp176 = (tmp174 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(143)
			Float tmp177 = (m144 * m242);		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(143)
			Float tmp178 = (tmp176 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(143)
			Float tmp179 = tmp171[(int)13] = tmp178;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(143)
			tmp179;
			HX_STACK_LINE(143)
			Array< Float > tmp180 = this->rawData;		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(143)
			Float tmp181 = (m141 * m213);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(143)
			Float tmp182 = (m142 * m223);		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(143)
			Float tmp183 = (tmp181 + tmp182);		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(143)
			Float tmp184 = (m143 * m233);		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(143)
			Float tmp185 = (tmp183 + tmp184);		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(143)
			Float tmp186 = (m144 * m243);		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(143)
			Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(143)
			Float tmp188 = tmp180[(int)14] = tmp187;		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(143)
			tmp188;
			HX_STACK_LINE(143)
			Array< Float > tmp189 = this->rawData;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(143)
			Float tmp190 = (m141 * m214);		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(143)
			Float tmp191 = (m142 * m224);		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(143)
			Float tmp192 = (tmp190 + tmp191);		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(143)
			Float tmp193 = (m143 * m234);		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(143)
			Float tmp194 = (tmp192 + tmp193);		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(143)
			Float tmp195 = (m144 * m244);		HX_STACK_VAR(tmp195,"tmp195");
			HX_STACK_LINE(143)
			Float tmp196 = (tmp194 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
			HX_STACK_LINE(143)
			Float tmp197 = tmp189[(int)15] = tmp196;		HX_STACK_VAR(tmp197,"tmp197");
			HX_STACK_LINE(143)
			tmp197;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendScale",0x02daedc8,"openfl.geom.Matrix3D.appendScale","openfl/geom/Matrix3D.hx",150,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(150)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		::openfl::geom::Matrix3D lhs = tmp;		HX_STACK_VAR(lhs,"lhs");
		HX_STACK_LINE(150)
		Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Float m111 = ((Dynamic)(tmp2));		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(150)
		Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		Float tmp4 = tmp3->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		Float m121 = ((Dynamic)(tmp4));		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(150)
		Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		Float tmp6 = tmp5->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		Float m131 = ((Dynamic)(tmp6));		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(150)
		Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		Float tmp8 = tmp7->__get((int)12);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		Float m141 = ((Dynamic)(tmp8));		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(150)
		Array< Float > tmp9 = this->rawData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(150)
		Float tmp10 = tmp9->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(150)
		Float m112 = ((Dynamic)(tmp10));		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(150)
		Array< Float > tmp11 = this->rawData;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(150)
		Float tmp12 = tmp11->__get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(150)
		Float m122 = ((Dynamic)(tmp12));		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(150)
		Array< Float > tmp13 = this->rawData;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(150)
		Float tmp14 = tmp13->__get((int)9);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(150)
		Float m132 = ((Dynamic)(tmp14));		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(150)
		Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(150)
		Float tmp16 = tmp15->__get((int)13);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(150)
		Float m142 = ((Dynamic)(tmp16));		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(150)
		Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(150)
		Float tmp18 = tmp17->__get((int)2);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(150)
		Float m113 = ((Dynamic)(tmp18));		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(150)
		Array< Float > tmp19 = this->rawData;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(150)
		Float tmp20 = tmp19->__get((int)6);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(150)
		Float m123 = ((Dynamic)(tmp20));		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(150)
		Array< Float > tmp21 = this->rawData;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(150)
		Float tmp22 = tmp21->__get((int)10);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(150)
		Float m133 = ((Dynamic)(tmp22));		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(150)
		Array< Float > tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(150)
		Float tmp24 = tmp23->__get((int)14);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(150)
		Float m143 = ((Dynamic)(tmp24));		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(150)
		Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(150)
		Float tmp26 = tmp25->__get((int)3);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(150)
		Float m114 = ((Dynamic)(tmp26));		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(150)
		Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(150)
		Float tmp28 = tmp27->__get((int)7);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(150)
		Float m124 = ((Dynamic)(tmp28));		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(150)
		Array< Float > tmp29 = this->rawData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(150)
		Float tmp30 = tmp29->__get((int)11);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(150)
		Float m134 = ((Dynamic)(tmp30));		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(150)
		Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(150)
		Float tmp32 = tmp31->__get((int)15);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(150)
		Float m144 = ((Dynamic)(tmp32));		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(150)
		Float tmp33 = lhs->rawData->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(150)
		Float m211 = ((Dynamic)(tmp33));		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(150)
		Float tmp34 = lhs->rawData->__get((int)4);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(150)
		Float m221 = ((Dynamic)(tmp34));		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(150)
		Float tmp35 = lhs->rawData->__get((int)8);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(150)
		Float m231 = ((Dynamic)(tmp35));		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(150)
		Float tmp36 = lhs->rawData->__get((int)12);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(150)
		Float m241 = ((Dynamic)(tmp36));		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(150)
		Float tmp37 = lhs->rawData->__get((int)1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(150)
		Float m212 = ((Dynamic)(tmp37));		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(150)
		Float tmp38 = lhs->rawData->__get((int)5);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(150)
		Float m222 = ((Dynamic)(tmp38));		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(150)
		Float tmp39 = lhs->rawData->__get((int)9);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(150)
		Float m232 = ((Dynamic)(tmp39));		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(150)
		Float tmp40 = lhs->rawData->__get((int)13);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(150)
		Float m242 = ((Dynamic)(tmp40));		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(150)
		Float tmp41 = lhs->rawData->__get((int)2);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(150)
		Float m213 = ((Dynamic)(tmp41));		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(150)
		Float tmp42 = lhs->rawData->__get((int)6);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(150)
		Float m223 = ((Dynamic)(tmp42));		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(150)
		Float tmp43 = lhs->rawData->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(150)
		Float m233 = ((Dynamic)(tmp43));		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(150)
		Float tmp44 = lhs->rawData->__get((int)14);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(150)
		Float m243 = ((Dynamic)(tmp44));		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(150)
		Float tmp45 = lhs->rawData->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(150)
		Float m214 = ((Dynamic)(tmp45));		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(150)
		Float tmp46 = lhs->rawData->__get((int)7);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(150)
		Float m224 = ((Dynamic)(tmp46));		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(150)
		Float tmp47 = lhs->rawData->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(150)
		Float m234 = ((Dynamic)(tmp47));		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(150)
		Float tmp48 = lhs->rawData->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(150)
		Float m244 = ((Dynamic)(tmp48));		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(150)
		Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(150)
		Float tmp50 = (m111 * m211);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(150)
		Float tmp51 = (m112 * m221);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(150)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(150)
		Float tmp53 = (m113 * m231);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(150)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(150)
		Float tmp55 = (m114 * m241);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(150)
		Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(150)
		Float tmp57 = tmp49[(int)0] = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(150)
		tmp57;
		HX_STACK_LINE(150)
		Array< Float > tmp58 = this->rawData;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(150)
		Float tmp59 = (m111 * m212);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(150)
		Float tmp60 = (m112 * m222);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(150)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(150)
		Float tmp62 = (m113 * m232);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(150)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(150)
		Float tmp64 = (m114 * m242);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(150)
		Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(150)
		Float tmp66 = tmp58[(int)1] = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(150)
		tmp66;
		HX_STACK_LINE(150)
		Array< Float > tmp67 = this->rawData;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(150)
		Float tmp68 = (m111 * m213);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(150)
		Float tmp69 = (m112 * m223);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(150)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(150)
		Float tmp71 = (m113 * m233);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(150)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(150)
		Float tmp73 = (m114 * m243);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(150)
		Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(150)
		Float tmp75 = tmp67[(int)2] = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(150)
		tmp75;
		HX_STACK_LINE(150)
		Array< Float > tmp76 = this->rawData;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(150)
		Float tmp77 = (m111 * m214);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(150)
		Float tmp78 = (m112 * m224);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(150)
		Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(150)
		Float tmp80 = (m113 * m234);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(150)
		Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(150)
		Float tmp82 = (m114 * m244);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(150)
		Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(150)
		Float tmp84 = tmp76[(int)3] = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(150)
		tmp84;
		HX_STACK_LINE(150)
		Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(150)
		Float tmp86 = (m121 * m211);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(150)
		Float tmp87 = (m122 * m221);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(150)
		Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(150)
		Float tmp89 = (m123 * m231);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(150)
		Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(150)
		Float tmp91 = (m124 * m241);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(150)
		Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(150)
		Float tmp93 = tmp85[(int)4] = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(150)
		tmp93;
		HX_STACK_LINE(150)
		Array< Float > tmp94 = this->rawData;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(150)
		Float tmp95 = (m121 * m212);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(150)
		Float tmp96 = (m122 * m222);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(150)
		Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(150)
		Float tmp98 = (m123 * m232);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(150)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(150)
		Float tmp100 = (m124 * m242);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(150)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(150)
		Float tmp102 = tmp94[(int)5] = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(150)
		tmp102;
		HX_STACK_LINE(150)
		Array< Float > tmp103 = this->rawData;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(150)
		Float tmp104 = (m121 * m213);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(150)
		Float tmp105 = (m122 * m223);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(150)
		Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(150)
		Float tmp107 = (m123 * m233);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(150)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(150)
		Float tmp109 = (m124 * m243);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(150)
		Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(150)
		Float tmp111 = tmp103[(int)6] = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(150)
		tmp111;
		HX_STACK_LINE(150)
		Array< Float > tmp112 = this->rawData;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(150)
		Float tmp113 = (m121 * m214);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(150)
		Float tmp114 = (m122 * m224);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(150)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(150)
		Float tmp116 = (m123 * m234);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(150)
		Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(150)
		Float tmp118 = (m124 * m244);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(150)
		Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(150)
		Float tmp120 = tmp112[(int)7] = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(150)
		tmp120;
		HX_STACK_LINE(150)
		Array< Float > tmp121 = this->rawData;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(150)
		Float tmp122 = (m131 * m211);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(150)
		Float tmp123 = (m132 * m221);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(150)
		Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(150)
		Float tmp125 = (m133 * m231);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(150)
		Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(150)
		Float tmp127 = (m134 * m241);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(150)
		Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(150)
		Float tmp129 = tmp121[(int)8] = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(150)
		tmp129;
		HX_STACK_LINE(150)
		Array< Float > tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(150)
		Float tmp131 = (m131 * m212);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(150)
		Float tmp132 = (m132 * m222);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(150)
		Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(150)
		Float tmp134 = (m133 * m232);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(150)
		Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(150)
		Float tmp136 = (m134 * m242);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(150)
		Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(150)
		Float tmp138 = tmp130[(int)9] = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(150)
		tmp138;
		HX_STACK_LINE(150)
		Array< Float > tmp139 = this->rawData;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(150)
		Float tmp140 = (m131 * m213);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(150)
		Float tmp141 = (m132 * m223);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(150)
		Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(150)
		Float tmp143 = (m133 * m233);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(150)
		Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(150)
		Float tmp145 = (m134 * m243);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(150)
		Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(150)
		Float tmp147 = tmp139[(int)10] = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(150)
		tmp147;
		HX_STACK_LINE(150)
		Array< Float > tmp148 = this->rawData;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(150)
		Float tmp149 = (m131 * m214);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(150)
		Float tmp150 = (m132 * m224);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(150)
		Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(150)
		Float tmp152 = (m133 * m234);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(150)
		Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(150)
		Float tmp154 = (m134 * m244);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(150)
		Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(150)
		Float tmp156 = tmp148[(int)11] = tmp155;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(150)
		tmp156;
		HX_STACK_LINE(150)
		Array< Float > tmp157 = this->rawData;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(150)
		Float tmp158 = (m141 * m211);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(150)
		Float tmp159 = (m142 * m221);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(150)
		Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(150)
		Float tmp161 = (m143 * m231);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(150)
		Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(150)
		Float tmp163 = (m144 * m241);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(150)
		Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(150)
		Float tmp165 = tmp157[(int)12] = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(150)
		tmp165;
		HX_STACK_LINE(150)
		Array< Float > tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(150)
		Float tmp167 = (m141 * m212);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(150)
		Float tmp168 = (m142 * m222);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(150)
		Float tmp169 = (tmp167 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(150)
		Float tmp170 = (m143 * m232);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(150)
		Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(150)
		Float tmp172 = (m144 * m242);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(150)
		Float tmp173 = (tmp171 + tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(150)
		Float tmp174 = tmp166[(int)13] = tmp173;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(150)
		tmp174;
		HX_STACK_LINE(150)
		Array< Float > tmp175 = this->rawData;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(150)
		Float tmp176 = (m141 * m213);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(150)
		Float tmp177 = (m142 * m223);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(150)
		Float tmp178 = (tmp176 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(150)
		Float tmp179 = (m143 * m233);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(150)
		Float tmp180 = (tmp178 + tmp179);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(150)
		Float tmp181 = (m144 * m243);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(150)
		Float tmp182 = (tmp180 + tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(150)
		Float tmp183 = tmp175[(int)14] = tmp182;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(150)
		tmp183;
		HX_STACK_LINE(150)
		Array< Float > tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(150)
		Float tmp185 = (m141 * m214);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(150)
		Float tmp186 = (m142 * m224);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(150)
		Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(150)
		Float tmp188 = (m143 * m234);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(150)
		Float tmp189 = (tmp187 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(150)
		Float tmp190 = (m144 * m244);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(150)
		Float tmp191 = (tmp189 + tmp190);		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(150)
		Float tmp192 = tmp184[(int)15] = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(150)
		tmp192;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendTranslation",0x514252af,"openfl.geom.Matrix3D.appendTranslation","openfl/geom/Matrix3D.hx",155,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(157)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		Float tmp2 = tmp1->__get((int)12);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		Float tmp6 = tmp[(int)12] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		tmp6;
		HX_STACK_LINE(158)
		Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		Float tmp9 = tmp8->__get((int)13);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(158)
		Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(158)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(158)
		Float tmp13 = tmp7[(int)13] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(158)
		tmp13;
		HX_STACK_LINE(159)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(159)
		Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(159)
		Float tmp16 = tmp15->__get((int)14);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(159)
		Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(159)
		Float tmp18 = z;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(159)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(159)
		Float tmp20 = tmp14[(int)14] = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(159)
		tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

::openfl::geom::Matrix3D Matrix3D_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","clone",0x2ff530d5,"openfl.geom.Matrix3D.clone","openfl/geom/Matrix3D.hx",170,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	Array< Float > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	::openfl::geom::Matrix3D tmp2 = ::openfl::geom::Matrix3D_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnFrom",0x63600afd,"openfl.geom.Matrix3D.copyColumnFrom","openfl/geom/Matrix3D.hx",177,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(179)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(182)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(182)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				Float tmp3 = tmp1[(int)0] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(182)
				tmp3;
				HX_STACK_LINE(183)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(183)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(183)
				Float tmp6 = tmp4[(int)1] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				tmp6;
				HX_STACK_LINE(184)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(184)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(184)
				Float tmp9 = tmp7[(int)2] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(184)
				tmp9;
				HX_STACK_LINE(185)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(185)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(185)
				Float tmp12 = tmp10[(int)3] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(185)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(187)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(187)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(187)
				Float tmp3 = tmp1[(int)4] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(187)
				tmp3;
				HX_STACK_LINE(188)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(188)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(188)
				Float tmp6 = tmp4[(int)5] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(188)
				tmp6;
				HX_STACK_LINE(189)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(189)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				Float tmp9 = tmp7[(int)6] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(189)
				tmp9;
				HX_STACK_LINE(190)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				Float tmp12 = tmp10[(int)7] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(190)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(192)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(192)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(192)
				Float tmp3 = tmp1[(int)8] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(192)
				tmp3;
				HX_STACK_LINE(193)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(193)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(193)
				Float tmp6 = tmp4[(int)9] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(193)
				tmp6;
				HX_STACK_LINE(194)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				Float tmp9 = tmp7[(int)10] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				tmp9;
				HX_STACK_LINE(195)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(195)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(195)
				Float tmp12 = tmp10[(int)11] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(195)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(197)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(197)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(197)
				Float tmp3 = tmp1[(int)12] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(197)
				tmp3;
				HX_STACK_LINE(198)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(198)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(198)
				Float tmp6 = tmp4[(int)13] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(198)
				tmp6;
				HX_STACK_LINE(199)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				Float tmp9 = tmp7[(int)14] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(199)
				tmp9;
				HX_STACK_LINE(200)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(200)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(200)
				Float tmp12 = tmp10[(int)15] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(200)
				tmp12;
			}
			;break;
			default: {
				HX_STACK_LINE(202)
				::String tmp1 = (HX_HCSTRING("Error, Column ","\xce","\x33","\xbf","\x79") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(202)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(202)
				::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(202)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnFrom,(void))

Void Matrix3D_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnTo",0x8c37304e,"openfl.geom.Matrix3D.copyColumnTo","openfl/geom/Matrix3D.hx",208,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(210)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(213)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(213)
				Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(213)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(214)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(214)
				Float tmp4 = tmp3->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(214)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(215)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(215)
				Float tmp6 = tmp5->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(215)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(216)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(216)
				Float tmp8 = tmp7->__get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(218)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(218)
				Float tmp2 = tmp1->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(218)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(219)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(219)
				Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(220)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(220)
				Float tmp6 = tmp5->__get((int)6);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(221)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				Float tmp8 = tmp7->__get((int)7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(223)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(223)
				Float tmp2 = tmp1->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(223)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(224)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(224)
				Float tmp4 = tmp3->__get((int)9);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(224)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(225)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				Float tmp6 = tmp5->__get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(225)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(226)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(226)
				Float tmp8 = tmp7->__get((int)11);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(228)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(228)
				Float tmp2 = tmp1->__get((int)12);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(229)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				Float tmp4 = tmp3->__get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(230)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(230)
				Float tmp6 = tmp5->__get((int)14);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(230)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(231)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(231)
				Float tmp8 = tmp7->__get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(231)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			default: {
				HX_STACK_LINE(233)
				::String tmp1 = (HX_HCSTRING("Error, Column ","\xce","\x33","\xbf","\x79") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(233)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(233)
				::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(233)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnTo,(void))

Void Matrix3D_obj::copyFrom( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyFrom",0xe290a947,"openfl.geom.Matrix3D.copyFrom","openfl/geom/Matrix3D.hx",239,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(241)
		Array< Float > tmp = other->rawData->copy();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		this->rawData = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyFrom,(void))

Void Matrix3D_obj::copyRawDataFrom( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataFrom",0x9938207f,"openfl.geom.Matrix3D.copyRawDataFrom","openfl/geom/Matrix3D.hx",245,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(247)
		bool tmp = transpose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		if ((tmp)){
			HX_STACK_LINE(248)
			Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			Array< Float > tmp2 = tmp1->copy();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			Array< Float > oRawData = tmp2;		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(248)
			Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			Float tmp4 = oRawData->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(248)
			Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			Float tmp6 = tmp3[(int)1] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			tmp6;
			HX_STACK_LINE(248)
			Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			Float tmp8 = oRawData->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			Float tmp10 = tmp7[(int)2] = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			tmp10;
			HX_STACK_LINE(248)
			Array< Float > tmp11 = this->rawData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(248)
			Float tmp12 = oRawData->__get((int)12);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(248)
			Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(248)
			Float tmp14 = tmp11[(int)3] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(248)
			tmp14;
			HX_STACK_LINE(248)
			Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(248)
			Float tmp16 = oRawData->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(248)
			Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(248)
			Float tmp18 = tmp15[(int)4] = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(248)
			tmp18;
			HX_STACK_LINE(248)
			Array< Float > tmp19 = this->rawData;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(248)
			Float tmp20 = oRawData->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(248)
			Dynamic tmp21 = ((Dynamic)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(248)
			Float tmp22 = tmp19[(int)6] = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(248)
			tmp22;
			HX_STACK_LINE(248)
			Array< Float > tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(248)
			Float tmp24 = oRawData->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(248)
			Dynamic tmp25 = ((Dynamic)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(248)
			Float tmp26 = tmp23[(int)7] = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(248)
			tmp26;
			HX_STACK_LINE(248)
			Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(248)
			Float tmp28 = oRawData->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(248)
			Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(248)
			Float tmp30 = tmp27[(int)8] = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(248)
			tmp30;
			HX_STACK_LINE(248)
			Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(248)
			Float tmp32 = oRawData->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(248)
			Dynamic tmp33 = ((Dynamic)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(248)
			Float tmp34 = tmp31[(int)9] = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(248)
			tmp34;
			HX_STACK_LINE(248)
			Array< Float > tmp35 = this->rawData;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(248)
			Float tmp36 = oRawData->__get((int)14);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(248)
			Dynamic tmp37 = ((Dynamic)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(248)
			Float tmp38 = tmp35[(int)11] = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(248)
			tmp38;
			HX_STACK_LINE(248)
			Array< Float > tmp39 = this->rawData;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(248)
			Float tmp40 = oRawData->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(248)
			Dynamic tmp41 = ((Dynamic)(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(248)
			Float tmp42 = tmp39[(int)12] = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(248)
			tmp42;
			HX_STACK_LINE(248)
			Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(248)
			Float tmp44 = oRawData->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(248)
			Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(248)
			Float tmp46 = tmp43[(int)13] = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(248)
			tmp46;
			HX_STACK_LINE(248)
			Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(248)
			Float tmp48 = oRawData->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(248)
			Dynamic tmp49 = ((Dynamic)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(248)
			Float tmp50 = tmp47[(int)14] = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(248)
			tmp50;
		}
		HX_STACK_LINE(250)
		int tmp1 = vector->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		int l = tmp4;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(251)
			while((true)){
				HX_STACK_LINE(251)
				bool tmp5 = (_g < l);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(251)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(251)
				if ((tmp6)){
					HX_STACK_LINE(251)
					break;
				}
				HX_STACK_LINE(251)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(251)
				int c = tmp7;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(252)
				Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(252)
				int tmp9 = (c + index);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(252)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				Float tmp11 = vector->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(252)
				Float tmp13 = tmp8[c] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(252)
				tmp13;
			}
		}
		HX_STACK_LINE(254)
		bool tmp5 = transpose;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		if ((tmp5)){
			HX_STACK_LINE(255)
			Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			Array< Float > tmp7 = tmp6->copy();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(255)
			Array< Float > oRawData = tmp7;		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(255)
			Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(255)
			Float tmp9 = oRawData->__get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(255)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(255)
			Float tmp11 = tmp8[(int)1] = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(255)
			tmp11;
			HX_STACK_LINE(255)
			Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(255)
			Float tmp13 = oRawData->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(255)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(255)
			Float tmp15 = tmp12[(int)2] = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(255)
			tmp15;
			HX_STACK_LINE(255)
			Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(255)
			Float tmp17 = oRawData->__get((int)12);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(255)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(255)
			Float tmp19 = tmp16[(int)3] = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(255)
			tmp19;
			HX_STACK_LINE(255)
			Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(255)
			Float tmp21 = oRawData->__get((int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(255)
			Dynamic tmp22 = ((Dynamic)(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(255)
			Float tmp23 = tmp20[(int)4] = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(255)
			tmp23;
			HX_STACK_LINE(255)
			Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(255)
			Float tmp25 = oRawData->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(255)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(255)
			Float tmp27 = tmp24[(int)6] = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(255)
			tmp27;
			HX_STACK_LINE(255)
			Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(255)
			Float tmp29 = oRawData->__get((int)13);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(255)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(255)
			Float tmp31 = tmp28[(int)7] = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(255)
			tmp31;
			HX_STACK_LINE(255)
			Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(255)
			Float tmp33 = oRawData->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(255)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(255)
			Float tmp35 = tmp32[(int)8] = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(255)
			tmp35;
			HX_STACK_LINE(255)
			Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(255)
			Float tmp37 = oRawData->__get((int)6);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(255)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(255)
			Float tmp39 = tmp36[(int)9] = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(255)
			tmp39;
			HX_STACK_LINE(255)
			Array< Float > tmp40 = this->rawData;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(255)
			Float tmp41 = oRawData->__get((int)14);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(255)
			Dynamic tmp42 = ((Dynamic)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(255)
			Float tmp43 = tmp40[(int)11] = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(255)
			tmp43;
			HX_STACK_LINE(255)
			Array< Float > tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(255)
			Float tmp45 = oRawData->__get((int)3);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(255)
			Dynamic tmp46 = ((Dynamic)(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(255)
			Float tmp47 = tmp44[(int)12] = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(255)
			tmp47;
			HX_STACK_LINE(255)
			Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(255)
			Float tmp49 = oRawData->__get((int)7);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(255)
			Dynamic tmp50 = ((Dynamic)(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(255)
			Float tmp51 = tmp48[(int)13] = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(255)
			tmp51;
			HX_STACK_LINE(255)
			Array< Float > tmp52 = this->rawData;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(255)
			Float tmp53 = oRawData->__get((int)11);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(255)
			Dynamic tmp54 = ((Dynamic)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(255)
			Float tmp55 = tmp52[(int)14] = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(255)
			tmp55;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataFrom,(void))

Void Matrix3D_obj::copyRawDataTo( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataTo",0xac978150,"openfl.geom.Matrix3D.copyRawDataTo","openfl/geom/Matrix3D.hx",260,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(262)
		bool tmp = transpose;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		if ((tmp)){
			HX_STACK_LINE(263)
			Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			Array< Float > tmp2 = tmp1->copy();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(263)
			Array< Float > oRawData = tmp2;		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(263)
			Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			Float tmp4 = oRawData->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			Float tmp6 = tmp3[(int)1] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			tmp6;
			HX_STACK_LINE(263)
			Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			Float tmp8 = oRawData->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(263)
			Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(263)
			Float tmp10 = tmp7[(int)2] = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(263)
			tmp10;
			HX_STACK_LINE(263)
			Array< Float > tmp11 = this->rawData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(263)
			Float tmp12 = oRawData->__get((int)12);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(263)
			Dynamic tmp13 = ((Dynamic)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(263)
			Float tmp14 = tmp11[(int)3] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(263)
			tmp14;
			HX_STACK_LINE(263)
			Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(263)
			Float tmp16 = oRawData->__get((int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(263)
			Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(263)
			Float tmp18 = tmp15[(int)4] = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(263)
			tmp18;
			HX_STACK_LINE(263)
			Array< Float > tmp19 = this->rawData;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(263)
			Float tmp20 = oRawData->__get((int)9);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(263)
			Dynamic tmp21 = ((Dynamic)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(263)
			Float tmp22 = tmp19[(int)6] = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(263)
			tmp22;
			HX_STACK_LINE(263)
			Array< Float > tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(263)
			Float tmp24 = oRawData->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(263)
			Dynamic tmp25 = ((Dynamic)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(263)
			Float tmp26 = tmp23[(int)7] = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(263)
			tmp26;
			HX_STACK_LINE(263)
			Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(263)
			Float tmp28 = oRawData->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(263)
			Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(263)
			Float tmp30 = tmp27[(int)8] = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(263)
			tmp30;
			HX_STACK_LINE(263)
			Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(263)
			Float tmp32 = oRawData->__get((int)6);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(263)
			Dynamic tmp33 = ((Dynamic)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(263)
			Float tmp34 = tmp31[(int)9] = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(263)
			tmp34;
			HX_STACK_LINE(263)
			Array< Float > tmp35 = this->rawData;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(263)
			Float tmp36 = oRawData->__get((int)14);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(263)
			Dynamic tmp37 = ((Dynamic)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(263)
			Float tmp38 = tmp35[(int)11] = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(263)
			tmp38;
			HX_STACK_LINE(263)
			Array< Float > tmp39 = this->rawData;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(263)
			Float tmp40 = oRawData->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(263)
			Dynamic tmp41 = ((Dynamic)(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(263)
			Float tmp42 = tmp39[(int)12] = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(263)
			tmp42;
			HX_STACK_LINE(263)
			Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(263)
			Float tmp44 = oRawData->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(263)
			Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(263)
			Float tmp46 = tmp43[(int)13] = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(263)
			tmp46;
			HX_STACK_LINE(263)
			Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(263)
			Float tmp48 = oRawData->__get((int)11);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(263)
			Dynamic tmp49 = ((Dynamic)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(263)
			Float tmp50 = tmp47[(int)14] = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(263)
			tmp50;
		}
		HX_STACK_LINE(265)
		Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(265)
		int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				bool tmp3 = (_g < l);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				if ((tmp4)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				int c = tmp5;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(267)
				int tmp6 = (c + index);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(267)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				Array< Float > tmp8 = this->rawData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				Float tmp9 = tmp8->__get(c);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(267)
				Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(267)
				Float tmp11 = vector[tmp7] = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(267)
				tmp11;
			}
		}
		HX_STACK_LINE(269)
		bool tmp3 = transpose;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		if ((tmp3)){
			HX_STACK_LINE(270)
			Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(270)
			Array< Float > tmp5 = tmp4->copy();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(270)
			Array< Float > oRawData = tmp5;		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(270)
			Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(270)
			Float tmp7 = oRawData->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(270)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(270)
			Float tmp9 = tmp6[(int)1] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(270)
			tmp9;
			HX_STACK_LINE(270)
			Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(270)
			Float tmp11 = oRawData->__get((int)8);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(270)
			Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(270)
			Float tmp13 = tmp10[(int)2] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(270)
			tmp13;
			HX_STACK_LINE(270)
			Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			Float tmp15 = oRawData->__get((int)12);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(270)
			Float tmp17 = tmp14[(int)3] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(270)
			tmp17;
			HX_STACK_LINE(270)
			Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(270)
			Float tmp19 = oRawData->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(270)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(270)
			Float tmp21 = tmp18[(int)4] = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(270)
			tmp21;
			HX_STACK_LINE(270)
			Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(270)
			Float tmp23 = oRawData->__get((int)9);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(270)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(270)
			Float tmp25 = tmp22[(int)6] = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(270)
			tmp25;
			HX_STACK_LINE(270)
			Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(270)
			Float tmp27 = oRawData->__get((int)13);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(270)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(270)
			Float tmp29 = tmp26[(int)7] = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(270)
			tmp29;
			HX_STACK_LINE(270)
			Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(270)
			Float tmp31 = oRawData->__get((int)2);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(270)
			Dynamic tmp32 = ((Dynamic)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(270)
			Float tmp33 = tmp30[(int)8] = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(270)
			tmp33;
			HX_STACK_LINE(270)
			Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(270)
			Float tmp35 = oRawData->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(270)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(270)
			Float tmp37 = tmp34[(int)9] = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(270)
			tmp37;
			HX_STACK_LINE(270)
			Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(270)
			Float tmp39 = oRawData->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(270)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(270)
			Float tmp41 = tmp38[(int)11] = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(270)
			tmp41;
			HX_STACK_LINE(270)
			Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(270)
			Float tmp43 = oRawData->__get((int)3);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(270)
			Dynamic tmp44 = ((Dynamic)(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(270)
			Float tmp45 = tmp42[(int)12] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(270)
			tmp45;
			HX_STACK_LINE(270)
			Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(270)
			Float tmp47 = oRawData->__get((int)7);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(270)
			Dynamic tmp48 = ((Dynamic)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(270)
			Float tmp49 = tmp46[(int)13] = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(270)
			tmp49;
			HX_STACK_LINE(270)
			Array< Float > tmp50 = this->rawData;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(270)
			Float tmp51 = oRawData->__get((int)11);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(270)
			Dynamic tmp52 = ((Dynamic)(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(270)
			Float tmp53 = tmp50[(int)14] = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(270)
			tmp53;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataTo,(void))

Void Matrix3D_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowFrom",0x3d20cce7,"openfl.geom.Matrix3D.copyRowFrom","openfl/geom/Matrix3D.hx",275,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(277)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(280)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(280)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(280)
				Float tmp3 = tmp1[(int)0] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(280)
				tmp3;
				HX_STACK_LINE(281)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(281)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(281)
				Float tmp6 = tmp4[(int)4] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(281)
				tmp6;
				HX_STACK_LINE(282)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(282)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(282)
				Float tmp9 = tmp7[(int)8] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(282)
				tmp9;
				HX_STACK_LINE(283)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(283)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(283)
				Float tmp12 = tmp10[(int)12] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				tmp12;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(286)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(286)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				Float tmp3 = tmp1[(int)1] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				tmp3;
				HX_STACK_LINE(287)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(287)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				Float tmp6 = tmp4[(int)5] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				tmp6;
				HX_STACK_LINE(288)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(288)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(288)
				Float tmp9 = tmp7[(int)9] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(288)
				tmp9;
				HX_STACK_LINE(289)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(289)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(289)
				Float tmp12 = tmp10[(int)13] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(289)
				tmp12;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(292)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(292)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(292)
				Float tmp3 = tmp1[(int)2] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(292)
				tmp3;
				HX_STACK_LINE(293)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(293)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(293)
				Float tmp6 = tmp4[(int)6] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				tmp6;
				HX_STACK_LINE(294)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(294)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(294)
				Float tmp9 = tmp7[(int)10] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				tmp9;
				HX_STACK_LINE(295)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(295)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(295)
				Float tmp12 = tmp10[(int)14] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(295)
				tmp12;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(298)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(298)
				Float tmp2 = vector3D->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(298)
				Float tmp3 = tmp1[(int)3] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(298)
				tmp3;
				HX_STACK_LINE(299)
				Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				Float tmp5 = vector3D->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				Float tmp6 = tmp4[(int)7] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				tmp6;
				HX_STACK_LINE(300)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(300)
				Float tmp8 = vector3D->z;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(300)
				Float tmp9 = tmp7[(int)11] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				tmp9;
				HX_STACK_LINE(301)
				Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(301)
				Float tmp11 = vector3D->w;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(301)
				Float tmp12 = tmp10[(int)15] = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(301)
				tmp12;
			}
			;break;
			default: {
				HX_STACK_LINE(304)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(304)
				{
					HX_STACK_LINE(304)
					int _int = row;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(304)
					bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(304)
					if ((tmp2)){
						HX_STACK_LINE(304)
						tmp1 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(304)
						tmp1 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(304)
				::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(304)
				::String tmp3 = (HX_HCSTRING("Error, Row ","\x02","\xfb","\x19","\xd9") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(304)
				::String tmp4 = (tmp3 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(304)
				HX_STACK_DO_THROW(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowFrom,(void))

Void Matrix3D_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowTo",0x42dcc3b8,"openfl.geom.Matrix3D.copyRowTo","openfl/geom/Matrix3D.hx",354,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(356)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(359)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(359)
				Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(359)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(360)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(360)
				Float tmp4 = tmp3->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(360)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(361)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(361)
				Float tmp6 = tmp5->__get((int)8);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(361)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(362)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(362)
				Float tmp8 = tmp7->__get((int)12);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(362)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(365)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(365)
				Float tmp2 = tmp1->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(366)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(366)
				Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(366)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(367)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(367)
				Float tmp6 = tmp5->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(368)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(368)
				Float tmp8 = tmp7->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(368)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(371)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(371)
				Float tmp2 = tmp1->__get((int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(372)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				Float tmp4 = tmp3->__get((int)6);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(372)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(373)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				Float tmp6 = tmp5->__get((int)10);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(373)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(374)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(374)
				Float tmp8 = tmp7->__get((int)14);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(374)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(377)
				Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(377)
				Float tmp2 = tmp1->__get((int)3);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(377)
				vector3D->x = ((Dynamic)(tmp2));
				HX_STACK_LINE(378)
				Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(378)
				Float tmp4 = tmp3->__get((int)7);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(378)
				vector3D->y = ((Dynamic)(tmp4));
				HX_STACK_LINE(379)
				Array< Float > tmp5 = this->rawData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(379)
				Float tmp6 = tmp5->__get((int)11);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(379)
				vector3D->z = ((Dynamic)(tmp6));
				HX_STACK_LINE(380)
				Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(380)
				Float tmp8 = tmp7->__get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(380)
				vector3D->w = ((Dynamic)(tmp8));
			}
			;break;
			default: {
				HX_STACK_LINE(383)
				::String tmp1 = (HX_HCSTRING("Error, Row ","\x02","\xfb","\x19","\xd9") + row);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(383)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(383)
				::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(383)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowTo,(void))

Void Matrix3D_obj::copyToMatrix3D( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyToMatrix3D",0x2cc9916a,"openfl.geom.Matrix3D.copyToMatrix3D","openfl/geom/Matrix3D.hx",389,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(391)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		Array< Float > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		other->rawData = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyToMatrix3D,(void))

Array< ::Dynamic > Matrix3D_obj::decompose( ::openfl::geom::Orientation3D orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","decompose",0x4a21fd29,"openfl.geom.Matrix3D.decompose","openfl/geom/Matrix3D.hx",399,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(401)
	bool tmp = (orientationStyle == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	if ((tmp)){
		HX_STACK_LINE(402)
		orientationStyle = ::openfl::geom::Orientation3D_obj::EULER_ANGLES;
	}
	HX_STACK_LINE(404)
	Array< ::Dynamic > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(404)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(404)
		this1 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());
		HX_STACK_LINE(404)
		tmp1 = this1;
	}
	HX_STACK_LINE(404)
	Array< ::Dynamic > vec = tmp1;		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(405)
	Array< Float > tmp2 = this->rawData;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	Array< Float > tmp3 = tmp2->copy();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(405)
	::openfl::geom::Matrix3D tmp4 = ::openfl::geom::Matrix3D_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(405)
	::openfl::geom::Matrix3D m = tmp4;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(406)
	Array< Float > tmp5 = m->rawData->copy();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(406)
	Array< Float > mr = tmp5;		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(408)
	Float tmp6 = mr->__get((int)12);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(408)
	Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(408)
	Float tmp8 = mr->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(408)
	Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(408)
	Float tmp10 = mr->__get((int)14);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(408)
	Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(408)
	::openfl::geom::Vector3D tmp12 = ::openfl::geom::Vector3D_obj::__new(tmp7,tmp9,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(408)
	::openfl::geom::Vector3D pos = tmp12;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(409)
	Float tmp13 = mr[(int)12] = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(409)
	tmp13;
	HX_STACK_LINE(410)
	Float tmp14 = mr[(int)13] = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(410)
	tmp14;
	HX_STACK_LINE(411)
	Float tmp15 = mr[(int)14] = (int)0;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(411)
	tmp15;
	HX_STACK_LINE(413)
	::openfl::geom::Vector3D tmp16 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(413)
	::openfl::geom::Vector3D scale = tmp16;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(415)
	Float tmp17 = mr->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(415)
	Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(415)
	Float tmp19 = mr->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(415)
	Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(415)
	Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(415)
	Float tmp22 = mr->__get((int)1);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(415)
	Dynamic tmp23 = ((Dynamic)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(415)
	Float tmp24 = mr->__get((int)1);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(415)
	Dynamic tmp25 = ((Dynamic)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(415)
	Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(415)
	Float tmp27 = (tmp21 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(415)
	Float tmp28 = mr->__get((int)2);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(415)
	Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(415)
	Float tmp30 = mr->__get((int)2);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(415)
	Dynamic tmp31 = ((Dynamic)(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(415)
	Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(415)
	Float tmp33 = (tmp27 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(415)
	Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(415)
	scale->x = tmp34;
	HX_STACK_LINE(416)
	Float tmp35 = mr->__get((int)4);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(416)
	Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(416)
	Float tmp37 = mr->__get((int)4);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(416)
	Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(416)
	Float tmp39 = (tmp36 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(416)
	Float tmp40 = mr->__get((int)5);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(416)
	Dynamic tmp41 = ((Dynamic)(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(416)
	Float tmp42 = mr->__get((int)5);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(416)
	Dynamic tmp43 = ((Dynamic)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(416)
	Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(416)
	Float tmp45 = (tmp39 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(416)
	Float tmp46 = mr->__get((int)6);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(416)
	Dynamic tmp47 = ((Dynamic)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(416)
	Float tmp48 = mr->__get((int)6);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(416)
	Dynamic tmp49 = ((Dynamic)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(416)
	Float tmp50 = (tmp47 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(416)
	Float tmp51 = (tmp45 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(416)
	Float tmp52 = ::Math_obj::sqrt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(416)
	scale->y = tmp52;
	HX_STACK_LINE(417)
	Float tmp53 = mr->__get((int)8);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(417)
	Dynamic tmp54 = ((Dynamic)(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(417)
	Float tmp55 = mr->__get((int)8);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(417)
	Dynamic tmp56 = ((Dynamic)(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(417)
	Float tmp57 = (tmp54 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(417)
	Float tmp58 = mr->__get((int)9);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(417)
	Dynamic tmp59 = ((Dynamic)(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(417)
	Float tmp60 = mr->__get((int)9);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(417)
	Dynamic tmp61 = ((Dynamic)(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(417)
	Float tmp62 = (tmp59 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(417)
	Float tmp63 = (tmp57 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(417)
	Float tmp64 = mr->__get((int)10);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(417)
	Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(417)
	Float tmp66 = mr->__get((int)10);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(417)
	Dynamic tmp67 = ((Dynamic)(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(417)
	Float tmp68 = (tmp65 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(417)
	Float tmp69 = (tmp63 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(417)
	Float tmp70 = ::Math_obj::sqrt(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(417)
	scale->z = tmp70;
	HX_STACK_LINE(419)
	Float tmp71 = mr->__get((int)0);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(419)
	Dynamic tmp72 = ((Dynamic)(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(419)
	Float tmp73 = mr->__get((int)5);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(419)
	Dynamic tmp74 = ((Dynamic)(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(419)
	Float tmp75 = mr->__get((int)10);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(419)
	Dynamic tmp76 = ((Dynamic)(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(419)
	Float tmp77 = (tmp74 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(419)
	Float tmp78 = mr->__get((int)6);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(419)
	Dynamic tmp79 = ((Dynamic)(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(419)
	Float tmp80 = mr->__get((int)9);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(419)
	Dynamic tmp81 = ((Dynamic)(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(419)
	Float tmp82 = (tmp79 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(419)
	Float tmp83 = (tmp77 - tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(419)
	Float tmp84 = (tmp72 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(419)
	Float tmp85 = mr->__get((int)1);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(419)
	Dynamic tmp86 = ((Dynamic)(tmp85));		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(419)
	Float tmp87 = mr->__get((int)4);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(419)
	Dynamic tmp88 = ((Dynamic)(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(419)
	Float tmp89 = mr->__get((int)10);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(419)
	Dynamic tmp90 = ((Dynamic)(tmp89));		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(419)
	Float tmp91 = (tmp88 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(419)
	Float tmp92 = mr->__get((int)6);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(419)
	Dynamic tmp93 = ((Dynamic)(tmp92));		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(419)
	Float tmp94 = mr->__get((int)8);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(419)
	Dynamic tmp95 = ((Dynamic)(tmp94));		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(419)
	Float tmp96 = (tmp93 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(419)
	Float tmp97 = (tmp91 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(419)
	Float tmp98 = (tmp86 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(419)
	Float tmp99 = (tmp84 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(419)
	Float tmp100 = mr->__get((int)2);		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(419)
	Dynamic tmp101 = ((Dynamic)(tmp100));		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(419)
	Float tmp102 = mr->__get((int)4);		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(419)
	Dynamic tmp103 = ((Dynamic)(tmp102));		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(419)
	Float tmp104 = mr->__get((int)9);		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(419)
	Dynamic tmp105 = ((Dynamic)(tmp104));		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(419)
	Float tmp106 = (tmp103 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(419)
	Float tmp107 = mr->__get((int)5);		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(419)
	Dynamic tmp108 = ((Dynamic)(tmp107));		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(419)
	Float tmp109 = mr->__get((int)8);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(419)
	Dynamic tmp110 = ((Dynamic)(tmp109));		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(419)
	Float tmp111 = (tmp108 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(419)
	Float tmp112 = (tmp106 - tmp111);		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(419)
	Float tmp113 = (tmp101 * tmp112);		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(419)
	Float tmp114 = (tmp99 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(419)
	bool tmp115 = (tmp114 < (int)0);		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(419)
	if ((tmp115)){
		HX_STACK_LINE(421)
		Float tmp116 = scale->z;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(421)
		Float tmp117 = -(tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(421)
		scale->z = tmp117;
	}
	HX_STACK_LINE(425)
	Float tmp116 = mr->__get((int)0);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(425)
	Dynamic tmp117 = ((Dynamic)(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(425)
	Float tmp118 = scale->x;		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(425)
	Float tmp119 = (Float(tmp117) / Float(tmp118));		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(425)
	Float tmp120 = mr[(int)0] = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(425)
	tmp120;
	HX_STACK_LINE(426)
	Float tmp121 = mr->__get((int)1);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(426)
	Dynamic tmp122 = ((Dynamic)(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(426)
	Float tmp123 = scale->x;		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(426)
	Float tmp124 = (Float(tmp122) / Float(tmp123));		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(426)
	Float tmp125 = mr[(int)1] = tmp124;		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(426)
	tmp125;
	HX_STACK_LINE(427)
	Float tmp126 = mr->__get((int)2);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(427)
	Dynamic tmp127 = ((Dynamic)(tmp126));		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(427)
	Float tmp128 = scale->x;		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(427)
	Float tmp129 = (Float(tmp127) / Float(tmp128));		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(427)
	Float tmp130 = mr[(int)2] = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(427)
	tmp130;
	HX_STACK_LINE(428)
	Float tmp131 = mr->__get((int)4);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(428)
	Dynamic tmp132 = ((Dynamic)(tmp131));		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(428)
	Float tmp133 = scale->y;		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(428)
	Float tmp134 = (Float(tmp132) / Float(tmp133));		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(428)
	Float tmp135 = mr[(int)4] = tmp134;		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(428)
	tmp135;
	HX_STACK_LINE(429)
	Float tmp136 = mr->__get((int)5);		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(429)
	Dynamic tmp137 = ((Dynamic)(tmp136));		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(429)
	Float tmp138 = scale->y;		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(429)
	Float tmp139 = (Float(tmp137) / Float(tmp138));		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(429)
	Float tmp140 = mr[(int)5] = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(429)
	tmp140;
	HX_STACK_LINE(430)
	Float tmp141 = mr->__get((int)6);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(430)
	Dynamic tmp142 = ((Dynamic)(tmp141));		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(430)
	Float tmp143 = scale->y;		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(430)
	Float tmp144 = (Float(tmp142) / Float(tmp143));		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(430)
	Float tmp145 = mr[(int)6] = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(430)
	tmp145;
	HX_STACK_LINE(431)
	Float tmp146 = mr->__get((int)8);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(431)
	Dynamic tmp147 = ((Dynamic)(tmp146));		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(431)
	Float tmp148 = scale->z;		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(431)
	Float tmp149 = (Float(tmp147) / Float(tmp148));		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(431)
	Float tmp150 = mr[(int)8] = tmp149;		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(431)
	tmp150;
	HX_STACK_LINE(432)
	Float tmp151 = mr->__get((int)9);		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(432)
	Dynamic tmp152 = ((Dynamic)(tmp151));		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(432)
	Float tmp153 = scale->z;		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(432)
	Float tmp154 = (Float(tmp152) / Float(tmp153));		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(432)
	Float tmp155 = mr[(int)9] = tmp154;		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(432)
	tmp155;
	HX_STACK_LINE(433)
	Float tmp156 = mr->__get((int)10);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(433)
	Dynamic tmp157 = ((Dynamic)(tmp156));		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(433)
	Float tmp158 = scale->z;		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(433)
	Float tmp159 = (Float(tmp157) / Float(tmp158));		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(433)
	Float tmp160 = mr[(int)10] = tmp159;		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(433)
	tmp160;
	HX_STACK_LINE(435)
	::openfl::geom::Vector3D tmp161 = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(435)
	::openfl::geom::Vector3D rot = tmp161;		HX_STACK_VAR(rot,"rot");
	HX_STACK_LINE(436)
	bool tmp162 = (orientationStyle != null());		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(436)
	if ((tmp162)){
		HX_STACK_LINE(436)
		switch( (int)(orientationStyle->__Index())){
			case (int)0: {
				HX_STACK_LINE(439)
				Float tmp163 = mr->__get((int)0);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(439)
				Dynamic tmp164 = ((Dynamic)(tmp163));		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(439)
				Float tmp165 = mr->__get((int)5);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(439)
				Dynamic tmp166 = ((Dynamic)(tmp165));		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(439)
				Float tmp167 = (tmp164 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(439)
				Float tmp168 = mr->__get((int)10);		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(439)
				Dynamic tmp169 = ((Dynamic)(tmp168));		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(439)
				Float tmp170 = (tmp167 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(439)
				Float tmp171 = (tmp170 - (int)1);		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(439)
				Float tmp172 = (Float(tmp171) / Float((int)2));		HX_STACK_VAR(tmp172,"tmp172");
				HX_STACK_LINE(439)
				Float tmp173 = ::Math_obj::acos(tmp172);		HX_STACK_VAR(tmp173,"tmp173");
				HX_STACK_LINE(439)
				rot->w = tmp173;
				HX_STACK_LINE(441)
				Float tmp174 = mr->__get((int)6);		HX_STACK_VAR(tmp174,"tmp174");
				HX_STACK_LINE(441)
				Dynamic tmp175 = ((Dynamic)(tmp174));		HX_STACK_VAR(tmp175,"tmp175");
				HX_STACK_LINE(441)
				Float tmp176 = mr->__get((int)9);		HX_STACK_VAR(tmp176,"tmp176");
				HX_STACK_LINE(441)
				Dynamic tmp177 = ((Dynamic)(tmp176));		HX_STACK_VAR(tmp177,"tmp177");
				HX_STACK_LINE(441)
				Float tmp178 = (tmp175 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(441)
				Float tmp179 = mr->__get((int)6);		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(441)
				Dynamic tmp180 = ((Dynamic)(tmp179));		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(441)
				Float tmp181 = mr->__get((int)9);		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(441)
				Dynamic tmp182 = ((Dynamic)(tmp181));		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(441)
				Float tmp183 = (tmp180 - tmp182);		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(441)
				Float tmp184 = (tmp178 * tmp183);		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(441)
				Float tmp185 = mr->__get((int)8);		HX_STACK_VAR(tmp185,"tmp185");
				HX_STACK_LINE(441)
				Dynamic tmp186 = ((Dynamic)(tmp185));		HX_STACK_VAR(tmp186,"tmp186");
				HX_STACK_LINE(441)
				Float tmp187 = mr->__get((int)2);		HX_STACK_VAR(tmp187,"tmp187");
				HX_STACK_LINE(441)
				Dynamic tmp188 = ((Dynamic)(tmp187));		HX_STACK_VAR(tmp188,"tmp188");
				HX_STACK_LINE(441)
				Float tmp189 = (tmp186 - tmp188);		HX_STACK_VAR(tmp189,"tmp189");
				HX_STACK_LINE(441)
				Float tmp190 = mr->__get((int)8);		HX_STACK_VAR(tmp190,"tmp190");
				HX_STACK_LINE(441)
				Dynamic tmp191 = ((Dynamic)(tmp190));		HX_STACK_VAR(tmp191,"tmp191");
				HX_STACK_LINE(441)
				Float tmp192 = mr->__get((int)2);		HX_STACK_VAR(tmp192,"tmp192");
				HX_STACK_LINE(441)
				Dynamic tmp193 = ((Dynamic)(tmp192));		HX_STACK_VAR(tmp193,"tmp193");
				HX_STACK_LINE(441)
				Float tmp194 = (tmp191 - tmp193);		HX_STACK_VAR(tmp194,"tmp194");
				HX_STACK_LINE(441)
				Float tmp195 = (tmp189 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
				HX_STACK_LINE(441)
				Float tmp196 = (tmp184 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
				HX_STACK_LINE(441)
				Float tmp197 = mr->__get((int)1);		HX_STACK_VAR(tmp197,"tmp197");
				HX_STACK_LINE(441)
				Dynamic tmp198 = ((Dynamic)(tmp197));		HX_STACK_VAR(tmp198,"tmp198");
				HX_STACK_LINE(441)
				Float tmp199 = mr->__get((int)4);		HX_STACK_VAR(tmp199,"tmp199");
				HX_STACK_LINE(441)
				Dynamic tmp200 = ((Dynamic)(tmp199));		HX_STACK_VAR(tmp200,"tmp200");
				HX_STACK_LINE(441)
				Float tmp201 = (tmp198 - tmp200);		HX_STACK_VAR(tmp201,"tmp201");
				HX_STACK_LINE(441)
				Float tmp202 = mr->__get((int)1);		HX_STACK_VAR(tmp202,"tmp202");
				HX_STACK_LINE(441)
				Dynamic tmp203 = ((Dynamic)(tmp202));		HX_STACK_VAR(tmp203,"tmp203");
				HX_STACK_LINE(441)
				Float tmp204 = mr->__get((int)4);		HX_STACK_VAR(tmp204,"tmp204");
				HX_STACK_LINE(441)
				Dynamic tmp205 = ((Dynamic)(tmp204));		HX_STACK_VAR(tmp205,"tmp205");
				HX_STACK_LINE(441)
				Float tmp206 = (tmp203 - tmp205);		HX_STACK_VAR(tmp206,"tmp206");
				HX_STACK_LINE(441)
				Float tmp207 = (tmp201 * tmp206);		HX_STACK_VAR(tmp207,"tmp207");
				HX_STACK_LINE(441)
				Float tmp208 = (tmp196 + tmp207);		HX_STACK_VAR(tmp208,"tmp208");
				HX_STACK_LINE(441)
				Float tmp209 = ::Math_obj::sqrt(tmp208);		HX_STACK_VAR(tmp209,"tmp209");
				HX_STACK_LINE(441)
				Float len = tmp209;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(443)
				bool tmp210 = (len != (int)0);		HX_STACK_VAR(tmp210,"tmp210");
				HX_STACK_LINE(443)
				if ((tmp210)){
					HX_STACK_LINE(445)
					Float tmp211 = mr->__get((int)6);		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(445)
					Dynamic tmp212 = ((Dynamic)(tmp211));		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(445)
					Float tmp213 = mr->__get((int)9);		HX_STACK_VAR(tmp213,"tmp213");
					HX_STACK_LINE(445)
					Dynamic tmp214 = ((Dynamic)(tmp213));		HX_STACK_VAR(tmp214,"tmp214");
					HX_STACK_LINE(445)
					Float tmp215 = (tmp212 - tmp214);		HX_STACK_VAR(tmp215,"tmp215");
					HX_STACK_LINE(445)
					Float tmp216 = len;		HX_STACK_VAR(tmp216,"tmp216");
					HX_STACK_LINE(445)
					Float tmp217 = (Float(tmp215) / Float(tmp216));		HX_STACK_VAR(tmp217,"tmp217");
					HX_STACK_LINE(445)
					rot->x = tmp217;
					HX_STACK_LINE(446)
					Float tmp218 = mr->__get((int)8);		HX_STACK_VAR(tmp218,"tmp218");
					HX_STACK_LINE(446)
					Dynamic tmp219 = ((Dynamic)(tmp218));		HX_STACK_VAR(tmp219,"tmp219");
					HX_STACK_LINE(446)
					Float tmp220 = mr->__get((int)2);		HX_STACK_VAR(tmp220,"tmp220");
					HX_STACK_LINE(446)
					Dynamic tmp221 = ((Dynamic)(tmp220));		HX_STACK_VAR(tmp221,"tmp221");
					HX_STACK_LINE(446)
					Float tmp222 = (tmp219 - tmp221);		HX_STACK_VAR(tmp222,"tmp222");
					HX_STACK_LINE(446)
					Float tmp223 = len;		HX_STACK_VAR(tmp223,"tmp223");
					HX_STACK_LINE(446)
					Float tmp224 = (Float(tmp222) / Float(tmp223));		HX_STACK_VAR(tmp224,"tmp224");
					HX_STACK_LINE(446)
					rot->y = tmp224;
					HX_STACK_LINE(447)
					Float tmp225 = mr->__get((int)1);		HX_STACK_VAR(tmp225,"tmp225");
					HX_STACK_LINE(447)
					Dynamic tmp226 = ((Dynamic)(tmp225));		HX_STACK_VAR(tmp226,"tmp226");
					HX_STACK_LINE(447)
					Float tmp227 = mr->__get((int)4);		HX_STACK_VAR(tmp227,"tmp227");
					HX_STACK_LINE(447)
					Dynamic tmp228 = ((Dynamic)(tmp227));		HX_STACK_VAR(tmp228,"tmp228");
					HX_STACK_LINE(447)
					Float tmp229 = (tmp226 - tmp228);		HX_STACK_VAR(tmp229,"tmp229");
					HX_STACK_LINE(447)
					Float tmp230 = len;		HX_STACK_VAR(tmp230,"tmp230");
					HX_STACK_LINE(447)
					Float tmp231 = (Float(tmp229) / Float(tmp230));		HX_STACK_VAR(tmp231,"tmp231");
					HX_STACK_LINE(447)
					rot->z = tmp231;
				}
				else{
					HX_STACK_LINE(451)
					Float tmp211 = rot->z = (int)0;		HX_STACK_VAR(tmp211,"tmp211");
					HX_STACK_LINE(451)
					Float tmp212 = rot->y = tmp211;		HX_STACK_VAR(tmp212,"tmp212");
					HX_STACK_LINE(451)
					rot->x = tmp212;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(456)
				Float tmp163 = mr->__get((int)0);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(456)
				Dynamic tmp164 = ((Dynamic)(tmp163));		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(456)
				Float tmp165 = mr->__get((int)5);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(456)
				Dynamic tmp166 = ((Dynamic)(tmp165));		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(456)
				Float tmp167 = (tmp164 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(456)
				Float tmp168 = mr->__get((int)10);		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(456)
				Dynamic tmp169 = ((Dynamic)(tmp168));		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(456)
				Float tmp170 = (tmp167 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(456)
				Float tr = tmp170;		HX_STACK_VAR(tr,"tr");
				HX_STACK_LINE(458)
				bool tmp171 = (tr > (int)0);		HX_STACK_VAR(tmp171,"tmp171");
				HX_STACK_LINE(458)
				if ((tmp171)){
					HX_STACK_LINE(459)
					Float tmp172 = ((int)1 + tr);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(459)
					Float tmp173 = ::Math_obj::sqrt(tmp172);		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(459)
					Float tmp174 = (Float(tmp173) / Float((int)2));		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(459)
					rot->w = tmp174;
					HX_STACK_LINE(461)
					Float tmp175 = mr->__get((int)6);		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(461)
					Dynamic tmp176 = ((Dynamic)(tmp175));		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(461)
					Float tmp177 = mr->__get((int)9);		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(461)
					Dynamic tmp178 = ((Dynamic)(tmp177));		HX_STACK_VAR(tmp178,"tmp178");
					HX_STACK_LINE(461)
					Float tmp179 = (tmp176 - tmp178);		HX_STACK_VAR(tmp179,"tmp179");
					HX_STACK_LINE(461)
					Float tmp180 = ((int)4 * rot->w);		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(461)
					Float tmp181 = (Float(tmp179) / Float(tmp180));		HX_STACK_VAR(tmp181,"tmp181");
					HX_STACK_LINE(461)
					rot->x = tmp181;
					HX_STACK_LINE(462)
					Float tmp182 = mr->__get((int)8);		HX_STACK_VAR(tmp182,"tmp182");
					HX_STACK_LINE(462)
					Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
					HX_STACK_LINE(462)
					Float tmp184 = mr->__get((int)2);		HX_STACK_VAR(tmp184,"tmp184");
					HX_STACK_LINE(462)
					Dynamic tmp185 = ((Dynamic)(tmp184));		HX_STACK_VAR(tmp185,"tmp185");
					HX_STACK_LINE(462)
					Float tmp186 = (tmp183 - tmp185);		HX_STACK_VAR(tmp186,"tmp186");
					HX_STACK_LINE(462)
					Float tmp187 = ((int)4 * rot->w);		HX_STACK_VAR(tmp187,"tmp187");
					HX_STACK_LINE(462)
					Float tmp188 = (Float(tmp186) / Float(tmp187));		HX_STACK_VAR(tmp188,"tmp188");
					HX_STACK_LINE(462)
					rot->y = tmp188;
					HX_STACK_LINE(463)
					Float tmp189 = mr->__get((int)1);		HX_STACK_VAR(tmp189,"tmp189");
					HX_STACK_LINE(463)
					Dynamic tmp190 = ((Dynamic)(tmp189));		HX_STACK_VAR(tmp190,"tmp190");
					HX_STACK_LINE(463)
					Float tmp191 = mr->__get((int)4);		HX_STACK_VAR(tmp191,"tmp191");
					HX_STACK_LINE(463)
					Dynamic tmp192 = ((Dynamic)(tmp191));		HX_STACK_VAR(tmp192,"tmp192");
					HX_STACK_LINE(463)
					Float tmp193 = (tmp190 - tmp192);		HX_STACK_VAR(tmp193,"tmp193");
					HX_STACK_LINE(463)
					Float tmp194 = ((int)4 * rot->w);		HX_STACK_VAR(tmp194,"tmp194");
					HX_STACK_LINE(463)
					Float tmp195 = (Float(tmp193) / Float(tmp194));		HX_STACK_VAR(tmp195,"tmp195");
					HX_STACK_LINE(463)
					rot->z = tmp195;
				}
				else{
					HX_STACK_LINE(464)
					Float tmp172 = mr->__get((int)0);		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(464)
					Dynamic tmp173 = ((Dynamic)(tmp172));		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(464)
					Float tmp174 = mr->__get((int)5);		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(464)
					Dynamic tmp175 = ((Dynamic)(tmp174));		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(464)
					bool tmp176 = (tmp173 > tmp175);		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(464)
					bool tmp177;		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(464)
					if ((tmp176)){
						HX_STACK_LINE(464)
						Float tmp178 = mr->__get((int)0);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(464)
						Float tmp179 = tmp178;		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(464)
						Dynamic tmp180 = ((Dynamic)(tmp179));		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(464)
						Float tmp181 = mr->__get((int)10);		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(464)
						Float tmp182 = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(464)
						Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
						HX_STACK_LINE(464)
						tmp177 = (tmp180 > tmp183);
					}
					else{
						HX_STACK_LINE(464)
						tmp177 = false;
					}
					HX_STACK_LINE(464)
					if ((tmp177)){
						HX_STACK_LINE(465)
						Float tmp178 = mr->__get((int)0);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(465)
						Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(465)
						Float tmp180 = ((int)1 + tmp179);		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(465)
						Float tmp181 = mr->__get((int)5);		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(465)
						Dynamic tmp182 = ((Dynamic)(tmp181));		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(465)
						Float tmp183 = (tmp180 - tmp182);		HX_STACK_VAR(tmp183,"tmp183");
						HX_STACK_LINE(465)
						Float tmp184 = mr->__get((int)10);		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(465)
						Dynamic tmp185 = ((Dynamic)(tmp184));		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(465)
						Float tmp186 = (tmp183 - tmp185);		HX_STACK_VAR(tmp186,"tmp186");
						HX_STACK_LINE(465)
						Float tmp187 = ::Math_obj::sqrt(tmp186);		HX_STACK_VAR(tmp187,"tmp187");
						HX_STACK_LINE(465)
						Float tmp188 = (Float(tmp187) / Float((int)2));		HX_STACK_VAR(tmp188,"tmp188");
						HX_STACK_LINE(465)
						rot->x = tmp188;
						HX_STACK_LINE(467)
						Float tmp189 = mr->__get((int)6);		HX_STACK_VAR(tmp189,"tmp189");
						HX_STACK_LINE(467)
						Dynamic tmp190 = ((Dynamic)(tmp189));		HX_STACK_VAR(tmp190,"tmp190");
						HX_STACK_LINE(467)
						Float tmp191 = mr->__get((int)9);		HX_STACK_VAR(tmp191,"tmp191");
						HX_STACK_LINE(467)
						Dynamic tmp192 = ((Dynamic)(tmp191));		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(467)
						Float tmp193 = (tmp190 - tmp192);		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(467)
						Float tmp194 = ((int)4 * rot->x);		HX_STACK_VAR(tmp194,"tmp194");
						HX_STACK_LINE(467)
						Float tmp195 = (Float(tmp193) / Float(tmp194));		HX_STACK_VAR(tmp195,"tmp195");
						HX_STACK_LINE(467)
						rot->w = tmp195;
						HX_STACK_LINE(468)
						Float tmp196 = mr->__get((int)1);		HX_STACK_VAR(tmp196,"tmp196");
						HX_STACK_LINE(468)
						Dynamic tmp197 = ((Dynamic)(tmp196));		HX_STACK_VAR(tmp197,"tmp197");
						HX_STACK_LINE(468)
						Float tmp198 = mr->__get((int)4);		HX_STACK_VAR(tmp198,"tmp198");
						HX_STACK_LINE(468)
						Dynamic tmp199 = ((Dynamic)(tmp198));		HX_STACK_VAR(tmp199,"tmp199");
						HX_STACK_LINE(468)
						Float tmp200 = (tmp197 + tmp199);		HX_STACK_VAR(tmp200,"tmp200");
						HX_STACK_LINE(468)
						Float tmp201 = ((int)4 * rot->x);		HX_STACK_VAR(tmp201,"tmp201");
						HX_STACK_LINE(468)
						Float tmp202 = (Float(tmp200) / Float(tmp201));		HX_STACK_VAR(tmp202,"tmp202");
						HX_STACK_LINE(468)
						rot->y = tmp202;
						HX_STACK_LINE(469)
						Float tmp203 = mr->__get((int)8);		HX_STACK_VAR(tmp203,"tmp203");
						HX_STACK_LINE(469)
						Dynamic tmp204 = ((Dynamic)(tmp203));		HX_STACK_VAR(tmp204,"tmp204");
						HX_STACK_LINE(469)
						Float tmp205 = mr->__get((int)2);		HX_STACK_VAR(tmp205,"tmp205");
						HX_STACK_LINE(469)
						Dynamic tmp206 = ((Dynamic)(tmp205));		HX_STACK_VAR(tmp206,"tmp206");
						HX_STACK_LINE(469)
						Float tmp207 = (tmp204 + tmp206);		HX_STACK_VAR(tmp207,"tmp207");
						HX_STACK_LINE(469)
						Float tmp208 = ((int)4 * rot->x);		HX_STACK_VAR(tmp208,"tmp208");
						HX_STACK_LINE(469)
						Float tmp209 = (Float(tmp207) / Float(tmp208));		HX_STACK_VAR(tmp209,"tmp209");
						HX_STACK_LINE(469)
						rot->z = tmp209;
					}
					else{
						HX_STACK_LINE(470)
						Float tmp178 = mr->__get((int)5);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(470)
						Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(470)
						Float tmp180 = mr->__get((int)10);		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(470)
						Dynamic tmp181 = ((Dynamic)(tmp180));		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(470)
						bool tmp182 = (tmp179 > tmp181);		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(470)
						if ((tmp182)){
							HX_STACK_LINE(471)
							Float tmp183 = mr->__get((int)5);		HX_STACK_VAR(tmp183,"tmp183");
							HX_STACK_LINE(471)
							Dynamic tmp184 = ((Dynamic)(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
							HX_STACK_LINE(471)
							Float tmp185 = ((int)1 + tmp184);		HX_STACK_VAR(tmp185,"tmp185");
							HX_STACK_LINE(471)
							Float tmp186 = mr->__get((int)0);		HX_STACK_VAR(tmp186,"tmp186");
							HX_STACK_LINE(471)
							Dynamic tmp187 = ((Dynamic)(tmp186));		HX_STACK_VAR(tmp187,"tmp187");
							HX_STACK_LINE(471)
							Float tmp188 = (tmp185 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
							HX_STACK_LINE(471)
							Float tmp189 = mr->__get((int)10);		HX_STACK_VAR(tmp189,"tmp189");
							HX_STACK_LINE(471)
							Dynamic tmp190 = ((Dynamic)(tmp189));		HX_STACK_VAR(tmp190,"tmp190");
							HX_STACK_LINE(471)
							Float tmp191 = (tmp188 - tmp190);		HX_STACK_VAR(tmp191,"tmp191");
							HX_STACK_LINE(471)
							Float tmp192 = ::Math_obj::sqrt(tmp191);		HX_STACK_VAR(tmp192,"tmp192");
							HX_STACK_LINE(471)
							Float tmp193 = (Float(tmp192) / Float((int)2));		HX_STACK_VAR(tmp193,"tmp193");
							HX_STACK_LINE(471)
							rot->y = tmp193;
							HX_STACK_LINE(473)
							Float tmp194 = mr->__get((int)1);		HX_STACK_VAR(tmp194,"tmp194");
							HX_STACK_LINE(473)
							Dynamic tmp195 = ((Dynamic)(tmp194));		HX_STACK_VAR(tmp195,"tmp195");
							HX_STACK_LINE(473)
							Float tmp196 = mr->__get((int)4);		HX_STACK_VAR(tmp196,"tmp196");
							HX_STACK_LINE(473)
							Dynamic tmp197 = ((Dynamic)(tmp196));		HX_STACK_VAR(tmp197,"tmp197");
							HX_STACK_LINE(473)
							Float tmp198 = (tmp195 + tmp197);		HX_STACK_VAR(tmp198,"tmp198");
							HX_STACK_LINE(473)
							Float tmp199 = ((int)4 * rot->y);		HX_STACK_VAR(tmp199,"tmp199");
							HX_STACK_LINE(473)
							Float tmp200 = (Float(tmp198) / Float(tmp199));		HX_STACK_VAR(tmp200,"tmp200");
							HX_STACK_LINE(473)
							rot->x = tmp200;
							HX_STACK_LINE(474)
							Float tmp201 = mr->__get((int)8);		HX_STACK_VAR(tmp201,"tmp201");
							HX_STACK_LINE(474)
							Dynamic tmp202 = ((Dynamic)(tmp201));		HX_STACK_VAR(tmp202,"tmp202");
							HX_STACK_LINE(474)
							Float tmp203 = mr->__get((int)2);		HX_STACK_VAR(tmp203,"tmp203");
							HX_STACK_LINE(474)
							Dynamic tmp204 = ((Dynamic)(tmp203));		HX_STACK_VAR(tmp204,"tmp204");
							HX_STACK_LINE(474)
							Float tmp205 = (tmp202 - tmp204);		HX_STACK_VAR(tmp205,"tmp205");
							HX_STACK_LINE(474)
							Float tmp206 = ((int)4 * rot->y);		HX_STACK_VAR(tmp206,"tmp206");
							HX_STACK_LINE(474)
							Float tmp207 = (Float(tmp205) / Float(tmp206));		HX_STACK_VAR(tmp207,"tmp207");
							HX_STACK_LINE(474)
							rot->w = tmp207;
							HX_STACK_LINE(475)
							Float tmp208 = mr->__get((int)6);		HX_STACK_VAR(tmp208,"tmp208");
							HX_STACK_LINE(475)
							Dynamic tmp209 = ((Dynamic)(tmp208));		HX_STACK_VAR(tmp209,"tmp209");
							HX_STACK_LINE(475)
							Float tmp210 = mr->__get((int)9);		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(475)
							Dynamic tmp211 = ((Dynamic)(tmp210));		HX_STACK_VAR(tmp211,"tmp211");
							HX_STACK_LINE(475)
							Float tmp212 = (tmp209 + tmp211);		HX_STACK_VAR(tmp212,"tmp212");
							HX_STACK_LINE(475)
							Float tmp213 = ((int)4 * rot->y);		HX_STACK_VAR(tmp213,"tmp213");
							HX_STACK_LINE(475)
							Float tmp214 = (Float(tmp212) / Float(tmp213));		HX_STACK_VAR(tmp214,"tmp214");
							HX_STACK_LINE(475)
							rot->z = tmp214;
						}
						else{
							HX_STACK_LINE(477)
							Float tmp183 = mr->__get((int)10);		HX_STACK_VAR(tmp183,"tmp183");
							HX_STACK_LINE(477)
							Dynamic tmp184 = ((Dynamic)(tmp183));		HX_STACK_VAR(tmp184,"tmp184");
							HX_STACK_LINE(477)
							Float tmp185 = ((int)1 + tmp184);		HX_STACK_VAR(tmp185,"tmp185");
							HX_STACK_LINE(477)
							Float tmp186 = mr->__get((int)0);		HX_STACK_VAR(tmp186,"tmp186");
							HX_STACK_LINE(477)
							Dynamic tmp187 = ((Dynamic)(tmp186));		HX_STACK_VAR(tmp187,"tmp187");
							HX_STACK_LINE(477)
							Float tmp188 = (tmp185 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
							HX_STACK_LINE(477)
							Float tmp189 = mr->__get((int)5);		HX_STACK_VAR(tmp189,"tmp189");
							HX_STACK_LINE(477)
							Dynamic tmp190 = ((Dynamic)(tmp189));		HX_STACK_VAR(tmp190,"tmp190");
							HX_STACK_LINE(477)
							Float tmp191 = (tmp188 - tmp190);		HX_STACK_VAR(tmp191,"tmp191");
							HX_STACK_LINE(477)
							Float tmp192 = ::Math_obj::sqrt(tmp191);		HX_STACK_VAR(tmp192,"tmp192");
							HX_STACK_LINE(477)
							Float tmp193 = (Float(tmp192) / Float((int)2));		HX_STACK_VAR(tmp193,"tmp193");
							HX_STACK_LINE(477)
							rot->z = tmp193;
							HX_STACK_LINE(479)
							Float tmp194 = mr->__get((int)8);		HX_STACK_VAR(tmp194,"tmp194");
							HX_STACK_LINE(479)
							Dynamic tmp195 = ((Dynamic)(tmp194));		HX_STACK_VAR(tmp195,"tmp195");
							HX_STACK_LINE(479)
							Float tmp196 = mr->__get((int)2);		HX_STACK_VAR(tmp196,"tmp196");
							HX_STACK_LINE(479)
							Dynamic tmp197 = ((Dynamic)(tmp196));		HX_STACK_VAR(tmp197,"tmp197");
							HX_STACK_LINE(479)
							Float tmp198 = (tmp195 + tmp197);		HX_STACK_VAR(tmp198,"tmp198");
							HX_STACK_LINE(479)
							Float tmp199 = ((int)4 * rot->z);		HX_STACK_VAR(tmp199,"tmp199");
							HX_STACK_LINE(479)
							Float tmp200 = (Float(tmp198) / Float(tmp199));		HX_STACK_VAR(tmp200,"tmp200");
							HX_STACK_LINE(479)
							rot->x = tmp200;
							HX_STACK_LINE(480)
							Float tmp201 = mr->__get((int)6);		HX_STACK_VAR(tmp201,"tmp201");
							HX_STACK_LINE(480)
							Dynamic tmp202 = ((Dynamic)(tmp201));		HX_STACK_VAR(tmp202,"tmp202");
							HX_STACK_LINE(480)
							Float tmp203 = mr->__get((int)9);		HX_STACK_VAR(tmp203,"tmp203");
							HX_STACK_LINE(480)
							Dynamic tmp204 = ((Dynamic)(tmp203));		HX_STACK_VAR(tmp204,"tmp204");
							HX_STACK_LINE(480)
							Float tmp205 = (tmp202 + tmp204);		HX_STACK_VAR(tmp205,"tmp205");
							HX_STACK_LINE(480)
							Float tmp206 = ((int)4 * rot->z);		HX_STACK_VAR(tmp206,"tmp206");
							HX_STACK_LINE(480)
							Float tmp207 = (Float(tmp205) / Float(tmp206));		HX_STACK_VAR(tmp207,"tmp207");
							HX_STACK_LINE(480)
							rot->y = tmp207;
							HX_STACK_LINE(481)
							Float tmp208 = mr->__get((int)1);		HX_STACK_VAR(tmp208,"tmp208");
							HX_STACK_LINE(481)
							Dynamic tmp209 = ((Dynamic)(tmp208));		HX_STACK_VAR(tmp209,"tmp209");
							HX_STACK_LINE(481)
							Float tmp210 = mr->__get((int)4);		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(481)
							Dynamic tmp211 = ((Dynamic)(tmp210));		HX_STACK_VAR(tmp211,"tmp211");
							HX_STACK_LINE(481)
							Float tmp212 = (tmp209 - tmp211);		HX_STACK_VAR(tmp212,"tmp212");
							HX_STACK_LINE(481)
							Float tmp213 = ((int)4 * rot->z);		HX_STACK_VAR(tmp213,"tmp213");
							HX_STACK_LINE(481)
							Float tmp214 = (Float(tmp212) / Float(tmp213));		HX_STACK_VAR(tmp214,"tmp214");
							HX_STACK_LINE(481)
							rot->w = tmp214;
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(485)
				Float tmp163 = mr->__get((int)2);		HX_STACK_VAR(tmp163,"tmp163");
				HX_STACK_LINE(485)
				Dynamic tmp164 = ((Dynamic)(tmp163));		HX_STACK_VAR(tmp164,"tmp164");
				HX_STACK_LINE(485)
				Float tmp165 = -(tmp164);		HX_STACK_VAR(tmp165,"tmp165");
				HX_STACK_LINE(485)
				Float tmp166 = ::Math_obj::asin(tmp165);		HX_STACK_VAR(tmp166,"tmp166");
				HX_STACK_LINE(485)
				rot->y = tmp166;
				HX_STACK_LINE(487)
				Float tmp167 = mr->__get((int)2);		HX_STACK_VAR(tmp167,"tmp167");
				HX_STACK_LINE(487)
				Dynamic tmp168 = ((Dynamic)(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
				HX_STACK_LINE(487)
				bool tmp169 = (tmp168 != (int)1);		HX_STACK_VAR(tmp169,"tmp169");
				HX_STACK_LINE(487)
				bool tmp170;		HX_STACK_VAR(tmp170,"tmp170");
				HX_STACK_LINE(487)
				if ((tmp169)){
					HX_STACK_LINE(487)
					Float tmp171 = mr->__get((int)2);		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(487)
					Float tmp172 = tmp171;		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(487)
					Dynamic tmp173 = ((Dynamic)(tmp172));		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(487)
					tmp170 = (tmp173 != (int)-1);
				}
				else{
					HX_STACK_LINE(487)
					tmp170 = false;
				}
				HX_STACK_LINE(487)
				if ((tmp170)){
					HX_STACK_LINE(488)
					Float tmp171 = mr->__get((int)6);		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(488)
					Dynamic tmp172 = ((Dynamic)(tmp171));		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(488)
					Float tmp173 = mr->__get((int)10);		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(488)
					Dynamic tmp174 = ((Dynamic)(tmp173));		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(488)
					Float tmp175 = ::Math_obj::atan2(tmp172,tmp174);		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(488)
					rot->x = tmp175;
					HX_STACK_LINE(489)
					Float tmp176 = mr->__get((int)1);		HX_STACK_VAR(tmp176,"tmp176");
					HX_STACK_LINE(489)
					Dynamic tmp177 = ((Dynamic)(tmp176));		HX_STACK_VAR(tmp177,"tmp177");
					HX_STACK_LINE(489)
					Float tmp178 = mr->__get((int)0);		HX_STACK_VAR(tmp178,"tmp178");
					HX_STACK_LINE(489)
					Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
					HX_STACK_LINE(489)
					Float tmp180 = ::Math_obj::atan2(tmp177,tmp179);		HX_STACK_VAR(tmp180,"tmp180");
					HX_STACK_LINE(489)
					rot->z = tmp180;
				}
				else{
					HX_STACK_LINE(491)
					rot->z = (int)0;
					HX_STACK_LINE(492)
					Float tmp171 = mr->__get((int)4);		HX_STACK_VAR(tmp171,"tmp171");
					HX_STACK_LINE(492)
					Dynamic tmp172 = ((Dynamic)(tmp171));		HX_STACK_VAR(tmp172,"tmp172");
					HX_STACK_LINE(492)
					Float tmp173 = mr->__get((int)5);		HX_STACK_VAR(tmp173,"tmp173");
					HX_STACK_LINE(492)
					Dynamic tmp174 = ((Dynamic)(tmp173));		HX_STACK_VAR(tmp174,"tmp174");
					HX_STACK_LINE(492)
					Float tmp175 = ::Math_obj::atan2(tmp172,tmp174);		HX_STACK_VAR(tmp175,"tmp175");
					HX_STACK_LINE(492)
					rot->x = tmp175;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(496)
	::openfl::geom::Vector3D tmp163 = pos;		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(496)
	vec->push(tmp163);
	HX_STACK_LINE(497)
	::openfl::geom::Vector3D tmp164 = rot;		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(497)
	vec->push(tmp164);
	HX_STACK_LINE(498)
	::openfl::geom::Vector3D tmp165 = scale;		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(498)
	vec->push(tmp165);
	HX_STACK_LINE(500)
	Array< ::Dynamic > tmp166 = vec;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(500)
	return tmp166;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,decompose,return )

::openfl::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","deltaTransformVector",0x0285cbbf,"openfl.geom.Matrix3D.deltaTransformVector","openfl/geom/Matrix3D.hx",505,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(507)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(507)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(507)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(510)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(510)
	Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(510)
	Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(510)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(510)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(510)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(510)
	Float tmp7 = tmp6->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(510)
	Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(510)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(510)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(510)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(510)
	Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(510)
	Float tmp13 = tmp12->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(510)
	Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(510)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(510)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(510)
	Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(510)
	Float tmp18 = tmp17->__get((int)3);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(510)
	Dynamic tmp19 = ((Dynamic)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(510)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(511)
	Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(511)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(511)
	Float tmp23 = tmp22->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(511)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(511)
	Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(511)
	Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(511)
	Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(511)
	Float tmp28 = tmp27->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(511)
	Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(511)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(511)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(511)
	Float tmp32 = z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(511)
	Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(511)
	Float tmp34 = tmp33->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(511)
	Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(511)
	Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(511)
	Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(511)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(511)
	Float tmp39 = tmp38->__get((int)7);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(511)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(511)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(512)
	Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(512)
	Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(512)
	Float tmp44 = tmp43->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(512)
	Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(512)
	Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(512)
	Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(512)
	Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(512)
	Float tmp49 = tmp48->__get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(512)
	Dynamic tmp50 = ((Dynamic)(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(512)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(512)
	Float tmp52 = (tmp46 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(512)
	Float tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(512)
	Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(512)
	Float tmp55 = tmp54->__get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(512)
	Dynamic tmp56 = ((Dynamic)(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(512)
	Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(512)
	Float tmp58 = (tmp52 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(512)
	Array< Float > tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(512)
	Float tmp60 = tmp59->__get((int)11);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(512)
	Dynamic tmp61 = ((Dynamic)(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(512)
	Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(509)
	::openfl::geom::Vector3D tmp63 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,(int)0);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(509)
	return tmp63;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Void Matrix3D_obj::identity( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","identity",0xd35ee2c6,"openfl.geom.Matrix3D.identity","openfl/geom/Matrix3D.hx",520,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(520)
		this->rawData = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

Void Matrix3D_obj::interpolateTo( ::openfl::geom::Matrix3D toMat,Float percent){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","interpolateTo",0x74c2e614,"openfl.geom.Matrix3D.interpolateTo","openfl/geom/Matrix3D.hx",542,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(542)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(542)
		while((true)){
			HX_STACK_LINE(542)
			bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(542)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(542)
			if ((tmp1)){
				HX_STACK_LINE(542)
				break;
			}
			HX_STACK_LINE(542)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(542)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(544)
			Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(544)
			Array< Float > tmp4 = this->rawData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(544)
			Float tmp5 = tmp4->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(544)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			Float tmp7 = toMat->rawData->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			Array< Float > tmp9 = this->rawData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			Float tmp10 = tmp9->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(544)
			Float tmp13 = percent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(544)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(544)
			Float tmp15 = (tmp6 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(544)
			Float tmp16 = tmp3[i] = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(544)
			tmp16;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

bool Matrix3D_obj::invert( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","invert",0x5820929e,"openfl.geom.Matrix3D.invert","openfl/geom/Matrix3D.hx",557,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(559)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(559)
	Float tmp1 = tmp->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(559)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(559)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(559)
	Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(559)
	Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(559)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(559)
	Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(559)
	Float tmp8 = tmp7->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(559)
	Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(559)
	Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(559)
	Float tmp11 = tmp10->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(559)
	Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(559)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(559)
	Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(559)
	Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(559)
	Float tmp16 = tmp15->__get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(559)
	Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(559)
	Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(559)
	Float tmp19 = tmp18->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(559)
	Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(559)
	Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(559)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(559)
	Float tmp23 = tmp22->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(559)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(559)
	Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(559)
	Float tmp26 = tmp25->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(559)
	Dynamic tmp27 = ((Dynamic)(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(559)
	Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(559)
	Float tmp29 = (tmp21 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(559)
	Float tmp30 = (tmp14 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(559)
	Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(559)
	Float tmp32 = tmp31->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(559)
	Dynamic tmp33 = ((Dynamic)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(559)
	Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(559)
	Float tmp35 = tmp34->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(559)
	Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(559)
	Float tmp37 = (tmp33 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(559)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(559)
	Float tmp39 = tmp38->__get((int)8);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(559)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(559)
	Array< Float > tmp41 = this->rawData;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(559)
	Float tmp42 = tmp41->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(559)
	Dynamic tmp43 = ((Dynamic)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(559)
	Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(559)
	Float tmp45 = (tmp37 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(559)
	Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(559)
	Float tmp47 = tmp46->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(559)
	Dynamic tmp48 = ((Dynamic)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(559)
	Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(559)
	Float tmp50 = tmp49->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(559)
	Dynamic tmp51 = ((Dynamic)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(559)
	Float tmp52 = (tmp48 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(559)
	Array< Float > tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(559)
	Float tmp54 = tmp53->__get((int)14);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(559)
	Dynamic tmp55 = ((Dynamic)(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(559)
	Array< Float > tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(559)
	Float tmp57 = tmp56->__get((int)7);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(559)
	Dynamic tmp58 = ((Dynamic)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(559)
	Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(559)
	Float tmp60 = (tmp52 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(559)
	Float tmp61 = (tmp45 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(559)
	Float tmp62 = (tmp30 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(559)
	Array< Float > tmp63 = this->rawData;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(559)
	Float tmp64 = tmp63->__get((int)0);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(559)
	Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(559)
	Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(559)
	Float tmp67 = tmp66->__get((int)13);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(559)
	Dynamic tmp68 = ((Dynamic)(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(559)
	Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(559)
	Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(559)
	Float tmp71 = tmp70->__get((int)12);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(559)
	Dynamic tmp72 = ((Dynamic)(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(559)
	Array< Float > tmp73 = this->rawData;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(559)
	Float tmp74 = tmp73->__get((int)1);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(559)
	Dynamic tmp75 = ((Dynamic)(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(559)
	Float tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(559)
	Float tmp77 = (tmp69 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(559)
	Array< Float > tmp78 = this->rawData;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(559)
	Float tmp79 = tmp78->__get((int)6);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(559)
	Dynamic tmp80 = ((Dynamic)(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(559)
	Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(559)
	Float tmp82 = tmp81->__get((int)11);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(559)
	Dynamic tmp83 = ((Dynamic)(tmp82));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(559)
	Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(559)
	Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(559)
	Float tmp86 = tmp85->__get((int)10);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(559)
	Dynamic tmp87 = ((Dynamic)(tmp86));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(559)
	Array< Float > tmp88 = this->rawData;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(559)
	Float tmp89 = tmp88->__get((int)7);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(559)
	Dynamic tmp90 = ((Dynamic)(tmp89));		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(559)
	Float tmp91 = (tmp87 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(559)
	Float tmp92 = (tmp84 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(559)
	Float tmp93 = (tmp77 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(559)
	Float tmp94 = (tmp62 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(559)
	Array< Float > tmp95 = this->rawData;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(559)
	Float tmp96 = tmp95->__get((int)4);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(559)
	Dynamic tmp97 = ((Dynamic)(tmp96));		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(559)
	Array< Float > tmp98 = this->rawData;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(559)
	Float tmp99 = tmp98->__get((int)9);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(559)
	Dynamic tmp100 = ((Dynamic)(tmp99));		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(559)
	Float tmp101 = (tmp97 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(559)
	Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(559)
	Float tmp103 = tmp102->__get((int)8);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(559)
	Dynamic tmp104 = ((Dynamic)(tmp103));		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(559)
	Array< Float > tmp105 = this->rawData;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(559)
	Float tmp106 = tmp105->__get((int)5);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(559)
	Dynamic tmp107 = ((Dynamic)(tmp106));		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(559)
	Float tmp108 = (tmp104 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(559)
	Float tmp109 = (tmp101 - tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(559)
	Array< Float > tmp110 = this->rawData;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(559)
	Float tmp111 = tmp110->__get((int)2);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(559)
	Dynamic tmp112 = ((Dynamic)(tmp111));		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(559)
	Array< Float > tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(559)
	Float tmp114 = tmp113->__get((int)15);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(559)
	Dynamic tmp115 = ((Dynamic)(tmp114));		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(559)
	Float tmp116 = (tmp112 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(559)
	Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(559)
	Float tmp118 = tmp117->__get((int)14);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(559)
	Dynamic tmp119 = ((Dynamic)(tmp118));		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(559)
	Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(559)
	Float tmp121 = tmp120->__get((int)3);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(559)
	Dynamic tmp122 = ((Dynamic)(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(559)
	Float tmp123 = (tmp119 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(559)
	Float tmp124 = (tmp116 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(559)
	Float tmp125 = (tmp109 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(559)
	Float tmp126 = (tmp94 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(559)
	Array< Float > tmp127 = this->rawData;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(559)
	Float tmp128 = tmp127->__get((int)4);		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(559)
	Dynamic tmp129 = ((Dynamic)(tmp128));		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(559)
	Array< Float > tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(559)
	Float tmp131 = tmp130->__get((int)13);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(559)
	Dynamic tmp132 = ((Dynamic)(tmp131));		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(559)
	Float tmp133 = (tmp129 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(559)
	Array< Float > tmp134 = this->rawData;		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(559)
	Float tmp135 = tmp134->__get((int)12);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(559)
	Dynamic tmp136 = ((Dynamic)(tmp135));		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(559)
	Array< Float > tmp137 = this->rawData;		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(559)
	Float tmp138 = tmp137->__get((int)5);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(559)
	Dynamic tmp139 = ((Dynamic)(tmp138));		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(559)
	Float tmp140 = (tmp136 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(559)
	Float tmp141 = (tmp133 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(559)
	Array< Float > tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(559)
	Float tmp143 = tmp142->__get((int)2);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(559)
	Dynamic tmp144 = ((Dynamic)(tmp143));		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(559)
	Array< Float > tmp145 = this->rawData;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(559)
	Float tmp146 = tmp145->__get((int)11);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(559)
	Dynamic tmp147 = ((Dynamic)(tmp146));		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(559)
	Float tmp148 = (tmp144 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(559)
	Array< Float > tmp149 = this->rawData;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(559)
	Float tmp150 = tmp149->__get((int)10);		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(559)
	Dynamic tmp151 = ((Dynamic)(tmp150));		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(559)
	Array< Float > tmp152 = this->rawData;		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(559)
	Float tmp153 = tmp152->__get((int)3);		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(559)
	Dynamic tmp154 = ((Dynamic)(tmp153));		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(559)
	Float tmp155 = (tmp151 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(559)
	Float tmp156 = (tmp148 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(559)
	Float tmp157 = (tmp141 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(559)
	Float tmp158 = (tmp126 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(559)
	Array< Float > tmp159 = this->rawData;		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(559)
	Float tmp160 = tmp159->__get((int)8);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(559)
	Dynamic tmp161 = ((Dynamic)(tmp160));		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(559)
	Array< Float > tmp162 = this->rawData;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(559)
	Float tmp163 = tmp162->__get((int)13);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(559)
	Dynamic tmp164 = ((Dynamic)(tmp163));		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(559)
	Float tmp165 = (tmp161 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(559)
	Array< Float > tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(559)
	Float tmp167 = tmp166->__get((int)12);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(559)
	Dynamic tmp168 = ((Dynamic)(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(559)
	Array< Float > tmp169 = this->rawData;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(559)
	Float tmp170 = tmp169->__get((int)9);		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(559)
	Dynamic tmp171 = ((Dynamic)(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(559)
	Float tmp172 = (tmp168 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(559)
	Float tmp173 = (tmp165 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(559)
	Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(559)
	Float tmp175 = tmp174->__get((int)2);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(559)
	Dynamic tmp176 = ((Dynamic)(tmp175));		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(559)
	Array< Float > tmp177 = this->rawData;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(559)
	Float tmp178 = tmp177->__get((int)7);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(559)
	Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(559)
	Float tmp180 = (tmp176 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(559)
	Array< Float > tmp181 = this->rawData;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(559)
	Float tmp182 = tmp181->__get((int)6);		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(559)
	Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(559)
	Array< Float > tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(559)
	Float tmp185 = tmp184->__get((int)3);		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(559)
	Dynamic tmp186 = ((Dynamic)(tmp185));		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(559)
	Float tmp187 = (tmp183 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(559)
	Float tmp188 = (tmp180 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(559)
	Float tmp189 = (tmp173 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(559)
	Float tmp190 = (tmp158 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(559)
	Float tmp191 = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(559)
	Float d = tmp191;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(560)
	Float tmp192 = d;		HX_STACK_VAR(tmp192,"tmp192");
	HX_STACK_LINE(560)
	Float tmp193 = ::Math_obj::abs(tmp192);		HX_STACK_VAR(tmp193,"tmp193");
	HX_STACK_LINE(560)
	bool tmp194 = (tmp193 > ((Float)0.00000000001));		HX_STACK_VAR(tmp194,"tmp194");
	HX_STACK_LINE(560)
	bool invertable = tmp194;		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(562)
	bool tmp195 = invertable;		HX_STACK_VAR(tmp195,"tmp195");
	HX_STACK_LINE(562)
	if ((tmp195)){
		HX_STACK_LINE(564)
		Float tmp196 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(564)
		d = tmp196;
		HX_STACK_LINE(566)
		Array< Float > tmp197 = this->rawData;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(566)
		Float tmp198 = tmp197->__get((int)0);		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(566)
		Float m11 = ((Dynamic)(tmp198));		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(566)
		Array< Float > tmp199 = this->rawData;		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(566)
		Float tmp200 = tmp199->__get((int)4);		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(566)
		Float m21 = ((Dynamic)(tmp200));		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(566)
		Array< Float > tmp201 = this->rawData;		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(566)
		Float tmp202 = tmp201->__get((int)8);		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(566)
		Float m31 = ((Dynamic)(tmp202));		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(566)
		Array< Float > tmp203 = this->rawData;		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(566)
		Float tmp204 = tmp203->__get((int)12);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(566)
		Float m41 = ((Dynamic)(tmp204));		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(567)
		Array< Float > tmp205 = this->rawData;		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(567)
		Float tmp206 = tmp205->__get((int)1);		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(567)
		Float m12 = ((Dynamic)(tmp206));		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(567)
		Array< Float > tmp207 = this->rawData;		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(567)
		Float tmp208 = tmp207->__get((int)5);		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(567)
		Float m22 = ((Dynamic)(tmp208));		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(567)
		Array< Float > tmp209 = this->rawData;		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(567)
		Float tmp210 = tmp209->__get((int)9);		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(567)
		Float m32 = ((Dynamic)(tmp210));		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(567)
		Array< Float > tmp211 = this->rawData;		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(567)
		Float tmp212 = tmp211->__get((int)13);		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(567)
		Float m42 = ((Dynamic)(tmp212));		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(568)
		Array< Float > tmp213 = this->rawData;		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(568)
		Float tmp214 = tmp213->__get((int)2);		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(568)
		Float m13 = ((Dynamic)(tmp214));		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(568)
		Array< Float > tmp215 = this->rawData;		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(568)
		Float tmp216 = tmp215->__get((int)6);		HX_STACK_VAR(tmp216,"tmp216");
		HX_STACK_LINE(568)
		Float m23 = ((Dynamic)(tmp216));		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(568)
		Array< Float > tmp217 = this->rawData;		HX_STACK_VAR(tmp217,"tmp217");
		HX_STACK_LINE(568)
		Float tmp218 = tmp217->__get((int)10);		HX_STACK_VAR(tmp218,"tmp218");
		HX_STACK_LINE(568)
		Float m33 = ((Dynamic)(tmp218));		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(568)
		Array< Float > tmp219 = this->rawData;		HX_STACK_VAR(tmp219,"tmp219");
		HX_STACK_LINE(568)
		Float tmp220 = tmp219->__get((int)14);		HX_STACK_VAR(tmp220,"tmp220");
		HX_STACK_LINE(568)
		Float m43 = ((Dynamic)(tmp220));		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(569)
		Array< Float > tmp221 = this->rawData;		HX_STACK_VAR(tmp221,"tmp221");
		HX_STACK_LINE(569)
		Float tmp222 = tmp221->__get((int)3);		HX_STACK_VAR(tmp222,"tmp222");
		HX_STACK_LINE(569)
		Float m14 = ((Dynamic)(tmp222));		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(569)
		Array< Float > tmp223 = this->rawData;		HX_STACK_VAR(tmp223,"tmp223");
		HX_STACK_LINE(569)
		Float tmp224 = tmp223->__get((int)7);		HX_STACK_VAR(tmp224,"tmp224");
		HX_STACK_LINE(569)
		Float m24 = ((Dynamic)(tmp224));		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(569)
		Array< Float > tmp225 = this->rawData;		HX_STACK_VAR(tmp225,"tmp225");
		HX_STACK_LINE(569)
		Float tmp226 = tmp225->__get((int)11);		HX_STACK_VAR(tmp226,"tmp226");
		HX_STACK_LINE(569)
		Float m34 = ((Dynamic)(tmp226));		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(569)
		Array< Float > tmp227 = this->rawData;		HX_STACK_VAR(tmp227,"tmp227");
		HX_STACK_LINE(569)
		Float tmp228 = tmp227->__get((int)15);		HX_STACK_VAR(tmp228,"tmp228");
		HX_STACK_LINE(569)
		Float m44 = ((Dynamic)(tmp228));		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(571)
		Array< Float > tmp229 = this->rawData;		HX_STACK_VAR(tmp229,"tmp229");
		HX_STACK_LINE(571)
		Float tmp230 = d;		HX_STACK_VAR(tmp230,"tmp230");
		HX_STACK_LINE(571)
		Float tmp231 = m22;		HX_STACK_VAR(tmp231,"tmp231");
		HX_STACK_LINE(571)
		Float tmp232 = (m33 * m44);		HX_STACK_VAR(tmp232,"tmp232");
		HX_STACK_LINE(571)
		Float tmp233 = (m43 * m34);		HX_STACK_VAR(tmp233,"tmp233");
		HX_STACK_LINE(571)
		Float tmp234 = (tmp232 - tmp233);		HX_STACK_VAR(tmp234,"tmp234");
		HX_STACK_LINE(571)
		Float tmp235 = (tmp231 * tmp234);		HX_STACK_VAR(tmp235,"tmp235");
		HX_STACK_LINE(571)
		Float tmp236 = m32;		HX_STACK_VAR(tmp236,"tmp236");
		HX_STACK_LINE(571)
		Float tmp237 = (m23 * m44);		HX_STACK_VAR(tmp237,"tmp237");
		HX_STACK_LINE(571)
		Float tmp238 = (m43 * m24);		HX_STACK_VAR(tmp238,"tmp238");
		HX_STACK_LINE(571)
		Float tmp239 = (tmp237 - tmp238);		HX_STACK_VAR(tmp239,"tmp239");
		HX_STACK_LINE(571)
		Float tmp240 = (tmp236 * tmp239);		HX_STACK_VAR(tmp240,"tmp240");
		HX_STACK_LINE(571)
		Float tmp241 = (tmp235 - tmp240);		HX_STACK_VAR(tmp241,"tmp241");
		HX_STACK_LINE(571)
		Float tmp242 = m42;		HX_STACK_VAR(tmp242,"tmp242");
		HX_STACK_LINE(571)
		Float tmp243 = (m23 * m34);		HX_STACK_VAR(tmp243,"tmp243");
		HX_STACK_LINE(571)
		Float tmp244 = (m33 * m24);		HX_STACK_VAR(tmp244,"tmp244");
		HX_STACK_LINE(571)
		Float tmp245 = (tmp243 - tmp244);		HX_STACK_VAR(tmp245,"tmp245");
		HX_STACK_LINE(571)
		Float tmp246 = (tmp242 * tmp245);		HX_STACK_VAR(tmp246,"tmp246");
		HX_STACK_LINE(571)
		Float tmp247 = (tmp241 + tmp246);		HX_STACK_VAR(tmp247,"tmp247");
		HX_STACK_LINE(571)
		Float tmp248 = (tmp230 * tmp247);		HX_STACK_VAR(tmp248,"tmp248");
		HX_STACK_LINE(571)
		Float tmp249 = tmp229[(int)0] = tmp248;		HX_STACK_VAR(tmp249,"tmp249");
		HX_STACK_LINE(571)
		tmp249;
		HX_STACK_LINE(572)
		Array< Float > tmp250 = this->rawData;		HX_STACK_VAR(tmp250,"tmp250");
		HX_STACK_LINE(572)
		Float tmp251 = d;		HX_STACK_VAR(tmp251,"tmp251");
		HX_STACK_LINE(572)
		Float tmp252 = -(tmp251);		HX_STACK_VAR(tmp252,"tmp252");
		HX_STACK_LINE(572)
		Float tmp253 = m12;		HX_STACK_VAR(tmp253,"tmp253");
		HX_STACK_LINE(572)
		Float tmp254 = (m33 * m44);		HX_STACK_VAR(tmp254,"tmp254");
		HX_STACK_LINE(572)
		Float tmp255 = (m43 * m34);		HX_STACK_VAR(tmp255,"tmp255");
		HX_STACK_LINE(572)
		Float tmp256 = (tmp254 - tmp255);		HX_STACK_VAR(tmp256,"tmp256");
		HX_STACK_LINE(572)
		Float tmp257 = (tmp253 * tmp256);		HX_STACK_VAR(tmp257,"tmp257");
		HX_STACK_LINE(572)
		Float tmp258 = m32;		HX_STACK_VAR(tmp258,"tmp258");
		HX_STACK_LINE(572)
		Float tmp259 = (m13 * m44);		HX_STACK_VAR(tmp259,"tmp259");
		HX_STACK_LINE(572)
		Float tmp260 = (m43 * m14);		HX_STACK_VAR(tmp260,"tmp260");
		HX_STACK_LINE(572)
		Float tmp261 = (tmp259 - tmp260);		HX_STACK_VAR(tmp261,"tmp261");
		HX_STACK_LINE(572)
		Float tmp262 = (tmp258 * tmp261);		HX_STACK_VAR(tmp262,"tmp262");
		HX_STACK_LINE(572)
		Float tmp263 = (tmp257 - tmp262);		HX_STACK_VAR(tmp263,"tmp263");
		HX_STACK_LINE(572)
		Float tmp264 = m42;		HX_STACK_VAR(tmp264,"tmp264");
		HX_STACK_LINE(572)
		Float tmp265 = (m13 * m34);		HX_STACK_VAR(tmp265,"tmp265");
		HX_STACK_LINE(572)
		Float tmp266 = (m33 * m14);		HX_STACK_VAR(tmp266,"tmp266");
		HX_STACK_LINE(572)
		Float tmp267 = (tmp265 - tmp266);		HX_STACK_VAR(tmp267,"tmp267");
		HX_STACK_LINE(572)
		Float tmp268 = (tmp264 * tmp267);		HX_STACK_VAR(tmp268,"tmp268");
		HX_STACK_LINE(572)
		Float tmp269 = (tmp263 + tmp268);		HX_STACK_VAR(tmp269,"tmp269");
		HX_STACK_LINE(572)
		Float tmp270 = (tmp252 * tmp269);		HX_STACK_VAR(tmp270,"tmp270");
		HX_STACK_LINE(572)
		Float tmp271 = tmp250[(int)1] = tmp270;		HX_STACK_VAR(tmp271,"tmp271");
		HX_STACK_LINE(572)
		tmp271;
		HX_STACK_LINE(573)
		Array< Float > tmp272 = this->rawData;		HX_STACK_VAR(tmp272,"tmp272");
		HX_STACK_LINE(573)
		Float tmp273 = d;		HX_STACK_VAR(tmp273,"tmp273");
		HX_STACK_LINE(573)
		Float tmp274 = m12;		HX_STACK_VAR(tmp274,"tmp274");
		HX_STACK_LINE(573)
		Float tmp275 = (m23 * m44);		HX_STACK_VAR(tmp275,"tmp275");
		HX_STACK_LINE(573)
		Float tmp276 = (m43 * m24);		HX_STACK_VAR(tmp276,"tmp276");
		HX_STACK_LINE(573)
		Float tmp277 = (tmp275 - tmp276);		HX_STACK_VAR(tmp277,"tmp277");
		HX_STACK_LINE(573)
		Float tmp278 = (tmp274 * tmp277);		HX_STACK_VAR(tmp278,"tmp278");
		HX_STACK_LINE(573)
		Float tmp279 = m22;		HX_STACK_VAR(tmp279,"tmp279");
		HX_STACK_LINE(573)
		Float tmp280 = (m13 * m44);		HX_STACK_VAR(tmp280,"tmp280");
		HX_STACK_LINE(573)
		Float tmp281 = (m43 * m14);		HX_STACK_VAR(tmp281,"tmp281");
		HX_STACK_LINE(573)
		Float tmp282 = (tmp280 - tmp281);		HX_STACK_VAR(tmp282,"tmp282");
		HX_STACK_LINE(573)
		Float tmp283 = (tmp279 * tmp282);		HX_STACK_VAR(tmp283,"tmp283");
		HX_STACK_LINE(573)
		Float tmp284 = (tmp278 - tmp283);		HX_STACK_VAR(tmp284,"tmp284");
		HX_STACK_LINE(573)
		Float tmp285 = m42;		HX_STACK_VAR(tmp285,"tmp285");
		HX_STACK_LINE(573)
		Float tmp286 = (m13 * m24);		HX_STACK_VAR(tmp286,"tmp286");
		HX_STACK_LINE(573)
		Float tmp287 = (m23 * m14);		HX_STACK_VAR(tmp287,"tmp287");
		HX_STACK_LINE(573)
		Float tmp288 = (tmp286 - tmp287);		HX_STACK_VAR(tmp288,"tmp288");
		HX_STACK_LINE(573)
		Float tmp289 = (tmp285 * tmp288);		HX_STACK_VAR(tmp289,"tmp289");
		HX_STACK_LINE(573)
		Float tmp290 = (tmp284 + tmp289);		HX_STACK_VAR(tmp290,"tmp290");
		HX_STACK_LINE(573)
		Float tmp291 = (tmp273 * tmp290);		HX_STACK_VAR(tmp291,"tmp291");
		HX_STACK_LINE(573)
		Float tmp292 = tmp272[(int)2] = tmp291;		HX_STACK_VAR(tmp292,"tmp292");
		HX_STACK_LINE(573)
		tmp292;
		HX_STACK_LINE(574)
		Array< Float > tmp293 = this->rawData;		HX_STACK_VAR(tmp293,"tmp293");
		HX_STACK_LINE(574)
		Float tmp294 = d;		HX_STACK_VAR(tmp294,"tmp294");
		HX_STACK_LINE(574)
		Float tmp295 = -(tmp294);		HX_STACK_VAR(tmp295,"tmp295");
		HX_STACK_LINE(574)
		Float tmp296 = m12;		HX_STACK_VAR(tmp296,"tmp296");
		HX_STACK_LINE(574)
		Float tmp297 = (m23 * m34);		HX_STACK_VAR(tmp297,"tmp297");
		HX_STACK_LINE(574)
		Float tmp298 = (m33 * m24);		HX_STACK_VAR(tmp298,"tmp298");
		HX_STACK_LINE(574)
		Float tmp299 = (tmp297 - tmp298);		HX_STACK_VAR(tmp299,"tmp299");
		HX_STACK_LINE(574)
		Float tmp300 = (tmp296 * tmp299);		HX_STACK_VAR(tmp300,"tmp300");
		HX_STACK_LINE(574)
		Float tmp301 = m22;		HX_STACK_VAR(tmp301,"tmp301");
		HX_STACK_LINE(574)
		Float tmp302 = (m13 * m34);		HX_STACK_VAR(tmp302,"tmp302");
		HX_STACK_LINE(574)
		Float tmp303 = (m33 * m14);		HX_STACK_VAR(tmp303,"tmp303");
		HX_STACK_LINE(574)
		Float tmp304 = (tmp302 - tmp303);		HX_STACK_VAR(tmp304,"tmp304");
		HX_STACK_LINE(574)
		Float tmp305 = (tmp301 * tmp304);		HX_STACK_VAR(tmp305,"tmp305");
		HX_STACK_LINE(574)
		Float tmp306 = (tmp300 - tmp305);		HX_STACK_VAR(tmp306,"tmp306");
		HX_STACK_LINE(574)
		Float tmp307 = m32;		HX_STACK_VAR(tmp307,"tmp307");
		HX_STACK_LINE(574)
		Float tmp308 = (m13 * m24);		HX_STACK_VAR(tmp308,"tmp308");
		HX_STACK_LINE(574)
		Float tmp309 = (m23 * m14);		HX_STACK_VAR(tmp309,"tmp309");
		HX_STACK_LINE(574)
		Float tmp310 = (tmp308 - tmp309);		HX_STACK_VAR(tmp310,"tmp310");
		HX_STACK_LINE(574)
		Float tmp311 = (tmp307 * tmp310);		HX_STACK_VAR(tmp311,"tmp311");
		HX_STACK_LINE(574)
		Float tmp312 = (tmp306 + tmp311);		HX_STACK_VAR(tmp312,"tmp312");
		HX_STACK_LINE(574)
		Float tmp313 = (tmp295 * tmp312);		HX_STACK_VAR(tmp313,"tmp313");
		HX_STACK_LINE(574)
		Float tmp314 = tmp293[(int)3] = tmp313;		HX_STACK_VAR(tmp314,"tmp314");
		HX_STACK_LINE(574)
		tmp314;
		HX_STACK_LINE(575)
		Array< Float > tmp315 = this->rawData;		HX_STACK_VAR(tmp315,"tmp315");
		HX_STACK_LINE(575)
		Float tmp316 = d;		HX_STACK_VAR(tmp316,"tmp316");
		HX_STACK_LINE(575)
		Float tmp317 = -(tmp316);		HX_STACK_VAR(tmp317,"tmp317");
		HX_STACK_LINE(575)
		Float tmp318 = m21;		HX_STACK_VAR(tmp318,"tmp318");
		HX_STACK_LINE(575)
		Float tmp319 = (m33 * m44);		HX_STACK_VAR(tmp319,"tmp319");
		HX_STACK_LINE(575)
		Float tmp320 = (m43 * m34);		HX_STACK_VAR(tmp320,"tmp320");
		HX_STACK_LINE(575)
		Float tmp321 = (tmp319 - tmp320);		HX_STACK_VAR(tmp321,"tmp321");
		HX_STACK_LINE(575)
		Float tmp322 = (tmp318 * tmp321);		HX_STACK_VAR(tmp322,"tmp322");
		HX_STACK_LINE(575)
		Float tmp323 = m31;		HX_STACK_VAR(tmp323,"tmp323");
		HX_STACK_LINE(575)
		Float tmp324 = (m23 * m44);		HX_STACK_VAR(tmp324,"tmp324");
		HX_STACK_LINE(575)
		Float tmp325 = (m43 * m24);		HX_STACK_VAR(tmp325,"tmp325");
		HX_STACK_LINE(575)
		Float tmp326 = (tmp324 - tmp325);		HX_STACK_VAR(tmp326,"tmp326");
		HX_STACK_LINE(575)
		Float tmp327 = (tmp323 * tmp326);		HX_STACK_VAR(tmp327,"tmp327");
		HX_STACK_LINE(575)
		Float tmp328 = (tmp322 - tmp327);		HX_STACK_VAR(tmp328,"tmp328");
		HX_STACK_LINE(575)
		Float tmp329 = m41;		HX_STACK_VAR(tmp329,"tmp329");
		HX_STACK_LINE(575)
		Float tmp330 = (m23 * m34);		HX_STACK_VAR(tmp330,"tmp330");
		HX_STACK_LINE(575)
		Float tmp331 = (m33 * m24);		HX_STACK_VAR(tmp331,"tmp331");
		HX_STACK_LINE(575)
		Float tmp332 = (tmp330 - tmp331);		HX_STACK_VAR(tmp332,"tmp332");
		HX_STACK_LINE(575)
		Float tmp333 = (tmp329 * tmp332);		HX_STACK_VAR(tmp333,"tmp333");
		HX_STACK_LINE(575)
		Float tmp334 = (tmp328 + tmp333);		HX_STACK_VAR(tmp334,"tmp334");
		HX_STACK_LINE(575)
		Float tmp335 = (tmp317 * tmp334);		HX_STACK_VAR(tmp335,"tmp335");
		HX_STACK_LINE(575)
		Float tmp336 = tmp315[(int)4] = tmp335;		HX_STACK_VAR(tmp336,"tmp336");
		HX_STACK_LINE(575)
		tmp336;
		HX_STACK_LINE(576)
		Array< Float > tmp337 = this->rawData;		HX_STACK_VAR(tmp337,"tmp337");
		HX_STACK_LINE(576)
		Float tmp338 = d;		HX_STACK_VAR(tmp338,"tmp338");
		HX_STACK_LINE(576)
		Float tmp339 = m11;		HX_STACK_VAR(tmp339,"tmp339");
		HX_STACK_LINE(576)
		Float tmp340 = (m33 * m44);		HX_STACK_VAR(tmp340,"tmp340");
		HX_STACK_LINE(576)
		Float tmp341 = (m43 * m34);		HX_STACK_VAR(tmp341,"tmp341");
		HX_STACK_LINE(576)
		Float tmp342 = (tmp340 - tmp341);		HX_STACK_VAR(tmp342,"tmp342");
		HX_STACK_LINE(576)
		Float tmp343 = (tmp339 * tmp342);		HX_STACK_VAR(tmp343,"tmp343");
		HX_STACK_LINE(576)
		Float tmp344 = m31;		HX_STACK_VAR(tmp344,"tmp344");
		HX_STACK_LINE(576)
		Float tmp345 = (m13 * m44);		HX_STACK_VAR(tmp345,"tmp345");
		HX_STACK_LINE(576)
		Float tmp346 = (m43 * m14);		HX_STACK_VAR(tmp346,"tmp346");
		HX_STACK_LINE(576)
		Float tmp347 = (tmp345 - tmp346);		HX_STACK_VAR(tmp347,"tmp347");
		HX_STACK_LINE(576)
		Float tmp348 = (tmp344 * tmp347);		HX_STACK_VAR(tmp348,"tmp348");
		HX_STACK_LINE(576)
		Float tmp349 = (tmp343 - tmp348);		HX_STACK_VAR(tmp349,"tmp349");
		HX_STACK_LINE(576)
		Float tmp350 = m41;		HX_STACK_VAR(tmp350,"tmp350");
		HX_STACK_LINE(576)
		Float tmp351 = (m13 * m34);		HX_STACK_VAR(tmp351,"tmp351");
		HX_STACK_LINE(576)
		Float tmp352 = (m33 * m14);		HX_STACK_VAR(tmp352,"tmp352");
		HX_STACK_LINE(576)
		Float tmp353 = (tmp351 - tmp352);		HX_STACK_VAR(tmp353,"tmp353");
		HX_STACK_LINE(576)
		Float tmp354 = (tmp350 * tmp353);		HX_STACK_VAR(tmp354,"tmp354");
		HX_STACK_LINE(576)
		Float tmp355 = (tmp349 + tmp354);		HX_STACK_VAR(tmp355,"tmp355");
		HX_STACK_LINE(576)
		Float tmp356 = (tmp338 * tmp355);		HX_STACK_VAR(tmp356,"tmp356");
		HX_STACK_LINE(576)
		Float tmp357 = tmp337[(int)5] = tmp356;		HX_STACK_VAR(tmp357,"tmp357");
		HX_STACK_LINE(576)
		tmp357;
		HX_STACK_LINE(577)
		Array< Float > tmp358 = this->rawData;		HX_STACK_VAR(tmp358,"tmp358");
		HX_STACK_LINE(577)
		Float tmp359 = d;		HX_STACK_VAR(tmp359,"tmp359");
		HX_STACK_LINE(577)
		Float tmp360 = -(tmp359);		HX_STACK_VAR(tmp360,"tmp360");
		HX_STACK_LINE(577)
		Float tmp361 = m11;		HX_STACK_VAR(tmp361,"tmp361");
		HX_STACK_LINE(577)
		Float tmp362 = (m23 * m44);		HX_STACK_VAR(tmp362,"tmp362");
		HX_STACK_LINE(577)
		Float tmp363 = (m43 * m24);		HX_STACK_VAR(tmp363,"tmp363");
		HX_STACK_LINE(577)
		Float tmp364 = (tmp362 - tmp363);		HX_STACK_VAR(tmp364,"tmp364");
		HX_STACK_LINE(577)
		Float tmp365 = (tmp361 * tmp364);		HX_STACK_VAR(tmp365,"tmp365");
		HX_STACK_LINE(577)
		Float tmp366 = m21;		HX_STACK_VAR(tmp366,"tmp366");
		HX_STACK_LINE(577)
		Float tmp367 = (m13 * m44);		HX_STACK_VAR(tmp367,"tmp367");
		HX_STACK_LINE(577)
		Float tmp368 = (m43 * m14);		HX_STACK_VAR(tmp368,"tmp368");
		HX_STACK_LINE(577)
		Float tmp369 = (tmp367 - tmp368);		HX_STACK_VAR(tmp369,"tmp369");
		HX_STACK_LINE(577)
		Float tmp370 = (tmp366 * tmp369);		HX_STACK_VAR(tmp370,"tmp370");
		HX_STACK_LINE(577)
		Float tmp371 = (tmp365 - tmp370);		HX_STACK_VAR(tmp371,"tmp371");
		HX_STACK_LINE(577)
		Float tmp372 = m41;		HX_STACK_VAR(tmp372,"tmp372");
		HX_STACK_LINE(577)
		Float tmp373 = (m13 * m24);		HX_STACK_VAR(tmp373,"tmp373");
		HX_STACK_LINE(577)
		Float tmp374 = (m23 * m14);		HX_STACK_VAR(tmp374,"tmp374");
		HX_STACK_LINE(577)
		Float tmp375 = (tmp373 - tmp374);		HX_STACK_VAR(tmp375,"tmp375");
		HX_STACK_LINE(577)
		Float tmp376 = (tmp372 * tmp375);		HX_STACK_VAR(tmp376,"tmp376");
		HX_STACK_LINE(577)
		Float tmp377 = (tmp371 + tmp376);		HX_STACK_VAR(tmp377,"tmp377");
		HX_STACK_LINE(577)
		Float tmp378 = (tmp360 * tmp377);		HX_STACK_VAR(tmp378,"tmp378");
		HX_STACK_LINE(577)
		Float tmp379 = tmp358[(int)6] = tmp378;		HX_STACK_VAR(tmp379,"tmp379");
		HX_STACK_LINE(577)
		tmp379;
		HX_STACK_LINE(578)
		Array< Float > tmp380 = this->rawData;		HX_STACK_VAR(tmp380,"tmp380");
		HX_STACK_LINE(578)
		Float tmp381 = d;		HX_STACK_VAR(tmp381,"tmp381");
		HX_STACK_LINE(578)
		Float tmp382 = m11;		HX_STACK_VAR(tmp382,"tmp382");
		HX_STACK_LINE(578)
		Float tmp383 = (m23 * m34);		HX_STACK_VAR(tmp383,"tmp383");
		HX_STACK_LINE(578)
		Float tmp384 = (m33 * m24);		HX_STACK_VAR(tmp384,"tmp384");
		HX_STACK_LINE(578)
		Float tmp385 = (tmp383 - tmp384);		HX_STACK_VAR(tmp385,"tmp385");
		HX_STACK_LINE(578)
		Float tmp386 = (tmp382 * tmp385);		HX_STACK_VAR(tmp386,"tmp386");
		HX_STACK_LINE(578)
		Float tmp387 = m21;		HX_STACK_VAR(tmp387,"tmp387");
		HX_STACK_LINE(578)
		Float tmp388 = (m13 * m34);		HX_STACK_VAR(tmp388,"tmp388");
		HX_STACK_LINE(578)
		Float tmp389 = (m33 * m14);		HX_STACK_VAR(tmp389,"tmp389");
		HX_STACK_LINE(578)
		Float tmp390 = (tmp388 - tmp389);		HX_STACK_VAR(tmp390,"tmp390");
		HX_STACK_LINE(578)
		Float tmp391 = (tmp387 * tmp390);		HX_STACK_VAR(tmp391,"tmp391");
		HX_STACK_LINE(578)
		Float tmp392 = (tmp386 - tmp391);		HX_STACK_VAR(tmp392,"tmp392");
		HX_STACK_LINE(578)
		Float tmp393 = m31;		HX_STACK_VAR(tmp393,"tmp393");
		HX_STACK_LINE(578)
		Float tmp394 = (m13 * m24);		HX_STACK_VAR(tmp394,"tmp394");
		HX_STACK_LINE(578)
		Float tmp395 = (m23 * m14);		HX_STACK_VAR(tmp395,"tmp395");
		HX_STACK_LINE(578)
		Float tmp396 = (tmp394 - tmp395);		HX_STACK_VAR(tmp396,"tmp396");
		HX_STACK_LINE(578)
		Float tmp397 = (tmp393 * tmp396);		HX_STACK_VAR(tmp397,"tmp397");
		HX_STACK_LINE(578)
		Float tmp398 = (tmp392 + tmp397);		HX_STACK_VAR(tmp398,"tmp398");
		HX_STACK_LINE(578)
		Float tmp399 = (tmp381 * tmp398);		HX_STACK_VAR(tmp399,"tmp399");
		HX_STACK_LINE(578)
		Float tmp400 = tmp380[(int)7] = tmp399;		HX_STACK_VAR(tmp400,"tmp400");
		HX_STACK_LINE(578)
		tmp400;
		HX_STACK_LINE(579)
		Array< Float > tmp401 = this->rawData;		HX_STACK_VAR(tmp401,"tmp401");
		HX_STACK_LINE(579)
		Float tmp402 = d;		HX_STACK_VAR(tmp402,"tmp402");
		HX_STACK_LINE(579)
		Float tmp403 = m21;		HX_STACK_VAR(tmp403,"tmp403");
		HX_STACK_LINE(579)
		Float tmp404 = (m32 * m44);		HX_STACK_VAR(tmp404,"tmp404");
		HX_STACK_LINE(579)
		Float tmp405 = (m42 * m34);		HX_STACK_VAR(tmp405,"tmp405");
		HX_STACK_LINE(579)
		Float tmp406 = (tmp404 - tmp405);		HX_STACK_VAR(tmp406,"tmp406");
		HX_STACK_LINE(579)
		Float tmp407 = (tmp403 * tmp406);		HX_STACK_VAR(tmp407,"tmp407");
		HX_STACK_LINE(579)
		Float tmp408 = m31;		HX_STACK_VAR(tmp408,"tmp408");
		HX_STACK_LINE(579)
		Float tmp409 = (m22 * m44);		HX_STACK_VAR(tmp409,"tmp409");
		HX_STACK_LINE(579)
		Float tmp410 = (m42 * m24);		HX_STACK_VAR(tmp410,"tmp410");
		HX_STACK_LINE(579)
		Float tmp411 = (tmp409 - tmp410);		HX_STACK_VAR(tmp411,"tmp411");
		HX_STACK_LINE(579)
		Float tmp412 = (tmp408 * tmp411);		HX_STACK_VAR(tmp412,"tmp412");
		HX_STACK_LINE(579)
		Float tmp413 = (tmp407 - tmp412);		HX_STACK_VAR(tmp413,"tmp413");
		HX_STACK_LINE(579)
		Float tmp414 = m41;		HX_STACK_VAR(tmp414,"tmp414");
		HX_STACK_LINE(579)
		Float tmp415 = (m22 * m34);		HX_STACK_VAR(tmp415,"tmp415");
		HX_STACK_LINE(579)
		Float tmp416 = (m32 * m24);		HX_STACK_VAR(tmp416,"tmp416");
		HX_STACK_LINE(579)
		Float tmp417 = (tmp415 - tmp416);		HX_STACK_VAR(tmp417,"tmp417");
		HX_STACK_LINE(579)
		Float tmp418 = (tmp414 * tmp417);		HX_STACK_VAR(tmp418,"tmp418");
		HX_STACK_LINE(579)
		Float tmp419 = (tmp413 + tmp418);		HX_STACK_VAR(tmp419,"tmp419");
		HX_STACK_LINE(579)
		Float tmp420 = (tmp402 * tmp419);		HX_STACK_VAR(tmp420,"tmp420");
		HX_STACK_LINE(579)
		Float tmp421 = tmp401[(int)8] = tmp420;		HX_STACK_VAR(tmp421,"tmp421");
		HX_STACK_LINE(579)
		tmp421;
		HX_STACK_LINE(580)
		Array< Float > tmp422 = this->rawData;		HX_STACK_VAR(tmp422,"tmp422");
		HX_STACK_LINE(580)
		Float tmp423 = d;		HX_STACK_VAR(tmp423,"tmp423");
		HX_STACK_LINE(580)
		Float tmp424 = -(tmp423);		HX_STACK_VAR(tmp424,"tmp424");
		HX_STACK_LINE(580)
		Float tmp425 = m11;		HX_STACK_VAR(tmp425,"tmp425");
		HX_STACK_LINE(580)
		Float tmp426 = (m32 * m44);		HX_STACK_VAR(tmp426,"tmp426");
		HX_STACK_LINE(580)
		Float tmp427 = (m42 * m34);		HX_STACK_VAR(tmp427,"tmp427");
		HX_STACK_LINE(580)
		Float tmp428 = (tmp426 - tmp427);		HX_STACK_VAR(tmp428,"tmp428");
		HX_STACK_LINE(580)
		Float tmp429 = (tmp425 * tmp428);		HX_STACK_VAR(tmp429,"tmp429");
		HX_STACK_LINE(580)
		Float tmp430 = m31;		HX_STACK_VAR(tmp430,"tmp430");
		HX_STACK_LINE(580)
		Float tmp431 = (m12 * m44);		HX_STACK_VAR(tmp431,"tmp431");
		HX_STACK_LINE(580)
		Float tmp432 = (m42 * m14);		HX_STACK_VAR(tmp432,"tmp432");
		HX_STACK_LINE(580)
		Float tmp433 = (tmp431 - tmp432);		HX_STACK_VAR(tmp433,"tmp433");
		HX_STACK_LINE(580)
		Float tmp434 = (tmp430 * tmp433);		HX_STACK_VAR(tmp434,"tmp434");
		HX_STACK_LINE(580)
		Float tmp435 = (tmp429 - tmp434);		HX_STACK_VAR(tmp435,"tmp435");
		HX_STACK_LINE(580)
		Float tmp436 = m41;		HX_STACK_VAR(tmp436,"tmp436");
		HX_STACK_LINE(580)
		Float tmp437 = (m12 * m34);		HX_STACK_VAR(tmp437,"tmp437");
		HX_STACK_LINE(580)
		Float tmp438 = (m32 * m14);		HX_STACK_VAR(tmp438,"tmp438");
		HX_STACK_LINE(580)
		Float tmp439 = (tmp437 - tmp438);		HX_STACK_VAR(tmp439,"tmp439");
		HX_STACK_LINE(580)
		Float tmp440 = (tmp436 * tmp439);		HX_STACK_VAR(tmp440,"tmp440");
		HX_STACK_LINE(580)
		Float tmp441 = (tmp435 + tmp440);		HX_STACK_VAR(tmp441,"tmp441");
		HX_STACK_LINE(580)
		Float tmp442 = (tmp424 * tmp441);		HX_STACK_VAR(tmp442,"tmp442");
		HX_STACK_LINE(580)
		Float tmp443 = tmp422[(int)9] = tmp442;		HX_STACK_VAR(tmp443,"tmp443");
		HX_STACK_LINE(580)
		tmp443;
		HX_STACK_LINE(581)
		Array< Float > tmp444 = this->rawData;		HX_STACK_VAR(tmp444,"tmp444");
		HX_STACK_LINE(581)
		Float tmp445 = d;		HX_STACK_VAR(tmp445,"tmp445");
		HX_STACK_LINE(581)
		Float tmp446 = m11;		HX_STACK_VAR(tmp446,"tmp446");
		HX_STACK_LINE(581)
		Float tmp447 = (m22 * m44);		HX_STACK_VAR(tmp447,"tmp447");
		HX_STACK_LINE(581)
		Float tmp448 = (m42 * m24);		HX_STACK_VAR(tmp448,"tmp448");
		HX_STACK_LINE(581)
		Float tmp449 = (tmp447 - tmp448);		HX_STACK_VAR(tmp449,"tmp449");
		HX_STACK_LINE(581)
		Float tmp450 = (tmp446 * tmp449);		HX_STACK_VAR(tmp450,"tmp450");
		HX_STACK_LINE(581)
		Float tmp451 = m21;		HX_STACK_VAR(tmp451,"tmp451");
		HX_STACK_LINE(581)
		Float tmp452 = (m12 * m44);		HX_STACK_VAR(tmp452,"tmp452");
		HX_STACK_LINE(581)
		Float tmp453 = (m42 * m14);		HX_STACK_VAR(tmp453,"tmp453");
		HX_STACK_LINE(581)
		Float tmp454 = (tmp452 - tmp453);		HX_STACK_VAR(tmp454,"tmp454");
		HX_STACK_LINE(581)
		Float tmp455 = (tmp451 * tmp454);		HX_STACK_VAR(tmp455,"tmp455");
		HX_STACK_LINE(581)
		Float tmp456 = (tmp450 - tmp455);		HX_STACK_VAR(tmp456,"tmp456");
		HX_STACK_LINE(581)
		Float tmp457 = m41;		HX_STACK_VAR(tmp457,"tmp457");
		HX_STACK_LINE(581)
		Float tmp458 = (m12 * m24);		HX_STACK_VAR(tmp458,"tmp458");
		HX_STACK_LINE(581)
		Float tmp459 = (m22 * m14);		HX_STACK_VAR(tmp459,"tmp459");
		HX_STACK_LINE(581)
		Float tmp460 = (tmp458 - tmp459);		HX_STACK_VAR(tmp460,"tmp460");
		HX_STACK_LINE(581)
		Float tmp461 = (tmp457 * tmp460);		HX_STACK_VAR(tmp461,"tmp461");
		HX_STACK_LINE(581)
		Float tmp462 = (tmp456 + tmp461);		HX_STACK_VAR(tmp462,"tmp462");
		HX_STACK_LINE(581)
		Float tmp463 = (tmp445 * tmp462);		HX_STACK_VAR(tmp463,"tmp463");
		HX_STACK_LINE(581)
		Float tmp464 = tmp444[(int)10] = tmp463;		HX_STACK_VAR(tmp464,"tmp464");
		HX_STACK_LINE(581)
		tmp464;
		HX_STACK_LINE(582)
		Array< Float > tmp465 = this->rawData;		HX_STACK_VAR(tmp465,"tmp465");
		HX_STACK_LINE(582)
		Float tmp466 = d;		HX_STACK_VAR(tmp466,"tmp466");
		HX_STACK_LINE(582)
		Float tmp467 = -(tmp466);		HX_STACK_VAR(tmp467,"tmp467");
		HX_STACK_LINE(582)
		Float tmp468 = m11;		HX_STACK_VAR(tmp468,"tmp468");
		HX_STACK_LINE(582)
		Float tmp469 = (m22 * m34);		HX_STACK_VAR(tmp469,"tmp469");
		HX_STACK_LINE(582)
		Float tmp470 = (m32 * m24);		HX_STACK_VAR(tmp470,"tmp470");
		HX_STACK_LINE(582)
		Float tmp471 = (tmp469 - tmp470);		HX_STACK_VAR(tmp471,"tmp471");
		HX_STACK_LINE(582)
		Float tmp472 = (tmp468 * tmp471);		HX_STACK_VAR(tmp472,"tmp472");
		HX_STACK_LINE(582)
		Float tmp473 = m21;		HX_STACK_VAR(tmp473,"tmp473");
		HX_STACK_LINE(582)
		Float tmp474 = (m12 * m34);		HX_STACK_VAR(tmp474,"tmp474");
		HX_STACK_LINE(582)
		Float tmp475 = (m32 * m14);		HX_STACK_VAR(tmp475,"tmp475");
		HX_STACK_LINE(582)
		Float tmp476 = (tmp474 - tmp475);		HX_STACK_VAR(tmp476,"tmp476");
		HX_STACK_LINE(582)
		Float tmp477 = (tmp473 * tmp476);		HX_STACK_VAR(tmp477,"tmp477");
		HX_STACK_LINE(582)
		Float tmp478 = (tmp472 - tmp477);		HX_STACK_VAR(tmp478,"tmp478");
		HX_STACK_LINE(582)
		Float tmp479 = m31;		HX_STACK_VAR(tmp479,"tmp479");
		HX_STACK_LINE(582)
		Float tmp480 = (m12 * m24);		HX_STACK_VAR(tmp480,"tmp480");
		HX_STACK_LINE(582)
		Float tmp481 = (m22 * m14);		HX_STACK_VAR(tmp481,"tmp481");
		HX_STACK_LINE(582)
		Float tmp482 = (tmp480 - tmp481);		HX_STACK_VAR(tmp482,"tmp482");
		HX_STACK_LINE(582)
		Float tmp483 = (tmp479 * tmp482);		HX_STACK_VAR(tmp483,"tmp483");
		HX_STACK_LINE(582)
		Float tmp484 = (tmp478 + tmp483);		HX_STACK_VAR(tmp484,"tmp484");
		HX_STACK_LINE(582)
		Float tmp485 = (tmp467 * tmp484);		HX_STACK_VAR(tmp485,"tmp485");
		HX_STACK_LINE(582)
		Float tmp486 = tmp465[(int)11] = tmp485;		HX_STACK_VAR(tmp486,"tmp486");
		HX_STACK_LINE(582)
		tmp486;
		HX_STACK_LINE(583)
		Array< Float > tmp487 = this->rawData;		HX_STACK_VAR(tmp487,"tmp487");
		HX_STACK_LINE(583)
		Float tmp488 = d;		HX_STACK_VAR(tmp488,"tmp488");
		HX_STACK_LINE(583)
		Float tmp489 = -(tmp488);		HX_STACK_VAR(tmp489,"tmp489");
		HX_STACK_LINE(583)
		Float tmp490 = m21;		HX_STACK_VAR(tmp490,"tmp490");
		HX_STACK_LINE(583)
		Float tmp491 = (m32 * m43);		HX_STACK_VAR(tmp491,"tmp491");
		HX_STACK_LINE(583)
		Float tmp492 = (m42 * m33);		HX_STACK_VAR(tmp492,"tmp492");
		HX_STACK_LINE(583)
		Float tmp493 = (tmp491 - tmp492);		HX_STACK_VAR(tmp493,"tmp493");
		HX_STACK_LINE(583)
		Float tmp494 = (tmp490 * tmp493);		HX_STACK_VAR(tmp494,"tmp494");
		HX_STACK_LINE(583)
		Float tmp495 = m31;		HX_STACK_VAR(tmp495,"tmp495");
		HX_STACK_LINE(583)
		Float tmp496 = (m22 * m43);		HX_STACK_VAR(tmp496,"tmp496");
		HX_STACK_LINE(583)
		Float tmp497 = (m42 * m23);		HX_STACK_VAR(tmp497,"tmp497");
		HX_STACK_LINE(583)
		Float tmp498 = (tmp496 - tmp497);		HX_STACK_VAR(tmp498,"tmp498");
		HX_STACK_LINE(583)
		Float tmp499 = (tmp495 * tmp498);		HX_STACK_VAR(tmp499,"tmp499");
		HX_STACK_LINE(583)
		Float tmp500 = (tmp494 - tmp499);		HX_STACK_VAR(tmp500,"tmp500");
		HX_STACK_LINE(583)
		Float tmp501 = m41;		HX_STACK_VAR(tmp501,"tmp501");
		HX_STACK_LINE(583)
		Float tmp502 = (m22 * m33);		HX_STACK_VAR(tmp502,"tmp502");
		HX_STACK_LINE(583)
		Float tmp503 = (m32 * m23);		HX_STACK_VAR(tmp503,"tmp503");
		HX_STACK_LINE(583)
		Float tmp504 = (tmp502 - tmp503);		HX_STACK_VAR(tmp504,"tmp504");
		HX_STACK_LINE(583)
		Float tmp505 = (tmp501 * tmp504);		HX_STACK_VAR(tmp505,"tmp505");
		HX_STACK_LINE(583)
		Float tmp506 = (tmp500 + tmp505);		HX_STACK_VAR(tmp506,"tmp506");
		HX_STACK_LINE(583)
		Float tmp507 = (tmp489 * tmp506);		HX_STACK_VAR(tmp507,"tmp507");
		HX_STACK_LINE(583)
		Float tmp508 = tmp487[(int)12] = tmp507;		HX_STACK_VAR(tmp508,"tmp508");
		HX_STACK_LINE(583)
		tmp508;
		HX_STACK_LINE(584)
		Array< Float > tmp509 = this->rawData;		HX_STACK_VAR(tmp509,"tmp509");
		HX_STACK_LINE(584)
		Float tmp510 = d;		HX_STACK_VAR(tmp510,"tmp510");
		HX_STACK_LINE(584)
		Float tmp511 = m11;		HX_STACK_VAR(tmp511,"tmp511");
		HX_STACK_LINE(584)
		Float tmp512 = (m32 * m43);		HX_STACK_VAR(tmp512,"tmp512");
		HX_STACK_LINE(584)
		Float tmp513 = (m42 * m33);		HX_STACK_VAR(tmp513,"tmp513");
		HX_STACK_LINE(584)
		Float tmp514 = (tmp512 - tmp513);		HX_STACK_VAR(tmp514,"tmp514");
		HX_STACK_LINE(584)
		Float tmp515 = (tmp511 * tmp514);		HX_STACK_VAR(tmp515,"tmp515");
		HX_STACK_LINE(584)
		Float tmp516 = m31;		HX_STACK_VAR(tmp516,"tmp516");
		HX_STACK_LINE(584)
		Float tmp517 = (m12 * m43);		HX_STACK_VAR(tmp517,"tmp517");
		HX_STACK_LINE(584)
		Float tmp518 = (m42 * m13);		HX_STACK_VAR(tmp518,"tmp518");
		HX_STACK_LINE(584)
		Float tmp519 = (tmp517 - tmp518);		HX_STACK_VAR(tmp519,"tmp519");
		HX_STACK_LINE(584)
		Float tmp520 = (tmp516 * tmp519);		HX_STACK_VAR(tmp520,"tmp520");
		HX_STACK_LINE(584)
		Float tmp521 = (tmp515 - tmp520);		HX_STACK_VAR(tmp521,"tmp521");
		HX_STACK_LINE(584)
		Float tmp522 = m41;		HX_STACK_VAR(tmp522,"tmp522");
		HX_STACK_LINE(584)
		Float tmp523 = (m12 * m33);		HX_STACK_VAR(tmp523,"tmp523");
		HX_STACK_LINE(584)
		Float tmp524 = (m32 * m13);		HX_STACK_VAR(tmp524,"tmp524");
		HX_STACK_LINE(584)
		Float tmp525 = (tmp523 - tmp524);		HX_STACK_VAR(tmp525,"tmp525");
		HX_STACK_LINE(584)
		Float tmp526 = (tmp522 * tmp525);		HX_STACK_VAR(tmp526,"tmp526");
		HX_STACK_LINE(584)
		Float tmp527 = (tmp521 + tmp526);		HX_STACK_VAR(tmp527,"tmp527");
		HX_STACK_LINE(584)
		Float tmp528 = (tmp510 * tmp527);		HX_STACK_VAR(tmp528,"tmp528");
		HX_STACK_LINE(584)
		Float tmp529 = tmp509[(int)13] = tmp528;		HX_STACK_VAR(tmp529,"tmp529");
		HX_STACK_LINE(584)
		tmp529;
		HX_STACK_LINE(585)
		Array< Float > tmp530 = this->rawData;		HX_STACK_VAR(tmp530,"tmp530");
		HX_STACK_LINE(585)
		Float tmp531 = d;		HX_STACK_VAR(tmp531,"tmp531");
		HX_STACK_LINE(585)
		Float tmp532 = -(tmp531);		HX_STACK_VAR(tmp532,"tmp532");
		HX_STACK_LINE(585)
		Float tmp533 = m11;		HX_STACK_VAR(tmp533,"tmp533");
		HX_STACK_LINE(585)
		Float tmp534 = (m22 * m43);		HX_STACK_VAR(tmp534,"tmp534");
		HX_STACK_LINE(585)
		Float tmp535 = (m42 * m23);		HX_STACK_VAR(tmp535,"tmp535");
		HX_STACK_LINE(585)
		Float tmp536 = (tmp534 - tmp535);		HX_STACK_VAR(tmp536,"tmp536");
		HX_STACK_LINE(585)
		Float tmp537 = (tmp533 * tmp536);		HX_STACK_VAR(tmp537,"tmp537");
		HX_STACK_LINE(585)
		Float tmp538 = m21;		HX_STACK_VAR(tmp538,"tmp538");
		HX_STACK_LINE(585)
		Float tmp539 = (m12 * m43);		HX_STACK_VAR(tmp539,"tmp539");
		HX_STACK_LINE(585)
		Float tmp540 = (m42 * m13);		HX_STACK_VAR(tmp540,"tmp540");
		HX_STACK_LINE(585)
		Float tmp541 = (tmp539 - tmp540);		HX_STACK_VAR(tmp541,"tmp541");
		HX_STACK_LINE(585)
		Float tmp542 = (tmp538 * tmp541);		HX_STACK_VAR(tmp542,"tmp542");
		HX_STACK_LINE(585)
		Float tmp543 = (tmp537 - tmp542);		HX_STACK_VAR(tmp543,"tmp543");
		HX_STACK_LINE(585)
		Float tmp544 = m41;		HX_STACK_VAR(tmp544,"tmp544");
		HX_STACK_LINE(585)
		Float tmp545 = (m12 * m23);		HX_STACK_VAR(tmp545,"tmp545");
		HX_STACK_LINE(585)
		Float tmp546 = (m22 * m13);		HX_STACK_VAR(tmp546,"tmp546");
		HX_STACK_LINE(585)
		Float tmp547 = (tmp545 - tmp546);		HX_STACK_VAR(tmp547,"tmp547");
		HX_STACK_LINE(585)
		Float tmp548 = (tmp544 * tmp547);		HX_STACK_VAR(tmp548,"tmp548");
		HX_STACK_LINE(585)
		Float tmp549 = (tmp543 + tmp548);		HX_STACK_VAR(tmp549,"tmp549");
		HX_STACK_LINE(585)
		Float tmp550 = (tmp532 * tmp549);		HX_STACK_VAR(tmp550,"tmp550");
		HX_STACK_LINE(585)
		Float tmp551 = tmp530[(int)14] = tmp550;		HX_STACK_VAR(tmp551,"tmp551");
		HX_STACK_LINE(585)
		tmp551;
		HX_STACK_LINE(586)
		Array< Float > tmp552 = this->rawData;		HX_STACK_VAR(tmp552,"tmp552");
		HX_STACK_LINE(586)
		Float tmp553 = d;		HX_STACK_VAR(tmp553,"tmp553");
		HX_STACK_LINE(586)
		Float tmp554 = m11;		HX_STACK_VAR(tmp554,"tmp554");
		HX_STACK_LINE(586)
		Float tmp555 = (m22 * m33);		HX_STACK_VAR(tmp555,"tmp555");
		HX_STACK_LINE(586)
		Float tmp556 = (m32 * m23);		HX_STACK_VAR(tmp556,"tmp556");
		HX_STACK_LINE(586)
		Float tmp557 = (tmp555 - tmp556);		HX_STACK_VAR(tmp557,"tmp557");
		HX_STACK_LINE(586)
		Float tmp558 = (tmp554 * tmp557);		HX_STACK_VAR(tmp558,"tmp558");
		HX_STACK_LINE(586)
		Float tmp559 = m21;		HX_STACK_VAR(tmp559,"tmp559");
		HX_STACK_LINE(586)
		Float tmp560 = (m12 * m33);		HX_STACK_VAR(tmp560,"tmp560");
		HX_STACK_LINE(586)
		Float tmp561 = (m32 * m13);		HX_STACK_VAR(tmp561,"tmp561");
		HX_STACK_LINE(586)
		Float tmp562 = (tmp560 - tmp561);		HX_STACK_VAR(tmp562,"tmp562");
		HX_STACK_LINE(586)
		Float tmp563 = (tmp559 * tmp562);		HX_STACK_VAR(tmp563,"tmp563");
		HX_STACK_LINE(586)
		Float tmp564 = (tmp558 - tmp563);		HX_STACK_VAR(tmp564,"tmp564");
		HX_STACK_LINE(586)
		Float tmp565 = m31;		HX_STACK_VAR(tmp565,"tmp565");
		HX_STACK_LINE(586)
		Float tmp566 = (m12 * m23);		HX_STACK_VAR(tmp566,"tmp566");
		HX_STACK_LINE(586)
		Float tmp567 = (m22 * m13);		HX_STACK_VAR(tmp567,"tmp567");
		HX_STACK_LINE(586)
		Float tmp568 = (tmp566 - tmp567);		HX_STACK_VAR(tmp568,"tmp568");
		HX_STACK_LINE(586)
		Float tmp569 = (tmp565 * tmp568);		HX_STACK_VAR(tmp569,"tmp569");
		HX_STACK_LINE(586)
		Float tmp570 = (tmp564 + tmp569);		HX_STACK_VAR(tmp570,"tmp570");
		HX_STACK_LINE(586)
		Float tmp571 = (tmp553 * tmp570);		HX_STACK_VAR(tmp571,"tmp571");
		HX_STACK_LINE(586)
		Float tmp572 = tmp552[(int)15] = tmp571;		HX_STACK_VAR(tmp572,"tmp572");
		HX_STACK_LINE(586)
		tmp572;
	}
	HX_STACK_LINE(590)
	bool tmp196 = invertable;		HX_STACK_VAR(tmp196,"tmp196");
	HX_STACK_LINE(590)
	return tmp196;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::pointAt( ::openfl::geom::Vector3D pos,::openfl::geom::Vector3D at,::openfl::geom::Vector3D up){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","pointAt",0xd7900cdb,"openfl.geom.Matrix3D.pointAt","openfl/geom/Matrix3D.hx",595,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(597)
		bool tmp = (at == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		if ((tmp)){
			HX_STACK_LINE(599)
			::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(599)
			at = tmp1;
		}
		HX_STACK_LINE(603)
		bool tmp1 = (up == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		if ((tmp1)){
			HX_STACK_LINE(605)
			::openfl::geom::Vector3D tmp2 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			up = tmp2;
		}
		HX_STACK_LINE(609)
		Float tmp2 = (at->x - pos->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		Float tmp3 = (at->y - pos->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		Float tmp4 = (at->z - pos->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		::openfl::geom::Vector3D tmp5 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		::openfl::geom::Vector3D dir = tmp5;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(610)
		::openfl::geom::Vector3D tmp6 = ::openfl::geom::Vector3D_obj::__new(up->x,up->y,up->z,up->w);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(610)
		::openfl::geom::Vector3D vup = tmp6;		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(611)
		::openfl::geom::Vector3D right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(613)
		{
			HX_STACK_LINE(613)
			Float tmp7 = (dir->x * dir->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(613)
			Float tmp8 = (dir->y * dir->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(613)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(613)
			Float tmp10 = (dir->z * dir->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(613)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(613)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(613)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(613)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(613)
			if ((tmp13)){
				HX_STACK_LINE(613)
				hx::DivEq(dir->x,l);
				HX_STACK_LINE(613)
				hx::DivEq(dir->y,l);
				HX_STACK_LINE(613)
				hx::DivEq(dir->z,l);
			}
			HX_STACK_LINE(613)
			l;
		}
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			Float tmp7 = (vup->x * vup->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(614)
			Float tmp8 = (vup->y * vup->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(614)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(614)
			Float tmp10 = (vup->z * vup->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(614)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(614)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(614)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(614)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(614)
			if ((tmp13)){
				HX_STACK_LINE(614)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(614)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(614)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(614)
			l;
		}
		HX_STACK_LINE(616)
		::openfl::geom::Vector3D tmp7 = ::openfl::geom::Vector3D_obj::__new(dir->x,dir->y,dir->z,dir->w);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(616)
		::openfl::geom::Vector3D dir2 = tmp7;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(617)
		{
			HX_STACK_LINE(617)
			Float tmp8 = (vup->x * dir->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(617)
			Float tmp9 = (vup->y * dir->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(617)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(617)
			Float tmp11 = (vup->z * dir->z);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(617)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(617)
			Float s = tmp12;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(617)
			hx::MultEq(dir2->x,s);
			HX_STACK_LINE(617)
			hx::MultEq(dir2->y,s);
			HX_STACK_LINE(617)
			hx::MultEq(dir2->z,s);
		}
		HX_STACK_LINE(619)
		Float tmp8 = (vup->x - dir2->x);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(619)
		Float tmp9 = (vup->y - dir2->y);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(619)
		Float tmp10 = (vup->z - dir2->z);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(619)
		::openfl::geom::Vector3D tmp11 = ::openfl::geom::Vector3D_obj::__new(tmp8,tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(619)
		vup = tmp11;
		HX_STACK_LINE(621)
		Float tmp12 = (vup->x * vup->x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(621)
		Float tmp13 = (vup->y * vup->y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(621)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(621)
		Float tmp15 = (vup->z * vup->z);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(621)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(621)
		Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(621)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(621)
		if ((tmp18)){
			HX_STACK_LINE(623)
			Float tmp19 = (vup->x * vup->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(623)
			Float tmp20 = (vup->y * vup->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(623)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(623)
			Float tmp22 = (vup->z * vup->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(623)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(623)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(623)
			Float l = tmp24;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(623)
			bool tmp25 = (l != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(623)
			if ((tmp25)){
				HX_STACK_LINE(623)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(623)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(623)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(623)
			l;
		}
		else{
			HX_STACK_LINE(627)
			bool tmp19 = (dir->x != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(627)
			if ((tmp19)){
				HX_STACK_LINE(629)
				Float tmp20 = dir->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(629)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(629)
				Float tmp22 = dir->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(629)
				::openfl::geom::Vector3D tmp23 = ::openfl::geom::Vector3D_obj::__new(tmp21,tmp22,(int)0,null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(629)
				vup = tmp23;
			}
			else{
				HX_STACK_LINE(633)
				::openfl::geom::Vector3D tmp20 = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(633)
				vup = tmp20;
			}
		}
		HX_STACK_LINE(639)
		Float tmp19 = (vup->y * dir->z);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(639)
		Float tmp20 = (vup->z * dir->y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(639)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(639)
		Float tmp22 = (vup->z * dir->x);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(639)
		Float tmp23 = (vup->x * dir->z);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(639)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(639)
		Float tmp25 = (vup->x * dir->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(639)
		Float tmp26 = (vup->y * dir->x);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(639)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(639)
		::openfl::geom::Vector3D tmp28 = ::openfl::geom::Vector3D_obj::__new(tmp21,tmp24,tmp27,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(639)
		right = tmp28;
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			Float tmp29 = (right->x * right->x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(640)
			Float tmp30 = (right->y * right->y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(640)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(640)
			Float tmp32 = (right->z * right->z);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(640)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(640)
			Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(640)
			Float l = tmp34;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(640)
			bool tmp35 = (l != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(640)
			if ((tmp35)){
				HX_STACK_LINE(640)
				hx::DivEq(right->x,l);
				HX_STACK_LINE(640)
				hx::DivEq(right->y,l);
				HX_STACK_LINE(640)
				hx::DivEq(right->z,l);
			}
			HX_STACK_LINE(640)
			l;
		}
		HX_STACK_LINE(642)
		Array< Float > tmp29 = this->rawData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(642)
		Float tmp30 = right->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(642)
		Float tmp31 = tmp29[(int)0] = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(642)
		tmp31;
		HX_STACK_LINE(643)
		Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(643)
		Float tmp33 = right->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(643)
		Float tmp34 = tmp32[(int)4] = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(643)
		tmp34;
		HX_STACK_LINE(644)
		Array< Float > tmp35 = this->rawData;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(644)
		Float tmp36 = right->z;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(644)
		Float tmp37 = tmp35[(int)8] = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(644)
		tmp37;
		HX_STACK_LINE(645)
		Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(645)
		Float tmp39 = tmp38[(int)12] = ((Float)0.0);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(645)
		tmp39;
		HX_STACK_LINE(646)
		Array< Float > tmp40 = this->rawData;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(646)
		Float tmp41 = vup->x;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(646)
		Float tmp42 = tmp40[(int)1] = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(646)
		tmp42;
		HX_STACK_LINE(647)
		Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(647)
		Float tmp44 = vup->y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(647)
		Float tmp45 = tmp43[(int)5] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(647)
		tmp45;
		HX_STACK_LINE(648)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(648)
		Float tmp47 = vup->z;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(648)
		Float tmp48 = tmp46[(int)9] = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(648)
		tmp48;
		HX_STACK_LINE(649)
		Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(649)
		Float tmp50 = tmp49[(int)13] = ((Float)0.0);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(649)
		tmp50;
		HX_STACK_LINE(650)
		Array< Float > tmp51 = this->rawData;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(650)
		Float tmp52 = dir->x;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(650)
		Float tmp53 = tmp51[(int)2] = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(650)
		tmp53;
		HX_STACK_LINE(651)
		Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(651)
		Float tmp55 = dir->y;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(651)
		Float tmp56 = tmp54[(int)6] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(651)
		tmp56;
		HX_STACK_LINE(652)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(652)
		Float tmp58 = dir->z;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(652)
		Float tmp59 = tmp57[(int)10] = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(652)
		tmp59;
		HX_STACK_LINE(653)
		Array< Float > tmp60 = this->rawData;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(653)
		Float tmp61 = tmp60[(int)14] = ((Float)0.0);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(653)
		tmp61;
		HX_STACK_LINE(654)
		Array< Float > tmp62 = this->rawData;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(654)
		Float tmp63 = pos->x;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(654)
		Float tmp64 = tmp62[(int)3] = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(654)
		tmp64;
		HX_STACK_LINE(655)
		Array< Float > tmp65 = this->rawData;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(655)
		Float tmp66 = pos->y;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(655)
		Float tmp67 = tmp65[(int)7] = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(655)
		tmp67;
		HX_STACK_LINE(656)
		Array< Float > tmp68 = this->rawData;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(656)
		Float tmp69 = pos->z;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(656)
		Float tmp70 = tmp68[(int)11] = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(656)
		tmp70;
		HX_STACK_LINE(657)
		Array< Float > tmp71 = this->rawData;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(657)
		Float tmp72 = tmp71[(int)15] = ((Float)1.0);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(657)
		tmp72;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,pointAt,(void))

Void Matrix3D_obj::prepend( ::openfl::geom::Matrix3D rhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prepend",0xbe4f0286,"openfl.geom.Matrix3D.prepend","openfl/geom/Matrix3D.hx",662,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(664)
		Float tmp = rhs->rawData->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		Float m111 = ((Dynamic)(tmp));		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(664)
		Float tmp1 = rhs->rawData->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		Float m121 = ((Dynamic)(tmp1));		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(664)
		Float tmp2 = rhs->rawData->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		Float m131 = ((Dynamic)(tmp2));		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(664)
		Float tmp3 = rhs->rawData->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		Float m141 = ((Dynamic)(tmp3));		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(665)
		Float tmp4 = rhs->rawData->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(665)
		Float m112 = ((Dynamic)(tmp4));		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(665)
		Float tmp5 = rhs->rawData->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(665)
		Float m122 = ((Dynamic)(tmp5));		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(665)
		Float tmp6 = rhs->rawData->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(665)
		Float m132 = ((Dynamic)(tmp6));		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(665)
		Float tmp7 = rhs->rawData->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(665)
		Float m142 = ((Dynamic)(tmp7));		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(666)
		Float tmp8 = rhs->rawData->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(666)
		Float m113 = ((Dynamic)(tmp8));		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(666)
		Float tmp9 = rhs->rawData->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(666)
		Float m123 = ((Dynamic)(tmp9));		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(666)
		Float tmp10 = rhs->rawData->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(666)
		Float m133 = ((Dynamic)(tmp10));		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(666)
		Float tmp11 = rhs->rawData->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(666)
		Float m143 = ((Dynamic)(tmp11));		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(667)
		Float tmp12 = rhs->rawData->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(667)
		Float m114 = ((Dynamic)(tmp12));		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(667)
		Float tmp13 = rhs->rawData->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(667)
		Float m124 = ((Dynamic)(tmp13));		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(667)
		Float tmp14 = rhs->rawData->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(667)
		Float m134 = ((Dynamic)(tmp14));		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(667)
		Float tmp15 = rhs->rawData->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(667)
		Float m144 = ((Dynamic)(tmp15));		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(668)
		Array< Float > tmp16 = this->rawData;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(668)
		Float tmp17 = tmp16->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(668)
		Float m211 = ((Dynamic)(tmp17));		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(668)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(668)
		Float tmp19 = tmp18->__get((int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(668)
		Float m221 = ((Dynamic)(tmp19));		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(668)
		Array< Float > tmp20 = this->rawData;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(668)
		Float tmp21 = tmp20->__get((int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(668)
		Float m231 = ((Dynamic)(tmp21));		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(668)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(668)
		Float tmp23 = tmp22->__get((int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(668)
		Float m241 = ((Dynamic)(tmp23));		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(669)
		Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(669)
		Float tmp25 = tmp24->__get((int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(669)
		Float m212 = ((Dynamic)(tmp25));		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(669)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(669)
		Float tmp27 = tmp26->__get((int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(669)
		Float m222 = ((Dynamic)(tmp27));		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(669)
		Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(669)
		Float tmp29 = tmp28->__get((int)9);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(669)
		Float m232 = ((Dynamic)(tmp29));		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(669)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(669)
		Float tmp31 = tmp30->__get((int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(669)
		Float m242 = ((Dynamic)(tmp31));		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(670)
		Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(670)
		Float tmp33 = tmp32->__get((int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(670)
		Float m213 = ((Dynamic)(tmp33));		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(670)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(670)
		Float tmp35 = tmp34->__get((int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(670)
		Float m223 = ((Dynamic)(tmp35));		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(670)
		Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(670)
		Float tmp37 = tmp36->__get((int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(670)
		Float m233 = ((Dynamic)(tmp37));		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(670)
		Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(670)
		Float tmp39 = tmp38->__get((int)14);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(670)
		Float m243 = ((Dynamic)(tmp39));		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(671)
		Array< Float > tmp40 = this->rawData;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(671)
		Float tmp41 = tmp40->__get((int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(671)
		Float m214 = ((Dynamic)(tmp41));		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(671)
		Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(671)
		Float tmp43 = tmp42->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(671)
		Float m224 = ((Dynamic)(tmp43));		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(671)
		Array< Float > tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(671)
		Float tmp45 = tmp44->__get((int)11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(671)
		Float m234 = ((Dynamic)(tmp45));		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(671)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(671)
		Float tmp47 = tmp46->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(671)
		Float m244 = ((Dynamic)(tmp47));		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(673)
		Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(673)
		Float tmp49 = (m111 * m211);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(673)
		Float tmp50 = (m112 * m221);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(673)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(673)
		Float tmp52 = (m113 * m231);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(673)
		Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(673)
		Float tmp54 = (m114 * m241);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(673)
		Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(673)
		Float tmp56 = tmp48[(int)0] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(673)
		tmp56;
		HX_STACK_LINE(674)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(674)
		Float tmp58 = (m111 * m212);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(674)
		Float tmp59 = (m112 * m222);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(674)
		Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(674)
		Float tmp61 = (m113 * m232);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(674)
		Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(674)
		Float tmp63 = (m114 * m242);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(674)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(674)
		Float tmp65 = tmp57[(int)1] = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(674)
		tmp65;
		HX_STACK_LINE(675)
		Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(675)
		Float tmp67 = (m111 * m213);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(675)
		Float tmp68 = (m112 * m223);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(675)
		Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(675)
		Float tmp70 = (m113 * m233);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(675)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(675)
		Float tmp72 = (m114 * m243);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(675)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(675)
		Float tmp74 = tmp66[(int)2] = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(675)
		tmp74;
		HX_STACK_LINE(676)
		Array< Float > tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(676)
		Float tmp76 = (m111 * m214);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(676)
		Float tmp77 = (m112 * m224);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(676)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(676)
		Float tmp79 = (m113 * m234);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(676)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(676)
		Float tmp81 = (m114 * m244);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(676)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(676)
		Float tmp83 = tmp75[(int)3] = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(676)
		tmp83;
		HX_STACK_LINE(678)
		Array< Float > tmp84 = this->rawData;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(678)
		Float tmp85 = (m121 * m211);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(678)
		Float tmp86 = (m122 * m221);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(678)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(678)
		Float tmp88 = (m123 * m231);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(678)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(678)
		Float tmp90 = (m124 * m241);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(678)
		Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(678)
		Float tmp92 = tmp84[(int)4] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(678)
		tmp92;
		HX_STACK_LINE(679)
		Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(679)
		Float tmp94 = (m121 * m212);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(679)
		Float tmp95 = (m122 * m222);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(679)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(679)
		Float tmp97 = (m123 * m232);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(679)
		Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(679)
		Float tmp99 = (m124 * m242);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(679)
		Float tmp100 = (tmp98 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(679)
		Float tmp101 = tmp93[(int)5] = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(679)
		tmp101;
		HX_STACK_LINE(680)
		Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(680)
		Float tmp103 = (m121 * m213);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(680)
		Float tmp104 = (m122 * m223);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(680)
		Float tmp105 = (tmp103 + tmp104);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(680)
		Float tmp106 = (m123 * m233);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(680)
		Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(680)
		Float tmp108 = (m124 * m243);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(680)
		Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(680)
		Float tmp110 = tmp102[(int)6] = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(680)
		tmp110;
		HX_STACK_LINE(681)
		Array< Float > tmp111 = this->rawData;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(681)
		Float tmp112 = (m121 * m214);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(681)
		Float tmp113 = (m122 * m224);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(681)
		Float tmp114 = (tmp112 + tmp113);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(681)
		Float tmp115 = (m123 * m234);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(681)
		Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(681)
		Float tmp117 = (m124 * m244);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(681)
		Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(681)
		Float tmp119 = tmp111[(int)7] = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(681)
		tmp119;
		HX_STACK_LINE(683)
		Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(683)
		Float tmp121 = (m131 * m211);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(683)
		Float tmp122 = (m132 * m221);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(683)
		Float tmp123 = (tmp121 + tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(683)
		Float tmp124 = (m133 * m231);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(683)
		Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(683)
		Float tmp126 = (m134 * m241);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(683)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(683)
		Float tmp128 = tmp120[(int)8] = tmp127;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(683)
		tmp128;
		HX_STACK_LINE(684)
		Array< Float > tmp129 = this->rawData;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(684)
		Float tmp130 = (m131 * m212);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(684)
		Float tmp131 = (m132 * m222);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(684)
		Float tmp132 = (tmp130 + tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(684)
		Float tmp133 = (m133 * m232);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(684)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(684)
		Float tmp135 = (m134 * m242);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(684)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(684)
		Float tmp137 = tmp129[(int)9] = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(684)
		tmp137;
		HX_STACK_LINE(685)
		Array< Float > tmp138 = this->rawData;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(685)
		Float tmp139 = (m131 * m213);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(685)
		Float tmp140 = (m132 * m223);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(685)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(685)
		Float tmp142 = (m133 * m233);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(685)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(685)
		Float tmp144 = (m134 * m243);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(685)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(685)
		Float tmp146 = tmp138[(int)10] = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(685)
		tmp146;
		HX_STACK_LINE(686)
		Array< Float > tmp147 = this->rawData;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(686)
		Float tmp148 = (m131 * m214);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(686)
		Float tmp149 = (m132 * m224);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(686)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(686)
		Float tmp151 = (m133 * m234);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(686)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(686)
		Float tmp153 = (m134 * m244);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(686)
		Float tmp154 = (tmp152 + tmp153);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(686)
		Float tmp155 = tmp147[(int)11] = tmp154;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(686)
		tmp155;
		HX_STACK_LINE(688)
		Array< Float > tmp156 = this->rawData;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(688)
		Float tmp157 = (m141 * m211);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(688)
		Float tmp158 = (m142 * m221);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(688)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(688)
		Float tmp160 = (m143 * m231);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(688)
		Float tmp161 = (tmp159 + tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(688)
		Float tmp162 = (m144 * m241);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(688)
		Float tmp163 = (tmp161 + tmp162);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(688)
		Float tmp164 = tmp156[(int)12] = tmp163;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(688)
		tmp164;
		HX_STACK_LINE(689)
		Array< Float > tmp165 = this->rawData;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(689)
		Float tmp166 = (m141 * m212);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(689)
		Float tmp167 = (m142 * m222);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(689)
		Float tmp168 = (tmp166 + tmp167);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(689)
		Float tmp169 = (m143 * m232);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(689)
		Float tmp170 = (tmp168 + tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(689)
		Float tmp171 = (m144 * m242);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(689)
		Float tmp172 = (tmp170 + tmp171);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(689)
		Float tmp173 = tmp165[(int)13] = tmp172;		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(689)
		tmp173;
		HX_STACK_LINE(690)
		Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(690)
		Float tmp175 = (m141 * m213);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(690)
		Float tmp176 = (m142 * m223);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(690)
		Float tmp177 = (tmp175 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(690)
		Float tmp178 = (m143 * m233);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(690)
		Float tmp179 = (tmp177 + tmp178);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(690)
		Float tmp180 = (m144 * m243);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(690)
		Float tmp181 = (tmp179 + tmp180);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(690)
		Float tmp182 = tmp174[(int)14] = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(690)
		tmp182;
		HX_STACK_LINE(691)
		Array< Float > tmp183 = this->rawData;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(691)
		Float tmp184 = (m141 * m214);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(691)
		Float tmp185 = (m142 * m224);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(691)
		Float tmp186 = (tmp184 + tmp185);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(691)
		Float tmp187 = (m143 * m234);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(691)
		Float tmp188 = (tmp186 + tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(691)
		Float tmp189 = (m144 * m244);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(691)
		Float tmp190 = (tmp188 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(691)
		Float tmp191 = tmp183[(int)15] = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(691)
		tmp191;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependRotation",0x54b5f1e4,"openfl.geom.Matrix3D.prependRotation","openfl/geom/Matrix3D.hx",696,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(698)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(698)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(698)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(698)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(698)
		::openfl::geom::Matrix3D tmp4 = ::openfl::geom::Matrix3D_obj::getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(698)
		::openfl::geom::Matrix3D m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(700)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(700)
		if ((tmp5)){
			HX_STACK_LINE(702)
			::openfl::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(703)
			{
				HX_STACK_LINE(703)
				Float tmp6 = m->rawData->__get((int)12);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(703)
				Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(703)
				Float tmp8 = p->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(703)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(703)
				Float tmp10 = m->rawData[(int)12] = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(703)
				tmp10;
				HX_STACK_LINE(703)
				Float tmp11 = m->rawData->__get((int)13);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(703)
				Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(703)
				Float tmp13 = p->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(703)
				Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(703)
				Float tmp15 = m->rawData[(int)13] = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(703)
				tmp15;
				HX_STACK_LINE(703)
				Float tmp16 = m->rawData->__get((int)14);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(703)
				Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(703)
				Float tmp18 = p->z;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(703)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(703)
				Float tmp20 = m->rawData[(int)14] = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(703)
				tmp20;
			}
		}
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			Float tmp6 = m->rawData->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(707)
			Float m111 = ((Dynamic)(tmp6));		HX_STACK_VAR(m111,"m111");
			HX_STACK_LINE(707)
			Float tmp7 = m->rawData->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(707)
			Float m121 = ((Dynamic)(tmp7));		HX_STACK_VAR(m121,"m121");
			HX_STACK_LINE(707)
			Float tmp8 = m->rawData->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(707)
			Float m131 = ((Dynamic)(tmp8));		HX_STACK_VAR(m131,"m131");
			HX_STACK_LINE(707)
			Float tmp9 = m->rawData->__get((int)12);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(707)
			Float m141 = ((Dynamic)(tmp9));		HX_STACK_VAR(m141,"m141");
			HX_STACK_LINE(707)
			Float tmp10 = m->rawData->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(707)
			Float m112 = ((Dynamic)(tmp10));		HX_STACK_VAR(m112,"m112");
			HX_STACK_LINE(707)
			Float tmp11 = m->rawData->__get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(707)
			Float m122 = ((Dynamic)(tmp11));		HX_STACK_VAR(m122,"m122");
			HX_STACK_LINE(707)
			Float tmp12 = m->rawData->__get((int)9);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(707)
			Float m132 = ((Dynamic)(tmp12));		HX_STACK_VAR(m132,"m132");
			HX_STACK_LINE(707)
			Float tmp13 = m->rawData->__get((int)13);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(707)
			Float m142 = ((Dynamic)(tmp13));		HX_STACK_VAR(m142,"m142");
			HX_STACK_LINE(707)
			Float tmp14 = m->rawData->__get((int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(707)
			Float m113 = ((Dynamic)(tmp14));		HX_STACK_VAR(m113,"m113");
			HX_STACK_LINE(707)
			Float tmp15 = m->rawData->__get((int)6);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(707)
			Float m123 = ((Dynamic)(tmp15));		HX_STACK_VAR(m123,"m123");
			HX_STACK_LINE(707)
			Float tmp16 = m->rawData->__get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(707)
			Float m133 = ((Dynamic)(tmp16));		HX_STACK_VAR(m133,"m133");
			HX_STACK_LINE(707)
			Float tmp17 = m->rawData->__get((int)14);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(707)
			Float m143 = ((Dynamic)(tmp17));		HX_STACK_VAR(m143,"m143");
			HX_STACK_LINE(707)
			Float tmp18 = m->rawData->__get((int)3);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(707)
			Float m114 = ((Dynamic)(tmp18));		HX_STACK_VAR(m114,"m114");
			HX_STACK_LINE(707)
			Float tmp19 = m->rawData->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(707)
			Float m124 = ((Dynamic)(tmp19));		HX_STACK_VAR(m124,"m124");
			HX_STACK_LINE(707)
			Float tmp20 = m->rawData->__get((int)11);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(707)
			Float m134 = ((Dynamic)(tmp20));		HX_STACK_VAR(m134,"m134");
			HX_STACK_LINE(707)
			Float tmp21 = m->rawData->__get((int)15);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(707)
			Float m144 = ((Dynamic)(tmp21));		HX_STACK_VAR(m144,"m144");
			HX_STACK_LINE(707)
			Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(707)
			Float tmp23 = tmp22->__get((int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(707)
			Float m211 = ((Dynamic)(tmp23));		HX_STACK_VAR(m211,"m211");
			HX_STACK_LINE(707)
			Array< Float > tmp24 = this->rawData;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(707)
			Float tmp25 = tmp24->__get((int)4);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(707)
			Float m221 = ((Dynamic)(tmp25));		HX_STACK_VAR(m221,"m221");
			HX_STACK_LINE(707)
			Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(707)
			Float tmp27 = tmp26->__get((int)8);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(707)
			Float m231 = ((Dynamic)(tmp27));		HX_STACK_VAR(m231,"m231");
			HX_STACK_LINE(707)
			Array< Float > tmp28 = this->rawData;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(707)
			Float tmp29 = tmp28->__get((int)12);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(707)
			Float m241 = ((Dynamic)(tmp29));		HX_STACK_VAR(m241,"m241");
			HX_STACK_LINE(707)
			Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(707)
			Float tmp31 = tmp30->__get((int)1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(707)
			Float m212 = ((Dynamic)(tmp31));		HX_STACK_VAR(m212,"m212");
			HX_STACK_LINE(707)
			Array< Float > tmp32 = this->rawData;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(707)
			Float tmp33 = tmp32->__get((int)5);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(707)
			Float m222 = ((Dynamic)(tmp33));		HX_STACK_VAR(m222,"m222");
			HX_STACK_LINE(707)
			Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(707)
			Float tmp35 = tmp34->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(707)
			Float m232 = ((Dynamic)(tmp35));		HX_STACK_VAR(m232,"m232");
			HX_STACK_LINE(707)
			Array< Float > tmp36 = this->rawData;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(707)
			Float tmp37 = tmp36->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(707)
			Float m242 = ((Dynamic)(tmp37));		HX_STACK_VAR(m242,"m242");
			HX_STACK_LINE(707)
			Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(707)
			Float tmp39 = tmp38->__get((int)2);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(707)
			Float m213 = ((Dynamic)(tmp39));		HX_STACK_VAR(m213,"m213");
			HX_STACK_LINE(707)
			Array< Float > tmp40 = this->rawData;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(707)
			Float tmp41 = tmp40->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(707)
			Float m223 = ((Dynamic)(tmp41));		HX_STACK_VAR(m223,"m223");
			HX_STACK_LINE(707)
			Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(707)
			Float tmp43 = tmp42->__get((int)10);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(707)
			Float m233 = ((Dynamic)(tmp43));		HX_STACK_VAR(m233,"m233");
			HX_STACK_LINE(707)
			Array< Float > tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(707)
			Float tmp45 = tmp44->__get((int)14);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(707)
			Float m243 = ((Dynamic)(tmp45));		HX_STACK_VAR(m243,"m243");
			HX_STACK_LINE(707)
			Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(707)
			Float tmp47 = tmp46->__get((int)3);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(707)
			Float m214 = ((Dynamic)(tmp47));		HX_STACK_VAR(m214,"m214");
			HX_STACK_LINE(707)
			Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(707)
			Float tmp49 = tmp48->__get((int)7);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(707)
			Float m224 = ((Dynamic)(tmp49));		HX_STACK_VAR(m224,"m224");
			HX_STACK_LINE(707)
			Array< Float > tmp50 = this->rawData;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(707)
			Float tmp51 = tmp50->__get((int)11);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(707)
			Float m234 = ((Dynamic)(tmp51));		HX_STACK_VAR(m234,"m234");
			HX_STACK_LINE(707)
			Array< Float > tmp52 = this->rawData;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(707)
			Float tmp53 = tmp52->__get((int)15);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(707)
			Float m244 = ((Dynamic)(tmp53));		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(707)
			Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(707)
			Float tmp55 = (m111 * m211);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(707)
			Float tmp56 = (m112 * m221);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(707)
			Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(707)
			Float tmp58 = (m113 * m231);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(707)
			Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(707)
			Float tmp60 = (m114 * m241);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(707)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(707)
			Float tmp62 = tmp54[(int)0] = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(707)
			tmp62;
			HX_STACK_LINE(707)
			Array< Float > tmp63 = this->rawData;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(707)
			Float tmp64 = (m111 * m212);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(707)
			Float tmp65 = (m112 * m222);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(707)
			Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(707)
			Float tmp67 = (m113 * m232);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(707)
			Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(707)
			Float tmp69 = (m114 * m242);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(707)
			Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(707)
			Float tmp71 = tmp63[(int)1] = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(707)
			tmp71;
			HX_STACK_LINE(707)
			Array< Float > tmp72 = this->rawData;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(707)
			Float tmp73 = (m111 * m213);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(707)
			Float tmp74 = (m112 * m223);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(707)
			Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(707)
			Float tmp76 = (m113 * m233);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(707)
			Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(707)
			Float tmp78 = (m114 * m243);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(707)
			Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(707)
			Float tmp80 = tmp72[(int)2] = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(707)
			tmp80;
			HX_STACK_LINE(707)
			Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(707)
			Float tmp82 = (m111 * m214);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(707)
			Float tmp83 = (m112 * m224);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(707)
			Float tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(707)
			Float tmp85 = (m113 * m234);		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(707)
			Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(707)
			Float tmp87 = (m114 * m244);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(707)
			Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(707)
			Float tmp89 = tmp81[(int)3] = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(707)
			tmp89;
			HX_STACK_LINE(707)
			Array< Float > tmp90 = this->rawData;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(707)
			Float tmp91 = (m121 * m211);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(707)
			Float tmp92 = (m122 * m221);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(707)
			Float tmp93 = (tmp91 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(707)
			Float tmp94 = (m123 * m231);		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(707)
			Float tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(707)
			Float tmp96 = (m124 * m241);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(707)
			Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(707)
			Float tmp98 = tmp90[(int)4] = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(707)
			tmp98;
			HX_STACK_LINE(707)
			Array< Float > tmp99 = this->rawData;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(707)
			Float tmp100 = (m121 * m212);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(707)
			Float tmp101 = (m122 * m222);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(707)
			Float tmp102 = (tmp100 + tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(707)
			Float tmp103 = (m123 * m232);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(707)
			Float tmp104 = (tmp102 + tmp103);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(707)
			Float tmp105 = (m124 * m242);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(707)
			Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(707)
			Float tmp107 = tmp99[(int)5] = tmp106;		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(707)
			tmp107;
			HX_STACK_LINE(707)
			Array< Float > tmp108 = this->rawData;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(707)
			Float tmp109 = (m121 * m213);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(707)
			Float tmp110 = (m122 * m223);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(707)
			Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(707)
			Float tmp112 = (m123 * m233);		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(707)
			Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(707)
			Float tmp114 = (m124 * m243);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(707)
			Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(707)
			Float tmp116 = tmp108[(int)6] = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(707)
			tmp116;
			HX_STACK_LINE(707)
			Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(707)
			Float tmp118 = (m121 * m214);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(707)
			Float tmp119 = (m122 * m224);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(707)
			Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(707)
			Float tmp121 = (m123 * m234);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(707)
			Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(707)
			Float tmp123 = (m124 * m244);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(707)
			Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(707)
			Float tmp125 = tmp117[(int)7] = tmp124;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(707)
			tmp125;
			HX_STACK_LINE(707)
			Array< Float > tmp126 = this->rawData;		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(707)
			Float tmp127 = (m131 * m211);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(707)
			Float tmp128 = (m132 * m221);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(707)
			Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(707)
			Float tmp130 = (m133 * m231);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(707)
			Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(707)
			Float tmp132 = (m134 * m241);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(707)
			Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(707)
			Float tmp134 = tmp126[(int)8] = tmp133;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(707)
			tmp134;
			HX_STACK_LINE(707)
			Array< Float > tmp135 = this->rawData;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(707)
			Float tmp136 = (m131 * m212);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(707)
			Float tmp137 = (m132 * m222);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(707)
			Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(707)
			Float tmp139 = (m133 * m232);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(707)
			Float tmp140 = (tmp138 + tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(707)
			Float tmp141 = (m134 * m242);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(707)
			Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(707)
			Float tmp143 = tmp135[(int)9] = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(707)
			tmp143;
			HX_STACK_LINE(707)
			Array< Float > tmp144 = this->rawData;		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(707)
			Float tmp145 = (m131 * m213);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(707)
			Float tmp146 = (m132 * m223);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(707)
			Float tmp147 = (tmp145 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(707)
			Float tmp148 = (m133 * m233);		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(707)
			Float tmp149 = (tmp147 + tmp148);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(707)
			Float tmp150 = (m134 * m243);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(707)
			Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(707)
			Float tmp152 = tmp144[(int)10] = tmp151;		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(707)
			tmp152;
			HX_STACK_LINE(707)
			Array< Float > tmp153 = this->rawData;		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(707)
			Float tmp154 = (m131 * m214);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(707)
			Float tmp155 = (m132 * m224);		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(707)
			Float tmp156 = (tmp154 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(707)
			Float tmp157 = (m133 * m234);		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(707)
			Float tmp158 = (tmp156 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(707)
			Float tmp159 = (m134 * m244);		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(707)
			Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(707)
			Float tmp161 = tmp153[(int)11] = tmp160;		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(707)
			tmp161;
			HX_STACK_LINE(707)
			Array< Float > tmp162 = this->rawData;		HX_STACK_VAR(tmp162,"tmp162");
			HX_STACK_LINE(707)
			Float tmp163 = (m141 * m211);		HX_STACK_VAR(tmp163,"tmp163");
			HX_STACK_LINE(707)
			Float tmp164 = (m142 * m221);		HX_STACK_VAR(tmp164,"tmp164");
			HX_STACK_LINE(707)
			Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
			HX_STACK_LINE(707)
			Float tmp166 = (m143 * m231);		HX_STACK_VAR(tmp166,"tmp166");
			HX_STACK_LINE(707)
			Float tmp167 = (tmp165 + tmp166);		HX_STACK_VAR(tmp167,"tmp167");
			HX_STACK_LINE(707)
			Float tmp168 = (m144 * m241);		HX_STACK_VAR(tmp168,"tmp168");
			HX_STACK_LINE(707)
			Float tmp169 = (tmp167 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
			HX_STACK_LINE(707)
			Float tmp170 = tmp162[(int)12] = tmp169;		HX_STACK_VAR(tmp170,"tmp170");
			HX_STACK_LINE(707)
			tmp170;
			HX_STACK_LINE(707)
			Array< Float > tmp171 = this->rawData;		HX_STACK_VAR(tmp171,"tmp171");
			HX_STACK_LINE(707)
			Float tmp172 = (m141 * m212);		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(707)
			Float tmp173 = (m142 * m222);		HX_STACK_VAR(tmp173,"tmp173");
			HX_STACK_LINE(707)
			Float tmp174 = (tmp172 + tmp173);		HX_STACK_VAR(tmp174,"tmp174");
			HX_STACK_LINE(707)
			Float tmp175 = (m143 * m232);		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(707)
			Float tmp176 = (tmp174 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(707)
			Float tmp177 = (m144 * m242);		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(707)
			Float tmp178 = (tmp176 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(707)
			Float tmp179 = tmp171[(int)13] = tmp178;		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(707)
			tmp179;
			HX_STACK_LINE(707)
			Array< Float > tmp180 = this->rawData;		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(707)
			Float tmp181 = (m141 * m213);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(707)
			Float tmp182 = (m142 * m223);		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(707)
			Float tmp183 = (tmp181 + tmp182);		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(707)
			Float tmp184 = (m143 * m233);		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(707)
			Float tmp185 = (tmp183 + tmp184);		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(707)
			Float tmp186 = (m144 * m243);		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(707)
			Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(707)
			Float tmp188 = tmp180[(int)14] = tmp187;		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(707)
			tmp188;
			HX_STACK_LINE(707)
			Array< Float > tmp189 = this->rawData;		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(707)
			Float tmp190 = (m141 * m214);		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(707)
			Float tmp191 = (m142 * m224);		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(707)
			Float tmp192 = (tmp190 + tmp191);		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(707)
			Float tmp193 = (m143 * m234);		HX_STACK_VAR(tmp193,"tmp193");
			HX_STACK_LINE(707)
			Float tmp194 = (tmp192 + tmp193);		HX_STACK_VAR(tmp194,"tmp194");
			HX_STACK_LINE(707)
			Float tmp195 = (m144 * m244);		HX_STACK_VAR(tmp195,"tmp195");
			HX_STACK_LINE(707)
			Float tmp196 = (tmp194 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
			HX_STACK_LINE(707)
			Float tmp197 = tmp189[(int)15] = tmp196;		HX_STACK_VAR(tmp197,"tmp197");
			HX_STACK_LINE(707)
			tmp197;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependScale",0x59d85624,"openfl.geom.Matrix3D.prependScale","openfl/geom/Matrix3D.hx",714,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(714)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		::openfl::geom::Matrix3D rhs = tmp;		HX_STACK_VAR(rhs,"rhs");
		HX_STACK_LINE(714)
		Float tmp1 = rhs->rawData->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		Float m111 = ((Dynamic)(tmp1));		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(714)
		Float tmp2 = rhs->rawData->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(714)
		Float m121 = ((Dynamic)(tmp2));		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(714)
		Float tmp3 = rhs->rawData->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(714)
		Float m131 = ((Dynamic)(tmp3));		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(714)
		Float tmp4 = rhs->rawData->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(714)
		Float m141 = ((Dynamic)(tmp4));		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(714)
		Float tmp5 = rhs->rawData->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(714)
		Float m112 = ((Dynamic)(tmp5));		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(714)
		Float tmp6 = rhs->rawData->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(714)
		Float m122 = ((Dynamic)(tmp6));		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(714)
		Float tmp7 = rhs->rawData->__get((int)9);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(714)
		Float m132 = ((Dynamic)(tmp7));		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(714)
		Float tmp8 = rhs->rawData->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(714)
		Float m142 = ((Dynamic)(tmp8));		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(714)
		Float tmp9 = rhs->rawData->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(714)
		Float m113 = ((Dynamic)(tmp9));		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(714)
		Float tmp10 = rhs->rawData->__get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(714)
		Float m123 = ((Dynamic)(tmp10));		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(714)
		Float tmp11 = rhs->rawData->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(714)
		Float m133 = ((Dynamic)(tmp11));		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(714)
		Float tmp12 = rhs->rawData->__get((int)14);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(714)
		Float m143 = ((Dynamic)(tmp12));		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(714)
		Float tmp13 = rhs->rawData->__get((int)3);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(714)
		Float m114 = ((Dynamic)(tmp13));		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(714)
		Float tmp14 = rhs->rawData->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(714)
		Float m124 = ((Dynamic)(tmp14));		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(714)
		Float tmp15 = rhs->rawData->__get((int)11);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(714)
		Float m134 = ((Dynamic)(tmp15));		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(714)
		Float tmp16 = rhs->rawData->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(714)
		Float m144 = ((Dynamic)(tmp16));		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(714)
		Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(714)
		Float tmp18 = tmp17->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(714)
		Float m211 = ((Dynamic)(tmp18));		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(714)
		Array< Float > tmp19 = this->rawData;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(714)
		Float tmp20 = tmp19->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(714)
		Float m221 = ((Dynamic)(tmp20));		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(714)
		Array< Float > tmp21 = this->rawData;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(714)
		Float tmp22 = tmp21->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(714)
		Float m231 = ((Dynamic)(tmp22));		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(714)
		Array< Float > tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(714)
		Float tmp24 = tmp23->__get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(714)
		Float m241 = ((Dynamic)(tmp24));		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(714)
		Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(714)
		Float tmp26 = tmp25->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(714)
		Float m212 = ((Dynamic)(tmp26));		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(714)
		Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(714)
		Float tmp28 = tmp27->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(714)
		Float m222 = ((Dynamic)(tmp28));		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(714)
		Array< Float > tmp29 = this->rawData;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(714)
		Float tmp30 = tmp29->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(714)
		Float m232 = ((Dynamic)(tmp30));		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(714)
		Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(714)
		Float tmp32 = tmp31->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(714)
		Float m242 = ((Dynamic)(tmp32));		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(714)
		Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(714)
		Float tmp34 = tmp33->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(714)
		Float m213 = ((Dynamic)(tmp34));		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(714)
		Array< Float > tmp35 = this->rawData;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(714)
		Float tmp36 = tmp35->__get((int)6);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(714)
		Float m223 = ((Dynamic)(tmp36));		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(714)
		Array< Float > tmp37 = this->rawData;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(714)
		Float tmp38 = tmp37->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(714)
		Float m233 = ((Dynamic)(tmp38));		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(714)
		Array< Float > tmp39 = this->rawData;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(714)
		Float tmp40 = tmp39->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(714)
		Float m243 = ((Dynamic)(tmp40));		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(714)
		Array< Float > tmp41 = this->rawData;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(714)
		Float tmp42 = tmp41->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(714)
		Float m214 = ((Dynamic)(tmp42));		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(714)
		Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(714)
		Float tmp44 = tmp43->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(714)
		Float m224 = ((Dynamic)(tmp44));		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(714)
		Array< Float > tmp45 = this->rawData;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(714)
		Float tmp46 = tmp45->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(714)
		Float m234 = ((Dynamic)(tmp46));		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(714)
		Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(714)
		Float tmp48 = tmp47->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(714)
		Float m244 = ((Dynamic)(tmp48));		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(714)
		Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(714)
		Float tmp50 = (m111 * m211);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(714)
		Float tmp51 = (m112 * m221);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(714)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(714)
		Float tmp53 = (m113 * m231);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(714)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(714)
		Float tmp55 = (m114 * m241);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(714)
		Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(714)
		Float tmp57 = tmp49[(int)0] = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(714)
		tmp57;
		HX_STACK_LINE(714)
		Array< Float > tmp58 = this->rawData;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(714)
		Float tmp59 = (m111 * m212);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(714)
		Float tmp60 = (m112 * m222);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(714)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(714)
		Float tmp62 = (m113 * m232);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(714)
		Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(714)
		Float tmp64 = (m114 * m242);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(714)
		Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(714)
		Float tmp66 = tmp58[(int)1] = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(714)
		tmp66;
		HX_STACK_LINE(714)
		Array< Float > tmp67 = this->rawData;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(714)
		Float tmp68 = (m111 * m213);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(714)
		Float tmp69 = (m112 * m223);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(714)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(714)
		Float tmp71 = (m113 * m233);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(714)
		Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(714)
		Float tmp73 = (m114 * m243);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(714)
		Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(714)
		Float tmp75 = tmp67[(int)2] = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(714)
		tmp75;
		HX_STACK_LINE(714)
		Array< Float > tmp76 = this->rawData;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(714)
		Float tmp77 = (m111 * m214);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(714)
		Float tmp78 = (m112 * m224);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(714)
		Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(714)
		Float tmp80 = (m113 * m234);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(714)
		Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(714)
		Float tmp82 = (m114 * m244);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(714)
		Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(714)
		Float tmp84 = tmp76[(int)3] = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(714)
		tmp84;
		HX_STACK_LINE(714)
		Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(714)
		Float tmp86 = (m121 * m211);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(714)
		Float tmp87 = (m122 * m221);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(714)
		Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(714)
		Float tmp89 = (m123 * m231);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(714)
		Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(714)
		Float tmp91 = (m124 * m241);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(714)
		Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(714)
		Float tmp93 = tmp85[(int)4] = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(714)
		tmp93;
		HX_STACK_LINE(714)
		Array< Float > tmp94 = this->rawData;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(714)
		Float tmp95 = (m121 * m212);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(714)
		Float tmp96 = (m122 * m222);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(714)
		Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(714)
		Float tmp98 = (m123 * m232);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(714)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(714)
		Float tmp100 = (m124 * m242);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(714)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(714)
		Float tmp102 = tmp94[(int)5] = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(714)
		tmp102;
		HX_STACK_LINE(714)
		Array< Float > tmp103 = this->rawData;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(714)
		Float tmp104 = (m121 * m213);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(714)
		Float tmp105 = (m122 * m223);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(714)
		Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(714)
		Float tmp107 = (m123 * m233);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(714)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(714)
		Float tmp109 = (m124 * m243);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(714)
		Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(714)
		Float tmp111 = tmp103[(int)6] = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(714)
		tmp111;
		HX_STACK_LINE(714)
		Array< Float > tmp112 = this->rawData;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(714)
		Float tmp113 = (m121 * m214);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(714)
		Float tmp114 = (m122 * m224);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(714)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(714)
		Float tmp116 = (m123 * m234);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(714)
		Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(714)
		Float tmp118 = (m124 * m244);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(714)
		Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(714)
		Float tmp120 = tmp112[(int)7] = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(714)
		tmp120;
		HX_STACK_LINE(714)
		Array< Float > tmp121 = this->rawData;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(714)
		Float tmp122 = (m131 * m211);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(714)
		Float tmp123 = (m132 * m221);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(714)
		Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(714)
		Float tmp125 = (m133 * m231);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(714)
		Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(714)
		Float tmp127 = (m134 * m241);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(714)
		Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(714)
		Float tmp129 = tmp121[(int)8] = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(714)
		tmp129;
		HX_STACK_LINE(714)
		Array< Float > tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(714)
		Float tmp131 = (m131 * m212);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(714)
		Float tmp132 = (m132 * m222);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(714)
		Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(714)
		Float tmp134 = (m133 * m232);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(714)
		Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(714)
		Float tmp136 = (m134 * m242);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(714)
		Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(714)
		Float tmp138 = tmp130[(int)9] = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(714)
		tmp138;
		HX_STACK_LINE(714)
		Array< Float > tmp139 = this->rawData;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(714)
		Float tmp140 = (m131 * m213);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(714)
		Float tmp141 = (m132 * m223);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(714)
		Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(714)
		Float tmp143 = (m133 * m233);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(714)
		Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(714)
		Float tmp145 = (m134 * m243);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(714)
		Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(714)
		Float tmp147 = tmp139[(int)10] = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(714)
		tmp147;
		HX_STACK_LINE(714)
		Array< Float > tmp148 = this->rawData;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(714)
		Float tmp149 = (m131 * m214);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(714)
		Float tmp150 = (m132 * m224);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(714)
		Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(714)
		Float tmp152 = (m133 * m234);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(714)
		Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(714)
		Float tmp154 = (m134 * m244);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(714)
		Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(714)
		Float tmp156 = tmp148[(int)11] = tmp155;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(714)
		tmp156;
		HX_STACK_LINE(714)
		Array< Float > tmp157 = this->rawData;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(714)
		Float tmp158 = (m141 * m211);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(714)
		Float tmp159 = (m142 * m221);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(714)
		Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(714)
		Float tmp161 = (m143 * m231);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(714)
		Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(714)
		Float tmp163 = (m144 * m241);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(714)
		Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(714)
		Float tmp165 = tmp157[(int)12] = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(714)
		tmp165;
		HX_STACK_LINE(714)
		Array< Float > tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(714)
		Float tmp167 = (m141 * m212);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(714)
		Float tmp168 = (m142 * m222);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(714)
		Float tmp169 = (tmp167 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(714)
		Float tmp170 = (m143 * m232);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(714)
		Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(714)
		Float tmp172 = (m144 * m242);		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(714)
		Float tmp173 = (tmp171 + tmp172);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(714)
		Float tmp174 = tmp166[(int)13] = tmp173;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(714)
		tmp174;
		HX_STACK_LINE(714)
		Array< Float > tmp175 = this->rawData;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(714)
		Float tmp176 = (m141 * m213);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(714)
		Float tmp177 = (m142 * m223);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(714)
		Float tmp178 = (tmp176 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(714)
		Float tmp179 = (m143 * m233);		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(714)
		Float tmp180 = (tmp178 + tmp179);		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(714)
		Float tmp181 = (m144 * m243);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(714)
		Float tmp182 = (tmp180 + tmp181);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(714)
		Float tmp183 = tmp175[(int)14] = tmp182;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(714)
		tmp183;
		HX_STACK_LINE(714)
		Array< Float > tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(714)
		Float tmp185 = (m141 * m214);		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(714)
		Float tmp186 = (m142 * m224);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(714)
		Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(714)
		Float tmp188 = (m143 * m234);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(714)
		Float tmp189 = (tmp187 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(714)
		Float tmp190 = (m144 * m244);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(714)
		Float tmp191 = (tmp189 + tmp190);		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(714)
		Float tmp192 = tmp184[(int)15] = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(714)
		tmp192;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependTranslation",0x2df4680b,"openfl.geom.Matrix3D.prependTranslation","openfl/geom/Matrix3D.hx",719,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(721)
		::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(721)
		::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(722)
		{
			HX_STACK_LINE(722)
			::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(722)
			::openfl::geom::Vector3D val = tmp1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(722)
			Float tmp2 = val->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(722)
			Float tmp3 = m->rawData[(int)12] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(722)
			tmp3;
			HX_STACK_LINE(722)
			Float tmp4 = val->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(722)
			Float tmp5 = m->rawData[(int)13] = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(722)
			tmp5;
			HX_STACK_LINE(722)
			Float tmp6 = val->z;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(722)
			Float tmp7 = m->rawData[(int)14] = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(722)
			tmp7;
			HX_STACK_LINE(722)
			val;
		}
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			Float tmp1 = m->rawData->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(723)
			Float m111 = ((Dynamic)(tmp1));		HX_STACK_VAR(m111,"m111");
			HX_STACK_LINE(723)
			Float tmp2 = m->rawData->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(723)
			Float m121 = ((Dynamic)(tmp2));		HX_STACK_VAR(m121,"m121");
			HX_STACK_LINE(723)
			Float tmp3 = m->rawData->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(723)
			Float m131 = ((Dynamic)(tmp3));		HX_STACK_VAR(m131,"m131");
			HX_STACK_LINE(723)
			Float tmp4 = m->rawData->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			Float m141 = ((Dynamic)(tmp4));		HX_STACK_VAR(m141,"m141");
			HX_STACK_LINE(723)
			Float tmp5 = m->rawData->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			Float m112 = ((Dynamic)(tmp5));		HX_STACK_VAR(m112,"m112");
			HX_STACK_LINE(723)
			Float tmp6 = m->rawData->__get((int)5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			Float m122 = ((Dynamic)(tmp6));		HX_STACK_VAR(m122,"m122");
			HX_STACK_LINE(723)
			Float tmp7 = m->rawData->__get((int)9);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			Float m132 = ((Dynamic)(tmp7));		HX_STACK_VAR(m132,"m132");
			HX_STACK_LINE(723)
			Float tmp8 = m->rawData->__get((int)13);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(723)
			Float m142 = ((Dynamic)(tmp8));		HX_STACK_VAR(m142,"m142");
			HX_STACK_LINE(723)
			Float tmp9 = m->rawData->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(723)
			Float m113 = ((Dynamic)(tmp9));		HX_STACK_VAR(m113,"m113");
			HX_STACK_LINE(723)
			Float tmp10 = m->rawData->__get((int)6);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(723)
			Float m123 = ((Dynamic)(tmp10));		HX_STACK_VAR(m123,"m123");
			HX_STACK_LINE(723)
			Float tmp11 = m->rawData->__get((int)10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(723)
			Float m133 = ((Dynamic)(tmp11));		HX_STACK_VAR(m133,"m133");
			HX_STACK_LINE(723)
			Float tmp12 = m->rawData->__get((int)14);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(723)
			Float m143 = ((Dynamic)(tmp12));		HX_STACK_VAR(m143,"m143");
			HX_STACK_LINE(723)
			Float tmp13 = m->rawData->__get((int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(723)
			Float m114 = ((Dynamic)(tmp13));		HX_STACK_VAR(m114,"m114");
			HX_STACK_LINE(723)
			Float tmp14 = m->rawData->__get((int)7);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(723)
			Float m124 = ((Dynamic)(tmp14));		HX_STACK_VAR(m124,"m124");
			HX_STACK_LINE(723)
			Float tmp15 = m->rawData->__get((int)11);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(723)
			Float m134 = ((Dynamic)(tmp15));		HX_STACK_VAR(m134,"m134");
			HX_STACK_LINE(723)
			Float tmp16 = m->rawData->__get((int)15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(723)
			Float m144 = ((Dynamic)(tmp16));		HX_STACK_VAR(m144,"m144");
			HX_STACK_LINE(723)
			Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(723)
			Float tmp18 = tmp17->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(723)
			Float m211 = ((Dynamic)(tmp18));		HX_STACK_VAR(m211,"m211");
			HX_STACK_LINE(723)
			Array< Float > tmp19 = this->rawData;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(723)
			Float tmp20 = tmp19->__get((int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(723)
			Float m221 = ((Dynamic)(tmp20));		HX_STACK_VAR(m221,"m221");
			HX_STACK_LINE(723)
			Array< Float > tmp21 = this->rawData;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(723)
			Float tmp22 = tmp21->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(723)
			Float m231 = ((Dynamic)(tmp22));		HX_STACK_VAR(m231,"m231");
			HX_STACK_LINE(723)
			Array< Float > tmp23 = this->rawData;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(723)
			Float tmp24 = tmp23->__get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(723)
			Float m241 = ((Dynamic)(tmp24));		HX_STACK_VAR(m241,"m241");
			HX_STACK_LINE(723)
			Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(723)
			Float tmp26 = tmp25->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(723)
			Float m212 = ((Dynamic)(tmp26));		HX_STACK_VAR(m212,"m212");
			HX_STACK_LINE(723)
			Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(723)
			Float tmp28 = tmp27->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(723)
			Float m222 = ((Dynamic)(tmp28));		HX_STACK_VAR(m222,"m222");
			HX_STACK_LINE(723)
			Array< Float > tmp29 = this->rawData;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(723)
			Float tmp30 = tmp29->__get((int)9);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(723)
			Float m232 = ((Dynamic)(tmp30));		HX_STACK_VAR(m232,"m232");
			HX_STACK_LINE(723)
			Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(723)
			Float tmp32 = tmp31->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(723)
			Float m242 = ((Dynamic)(tmp32));		HX_STACK_VAR(m242,"m242");
			HX_STACK_LINE(723)
			Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(723)
			Float tmp34 = tmp33->__get((int)2);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(723)
			Float m213 = ((Dynamic)(tmp34));		HX_STACK_VAR(m213,"m213");
			HX_STACK_LINE(723)
			Array< Float > tmp35 = this->rawData;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(723)
			Float tmp36 = tmp35->__get((int)6);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(723)
			Float m223 = ((Dynamic)(tmp36));		HX_STACK_VAR(m223,"m223");
			HX_STACK_LINE(723)
			Array< Float > tmp37 = this->rawData;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(723)
			Float tmp38 = tmp37->__get((int)10);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(723)
			Float m233 = ((Dynamic)(tmp38));		HX_STACK_VAR(m233,"m233");
			HX_STACK_LINE(723)
			Array< Float > tmp39 = this->rawData;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(723)
			Float tmp40 = tmp39->__get((int)14);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(723)
			Float m243 = ((Dynamic)(tmp40));		HX_STACK_VAR(m243,"m243");
			HX_STACK_LINE(723)
			Array< Float > tmp41 = this->rawData;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(723)
			Float tmp42 = tmp41->__get((int)3);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(723)
			Float m214 = ((Dynamic)(tmp42));		HX_STACK_VAR(m214,"m214");
			HX_STACK_LINE(723)
			Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(723)
			Float tmp44 = tmp43->__get((int)7);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(723)
			Float m224 = ((Dynamic)(tmp44));		HX_STACK_VAR(m224,"m224");
			HX_STACK_LINE(723)
			Array< Float > tmp45 = this->rawData;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(723)
			Float tmp46 = tmp45->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(723)
			Float m234 = ((Dynamic)(tmp46));		HX_STACK_VAR(m234,"m234");
			HX_STACK_LINE(723)
			Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(723)
			Float tmp48 = tmp47->__get((int)15);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(723)
			Float m244 = ((Dynamic)(tmp48));		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(723)
			Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(723)
			Float tmp50 = (m111 * m211);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(723)
			Float tmp51 = (m112 * m221);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(723)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(723)
			Float tmp53 = (m113 * m231);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(723)
			Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(723)
			Float tmp55 = (m114 * m241);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(723)
			Float tmp56 = (tmp54 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(723)
			Float tmp57 = tmp49[(int)0] = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(723)
			tmp57;
			HX_STACK_LINE(723)
			Array< Float > tmp58 = this->rawData;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(723)
			Float tmp59 = (m111 * m212);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(723)
			Float tmp60 = (m112 * m222);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(723)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(723)
			Float tmp62 = (m113 * m232);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(723)
			Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(723)
			Float tmp64 = (m114 * m242);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(723)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(723)
			Float tmp66 = tmp58[(int)1] = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(723)
			tmp66;
			HX_STACK_LINE(723)
			Array< Float > tmp67 = this->rawData;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(723)
			Float tmp68 = (m111 * m213);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(723)
			Float tmp69 = (m112 * m223);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(723)
			Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(723)
			Float tmp71 = (m113 * m233);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(723)
			Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(723)
			Float tmp73 = (m114 * m243);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(723)
			Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(723)
			Float tmp75 = tmp67[(int)2] = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(723)
			tmp75;
			HX_STACK_LINE(723)
			Array< Float > tmp76 = this->rawData;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(723)
			Float tmp77 = (m111 * m214);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(723)
			Float tmp78 = (m112 * m224);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(723)
			Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(723)
			Float tmp80 = (m113 * m234);		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(723)
			Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(723)
			Float tmp82 = (m114 * m244);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(723)
			Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(723)
			Float tmp84 = tmp76[(int)3] = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(723)
			tmp84;
			HX_STACK_LINE(723)
			Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(723)
			Float tmp86 = (m121 * m211);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(723)
			Float tmp87 = (m122 * m221);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(723)
			Float tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(723)
			Float tmp89 = (m123 * m231);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(723)
			Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(723)
			Float tmp91 = (m124 * m241);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(723)
			Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(723)
			Float tmp93 = tmp85[(int)4] = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(723)
			tmp93;
			HX_STACK_LINE(723)
			Array< Float > tmp94 = this->rawData;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(723)
			Float tmp95 = (m121 * m212);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(723)
			Float tmp96 = (m122 * m222);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(723)
			Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(723)
			Float tmp98 = (m123 * m232);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(723)
			Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(723)
			Float tmp100 = (m124 * m242);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(723)
			Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(723)
			Float tmp102 = tmp94[(int)5] = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(723)
			tmp102;
			HX_STACK_LINE(723)
			Array< Float > tmp103 = this->rawData;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(723)
			Float tmp104 = (m121 * m213);		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(723)
			Float tmp105 = (m122 * m223);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(723)
			Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(723)
			Float tmp107 = (m123 * m233);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(723)
			Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(723)
			Float tmp109 = (m124 * m243);		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(723)
			Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(723)
			Float tmp111 = tmp103[(int)6] = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(723)
			tmp111;
			HX_STACK_LINE(723)
			Array< Float > tmp112 = this->rawData;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(723)
			Float tmp113 = (m121 * m214);		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(723)
			Float tmp114 = (m122 * m224);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(723)
			Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(723)
			Float tmp116 = (m123 * m234);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(723)
			Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(723)
			Float tmp118 = (m124 * m244);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(723)
			Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(723)
			Float tmp120 = tmp112[(int)7] = tmp119;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(723)
			tmp120;
			HX_STACK_LINE(723)
			Array< Float > tmp121 = this->rawData;		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(723)
			Float tmp122 = (m131 * m211);		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(723)
			Float tmp123 = (m132 * m221);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(723)
			Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(723)
			Float tmp125 = (m133 * m231);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(723)
			Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(723)
			Float tmp127 = (m134 * m241);		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(723)
			Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(723)
			Float tmp129 = tmp121[(int)8] = tmp128;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(723)
			tmp129;
			HX_STACK_LINE(723)
			Array< Float > tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(723)
			Float tmp131 = (m131 * m212);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(723)
			Float tmp132 = (m132 * m222);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(723)
			Float tmp133 = (tmp131 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(723)
			Float tmp134 = (m133 * m232);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(723)
			Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(723)
			Float tmp136 = (m134 * m242);		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(723)
			Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(723)
			Float tmp138 = tmp130[(int)9] = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(723)
			tmp138;
			HX_STACK_LINE(723)
			Array< Float > tmp139 = this->rawData;		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(723)
			Float tmp140 = (m131 * m213);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(723)
			Float tmp141 = (m132 * m223);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(723)
			Float tmp142 = (tmp140 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
			HX_STACK_LINE(723)
			Float tmp143 = (m133 * m233);		HX_STACK_VAR(tmp143,"tmp143");
			HX_STACK_LINE(723)
			Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
			HX_STACK_LINE(723)
			Float tmp145 = (m134 * m243);		HX_STACK_VAR(tmp145,"tmp145");
			HX_STACK_LINE(723)
			Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
			HX_STACK_LINE(723)
			Float tmp147 = tmp139[(int)10] = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
			HX_STACK_LINE(723)
			tmp147;
			HX_STACK_LINE(723)
			Array< Float > tmp148 = this->rawData;		HX_STACK_VAR(tmp148,"tmp148");
			HX_STACK_LINE(723)
			Float tmp149 = (m131 * m214);		HX_STACK_VAR(tmp149,"tmp149");
			HX_STACK_LINE(723)
			Float tmp150 = (m132 * m224);		HX_STACK_VAR(tmp150,"tmp150");
			HX_STACK_LINE(723)
			Float tmp151 = (tmp149 + tmp150);		HX_STACK_VAR(tmp151,"tmp151");
			HX_STACK_LINE(723)
			Float tmp152 = (m133 * m234);		HX_STACK_VAR(tmp152,"tmp152");
			HX_STACK_LINE(723)
			Float tmp153 = (tmp151 + tmp152);		HX_STACK_VAR(tmp153,"tmp153");
			HX_STACK_LINE(723)
			Float tmp154 = (m134 * m244);		HX_STACK_VAR(tmp154,"tmp154");
			HX_STACK_LINE(723)
			Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
			HX_STACK_LINE(723)
			Float tmp156 = tmp148[(int)11] = tmp155;		HX_STACK_VAR(tmp156,"tmp156");
			HX_STACK_LINE(723)
			tmp156;
			HX_STACK_LINE(723)
			Array< Float > tmp157 = this->rawData;		HX_STACK_VAR(tmp157,"tmp157");
			HX_STACK_LINE(723)
			Float tmp158 = (m141 * m211);		HX_STACK_VAR(tmp158,"tmp158");
			HX_STACK_LINE(723)
			Float tmp159 = (m142 * m221);		HX_STACK_VAR(tmp159,"tmp159");
			HX_STACK_LINE(723)
			Float tmp160 = (tmp158 + tmp159);		HX_STACK_VAR(tmp160,"tmp160");
			HX_STACK_LINE(723)
			Float tmp161 = (m143 * m231);		HX_STACK_VAR(tmp161,"tmp161");
			HX_STACK_LINE(723)
			Float tmp162 = (tmp160 + tmp161);		HX_STACK_VAR(tmp162,"tmp162");
			HX_STACK_LINE(723)
			Float tmp163 = (m144 * m241);		HX_STACK_VAR(tmp163,"tmp163");
			HX_STACK_LINE(723)
			Float tmp164 = (tmp162 + tmp163);		HX_STACK_VAR(tmp164,"tmp164");
			HX_STACK_LINE(723)
			Float tmp165 = tmp157[(int)12] = tmp164;		HX_STACK_VAR(tmp165,"tmp165");
			HX_STACK_LINE(723)
			tmp165;
			HX_STACK_LINE(723)
			Array< Float > tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
			HX_STACK_LINE(723)
			Float tmp167 = (m141 * m212);		HX_STACK_VAR(tmp167,"tmp167");
			HX_STACK_LINE(723)
			Float tmp168 = (m142 * m222);		HX_STACK_VAR(tmp168,"tmp168");
			HX_STACK_LINE(723)
			Float tmp169 = (tmp167 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
			HX_STACK_LINE(723)
			Float tmp170 = (m143 * m232);		HX_STACK_VAR(tmp170,"tmp170");
			HX_STACK_LINE(723)
			Float tmp171 = (tmp169 + tmp170);		HX_STACK_VAR(tmp171,"tmp171");
			HX_STACK_LINE(723)
			Float tmp172 = (m144 * m242);		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(723)
			Float tmp173 = (tmp171 + tmp172);		HX_STACK_VAR(tmp173,"tmp173");
			HX_STACK_LINE(723)
			Float tmp174 = tmp166[(int)13] = tmp173;		HX_STACK_VAR(tmp174,"tmp174");
			HX_STACK_LINE(723)
			tmp174;
			HX_STACK_LINE(723)
			Array< Float > tmp175 = this->rawData;		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(723)
			Float tmp176 = (m141 * m213);		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(723)
			Float tmp177 = (m142 * m223);		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(723)
			Float tmp178 = (tmp176 + tmp177);		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(723)
			Float tmp179 = (m143 * m233);		HX_STACK_VAR(tmp179,"tmp179");
			HX_STACK_LINE(723)
			Float tmp180 = (tmp178 + tmp179);		HX_STACK_VAR(tmp180,"tmp180");
			HX_STACK_LINE(723)
			Float tmp181 = (m144 * m243);		HX_STACK_VAR(tmp181,"tmp181");
			HX_STACK_LINE(723)
			Float tmp182 = (tmp180 + tmp181);		HX_STACK_VAR(tmp182,"tmp182");
			HX_STACK_LINE(723)
			Float tmp183 = tmp175[(int)14] = tmp182;		HX_STACK_VAR(tmp183,"tmp183");
			HX_STACK_LINE(723)
			tmp183;
			HX_STACK_LINE(723)
			Array< Float > tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
			HX_STACK_LINE(723)
			Float tmp185 = (m141 * m214);		HX_STACK_VAR(tmp185,"tmp185");
			HX_STACK_LINE(723)
			Float tmp186 = (m142 * m224);		HX_STACK_VAR(tmp186,"tmp186");
			HX_STACK_LINE(723)
			Float tmp187 = (tmp185 + tmp186);		HX_STACK_VAR(tmp187,"tmp187");
			HX_STACK_LINE(723)
			Float tmp188 = (m143 * m234);		HX_STACK_VAR(tmp188,"tmp188");
			HX_STACK_LINE(723)
			Float tmp189 = (tmp187 + tmp188);		HX_STACK_VAR(tmp189,"tmp189");
			HX_STACK_LINE(723)
			Float tmp190 = (m144 * m244);		HX_STACK_VAR(tmp190,"tmp190");
			HX_STACK_LINE(723)
			Float tmp191 = (tmp189 + tmp190);		HX_STACK_VAR(tmp191,"tmp191");
			HX_STACK_LINE(723)
			Float tmp192 = tmp184[(int)15] = tmp191;		HX_STACK_VAR(tmp192,"tmp192");
			HX_STACK_LINE(723)
			tmp192;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

bool Matrix3D_obj::recompose( Array< ::Dynamic > components,::openfl::geom::Orientation3D orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","recompose",0xd355bb37,"openfl.geom.Matrix3D.recompose","openfl/geom/Matrix3D.hx",728,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(components,"components")
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(730)
	int tmp = components->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	bool tmp1 = (tmp < (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(730)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(730)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(730)
	if ((tmp3)){
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp5 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(730)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(730)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(730)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(730)
		tmp4 = (tmp10 == (int)0);
	}
	else{
		HX_STACK_LINE(730)
		tmp4 = true;
	}
	HX_STACK_LINE(730)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(730)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(730)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(730)
	if ((tmp6)){
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp8 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(730)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(730)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(730)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(730)
		tmp7 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(730)
		tmp7 = true;
	}
	HX_STACK_LINE(730)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(730)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(730)
	if ((tmp8)){
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp10 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(730)
		::openfl::geom::Vector3D tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(730)
		Float tmp12 = tmp11->z;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(730)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(730)
		tmp9 = (tmp13 == (int)0);
	}
	else{
		HX_STACK_LINE(730)
		tmp9 = true;
	}
	HX_STACK_LINE(730)
	if ((tmp9)){
		HX_STACK_LINE(731)
		return false;
	}
	HX_STACK_LINE(733)
	bool tmp10 = (orientationStyle == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(733)
	if ((tmp10)){
		HX_STACK_LINE(734)
		orientationStyle = ::openfl::geom::Orientation3D_obj::EULER_ANGLES;
	}
	HX_STACK_LINE(736)
	this->identity();
	HX_STACK_LINE(738)
	Array< Float > scale = Array_obj< Float >::__new();		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(739)
	::openfl::geom::Vector3D tmp11 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(739)
	Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(739)
	Float tmp13 = scale[(int)2] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(739)
	Float tmp14 = scale[(int)1] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(739)
	scale[(int)0] = tmp14;
	HX_STACK_LINE(740)
	::openfl::geom::Vector3D tmp15 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(740)
	Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(740)
	Float tmp17 = scale[(int)6] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(740)
	Float tmp18 = scale[(int)5] = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(740)
	scale[(int)4] = tmp18;
	HX_STACK_LINE(741)
	::openfl::geom::Vector3D tmp19 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(741)
	Float tmp20 = tmp19->z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(741)
	Float tmp21 = scale[(int)10] = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(741)
	Float tmp22 = scale[(int)9] = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(741)
	scale[(int)8] = tmp22;
	HX_STACK_LINE(743)
	bool tmp23 = (orientationStyle != null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(743)
	if ((tmp23)){
		HX_STACK_LINE(743)
		switch( (int)(orientationStyle->__Index())){
			case (int)1: {
				HX_STACK_LINE(746)
				::openfl::geom::Vector3D tmp24 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(746)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(746)
				Float tmp26 = ::Math_obj::cos(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(746)
				Float cx = tmp26;		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(747)
				::openfl::geom::Vector3D tmp27 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(747)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(747)
				Float tmp29 = ::Math_obj::cos(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(747)
				Float cy = tmp29;		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(748)
				::openfl::geom::Vector3D tmp30 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(748)
				Float tmp31 = tmp30->z;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(748)
				Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(748)
				Float cz = tmp32;		HX_STACK_VAR(cz,"cz");
				HX_STACK_LINE(749)
				::openfl::geom::Vector3D tmp33 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(749)
				Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(749)
				Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(749)
				Float sx = tmp35;		HX_STACK_VAR(sx,"sx");
				HX_STACK_LINE(750)
				::openfl::geom::Vector3D tmp36 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(750)
				Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(750)
				Float tmp38 = ::Math_obj::sin(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(750)
				Float sy = tmp38;		HX_STACK_VAR(sy,"sy");
				HX_STACK_LINE(751)
				::openfl::geom::Vector3D tmp39 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(751)
				Float tmp40 = tmp39->z;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(751)
				Float tmp41 = ::Math_obj::sin(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(751)
				Float sz = tmp41;		HX_STACK_VAR(sz,"sz");
				HX_STACK_LINE(753)
				Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(753)
				Float tmp43 = (cy * cz);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(753)
				Float tmp44 = scale->__get((int)0);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(753)
				Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(753)
				Float tmp46 = tmp42[(int)0] = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(753)
				tmp46;
				HX_STACK_LINE(754)
				Array< Float > tmp47 = this->rawData;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(754)
				Float tmp48 = (cy * sz);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(754)
				Float tmp49 = scale->__get((int)1);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(754)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(754)
				Float tmp51 = tmp47[(int)1] = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(754)
				tmp51;
				HX_STACK_LINE(755)
				Array< Float > tmp52 = this->rawData;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(755)
				Float tmp53 = sy;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(755)
				Float tmp54 = -(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(755)
				Float tmp55 = scale->__get((int)2);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(755)
				Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(755)
				Float tmp57 = tmp52[(int)2] = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(755)
				tmp57;
				HX_STACK_LINE(756)
				Array< Float > tmp58 = this->rawData;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(756)
				Float tmp59 = tmp58[(int)3] = (int)0;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(756)
				tmp59;
				HX_STACK_LINE(757)
				Array< Float > tmp60 = this->rawData;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(757)
				Float tmp61 = (sx * sy);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(757)
				Float tmp62 = cz;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(757)
				Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(757)
				Float tmp64 = (cx * sz);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(757)
				Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(757)
				Float tmp66 = scale->__get((int)4);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(757)
				Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(757)
				Float tmp68 = tmp60[(int)4] = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(757)
				tmp68;
				HX_STACK_LINE(758)
				Array< Float > tmp69 = this->rawData;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(758)
				Float tmp70 = (sx * sy);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(758)
				Float tmp71 = sz;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(758)
				Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(758)
				Float tmp73 = (cx * cz);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(758)
				Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(758)
				Float tmp75 = scale->__get((int)5);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(758)
				Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(758)
				Float tmp77 = tmp69[(int)5] = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(758)
				tmp77;
				HX_STACK_LINE(759)
				Array< Float > tmp78 = this->rawData;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(759)
				Float tmp79 = (sx * cy);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(759)
				Float tmp80 = scale->__get((int)6);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(759)
				Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(759)
				Float tmp82 = tmp78[(int)6] = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(759)
				tmp82;
				HX_STACK_LINE(760)
				Array< Float > tmp83 = this->rawData;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(760)
				Float tmp84 = tmp83[(int)7] = (int)0;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(760)
				tmp84;
				HX_STACK_LINE(761)
				Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(761)
				Float tmp86 = (cx * sy);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(761)
				Float tmp87 = cz;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(761)
				Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(761)
				Float tmp89 = (sx * sz);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(761)
				Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(761)
				Float tmp91 = scale->__get((int)8);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(761)
				Float tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(761)
				Float tmp93 = tmp85[(int)8] = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(761)
				tmp93;
				HX_STACK_LINE(762)
				Array< Float > tmp94 = this->rawData;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(762)
				Float tmp95 = (cx * sy);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(762)
				Float tmp96 = sz;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(762)
				Float tmp97 = (tmp95 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(762)
				Float tmp98 = (sx * cz);		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(762)
				Float tmp99 = (tmp97 - tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(762)
				Float tmp100 = scale->__get((int)9);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(762)
				Float tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(762)
				Float tmp102 = tmp94[(int)9] = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(762)
				tmp102;
				HX_STACK_LINE(763)
				Array< Float > tmp103 = this->rawData;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(763)
				Float tmp104 = (cx * cy);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(763)
				Float tmp105 = scale->__get((int)10);		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(763)
				Float tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(763)
				Float tmp107 = tmp103[(int)10] = tmp106;		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(763)
				tmp107;
				HX_STACK_LINE(764)
				Array< Float > tmp108 = this->rawData;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(764)
				Float tmp109 = tmp108[(int)11] = (int)0;		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(764)
				tmp109;
				HX_STACK_LINE(765)
				Array< Float > tmp110 = this->rawData;		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(765)
				::openfl::geom::Vector3D tmp111 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(765)
				Float tmp112 = tmp111->x;		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(765)
				Float tmp113 = tmp110[(int)12] = tmp112;		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(765)
				tmp113;
				HX_STACK_LINE(766)
				Array< Float > tmp114 = this->rawData;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(766)
				::openfl::geom::Vector3D tmp115 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(766)
				Float tmp116 = tmp115->y;		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(766)
				Float tmp117 = tmp114[(int)13] = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(766)
				tmp117;
				HX_STACK_LINE(767)
				Array< Float > tmp118 = this->rawData;		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(767)
				::openfl::geom::Vector3D tmp119 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(767)
				Float tmp120 = tmp119->z;		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(767)
				Float tmp121 = tmp118[(int)14] = tmp120;		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(767)
				tmp121;
				HX_STACK_LINE(768)
				Array< Float > tmp122 = this->rawData;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(768)
				Float tmp123 = tmp122[(int)15] = (int)1;		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(768)
				tmp123;
			}
			;break;
			default: {
				HX_STACK_LINE(772)
				::openfl::geom::Vector3D tmp24 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(772)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(772)
				Float x = tmp25;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(773)
				::openfl::geom::Vector3D tmp26 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(773)
				Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(773)
				Float y = tmp27;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(774)
				::openfl::geom::Vector3D tmp28 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(774)
				Float tmp29 = tmp28->z;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(774)
				Float z = tmp29;		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(775)
				::openfl::geom::Vector3D tmp30 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(775)
				Float tmp31 = tmp30->w;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(775)
				Float w = tmp31;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(776)
				::openfl::geom::Orientation3D tmp32 = orientationStyle;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(776)
				bool tmp33 = ::Type_obj::enumEq(tmp32,::openfl::geom::Orientation3D_obj::AXIS_ANGLE);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(776)
				if ((tmp33)){
					HX_STACK_LINE(777)
					Float tmp34 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(777)
					Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(777)
					hx::MultEq(x,tmp35);
					HX_STACK_LINE(778)
					Float tmp36 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(778)
					Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(778)
					hx::MultEq(y,tmp37);
					HX_STACK_LINE(779)
					Float tmp38 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(779)
					Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(779)
					hx::MultEq(z,tmp39);
					HX_STACK_LINE(780)
					Float tmp40 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(780)
					Float tmp41 = ::Math_obj::cos(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(780)
					w = tmp41;
				}
				HX_STACK_LINE(783)
				Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(783)
				Float tmp35 = ((int)2 * y);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(783)
				Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(783)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(783)
				Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(783)
				Float tmp39 = ((int)2 * z);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(783)
				Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(783)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(783)
				Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(783)
				Float tmp43 = scale->__get((int)0);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(783)
				Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(783)
				Float tmp45 = tmp34[(int)0] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(783)
				tmp45;
				HX_STACK_LINE(784)
				Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(784)
				Float tmp47 = ((int)2 * x);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(784)
				Float tmp48 = y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(784)
				Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(784)
				Float tmp50 = ((int)2 * w);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(784)
				Float tmp51 = z;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(784)
				Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(784)
				Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(784)
				Float tmp54 = scale->__get((int)1);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(784)
				Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(784)
				Float tmp56 = tmp46[(int)1] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(784)
				tmp56;
				HX_STACK_LINE(785)
				Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(785)
				Float tmp58 = ((int)2 * x);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(785)
				Float tmp59 = z;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(785)
				Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(785)
				Float tmp61 = ((int)2 * w);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(785)
				Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(785)
				Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(785)
				Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(785)
				Float tmp65 = scale->__get((int)2);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(785)
				Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(785)
				Float tmp67 = tmp57[(int)2] = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(785)
				tmp67;
				HX_STACK_LINE(786)
				Array< Float > tmp68 = this->rawData;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(786)
				Float tmp69 = tmp68[(int)3] = (int)0;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(786)
				tmp69;
				HX_STACK_LINE(787)
				Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(787)
				Float tmp71 = ((int)2 * x);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(787)
				Float tmp72 = y;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(787)
				Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(787)
				Float tmp74 = ((int)2 * w);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(787)
				Float tmp75 = z;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(787)
				Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(787)
				Float tmp77 = (tmp73 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(787)
				Float tmp78 = scale->__get((int)4);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(787)
				Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(787)
				Float tmp80 = tmp70[(int)4] = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(787)
				tmp80;
				HX_STACK_LINE(788)
				Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(788)
				Float tmp82 = ((int)2 * x);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(788)
				Float tmp83 = x;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(788)
				Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(788)
				Float tmp85 = ((int)1 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(788)
				Float tmp86 = ((int)2 * z);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(788)
				Float tmp87 = z;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(788)
				Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(788)
				Float tmp89 = (tmp85 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(788)
				Float tmp90 = scale->__get((int)5);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(788)
				Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(788)
				Float tmp92 = tmp81[(int)5] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(788)
				tmp92;
				HX_STACK_LINE(789)
				Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(789)
				Float tmp94 = ((int)2 * y);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(789)
				Float tmp95 = z;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(789)
				Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(789)
				Float tmp97 = ((int)2 * w);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(789)
				Float tmp98 = x;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(789)
				Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(789)
				Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(789)
				Float tmp101 = scale->__get((int)6);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(789)
				Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(789)
				Float tmp103 = tmp93[(int)6] = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(789)
				tmp103;
				HX_STACK_LINE(790)
				Array< Float > tmp104 = this->rawData;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(790)
				Float tmp105 = tmp104[(int)7] = (int)0;		HX_STACK_VAR(tmp105,"tmp105");
				HX_STACK_LINE(790)
				tmp105;
				HX_STACK_LINE(791)
				Array< Float > tmp106 = this->rawData;		HX_STACK_VAR(tmp106,"tmp106");
				HX_STACK_LINE(791)
				Float tmp107 = ((int)2 * x);		HX_STACK_VAR(tmp107,"tmp107");
				HX_STACK_LINE(791)
				Float tmp108 = z;		HX_STACK_VAR(tmp108,"tmp108");
				HX_STACK_LINE(791)
				Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
				HX_STACK_LINE(791)
				Float tmp110 = ((int)2 * w);		HX_STACK_VAR(tmp110,"tmp110");
				HX_STACK_LINE(791)
				Float tmp111 = y;		HX_STACK_VAR(tmp111,"tmp111");
				HX_STACK_LINE(791)
				Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
				HX_STACK_LINE(791)
				Float tmp113 = (tmp109 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
				HX_STACK_LINE(791)
				Float tmp114 = scale->__get((int)8);		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(791)
				Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
				HX_STACK_LINE(791)
				Float tmp116 = tmp106[(int)8] = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
				HX_STACK_LINE(791)
				tmp116;
				HX_STACK_LINE(792)
				Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
				HX_STACK_LINE(792)
				Float tmp118 = ((int)2 * y);		HX_STACK_VAR(tmp118,"tmp118");
				HX_STACK_LINE(792)
				Float tmp119 = z;		HX_STACK_VAR(tmp119,"tmp119");
				HX_STACK_LINE(792)
				Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
				HX_STACK_LINE(792)
				Float tmp121 = ((int)2 * w);		HX_STACK_VAR(tmp121,"tmp121");
				HX_STACK_LINE(792)
				Float tmp122 = x;		HX_STACK_VAR(tmp122,"tmp122");
				HX_STACK_LINE(792)
				Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
				HX_STACK_LINE(792)
				Float tmp124 = (tmp120 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
				HX_STACK_LINE(792)
				Float tmp125 = scale->__get((int)9);		HX_STACK_VAR(tmp125,"tmp125");
				HX_STACK_LINE(792)
				Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
				HX_STACK_LINE(792)
				Float tmp127 = tmp117[(int)9] = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
				HX_STACK_LINE(792)
				tmp127;
				HX_STACK_LINE(793)
				Array< Float > tmp128 = this->rawData;		HX_STACK_VAR(tmp128,"tmp128");
				HX_STACK_LINE(793)
				Float tmp129 = ((int)2 * x);		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(793)
				Float tmp130 = x;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(793)
				Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(793)
				Float tmp132 = ((int)1 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(793)
				Float tmp133 = ((int)2 * y);		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(793)
				Float tmp134 = y;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(793)
				Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(793)
				Float tmp136 = (tmp132 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(793)
				Float tmp137 = scale->__get((int)10);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(793)
				Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(793)
				Float tmp139 = tmp128[(int)10] = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(793)
				tmp139;
				HX_STACK_LINE(794)
				Array< Float > tmp140 = this->rawData;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(794)
				Float tmp141 = tmp140[(int)11] = (int)0;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(794)
				tmp141;
				HX_STACK_LINE(795)
				Array< Float > tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(795)
				::openfl::geom::Vector3D tmp143 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(795)
				Float tmp144 = tmp143->x;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(795)
				Float tmp145 = tmp142[(int)12] = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(795)
				tmp145;
				HX_STACK_LINE(796)
				Array< Float > tmp146 = this->rawData;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(796)
				::openfl::geom::Vector3D tmp147 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(796)
				Float tmp148 = tmp147->y;		HX_STACK_VAR(tmp148,"tmp148");
				HX_STACK_LINE(796)
				Float tmp149 = tmp146[(int)13] = tmp148;		HX_STACK_VAR(tmp149,"tmp149");
				HX_STACK_LINE(796)
				tmp149;
				HX_STACK_LINE(797)
				Array< Float > tmp150 = this->rawData;		HX_STACK_VAR(tmp150,"tmp150");
				HX_STACK_LINE(797)
				::openfl::geom::Vector3D tmp151 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp151,"tmp151");
				HX_STACK_LINE(797)
				Float tmp152 = tmp151->z;		HX_STACK_VAR(tmp152,"tmp152");
				HX_STACK_LINE(797)
				Float tmp153 = tmp150[(int)14] = tmp152;		HX_STACK_VAR(tmp153,"tmp153");
				HX_STACK_LINE(797)
				tmp153;
				HX_STACK_LINE(798)
				Array< Float > tmp154 = this->rawData;		HX_STACK_VAR(tmp154,"tmp154");
				HX_STACK_LINE(798)
				Float tmp155 = tmp154[(int)15] = (int)1;		HX_STACK_VAR(tmp155,"tmp155");
				HX_STACK_LINE(798)
				tmp155;
			}
		}
	}
	else{
		HX_STACK_LINE(772)
		::openfl::geom::Vector3D tmp24 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(772)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(772)
		Float x = tmp25;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(773)
		::openfl::geom::Vector3D tmp26 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(773)
		Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(773)
		Float y = tmp27;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(774)
		::openfl::geom::Vector3D tmp28 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(774)
		Float tmp29 = tmp28->z;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(774)
		Float z = tmp29;		HX_STACK_VAR(z,"z");
		HX_STACK_LINE(775)
		::openfl::geom::Vector3D tmp30 = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(775)
		Float tmp31 = tmp30->w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(775)
		Float w = tmp31;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(776)
		::openfl::geom::Orientation3D tmp32 = orientationStyle;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(776)
		bool tmp33 = ::Type_obj::enumEq(tmp32,::openfl::geom::Orientation3D_obj::AXIS_ANGLE);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(776)
		if ((tmp33)){
			HX_STACK_LINE(777)
			Float tmp34 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(777)
			Float tmp35 = ::Math_obj::sin(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(777)
			hx::MultEq(x,tmp35);
			HX_STACK_LINE(778)
			Float tmp36 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(778)
			Float tmp37 = ::Math_obj::sin(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(778)
			hx::MultEq(y,tmp37);
			HX_STACK_LINE(779)
			Float tmp38 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(779)
			Float tmp39 = ::Math_obj::sin(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(779)
			hx::MultEq(z,tmp39);
			HX_STACK_LINE(780)
			Float tmp40 = (Float(w) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(780)
			Float tmp41 = ::Math_obj::cos(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(780)
			w = tmp41;
		}
		HX_STACK_LINE(783)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(783)
		Float tmp35 = ((int)2 * y);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(783)
		Float tmp36 = y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(783)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(783)
		Float tmp38 = ((int)1 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(783)
		Float tmp39 = ((int)2 * z);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(783)
		Float tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(783)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(783)
		Float tmp42 = (tmp38 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(783)
		Float tmp43 = scale->__get((int)0);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(783)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(783)
		Float tmp45 = tmp34[(int)0] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(783)
		tmp45;
		HX_STACK_LINE(784)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(784)
		Float tmp47 = ((int)2 * x);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(784)
		Float tmp48 = y;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(784)
		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(784)
		Float tmp50 = ((int)2 * w);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(784)
		Float tmp51 = z;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(784)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(784)
		Float tmp53 = (tmp49 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(784)
		Float tmp54 = scale->__get((int)1);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(784)
		Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(784)
		Float tmp56 = tmp46[(int)1] = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(784)
		tmp56;
		HX_STACK_LINE(785)
		Array< Float > tmp57 = this->rawData;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(785)
		Float tmp58 = ((int)2 * x);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(785)
		Float tmp59 = z;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(785)
		Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(785)
		Float tmp61 = ((int)2 * w);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(785)
		Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(785)
		Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(785)
		Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(785)
		Float tmp65 = scale->__get((int)2);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(785)
		Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(785)
		Float tmp67 = tmp57[(int)2] = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(785)
		tmp67;
		HX_STACK_LINE(786)
		Array< Float > tmp68 = this->rawData;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(786)
		Float tmp69 = tmp68[(int)3] = (int)0;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(786)
		tmp69;
		HX_STACK_LINE(787)
		Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(787)
		Float tmp71 = ((int)2 * x);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(787)
		Float tmp72 = y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(787)
		Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(787)
		Float tmp74 = ((int)2 * w);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(787)
		Float tmp75 = z;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(787)
		Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(787)
		Float tmp77 = (tmp73 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(787)
		Float tmp78 = scale->__get((int)4);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(787)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(787)
		Float tmp80 = tmp70[(int)4] = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(787)
		tmp80;
		HX_STACK_LINE(788)
		Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(788)
		Float tmp82 = ((int)2 * x);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(788)
		Float tmp83 = x;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(788)
		Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(788)
		Float tmp85 = ((int)1 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(788)
		Float tmp86 = ((int)2 * z);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(788)
		Float tmp87 = z;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(788)
		Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(788)
		Float tmp89 = (tmp85 - tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(788)
		Float tmp90 = scale->__get((int)5);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(788)
		Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(788)
		Float tmp92 = tmp81[(int)5] = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(788)
		tmp92;
		HX_STACK_LINE(789)
		Array< Float > tmp93 = this->rawData;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(789)
		Float tmp94 = ((int)2 * y);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(789)
		Float tmp95 = z;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(789)
		Float tmp96 = (tmp94 * tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(789)
		Float tmp97 = ((int)2 * w);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(789)
		Float tmp98 = x;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(789)
		Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(789)
		Float tmp100 = (tmp96 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(789)
		Float tmp101 = scale->__get((int)6);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(789)
		Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(789)
		Float tmp103 = tmp93[(int)6] = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(789)
		tmp103;
		HX_STACK_LINE(790)
		Array< Float > tmp104 = this->rawData;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(790)
		Float tmp105 = tmp104[(int)7] = (int)0;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(790)
		tmp105;
		HX_STACK_LINE(791)
		Array< Float > tmp106 = this->rawData;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(791)
		Float tmp107 = ((int)2 * x);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(791)
		Float tmp108 = z;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(791)
		Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(791)
		Float tmp110 = ((int)2 * w);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(791)
		Float tmp111 = y;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(791)
		Float tmp112 = (tmp110 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(791)
		Float tmp113 = (tmp109 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(791)
		Float tmp114 = scale->__get((int)8);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(791)
		Float tmp115 = (tmp113 * tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(791)
		Float tmp116 = tmp106[(int)8] = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(791)
		tmp116;
		HX_STACK_LINE(792)
		Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(792)
		Float tmp118 = ((int)2 * y);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(792)
		Float tmp119 = z;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(792)
		Float tmp120 = (tmp118 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(792)
		Float tmp121 = ((int)2 * w);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(792)
		Float tmp122 = x;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(792)
		Float tmp123 = (tmp121 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(792)
		Float tmp124 = (tmp120 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(792)
		Float tmp125 = scale->__get((int)9);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(792)
		Float tmp126 = (tmp124 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(792)
		Float tmp127 = tmp117[(int)9] = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(792)
		tmp127;
		HX_STACK_LINE(793)
		Array< Float > tmp128 = this->rawData;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(793)
		Float tmp129 = ((int)2 * x);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(793)
		Float tmp130 = x;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(793)
		Float tmp131 = (tmp129 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(793)
		Float tmp132 = ((int)1 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(793)
		Float tmp133 = ((int)2 * y);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(793)
		Float tmp134 = y;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(793)
		Float tmp135 = (tmp133 * tmp134);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(793)
		Float tmp136 = (tmp132 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(793)
		Float tmp137 = scale->__get((int)10);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(793)
		Float tmp138 = (tmp136 * tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(793)
		Float tmp139 = tmp128[(int)10] = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(793)
		tmp139;
		HX_STACK_LINE(794)
		Array< Float > tmp140 = this->rawData;		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(794)
		Float tmp141 = tmp140[(int)11] = (int)0;		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(794)
		tmp141;
		HX_STACK_LINE(795)
		Array< Float > tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(795)
		::openfl::geom::Vector3D tmp143 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(795)
		Float tmp144 = tmp143->x;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(795)
		Float tmp145 = tmp142[(int)12] = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(795)
		tmp145;
		HX_STACK_LINE(796)
		Array< Float > tmp146 = this->rawData;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(796)
		::openfl::geom::Vector3D tmp147 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(796)
		Float tmp148 = tmp147->y;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(796)
		Float tmp149 = tmp146[(int)13] = tmp148;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(796)
		tmp149;
		HX_STACK_LINE(797)
		Array< Float > tmp150 = this->rawData;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(797)
		::openfl::geom::Vector3D tmp151 = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(797)
		Float tmp152 = tmp151->z;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(797)
		Float tmp153 = tmp150[(int)14] = tmp152;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(797)
		tmp153;
		HX_STACK_LINE(798)
		Array< Float > tmp154 = this->rawData;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(798)
		Float tmp155 = tmp154[(int)15] = (int)1;		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(798)
		tmp155;
	}
	HX_STACK_LINE(801)
	::openfl::geom::Vector3D tmp24 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(801)
	Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(801)
	bool tmp26 = (tmp25 == (int)0);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(801)
	if ((tmp26)){
		HX_STACK_LINE(802)
		Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(802)
		Float tmp28 = tmp27[(int)0] = ((Float)1e-15);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(802)
		tmp28;
	}
	HX_STACK_LINE(803)
	::openfl::geom::Vector3D tmp27 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(803)
	Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(803)
	bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(803)
	if ((tmp29)){
		HX_STACK_LINE(804)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(804)
		Float tmp31 = tmp30[(int)5] = ((Float)1e-15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(804)
		tmp31;
	}
	HX_STACK_LINE(805)
	::openfl::geom::Vector3D tmp30 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(805)
	Float tmp31 = tmp30->z;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(805)
	bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(805)
	if ((tmp32)){
		HX_STACK_LINE(806)
		Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(806)
		Float tmp34 = tmp33[(int)10] = ((Float)1e-15);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(806)
		tmp34;
	}
	HX_STACK_LINE(808)
	::openfl::geom::Vector3D tmp33 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(808)
	Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(808)
	bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(808)
	bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(808)
	bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(808)
	bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(808)
	if ((tmp37)){
		HX_STACK_LINE(808)
		::openfl::geom::Vector3D tmp39 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(808)
		::openfl::geom::Vector3D tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(808)
		::openfl::geom::Vector3D tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(808)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(808)
		Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(808)
		Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(808)
		tmp38 = (tmp44 == (int)0);
	}
	else{
		HX_STACK_LINE(808)
		tmp38 = true;
	}
	HX_STACK_LINE(808)
	bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(808)
	bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(808)
	if ((tmp39)){
		HX_STACK_LINE(808)
		::openfl::geom::Vector3D tmp41 = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(808)
		::openfl::geom::Vector3D tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(808)
		Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(808)
		Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(808)
		tmp40 = (tmp44 == (int)0);
	}
	else{
		HX_STACK_LINE(808)
		tmp40 = true;
	}
	HX_STACK_LINE(808)
	bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(808)
	return tmp41;
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,recompose,return )

::openfl::geom::Vector3D Matrix3D_obj::transformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","transformVector",0x3f2dcec7,"openfl.geom.Matrix3D.transformVector","openfl/geom/Matrix3D.hx",812,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(814)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(814)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(814)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(817)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(817)
	Array< Float > tmp1 = this->rawData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(817)
	Float tmp2 = tmp1->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(817)
	Dynamic tmp3 = ((Dynamic)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(817)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(817)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(817)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(817)
	Float tmp7 = tmp6->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(817)
	Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(817)
	Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(817)
	Float tmp10 = (tmp4 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(817)
	Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(817)
	Array< Float > tmp12 = this->rawData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(817)
	Float tmp13 = tmp12->__get((int)8);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(817)
	Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(817)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(817)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(817)
	Array< Float > tmp17 = this->rawData;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(817)
	Float tmp18 = tmp17->__get((int)12);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(817)
	Dynamic tmp19 = ((Dynamic)(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(817)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(818)
	Float tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(818)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(818)
	Float tmp23 = tmp22->__get((int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(818)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(818)
	Float tmp25 = (tmp21 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(818)
	Float tmp26 = y;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(818)
	Array< Float > tmp27 = this->rawData;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(818)
	Float tmp28 = tmp27->__get((int)5);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(818)
	Dynamic tmp29 = ((Dynamic)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(818)
	Float tmp30 = (tmp26 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(818)
	Float tmp31 = (tmp25 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(818)
	Float tmp32 = z;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(818)
	Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(818)
	Float tmp34 = tmp33->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(818)
	Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(818)
	Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(818)
	Float tmp37 = (tmp31 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(818)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(818)
	Float tmp39 = tmp38->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(818)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(818)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(819)
	Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(819)
	Array< Float > tmp43 = this->rawData;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(819)
	Float tmp44 = tmp43->__get((int)2);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(819)
	Dynamic tmp45 = ((Dynamic)(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(819)
	Float tmp46 = (tmp42 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(819)
	Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(819)
	Array< Float > tmp48 = this->rawData;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(819)
	Float tmp49 = tmp48->__get((int)6);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(819)
	Dynamic tmp50 = ((Dynamic)(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(819)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(819)
	Float tmp52 = (tmp46 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(819)
	Float tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(819)
	Array< Float > tmp54 = this->rawData;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(819)
	Float tmp55 = tmp54->__get((int)10);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(819)
	Dynamic tmp56 = ((Dynamic)(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(819)
	Float tmp57 = (tmp53 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(819)
	Float tmp58 = (tmp52 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(819)
	Array< Float > tmp59 = this->rawData;		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(819)
	Float tmp60 = tmp59->__get((int)14);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(819)
	Dynamic tmp61 = ((Dynamic)(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(819)
	Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(820)
	Float tmp63 = x;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(820)
	Array< Float > tmp64 = this->rawData;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(820)
	Float tmp65 = tmp64->__get((int)3);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(820)
	Dynamic tmp66 = ((Dynamic)(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(820)
	Float tmp67 = (tmp63 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(820)
	Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(820)
	Array< Float > tmp69 = this->rawData;		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(820)
	Float tmp70 = tmp69->__get((int)7);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(820)
	Dynamic tmp71 = ((Dynamic)(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(820)
	Float tmp72 = (tmp68 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(820)
	Float tmp73 = (tmp67 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(820)
	Float tmp74 = z;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(820)
	Array< Float > tmp75 = this->rawData;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(820)
	Float tmp76 = tmp75->__get((int)11);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(820)
	Dynamic tmp77 = ((Dynamic)(tmp76));		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(820)
	Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(820)
	Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(820)
	Array< Float > tmp80 = this->rawData;		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(820)
	Float tmp81 = tmp80->__get((int)15);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(820)
	Dynamic tmp82 = ((Dynamic)(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(820)
	Float tmp83 = (tmp79 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(816)
	::openfl::geom::Vector3D tmp84 = ::openfl::geom::Vector3D_obj::__new(tmp20,tmp41,tmp62,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(816)
	return tmp84;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

Void Matrix3D_obj::transformVectors( Array< Float > vin,Array< Float > vout){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transformVectors",0x08e71fcc,"openfl.geom.Matrix3D.transformVectors","openfl/geom/Matrix3D.hx",825,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vin,"vin")
		HX_STACK_ARG(vout,"vout")
		HX_STACK_LINE(827)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(829)
		while((true)){
			HX_STACK_LINE(829)
			int tmp = (i + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(829)
			int tmp1 = vin->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(829)
			bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(829)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(829)
			if ((tmp3)){
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(831)
			Float tmp4 = vin->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(831)
			Float x = ((Dynamic)(tmp4));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(831)
			int tmp5 = (i + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(831)
			Float tmp6 = vin->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(831)
			Float y = ((Dynamic)(tmp6));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(831)
			int tmp7 = (i + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(831)
			Float tmp8 = vin->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(831)
			Float z = ((Dynamic)(tmp8));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(833)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(833)
			Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(833)
			Float tmp11 = tmp10->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(833)
			Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(833)
			Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(833)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(833)
			Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(833)
			Float tmp16 = tmp15->__get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(833)
			Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(833)
			Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(833)
			Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(833)
			Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(833)
			Array< Float > tmp21 = this->rawData;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(833)
			Float tmp22 = tmp21->__get((int)8);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(833)
			Dynamic tmp23 = ((Dynamic)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(833)
			Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(833)
			Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(833)
			Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(833)
			Float tmp27 = tmp26->__get((int)12);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(833)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(833)
			Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(833)
			Float tmp30 = vout[i] = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(833)
			tmp30;
			HX_STACK_LINE(834)
			int tmp31 = (i + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(834)
			Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(834)
			Array< Float > tmp33 = this->rawData;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(834)
			Float tmp34 = tmp33->__get((int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(834)
			Dynamic tmp35 = ((Dynamic)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(834)
			Float tmp36 = (tmp32 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(834)
			Float tmp37 = y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(834)
			Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(834)
			Float tmp39 = tmp38->__get((int)5);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(834)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(834)
			Float tmp41 = (tmp37 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(834)
			Float tmp42 = (tmp36 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(834)
			Float tmp43 = z;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(834)
			Array< Float > tmp44 = this->rawData;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(834)
			Float tmp45 = tmp44->__get((int)9);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(834)
			Dynamic tmp46 = ((Dynamic)(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(834)
			Float tmp47 = (tmp43 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(834)
			Float tmp48 = (tmp42 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(834)
			Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(834)
			Float tmp50 = tmp49->__get((int)13);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(834)
			Dynamic tmp51 = ((Dynamic)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(834)
			Float tmp52 = (tmp48 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(834)
			Float tmp53 = vout[tmp31] = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(834)
			tmp53;
			HX_STACK_LINE(835)
			int tmp54 = (i + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(835)
			Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(835)
			Array< Float > tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(835)
			Float tmp57 = tmp56->__get((int)2);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(835)
			Dynamic tmp58 = ((Dynamic)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(835)
			Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(835)
			Float tmp60 = y;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(835)
			Array< Float > tmp61 = this->rawData;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(835)
			Float tmp62 = tmp61->__get((int)6);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(835)
			Dynamic tmp63 = ((Dynamic)(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(835)
			Float tmp64 = (tmp60 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(835)
			Float tmp65 = (tmp59 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(835)
			Float tmp66 = z;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(835)
			Array< Float > tmp67 = this->rawData;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(835)
			Float tmp68 = tmp67->__get((int)10);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(835)
			Dynamic tmp69 = ((Dynamic)(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(835)
			Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(835)
			Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(835)
			Array< Float > tmp72 = this->rawData;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(835)
			Float tmp73 = tmp72->__get((int)14);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(835)
			Dynamic tmp74 = ((Dynamic)(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(835)
			Float tmp75 = (tmp71 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(835)
			Float tmp76 = vout[tmp54] = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(835)
			tmp76;
			HX_STACK_LINE(837)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

Void Matrix3D_obj::transpose( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transpose",0x1ba989f1,"openfl.geom.Matrix3D.transpose","openfl/geom/Matrix3D.hx",844,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(846)
		Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(846)
		Array< Float > tmp1 = tmp->copy();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(846)
		Array< Float > oRawData = tmp1;		HX_STACK_VAR(oRawData,"oRawData");
		HX_STACK_LINE(847)
		Array< Float > tmp2 = this->rawData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(847)
		Float tmp3 = oRawData->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(847)
		Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(847)
		Float tmp5 = tmp2[(int)1] = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(847)
		tmp5;
		HX_STACK_LINE(848)
		Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(848)
		Float tmp7 = oRawData->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(848)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(848)
		Float tmp9 = tmp6[(int)2] = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(848)
		tmp9;
		HX_STACK_LINE(849)
		Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(849)
		Float tmp11 = oRawData->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(849)
		Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(849)
		Float tmp13 = tmp10[(int)3] = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(849)
		tmp13;
		HX_STACK_LINE(850)
		Array< Float > tmp14 = this->rawData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(850)
		Float tmp15 = oRawData->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(850)
		Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(850)
		Float tmp17 = tmp14[(int)4] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(850)
		tmp17;
		HX_STACK_LINE(851)
		Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(851)
		Float tmp19 = oRawData->__get((int)9);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(851)
		Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(851)
		Float tmp21 = tmp18[(int)6] = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(851)
		tmp21;
		HX_STACK_LINE(852)
		Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(852)
		Float tmp23 = oRawData->__get((int)13);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(852)
		Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(852)
		Float tmp25 = tmp22[(int)7] = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(852)
		tmp25;
		HX_STACK_LINE(853)
		Array< Float > tmp26 = this->rawData;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(853)
		Float tmp27 = oRawData->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(853)
		Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(853)
		Float tmp29 = tmp26[(int)8] = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(853)
		tmp29;
		HX_STACK_LINE(854)
		Array< Float > tmp30 = this->rawData;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(854)
		Float tmp31 = oRawData->__get((int)6);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(854)
		Dynamic tmp32 = ((Dynamic)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(854)
		Float tmp33 = tmp30[(int)9] = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(854)
		tmp33;
		HX_STACK_LINE(855)
		Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(855)
		Float tmp35 = oRawData->__get((int)14);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(855)
		Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(855)
		Float tmp37 = tmp34[(int)11] = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(855)
		tmp37;
		HX_STACK_LINE(856)
		Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(856)
		Float tmp39 = oRawData->__get((int)3);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(856)
		Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(856)
		Float tmp41 = tmp38[(int)12] = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(856)
		tmp41;
		HX_STACK_LINE(857)
		Array< Float > tmp42 = this->rawData;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(857)
		Float tmp43 = oRawData->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(857)
		Dynamic tmp44 = ((Dynamic)(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(857)
		Float tmp45 = tmp42[(int)13] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(857)
		tmp45;
		HX_STACK_LINE(858)
		Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(858)
		Float tmp47 = oRawData->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(858)
		Dynamic tmp48 = ((Dynamic)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(858)
		Float tmp49 = tmp46[(int)14] = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(858)
		tmp49;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Float Matrix3D_obj::get_determinant( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_determinant",0x5f71b8a4,"openfl.geom.Matrix3D.get_determinant","openfl/geom/Matrix3D.hx",901,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(903)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(903)
	Float tmp1 = tmp->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(903)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(903)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(903)
	Float tmp4 = tmp3->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(903)
	Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(903)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(903)
	Array< Float > tmp7 = this->rawData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(903)
	Float tmp8 = tmp7->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(903)
	Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(903)
	Array< Float > tmp10 = this->rawData;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(903)
	Float tmp11 = tmp10->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(903)
	Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(903)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(903)
	Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(903)
	Array< Float > tmp15 = this->rawData;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(903)
	Float tmp16 = tmp15->__get((int)10);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(903)
	Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(903)
	Array< Float > tmp18 = this->rawData;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(903)
	Float tmp19 = tmp18->__get((int)15);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(903)
	Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(903)
	Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(903)
	Array< Float > tmp22 = this->rawData;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(903)
	Float tmp23 = tmp22->__get((int)14);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(903)
	Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(903)
	Array< Float > tmp25 = this->rawData;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(903)
	Float tmp26 = tmp25->__get((int)11);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(903)
	Dynamic tmp27 = ((Dynamic)(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(903)
	Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(903)
	Float tmp29 = (tmp21 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(903)
	Float tmp30 = (tmp14 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(904)
	Array< Float > tmp31 = this->rawData;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(904)
	Float tmp32 = tmp31->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(904)
	Dynamic tmp33 = ((Dynamic)(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(904)
	Array< Float > tmp34 = this->rawData;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(904)
	Float tmp35 = tmp34->__get((int)9);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(904)
	Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(904)
	Float tmp37 = (tmp33 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(904)
	Array< Float > tmp38 = this->rawData;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(904)
	Float tmp39 = tmp38->__get((int)8);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(904)
	Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(904)
	Array< Float > tmp41 = this->rawData;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(904)
	Float tmp42 = tmp41->__get((int)1);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(904)
	Dynamic tmp43 = ((Dynamic)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(904)
	Float tmp44 = (tmp40 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(904)
	Float tmp45 = (tmp37 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(904)
	Array< Float > tmp46 = this->rawData;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(904)
	Float tmp47 = tmp46->__get((int)6);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(904)
	Dynamic tmp48 = ((Dynamic)(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(904)
	Array< Float > tmp49 = this->rawData;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(904)
	Float tmp50 = tmp49->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(904)
	Dynamic tmp51 = ((Dynamic)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(904)
	Float tmp52 = (tmp48 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(904)
	Array< Float > tmp53 = this->rawData;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(904)
	Float tmp54 = tmp53->__get((int)14);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(904)
	Dynamic tmp55 = ((Dynamic)(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(904)
	Array< Float > tmp56 = this->rawData;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(904)
	Float tmp57 = tmp56->__get((int)7);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(904)
	Dynamic tmp58 = ((Dynamic)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(904)
	Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(904)
	Float tmp60 = (tmp52 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(904)
	Float tmp61 = (tmp45 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(903)
	Float tmp62 = (tmp30 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(905)
	Array< Float > tmp63 = this->rawData;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(905)
	Float tmp64 = tmp63->__get((int)0);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(905)
	Dynamic tmp65 = ((Dynamic)(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(905)
	Array< Float > tmp66 = this->rawData;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(905)
	Float tmp67 = tmp66->__get((int)13);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(905)
	Dynamic tmp68 = ((Dynamic)(tmp67));		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(905)
	Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(905)
	Array< Float > tmp70 = this->rawData;		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(905)
	Float tmp71 = tmp70->__get((int)12);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(905)
	Dynamic tmp72 = ((Dynamic)(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(905)
	Array< Float > tmp73 = this->rawData;		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(905)
	Float tmp74 = tmp73->__get((int)1);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(905)
	Dynamic tmp75 = ((Dynamic)(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(905)
	Float tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(905)
	Float tmp77 = (tmp69 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(905)
	Array< Float > tmp78 = this->rawData;		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(905)
	Float tmp79 = tmp78->__get((int)6);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(905)
	Dynamic tmp80 = ((Dynamic)(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(905)
	Array< Float > tmp81 = this->rawData;		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(905)
	Float tmp82 = tmp81->__get((int)11);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(905)
	Dynamic tmp83 = ((Dynamic)(tmp82));		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(905)
	Float tmp84 = (tmp80 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(905)
	Array< Float > tmp85 = this->rawData;		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(905)
	Float tmp86 = tmp85->__get((int)10);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(905)
	Dynamic tmp87 = ((Dynamic)(tmp86));		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(905)
	Array< Float > tmp88 = this->rawData;		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(905)
	Float tmp89 = tmp88->__get((int)7);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(905)
	Dynamic tmp90 = ((Dynamic)(tmp89));		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(905)
	Float tmp91 = (tmp87 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(905)
	Float tmp92 = (tmp84 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(905)
	Float tmp93 = (tmp77 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(903)
	Float tmp94 = (tmp62 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(906)
	Array< Float > tmp95 = this->rawData;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(906)
	Float tmp96 = tmp95->__get((int)4);		HX_STACK_VAR(tmp96,"tmp96");
	HX_STACK_LINE(906)
	Dynamic tmp97 = ((Dynamic)(tmp96));		HX_STACK_VAR(tmp97,"tmp97");
	HX_STACK_LINE(906)
	Array< Float > tmp98 = this->rawData;		HX_STACK_VAR(tmp98,"tmp98");
	HX_STACK_LINE(906)
	Float tmp99 = tmp98->__get((int)9);		HX_STACK_VAR(tmp99,"tmp99");
	HX_STACK_LINE(906)
	Dynamic tmp100 = ((Dynamic)(tmp99));		HX_STACK_VAR(tmp100,"tmp100");
	HX_STACK_LINE(906)
	Float tmp101 = (tmp97 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
	HX_STACK_LINE(906)
	Array< Float > tmp102 = this->rawData;		HX_STACK_VAR(tmp102,"tmp102");
	HX_STACK_LINE(906)
	Float tmp103 = tmp102->__get((int)8);		HX_STACK_VAR(tmp103,"tmp103");
	HX_STACK_LINE(906)
	Dynamic tmp104 = ((Dynamic)(tmp103));		HX_STACK_VAR(tmp104,"tmp104");
	HX_STACK_LINE(906)
	Array< Float > tmp105 = this->rawData;		HX_STACK_VAR(tmp105,"tmp105");
	HX_STACK_LINE(906)
	Float tmp106 = tmp105->__get((int)5);		HX_STACK_VAR(tmp106,"tmp106");
	HX_STACK_LINE(906)
	Dynamic tmp107 = ((Dynamic)(tmp106));		HX_STACK_VAR(tmp107,"tmp107");
	HX_STACK_LINE(906)
	Float tmp108 = (tmp104 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
	HX_STACK_LINE(906)
	Float tmp109 = (tmp101 - tmp108);		HX_STACK_VAR(tmp109,"tmp109");
	HX_STACK_LINE(906)
	Array< Float > tmp110 = this->rawData;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(906)
	Float tmp111 = tmp110->__get((int)2);		HX_STACK_VAR(tmp111,"tmp111");
	HX_STACK_LINE(906)
	Dynamic tmp112 = ((Dynamic)(tmp111));		HX_STACK_VAR(tmp112,"tmp112");
	HX_STACK_LINE(906)
	Array< Float > tmp113 = this->rawData;		HX_STACK_VAR(tmp113,"tmp113");
	HX_STACK_LINE(906)
	Float tmp114 = tmp113->__get((int)15);		HX_STACK_VAR(tmp114,"tmp114");
	HX_STACK_LINE(906)
	Dynamic tmp115 = ((Dynamic)(tmp114));		HX_STACK_VAR(tmp115,"tmp115");
	HX_STACK_LINE(906)
	Float tmp116 = (tmp112 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
	HX_STACK_LINE(906)
	Array< Float > tmp117 = this->rawData;		HX_STACK_VAR(tmp117,"tmp117");
	HX_STACK_LINE(906)
	Float tmp118 = tmp117->__get((int)14);		HX_STACK_VAR(tmp118,"tmp118");
	HX_STACK_LINE(906)
	Dynamic tmp119 = ((Dynamic)(tmp118));		HX_STACK_VAR(tmp119,"tmp119");
	HX_STACK_LINE(906)
	Array< Float > tmp120 = this->rawData;		HX_STACK_VAR(tmp120,"tmp120");
	HX_STACK_LINE(906)
	Float tmp121 = tmp120->__get((int)3);		HX_STACK_VAR(tmp121,"tmp121");
	HX_STACK_LINE(906)
	Dynamic tmp122 = ((Dynamic)(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
	HX_STACK_LINE(906)
	Float tmp123 = (tmp119 * tmp122);		HX_STACK_VAR(tmp123,"tmp123");
	HX_STACK_LINE(906)
	Float tmp124 = (tmp116 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
	HX_STACK_LINE(906)
	Float tmp125 = (tmp109 * tmp124);		HX_STACK_VAR(tmp125,"tmp125");
	HX_STACK_LINE(903)
	Float tmp126 = (tmp94 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
	HX_STACK_LINE(907)
	Array< Float > tmp127 = this->rawData;		HX_STACK_VAR(tmp127,"tmp127");
	HX_STACK_LINE(907)
	Float tmp128 = tmp127->__get((int)4);		HX_STACK_VAR(tmp128,"tmp128");
	HX_STACK_LINE(907)
	Dynamic tmp129 = ((Dynamic)(tmp128));		HX_STACK_VAR(tmp129,"tmp129");
	HX_STACK_LINE(907)
	Array< Float > tmp130 = this->rawData;		HX_STACK_VAR(tmp130,"tmp130");
	HX_STACK_LINE(907)
	Float tmp131 = tmp130->__get((int)13);		HX_STACK_VAR(tmp131,"tmp131");
	HX_STACK_LINE(907)
	Dynamic tmp132 = ((Dynamic)(tmp131));		HX_STACK_VAR(tmp132,"tmp132");
	HX_STACK_LINE(907)
	Float tmp133 = (tmp129 * tmp132);		HX_STACK_VAR(tmp133,"tmp133");
	HX_STACK_LINE(907)
	Array< Float > tmp134 = this->rawData;		HX_STACK_VAR(tmp134,"tmp134");
	HX_STACK_LINE(907)
	Float tmp135 = tmp134->__get((int)12);		HX_STACK_VAR(tmp135,"tmp135");
	HX_STACK_LINE(907)
	Dynamic tmp136 = ((Dynamic)(tmp135));		HX_STACK_VAR(tmp136,"tmp136");
	HX_STACK_LINE(907)
	Array< Float > tmp137 = this->rawData;		HX_STACK_VAR(tmp137,"tmp137");
	HX_STACK_LINE(907)
	Float tmp138 = tmp137->__get((int)5);		HX_STACK_VAR(tmp138,"tmp138");
	HX_STACK_LINE(907)
	Dynamic tmp139 = ((Dynamic)(tmp138));		HX_STACK_VAR(tmp139,"tmp139");
	HX_STACK_LINE(907)
	Float tmp140 = (tmp136 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
	HX_STACK_LINE(907)
	Float tmp141 = (tmp133 - tmp140);		HX_STACK_VAR(tmp141,"tmp141");
	HX_STACK_LINE(907)
	Array< Float > tmp142 = this->rawData;		HX_STACK_VAR(tmp142,"tmp142");
	HX_STACK_LINE(907)
	Float tmp143 = tmp142->__get((int)2);		HX_STACK_VAR(tmp143,"tmp143");
	HX_STACK_LINE(907)
	Dynamic tmp144 = ((Dynamic)(tmp143));		HX_STACK_VAR(tmp144,"tmp144");
	HX_STACK_LINE(907)
	Array< Float > tmp145 = this->rawData;		HX_STACK_VAR(tmp145,"tmp145");
	HX_STACK_LINE(907)
	Float tmp146 = tmp145->__get((int)11);		HX_STACK_VAR(tmp146,"tmp146");
	HX_STACK_LINE(907)
	Dynamic tmp147 = ((Dynamic)(tmp146));		HX_STACK_VAR(tmp147,"tmp147");
	HX_STACK_LINE(907)
	Float tmp148 = (tmp144 * tmp147);		HX_STACK_VAR(tmp148,"tmp148");
	HX_STACK_LINE(907)
	Array< Float > tmp149 = this->rawData;		HX_STACK_VAR(tmp149,"tmp149");
	HX_STACK_LINE(907)
	Float tmp150 = tmp149->__get((int)10);		HX_STACK_VAR(tmp150,"tmp150");
	HX_STACK_LINE(907)
	Dynamic tmp151 = ((Dynamic)(tmp150));		HX_STACK_VAR(tmp151,"tmp151");
	HX_STACK_LINE(907)
	Array< Float > tmp152 = this->rawData;		HX_STACK_VAR(tmp152,"tmp152");
	HX_STACK_LINE(907)
	Float tmp153 = tmp152->__get((int)3);		HX_STACK_VAR(tmp153,"tmp153");
	HX_STACK_LINE(907)
	Dynamic tmp154 = ((Dynamic)(tmp153));		HX_STACK_VAR(tmp154,"tmp154");
	HX_STACK_LINE(907)
	Float tmp155 = (tmp151 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
	HX_STACK_LINE(907)
	Float tmp156 = (tmp148 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
	HX_STACK_LINE(907)
	Float tmp157 = (tmp141 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
	HX_STACK_LINE(903)
	Float tmp158 = (tmp126 - tmp157);		HX_STACK_VAR(tmp158,"tmp158");
	HX_STACK_LINE(908)
	Array< Float > tmp159 = this->rawData;		HX_STACK_VAR(tmp159,"tmp159");
	HX_STACK_LINE(908)
	Float tmp160 = tmp159->__get((int)8);		HX_STACK_VAR(tmp160,"tmp160");
	HX_STACK_LINE(908)
	Dynamic tmp161 = ((Dynamic)(tmp160));		HX_STACK_VAR(tmp161,"tmp161");
	HX_STACK_LINE(908)
	Array< Float > tmp162 = this->rawData;		HX_STACK_VAR(tmp162,"tmp162");
	HX_STACK_LINE(908)
	Float tmp163 = tmp162->__get((int)13);		HX_STACK_VAR(tmp163,"tmp163");
	HX_STACK_LINE(908)
	Dynamic tmp164 = ((Dynamic)(tmp163));		HX_STACK_VAR(tmp164,"tmp164");
	HX_STACK_LINE(908)
	Float tmp165 = (tmp161 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
	HX_STACK_LINE(908)
	Array< Float > tmp166 = this->rawData;		HX_STACK_VAR(tmp166,"tmp166");
	HX_STACK_LINE(908)
	Float tmp167 = tmp166->__get((int)12);		HX_STACK_VAR(tmp167,"tmp167");
	HX_STACK_LINE(908)
	Dynamic tmp168 = ((Dynamic)(tmp167));		HX_STACK_VAR(tmp168,"tmp168");
	HX_STACK_LINE(908)
	Array< Float > tmp169 = this->rawData;		HX_STACK_VAR(tmp169,"tmp169");
	HX_STACK_LINE(908)
	Float tmp170 = tmp169->__get((int)9);		HX_STACK_VAR(tmp170,"tmp170");
	HX_STACK_LINE(908)
	Dynamic tmp171 = ((Dynamic)(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
	HX_STACK_LINE(908)
	Float tmp172 = (tmp168 * tmp171);		HX_STACK_VAR(tmp172,"tmp172");
	HX_STACK_LINE(908)
	Float tmp173 = (tmp165 - tmp172);		HX_STACK_VAR(tmp173,"tmp173");
	HX_STACK_LINE(908)
	Array< Float > tmp174 = this->rawData;		HX_STACK_VAR(tmp174,"tmp174");
	HX_STACK_LINE(908)
	Float tmp175 = tmp174->__get((int)2);		HX_STACK_VAR(tmp175,"tmp175");
	HX_STACK_LINE(908)
	Dynamic tmp176 = ((Dynamic)(tmp175));		HX_STACK_VAR(tmp176,"tmp176");
	HX_STACK_LINE(908)
	Array< Float > tmp177 = this->rawData;		HX_STACK_VAR(tmp177,"tmp177");
	HX_STACK_LINE(908)
	Float tmp178 = tmp177->__get((int)7);		HX_STACK_VAR(tmp178,"tmp178");
	HX_STACK_LINE(908)
	Dynamic tmp179 = ((Dynamic)(tmp178));		HX_STACK_VAR(tmp179,"tmp179");
	HX_STACK_LINE(908)
	Float tmp180 = (tmp176 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
	HX_STACK_LINE(908)
	Array< Float > tmp181 = this->rawData;		HX_STACK_VAR(tmp181,"tmp181");
	HX_STACK_LINE(908)
	Float tmp182 = tmp181->__get((int)6);		HX_STACK_VAR(tmp182,"tmp182");
	HX_STACK_LINE(908)
	Dynamic tmp183 = ((Dynamic)(tmp182));		HX_STACK_VAR(tmp183,"tmp183");
	HX_STACK_LINE(908)
	Array< Float > tmp184 = this->rawData;		HX_STACK_VAR(tmp184,"tmp184");
	HX_STACK_LINE(908)
	Float tmp185 = tmp184->__get((int)3);		HX_STACK_VAR(tmp185,"tmp185");
	HX_STACK_LINE(908)
	Dynamic tmp186 = ((Dynamic)(tmp185));		HX_STACK_VAR(tmp186,"tmp186");
	HX_STACK_LINE(908)
	Float tmp187 = (tmp183 * tmp186);		HX_STACK_VAR(tmp187,"tmp187");
	HX_STACK_LINE(908)
	Float tmp188 = (tmp180 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
	HX_STACK_LINE(908)
	Float tmp189 = (tmp173 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
	HX_STACK_LINE(903)
	Float tmp190 = (tmp158 + tmp189);		HX_STACK_VAR(tmp190,"tmp190");
	HX_STACK_LINE(903)
	Float tmp191 = tmp190;		HX_STACK_VAR(tmp191,"tmp191");
	HX_STACK_LINE(903)
	return tmp191;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

::openfl::geom::Vector3D Matrix3D_obj::get_position( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_position",0x1555563a,"openfl.geom.Matrix3D.get_position","openfl/geom/Matrix3D.hx",913,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(915)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(915)
	Float tmp1 = tmp->__get((int)12);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(915)
	Dynamic tmp2 = ((Dynamic)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(915)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(915)
	Float tmp4 = tmp3->__get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(915)
	Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(915)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(915)
	Float tmp7 = tmp6->__get((int)14);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(915)
	Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(915)
	::openfl::geom::Vector3D tmp9 = ::openfl::geom::Vector3D_obj::__new(tmp2,tmp5,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(915)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

::openfl::geom::Vector3D Matrix3D_obj::set_position( ::openfl::geom::Vector3D val){
	HX_STACK_FRAME("openfl.geom.Matrix3D","set_position",0x2a4e79ae,"openfl.geom.Matrix3D.set_position","openfl/geom/Matrix3D.hx",920,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(922)
	Array< Float > tmp = this->rawData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	Float tmp1 = val->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(922)
	Float tmp2 = tmp[(int)12] = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(922)
	tmp2;
	HX_STACK_LINE(923)
	Array< Float > tmp3 = this->rawData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(923)
	Float tmp4 = val->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(923)
	Float tmp5 = tmp3[(int)13] = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(923)
	tmp5;
	HX_STACK_LINE(924)
	Array< Float > tmp6 = this->rawData;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(924)
	Float tmp7 = val->z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(924)
	Float tmp8 = tmp6[(int)14] = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(924)
	tmp8;
	HX_STACK_LINE(925)
	::openfl::geom::Vector3D tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(925)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::openfl::geom::Matrix3D Matrix3D_obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix3D","create2D",0x4623e756,"openfl.geom.Matrix3D.create2D","openfl/geom/Matrix3D.hx",310,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(312)
		Float tmp = rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(313)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(314)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(314)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(314)
		Float s = tmp7;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(317)
		Float tmp8 = (c * scale);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(317)
		Float tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(317)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(317)
		Float tmp11 = scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(317)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(318)
		Float tmp13 = (s * scale);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(318)
		Float tmp14 = (c * scale);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(320)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(320)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(316)
		::openfl::geom::Matrix3D tmp17 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(tmp8).Add(tmp12).Add((int)0).Add((int)0).Add(tmp13).Add(tmp14).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp15).Add(tmp16).Add((int)0).Add((int)1));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(316)
		return tmp17;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,create2D,return )

::openfl::geom::Matrix3D Matrix3D_obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createABCD",0x0e55d246,"openfl.geom.Matrix3D.createABCD","openfl/geom/Matrix3D.hx",326,0x3acce238)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(328)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createABCD,return )

::openfl::geom::Matrix3D Matrix3D_obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createOrtho",0xac3dd614,"openfl.geom.Matrix3D.createOrtho","openfl/geom/Matrix3D.hx",338,0x3acce238)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(340)
	Float tmp = (x1 - x0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(341)
	Float tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(341)
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(341)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(342)
	Float tmp4 = (zFar - zNear);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(342)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(342)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(345)
	Float tmp6 = (((Float)2.0) * sx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(346)
	Float tmp7 = (((Float)2.0) * sy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(347)
	Float tmp8 = ((Float)-2.);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(347)
	Float tmp9 = sz;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(347)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(348)
	Float tmp11 = (x0 + x1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(348)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(348)
	Float tmp13 = sx;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(348)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(348)
	Float tmp15 = (y0 + y1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(348)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(348)
	Float tmp17 = sy;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(348)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(348)
	Float tmp19 = (zNear + zFar);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(348)
	Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(348)
	Float tmp21 = sz;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(348)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(344)
	::openfl::geom::Matrix3D tmp23 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(tmp6).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp10).Add((int)0).Add(tmp14).Add(tmp18).Add(tmp22).Add((int)1));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(344)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createOrtho,return )

::openfl::geom::Matrix3D Matrix3D_obj::interpolate( ::openfl::geom::Matrix3D thisMat,::openfl::geom::Matrix3D toMat,Float percent){
	HX_STACK_FRAME("openfl.geom.Matrix3D","interpolate",0x6cc85c39,"openfl.geom.Matrix3D.interpolate","openfl/geom/Matrix3D.hx",525,0x3acce238)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(527)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(529)
	{
		HX_STACK_LINE(529)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(529)
		while((true)){
			HX_STACK_LINE(529)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(529)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(529)
			if ((tmp2)){
				HX_STACK_LINE(529)
				break;
			}
			HX_STACK_LINE(529)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(531)
			Float tmp4 = thisMat->rawData->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(531)
			Dynamic tmp5 = ((Dynamic)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(531)
			Float tmp6 = toMat->rawData->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			Dynamic tmp7 = ((Dynamic)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(531)
			Float tmp8 = thisMat->rawData->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(531)
			Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(531)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(531)
			Float tmp11 = percent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(531)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(531)
			Float tmp13 = (tmp5 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(531)
			Float tmp14 = m->rawData[i] = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(531)
			tmp14;
		}
	}
	HX_STACK_LINE(535)
	::openfl::geom::Matrix3D tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )

::openfl::geom::Matrix3D Matrix3D_obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("openfl.geom.Matrix3D","getAxisRotation",0x6465182d,"openfl.geom.Matrix3D.getAxisRotation","openfl/geom/Matrix3D.hx",862,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(864)
	::openfl::geom::Matrix3D tmp = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(864)
	::openfl::geom::Matrix3D m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(866)
	::openfl::geom::Vector3D tmp1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(866)
	::openfl::geom::Vector3D a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(867)
	Float tmp2 = degrees;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(867)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(867)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(867)
	Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(867)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(867)
	Float rad = tmp6;		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(868)
	Float tmp7 = rad;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(868)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(868)
	Float c = tmp8;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(869)
	Float tmp9 = rad;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(869)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(869)
	Float s = tmp10;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(870)
	Float tmp11 = (((Float)1.0) - c);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(870)
	Float t = tmp11;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(872)
	Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(872)
	Float tmp13 = (a1->x * a1->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(872)
	Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(872)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(872)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(872)
	Float tmp17 = m->rawData[(int)0] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(872)
	tmp17;
	HX_STACK_LINE(873)
	Float tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(873)
	Float tmp19 = (a1->y * a1->y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(873)
	Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(873)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(873)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(873)
	Float tmp23 = m->rawData[(int)5] = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(873)
	tmp23;
	HX_STACK_LINE(874)
	Float tmp24 = c;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(874)
	Float tmp25 = (a1->z * a1->z);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(874)
	Float tmp26 = t;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(874)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(874)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(874)
	Float tmp29 = m->rawData[(int)10] = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(874)
	tmp29;
	HX_STACK_LINE(876)
	Float tmp30 = (a1->x * a1->y);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(876)
	Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(876)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(876)
	Float tmp110 = tmp32;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(877)
	Float tmp33 = (a1->z * s);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(877)
	Float tmp210 = tmp33;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(878)
	Float tmp34 = (tmp110 + tmp210);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(878)
	Float tmp35 = m->rawData[(int)4] = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(878)
	tmp35;
	HX_STACK_LINE(879)
	Float tmp36 = (tmp110 - tmp210);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(879)
	Float tmp37 = m->rawData[(int)1] = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(879)
	tmp37;
	HX_STACK_LINE(880)
	Float tmp38 = (a1->x * a1->z);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(880)
	Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(880)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(880)
	tmp110 = tmp40;
	HX_STACK_LINE(881)
	Float tmp41 = (a1->y * s);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(881)
	tmp210 = tmp41;
	HX_STACK_LINE(882)
	Float tmp42 = (tmp110 - tmp210);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(882)
	Float tmp43 = m->rawData[(int)8] = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(882)
	tmp43;
	HX_STACK_LINE(883)
	Float tmp44 = (tmp110 + tmp210);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(883)
	Float tmp45 = m->rawData[(int)2] = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(883)
	tmp45;
	HX_STACK_LINE(884)
	Float tmp46 = (a1->y * a1->z);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(884)
	Float tmp47 = t;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(884)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(884)
	tmp110 = tmp48;
	HX_STACK_LINE(885)
	Float tmp49 = (a1->x * s);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(885)
	tmp210 = tmp49;
	HX_STACK_LINE(886)
	Float tmp50 = (tmp110 + tmp210);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(886)
	Float tmp51 = m->rawData[(int)9] = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(886)
	tmp51;
	HX_STACK_LINE(887)
	Float tmp52 = (tmp110 - tmp210);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(887)
	Float tmp53 = m->rawData[(int)6] = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(887)
	tmp53;
	HX_STACK_LINE(889)
	::openfl::geom::Matrix3D tmp54 = m;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(889)
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,getAxisRotation,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(determinant,"determinant");
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(determinant,"determinant");
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		if (HX_FIELD_EQ(inName,"pointAt") ) { return pointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { return inCallProp == hx::paccAlways ? get_determinant() : determinant; }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyRawDataTo") ) { return copyRawDataTo_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToMatrix3D") ) { return copyToMatrix3D_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"copyRawDataFrom") ) { return copyRawDataFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { outValue = getAxisRotation_dyn(); return true;  }
	}
	return false;
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { determinant=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3D_obj,determinant),HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix3D_obj,rawData),HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("determinant","\x95","\x5d","\x15","\x32"),
	HX_HCSTRING("rawData","\x32","\x6c","\x18","\xff"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyRawDataFrom","\x07","\x7d","\xbd","\x2c"),
	HX_HCSTRING("copyRawDataTo","\xd8","\x2b","\xf7","\xa8"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix3D","\xe2","\x1d","\x1f","\x04"),
	HX_HCSTRING("decompose","\xb1","\xc3","\xa7","\x7a"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("recompose","\xbf","\x81","\xdb","\x03"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("getAxisRotation","\xb5","\x74","\xea","\xf7"),
	::String(null()) };

void Matrix3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Matrix3D","\xe6","\x93","\x2e","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix3D_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix3D_obj >;
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
