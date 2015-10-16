#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Void Sys_obj::print( Dynamic v){
{
		HX_STACK_FRAME("Sys","print",0x483745ec,"Sys.print","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",25,0xd23c22f3)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(25)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

Void Sys_obj::println( Dynamic v){
{
		HX_STACK_FRAME("Sys","println",0x3905f76e,"Sys.println","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",28,0xd23c22f3)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::Sys_obj::print(tmp);
		HX_STACK_LINE(30)
		::Sys_obj::print(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

Array< ::String > Sys_obj::args( ){
	HX_STACK_FRAME("Sys","args",0xeaeddc7e,"Sys.args","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",50,0xd23c22f3)
	HX_STACK_LINE(50)
	return ::__get_args();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

Void Sys_obj::exit( int code){
{
		HX_STACK_FRAME("Sys","exit",0xed97463f,"Sys.exit","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",109,0xd23c22f3)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(109)
		::__hxcpp_exit(code);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	::String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

