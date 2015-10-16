#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTilesView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawTilesView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void DrawTilesView_Impl__obj::__construct()
{
	return null();
}

//DrawTilesView_Impl__obj::~DrawTilesView_Impl__obj() { }

Dynamic DrawTilesView_Impl__obj::__CreateEmpty() { return  new DrawTilesView_Impl__obj; }
hx::ObjectPtr< DrawTilesView_Impl__obj > DrawTilesView_Impl__obj::__new()
{  hx::ObjectPtr< DrawTilesView_Impl__obj > _result_ = new DrawTilesView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawTilesView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawTilesView_Impl__obj > _result_ = new DrawTilesView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader DrawTilesView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","_new",0x5728ce51,"openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",358,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(358)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTilesView_Impl__obj,_new,return )

::openfl::display::Tilesheet DrawTilesView_Impl__obj::get_sheet( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","get_sheet",0x872b2006,"openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_.get_sheet","openfl/_internal/renderer/DrawCommandReader.hx",359,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(359)
	int tmp = this1->tsPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	::openfl::display::Tilesheet tmp1 = this1->buffer->ts->__get(tmp).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTilesView_Impl__obj,get_sheet,return )

Array< Float > DrawTilesView_Impl__obj::get_tileData( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","get_tileData",0x40575971,"openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_.get_tileData","openfl/_internal/renderer/DrawCommandReader.hx",360,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(360)
	int tmp = this1->ffPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	return this1->buffer->ff->__get(tmp).StaticCast< Array< Float > >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTilesView_Impl__obj,get_tileData,return )

bool DrawTilesView_Impl__obj::get_smooth( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","get_smooth",0xa63584e7,"openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_.get_smooth","openfl/_internal/renderer/DrawCommandReader.hx",361,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(361)
	int tmp = this1->bPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	bool tmp1 = this1->buffer->b->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTilesView_Impl__obj,get_smooth,return )

int DrawTilesView_Impl__obj::get_flags( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","get_flags",0x0d9768ae,"openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_.get_flags","openfl/_internal/renderer/DrawCommandReader.hx",362,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(362)
	int tmp = this1->iPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	int tmp1 = this1->buffer->i->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTilesView_Impl__obj,get_flags,return )

int DrawTilesView_Impl__obj::get_count( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","get_count",0x556e8236,"openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_.get_count","openfl/_internal/renderer/DrawCommandReader.hx",363,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(363)
	int tmp = (this1->iPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	int tmp1 = this1->buffer->i->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(363)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTilesView_Impl__obj,get_count,return )


DrawTilesView_Impl__obj::DrawTilesView_Impl__obj()
{
}

bool DrawTilesView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_sheet") ) { outValue = get_sheet_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_flags") ) { outValue = get_flags_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_count") ) { outValue = get_count_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_smooth") ) { outValue = get_smooth_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_tileData") ) { outValue = get_tileData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawTilesView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawTilesView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawTilesView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_sheet","\xf6","\x3e","\xc9","\xbf"),
	HX_HCSTRING("get_tileData","\x81","\x30","\x83","\x31"),
	HX_HCSTRING("get_smooth","\xf7","\x77","\xf2","\xf7"),
	HX_HCSTRING("get_flags","\x9e","\x87","\x35","\x46"),
	HX_HCSTRING("get_count","\x26","\xa1","\x0c","\x8e"),
	::String(null()) };

void DrawTilesView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawTilesView_Impl_","\x7e","\x4d","\x05","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawTilesView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawTilesView_Impl__obj >;
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
