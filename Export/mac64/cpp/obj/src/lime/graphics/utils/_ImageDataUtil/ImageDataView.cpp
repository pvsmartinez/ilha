#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#include <lime/graphics/utils/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
namespace lime{
namespace graphics{
namespace utils{
namespace _ImageDataUtil{

Void ImageDataView_obj::__construct(::lime::graphics::Image image,::lime::math::Rectangle rect)
{
HX_STACK_FRAME("lime.graphics.utils._ImageDataUtil.ImageDataView","new",0xaa0478bd,"lime.graphics.utils._ImageDataUtil.ImageDataView.new","lime/graphics/utils/ImageDataUtil.hx",1144,0x494d921f)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
HX_STACK_ARG(rect,"rect")
{
	HX_STACK_LINE(1146)
	this->image = image;
	HX_STACK_LINE(1148)
	bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1148)
	if ((tmp)){
		HX_STACK_LINE(1150)
		::lime::math::Rectangle tmp1 = image->get_rect();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1150)
		this->rect = tmp1;
	}
	else{
		HX_STACK_LINE(1154)
		bool tmp1 = (rect->x < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1154)
		if ((tmp1)){
			HX_STACK_LINE(1154)
			rect->x = (int)0;
		}
		HX_STACK_LINE(1155)
		bool tmp2 = (rect->y < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1155)
		if ((tmp2)){
			HX_STACK_LINE(1155)
			rect->y = (int)0;
		}
		HX_STACK_LINE(1156)
		Float tmp3 = (rect->x + rect->width);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1156)
		int tmp4 = image->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1156)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1156)
		if ((tmp5)){
			HX_STACK_LINE(1156)
			Float tmp6 = (image->width - rect->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1156)
			rect->width = tmp6;
		}
		HX_STACK_LINE(1157)
		Float tmp6 = (rect->y + rect->height);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1157)
		int tmp7 = image->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1157)
		bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1157)
		if ((tmp8)){
			HX_STACK_LINE(1157)
			Float tmp9 = (image->height - rect->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1157)
			rect->height = tmp9;
		}
		HX_STACK_LINE(1158)
		bool tmp9 = (rect->width < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1158)
		if ((tmp9)){
			HX_STACK_LINE(1158)
			rect->width = (int)0;
		}
		HX_STACK_LINE(1159)
		bool tmp10 = (rect->height < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1159)
		if ((tmp10)){
			HX_STACK_LINE(1159)
			rect->height = (int)0;
		}
		HX_STACK_LINE(1160)
		this->rect = rect;
	}
	HX_STACK_LINE(1164)
	int tmp1 = image->buffer->get_stride();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1164)
	this->stride = tmp1;
	HX_STACK_LINE(1166)
	::lime::math::Rectangle tmp2 = this->rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1166)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1166)
	int tmp4 = ::Math_obj::ceil(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1166)
	this->x = tmp4;
	HX_STACK_LINE(1167)
	::lime::math::Rectangle tmp5 = this->rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1167)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1167)
	int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1167)
	this->y = tmp7;
	HX_STACK_LINE(1168)
	::lime::math::Rectangle tmp8 = this->rect;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1168)
	Float tmp9 = tmp8->width;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1168)
	int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1168)
	this->width = tmp10;
	HX_STACK_LINE(1169)
	::lime::math::Rectangle tmp11 = this->rect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1169)
	Float tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1169)
	int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1169)
	this->height = tmp13;
	HX_STACK_LINE(1170)
	int tmp14 = this->stride;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1170)
	int tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1170)
	int tmp16 = image->offsetY;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1170)
	int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1170)
	int tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1170)
	int tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1170)
	int tmp20 = image->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1170)
	int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1170)
	int tmp22 = (tmp21 * (int)4);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1170)
	int tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1170)
	this->offset = tmp23;
}
;
	return null();
}

//ImageDataView_obj::~ImageDataView_obj() { }

Dynamic ImageDataView_obj::__CreateEmpty() { return  new ImageDataView_obj; }
hx::ObjectPtr< ImageDataView_obj > ImageDataView_obj::__new(::lime::graphics::Image image,::lime::math::Rectangle rect)
{  hx::ObjectPtr< ImageDataView_obj > _result_ = new ImageDataView_obj();
	_result_->__construct(image,rect);
	return _result_;}

Dynamic ImageDataView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataView_obj > _result_ = new ImageDataView_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void ImageDataView_obj::clip( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils._ImageDataUtil.ImageDataView","clip",0x12a517d3,"lime.graphics.utils._ImageDataUtil.ImageDataView.clip","lime/graphics/utils/ImageDataUtil.hx",1175,0x494d921f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1177)
		::lime::math::Rectangle tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1177)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1177)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1177)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1177)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1177)
		tmp->__contract(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(1179)
		::lime::math::Rectangle tmp5 = this->rect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1179)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1179)
		int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1179)
		this->x = tmp7;
		HX_STACK_LINE(1180)
		::lime::math::Rectangle tmp8 = this->rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1180)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1180)
		int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1180)
		this->y = tmp10;
		HX_STACK_LINE(1181)
		::lime::math::Rectangle tmp11 = this->rect;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1181)
		Float tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1181)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1181)
		this->width = tmp13;
		HX_STACK_LINE(1182)
		::lime::math::Rectangle tmp14 = this->rect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1182)
		Float tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1182)
		int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1182)
		this->height = tmp16;
		HX_STACK_LINE(1183)
		int tmp17 = this->stride;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1183)
		int tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1183)
		::lime::graphics::Image tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1183)
		int tmp20 = tmp19->offsetY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1183)
		int tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1183)
		int tmp22 = (tmp17 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1183)
		int tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1183)
		::lime::graphics::Image tmp24 = this->image;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1183)
		int tmp25 = tmp24->offsetX;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1183)
		int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1183)
		int tmp27 = (tmp26 * (int)4);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1183)
		int tmp28 = (tmp22 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1183)
		this->offset = tmp28;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ImageDataView_obj,clip,(void))

int ImageDataView_obj::row( int y){
	HX_STACK_FRAME("lime.graphics.utils._ImageDataUtil.ImageDataView","row",0xaa078a77,"lime.graphics.utils._ImageDataUtil.ImageDataView.row","lime/graphics/utils/ImageDataUtil.hx",1188,0x494d921f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1190)
	int tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1190)
	int tmp1 = this->stride;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1190)
	int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1190)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1190)
	int tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1190)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ImageDataView_obj,row,return )


ImageDataView_obj::ImageDataView_obj()
{
}

void ImageDataView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDataView);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_END_CLASS();
}

void ImageDataView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(stride,"stride");
}

Dynamic ImageDataView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return row_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"stride") ) { return stride; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageDataView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDataView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageDataView_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(ImageDataView_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(ImageDataView_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsInt,(int)offsetof(ImageDataView_obj,stride),HX_HCSTRING("stride","\x19","\x20","\x30","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("stride","\x19","\x20","\x30","\x11"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("row","\x1a","\xe2","\x56","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataView_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageDataView_obj::__mClass;

void ImageDataView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils._ImageDataUtil.ImageDataView","\x4b","\x56","\x58","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageDataView_obj >;
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
} // end namespace graphics
} // end namespace utils
} // end namespace _ImageDataUtil
