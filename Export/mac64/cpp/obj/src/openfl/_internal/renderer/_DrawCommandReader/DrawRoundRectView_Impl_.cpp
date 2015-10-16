#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawRoundRectView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawRoundRectView_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void DrawRoundRectView_Impl__obj::__construct()
{
	return null();
}

//DrawRoundRectView_Impl__obj::~DrawRoundRectView_Impl__obj() { }

Dynamic DrawRoundRectView_Impl__obj::__CreateEmpty() { return  new DrawRoundRectView_Impl__obj; }
hx::ObjectPtr< DrawRoundRectView_Impl__obj > DrawRoundRectView_Impl__obj::__new()
{  hx::ObjectPtr< DrawRoundRectView_Impl__obj > _result_ = new DrawRoundRectView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawRoundRectView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawRoundRectView_Impl__obj > _result_ = new DrawRoundRectView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader DrawRoundRectView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","_new",0x282357e4,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",345,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(345)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,_new,return )

Float DrawRoundRectView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_x",0x8c16956c,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",346,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(346)
	int tmp = this1->fPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_x,return )

Float DrawRoundRectView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_y",0x8c16956d,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",347,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(347)
	int tmp = (this1->fPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_y,return )

Float DrawRoundRectView_Impl__obj::get_width( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_width",0xe518d4fa,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_width","openfl/_internal/renderer/DrawCommandReader.hx",348,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(348)
	int tmp = (this1->fPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_width,return )

Float DrawRoundRectView_Impl__obj::get_height( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_height",0x46f0fe73,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_height","openfl/_internal/renderer/DrawCommandReader.hx",349,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(349)
	int tmp = (this1->fPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_height,return )

Float DrawRoundRectView_Impl__obj::get_rx( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_rx",0x07ac2452,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_rx","openfl/_internal/renderer/DrawCommandReader.hx",350,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(350)
	int tmp = (this1->fPos + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_rx,return )

Float DrawRoundRectView_Impl__obj::get_ry( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_ry",0x07ac2453,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_ry","openfl/_internal/renderer/DrawCommandReader.hx",351,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(351)
	int tmp = (this1->fPos + (int)5);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	Float tmp1 = this1->buffer->f->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_ry,return )


DrawRoundRectView_Impl__obj::DrawRoundRectView_Impl__obj()
{
}

bool DrawRoundRectView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_rx") ) { outValue = get_rx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ry") ) { outValue = get_ry_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawRoundRectView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawRoundRectView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawRoundRectView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_rx","\x0f","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_ry","\x10","\xfb","\x2f","\xa3"),
	::String(null()) };

void DrawRoundRectView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","\xcb","\x2c","\x9d","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawRoundRectView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawRoundRectView_Impl__obj >;
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
