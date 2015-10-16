#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void LineStyleView_Impl__obj::__construct()
{
	return null();
}

//LineStyleView_Impl__obj::~LineStyleView_Impl__obj() { }

Dynamic LineStyleView_Impl__obj::__CreateEmpty() { return  new LineStyleView_Impl__obj; }
hx::ObjectPtr< LineStyleView_Impl__obj > LineStyleView_Impl__obj::__new()
{  hx::ObjectPtr< LineStyleView_Impl__obj > _result_ = new LineStyleView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic LineStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineStyleView_Impl__obj > _result_ = new LineStyleView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader LineStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","_new",0xa17a2c15,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",416,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(416)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,_new,return )

Dynamic LineStyleView_Impl__obj::get_thickness( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_thickness",0xb0b93817,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_thickness","openfl/_internal/renderer/DrawCommandReader.hx",417,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(417)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(417)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_thickness,return )

Dynamic LineStyleView_Impl__obj::get_color( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_color",0x93f7ea86,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_color","openfl/_internal/renderer/DrawCommandReader.hx",418,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(418)
	int tmp = (this1->oPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(418)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_color,return )

Dynamic LineStyleView_Impl__obj::get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_alpha",0x6b322081,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_alpha","openfl/_internal/renderer/DrawCommandReader.hx",419,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(419)
	int tmp = (this1->oPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(419)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(419)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_alpha,return )

Dynamic LineStyleView_Impl__obj::get_pixelHinting( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_pixelHinting",0x0696dd12,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_pixelHinting","openfl/_internal/renderer/DrawCommandReader.hx",420,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(420)
	int tmp = (this1->oPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(420)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_pixelHinting,return )

::openfl::display::LineScaleMode LineStyleView_Impl__obj::get_scaleMode( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_scaleMode",0x822621b0,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_scaleMode","openfl/_internal/renderer/DrawCommandReader.hx",421,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(421)
	int tmp = (this1->oPos + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	::openfl::display::LineScaleMode tmp2 = ((::openfl::display::LineScaleMode)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_scaleMode,return )

::openfl::display::CapsStyle LineStyleView_Impl__obj::get_caps( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_caps",0x6233585e,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_caps","openfl/_internal/renderer/DrawCommandReader.hx",422,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(422)
	int tmp = (this1->oPos + (int)5);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	::openfl::display::CapsStyle tmp2 = ((::openfl::display::CapsStyle)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(422)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_caps,return )

::openfl::display::JointStyle LineStyleView_Impl__obj::get_joints( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_joints",0xaf786d66,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_joints","openfl/_internal/renderer/DrawCommandReader.hx",423,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(423)
	int tmp = (this1->oPos + (int)6);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(423)
	::openfl::display::JointStyle tmp2 = ((::openfl::display::JointStyle)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(423)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_joints,return )

Dynamic LineStyleView_Impl__obj::get_miterLimit( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_miterLimit",0x8615e4f3,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_miterLimit","openfl/_internal/renderer/DrawCommandReader.hx",424,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(424)
	int tmp = (this1->oPos + (int)7);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(424)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(424)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(424)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_miterLimit,return )


LineStyleView_Impl__obj::LineStyleView_Impl__obj()
{
}

bool LineStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_caps") ) { outValue = get_caps_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_joints") ) { outValue = get_joints_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { outValue = get_thickness_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { outValue = get_scaleMode_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { outValue = get_miterLimit_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_pixelHinting") ) { outValue = get_pixelHinting_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineStyleView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_thickness","\x4b","\xc5","\xca","\x1b"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("get_pixelHinting","\x5e","\x88","\x9a","\x71"),
	HX_HCSTRING("get_scaleMode","\xe4","\xae","\x37","\xed"),
	HX_HCSTRING("get_caps","\xaa","\xd7","\x74","\xc1"),
	HX_HCSTRING("get_joints","\xb2","\x57","\x91","\x81"),
	HX_HCSTRING("get_miterLimit","\x3f","\xe5","\x5f","\xca"),
	::String(null()) };

void LineStyleView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","\x3a","\xc6","\x38","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineStyleView_Impl__obj >;
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
