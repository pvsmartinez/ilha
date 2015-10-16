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
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_IAssetCache
#include <openfl/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
namespace openfl{

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("openfl.AssetCache","new",0x4c82a362,"openfl.AssetCache.new","openfl/Assets.hx",906,0x989d477c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(915)
	this->__enabled = true;
	HX_STACK_LINE(920)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	{
		HX_STACK_LINE(920)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(920)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(920)
		tmp = tmp2;
	}
	HX_STACK_LINE(920)
	this->bitmapData = tmp;
	HX_STACK_LINE(921)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	{
		HX_STACK_LINE(921)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(921)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(921)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(921)
	this->font = tmp1;
	HX_STACK_LINE(922)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(922)
	{
		HX_STACK_LINE(922)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(922)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(922)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(922)
	this->sound = tmp2;
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

hx::Object *AssetCache_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::IAssetCache_obj)) return operator ::openfl::IAssetCache_obj *();
	return super::__ToInterface(inType);
}

AssetCache_obj::operator ::openfl::IAssetCache_obj *()
	{ return new ::openfl::IAssetCache_delegate_< AssetCache_obj >(this); }
Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("openfl.AssetCache","clear",0x1c26890f,"openfl.AssetCache.clear","openfl/Assets.hx",927,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(929)
		bool tmp = (prefix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(929)
		if ((tmp)){
			HX_STACK_LINE(931)
			::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(931)
			{
				HX_STACK_LINE(931)
				::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(931)
				::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(931)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(931)
			this->bitmapData = tmp1;
			HX_STACK_LINE(932)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(932)
			{
				HX_STACK_LINE(932)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(932)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(932)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(932)
			this->font = tmp2;
			HX_STACK_LINE(933)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(933)
			{
				HX_STACK_LINE(933)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(933)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(933)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(933)
			this->sound = tmp3;
		}
		else{
			HX_STACK_LINE(937)
			::haxe::ds::StringMap tmp1 = this->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(937)
			Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(937)
			Dynamic keys = tmp2;		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(939)
			Dynamic tmp3 = keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(939)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(941)
					::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(941)
					::String tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(941)
					bool tmp6 = ::StringTools_obj::startsWith(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(941)
					if ((tmp6)){
						HX_STACK_LINE(943)
						::haxe::ds::StringMap tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(943)
						::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(943)
						tmp7->remove(tmp8);
					}
				}
;
			}
			HX_STACK_LINE(949)
			::haxe::ds::StringMap tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(949)
			Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(949)
			Dynamic keys1 = tmp5;		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(951)
			Dynamic tmp6 = keys1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(951)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(953)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(953)
					::String tmp8 = prefix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(953)
					bool tmp9 = ::StringTools_obj::startsWith(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(953)
					if ((tmp9)){
						HX_STACK_LINE(955)
						::haxe::ds::StringMap tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(955)
						::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(955)
						tmp10->remove(tmp11);
					}
				}
;
			}
			HX_STACK_LINE(961)
			::haxe::ds::StringMap tmp7 = this->sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(961)
			Dynamic tmp8 = tmp7->keys();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(961)
			Dynamic keys2 = tmp8;		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(963)
			Dynamic tmp9 = keys2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(963)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(965)
					::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(965)
					::String tmp11 = prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(965)
					bool tmp12 = ::StringTools_obj::startsWith(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(965)
					if ((tmp12)){
						HX_STACK_LINE(967)
						::haxe::ds::StringMap tmp13 = this->sound;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(967)
						::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(967)
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

::openfl::display::BitmapData AssetCache_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","getBitmapData",0x76047b71,"openfl.AssetCache.getBitmapData","openfl/Assets.hx",978,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(980)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	::openfl::display::BitmapData tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(980)
	::openfl::display::BitmapData tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(980)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

::openfl::text::Font AssetCache_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","getFont",0xc4a48987,"openfl.AssetCache.getFont","openfl/Assets.hx",985,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(987)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(987)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(987)
	::openfl::text::Font tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(987)
	::openfl::text::Font tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(987)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

::openfl::media::Sound AssetCache_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","getSound",0xc78ea217,"openfl.AssetCache.getSound","openfl/Assets.hx",992,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(994)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(994)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(994)
	::openfl::media::Sound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(994)
	::openfl::media::Sound tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(994)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","hasBitmapData",0x33e8d735,"openfl.AssetCache.hasBitmapData","openfl/Assets.hx",999,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1001)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1001)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1001)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1001)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","hasFont",0xc165fa4b,"openfl.AssetCache.hasFont","openfl/Assets.hx",1006,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1008)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1008)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1008)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1008)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","hasSound",0xf40fdcd3,"openfl.AssetCache.hasSound","openfl/Assets.hx",1013,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1015)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1015)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1015)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1015)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","removeBitmapData",0x7d8dc6db,"openfl.AssetCache.removeBitmapData","openfl/Assets.hx",1020,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1022)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1022)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1022)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1022)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","removeFont",0x7ce60971,"openfl.AssetCache.removeFont","openfl/Assets.hx",1027,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1029)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1029)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1029)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1029)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","removeSound",0x489d0eed,"openfl.AssetCache.removeSound","openfl/Assets.hx",1034,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1036)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1036)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1036)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1036)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

Void AssetCache_obj::setBitmapData( ::String id,::openfl::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl.AssetCache","setBitmapData",0xbb0a5d7d,"openfl.AssetCache.setBitmapData","openfl/Assets.hx",1041,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(1043)
		::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1043)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1043)
		::openfl::display::BitmapData tmp2 = bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1043)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

Void AssetCache_obj::setFont( ::String id,::openfl::text::Font font){
{
		HX_STACK_FRAME("openfl.AssetCache","setFont",0xb7a61a93,"openfl.AssetCache.setFont","openfl/Assets.hx",1048,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(1050)
		::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1050)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1050)
		::openfl::text::Font tmp2 = font;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1050)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

Void AssetCache_obj::setSound( ::String id,::openfl::media::Sound sound){
{
		HX_STACK_FRAME("openfl.AssetCache","setSound",0x75ebfb8b,"openfl.AssetCache.setSound","openfl/Assets.hx",1055,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(1057)
		::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1057)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1057)
		::openfl::media::Sound tmp2 = sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1057)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled( ){
	HX_STACK_FRAME("openfl.AssetCache","get_enabled",0xcdc8099a,"openfl.AssetCache.get_enabled","openfl/Assets.hx",1069,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1071)
	bool tmp = this->__enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1071)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled( bool value){
	HX_STACK_FRAME("openfl.AssetCache","set_enabled",0xd83510a6,"openfl.AssetCache.set_enabled","openfl/Assets.hx",1076,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1078)
	bool tmp = this->__enabled = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1078)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(__enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(__enabled,"__enabled");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return get_enabled(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hasFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hasSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return __enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return removeFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hasBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
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
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { __enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	outFields->push(HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,__enabled),HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("removeFont","\x33","\x98","\xdf","\xc0"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("setSound","\xcd","\xf5","\x00","\x8f"),
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
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
	__mClass->mName = HX_HCSTRING("openfl.AssetCache","\x70","\x0a","\x99","\xee");
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

} // end namespace openfl
