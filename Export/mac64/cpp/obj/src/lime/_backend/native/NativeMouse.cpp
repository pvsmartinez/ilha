#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeMouse_obj::__construct()
{
	return null();
}

//NativeMouse_obj::~NativeMouse_obj() { }

Dynamic NativeMouse_obj::__CreateEmpty() { return  new NativeMouse_obj; }
hx::ObjectPtr< NativeMouse_obj > NativeMouse_obj::__new()
{  hx::ObjectPtr< NativeMouse_obj > _result_ = new NativeMouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic NativeMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeMouse_obj > _result_ = new NativeMouse_obj();
	_result_->__construct();
	return _result_;}

::lime::ui::MouseCursor NativeMouse_obj::__cursor;

bool NativeMouse_obj::__hidden;

bool NativeMouse_obj::__lock;

Void NativeMouse_obj::hide( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","hide",0xec289e99,"lime._backend.native.NativeMouse.hide","lime/_backend/native/NativeMouse.hx",22,0x1d44ad08)
		HX_STACK_LINE(24)
		bool tmp = ::lime::_backend::native::NativeMouse_obj::__hidden;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		if ((tmp1)){
			HX_STACK_LINE(26)
			::lime::_backend::native::NativeMouse_obj::__hidden = true;
			HX_STACK_LINE(29)
			::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_hide.call();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,hide,(void))

Void NativeMouse_obj::show( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","show",0xf36d3ed4,"lime._backend.native.NativeMouse.show","lime/_backend/native/NativeMouse.hx",37,0x1d44ad08)
		HX_STACK_LINE(39)
		bool tmp = ::lime::_backend::native::NativeMouse_obj::__hidden;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(41)
			::lime::_backend::native::NativeMouse_obj::__hidden = false;
			HX_STACK_LINE(44)
			::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_show.call();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,show,(void))

Void NativeMouse_obj::warp( int x,int y,::lime::ui::Window window){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","warp",0xf60ccc1f,"lime._backend.native.NativeMouse.warp","lime/_backend/native/NativeMouse.hx",55,0x1d44ad08)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(55)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_warp.call(x,y,hx::DynamicPtr((  (((window == null()))) ? Dynamic((int)0) : Dynamic(window->backend->handle) )));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeMouse_obj,warp,(void))

::lime::ui::MouseCursor NativeMouse_obj::get_cursor( ){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","get_cursor",0x6045e3b6,"lime._backend.native.NativeMouse.get_cursor","lime/_backend/native/NativeMouse.hx",68,0x1d44ad08)
	HX_STACK_LINE(70)
	::lime::ui::MouseCursor tmp = ::lime::_backend::native::NativeMouse_obj::__cursor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(70)
		return ::lime::ui::MouseCursor_obj::DEFAULT;
	}
	HX_STACK_LINE(71)
	::lime::ui::MouseCursor tmp2 = ::lime::_backend::native::NativeMouse_obj::__cursor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_cursor,return )

::lime::ui::MouseCursor NativeMouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","set_cursor",0x63c3822a,"lime._backend.native.NativeMouse.set_cursor","lime/_backend/native/NativeMouse.hx",76,0x1d44ad08)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(78)
	::lime::ui::MouseCursor tmp = ::lime::_backend::native::NativeMouse_obj::__cursor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	::lime::ui::MouseCursor tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	if ((tmp2)){
		HX_STACK_LINE(80)
		bool tmp3 = ::lime::_backend::native::NativeMouse_obj::__hidden;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(82)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			switch( (int)(value->__Index())){
				case (int)0: {
					HX_STACK_LINE(84)
					tmp5 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(85)
					tmp5 = (int)1;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(86)
					tmp5 = (int)3;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(87)
					tmp5 = (int)4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(88)
					tmp5 = (int)5;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(89)
					tmp5 = (int)6;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(90)
					tmp5 = (int)7;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(91)
					tmp5 = (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(92)
					tmp5 = (int)9;
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(93)
					tmp5 = (int)10;
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(94)
					tmp5 = (int)11;
				}
				;break;
				default: {
					HX_STACK_LINE(95)
					tmp5 = (int)2;
				}
			}
			HX_STACK_LINE(82)
			int type = tmp5;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(100)
			::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_set_cursor.call(type);
		}
		HX_STACK_LINE(105)
		::lime::_backend::native::NativeMouse_obj::__cursor = value;
	}
	HX_STACK_LINE(109)
	::lime::ui::MouseCursor tmp3 = ::lime::_backend::native::NativeMouse_obj::__cursor;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_cursor,return )

bool NativeMouse_obj::get_lock( ){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","get_lock",0xe19bf8cb,"lime._backend.native.NativeMouse.get_lock","lime/_backend/native/NativeMouse.hx",114,0x1d44ad08)
	HX_STACK_LINE(116)
	bool tmp = ::lime::_backend::native::NativeMouse_obj::__lock;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_lock,return )

