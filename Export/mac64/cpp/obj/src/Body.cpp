#include <hxcpp.h>

#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Body_obj::__construct(::String img,int width,int height)
{
HX_STACK_FRAME("Body","new",0x8cb7d0b4,"Body.new","Body.hx",19,0xfe55c13c)
HX_STACK_THIS(this)
HX_STACK_ARG(img,"img")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	::String tmp = (HX_HCSTRING("assets/images/","\xab","\x47","\xcb","\x9f") + img);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::String tmp1 = (tmp + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	this->img = tmp1;
	HX_STACK_LINE(22)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->addHitArea(tmp2,tmp3);
	HX_STACK_LINE(23)
	this->addPng();
}
;
	return null();
}

//Body_obj::~Body_obj() { }

Dynamic Body_obj::__CreateEmpty() { return  new Body_obj; }
hx::ObjectPtr< Body_obj > Body_obj::__new(::String img,int width,int height)
{  hx::ObjectPtr< Body_obj > _result_ = new Body_obj();
	_result_->__construct(img,width,height);
	return _result_;}

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Body_obj > _result_ = new Body_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Body_obj::addHitArea( int width,int height){
{
		HX_STACK_FRAME("Body","addHitArea",0x8a2dc18b,"Body.addHitArea","Body.hx",26,0xfe55c13c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(27)
		::openfl::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		tmp->beginFill((int)16777215,((Float)0.3));
		HX_STACK_LINE(28)
		::openfl::display::Graphics tmp1 = this->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		int tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		int tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		int tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(28)
		tmp1->drawRect(tmp4,tmp7,tmp8,tmp9);
		HX_STACK_LINE(29)
		::openfl::display::Graphics tmp10 = this->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		tmp10->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,addHitArea,(void))

Void Body_obj::addPng( ){
{
		HX_STACK_FRAME("Body","addPng",0x20a85934,"Body.addPng","Body.hx",32,0xfe55c13c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::String tmp = this->img;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::openfl::display::BitmapData bitmapData = tmp1;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(34)
		::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		this->bitmap = tmp2;
		HX_STACK_LINE(35)
		::openfl::display::Bitmap tmp3 = this->bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		this->addChild(tmp3);
		HX_STACK_LINE(36)
		::openfl::display::Bitmap tmp4 = this->bitmap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		::openfl::display::Bitmap tmp5 = this->bitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		tmp4->set_x(tmp8);
		HX_STACK_LINE(37)
		::openfl::display::Bitmap tmp9 = this->bitmap;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		::openfl::display::Bitmap tmp10 = this->bitmap;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(37)
		Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(37)
		tmp9->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,addPng,(void))

Void Body_obj::move( bool l,bool u,bool r,bool d){
{
		HX_STACK_FRAME("Body","move",0x937d2c3d,"Body.move","Body.hx",40,0xfe55c13c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(l,"l")
		HX_STACK_ARG(u,"u")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(41)
		bool tmp = l;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		if ((tmp)){
			HX_STACK_LINE(42)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			Float tmp1 = _g->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			int tmp2 = this->speed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(44)
		bool tmp1 = u;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(45)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			Float tmp2 = _g->get_y();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			int tmp3 = this->speed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			_g->set_y(tmp4);
		}
		HX_STACK_LINE(47)
		bool tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		if ((tmp2)){
			HX_STACK_LINE(48)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			Float tmp3 = _g->get_x();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			int tmp4 = this->speed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			_g->set_x(tmp5);
		}
		HX_STACK_LINE(50)
		bool tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(51)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			Float tmp4 = _g->get_y();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = this->speed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			_g->set_y(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Body_obj,move,(void))


Body_obj::Body_obj()
{
}

void Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Body);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(img,"img");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(img,"img");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { return img; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"addPng") ) { return addPng_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addHitArea") ) { return addHitArea_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"img") ) { img=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("img","\x03","\x0c","\x50","\x00"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Body_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsString,(int)offsetof(Body_obj,img),HX_HCSTRING("img","\x03","\x0c","\x50","\x00")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Body_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("img","\x03","\x0c","\x50","\x00"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("addHitArea","\x5f","\x4f","\x84","\x3d"),
	HX_HCSTRING("addPng","\x08","\x6d","\x06","\x9f"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

#endif

hx::Class Body_obj::__mClass;

void Body_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Body","\xc2","\xa6","\xf4","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Body_obj >;
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

