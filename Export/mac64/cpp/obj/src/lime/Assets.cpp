#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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
namespace lime{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::lime::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

::lime::app::Event_Void_Void Assets_obj::onChange;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.Assets","exists",0x8a084f2e,"lime.Assets.exists","lime/Assets.hx",47,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(49)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(53)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	if ((tmp)){
		HX_STACK_LINE(55)
		type = HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f");
	}
	HX_STACK_LINE(59)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(60)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(61)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(61)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(63)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(63)
	if ((tmp8)){
		HX_STACK_LINE(65)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		bool tmp11 = library->exists(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		return tmp11;
	}
	HX_STACK_LINE(71)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::lime::audio::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getAudioBuffer",0x1f7814d2,"lime.Assets.getAudioBuffer","lime/Assets.hx",82,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(84)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(88)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		if ((tmp1)){
			HX_STACK_LINE(88)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(88)
			tmp2 = false;
		}
		HX_STACK_LINE(88)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		if ((tmp2)){
			HX_STACK_LINE(88)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			tmp3 = tmp5->audio->exists(tmp7);
		}
		else{
			HX_STACK_LINE(88)
			tmp3 = false;
		}
		HX_STACK_LINE(88)
		if ((tmp3)){
			HX_STACK_LINE(90)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::lime::audio::AudioBuffer tmp6 = tmp4->audio->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			::lime::audio::AudioBuffer audio = tmp6;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(92)
			::lime::audio::AudioBuffer tmp7 = audio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			bool tmp8 = ::lime::Assets_obj::isValidAudio(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			if ((tmp8)){
				HX_STACK_LINE(94)
				::lime::audio::AudioBuffer tmp9 = audio;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(94)
				return tmp9;
			}
		}
		HX_STACK_LINE(100)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(101)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(102)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(102)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(102)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(104)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		if ((tmp11)){
			HX_STACK_LINE(106)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			if ((tmp13)){
				HX_STACK_LINE(108)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(108)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				if ((tmp15)){
					HX_STACK_LINE(110)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(110)
					::lime::audio::AudioBuffer tmp17 = library->getAudioBuffer(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(110)
					::lime::audio::AudioBuffer audio = tmp17;		HX_STACK_VAR(audio,"audio");
					HX_STACK_LINE(112)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(112)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(112)
					if ((tmp18)){
						HX_STACK_LINE(112)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(112)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(112)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(112)
						tmp19 = false;
					}
					HX_STACK_LINE(112)
					if ((tmp19)){
						HX_STACK_LINE(114)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(114)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(114)
						::lime::audio::AudioBuffer tmp22 = audio;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(114)
						tmp20->audio->set(tmp21,tmp22);
					}
					HX_STACK_LINE(118)
					::lime::audio::AudioBuffer tmp20 = audio;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(118)
					return tmp20;
				}
				else{
					HX_STACK_LINE(122)
					::String tmp16 = (HX_HCSTRING("[Assets] Audio asset \"","\x07","\x8c","\xae","\x7b") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(122)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(122)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),122,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(122)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(128)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(128)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(128)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),128,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(128)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(134)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),134,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(140)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::lime::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","getBytes",0xe703c1c7,"lime.Assets.getBytes","lime/Assets.hx",151,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(153)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(157)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(158)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(158)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(159)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(159)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(159)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(161)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(161)
	if ((tmp7)){
		HX_STACK_LINE(163)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		if ((tmp9)){
			HX_STACK_LINE(165)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(165)
			if ((tmp11)){
				HX_STACK_LINE(167)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(167)
				::lime::utils::ByteArray tmp13 = library->getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(167)
				return tmp13;
			}
			else{
				HX_STACK_LINE(171)
				::String tmp12 = (HX_HCSTRING("[Assets] String or ByteArray asset \"","\x34","\xd1","\x9b","\x45") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(171)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(171)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),171,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(171)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(177)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no String or ByteArray asset with an ID of \"","\x72","\x73","\xb6","\x09") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(177)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),177,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(183)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),183,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(183)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(189)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::lime::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getFont",0x2f4603f3,"lime.Assets.getFont","lime/Assets.hx",200,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(202)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(206)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		if ((tmp1)){
			HX_STACK_LINE(206)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(206)
			tmp2 = false;
		}
		HX_STACK_LINE(206)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		if ((tmp2)){
			HX_STACK_LINE(206)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(206)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(206)
			tmp3 = tmp5->font->exists(tmp7);
		}
		else{
			HX_STACK_LINE(206)
			tmp3 = false;
		}
		HX_STACK_LINE(206)
		if ((tmp3)){
			HX_STACK_LINE(208)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			Dynamic tmp6 = tmp4->font->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(208)
			return tmp7;
		}
		HX_STACK_LINE(212)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(213)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(213)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(214)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(214)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(214)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(216)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		if ((tmp11)){
			HX_STACK_LINE(218)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(218)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(218)
			if ((tmp13)){
				HX_STACK_LINE(220)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(220)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(220)
				if ((tmp15)){
					HX_STACK_LINE(222)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(222)
					::lime::text::Font tmp17 = library->getFont(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(222)
					::lime::text::Font font = tmp17;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(224)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(224)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(224)
					if ((tmp18)){
						HX_STACK_LINE(224)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(224)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(224)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(224)
						tmp19 = false;
					}
					HX_STACK_LINE(224)
					if ((tmp19)){
						HX_STACK_LINE(226)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(226)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(226)
						::lime::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(226)
						tmp20->font->set(tmp21,tmp22);
					}
					HX_STACK_LINE(230)
					::lime::text::Font tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(230)
					return tmp20;
				}
				else{
					HX_STACK_LINE(234)
					::String tmp16 = (HX_HCSTRING("[Assets] Font asset \"","\x22","\x94","\xa9","\xe6") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(234)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(234)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),234,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(234)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(240)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Font asset with an ID of \"","\x8a","\x40","\xc3","\xf6") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(240)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(240)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),240,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(240)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(246)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(246)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),246,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(246)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(252)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getImage",0xe6d4d8b7,"lime.Assets.getImage","lime/Assets.hx",264,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(266)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(270)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		if ((tmp1)){
			HX_STACK_LINE(270)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(270)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(270)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(270)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(270)
			tmp2 = false;
		}
		HX_STACK_LINE(270)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(270)
		if ((tmp2)){
			HX_STACK_LINE(270)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(270)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(270)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(270)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(270)
			tmp3 = tmp5->image->exists(tmp7);
		}
		else{
			HX_STACK_LINE(270)
			tmp3 = false;
		}
		HX_STACK_LINE(270)
		if ((tmp3)){
			HX_STACK_LINE(272)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(272)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(272)
			::lime::graphics::Image tmp6 = tmp4->image->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			::lime::graphics::Image image = tmp6;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(274)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(274)
			bool tmp8 = ::lime::Assets_obj::isValidImage(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			if ((tmp8)){
				HX_STACK_LINE(276)
				::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(276)
				return tmp9;
			}
		}
		HX_STACK_LINE(282)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(283)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(284)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(284)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(284)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(286)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(286)
		if ((tmp11)){
			HX_STACK_LINE(288)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(288)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(288)
			if ((tmp13)){
				HX_STACK_LINE(290)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(290)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(290)
				if ((tmp15)){
					HX_STACK_LINE(292)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(292)
					::lime::graphics::Image tmp17 = library->getImage(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(292)
					::lime::graphics::Image image = tmp17;		HX_STACK_VAR(image,"image");
					HX_STACK_LINE(294)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(294)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(294)
					if ((tmp18)){
						HX_STACK_LINE(294)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(294)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(294)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(294)
						tmp19 = false;
					}
					HX_STACK_LINE(294)
					if ((tmp19)){
						HX_STACK_LINE(296)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(296)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(296)
						::lime::graphics::Image tmp22 = image;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(296)
						tmp20->image->set(tmp21,tmp22);
					}
					HX_STACK_LINE(300)
					::lime::graphics::Image tmp20 = image;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(300)
					return tmp20;
				}
				else{
					HX_STACK_LINE(304)
					::String tmp16 = (HX_HCSTRING("[Assets] Image asset \"","\x8c","\xbf","\x18","\x5b") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(304)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(304)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),304,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(304)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(310)
				::String tmp14 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(310)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(310)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),310,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(310)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(316)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(316)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(316)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),316,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(316)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(322)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","getLibrary",0x6641ef57,"lime.Assets.getLibrary","lime/Assets.hx",327,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(329)
	bool tmp = (name == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	if ((tmp1)){
		HX_STACK_LINE(329)
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(329)
		tmp2 = true;
	}
	HX_STACK_LINE(329)
	if ((tmp2)){
		HX_STACK_LINE(331)
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	HX_STACK_LINE(335)
	::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(335)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(335)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.Assets","getPath",0x35d78bc9,"lime.Assets.getPath","lime/Assets.hx",346,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(348)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(352)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(352)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(352)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(353)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(353)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(353)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(353)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(354)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(354)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(354)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(356)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(356)
	if ((tmp7)){
		HX_STACK_LINE(358)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(358)
		bool tmp9 = library->exists(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		if ((tmp9)){
			HX_STACK_LINE(360)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(360)
			::String tmp11 = library->getPath(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(360)
			return tmp11;
		}
		else{
			HX_STACK_LINE(364)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no asset with an ID of \"","\xaf","\xc3","\xed","\x11") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(364)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(364)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),364,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(364)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(370)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(370)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),370,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(370)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(376)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("lime.Assets","getText",0x387f72d1,"lime.Assets.getText","lime/Assets.hx",387,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(389)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(393)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(393)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(394)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(394)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(394)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(394)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(395)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(395)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(395)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(397)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(397)
	if ((tmp7)){
		HX_STACK_LINE(399)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(399)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(399)
		if ((tmp9)){
			HX_STACK_LINE(401)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(401)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(401)
			if ((tmp11)){
				HX_STACK_LINE(403)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(403)
				::String tmp13 = library->getText(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(403)
				return tmp13;
			}
			else{
				HX_STACK_LINE(407)
				::String tmp12 = (HX_HCSTRING("[Assets] String asset \"","\x64","\x53","\x3d","\x14") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(407)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(407)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),407,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(407)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(413)
			::String tmp10 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(413)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(413)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),413,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(413)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(419)
		::String tmp8 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(419)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(419)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),419,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(419)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(425)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("lime.Assets","initialize",0xc42b73a2,"lime.Assets.initialize","lime/Assets.hx",430,0x48c77341)
		HX_STACK_LINE(432)
		bool tmp = ::lime::Assets_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(432)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		if ((tmp1)){
			HX_STACK_LINE(436)
			::DefaultAssetLibrary tmp2 = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(436)
			::lime::Assets_obj::registerLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp2);
			HX_STACK_LINE(440)
			::lime::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","isLocal",0x2e79638f,"lime.Assets.isLocal","lime/Assets.hx",447,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(449)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(453)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(453)
		if ((tmp)){
			HX_STACK_LINE(453)
			::lime::AssetCache tmp2 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			::lime::AssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(453)
			tmp1 = tmp3->enabled;
		}
		else{
			HX_STACK_LINE(453)
			tmp1 = false;
		}
		HX_STACK_LINE(453)
		if ((tmp1)){
			HX_STACK_LINE(455)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(455)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(455)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(455)
			if ((tmp3)){
				HX_STACK_LINE(455)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(455)
				tmp4 = true;
			}
			HX_STACK_LINE(455)
			if ((tmp4)){
				HX_STACK_LINE(457)
				::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(457)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(457)
				bool tmp7 = tmp5->image->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(457)
				if ((tmp7)){
					HX_STACK_LINE(457)
					return true;
				}
			}
			HX_STACK_LINE(461)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(461)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(461)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(461)
			if ((tmp6)){
				HX_STACK_LINE(461)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(461)
				tmp7 = true;
			}
			HX_STACK_LINE(461)
			if ((tmp7)){
				HX_STACK_LINE(463)
				::lime::AssetCache tmp8 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(463)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(463)
				bool tmp10 = tmp8->font->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(463)
				if ((tmp10)){
					HX_STACK_LINE(463)
					return true;
				}
			}
			HX_STACK_LINE(467)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(467)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(467)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(467)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(467)
			if ((tmp10)){
				HX_STACK_LINE(467)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(467)
				tmp11 = true;
			}
			HX_STACK_LINE(467)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(467)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(467)
			if ((tmp12)){
				HX_STACK_LINE(467)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(467)
				tmp13 = true;
			}
			HX_STACK_LINE(467)
			if ((tmp13)){
				HX_STACK_LINE(469)
				::lime::AssetCache tmp14 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(469)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(469)
				bool tmp16 = tmp14->audio->exists(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(469)
				if ((tmp16)){
					HX_STACK_LINE(469)
					return true;
				}
			}
		}
		HX_STACK_LINE(475)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(475)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(476)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(476)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(476)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(476)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(477)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(477)
		::lime::AssetLibrary tmp8 = ::lime::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(477)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(479)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(479)
		if ((tmp9)){
			HX_STACK_LINE(481)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(481)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(481)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(481)
			return tmp12;
		}
		HX_STACK_LINE(487)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.Assets","isValidAudio",0x0da20596,"lime.Assets.isValidAudio","lime/Assets.hx",492,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(496)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image buffer){
	HX_STACK_FRAME("lime.Assets","isValidImage",0xa38aac1b,"lime.Assets.isValidImage","lime/Assets.hx",508,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(513)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	return tmp;
	HX_STACK_LINE(532)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("lime.Assets","list",0x60d5f530,"lime.Assets.list","lime/Assets.hx",537,0x48c77341)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(539)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(541)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(543)
	::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(543)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(543)
	for(::cpp::FastIterator_obj< ::lime::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::AssetLibrary >(tmp1);  __it->hasNext(); ){
		::lime::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(545)
			::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(545)
			Array< ::String > libraryItems = library->list(tmp2);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(547)
			bool tmp3 = (libraryItems != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(547)
			if ((tmp3)){
				HX_STACK_LINE(549)
				items = items->concat(libraryItems);
			}
		}
;
	}
	HX_STACK_LINE(555)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadAudioBuffer",0x6d20865e,"lime.Assets.loadAudioBuffer","lime/Assets.hx",560,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(562)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(564)
		::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(568)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(568)
		if ((tmp2)){
			HX_STACK_LINE(568)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(568)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(568)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(568)
			tmp3 = tmp6->enabled;
		}
		else{
			HX_STACK_LINE(568)
			tmp3 = false;
		}
		HX_STACK_LINE(568)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(568)
		if ((tmp3)){
			HX_STACK_LINE(568)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(568)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(568)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(568)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(568)
			tmp4 = tmp6->audio->exists(tmp8);
		}
		else{
			HX_STACK_LINE(568)
			tmp4 = false;
		}
		HX_STACK_LINE(568)
		if ((tmp4)){
			HX_STACK_LINE(570)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(570)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(570)
			::lime::audio::AudioBuffer tmp7 = tmp5->audio->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(570)
			::lime::audio::AudioBuffer audio = tmp7;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(572)
			::lime::audio::AudioBuffer tmp8 = audio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(572)
			bool tmp9 = ::lime::Assets_obj::isValidAudio(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(572)
			if ((tmp9)){
				HX_STACK_LINE(574)
				::lime::audio::AudioBuffer tmp10 = audio;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(574)
				promise->complete(tmp10);
				HX_STACK_LINE(575)
				::lime::app::Future tmp11 = promise->future;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(575)
				return tmp11;
			}
		}
		HX_STACK_LINE(581)
		int tmp5 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		::String tmp6 = id.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		::String libraryName = tmp6;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(582)
		int tmp7 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(582)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(582)
		::String tmp9 = id.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(582)
		::String symbolName = tmp9;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(583)
		::String tmp10 = libraryName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(583)
		::lime::AssetLibrary tmp11 = ::lime::Assets_obj::getLibrary(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(583)
		::lime::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(585)
		bool tmp12 = (library != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(585)
		if ((tmp12)){
			HX_STACK_LINE(587)
			::String tmp13 = symbolName;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(587)
			bool tmp14 = library->exists(tmp13,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(587)
			if ((tmp14)){
				HX_STACK_LINE(589)
				::String tmp15 = symbolName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(589)
				::lime::app::Future tmp16 = library->loadAudioBuffer(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(589)
				::lime::app::Future future = tmp16;		HX_STACK_VAR(future,"future");
				HX_STACK_LINE(591)
				bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(591)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(591)
				if ((tmp17)){
					HX_STACK_LINE(591)
					::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(591)
					::lime::AssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(591)
					tmp18 = tmp20->enabled;
				}
				else{
					HX_STACK_LINE(591)
					tmp18 = false;
				}
				HX_STACK_LINE(591)
				if ((tmp18)){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::audio::AudioBuffer audio){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",593,0x48c77341)
						HX_STACK_ARG(audio,"audio")
						{
							HX_STACK_LINE(593)
							::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(593)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(593)
							::lime::audio::AudioBuffer tmp21 = audio;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(593)
							tmp19->audio->set(tmp20,tmp21);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(593)
					future->onComplete( Dynamic(new _Function_4_1(id)));
				}
				HX_STACK_LINE(597)
				::lime::app::Future tmp19 = future;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(597)
				promise->completeWith(tmp19);
			}
			else{
				HX_STACK_LINE(601)
				::String tmp15 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(601)
				::String tmp16 = (tmp15 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(601)
				promise->error(tmp16);
			}
		}
		else{
			HX_STACK_LINE(607)
			::String tmp13 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(607)
			::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(607)
			promise->error(tmp14);
		}
		HX_STACK_LINE(613)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(613)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadAudioBuffer,return )

::lime::app::Future Assets_obj::loadBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","loadBytes",0x714f4253,"lime.Assets.loadBytes","lime/Assets.hx",618,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(620)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(622)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(622)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(626)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(626)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(627)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(627)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(627)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(627)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(628)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(628)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(628)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(630)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(630)
	if ((tmp8)){
		HX_STACK_LINE(632)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(632)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(632)
		if ((tmp10)){
			HX_STACK_LINE(634)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(634)
			::lime::app::Future tmp12 = library->loadBytes(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(634)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(638)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no String or ByteArray asset with an ID of \"","\x72","\x73","\xb6","\x09") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(638)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(638)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(644)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(644)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(644)
		promise->error(tmp10);
	}
	HX_STACK_LINE(650)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(650)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id){
	HX_STACK_FRAME("lime.Assets","loadFont",0x7df4d8e7,"lime.Assets.loadFont","lime/Assets.hx",655,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(657)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(659)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(663)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(663)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(663)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(664)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(664)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(664)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(664)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(665)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(665)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(665)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(667)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(667)
	if ((tmp8)){
		HX_STACK_LINE(669)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(669)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(669)
		if ((tmp10)){
			HX_STACK_LINE(671)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(671)
			::lime::app::Future tmp12 = library->loadFont(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(671)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(675)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no Font asset with an ID of \"","\x8a","\x40","\xc3","\xf6") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(675)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(675)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(681)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(681)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(681)
		promise->error(tmp10);
	}
	HX_STACK_LINE(687)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(687)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadImage",0x71205943,"lime.Assets.loadImage","lime/Assets.hx",692,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(694)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(696)
		::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(700)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		if ((tmp2)){
			HX_STACK_LINE(700)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(700)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(700)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(700)
			tmp3 = tmp6->enabled;
		}
		else{
			HX_STACK_LINE(700)
			tmp3 = false;
		}
		HX_STACK_LINE(700)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(700)
		if ((tmp3)){
			HX_STACK_LINE(700)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(700)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(700)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(700)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(700)
			tmp4 = tmp6->image->exists(tmp8);
		}
		else{
			HX_STACK_LINE(700)
			tmp4 = false;
		}
		HX_STACK_LINE(700)
		if ((tmp4)){
			HX_STACK_LINE(702)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(702)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(702)
			::lime::graphics::Image tmp7 = tmp5->image->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(702)
			::lime::graphics::Image image = tmp7;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(704)
			::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(704)
			bool tmp9 = ::lime::Assets_obj::isValidImage(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(704)
			if ((tmp9)){
				HX_STACK_LINE(706)
				::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(706)
				promise->complete(tmp10);
				HX_STACK_LINE(707)
				::lime::app::Future tmp11 = promise->future;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(707)
				return tmp11;
			}
		}
		HX_STACK_LINE(713)
		int tmp5 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(713)
		::String tmp6 = id.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(713)
		::String libraryName = tmp6;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(714)
		int tmp7 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(714)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(714)
		::String tmp9 = id.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(714)
		::String symbolName = tmp9;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(715)
		::String tmp10 = libraryName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(715)
		::lime::AssetLibrary tmp11 = ::lime::Assets_obj::getLibrary(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(715)
		::lime::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(717)
		bool tmp12 = (library != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(717)
		if ((tmp12)){
			HX_STACK_LINE(719)
			::String tmp13 = symbolName;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(719)
			bool tmp14 = library->exists(tmp13,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(719)
			if ((tmp14)){
				HX_STACK_LINE(721)
				::String tmp15 = symbolName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(721)
				::lime::app::Future tmp16 = library->loadImage(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(721)
				::lime::app::Future future = tmp16;		HX_STACK_VAR(future,"future");
				HX_STACK_LINE(723)
				bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(723)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(723)
				if ((tmp17)){
					HX_STACK_LINE(723)
					::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(723)
					::lime::AssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(723)
					tmp18 = tmp20->enabled;
				}
				else{
					HX_STACK_LINE(723)
					tmp18 = false;
				}
				HX_STACK_LINE(723)
				if ((tmp18)){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::graphics::Image image){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",725,0x48c77341)
						HX_STACK_ARG(image,"image")
						{
							HX_STACK_LINE(725)
							::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(725)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(725)
							::lime::graphics::Image tmp21 = image;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(725)
							tmp19->image->set(tmp20,tmp21);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(725)
					future->onComplete( Dynamic(new _Function_4_1(id)));
				}
				HX_STACK_LINE(729)
				::lime::app::Future tmp19 = future;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(729)
				promise->completeWith(tmp19);
			}
			else{
				HX_STACK_LINE(733)
				::String tmp15 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(733)
				::String tmp16 = (tmp15 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(733)
				promise->error(tmp16);
			}
		}
		else{
			HX_STACK_LINE(739)
			::String tmp13 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(739)
			::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(739)
			promise->error(tmp14);
		}
		HX_STACK_LINE(745)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(745)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,return )

::lime::app::Future Assets_obj::loadLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","loadLibrary",0xbad7aae3,"lime.Assets.loadLibrary","lime/Assets.hx",750,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(752)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(754)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(754)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(758)
	::String tmp1 = (HX_HCSTRING("libraries/","\xf6","\xc5","\x4d","\xc0") + name);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(758)
	::String tmp2 = (tmp1 + HX_HCSTRING(".json","\x56","\xf1","\xd6","\xc2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(758)
	::String tmp3 = ::lime::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(758)
	::String data = tmp3;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(760)
	bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(760)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(760)
	if ((tmp4)){
		HX_STACK_LINE(760)
		tmp5 = (data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(760)
		tmp5 = false;
	}
	HX_STACK_LINE(760)
	if ((tmp5)){
		HX_STACK_LINE(762)
		::haxe::format::JsonParser tmp6 = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(762)
		Dynamic tmp7 = tmp6->parseRec();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(762)
		Dynamic info = tmp7;		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(763)
		::String tmp8 = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(763)
		::hx::Class tmp9 = ::Type_obj::resolveClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(763)
		::lime::AssetLibrary tmp10 = ::Type_obj::createInstance(tmp9,info->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(763)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(764)
		::haxe::ds::StringMap tmp11 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(764)
		::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(764)
		::lime::AssetLibrary tmp13 = library;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(764)
		tmp11->set(tmp12,tmp13);
		HX_STACK_LINE(765)
		::lime::app::Event_Void_Void tmp14 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(765)
		Dynamic tmp15 = tmp14->dispatch_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(765)
		library->onChange->add(tmp15,null(),null());
		HX_STACK_LINE(766)
		::lime::app::Future tmp16 = library->load();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(766)
		promise->completeWith(tmp16);
	}
	else{
		HX_STACK_LINE(770)
		::String tmp6 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + name);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(770)
		::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(770)
		promise->error(tmp7);
	}
	HX_STACK_LINE(776)
	::lime::app::Future tmp6 = promise->future;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(776)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadText( ::String id){
	HX_STACK_FRAME("lime.Assets","loadText",0x872e47c5,"lime.Assets.loadText","lime/Assets.hx",781,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(783)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(785)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(785)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(789)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(789)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(789)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(790)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(790)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(790)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(790)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(791)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(791)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(791)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(793)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(793)
	if ((tmp8)){
		HX_STACK_LINE(795)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(795)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(795)
		if ((tmp10)){
			HX_STACK_LINE(797)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(797)
			::lime::app::Future tmp12 = library->loadText(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(797)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(801)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(801)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(801)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(807)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(807)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(807)
		promise->error(tmp10);
	}
	HX_STACK_LINE(813)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(813)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::lime::AssetLibrary library){
{
		HX_STACK_FRAME("lime.Assets","registerLibrary",0x7c289f46,"lime.Assets.registerLibrary","lime/Assets.hx",818,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(820)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(820)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(820)
		if ((tmp2)){
			HX_STACK_LINE(822)
			::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(822)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(822)
			::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(822)
			::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(822)
			::lime::AssetLibrary tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(822)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(822)
			if ((tmp8)){
				HX_STACK_LINE(824)
				return null();
			}
			else{
				HX_STACK_LINE(828)
				::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(828)
				::lime::Assets_obj::unloadLibrary(tmp9);
			}
		}
		HX_STACK_LINE(834)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(834)
		if ((tmp3)){
			HX_STACK_LINE(836)
			Dynamic tmp4 = ::lime::Assets_obj::library_onChange_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(836)
			library->onChange->add(tmp4,null(),null());
		}
		HX_STACK_LINE(840)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(840)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(840)
		::lime::AssetLibrary tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(840)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("lime.Assets","unloadLibrary",0x7620d8aa,"lime.Assets.unloadLibrary","lime/Assets.hx",845,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(847)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(851)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(851)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(851)
		::lime::AssetLibrary tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(851)
		::lime::AssetLibrary library = tmp2;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(853)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(853)
		if ((tmp3)){
			HX_STACK_LINE(855)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(855)
			::String tmp5 = (name + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(855)
			tmp4->clear(tmp5);
			HX_STACK_LINE(856)
			Dynamic tmp6 = ::lime::Assets_obj::library_onChange_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(856)
			library->onChange->remove(tmp6);
			HX_STACK_LINE(857)
			library->unload();
		}
		HX_STACK_LINE(861)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(861)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(861)
		tmp4->remove(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onChange( ){
{
		HX_STACK_FRAME("lime.Assets","library_onChange",0xae01ecc5,"lime.Assets.library_onChange","lime/Assets.hx",875,0x48c77341)
		HX_STACK_LINE(877)
		::lime::AssetCache tmp = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(877)
		tmp->clear(null());
		HX_STACK_LINE(878)
		::lime::app::Event_Void_Void tmp1 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(878)
		tmp1->dispatch();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,library_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { outValue = onChange; return true;  }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"library_onChange") ) { outValue = library_onChange_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::lime::AssetCache >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=ioValue.Cast< ::lime::app::Event_Void_Void >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::AssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(void *) &Assets_obj::onChange,HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(void *) &Assets_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidAudio","\xc4","\x0a","\xdf","\x47"),
	HX_HCSTRING("isValidImage","\x49","\xb1","\xc7","\xdd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("library_onChange","\xf3","\x20","\x14","\xc8"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	cache= ::lime::AssetCache_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/Assets.hx",41,0x48c77341)
		{
			HX_STACK_LINE(41)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(41)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			return tmp1;
		}
		return null();
	}
};
	libraries= _Function_0_1::Block();
	onChange= ::lime::app::Event_Void_Void_obj::__new();
	initialized= false;
}

} // end namespace lime
