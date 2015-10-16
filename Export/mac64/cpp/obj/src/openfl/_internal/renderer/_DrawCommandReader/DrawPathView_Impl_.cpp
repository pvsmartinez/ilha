#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawPathView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawPathView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void DrawPathView_Impl__obj::__construct()
{
	return null();
}

//DrawPathView_Impl__obj::~DrawPathView_Impl__obj() { }

Dynamic DrawPathView_Impl__obj::__CreateEmpty() { return  new DrawPathView_Impl__obj; }
hx::ObjectPtr< DrawPathView_Impl__obj > DrawPathView_Impl__obj::__new()
{  hx::ObjectPtr< DrawPathView_Impl__obj > _result_ = new DrawPathView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawPathView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawPathView_Impl__obj > _result_ = new DrawPathView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader DrawPathView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_","_new",0x6624da59,"openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",324,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(324)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawPathView_Impl__obj,_new,return )

Array< int > DrawPathView_Impl__obj::get_commands( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_","get_commands",0xd5b6e1c9,"openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_.get_commands","openfl/_internal/renderer/DrawCommandReader.hx",325,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(325)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	Array< int > tmp2 = ((Array< int >)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawPathView_Impl__obj,get_commands,return )

Array< Float > DrawPathView_Impl__obj::get_data( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_","get_data",0xa4b5b2ab,"openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_.get_data","openfl/_internal/renderer/DrawCommandReader.hx",326,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(326)
	int tmp = (this1->oPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(326)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(326)
	Array< Float > tmp2 = ((Array< Float >)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(326)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawPathView_Impl__obj,get_data,return )

::openfl::display::GraphicsPathWinding DrawPathView_Impl__obj::get_winding( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_","get_winding",0x6a43f339,"openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_.get_winding","openfl/_internal/renderer/DrawCommandReader.hx",327,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(327)
	int tmp = (this1->oPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	::openfl::display::GraphicsPathWinding tmp2 = ((::openfl::display::GraphicsPathWinding)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawPathView_Impl__obj,get_winding,return )


DrawPathView_Impl__obj::DrawPathView_Impl__obj()
{
}

bool DrawPathView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_winding") ) { outValue = get_winding_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_commands") ) { outValue = get_commands_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawPathView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawPathView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawPathView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_commands","\xd1","\x64","\x6f","\x73"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("get_winding","\x31","\xa9","\x6a","\x6e"),
	::String(null()) };

void DrawPathView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawPathView_Impl_","\x76","\xbe","\x94","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawPathView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawPathView_Impl__obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
