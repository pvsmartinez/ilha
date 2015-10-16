#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
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

Void AssetLibrary_obj::__construct()
{
HX_STACK_FRAME("lime.AssetLibrary","new",0xa1312ef6,"lime.AssetLibrary.new","lime/Assets.hx",886,0x48c77341)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(889)
	this->onChange = ::lime::app::Event_Void_Void_obj::__new();
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

bool AssetLibrary_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.AssetLibrary","exists",0xcc578106,"lime.AssetLibrary.exists","lime/Assets.hx",901,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(901)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,exists,return )

::lime::audio::AudioBuffer AssetLibrary_obj::getAudioBuffer( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getAudioBuffer",0xf990deaa,"lime.AssetLibrary.getAudioBuffer","lime/Assets.hx",908,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(908)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getAudioBuffer,return )

::lime::utils::ByteArray AssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getBytes",0xc0e5199f,"lime.AssetLibrary.getBytes","lime/Assets.hx",915,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(915)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getBytes,return )

::lime::text::Font AssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getFont",0xf2426f1b,"lime.AssetLibrary.getFont","lime/Assets.hx",922,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(922)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getFont,return )

::lime::graphics::Image AssetLibrary_obj::getImage( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getImage",0xc0b6308f,"lime.AssetLibrary.getImage","lime/Assets.hx",929,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(929)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getImage,return )

::String AssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getPath",0xf8d3f6f1,"lime.AssetLibrary.getPath","lime/Assets.hx",936,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(936)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getPath,return )

::String AssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","getText",0xfb7bddf9,"lime.AssetLibrary.getText","lime/Assets.hx",941,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(945)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(945)
	::lime::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(945)
	::lime::utils::ByteArray bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(947)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(947)
	if ((tmp2)){
		HX_STACK_LINE(949)
		return null();
	}
	else{
		HX_STACK_LINE(953)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(953)
		::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(953)
		return tmp4;
	}
	HX_STACK_LINE(947)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getText,return )

bool AssetLibrary_obj::isLocal( ::String id,::String type){
	HX_STACK_FRAME("lime.AssetLibrary","isLocal",0xf175ceb7,"lime.AssetLibrary.isLocal","lime/Assets.hx",968,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(968)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,isLocal,return )

Array< ::String > AssetLibrary_obj::list( ::String type){
	HX_STACK_FRAME("lime.AssetLibrary","list",0x68888108,"lime.AssetLibrary.list","lime/Assets.hx",975,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(975)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,list,return )

::lime::app::Future AssetLibrary_obj::load( ){
	HX_STACK_FRAME("lime.AssetLibrary","load",0x688cfed0,"lime.AssetLibrary.load","lime/Assets.hx",980,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_LINE(980)
	::lime::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::lime::AssetLibrary,_g)
	int __ArgCount() const { return 0; }
	::lime::AssetLibrary run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",982,0x48c77341)
		{
			HX_STACK_LINE(982)
			::lime::AssetLibrary tmp = _g;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(982)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(982)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(982)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,load,return )

::lime::app::Future AssetLibrary_obj::loadAudioBuffer( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","loadAudioBuffer",0x68b85986,"lime.AssetLibrary.loadAudioBuffer","lime/Assets.hx",987,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(987)
	::lime::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::AssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::audio::AudioBuffer run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",989,0x48c77341)
		{
			HX_STACK_LINE(989)
			::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(989)
			::lime::audio::AudioBuffer tmp1 = _g->getAudioBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(989)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(989)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(989)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadAudioBuffer,return )

::lime::app::Future AssetLibrary_obj::loadBytes( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","loadBytes",0x3c9ac77b,"lime.AssetLibrary.loadBytes","lime/Assets.hx",994,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(994)
	::lime::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::AssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::utils::ByteArray run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",996,0x48c77341)
		{
			HX_STACK_LINE(996)
			::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(996)
			::lime::utils::ByteArray tmp1 = _g->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(996)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(996)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(996)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadBytes,return )

::lime::app::Future AssetLibrary_obj::loadFont( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","loadFont",0x57d630bf,"lime.AssetLibrary.loadFont","lime/Assets.hx",1001,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1001)
	::lime::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::AssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::text::Font run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",1003,0x48c77341)
		{
			HX_STACK_LINE(1003)
			::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1003)
			::lime::text::Font tmp1 = _g->getFont(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1003)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(1003)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1003)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadFont,return )

::lime::app::Future AssetLibrary_obj::loadImage( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","loadImage",0x3c6bde6b,"lime.AssetLibrary.loadImage","lime/Assets.hx",1008,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1008)
	::lime::AssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::lime::AssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::graphics::Image run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",1010,0x48c77341)
		{
			HX_STACK_LINE(1010)
			::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1010)
			::lime::graphics::Image tmp1 = _g->getImage(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1010)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(1010)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1010)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadImage,return )

::lime::app::Future AssetLibrary_obj::loadText( ::String id){
	HX_STACK_FRAME("lime.AssetLibrary","loadText",0x610f9f9d,"lime.AssetLibrary.loadText","lime/Assets.hx",1015,0x48c77341)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1017)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1017)
	::lime::app::Future tmp1 = this->loadBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/Assets.hx",1017,0x48c77341)
		HX_STACK_ARG(bytes,"bytes")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::utils::ByteArray,bytes)
			int __ArgCount() const { return 0; }
			::String run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/Assets.hx",1019,0x48c77341)
				{
					HX_STACK_LINE(1021)
					bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1021)
					if ((tmp2)){
						HX_STACK_LINE(1023)
						return null();
					}
					else{
						HX_STACK_LINE(1027)
						int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1027)
						::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1027)
						return tmp4;
					}
					HX_STACK_LINE(1021)
					return null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(1019)
			::lime::app::Future tmp2 = ::lime::app::Future_obj::__new( Dynamic(new _Function_2_1(bytes)));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1019)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(1017)
	::lime::app::Future tmp2 = tmp1->then( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1017)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,loadText,return )

Void AssetLibrary_obj::unload( ){
{
		HX_STACK_FRAME("lime.AssetLibrary","unload",0x72040429,"lime.AssetLibrary.unload","lime/Assets.hx",1038,0x48c77341)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,unload,(void))


AssetLibrary_obj::AssetLibrary_obj()
{
}

void AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetLibrary);
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_END_CLASS();
}

void AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
}

Dynamic AssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(AssetLibrary_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
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
	__mClass->mName = HX_HCSTRING("lime.AssetLibrary","\x04","\x3c","\x8d","\xdf");
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

} // end namespace lime
