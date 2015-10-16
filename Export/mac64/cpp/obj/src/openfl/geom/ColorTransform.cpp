#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
HX_STACK_FRAME("openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",142,0x850de941)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_redMultiplier,"redMultiplier")
HX_STACK_ARG(__o_greenMultiplier,"greenMultiplier")
HX_STACK_ARG(__o_blueMultiplier,"blueMultiplier")
HX_STACK_ARG(__o_alphaMultiplier,"alphaMultiplier")
HX_STACK_ARG(__o_redOffset,"redOffset")
HX_STACK_ARG(__o_greenOffset,"greenOffset")
HX_STACK_ARG(__o_blueOffset,"blueOffset")
HX_STACK_ARG(__o_alphaOffset,"alphaOffset")
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
{
	HX_STACK_LINE(144)
	this->redMultiplier = redMultiplier;
	HX_STACK_LINE(145)
	this->greenMultiplier = greenMultiplier;
	HX_STACK_LINE(146)
	this->blueMultiplier = blueMultiplier;
	HX_STACK_LINE(147)
	this->alphaMultiplier = alphaMultiplier;
	HX_STACK_LINE(148)
	this->redOffset = redOffset;
	HX_STACK_LINE(149)
	this->greenOffset = greenOffset;
	HX_STACK_LINE(150)
	this->blueOffset = blueOffset;
	HX_STACK_LINE(151)
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return _result_;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",167,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(169)
		hx::MultEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(170)
		hx::MultEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(171)
		hx::MultEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(172)
		hx::MultEq(this->alphaMultiplier,second->alphaMultiplier);
		HX_STACK_LINE(174)
		Float tmp = second->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		Float tmp1 = this->redOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		Float tmp3 = second->redOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		this->redOffset = tmp4;
		HX_STACK_LINE(175)
		Float tmp5 = second->greenMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		Float tmp6 = this->greenOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(175)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		Float tmp8 = second->greenOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		this->greenOffset = tmp9;
		HX_STACK_LINE(176)
		Float tmp10 = second->blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		Float tmp11 = this->blueOffset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(176)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		Float tmp13 = second->blueOffset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(176)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(176)
		this->blueOffset = tmp14;
		HX_STACK_LINE(177)
		Float tmp15 = second->alphaMultiplier;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(177)
		Float tmp16 = this->alphaOffset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(177)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(177)
		Float tmp18 = second->alphaOffset;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(177)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(177)
		this->alphaOffset = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::openfl::geom::ColorTransform ColorTransform_obj::__clone( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",182,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	Float tmp = this->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	Float tmp1 = this->greenMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	Float tmp2 = this->blueMultiplier;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	Float tmp3 = this->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	Float tmp4 = this->redOffset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	Float tmp5 = this->greenOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	Float tmp6 = this->blueOffset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(184)
	Float tmp7 = this->alphaOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(184)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(184)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__clone,return )

Void ColorTransform_obj::__combine( ::openfl::geom::ColorTransform ct){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",189,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ct,"ct")
		HX_STACK_LINE(191)
		hx::MultEq(this->redMultiplier,ct->redMultiplier);
		HX_STACK_LINE(192)
		hx::MultEq(this->greenMultiplier,ct->greenMultiplier);
		HX_STACK_LINE(193)
		hx::MultEq(this->blueMultiplier,ct->blueMultiplier);
		HX_STACK_LINE(194)
		hx::MultEq(this->alphaMultiplier,ct->alphaMultiplier);
		HX_STACK_LINE(196)
		hx::AddEq(this->redOffset,ct->redOffset);
		HX_STACK_LINE(197)
		hx::AddEq(this->greenOffset,ct->greenOffset);
		HX_STACK_LINE(198)
		hx::AddEq(this->blueOffset,ct->blueOffset);
		HX_STACK_LINE(199)
		hx::AddEq(this->alphaOffset,ct->alphaOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,__combine,(void))

bool ColorTransform_obj::__equals( ::openfl::geom::ColorTransform ct,Dynamic __o_skipAlphaMultiplier){
Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
	HX_STACK_FRAME("openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",204,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(skipAlphaMultiplier,"skipAlphaMultiplier")
{
		HX_STACK_LINE(206)
		bool tmp = (ct != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		if ((tmp1)){
			HX_STACK_LINE(206)
			Float tmp3 = this->redMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			Float tmp6 = ct->redMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(206)
			tmp2 = false;
		}
		HX_STACK_LINE(206)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		if ((tmp3)){
			HX_STACK_LINE(206)
			Float tmp5 = this->greenMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			Float tmp8 = ct->greenMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			tmp4 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(206)
			tmp4 = false;
		}
		HX_STACK_LINE(206)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		if ((tmp5)){
			HX_STACK_LINE(206)
			Float tmp7 = this->blueMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			Float tmp10 = ct->blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			tmp6 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(206)
			tmp6 = false;
		}
		HX_STACK_LINE(206)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		if ((tmp7)){
			HX_STACK_LINE(206)
			Dynamic tmp9 = skipAlphaMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			if ((tmp16)){
				HX_STACK_LINE(206)
				Float tmp17 = this->alphaMultiplier;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(206)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(206)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(206)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(206)
				Float tmp21 = ct->alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(206)
				tmp8 = (tmp20 == tmp21);
			}
			else{
				HX_STACK_LINE(206)
				tmp8 = true;
			}
		}
		else{
			HX_STACK_LINE(206)
			tmp8 = false;
		}
		HX_STACK_LINE(206)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(206)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(206)
		if ((tmp9)){
			HX_STACK_LINE(206)
			Float tmp11 = this->redOffset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(206)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			Float tmp14 = ct->redOffset;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			tmp10 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(206)
			tmp10 = false;
		}
		HX_STACK_LINE(206)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(206)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(206)
		if ((tmp11)){
			HX_STACK_LINE(206)
			Float tmp13 = this->greenOffset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			Float tmp16 = ct->greenOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			tmp12 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(206)
			tmp12 = false;
		}
		HX_STACK_LINE(206)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(206)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(206)
		if ((tmp13)){
			HX_STACK_LINE(206)
			Float tmp15 = this->blueOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(206)
			Float tmp18 = ct->blueOffset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(206)
			tmp14 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(206)
			tmp14 = false;
		}
		HX_STACK_LINE(206)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(206)
		if ((tmp14)){
			HX_STACK_LINE(206)
			Float tmp16 = this->alphaOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(206)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(206)
			Float tmp18 = ct->alphaOffset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(206)
			tmp15 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(206)
			tmp15 = false;
		}
		HX_STACK_LINE(206)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,__equals,return )

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",218,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	Float tmp = this->redOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	Float tmp3 = this->greenOffset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(220)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(220)
	int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(220)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	Float tmp7 = this->blueOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(220)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(220)
	int tmp9 = (int(tmp6) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(220)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",225,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(227)
	int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	this->redOffset = tmp1;
	HX_STACK_LINE(228)
	int tmp2 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	this->greenOffset = tmp3;
	HX_STACK_LINE(229)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(229)
	this->blueOffset = tmp4;
	HX_STACK_LINE(231)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(232)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(233)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(235)
	int tmp5 = this->get_color();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(235)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

::lime::utils::ArrayBufferView ColorTransform_obj::__toLimeColorMatrix( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",240,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	{
		HX_STACK_LINE(242)
		Float tmp1 = this->redMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Float tmp2 = this->redOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		Float tmp3 = (Float(tmp2) / Float((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		Float tmp4 = this->greenMultiplier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		Float tmp5 = this->greenOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		Float tmp7 = this->blueMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		Float tmp8 = this->blueOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		Float tmp9 = (Float(tmp8) / Float((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		Float tmp10 = this->alphaMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		Float tmp11 = this->alphaOffset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp1).Add((int)0).Add((int)0).Add((int)0).Add(tmp3).Add((int)0).Add(tmp4).Add((int)0).Add((int)0).Add(tmp6).Add((int)0).Add((int)0).Add(tmp7).Add((int)0).Add(tmp9).Add((int)0).Add((int)0).Add((int)0).Add(tmp10).Add(tmp12);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(242)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(242)
		bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		if ((tmp13)){
			HX_STACK_LINE(242)
			::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(242)
			this1 = tmp14;
		}
		else{
			HX_STACK_LINE(242)
			bool tmp14 = (array != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(242)
			if ((tmp14)){
				HX_STACK_LINE(242)
				::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(242)
					::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(242)
					::lime::utils::ArrayBufferView _this = tmp16;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(242)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(242)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(242)
					int tmp17 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(242)
					_this->byteLength = tmp17;
					HX_STACK_LINE(242)
					::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(242)
						int tmp19 = _this->byteLength;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(242)
						::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(242)
						this2 = tmp20;
						HX_STACK_LINE(242)
						tmp18 = this2;
					}
					HX_STACK_LINE(242)
					_this->buffer = tmp18;
					HX_STACK_LINE(242)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(242)
					tmp15 = _this;
				}
				HX_STACK_LINE(242)
				this1 = tmp15;
			}
			else{
				HX_STACK_LINE(242)
				bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				if ((tmp15)){
					HX_STACK_LINE(242)
					::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(242)
						::lime::utils::ArrayBufferView _this = tmp17;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(242)
						::haxe::io::Bytes tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(242)
						::haxe::io::Bytes srcData = tmp18;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(242)
						int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(242)
						int srcLength = tmp19;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(242)
						int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(242)
						int srcByteOffset = tmp20;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(242)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(242)
						int srcElementSize = tmp21;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(242)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(242)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(242)
						int tmp23 = _this->type;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(242)
						bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(242)
						if ((tmp24)){
							HX_STACK_LINE(242)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(242)
							int tmp25 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(242)
							int cloneLength = tmp25;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(242)
							::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(242)
							{
								HX_STACK_LINE(242)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(242)
								int tmp27 = cloneLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(242)
								::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(242)
								this2 = tmp28;
								HX_STACK_LINE(242)
								tmp26 = this2;
							}
							HX_STACK_LINE(242)
							_this->buffer = tmp26;
							HX_STACK_LINE(242)
							::haxe::io::Bytes tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(242)
							int tmp28 = srcByteOffset;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(242)
							int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(242)
							_this->buffer->blit((int)0,tmp27,tmp28,tmp29);
						}
						else{
							HX_STACK_LINE(242)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(242)
						int tmp25 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(242)
						_this->byteLength = tmp25;
						HX_STACK_LINE(242)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(242)
						_this->length = srcLength;
						HX_STACK_LINE(242)
						tmp16 = _this;
					}
					HX_STACK_LINE(242)
					this1 = tmp16;
				}
				else{
					HX_STACK_LINE(242)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(242)
					if ((tmp16)){
						HX_STACK_LINE(242)
						::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(242)
						{
							HX_STACK_LINE(242)
							::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(242)
							::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(242)
							bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(242)
							if ((tmp19)){
								HX_STACK_LINE(242)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(242)
							int tmp20 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(242)
							bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(242)
							if ((tmp21)){
								HX_STACK_LINE(242)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(242)
							int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(242)
							int bufferByteLength = tmp22;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(242)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(242)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(242)
							bool tmp23 = true;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(242)
							if ((tmp23)){
								HX_STACK_LINE(242)
								int tmp24 = bufferByteLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(242)
								newByteLength = tmp24;
								HX_STACK_LINE(242)
								int tmp25 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(242)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(242)
								if ((tmp26)){
									HX_STACK_LINE(242)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(242)
								bool tmp27 = (newByteLength < (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(242)
								if ((tmp27)){
									HX_STACK_LINE(242)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(242)
								int tmp24 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(242)
								newByteLength = tmp24;
								HX_STACK_LINE(242)
								int tmp25 = newByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(242)
								int newRange = tmp25;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(242)
								bool tmp26 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(242)
								if ((tmp26)){
									HX_STACK_LINE(242)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(242)
							_this->buffer = null();
							HX_STACK_LINE(242)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(242)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(242)
							Float tmp24 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(242)
							int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(242)
							_this->length = tmp25;
							HX_STACK_LINE(242)
							tmp17 = _this;
						}
						HX_STACK_LINE(242)
						this1 = tmp17;
					}
					else{
						HX_STACK_LINE(242)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(242)
		tmp = this1;
	}
	HX_STACK_LINE(242)
	::lime::utils::ArrayBufferView tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__toLimeColorMatrix,return )


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return __clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__equals") ) { return __equals_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"__combine") ) { return __combine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return __toLimeColorMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("__clone","\x3d","\x6c","\xc1","\xb2"),
	HX_HCSTRING("__combine","\x5f","\x7b","\x7c","\xfb"),
	HX_HCSTRING("__equals","\x5f","\x59","\x22","\x68"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("__toLimeColorMatrix","\x94","\xd4","\xb6","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.ColorTransform","\x3d","\x35","\x6d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
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
