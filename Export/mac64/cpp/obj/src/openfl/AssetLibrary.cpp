#include <hxcpp.h>

#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
namespace openfl{

Void AssetLibrary_obj::__construct()
{
HX_STACK_FRAME("openfl.AssetLibrary","new",0x1b1e281b,"openfl.AssetLibrary.new","openfl/Assets.hx",884,0x989d477c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(884)
	super::__construct();
}
;
	return null();
}

//AssetLibrary_obj::~AssetLibrary_obj() { }

Dynamic AssetLibrary_obj::__CreateEmpty() { return  new AssetLibrary_obj; }
hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new()
{  hx::ObjectPtr< AssetLibrary_obj > _result_ = new AssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetLibrary_obj > _result_ = new AssetLibrary_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::MovieClip AssetLibrary_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.AssetLibrary","getMovieClip",0x2889f80f,"openfl.AssetLibrary.getMovieClip","openfl/Assets.hx",891,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(891)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getMovieClip,return )

::lime::app::Future AssetLibrary_obj::loadMovieClip( ::String id){
	HX_STACK_FRAME("openfl.AssetLibrary","loadMovieClip",0x8eb64315,"openfl.AssetLibrary.loadMovieClip","openfl/Assets.hx",896,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(896)
	::openfl::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::AssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::openfl::display::MovieClip run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",898,0x989d477c)
		{
			HX_STACK_LINE(898)
			::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(898)
			::openfl::display::MovieClip tmp1 = _g->getMovieClip(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(898)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(898)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(898)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadMovieClip,return )


AssetLibrary_obj::AssetLibrary_obj()
{
}

Dynamic AssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return loadMovieClip_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetLibrary_obj::__mClass;

void AssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.AssetLibrary","\xa9","\x7e","\x13","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetLibrary_obj >;
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
