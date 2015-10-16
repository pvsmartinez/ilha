#include <hxcpp.h>

#ifndef INCLUDED_Body
#include <Body.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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

Void Body_obj::__construct()
{
HX_STACK_FRAME("Body","new",0x8cb7d0b4,"Body.new","Body.hx",7,0xfe55c13c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct((int)50);
	HX_STACK_LINE(9)
	this->super::addPng(HX_HCSTRING("yoshi","\x1e","\x7e","\x32","\xf5"));
}
;
	return null();
}

//Body_obj::~Body_obj() { }

Dynamic Body_obj::__CreateEmpty() { return  new Body_obj; }
hx::ObjectPtr< Body_obj > Body_obj::__new()
{  hx::ObjectPtr< Body_obj > _result_ = new Body_obj();
	_result_->__construct();
	return _result_;}

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Body_obj > _result_ = new Body_obj();
	_result_->__construct();
	return _result_;}

Void Body_obj::interact( Array< bool > keys,Array< ::Dynamic > stuff){
{
		HX_STACK_FRAME("Body","interact",0xc782dae2,"Body.interact","Body.hx",13,0xfe55c13c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keys,"keys")
		HX_STACK_ARG(stuff,"stuff")
		HX_STACK_LINE(13)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(13)
		while((true)){
			HX_STACK_LINE(13)
			bool tmp = (_g < stuff->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13)
			if ((tmp1)){
				HX_STACK_LINE(13)
				break;
			}
			HX_STACK_LINE(13)
			::Component tmp2 = stuff->__get(_g).StaticCast< ::Component >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13)
			::Component cmp = tmp2;		HX_STACK_VAR(cmp,"cmp");
			HX_STACK_LINE(13)
			++(_g);
			HX_STACK_LINE(14)
			::Component tmp3 = cmp;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14)
			bool tmp4 = this->hitTestObject(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14)
			if ((tmp4)){
				HX_STACK_LINE(15)
				bool tmp5 = keys->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(15)
				if ((tmp5)){
					HX_STACK_LINE(16)
					cmp->action(true);
				}
				else{
					HX_STACK_LINE(18)
					cmp->action(false);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,interact,(void))

Void Body_obj::move( bool l,bool u,bool r,bool d){
{
		HX_STACK_FRAME("Body","move",0x937d2c3d,"Body.move","Body.hx",24,0xfe55c13c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(l,"l")
		HX_STACK_ARG(u,"u")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(25)
		bool tmp = l;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		if ((tmp)){
			HX_STACK_LINE(26)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(26)
			Float tmp1 = _g->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			Float tmp2 = (tmp1 - (int)5);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			_g->set_x(tmp2);
		}
		HX_STACK_LINE(28)
		bool tmp1 = u;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		if ((tmp1)){
			HX_STACK_LINE(29)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			Float tmp2 = _g->get_y();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			Float tmp3 = (tmp2 - (int)5);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			_g->set_y(tmp3);
		}
		HX_STACK_LINE(31)
		bool tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(32)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			Float tmp3 = _g->get_x();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			Float tmp4 = (tmp3 + (int)5);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			_g->set_x(tmp4);
		}
		HX_STACK_LINE(34)
		bool tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		if ((tmp3)){
			HX_STACK_LINE(35)
			::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			Float tmp4 = _g->get_y();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			Float tmp5 = (tmp4 + (int)5);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			_g->set_y(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Body_obj,move,(void))


Body_obj::Body_obj()
{
}

Dynamic Body_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
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

