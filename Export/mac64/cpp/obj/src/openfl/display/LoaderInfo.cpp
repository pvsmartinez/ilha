#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
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
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
namespace openfl{
namespace display{

Void LoaderInfo_obj::__construct()
{
HX_STACK_FRAME("openfl.display.LoaderInfo","new",0xaabc917d,"openfl.display.LoaderInfo.new","openfl/display/LoaderInfo.hx",384,0x88528a51)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(386)
	super::__construct(null());
	HX_STACK_LINE(388)
	::openfl::_system::ApplicationDomain tmp = ::openfl::_system::ApplicationDomain_obj::currentDomain;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	this->applicationDomain = tmp;
	HX_STACK_LINE(389)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(390)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(391)
	this->childAllowsParent = true;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/LoaderInfo.hx",392,0x88528a51)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(392)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(392)
	this->parameters = tmp1;
}
;
	return null();
}

//LoaderInfo_obj::~LoaderInfo_obj() { }

Dynamic LoaderInfo_obj::__CreateEmpty() { return  new LoaderInfo_obj; }
hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new()
{  hx::ObjectPtr< LoaderInfo_obj > _result_ = new LoaderInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderInfo_obj > _result_ = new LoaderInfo_obj();
	_result_->__construct();
	return _result_;}

::String LoaderInfo_obj::__rootURL;

::openfl::display::LoaderInfo LoaderInfo_obj::create( ::openfl::display::Loader loader){
	HX_STACK_FRAME("openfl.display.LoaderInfo","create",0xe80075ff,"openfl.display.LoaderInfo.create","openfl/display/LoaderInfo.hx",397,0x88528a51)
	HX_STACK_ARG(loader,"loader")
	HX_STACK_LINE(399)
	::openfl::display::LoaderInfo tmp = ::openfl::display::LoaderInfo_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	::openfl::display::LoaderInfo loaderInfo = tmp;		HX_STACK_VAR(loaderInfo,"loaderInfo");
	HX_STACK_LINE(400)
	::openfl::events::UncaughtErrorEvents tmp1 = ::openfl::events::UncaughtErrorEvents_obj::__new(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(400)
	loaderInfo->uncaughtErrorEvents = tmp1;
	HX_STACK_LINE(402)
	bool tmp2 = (loader != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	if ((tmp2)){
		HX_STACK_LINE(404)
		loaderInfo->loader = loader;
	}
	else{
		HX_STACK_LINE(408)
		::String tmp3 = ::openfl::display::LoaderInfo_obj::__rootURL;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		loaderInfo->url = tmp3;
	}
	HX_STACK_LINE(412)
	::openfl::display::LoaderInfo tmp3 = loaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_MARK_MEMBER_NAME(sameDomain,"sameDomain");
	HX_MARK_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(width,"width");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_VISIT_MEMBER_NAME(sameDomain,"sameDomain");
	HX_VISIT_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(width,"width");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return loaderURL; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { return sameDomain; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { return sharedEvents; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return applicationDomain; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return childAllowsParent; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { return parentAllowsChild; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return uncaughtErrorEvents; }
	}
	return super::__Field(inName,inCallProp);
}

bool LoaderInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__rootURL") ) { outValue = __rootURL; return true;  }
	}
	return false;
}

Dynamic LoaderInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::openfl::display::Loader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { sameDomain=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { sharedEvents=inValue.Cast< ::openfl::events::EventDispatcher >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast< ::openfl::_system::ApplicationDomain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { parentAllowsChild=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast< ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LoaderInfo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__rootURL") ) { __rootURL=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"));
	outFields->push(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"));
	outFields->push(HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"));
	outFields->push(HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"));
	outFields->push(HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"));
	outFields->push(HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_system::ApplicationDomain*/ ,(int)offsetof(LoaderInfo_obj,applicationDomain),HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(LoaderInfo_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,childAllowsParent),HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(LoaderInfo_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsFloat,(int)offsetof(LoaderInfo_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::display::Loader*/ ,(int)offsetof(LoaderInfo_obj,loader),HX_HCSTRING("loader","\x13","\x48","\x6f","\x58")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,loaderURL),HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LoaderInfo_obj,parameters),HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,parentAllowsChild),HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,sameDomain),HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(int)offsetof(LoaderInfo_obj,sharedEvents),HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49")},
	{hx::fsObject /*::openfl::events::UncaughtErrorEvents*/ ,(int)offsetof(LoaderInfo_obj,uncaughtErrorEvents),HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &LoaderInfo_obj::__rootURL,HX_HCSTRING("__rootURL","\x4d","\x2b","\xe2","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"),
	HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"),
	HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"),
	HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"),
	HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"),
	HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"),
	HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__rootURL,"__rootURL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__rootURL,"__rootURL");
};

#endif

hx::Class LoaderInfo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__rootURL","\x4d","\x2b","\xe2","\x9d"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void LoaderInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.LoaderInfo","\x0b","\x0f","\x65","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoaderInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &LoaderInfo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoaderInfo_obj >;
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

void LoaderInfo_obj::__boot()
{
	__rootURL= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace openfl
} // end namespace display