bool NativeMouse_obj::set_lock( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","set_lock",0x8ff9523f,"lime._backend.native.NativeMouse.set_lock","lime/_backend/native/NativeMouse.hx",121,0x1d44ad08)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(123)
	bool tmp = ::lime::_backend::native::NativeMouse_obj::__lock;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(126)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_set_lock.call(value);
		HX_STACK_LINE(129)
		::lime::_backend::native::NativeMouse_obj::__hidden = value;
		HX_STACK_LINE(130)
		::lime::_backend::native::NativeMouse_obj::__lock = value;
	}
	HX_STACK_LINE(134)
	bool tmp3 = ::lime::_backend::native::NativeMouse_obj::__lock;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_lock,return )

Void NativeMouse_obj::lime_mouse_hide( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","lime_mouse_hide",0x42e4300f,"lime._backend.native.NativeMouse.lime_mouse_hide","lime/_backend/native/NativeMouse.hx",147,0x1d44ad08)
		HX_STACK_LINE(147)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_hide.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,lime_mouse_hide,(void))

Void NativeMouse_obj::lime_mouse_set_cursor( int cursor){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","lime_mouse_set_cursor",0xcbe69020,"lime._backend.native.NativeMouse.lime_mouse_set_cursor","lime/_backend/native/NativeMouse.hx",148,0x1d44ad08)
		HX_STACK_ARG(cursor,"cursor")
		HX_STACK_LINE(148)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_set_cursor.call(cursor);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,lime_mouse_set_cursor,(void))

Void NativeMouse_obj::lime_mouse_set_lock( bool lock){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","lime_mouse_set_lock",0x6b99d6b5,"lime._backend.native.NativeMouse.lime_mouse_set_lock","lime/_backend/native/NativeMouse.hx",149,0x1d44ad08)
		HX_STACK_ARG(lock,"lock")
		HX_STACK_LINE(149)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_set_lock.call(lock);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,lime_mouse_set_lock,(void))

Void NativeMouse_obj::lime_mouse_show( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","lime_mouse_show",0x4a28d04a,"lime._backend.native.NativeMouse.lime_mouse_show","lime/_backend/native/NativeMouse.hx",150,0x1d44ad08)
		HX_STACK_LINE(150)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_show.call();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,lime_mouse_show,(void))

Void NativeMouse_obj::lime_mouse_warp( int x,int y,Dynamic window){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","lime_mouse_warp",0x4cc85d95,"lime._backend.native.NativeMouse.lime_mouse_warp","lime/_backend/native/NativeMouse.hx",151,0x1d44ad08)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(151)
		::lime::_backend::native::NativeMouse_obj::cffi_lime_mouse_warp.call(x,y,hx::DynamicPtr(window));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeMouse_obj,lime_mouse_warp,(void))

::cpp::Function< void ( ) > NativeMouse_obj::cffi_lime_mouse_hide;

::cpp::Function< void ( int ) > NativeMouse_obj::cffi_lime_mouse_set_cursor;

::cpp::Function< void ( bool ) > NativeMouse_obj::cffi_lime_mouse_set_lock;

::cpp::Function< void ( ) > NativeMouse_obj::cffi_lime_mouse_show;

::cpp::Function< void ( int ,int ,::hx::Object * ) > NativeMouse_obj::cffi_lime_mouse_warp;


NativeMouse_obj::NativeMouse_obj()
{
}

bool NativeMouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"warp") ) { outValue = warp_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__lock") ) { outValue = __lock; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { outValue = __cursor; return true;  }
		if (HX_FIELD_EQ(inName,"__hidden") ) { outValue = __hidden; return true;  }
		if (HX_FIELD_EQ(inName,"get_lock") ) { outValue = get_lock_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_lock") ) { outValue = set_lock_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_mouse_hide") ) { outValue = lime_mouse_hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_show") ) { outValue = lime_mouse_show_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_mouse_warp") ) { outValue = lime_mouse_warp_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_lock") ) { outValue = lime_mouse_set_lock_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_hide") ) { outValue = cffi_lime_mouse_hide; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_show") ) { outValue = cffi_lime_mouse_show; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_warp") ) { outValue = cffi_lime_mouse_warp; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_cursor") ) { outValue = lime_mouse_set_cursor_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_lock") ) { outValue = cffi_lime_mouse_set_lock; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_cursor") ) { outValue = cffi_lime_mouse_set_cursor; return true;  }
	}
	return false;
}

