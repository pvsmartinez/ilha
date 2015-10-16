#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_PolyK
#include <openfl/_internal/renderer/PolyK.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void PolyK_obj::__construct()
{
	return null();
}

//PolyK_obj::~PolyK_obj() { }

Dynamic PolyK_obj::__CreateEmpty() { return  new PolyK_obj; }
hx::ObjectPtr< PolyK_obj > PolyK_obj::__new()
{  hx::ObjectPtr< PolyK_obj > _result_ = new PolyK_obj();
	_result_->__construct();
	return _result_;}

Dynamic PolyK_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PolyK_obj > _result_ = new PolyK_obj();
	_result_->__construct();
	return _result_;}

Array< int > PolyK_obj::triangulate( Array< int > tgs,Array< Float > p){
	HX_STACK_FRAME("openfl._internal.renderer.PolyK","triangulate",0x1b342ee2,"openfl._internal.renderer.PolyK.triangulate","openfl/_internal/renderer/PolyK.hx",36,0x666fd399)
	HX_STACK_ARG(tgs,"tgs")
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(38)
	bool sign = true;		HX_STACK_VAR(sign,"sign");
	HX_STACK_LINE(40)
	int tmp = (int(p->length) >> int((int)1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int n = tmp;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(41)
	bool tmp1 = (n < (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp1)){
		HX_STACK_LINE(41)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(44)
	Array< int > avl;		HX_STACK_VAR(avl,"avl");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				bool tmp2 = (_g1 < n);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(44)
				if ((tmp3)){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(44)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				_g->push(tmp5);
			}
		}
		HX_STACK_LINE(44)
		avl = _g;
	}
	HX_STACK_LINE(46)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(47)
	int al = n;		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(48)
	bool earFound = false;		HX_STACK_VAR(earFound,"earFound");
	HX_STACK_LINE(50)
	while((true)){
		HX_STACK_LINE(50)
		bool tmp2 = (al > (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(50)
			break;
		}
		HX_STACK_LINE(52)
		int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = al;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int tmp7 = avl->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		int i0 = tmp7;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(53)
		int tmp8 = (i + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		int tmp9 = al;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		int tmp11 = avl->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		int i1 = tmp11;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(54)
		int tmp12 = (i + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		int tmp13 = al;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(54)
		int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		int tmp15 = avl->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		int i2 = tmp15;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(56)
		int tmp16 = ((int)2 * i0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(56)
		Float tmp17 = p->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(56)
		Float ax = tmp17;		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(56)
		int tmp18 = ((int)2 * i0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(56)
		int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(56)
		Float tmp20 = p->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(56)
		Float ay = tmp20;		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(57)
		int tmp21 = ((int)2 * i1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(57)
		Float tmp22 = p->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(57)
		Float bx = tmp22;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(57)
		int tmp23 = ((int)2 * i1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(57)
		int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(57)
		Float tmp25 = p->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(57)
		Float by = tmp25;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(58)
		int tmp26 = ((int)2 * i2);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(58)
		Float tmp27 = p->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(58)
		Float cx = tmp27;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(58)
		int tmp28 = ((int)2 * i2);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(58)
		int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(58)
		Float tmp30 = p->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(58)
		Float cy = tmp30;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(60)
		earFound = false;
		HX_STACK_LINE(62)
		Float tmp31 = ax;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(62)
		Float tmp32 = ay;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(62)
		Float tmp33 = bx;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(62)
		Float tmp34 = by;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(62)
		Float tmp35 = cx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(62)
		Float tmp36 = cy;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(62)
		bool tmp37 = sign;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(62)
		bool tmp38 = ::openfl::_internal::renderer::PolyK_obj::_convex(tmp31,tmp32,tmp33,tmp34,tmp35,tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(62)
		if ((tmp38)){
			HX_STACK_LINE(64)
			earFound = true;
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(66)
				while((true)){
					HX_STACK_LINE(66)
					bool tmp39 = (_g1 < al);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(66)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(66)
					if ((tmp40)){
						HX_STACK_LINE(66)
						break;
					}
					HX_STACK_LINE(66)
					int tmp41 = (_g1)++;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(66)
					int j = tmp41;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(68)
					int tmp42 = avl->__get(j);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(68)
					int vi = tmp42;		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(69)
					bool tmp43 = (vi == i0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(69)
					bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(69)
					bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(69)
					bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(69)
					if ((tmp45)){
						HX_STACK_LINE(69)
						tmp46 = (vi == i1);
					}
					else{
						HX_STACK_LINE(69)
						tmp46 = true;
					}
					HX_STACK_LINE(69)
					bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(69)
					bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(69)
					if ((tmp47)){
						HX_STACK_LINE(69)
						tmp48 = (vi == i2);
					}
					else{
						HX_STACK_LINE(69)
						tmp48 = true;
					}
					HX_STACK_LINE(69)
					if ((tmp48)){
						HX_STACK_LINE(69)
						continue;
					}
					HX_STACK_LINE(71)
					int tmp49 = ((int)2 * vi);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(71)
					Float tmp50 = p->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(71)
					int tmp51 = ((int)2 * vi);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(71)
					int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(71)
					Float tmp53 = p->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(71)
					Float tmp54 = ax;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(71)
					Float tmp55 = ay;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(71)
					Float tmp56 = bx;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(71)
					Float tmp57 = by;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(71)
					Float tmp58 = cx;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(71)
					Float tmp59 = cy;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(71)
					bool tmp60 = ::openfl::_internal::renderer::PolyK_obj::_PointInTriangle(tmp50,tmp53,tmp54,tmp55,tmp56,tmp57,tmp58,tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(71)
					if ((tmp60)){
						HX_STACK_LINE(73)
						earFound = false;
						HX_STACK_LINE(74)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(82)
		bool tmp39 = earFound;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(82)
		if ((tmp39)){
			HX_STACK_LINE(84)
			int tmp40 = i0;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(84)
			tgs->push(tmp40);
			HX_STACK_LINE(85)
			int tmp41 = i1;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(85)
			tgs->push(tmp41);
			HX_STACK_LINE(86)
			int tmp42 = i2;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(86)
			tgs->push(tmp42);
			HX_STACK_LINE(87)
			int tmp43 = (i + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(87)
			int tmp44 = al;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(87)
			int tmp45 = hx::Mod(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(87)
			avl->splice(tmp45,(int)1);
			HX_STACK_LINE(88)
			(al)--;
			HX_STACK_LINE(89)
			i = (int)0;
		}
		else{
			HX_STACK_LINE(91)
			int tmp40 = (i)++;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(91)
			int tmp41 = ((int)3 * al);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(91)
			bool tmp42 = (tmp40 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(91)
			if ((tmp42)){
				HX_STACK_LINE(93)
				bool tmp43 = sign;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(93)
				if ((tmp43)){
					HX_STACK_LINE(95)
					tgs = Array_obj< int >::__new();
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(96)
						Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(96)
						{
							HX_STACK_LINE(96)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(96)
							while((true)){
								HX_STACK_LINE(96)
								bool tmp44 = (_g2 < n);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(96)
								bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(96)
								if ((tmp45)){
									HX_STACK_LINE(96)
									break;
								}
								HX_STACK_LINE(96)
								int tmp46 = (_g2)++;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(96)
								int k = tmp46;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(96)
								int tmp47 = k;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(96)
								_g1->push(tmp47);
							}
						}
						HX_STACK_LINE(96)
						avl = _g1;
					}
					HX_STACK_LINE(98)
					i = (int)0;
					HX_STACK_LINE(99)
					al = n;
					HX_STACK_LINE(100)
					sign = false;
				}
				else{
					HX_STACK_LINE(104)
					Dynamic tmp44 = hx::SourceInfo(HX_HCSTRING("PolyK.hx","\xbf","\x93","\x4f","\xf3"),104,HX_HCSTRING("openfl._internal.renderer.PolyK","\x24","\xf1","\x79","\x0a"),HX_HCSTRING("triangulate","\x2c","\x65","\x9d","\xe9"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(104)
					::haxe::Log_obj::trace(HX_HCSTRING("Warning: shape too complex to fill","\x2b","\x09","\x68","\x93"),tmp44);
					HX_STACK_LINE(105)
					return Array_obj< int >::__new();
				}
			}
		}
	}
	HX_STACK_LINE(113)
	int tmp2 = avl->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	tgs->push(tmp2);
	HX_STACK_LINE(114)
	int tmp3 = avl->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	tgs->push(tmp3);
	HX_STACK_LINE(115)
	int tmp4 = avl->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	tgs->push(tmp4);
	HX_STACK_LINE(116)
	return tgs;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PolyK_obj,triangulate,return )

bool PolyK_obj::_PointInTriangle( Float px,Float py,Float ax,Float ay,Float bx,Float by,Float cx,Float cy){
	HX_STACK_FRAME("openfl._internal.renderer.PolyK","_PointInTriangle",0xd3388d28,"openfl._internal.renderer.PolyK._PointInTriangle","openfl/_internal/renderer/PolyK.hx",121,0x666fd399)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(123)
	Float tmp = (cx - ax);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	int v0x = tmp1;		HX_STACK_VAR(v0x,"v0x");
	HX_STACK_LINE(124)
	Float tmp2 = (cy - ay);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	int v0y = tmp3;		HX_STACK_VAR(v0y,"v0y");
	HX_STACK_LINE(125)
	Float tmp4 = (bx - ax);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(125)
	int v1x = tmp5;		HX_STACK_VAR(v1x,"v1x");
	HX_STACK_LINE(126)
	Float tmp6 = (by - ay);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(126)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(126)
	int v1y = tmp7;		HX_STACK_VAR(v1y,"v1y");
	HX_STACK_LINE(127)
	Float tmp8 = (px - ax);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(127)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(127)
	int v2x = tmp9;		HX_STACK_VAR(v2x,"v2x");
	HX_STACK_LINE(128)
	Float tmp10 = (py - ay);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(128)
	int v2y = tmp11;		HX_STACK_VAR(v2y,"v2y");
	HX_STACK_LINE(130)
	int tmp12 = (v0x * v0x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(130)
	int tmp13 = (v0y * v0y);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(130)
	int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(130)
	int dot00 = tmp14;		HX_STACK_VAR(dot00,"dot00");
	HX_STACK_LINE(131)
	int tmp15 = (v0x * v1x);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(131)
	int tmp16 = (v0y * v1y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(131)
	int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(131)
	int dot01 = tmp17;		HX_STACK_VAR(dot01,"dot01");
	HX_STACK_LINE(132)
	int tmp18 = (v0x * v2x);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(132)
	int tmp19 = (v0y * v2y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(132)
	int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(132)
	int dot02 = tmp20;		HX_STACK_VAR(dot02,"dot02");
	HX_STACK_LINE(133)
	int tmp21 = (v1x * v1x);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(133)
	int tmp22 = (v1y * v1y);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(133)
	int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(133)
	int dot11 = tmp23;		HX_STACK_VAR(dot11,"dot11");
	HX_STACK_LINE(134)
	int tmp24 = (v1x * v2x);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(134)
	int tmp25 = (v1y * v2y);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(134)
	int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(134)
	int dot12 = tmp26;		HX_STACK_VAR(dot12,"dot12");
	HX_STACK_LINE(136)
	int tmp27 = (dot00 * dot11);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(136)
	int tmp28 = (dot01 * dot01);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(136)
	int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(136)
	Float tmp30 = (Float((int)1) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(136)
	Float invDenom = tmp30;		HX_STACK_VAR(invDenom,"invDenom");
	HX_STACK_LINE(137)
	int tmp31 = (dot11 * dot02);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(137)
	int tmp32 = (dot01 * dot12);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(137)
	int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(137)
	Float tmp34 = invDenom;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(137)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(137)
	Float u = tmp35;		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(138)
	int tmp36 = (dot00 * dot12);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(138)
	int tmp37 = (dot01 * dot02);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(138)
	int tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(138)
	Float tmp39 = invDenom;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(138)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(138)
	Float v = tmp40;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(140)
	bool tmp41 = (u >= (int)0);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(140)
	bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(140)
	bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(140)
	if ((tmp42)){
		HX_STACK_LINE(140)
		tmp43 = (v >= (int)0);
	}
	else{
		HX_STACK_LINE(140)
		tmp43 = false;
	}
	HX_STACK_LINE(140)
	bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(140)
	if ((tmp43)){
		HX_STACK_LINE(140)
		Float tmp45 = (u + v);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(140)
		Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(140)
		tmp44 = (tmp46 < (int)1);
	}
	else{
		HX_STACK_LINE(140)
		tmp44 = false;
	}
	HX_STACK_LINE(140)
	return tmp44;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(PolyK_obj,_PointInTriangle,return )

bool PolyK_obj::_convex( Float ax,Float ay,Float bx,Float by,Float cx,Float cy,bool sign){
	HX_STACK_FRAME("openfl._internal.renderer.PolyK","_convex",0x16abbfbc,"openfl._internal.renderer.PolyK._convex","openfl/_internal/renderer/PolyK.hx",145,0x666fd399)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(sign,"sign")
	HX_STACK_LINE(147)
	Float tmp = (ay - by);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	Float tmp1 = (cx - bx);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	Float tmp3 = (bx - ax);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	Float tmp4 = (cy - by);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(147)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(147)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(147)
	bool tmp7 = (tmp6 >= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(147)
	bool tmp8 = sign;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(147)
	bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(147)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(PolyK_obj,_convex,return )


PolyK_obj::PolyK_obj()
{
}

bool PolyK_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_convex") ) { outValue = _convex_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triangulate") ) { outValue = triangulate_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_PointInTriangle") ) { outValue = _PointInTriangle_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#endif

hx::Class PolyK_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("triangulate","\x2c","\x65","\x9d","\xe9"),
	HX_HCSTRING("_PointInTriangle","\x9e","\x4a","\x14","\x04"),
	HX_HCSTRING("_convex","\x06","\x89","\x55","\x36"),
	::String(null()) };

void PolyK_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.PolyK","\x24","\xf1","\x79","\x0a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PolyK_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PolyK_obj >;
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
