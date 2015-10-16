#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
namespace lime{
namespace _system{

Void Clipboard_obj::__construct()
{
	return null();
}

//Clipboard_obj::~Clipboard_obj() { }

Dynamic Clipboard_obj::__CreateEmpty() { return  new Clipboard_obj; }
hx::ObjectPtr< Clipboard_obj > Clipboard_obj::__new()
{  hx::ObjectPtr< Clipboard_obj > _result_ = new Clipboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic Clipboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Clipboard_obj > _result_ = new Clipboard_obj();
	_result_->__construct();
	return _result_;}

::String Clipboard_obj::get_text( ){
	HX_STACK_FRAME("lime.system.Clipboard","get_text",0xe647e374,"lime.system.Clipboard.get_text","lime/system/Clipboard.hx",26,0x9490b5ee)
	HX_STACK_LINE(29)
	return ((Dynamic)(::lime::_system::Clipboard_obj::cffi_lime_clipboard_get_text.call()));
	HX_STACK_LINE(38)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text( ::String value){
	HX_STACK_FRAME("lime.system.Clipboard","set_text",0x94a53ce8,"lime.system.Clipboard.set_text","lime/system/Clipboard.hx",43,0x9490b5ee)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(46)
	::lime::_system::Clipboard_obj::cffi_lime_clipboard_set_text.call(value);
	HX_STACK_LINE(47)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
	HX_STACK_LINE(53)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )

Dynamic Clipboard_obj::lime_clipboard_get_text( ){
	HX_STACK_FRAME("lime.system.Clipboard","lime_clipboard_get_text",0x0446f7ab,"lime.system.Clipboard.lime_clipboard_get_text","lime/system/Clipboard.hx",66,0x9490b5ee)
	HX_STACK_LINE(66)
	return ::lime::_system::Clipboard_obj::cffi_lime_clipboard_get_text.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,lime_clipboard_get_text,return )

Void Clipboard_obj::lime_clipboard_set_text( ::String text){
{
		HX_STACK_FRAME("lime.system.Clipboard","lime_clipboard_set_text",0xb2a4511f,"lime.system.Clipboard.lime_clipboard_set_text","lime/system/Clipboard.hx",67,0x9490b5ee)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(67)
		::lime::_system::Clipboard_obj::cffi_lime_clipboard_set_text.call(text);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,lime_clipboard_set_text,(void))

::cpp::Function< ::hx::Object * ( ) > Clipboard_obj::cffi_lime_clipboard_get_text;

::cpp::Function< void ( ::String ) > Clipboard_obj::cffi_lime_clipboard_set_text;


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) { outValue = get_text(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_clipboard_get_text") ) { outValue = lime_clipboard_get_text_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_clipboard_set_text") ) { outValue = lime_clipboard_set_text_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_get_text") ) { outValue = cffi_lime_clipboard_get_text; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_set_text") ) { outValue = cffi_lime_clipboard_set_text; return true;  }
	}
	return false;
}

bool Clipboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways)  ioValue = set_text(ioValue); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_get_text") ) { cffi_lime_clipboard_get_text=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_clipboard_set_text") ) { cffi_lime_clipboard_set_text=ioValue.Cast< ::cpp::Function< void ( ::String ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ) >*/ ,(void *) &Clipboard_obj::cffi_lime_clipboard_get_text,HX_HCSTRING("cffi_lime_clipboard_get_text","\x50","\x49","\x61","\xdf")},
	{hx::fsObject /*::cpp::Function< void ( ::String ) >*/ ,(void *) &Clipboard_obj::cffi_lime_clipboard_set_text,HX_HCSTRING("cffi_lime_clipboard_set_text","\xc4","\xa2","\xbe","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_get_text,"cffi_lime_clipboard_get_text");
	HX_MARK_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_set_text,"cffi_lime_clipboard_set_text");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_get_text,"cffi_lime_clipboard_get_text");
	HX_VISIT_MEMBER_NAME(Clipboard_obj::cffi_lime_clipboard_set_text,"cffi_lime_clipboard_set_text");
};

#endif

hx::Class Clipboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),
	HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),
	HX_HCSTRING("cffi_lime_clipboard_get_text","\x50","\x49","\x61","\xdf"),
	HX_HCSTRING("cffi_lime_clipboard_set_text","\xc4","\xa2","\xbe","\x8d"),
	::String(null()) };

void Clipboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Clipboard","\xf0","\x64","\x51","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Clipboard_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Clipboard_obj >;
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

void Clipboard_obj::__boot()
{
	cffi_lime_clipboard_get_text= ::cpp::Function< ::hx::Object * ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_clipboard_get_text","\x29","\xfd","\x31","\x04"),HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),false));
	cffi_lime_clipboard_set_text= ::cpp::Function< void ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_clipboard_set_text","\x9d","\x56","\x8f","\xb2"),HX_HCSTRING("sv","\xa3","\x64","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace system
