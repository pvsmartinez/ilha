#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_IAssetCache
#include <openfl/IAssetCache.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

::openfl::IAssetCache Assets_obj::cache;

::openfl::events::EventDispatcher Assets_obj::dispatcher;

Void Assets_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.Assets","addEventListener",0x08307d1a,"openfl.Assets.addEventListener","openfl/Assets.hx",53,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(55)
		::lime::app::Event_Void_Void tmp = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		Dynamic tmp1 = ::openfl::Assets_obj::LimeAssets_onChange_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		bool tmp2 = tmp->has(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		if ((tmp3)){
			HX_STACK_LINE(57)
			::lime::app::Event_Void_Void tmp4 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			Dynamic tmp5 = ::openfl::Assets_obj::LimeAssets_onChange_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			tmp4->add(tmp5,null(),null());
		}
		HX_STACK_LINE(61)
		::openfl::events::EventDispatcher tmp4 = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		Dynamic tmp6 = listener;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		bool tmp7 = useCapture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int tmp8 = priority;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		bool tmp9 = useWeakReference;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		tmp4->addEventListener(tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.Assets","dispatchEvent",0xff6e3393,"openfl.Assets.dispatchEvent","openfl/Assets.hx",66,0x989d477c)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(68)
	::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = tmp->dispatchEvent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("openfl.Assets","exists",0xd3fc5ce9,"openfl.Assets.exists","openfl/Assets.hx",78,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(80)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	bool tmp2 = ::lime::Assets_obj::exists(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::openfl::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getBitmapData",0xc93c7e82,"openfl.Assets.getBitmapData","openfl/Assets.hx",92,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(96)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(96)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(96)
			tmp2 = false;
		}
		HX_STACK_LINE(96)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp2)){
			HX_STACK_LINE(96)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			tmp3 = tmp5->hasBitmapData(tmp7);
		}
		else{
			HX_STACK_LINE(96)
			tmp3 = false;
		}
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(98)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			::openfl::display::BitmapData tmp6 = tmp4->getBitmapData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			::openfl::display::BitmapData bitmapData = tmp6;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(100)
			::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			bool tmp8 = ::openfl::Assets_obj::isValidBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			if ((tmp8)){
				HX_STACK_LINE(102)
				::openfl::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				return tmp9;
			}
		}
		HX_STACK_LINE(108)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::lime::graphics::Image tmp5 = ::lime::Assets_obj::getImage(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		::lime::graphics::Image image = tmp5;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(110)
		bool tmp6 = (image != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		if ((tmp6)){
			HX_STACK_LINE(115)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::fromImage(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			::openfl::display::BitmapData bitmapData = tmp8;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(118)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			if ((tmp9)){
				HX_STACK_LINE(118)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(118)
				tmp10 = false;
			}
			HX_STACK_LINE(118)
			if ((tmp10)){
				HX_STACK_LINE(120)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(120)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(120)
				::openfl::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(120)
				tmp11->setBitmapData(tmp12,tmp13);
			}
			HX_STACK_LINE(124)
			::openfl::display::BitmapData tmp11 = bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			return tmp11;
		}
		HX_STACK_LINE(130)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::lime::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl.Assets","getBytes",0xa062f442,"openfl.Assets.getBytes","openfl/Assets.hx",141,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(143)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	::lime::utils::ByteArray tmp1 = ::lime::Assets_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::openfl::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getFont",0x9addf9d8,"openfl.Assets.getFont","openfl/Assets.hx",155,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(159)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		if ((tmp1)){
			HX_STACK_LINE(159)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(159)
			tmp2 = false;
		}
		HX_STACK_LINE(159)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		if ((tmp2)){
			HX_STACK_LINE(159)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			tmp3 = tmp5->hasFont(tmp7);
		}
		else{
			HX_STACK_LINE(159)
			tmp3 = false;
		}
		HX_STACK_LINE(159)
		if ((tmp3)){
			HX_STACK_LINE(161)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			::openfl::text::Font tmp6 = tmp4->getFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			return tmp6;
		}
		HX_STACK_LINE(165)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		::lime::text::Font tmp5 = ::lime::Assets_obj::getFont(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		::lime::text::Font limeFont = tmp5;		HX_STACK_VAR(limeFont,"limeFont");
		HX_STACK_LINE(167)
		bool tmp6 = (limeFont != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		if ((tmp6)){
			HX_STACK_LINE(172)
			::lime::text::Font tmp7 = limeFont;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			::openfl::text::Font tmp8 = ::openfl::text::Font_obj::__fromLimeFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			::openfl::text::Font font = tmp8;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(175)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			if ((tmp9)){
				HX_STACK_LINE(175)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(175)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(175)
				tmp10 = false;
			}
			HX_STACK_LINE(175)
			if ((tmp10)){
				HX_STACK_LINE(177)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(177)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(177)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(177)
				tmp11->setFont(tmp12,tmp13);
			}
			HX_STACK_LINE(181)
			::openfl::text::Font tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(181)
			return tmp11;
		}
		HX_STACK_LINE(187)
		::openfl::text::Font tmp7 = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("openfl.Assets","getLibrary",0x9baef692,"openfl.Assets.getLibrary","openfl/Assets.hx",192,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(194)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::lime::AssetLibrary tmp1 = ::lime::Assets_obj::getLibrary(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::openfl::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.Assets","getMovieClip",0x1d5e25f7,"openfl.Assets.getMovieClip","openfl/Assets.hx",205,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(209)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(210)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(211)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(211)
	::lime::AssetLibrary tmp6 = ::openfl::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(211)
	::openfl::AssetLibrary library = ((::openfl::AssetLibrary)(tmp6));		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(213)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	if ((tmp7)){
		HX_STACK_LINE(215)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		if ((tmp9)){
			HX_STACK_LINE(217)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			if ((tmp11)){
				HX_STACK_LINE(219)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				::openfl::display::MovieClip tmp13 = library->getMovieClip(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(219)
				return tmp13;
			}
			else{
				HX_STACK_LINE(223)
				::String tmp12 = (HX_HCSTRING("[openfl.Assets] MovieClip asset \"","\x09","\x87","\xab","\x4e") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(223)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),223,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(223)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(229)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"","\x47","\x50","\x6c","\x1a") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(229)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),229,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(229)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(235)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(235)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),235,HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(235)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(241)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::openfl::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getMusic",0xf325bc7c,"openfl.Assets.getMusic","openfl/Assets.hx",253,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(260)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		::lime::audio::AudioBuffer tmp2 = ::lime::Assets_obj::getAudioBuffer(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(260)
		::openfl::media::Sound tmp3 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl.Assets","getPath",0xa16f81ae,"openfl.Assets.getPath","openfl/Assets.hx",283,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(285)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	::String tmp1 = ::lime::Assets_obj::getPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::openfl::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getSound",0x639778a6,"openfl.Assets.getSound","openfl/Assets.hx",297,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(301)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		if ((tmp1)){
			HX_STACK_LINE(301)
			::openfl::IAssetCache tmp3 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			::openfl::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(301)
			tmp2 = false;
		}
		HX_STACK_LINE(301)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(301)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			::openfl::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			tmp3 = tmp5->hasSound(tmp7);
		}
		else{
			HX_STACK_LINE(301)
			tmp3 = false;
		}
		HX_STACK_LINE(301)
		if ((tmp3)){
			HX_STACK_LINE(303)
			::openfl::IAssetCache tmp4 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			::openfl::media::Sound tmp6 = tmp4->getSound(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			::openfl::media::Sound sound = tmp6;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(305)
			::openfl::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			bool tmp8 = ::openfl::Assets_obj::isValidSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(305)
			if ((tmp8)){
				HX_STACK_LINE(307)
				::openfl::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(307)
				return tmp9;
			}
		}
		HX_STACK_LINE(314)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		::lime::audio::AudioBuffer tmp5 = ::lime::Assets_obj::getAudioBuffer(tmp4,false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		::lime::audio::AudioBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(316)
		bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		if ((tmp6)){
			HX_STACK_LINE(321)
			::lime::audio::AudioBuffer tmp7 = buffer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			::openfl::media::Sound tmp8 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(321)
			::openfl::media::Sound sound = tmp8;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(324)
			bool tmp9 = useCache;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			if ((tmp9)){
				HX_STACK_LINE(324)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				::openfl::IAssetCache tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(324)
				tmp10 = tmp12->get_enabled();
			}
			else{
				HX_STACK_LINE(324)
				tmp10 = false;
			}
			HX_STACK_LINE(324)
			if ((tmp10)){
				HX_STACK_LINE(326)
				::openfl::IAssetCache tmp11 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				::String tmp12 = id;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(326)
				::openfl::media::Sound tmp13 = sound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(326)
				tmp11->setSound(tmp12,tmp13);
			}
			HX_STACK_LINE(330)
			::openfl::media::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(330)
			return tmp11;
		}
		HX_STACK_LINE(345)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("openfl.Assets","getText",0xa41768b6,"openfl.Assets.getText","openfl/Assets.hx",356,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(358)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	::String tmp1 = ::lime::Assets_obj::getText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(358)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl.Assets","hasEventListener",0x23b6a041,"openfl.Assets.hasEventListener","openfl/Assets.hx",363,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(365)
	::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(365)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(365)
	bool tmp2 = tmp->hasEventListener(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","isLocal",0x9a115974,"openfl.Assets.isLocal","openfl/Assets.hx",377,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(381)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		if ((tmp)){
			HX_STACK_LINE(381)
			::openfl::IAssetCache tmp2 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(381)
			::openfl::IAssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			tmp1 = tmp3->get_enabled();
		}
		else{
			HX_STACK_LINE(381)
			tmp1 = false;
		}
		HX_STACK_LINE(381)
		if ((tmp1)){
			HX_STACK_LINE(383)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(383)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(383)
			if ((tmp3)){
				HX_STACK_LINE(383)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(383)
				tmp4 = true;
			}
			HX_STACK_LINE(383)
			if ((tmp4)){
				HX_STACK_LINE(385)
				::openfl::IAssetCache tmp5 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(385)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(385)
				bool tmp7 = tmp5->hasBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(385)
				if ((tmp7)){
					HX_STACK_LINE(385)
					return true;
				}
			}
			HX_STACK_LINE(389)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(389)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(389)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			if ((tmp6)){
				HX_STACK_LINE(389)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(389)
				tmp7 = true;
			}
			HX_STACK_LINE(389)
			if ((tmp7)){
				HX_STACK_LINE(391)
				::openfl::IAssetCache tmp8 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(391)
				bool tmp10 = tmp8->hasFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(391)
				if ((tmp10)){
					HX_STACK_LINE(391)
					return true;
				}
			}
			HX_STACK_LINE(395)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(395)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(395)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(395)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(395)
			if ((tmp10)){
				HX_STACK_LINE(395)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(395)
				tmp11 = true;
			}
			HX_STACK_LINE(395)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(395)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(395)
			if ((tmp12)){
				HX_STACK_LINE(395)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(395)
				tmp13 = true;
			}
			HX_STACK_LINE(395)
			if ((tmp13)){
				HX_STACK_LINE(397)
				::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(397)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(397)
				bool tmp16 = tmp14->hasSound(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(397)
				if ((tmp16)){
					HX_STACK_LINE(397)
					return true;
				}
			}
		}
		HX_STACK_LINE(403)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(404)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(405)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(405)
		::lime::AssetLibrary tmp8 = ::openfl::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(405)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(407)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(407)
		if ((tmp9)){
			HX_STACK_LINE(409)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(409)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(409)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(409)
			return tmp12;
		}
		HX_STACK_LINE(415)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl.Assets","isValidBitmapData",0xc2fb171e,"openfl.Assets.isValidBitmapData","openfl/Assets.hx",420,0x989d477c)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(438)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	if ((tmp)){
		HX_STACK_LINE(438)
		tmp1 = (bitmapData->image != null());
	}
	else{
		HX_STACK_LINE(438)
		tmp1 = false;
	}
	HX_STACK_LINE(438)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::media::Sound sound){
	HX_STACK_FRAME("openfl.Assets","isValidSound",0x9717a58a,"openfl.Assets.isValidSound","openfl/Assets.hx",454,0x989d477c)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(454)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("openfl.Assets","list",0xb0f58e2b,"openfl.Assets.list","openfl/Assets.hx",471,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(473)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	return ::lime::Assets_obj::list(tmp);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadBitmapData( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadBitmapData",0x79a7538c,"openfl.Assets.loadBitmapData","openfl/Assets.hx",486,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(488)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		if ((tmp)){
			HX_STACK_LINE(488)
			useCache = true;
		}
		HX_STACK_LINE(490)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(490)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(492)
		bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		if ((tmp2)){
			HX_STACK_LINE(494)
			Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(494)
			promise->future->onComplete(tmp3);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",495,0x989d477c)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(495)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(495)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(501)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		if ((tmp4)){
			HX_STACK_LINE(501)
			::openfl::IAssetCache tmp6 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			::openfl::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(501)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			tmp5 = tmp8->get_enabled();
		}
		else{
			HX_STACK_LINE(501)
			tmp5 = false;
		}
		HX_STACK_LINE(501)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		if ((tmp5)){
			HX_STACK_LINE(501)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(501)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(501)
			tmp6 = tmp8->hasBitmapData(tmp10);
		}
		else{
			HX_STACK_LINE(501)
			tmp6 = false;
		}
		HX_STACK_LINE(501)
		if ((tmp6)){
			HX_STACK_LINE(503)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(503)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(503)
			::openfl::display::BitmapData tmp9 = tmp7->getBitmapData(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(503)
			::openfl::display::BitmapData bitmapData = tmp9;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(505)
			::openfl::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(505)
			bool tmp11 = ::openfl::Assets_obj::isValidBitmapData(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(505)
			if ((tmp11)){
				HX_STACK_LINE(507)
				::openfl::display::BitmapData tmp12 = bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(507)
				promise->complete(tmp12);
				HX_STACK_LINE(508)
				::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(508)
				return tmp13;
			}
		}
		HX_STACK_LINE(514)
		::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(514)
		::lime::app::Future tmp8 = ::lime::Assets_obj::loadImage(tmp7,false);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",514,0x989d477c)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(516)
				bool tmp9 = (image != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(516)
				if ((tmp9)){
					HX_STACK_LINE(521)
					::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(521)
					::openfl::display::BitmapData tmp11 = ::openfl::display::BitmapData_obj::fromImage(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(521)
					::openfl::display::BitmapData bitmapData = tmp11;		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(524)
					Dynamic tmp12 = useCache;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(524)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(524)
					if ((tmp12)){
						HX_STACK_LINE(524)
						::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(524)
						::openfl::IAssetCache tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(524)
						tmp13 = tmp15->get_enabled();
					}
					else{
						HX_STACK_LINE(524)
						tmp13 = false;
					}
					HX_STACK_LINE(524)
					if ((tmp13)){
						HX_STACK_LINE(526)
						::openfl::IAssetCache tmp14 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(526)
						::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(526)
						::openfl::display::BitmapData tmp16 = bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(526)
						tmp14->setBitmapData(tmp15,tmp16);
					}
					HX_STACK_LINE(530)
					::openfl::display::BitmapData tmp14 = bitmapData;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(530)
					promise->complete(tmp14);
				}
				else{
					HX_STACK_LINE(534)
					::String tmp10 = (HX_HCSTRING("[Assets] Could not load Image \"","\xf0","\x0b","\xf7","\xed") + id);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(534)
					::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(534)
					promise->error(tmp11);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(514)
		::lime::app::Future tmp9 = tmp8->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(538)
		Dynamic tmp10 = promise->error_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(514)
		::lime::app::Future tmp11 = tmp9->onError(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(538)
		Dynamic tmp12 = promise->progress_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(514)
		tmp11->onProgress(tmp12);
		HX_STACK_LINE(542)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(542)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,return )

::lime::app::Future Assets_obj::loadBytes( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",555,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(557)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	::lime::app::Future tmp1 = ::lime::Assets_obj::loadBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(559)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(559)
	if ((tmp2)){
		HX_STACK_LINE(561)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(561)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",562,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(562)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(562)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(566)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(566)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadFont",0x37540b62,"openfl.Assets.loadFont","openfl/Assets.hx",579,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(581)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(581)
		if ((tmp)){
			HX_STACK_LINE(581)
			useCache = true;
		}
		HX_STACK_LINE(583)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(585)
		bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		if ((tmp2)){
			HX_STACK_LINE(587)
			Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(587)
			promise->future->onComplete(tmp3);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",588,0x989d477c)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(588)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(588)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(594)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		if ((tmp4)){
			HX_STACK_LINE(594)
			::openfl::IAssetCache tmp6 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(594)
			::openfl::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(594)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(594)
			tmp5 = tmp8->get_enabled();
		}
		else{
			HX_STACK_LINE(594)
			tmp5 = false;
		}
		HX_STACK_LINE(594)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		if ((tmp5)){
			HX_STACK_LINE(594)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(594)
			::openfl::IAssetCache tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(594)
			::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(594)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(594)
			tmp6 = tmp8->hasFont(tmp10);
		}
		else{
			HX_STACK_LINE(594)
			tmp6 = false;
		}
		HX_STACK_LINE(594)
		if ((tmp6)){
			HX_STACK_LINE(596)
			::openfl::IAssetCache tmp7 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(596)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(596)
			::openfl::text::Font tmp9 = tmp7->getFont(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(596)
			promise->complete(tmp9);
			HX_STACK_LINE(597)
			::lime::app::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(597)
			return tmp10;
		}
		HX_STACK_LINE(601)
		::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(601)
		::lime::app::Future tmp8 = ::lime::Assets_obj::loadFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,useCache,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::text::Font limeFont){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",601,0x989d477c)
			HX_STACK_ARG(limeFont,"limeFont")
			{
				HX_STACK_LINE(606)
				::lime::text::Font tmp9 = limeFont;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(606)
				::openfl::text::Font tmp10 = ::openfl::text::Font_obj::__fromLimeFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(606)
				::openfl::text::Font font = tmp10;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(609)
				Dynamic tmp11 = useCache;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(609)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(609)
				if ((tmp11)){
					HX_STACK_LINE(609)
					::openfl::IAssetCache tmp13 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(609)
					::openfl::IAssetCache tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(609)
					tmp12 = tmp14->get_enabled();
				}
				else{
					HX_STACK_LINE(609)
					tmp12 = false;
				}
				HX_STACK_LINE(609)
				if ((tmp12)){
					HX_STACK_LINE(611)
					::openfl::IAssetCache tmp13 = ::openfl::Assets_obj::cache;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(611)
					::String tmp14 = id;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(611)
					::openfl::text::Font tmp15 = font;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(611)
					tmp13->setFont(tmp14,tmp15);
				}
				HX_STACK_LINE(615)
				::openfl::text::Font tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(615)
				promise->complete(tmp13);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(601)
		::lime::app::Future tmp9 = tmp8->onComplete( Dynamic(new _Function_1_1(useCache,promise,id)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(617)
		Dynamic tmp10 = promise->error_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(601)
		::lime::app::Future tmp11 = tmp9->onError(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(617)
		Dynamic tmp12 = promise->progress_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(601)
		tmp11->onProgress(tmp12);
		HX_STACK_LINE(621)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(621)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadLibrary( ::String name,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadLibrary",0x44d0f748,"openfl.Assets.loadLibrary","openfl/Assets.hx",632,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(634)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(634)
	::lime::app::Future tmp1 = ::lime::Assets_obj::loadLibrary(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(634)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(636)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(636)
	if ((tmp2)){
		HX_STACK_LINE(638)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(638)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",639,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(639)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(639)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(643)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(643)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadMusic( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadMusic",0x3dff03b2,"openfl.Assets.loadMusic","openfl/Assets.hx",656,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(658)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(658)
		if ((tmp)){
			HX_STACK_LINE(658)
			useCache = true;
		}
		HX_STACK_LINE(662)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(662)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(664)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		::lime::app::Future tmp4 = ::lime::Assets_obj::loadAudioBuffer(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::audio::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",664,0x989d477c)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(666)
				bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(666)
				if ((tmp5)){
					HX_STACK_LINE(671)
					::lime::audio::AudioBuffer tmp6 = buffer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(671)
					::openfl::media::Sound tmp7 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(671)
					promise->complete(tmp7);
				}
				else{
					HX_STACK_LINE(676)
					::String tmp6 = (HX_HCSTRING("[Assets] Could not load Sound \"","\x64","\xbe","\x27","\xe3") + id);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(676)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(676)
					promise->error(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(664)
		::lime::app::Future tmp5 = tmp4->onComplete( Dynamic(new _Function_1_1(promise,id)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(664)
		::lime::app::Future tmp7 = tmp5->onError(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(680)
		Dynamic tmp8 = promise->progress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(664)
		tmp7->onProgress(tmp8);
		HX_STACK_LINE(681)
		::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(681)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,return )

::lime::app::Future Assets_obj::loadMovieClip( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadMovieClip",0xd38a402d,"openfl.Assets.loadMovieClip","openfl/Assets.hx",700,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(702)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(704)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	if ((tmp1)){
		HX_STACK_LINE(706)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(706)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",707,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(707)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(707)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(713)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(713)
	::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(713)
	::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(714)
	int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(714)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(714)
	::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(714)
	::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(715)
	::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(715)
	::lime::AssetLibrary tmp8 = ::openfl::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(715)
	::openfl::AssetLibrary library = ((::openfl::AssetLibrary)(tmp8));		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(717)
	bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(717)
	if ((tmp9)){
		HX_STACK_LINE(719)
		::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(719)
		bool tmp11 = library->exists(tmp10,HX_HCSTRING("MOVIE_CLIP","\x1f","\xe1","\xaa","\x77"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(719)
		if ((tmp11)){
			HX_STACK_LINE(721)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(721)
			::lime::app::Future tmp13 = library->loadMovieClip(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(721)
			promise->completeWith(tmp13);
		}
		else{
			HX_STACK_LINE(725)
			::String tmp12 = (HX_HCSTRING("[Assets] There is no MovieClip asset with an ID of \"","\x8f","\x8e","\xf2","\x7d") + id);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(725)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(725)
			promise->error(tmp13);
		}
	}
	else{
		HX_STACK_LINE(731)
		::String tmp10 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(731)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(731)
		promise->error(tmp11);
	}
	HX_STACK_LINE(737)
	::lime::app::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(737)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,return )

::lime::app::Future Assets_obj::loadSound( ::String id,Dynamic __o_useCache,Dynamic handler){
Dynamic useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadSound",0xae70bfdc,"openfl.Assets.loadSound","openfl/Assets.hx",750,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(752)
		bool tmp = (useCache == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		if ((tmp)){
			HX_STACK_LINE(752)
			useCache = true;
		}
		HX_STACK_LINE(756)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(756)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(758)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(758)
		Dynamic tmp3 = useCache;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		::lime::app::Future tmp4 = ::lime::Assets_obj::loadAudioBuffer(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::app::Promise,promise,::String,id)
		int __ArgCount() const { return 1; }
		Void run(::lime::audio::AudioBuffer buffer){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Assets.hx",758,0x989d477c)
			HX_STACK_ARG(buffer,"buffer")
			{
				HX_STACK_LINE(760)
				bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(760)
				if ((tmp5)){
					HX_STACK_LINE(765)
					::lime::audio::AudioBuffer tmp6 = buffer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(765)
					::openfl::media::Sound tmp7 = ::openfl::media::Sound_obj::fromAudioBuffer(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(765)
					promise->complete(tmp7);
				}
				else{
					HX_STACK_LINE(770)
					::String tmp6 = (HX_HCSTRING("[Assets] Could not load Sound \"","\x64","\xbe","\x27","\xe3") + id);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(770)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(770)
					promise->error(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(758)
		::lime::app::Future tmp5 = tmp4->onComplete( Dynamic(new _Function_1_1(promise,id)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(774)
		Dynamic tmp6 = promise->error_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(758)
		::lime::app::Future tmp7 = tmp5->onError(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(774)
		Dynamic tmp8 = promise->progress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(758)
		tmp7->onProgress(tmp8);
		HX_STACK_LINE(775)
		::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(775)
		return tmp9;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,return )

::lime::app::Future Assets_obj::loadText( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl.Assets","loadText",0x408d7a40,"openfl.Assets.loadText","openfl/Assets.hx",794,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(796)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(796)
	::lime::app::Future tmp1 = ::lime::Assets_obj::loadText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(796)
	::lime::app::Future future = tmp1;		HX_STACK_VAR(future,"future");
	HX_STACK_LINE(798)
	bool tmp2 = (handler != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(798)
	if ((tmp2)){
		HX_STACK_LINE(800)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(800)
		future->onComplete(tmp3);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/Assets.hx",801,0x989d477c)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(801)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(801)
		future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(805)
	::lime::app::Future tmp3 = future;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(805)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::openfl::AssetLibrary library){
{
		HX_STACK_FRAME("openfl.Assets","registerLibrary",0x9230822b,"openfl.Assets.registerLibrary","openfl/Assets.hx",815,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(817)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(817)
		::openfl::AssetLibrary tmp1 = library;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(817)
		::lime::Assets_obj::registerLibrary(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl.Assets","removeEventListener",0x6a2b249d,"openfl.Assets.removeEventListener","openfl/Assets.hx",822,0x989d477c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(824)
		::openfl::events::EventDispatcher tmp = ::openfl::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(824)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(824)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(824)
		bool tmp3 = capture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(824)
		tmp->removeEventListener(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveClass",0x76ca4479,"openfl.Assets.resolveClass","openfl/Assets.hx",829,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(831)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(831)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(831)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveEnum",0x1314a1e0,"openfl.Assets.resolveEnum","openfl/Assets.hx",836,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(838)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(838)
	::Enum tmp1 = ::Type_obj::resolveEnum(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(838)
	::Enum value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(850)
	::Enum tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(850)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("openfl.Assets","unloadLibrary",0x6a51c84f,"openfl.Assets.unloadLibrary","openfl/Assets.hx",855,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(857)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(857)
		::lime::Assets_obj::unloadLibrary(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::LimeAssets_onChange( ){
{
		HX_STACK_FRAME("openfl.Assets","LimeAssets_onChange",0xaa15d389,"openfl.Assets.LimeAssets_onChange","openfl/Assets.hx",869,0x989d477c)
		HX_STACK_LINE(871)
		::String tmp = ::openfl::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(871)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(871)
		::openfl::Assets_obj::dispatchEvent(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,LimeAssets_onChange,(void))


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
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true;  }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"LimeAssets_onChange") ) { outValue = LimeAssets_onChange_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::openfl::IAssetCache >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast< ::openfl::events::EventDispatcher >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::IAssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(void *) &Assets_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidBitmapData","\x0b","\x65","\xe4","\xe6"),
	HX_HCSTRING("isValidSound","\xbd","\x1e","\x2b","\xa1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("LimeAssets_onChange","\xb6","\x36","\x60","\x95"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Assets","\xc1","\x41","\xe1","\xa0");
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
struct _Function_0_1{
	inline static ::openfl::IAssetCache Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/Assets.hx",48,0x989d477c)
		{
			HX_STACK_LINE(48)
			::openfl::AssetCache tmp = ::openfl::AssetCache_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(48)
			return ((::openfl::IAssetCache)(tmp));
		}
		return null();
	}
};
	cache= _Function_0_1::Block();
	dispatcher= ::openfl::events::EventDispatcher_obj::__new(null());
}

} // end namespace openfl
