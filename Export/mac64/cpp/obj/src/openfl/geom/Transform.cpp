#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace geom{

Void Transform_obj::__construct(::openfl::display::DisplayObject displayObject)
{
HX_STACK_FRAME("openfl.geom.Transform","new",0x993cc92a,"openfl.geom.Transform.new","openfl/geom/Transform.hx",139,0xf4f475e6)
HX_STACK_THIS(this)
HX_STACK_ARG(displayObject,"displayObject")
{
	HX_STACK_LINE(141)
	::openfl::geom::ColorTransform tmp = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	this->__colorTransform = tmp;
	HX_STACK_LINE(142)
	::openfl::geom::ColorTransform tmp1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	this->concatenatedColorTransform = tmp1;
	HX_STACK_LINE(143)
	::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	this->pixelBounds = tmp2;
	HX_STACK_LINE(145)
	this->__displayObject = displayObject;
	HX_STACK_LINE(146)
	this->__hasMatrix = true;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::display::DisplayObject displayObject)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(displayObject);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_colorTransform",0xc8c832c8,"openfl.geom.Transform.get_colorTransform","openfl/geom/Transform.hx",158,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	::openfl::geom::ColorTransform tmp = this->__colorTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
	HX_STACK_FRAME("openfl.geom.Transform","set_colorTransform",0xa577653c,"openfl.geom.Transform.set_colorTransform","openfl/geom/Transform.hx",165,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	::openfl::geom::ColorTransform tmp = this->__colorTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	::openfl::geom::ColorTransform tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	bool tmp2 = tmp->__equals(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(167)
	if ((tmp3)){
		HX_STACK_LINE(169)
		this->__colorTransform = value;
		HX_STACK_LINE(171)
		bool tmp4 = (value != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		if ((tmp4)){
			HX_STACK_LINE(173)
			::openfl::display::DisplayObject tmp5 = this->__displayObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			Float tmp6 = value->alphaMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			tmp5->set_alpha(tmp6);
		}
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::openfl::display::DisplayObject tmp5 = this->__displayObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			::openfl::display::DisplayObject _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(177)
			bool tmp6 = _this->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			if ((tmp7)){
				HX_STACK_LINE(177)
				_this->__renderDirty = true;
				HX_STACK_LINE(177)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(181)
	::openfl::geom::ColorTransform tmp4 = this->__colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix",0x80c3ba80,"openfl.geom.Transform.get_matrix","openfl/geom/Transform.hx",186,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	bool tmp = this->__hasMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	if ((tmp)){
		HX_STACK_LINE(190)
		::openfl::geom::Matrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			::openfl::display::DisplayObject tmp2 = this->__displayObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			::openfl::geom::Matrix _this = tmp2->__transform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(190)
			tmp1 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(190)
		return tmp1;
	}
	HX_STACK_LINE(194)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_concatenatedMatrix",0x352d276f,"openfl.geom.Transform.get_concatenatedMatrix","openfl/geom/Transform.hx",199,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	bool tmp = this->__hasMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	if ((tmp)){
		HX_STACK_LINE(203)
		::openfl::geom::Matrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			::openfl::display::DisplayObject tmp2 = this->__displayObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			::openfl::geom::Matrix tmp3 = tmp2->__getWorldTransform();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			::openfl::geom::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(203)
			tmp1 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(203)
		return tmp1;
	}
	HX_STACK_LINE(207)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix",0x844158f4,"openfl.geom.Transform.set_matrix","openfl/geom/Transform.hx",212,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(214)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	if ((tmp)){
		HX_STACK_LINE(216)
		this->__hasMatrix = false;
		HX_STACK_LINE(217)
		return null();
	}
	HX_STACK_LINE(221)
	this->__hasMatrix = true;
	HX_STACK_LINE(222)
	this->__hasMatrix3D = false;
	HX_STACK_LINE(224)
	::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(226)
		Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		Float tmp4 = (Float((int)180) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		Float tmp5 = value->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		Float tmp6 = value->c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		Float tmp9 = (tmp8 - (int)90);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(226)
		Float rotation = tmp9;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(228)
		Float tmp10 = rotation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(228)
		::openfl::display::DisplayObject tmp11 = this->__displayObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(228)
		Float tmp12 = tmp11->__rotation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(228)
		bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(228)
		if ((tmp13)){
			HX_STACK_LINE(230)
			::openfl::display::DisplayObject tmp14 = this->__displayObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(230)
			tmp14->__rotation = rotation;
			HX_STACK_LINE(231)
			Float tmp15 = rotation;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(231)
			Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(231)
			Float tmp17 = (Float(tmp16) / Float((int)180));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(231)
			Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(231)
			Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(232)
			Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(232)
			Float tmp20 = ::Math_obj::sin(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(232)
			::openfl::display::DisplayObject tmp21 = this->__displayObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(232)
			tmp21->__rotationSine = tmp20;
			HX_STACK_LINE(233)
			Float tmp22 = radians;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(233)
			Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(233)
			::openfl::display::DisplayObject tmp24 = this->__displayObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(233)
			tmp24->__rotationCosine = tmp23;
		}
		HX_STACK_LINE(237)
		::openfl::display::DisplayObject tmp14 = this->__displayObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(237)
		::openfl::geom::Matrix tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(237)
		tmp14->__transform->copyFrom(tmp15);
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			::openfl::display::DisplayObject tmp16 = this->__displayObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(238)
			::openfl::display::DisplayObject _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(238)
			bool tmp17 = _this->__transformDirty;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(238)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(238)
			if ((tmp18)){
				HX_STACK_LINE(238)
				_this->__transformDirty = true;
				HX_STACK_LINE(238)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(242)
	::openfl::geom::Matrix tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::geom::Matrix3D Transform_obj::get_matrix3D( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix3D",0x05078731,"openfl.geom.Transform.get_matrix3D","openfl/geom/Transform.hx",247,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	bool tmp = this->__hasMatrix3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	if ((tmp)){
		HX_STACK_LINE(251)
		::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		::openfl::geom::Matrix matrix = tmp1->__transform;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(252)
		::openfl::geom::Matrix3D tmp2 = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(matrix->a).Add(matrix->b).Add(((Float)0.0)).Add(((Float)0.0)).Add(matrix->c).Add(matrix->d).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(matrix->tx).Add(matrix->ty).Add(((Float)0.0)).Add(((Float)1.0)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		return tmp2;
	}
	HX_STACK_LINE(256)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix3D",0x1a00aaa5,"openfl.geom.Transform.set_matrix3D","openfl/geom/Transform.hx",261,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	if ((tmp)){
		HX_STACK_LINE(265)
		this->__hasMatrix3D = false;
		HX_STACK_LINE(266)
		return null();
	}
	HX_STACK_LINE(270)
	this->__hasMatrix = false;
	HX_STACK_LINE(271)
	this->__hasMatrix3D = true;
	HX_STACK_LINE(273)
	::openfl::display::DisplayObject tmp1 = this->__displayObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	if ((tmp2)){
		HX_STACK_LINE(275)
		Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		Float tmp4 = (Float((int)180) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		Float tmp5 = value->rawData->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(275)
		Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(275)
		Float tmp7 = value->rawData->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(275)
		Float tmp9 = ::Math_obj::atan2(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(275)
		Float tmp10 = (tmp4 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(275)
		Float tmp11 = (tmp10 - (int)90);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(275)
		Float rotation = tmp11;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(277)
		Float tmp12 = rotation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(277)
		::openfl::display::DisplayObject tmp13 = this->__displayObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(277)
		Float tmp14 = tmp13->__rotation;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(277)
		bool tmp15 = (tmp12 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(277)
		if ((tmp15)){
			HX_STACK_LINE(279)
			::openfl::display::DisplayObject tmp16 = this->__displayObject;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(279)
			tmp16->__rotation = rotation;
			HX_STACK_LINE(280)
			Float tmp17 = rotation;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(280)
			Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(280)
			Float tmp19 = (Float(tmp18) / Float((int)180));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(280)
			Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(280)
			Float radians = tmp20;		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(281)
			Float tmp21 = radians;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(281)
			Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(281)
			::openfl::display::DisplayObject tmp23 = this->__displayObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(281)
			tmp23->__rotationSine = tmp22;
			HX_STACK_LINE(282)
			Float tmp24 = radians;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(282)
			Float tmp25 = ::Math_obj::cos(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(282)
			::openfl::display::DisplayObject tmp26 = this->__displayObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(282)
			tmp26->__rotationCosine = tmp25;
		}
		HX_STACK_LINE(286)
		Float tmp16 = value->rawData->__get((int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(286)
		::openfl::display::DisplayObject tmp17 = this->__displayObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(286)
		tmp17->__transform->a = ((Dynamic)(tmp16));
		HX_STACK_LINE(287)
		Float tmp18 = value->rawData->__get((int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(287)
		::openfl::display::DisplayObject tmp19 = this->__displayObject;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(287)
		tmp19->__transform->b = ((Dynamic)(tmp18));
		HX_STACK_LINE(288)
		Float tmp20 = value->rawData->__get((int)5);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(288)
		::openfl::display::DisplayObject tmp21 = this->__displayObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(288)
		tmp21->__transform->c = ((Dynamic)(tmp20));
		HX_STACK_LINE(289)
		Float tmp22 = value->rawData->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(289)
		::openfl::display::DisplayObject tmp23 = this->__displayObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(289)
		tmp23->__transform->d = ((Dynamic)(tmp22));
		HX_STACK_LINE(290)
		Float tmp24 = value->rawData->__get((int)12);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(290)
		::openfl::display::DisplayObject tmp25 = this->__displayObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(290)
		tmp25->__transform->tx = ((Dynamic)(tmp24));
		HX_STACK_LINE(291)
		Float tmp26 = value->rawData->__get((int)13);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(291)
		::openfl::display::DisplayObject tmp27 = this->__displayObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(291)
		tmp27->__transform->ty = ((Dynamic)(tmp26));
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			::openfl::display::DisplayObject tmp28 = this->__displayObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(293)
			::openfl::display::DisplayObject _this = tmp28;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(293)
			bool tmp29 = _this->__transformDirty;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(293)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(293)
			if ((tmp30)){
				HX_STACK_LINE(293)
				_this->__transformDirty = true;
				HX_STACK_LINE(293)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(297)
	::openfl::geom::Matrix3D tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(__displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(__displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return get_matrix3D(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return pixelBounds; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return __hasMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return get_matrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return set_matrix3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return __hasMatrix3D; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return __displayObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return __colorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { if (inCallProp == hx::paccAlways) return get_concatenatedMatrix(); }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return concatenatedColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { if (inCallProp == hx::paccAlways) return set_matrix3D(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { __hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { __hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp == hx::paccAlways) return set_colorTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { __displayObject=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { __colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("matrix3D","\x32","\x35","\xf3","\x66"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"));
	outFields->push(HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"));
	outFields->push(HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"));
	outFields->push(HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,__colorTransform),HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__displayObject),HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix),HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix3D),HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("__colorTransform","\xa9","\x62","\x7f","\xe1"),
	HX_HCSTRING("__displayObject","\x81","\x73","\x54","\x5e"),
	HX_HCSTRING("__hasMatrix","\x1b","\x32","\xdd","\x2a"),
	HX_HCSTRING("__hasMatrix3D","\x8c","\x5b","\x22","\x82"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_matrix3D","\x3b","\xe9","\x0c","\x1c"),
	HX_HCSTRING("set_matrix3D","\xaf","\x0c","\x06","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.Transform","\x38","\xac","\x4a","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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