bool NativeMouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__lock") ) { __lock=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { __cursor=ioValue.Cast< ::lime::ui::MouseCursor >(); return true; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { __hidden=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_hide") ) { cffi_lime_mouse_hide=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_show") ) { cffi_lime_mouse_show=ioValue.Cast< ::cpp::Function< void ( ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_warp") ) { cffi_lime_mouse_warp=ioValue.Cast< ::cpp::Function< void ( int ,int ,::hx::Object * ) > >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_lock") ) { cffi_lime_mouse_set_lock=ioValue.Cast< ::cpp::Function< void ( bool ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_mouse_set_cursor") ) { cffi_lime_mouse_set_cursor=ioValue.Cast< ::cpp::Function< void ( int ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::ui::MouseCursor*/ ,(void *) &NativeMouse_obj::__cursor,HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7")},
	{hx::fsBool,(void *) &NativeMouse_obj::__hidden,HX_HCSTRING("__hidden","\x8a","\x6a","\xc5","\xf4")},
	{hx::fsBool,(void *) &NativeMouse_obj::__lock,HX_HCSTRING("__lock","\x0b","\xff","\xaf","\xf6")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeMouse_obj::cffi_lime_mouse_hide,HX_HCSTRING("cffi_lime_mouse_hide","\xad","\x35","\xd6","\x3c")},
	{hx::fsObject /*::cpp::Function< void ( int ) >*/ ,(void *) &NativeMouse_obj::cffi_lime_mouse_set_cursor,HX_HCSTRING("cffi_lime_mouse_set_cursor","\x3e","\xa0","\xe9","\x5c")},
	{hx::fsObject /*::cpp::Function< void ( bool ) >*/ ,(void *) &NativeMouse_obj::cffi_lime_mouse_set_lock,HX_HCSTRING("cffi_lime_mouse_set_lock","\x53","\x03","\xc2","\x40")},
	{hx::fsObject /*::cpp::Function< void ( ) >*/ ,(void *) &NativeMouse_obj::cffi_lime_mouse_show,HX_HCSTRING("cffi_lime_mouse_show","\xe8","\xd5","\x1a","\x44")},
	{hx::fsObject /*::cpp::Function< void ( int ,int ,::hx::Object * ) >*/ ,(void *) &NativeMouse_obj::cffi_lime_mouse_warp,HX_HCSTRING("cffi_lime_mouse_warp","\x33","\x63","\xba","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__lock,"__lock");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_hide,"cffi_lime_mouse_hide");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_set_cursor,"cffi_lime_mouse_set_cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_set_lock,"cffi_lime_mouse_set_lock");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_show,"cffi_lime_mouse_show");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_warp,"cffi_lime_mouse_warp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__lock,"__lock");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_hide,"cffi_lime_mouse_hide");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_set_cursor,"cffi_lime_mouse_set_cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_set_lock,"cffi_lime_mouse_set_lock");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_show,"cffi_lime_mouse_show");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::cffi_lime_mouse_warp,"cffi_lime_mouse_warp");
};

#endif

hx::Class NativeMouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7"),
	HX_HCSTRING("__hidden","\x8a","\x6a","\xc5","\xf4"),
	HX_HCSTRING("__lock","\x0b","\xff","\xaf","\xf6"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("warp","\x48","\x62","\xf2","\x4e"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	HX_HCSTRING("get_lock","\x74","\x57","\x72","\xc7"),
	HX_HCSTRING("set_lock","\xe8","\xb0","\xcf","\x75"),
	HX_HCSTRING("lime_mouse_hide","\x86","\xe8","\x02","\xac"),
	HX_HCSTRING("lime_mouse_set_cursor","\xd7","\x7b","\x59","\xa1"),
	HX_HCSTRING("lime_mouse_set_lock","\xac","\x96","\x23","\xfb"),
	HX_HCSTRING("lime_mouse_show","\xc1","\x88","\x47","\xb3"),
	HX_HCSTRING("lime_mouse_warp","\x0c","\x16","\xe7","\xb5"),
	HX_HCSTRING("cffi_lime_mouse_hide","\xad","\x35","\xd6","\x3c"),
	HX_HCSTRING("cffi_lime_mouse_set_cursor","\x3e","\xa0","\xe9","\x5c"),
	HX_HCSTRING("cffi_lime_mouse_set_lock","\x53","\x03","\xc2","\x40"),
	HX_HCSTRING("cffi_lime_mouse_show","\xe8","\xd5","\x1a","\x44"),
	HX_HCSTRING("cffi_lime_mouse_warp","\x33","\x63","\xba","\x46"),
	::String(null()) };

void NativeMouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeMouse","\xf7","\x45","\x60","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeMouse_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeMouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NativeMouse_obj >;
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

void NativeMouse_obj::__boot()
{
	cffi_lime_mouse_hide= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_hide","\x86","\xe8","\x02","\xac"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_mouse_set_cursor= ::cpp::Function< void ( int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_set_cursor","\xd7","\x7b","\x59","\xa1"),HX_HCSTRING("iv","\xed","\x5b","\x00","\x00"),false));
	cffi_lime_mouse_set_lock= ::cpp::Function< void ( bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_set_lock","\xac","\x96","\x23","\xfb"),HX_HCSTRING("bv","\xd4","\x55","\x00","\x00"),false));
	cffi_lime_mouse_show= ::cpp::Function< void ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_show","\xc1","\x88","\x47","\xb3"),HX_HCSTRING("v","\x76","\x00","\x00","\x00"),false));
	cffi_lime_mouse_warp= ::cpp::Function< void ( int ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_mouse_warp","\x0c","\x16","\xe7","\xb5"),HX_HCSTRING("iiov","\x07","\x75","\xb7","\x45"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
