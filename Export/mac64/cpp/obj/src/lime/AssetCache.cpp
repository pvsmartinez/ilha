#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
namespace lime{

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("lime.AssetCache","new",0xe0eaad7d,"lime.AssetCache.new","lime/Assets.hx",1048,0x48c77341)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1052)
	this->enabled = true;
	HX_STACK_LINE(1059)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1059)
	{
		HX_STACK_LINE(1059)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1059)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1059)
		tmp = tmp2;
	}
	HX_STACK_LINE(1059)
	this->audio = tmp;
	HX_STACK_LINE(1060)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1060)
	{
		HX_STACK_LINE(1060)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1060)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1060)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(1060)
	this->font = tmp1;
	HX_STACK_LINE(1061)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1061)
	{
		HX_STACK_LINE(1061)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1061)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1061)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(1061)
	this->image = tmp2;
}
;
	return null();
}

//AssetCache_obj::~AssetCache_obj() { }

Dynamic AssetCache_obj::__CreateEmpty() { return  new AssetCache_obj; }
hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{  hx::ObjectPtr< AssetCache_obj > _result_ = new AssetCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetCache_obj > _result_ = new AssetCache_obj();
	_result_->__construct();
	return _result_;}

Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("lime.AssetCache","clear",0xa2398fea,"lime.AssetCache.clear","lime/Assets.hx",1066,0x48c77341)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(1068)
		bool tmp = (prefix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1068)
		if ((tmp)){
			HX_STACK_LINE(1070)
			::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1070)
			{
				HX_STACK_LINE(1070)
				::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1070)
				::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1070)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(1070)
			this->audio = tmp1;
			HX_STACK_LINE(1071)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1071)
			{
				HX_STACK_LINE(1071)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1071)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1071)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(1071)
			this->font = tmp2;
			HX_STACK_LINE(1072)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1072)
			{
				HX_STACK_LINE(1072)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1072)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1072)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(1072)
			this->image = tmp3;
		}
		else{
			HX_STACK_LINE(1076)
			::haxe::ds::StringMap tmp1 = this->audio;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1076)
			Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1076)
			Dynamic keys = tmp2;		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(1078)
			Dynamic tmp3 = keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1078)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1080)
					::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1080)
					::String tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1080)
					bool tmp6 = ::StringTools_obj::startsWith(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1080)
					if ((tmp6)){
						HX_STACK_LINE(1082)
						::haxe::ds::StringMap tmp7 = this->audio;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1082)
						::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1082)
						tmp7->remove(tmp8);
					}
				}
;
			}
			HX_STACK_LINE(1088)
			::haxe::ds::StringMap tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1088)
			Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1088)
			Dynamic keys1 = tmp5;		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(1090)
			Dynamic tmp6 = keys1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1090)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1092)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1092)
					::String tmp8 = prefix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1092)
					bool tmp9 = ::StringTools_obj::startsWith(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1092)
					if ((tmp9)){
						HX_STACK_LINE(1094)
						::haxe::ds::StringMap tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1094)
						::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1094)
						tmp10->remove(tmp11);
					}
				}
;
			}
			HX_STACK_LINE(1100)
			::haxe::ds::StringMap tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1100)
			Dynamic tmp8 = tmp7->keys();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1100)
			Dynamic keys2 = tmp8;		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(1102)
			Dynamic tmp9 = keys2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1102)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1104)
					::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1104)
					::String tmp11 = prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1104)
					bool tmp12 = ::StringTools_obj::startsWith(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1104)
					if ((tmp12)){
						HX_STACK_LINE(1106)
						::haxe::ds::StringMap tmp13 = this->image;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1106)
						::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1106)
						tmp13->remove(tmp14);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(font,"font");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return audio; }
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.AssetCache","\x0b","\x2b","\x55","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
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
