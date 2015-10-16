#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_FontStyle
#include <openfl/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl_text_FontType
#include <openfl/text/FontType.h>
#endif
namespace openfl{
namespace text{

Void Font_obj::__construct(::String name)
{
HX_STACK_FRAME("openfl.text.Font","new",0xe13d5ce4,"openfl.text.Font.new","openfl/text/Font.hx",39,0x076bbaac)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(41)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	super::__construct(tmp);
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String name)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(name);
	return _result_;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Font_obj::get_fontName( ){
	HX_STACK_FRAME("openfl.text.Font","get_fontName",0x9a8206bf,"openfl.text.Font.get_fontName","openfl/text/Font.hx",134,0x076bbaac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_fontName,return )

::String Font_obj::set_fontName( ::String value){
	HX_STACK_FRAME("openfl.text.Font","set_fontName",0xaf7b2a33,"openfl.text.Font.set_fontName","openfl/text/Font.hx",141,0x076bbaac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(143)
	::String tmp = this->name = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,set_fontName,return )

Array< ::Dynamic > Font_obj::__registeredFonts;

Array< ::Dynamic > Font_obj::enumerateFonts( hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
	HX_STACK_FRAME("openfl.text.Font","enumerateFonts",0x792ac3fc,"openfl.text.Font.enumerateFonts","openfl/text/Font.hx",61,0x076bbaac)
	HX_STACK_ARG(enumerateDeviceFonts,"enumerateDeviceFonts")
{
		HX_STACK_LINE(61)
		return ::openfl::text::Font_obj::__registeredFonts;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

::openfl::text::Font Font_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl.text.Font","fromBytes",0x95ccba25,"openfl.text.Font.fromBytes","openfl/text/Font.hx",66,0x076bbaac)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(68)
	::openfl::text::Font tmp = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::openfl::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(69)
	::lime::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	font->__fromBytes(tmp1);
	HX_STACK_LINE(72)
	bool tmp2 = (font->src != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	::openfl::text::Font tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	if ((tmp2)){
		HX_STACK_LINE(72)
		tmp3 = font;
	}
	else{
		HX_STACK_LINE(72)
		tmp3 = null();
	}
	HX_STACK_LINE(72)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::openfl::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl.text.Font","fromFile",0x919e3202,"openfl.text.Font.fromFile","openfl/text/Font.hx",80,0x076bbaac)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(82)
	::openfl::text::Font tmp = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::openfl::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(83)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	font->__fromFile(tmp1);
	HX_STACK_LINE(86)
	bool tmp2 = (font->src != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	::openfl::text::Font tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	if ((tmp2)){
		HX_STACK_LINE(86)
		tmp3 = font;
	}
	else{
		HX_STACK_LINE(86)
		tmp3 = null();
	}
	HX_STACK_LINE(86)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Void Font_obj::registerFont( ::hx::Class font){
{
		HX_STACK_FRAME("openfl.text.Font","registerFont",0xd99a60ce,"openfl.text.Font.registerFont","openfl/text/Font.hx",98,0x076bbaac)
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(100)
		::hx::Class tmp = font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		Dynamic tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::openfl::text::Font tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		tmp2 = hx::TCast< ::openfl::text::Font >::cast(tmp1);
		HX_STACK_LINE(100)
		::openfl::text::Font instance = tmp2;		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(102)
		bool tmp3 = (instance != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		if ((tmp3)){
			HX_STACK_LINE(110)
			::openfl::text::Font tmp4 = instance;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			::openfl::text::Font_obj::__registeredFonts->push(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

::openfl::text::Font Font_obj::__fromLimeFont( ::lime::text::Font value){
	HX_STACK_FRAME("openfl.text.Font","__fromLimeFont",0x57c4282a,"openfl.text.Font.__fromLimeFont","openfl/text/Font.hx",117,0x076bbaac)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	::openfl::text::Font tmp = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::openfl::text::Font font = tmp;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(120)
	font->name = value->name;
	HX_STACK_LINE(121)
	font->src = value->src;
	HX_STACK_LINE(122)
	::openfl::text::Font tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromLimeFont,return )


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	::lime::text::Font_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	::lime::text::Font_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { if (inCallProp == hx::paccAlways) return get_fontName(); }
		if (HX_FIELD_EQ(inName,"fontType") ) { return fontType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_fontName") ) { return get_fontName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontName") ) { return set_fontName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { outValue = registerFont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { outValue = enumerateFonts_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__fromLimeFont") ) { outValue = __fromLimeFont_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { outValue = __registeredFonts; return true;  }
	}
	return false;
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { if (inCallProp == hx::paccAlways) return set_fontName(inValue); }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast< ::openfl::text::FontType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::openfl::text::FontStyle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { __registeredFonts=ioValue.Cast< Array< ::Dynamic > >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"));
	outFields->push(HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::FontStyle*/ ,(int)offsetof(Font_obj,fontStyle),HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f")},
	{hx::fsObject /*::openfl::text::FontType*/ ,(int)offsetof(Font_obj,fontType),HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::__registeredFonts,HX_HCSTRING("__registeredFonts","\xc2","\x83","\x84","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"),
	HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"),
	HX_HCSTRING("get_fontName","\xc3","\x43","\x97","\x80"),
	HX_HCSTRING("set_fontName","\x37","\x67","\x90","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
};

#endif

hx::Class Font_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__registeredFonts","\xc2","\x83","\x84","\x64"),
	HX_HCSTRING("enumerateFonts","\x00","\x4a","\xcc","\xfc"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("registerFont","\xd2","\x9d","\xaf","\xbf"),
	HX_HCSTRING("__fromLimeFont","\x2e","\xae","\x65","\xdb"),
	::String(null()) };

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.Font","\xf2","\x5a","\x54","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
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

void Font_obj::__boot()
{
	__registeredFonts= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace text
