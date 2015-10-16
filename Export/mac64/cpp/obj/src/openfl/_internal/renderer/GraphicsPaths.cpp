#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl__internal_renderer_GraphicsPaths
#include <openfl/_internal/renderer/GraphicsPaths.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void GraphicsPaths_obj::__construct()
{
	return null();
}

//GraphicsPaths_obj::~GraphicsPaths_obj() { }

Dynamic GraphicsPaths_obj::__CreateEmpty() { return  new GraphicsPaths_obj; }
hx::ObjectPtr< GraphicsPaths_obj > GraphicsPaths_obj::__new()
{  hx::ObjectPtr< GraphicsPaths_obj > _result_ = new GraphicsPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPaths_obj > _result_ = new GraphicsPaths_obj();
	_result_->__construct();
	return _result_;}

Float GraphicsPaths_obj::SIN45;

Float GraphicsPaths_obj::TAN22;

Void GraphicsPaths_obj::ellipse( Array< Float > points,Float x,Float y,Float rx,Float ry,int segmentCount){
{
		HX_STACK_FRAME("openfl._internal.renderer.GraphicsPaths","ellipse",0xbdd66678,"openfl._internal.renderer.GraphicsPaths.ellipse","openfl/_internal/renderer/GraphicsPaths.hx",16,0x5cb26635)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_ARG(segmentCount,"segmentCount")
		HX_STACK_LINE(18)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		Float tmp1 = (tmp * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		int tmp2 = segmentCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		Float seg = tmp3;		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			int tmp4 = (segmentCount + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			while((true)){
				HX_STACK_LINE(20)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(20)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(20)
				if ((tmp6)){
					HX_STACK_LINE(20)
					break;
				}
				HX_STACK_LINE(20)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(20)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(22)
				Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(22)
				Float tmp9 = (seg * i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(22)
				Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(22)
				Float tmp11 = rx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(22)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(22)
				Float tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(22)
				points->push(tmp13);
				HX_STACK_LINE(23)
				Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(23)
				Float tmp15 = (seg * i);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(23)
				Float tmp16 = ::Math_obj::cos(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(23)
				Float tmp17 = ry;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(23)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(23)
				Float tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(23)
				points->push(tmp19);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsPaths_obj,ellipse,(void))

Void GraphicsPaths_obj::cubicCurveTo( Array< Float > points,Float cx,Float cy,Float cx2,Float cy2,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.GraphicsPaths","cubicCurveTo",0xe18f5406,"openfl._internal.renderer.GraphicsPaths.cubicCurveTo","openfl/_internal/renderer/GraphicsPaths.hx",35,0x5cb26635)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(cx2,"cx2")
		HX_STACK_ARG(cy2,"cy2")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(37)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(38)
		Float dt = (int)0;		HX_STACK_VAR(dt,"dt");
		HX_STACK_LINE(39)
		Float dt2 = (int)0;		HX_STACK_VAR(dt2,"dt2");
		HX_STACK_LINE(40)
		Float dt3 = (int)0;		HX_STACK_VAR(dt3,"dt3");
		HX_STACK_LINE(41)
		Float t2 = (int)0;		HX_STACK_VAR(t2,"t2");
		HX_STACK_LINE(42)
		Float t3 = (int)0;		HX_STACK_VAR(t3,"t3");
		HX_STACK_LINE(44)
		int tmp = (points->length - (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		Float tmp1 = points->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		Float fromX = tmp1;		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(45)
		int tmp2 = (points->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Float fromY = tmp3;		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(47)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(48)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(50)
		Float tmp4 = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				if ((tmp7)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(52)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(54)
				Float tmp9 = (Float(i) / Float(n));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(54)
				tmp4 = tmp9;
				HX_STACK_LINE(56)
				Float tmp10 = ((int)1 - tmp4);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(56)
				dt = tmp10;
				HX_STACK_LINE(57)
				Float tmp11 = (dt * dt);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				dt2 = tmp11;
				HX_STACK_LINE(58)
				Float tmp12 = (dt2 * dt);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(58)
				dt3 = tmp12;
				HX_STACK_LINE(60)
				Float tmp13 = (tmp4 * tmp4);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				t2 = tmp13;
				HX_STACK_LINE(61)
				Float tmp14 = (t2 * tmp4);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(61)
				t3 = tmp14;
				HX_STACK_LINE(63)
				Float tmp15 = (dt3 * fromX);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(63)
				Float tmp16 = ((int)3 * dt2);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(63)
				Float tmp17 = tmp4;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(63)
				Float tmp19 = cx;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(63)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(63)
				Float tmp21 = (tmp15 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(63)
				Float tmp22 = ((int)3 * dt);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(63)
				Float tmp23 = t2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(63)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(63)
				Float tmp25 = cx2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(63)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(63)
				Float tmp27 = (tmp21 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(63)
				Float tmp28 = (t3 * x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(63)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(63)
				px = tmp29;
				HX_STACK_LINE(64)
				Float tmp30 = (dt3 * fromY);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(64)
				Float tmp31 = ((int)3 * dt2);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(64)
				Float tmp32 = tmp4;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(64)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(64)
				Float tmp34 = cy;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(64)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(64)
				Float tmp36 = (tmp30 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(64)
				Float tmp37 = ((int)3 * dt);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(64)
				Float tmp38 = t2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(64)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(64)
				Float tmp40 = cy2;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(64)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(64)
				Float tmp42 = (tmp36 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(64)
				Float tmp43 = (t3 * y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(64)
				Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(64)
				py = tmp44;
				HX_STACK_LINE(66)
				Float tmp45 = px;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(66)
				points->push(tmp45);
				HX_STACK_LINE(67)
				Float tmp46 = py;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(67)
				points->push(tmp46);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GraphicsPaths_obj,cubicCurveTo,(void))

Void GraphicsPaths_obj::curveTo( Array< Float > points,Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.GraphicsPaths","curveTo",0x80d885a4,"openfl._internal.renderer.GraphicsPaths.curveTo","openfl/_internal/renderer/GraphicsPaths.hx",77,0x5cb26635)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(79)
		Float xa = (int)0;		HX_STACK_VAR(xa,"xa");
		HX_STACK_LINE(80)
		Float ya = (int)0;		HX_STACK_VAR(ya,"ya");
		HX_STACK_LINE(81)
		int n = (int)20;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(83)
		int tmp = (points->length - (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		Float tmp1 = points->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		Float fromX = tmp1;		HX_STACK_VAR(fromX,"fromX");
		HX_STACK_LINE(84)
		int tmp2 = (points->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = points->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float fromY = tmp3;		HX_STACK_VAR(fromY,"fromY");
		HX_STACK_LINE(86)
		Float px = (int)0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(87)
		Float py = (int)0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(89)
		Float tmp4 = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			while((true)){
				HX_STACK_LINE(91)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(91)
				if ((tmp7)){
					HX_STACK_LINE(91)
					break;
				}
				HX_STACK_LINE(91)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				Float tmp9 = (Float(i) / Float(n));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				tmp4 = tmp9;
				HX_STACK_LINE(95)
				Float tmp10 = fromX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(95)
				Float tmp11 = (cx - fromX);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				Float tmp12 = tmp4;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(95)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(95)
				xa = tmp14;
				HX_STACK_LINE(96)
				Float tmp15 = fromY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				Float tmp16 = (cy - fromY);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				Float tmp17 = tmp4;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(96)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(96)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(96)
				ya = tmp19;
				HX_STACK_LINE(98)
				Float tmp20 = xa;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(98)
				Float tmp21 = cx;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(98)
				Float tmp22 = (x - cx);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(98)
				Float tmp23 = tmp4;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(98)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(98)
				Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(98)
				Float tmp26 = xa;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(98)
				Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(98)
				Float tmp28 = tmp4;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(98)
				Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(98)
				Float tmp30 = (tmp20 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(98)
				px = tmp30;
				HX_STACK_LINE(99)
				Float tmp31 = ya;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(99)
				Float tmp32 = cy;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(99)
				Float tmp33 = (y - cy);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(99)
				Float tmp34 = tmp4;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(99)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(99)
				Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(99)
				Float tmp37 = ya;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(99)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(99)
				Float tmp39 = tmp4;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(99)
				Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(99)
				Float tmp41 = (tmp31 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(99)
				py = tmp41;
				HX_STACK_LINE(101)
				Float tmp42 = px;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(101)
				points->push(tmp42);
				HX_STACK_LINE(102)
				Float tmp43 = py;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(102)
				points->push(tmp43);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicsPaths_obj,curveTo,(void))

Void GraphicsPaths_obj::roundRectangle( Array< Float > points,Float x,Float y,Float width,Float height,Float rx,Float ry){
{
		HX_STACK_FRAME("openfl._internal.renderer.GraphicsPaths","roundRectangle",0x1ea263a7,"openfl._internal.renderer.GraphicsPaths.roundRectangle","openfl/_internal/renderer/GraphicsPaths.hx",112,0x5cb26635)
		HX_STACK_ARG(points,"points")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(rx,"rx")
		HX_STACK_ARG(ry,"ry")
		HX_STACK_LINE(114)
		Float tmp = (x + width);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		Float xe = tmp;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(115)
		Float tmp1 = (y + height);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		Float ye = tmp1;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(116)
		Float tmp2 = rx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		Float tmp4 = rx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		Float tmp5 = ::openfl::_internal::renderer::GraphicsPaths_obj::SIN45;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		Float cx1 = tmp7;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(117)
		Float tmp8 = rx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		Float tmp10 = rx;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		Float tmp11 = ::openfl::_internal::renderer::GraphicsPaths_obj::TAN22;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(117)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(117)
		Float cx2 = tmp13;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(118)
		Float tmp14 = ry;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(118)
		Float tmp16 = ry;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(118)
		Float tmp17 = ::openfl::_internal::renderer::GraphicsPaths_obj::SIN45;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(118)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(118)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(118)
		Float cy1 = tmp19;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(119)
		Float tmp20 = ry;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(119)
		Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(119)
		Float tmp22 = ry;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(119)
		Float tmp23 = ::openfl::_internal::renderer::GraphicsPaths_obj::TAN22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(119)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(119)
		Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(119)
		Float cy2 = tmp25;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(121)
		Float tmp26 = xe;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(121)
		points->push(tmp26);
		HX_STACK_LINE(122)
		Float tmp27 = (ye - ry);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(122)
		points->push(tmp27);
		HX_STACK_LINE(123)
		Float tmp28 = xe;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(123)
		Float tmp29 = (ye + cy2);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(123)
		Float tmp30 = (xe + cx1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(123)
		Float tmp31 = (ye + cy1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(123)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp28,tmp29,tmp30,tmp31);
		HX_STACK_LINE(124)
		Float tmp32 = (xe + cx2);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(124)
		Float tmp33 = ye;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(124)
		Float tmp34 = (xe - rx);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(124)
		Float tmp35 = ye;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(124)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp32,tmp33,tmp34,tmp35);
		HX_STACK_LINE(125)
		Float tmp36 = (x + rx);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(125)
		points->push(tmp36);
		HX_STACK_LINE(126)
		Float tmp37 = ye;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(126)
		points->push(tmp37);
		HX_STACK_LINE(127)
		Float tmp38 = (x - cx2);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(127)
		Float tmp39 = ye;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(127)
		Float tmp40 = (x - cx1);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(127)
		Float tmp41 = (ye + cy1);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(127)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp38,tmp39,tmp40,tmp41);
		HX_STACK_LINE(128)
		Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(128)
		Float tmp43 = (ye + cy2);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(128)
		Float tmp44 = x;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(128)
		Float tmp45 = (ye - ry);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(128)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp42,tmp43,tmp44,tmp45);
		HX_STACK_LINE(129)
		Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(129)
		points->push(tmp46);
		HX_STACK_LINE(130)
		Float tmp47 = (y + ry);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(130)
		points->push(tmp47);
		HX_STACK_LINE(131)
		Float tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(131)
		Float tmp49 = (y - cy2);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(131)
		Float tmp50 = (x - cx1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(131)
		Float tmp51 = (y - cy1);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(131)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp48,tmp49,tmp50,tmp51);
		HX_STACK_LINE(132)
		Float tmp52 = (x - cx2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(132)
		Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(132)
		Float tmp54 = (x + rx);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(132)
		Float tmp55 = y;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(132)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp52,tmp53,tmp54,tmp55);
		HX_STACK_LINE(133)
		Float tmp56 = (xe - rx);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(133)
		points->push(tmp56);
		HX_STACK_LINE(134)
		Float tmp57 = y;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(134)
		points->push(tmp57);
		HX_STACK_LINE(135)
		Float tmp58 = (xe + cx2);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(135)
		Float tmp59 = y;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(135)
		Float tmp60 = (xe + cx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(135)
		Float tmp61 = (y - cy1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(135)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(136)
		Float tmp62 = xe;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(136)
		Float tmp63 = (y - cy2);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(136)
		Float tmp64 = xe;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(136)
		Float tmp65 = (y + ry);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(136)
		::openfl::_internal::renderer::GraphicsPaths_obj::curveTo(points,tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(137)
		Float tmp66 = xe;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(137)
		points->push(tmp66);
		HX_STACK_LINE(138)
		Float tmp67 = (ye - ry);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(138)
		points->push(tmp67);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GraphicsPaths_obj,roundRectangle,(void))


GraphicsPaths_obj::GraphicsPaths_obj()
{
}

bool GraphicsPaths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ellipse") ) { outValue = ellipse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"curveTo") ) { outValue = curveTo_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { outValue = cubicCurveTo_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"roundRectangle") ) { outValue = roundRectangle_dyn(); return true;  }
	}
	return false;
}

bool GraphicsPaths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GraphicsPaths_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &GraphicsPaths_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPaths_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsPaths_obj::TAN22,"TAN22");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPaths_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsPaths_obj::TAN22,"TAN22");
};

#endif

hx::Class GraphicsPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("roundRectangle","\x01","\x42","\x1b","\x34"),
	::String(null()) };

void GraphicsPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.GraphicsPaths","\x08","\x5c","\xf8","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsPaths_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicsPaths_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsPaths_obj >;
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

void GraphicsPaths_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
