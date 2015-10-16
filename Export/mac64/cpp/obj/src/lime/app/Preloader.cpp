#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Event_Int_Int_Void
#include <lime/app/Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
namespace lime{
namespace app{

Void Preloader_obj::__construct()
{
HX_STACK_FRAME("lime.app.Preloader","new",0x922e2422,"lime.app.Preloader.new","lime/app/Preloader.hx",21,0xcf198510)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->onProgress = ::lime::app::Event_Int_Int_Void_obj::__new();
	HX_STACK_LINE(25)
	this->onComplete = ::lime::app::Event_Void_Void_obj::__new();
	HX_STACK_LINE(44)
	::lime::app::Event_Int_Int_Void tmp = this->onProgress;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Dynamic tmp1 = this->update_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	tmp->add(tmp1,null(),null());
}
;
	return null();
}

//Preloader_obj::~Preloader_obj() { }

Dynamic Preloader_obj::__CreateEmpty() { return  new Preloader_obj; }
hx::ObjectPtr< Preloader_obj > Preloader_obj::__new()
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Preloader_obj > _result_ = new Preloader_obj();
	_result_->__construct();
	return _result_;}

Void Preloader_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Preloader","create",0x6b66587a,"lime.app.Preloader.create","lime/app/Preloader.hx",64,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(64)
		this->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,create,(void))

Void Preloader_obj::load( Array< ::String > urls,Array< ::String > types){
{
		HX_STACK_FRAME("lime.app.Preloader","load",0x54e69024,"lime.app.Preloader.load","lime/app/Preloader.hx",71,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_ARG(urls,"urls")
		HX_STACK_ARG(types,"types")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,load,(void))

Void Preloader_obj::start( ){
{
		HX_STACK_FRAME("lime.app.Preloader","start",0xfff3bca4,"lime.app.Preloader.start","lime/app/Preloader.hx",237,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->complete = true;
		HX_STACK_LINE(249)
		::lime::app::Event_Void_Void tmp = this->onComplete;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		tmp->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

Void Preloader_obj::update( int loaded,int total){
{
		HX_STACK_FRAME("lime.app.Preloader","update",0x765c7787,"lime.app.Preloader.update","lime/app/Preloader.hx",254,0xcf198510)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))


Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
}

Dynamic Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Preloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::lime::app::Event_Int_Int_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsObject /*::lime::app::Event_Void_Void*/ ,(int)offsetof(Preloader_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::Event_Int_Int_Void*/ ,(int)offsetof(Preloader_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
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
} // end namespace app
