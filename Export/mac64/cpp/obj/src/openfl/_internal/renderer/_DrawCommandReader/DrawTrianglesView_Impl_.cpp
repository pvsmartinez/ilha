#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawTrianglesView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawTrianglesView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

Void DrawTrianglesView_Impl__obj::__construct()
{
	return null();
}

//DrawTrianglesView_Impl__obj::~DrawTrianglesView_Impl__obj() { }

Dynamic DrawTrianglesView_Impl__obj::__CreateEmpty() { return  new DrawTrianglesView_Impl__obj; }
hx::ObjectPtr< DrawTrianglesView_Impl__obj > DrawTrianglesView_Impl__obj::__new()
{  hx::ObjectPtr< DrawTrianglesView_Impl__obj > _result_ = new DrawTrianglesView_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawTrianglesView_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawTrianglesView_Impl__obj > _result_ = new DrawTrianglesView_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandReader DrawTrianglesView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","_new",0x7149dbeb,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",370,0xbbdbd1ae)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(370)
	::openfl::_internal::renderer::DrawCommandReader tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,_new,return )

Array< Float > DrawTrianglesView_Impl__obj::get_vertices( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_vertices",0xf8b2d48c,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_vertices","openfl/_internal/renderer/DrawCommandReader.hx",371,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(371)
	int tmp = this1->oPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	Array< Float > tmp2 = ((Array< Float >)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(371)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_vertices,return )

Array< int > DrawTrianglesView_Impl__obj::get_indices( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_indices",0x09da25f4,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_indices","openfl/_internal/renderer/DrawCommandReader.hx",372,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(372)
	int tmp = (this1->oPos + (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	Array< int > tmp2 = ((Array< int >)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(372)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_indices,return )

Array< Float > DrawTrianglesView_Impl__obj::get_uvtData( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_uvtData",0x4da9858a,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_uvtData","openfl/_internal/renderer/DrawCommandReader.hx",373,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(373)
	int tmp = (this1->oPos + (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	Array< Float > tmp2 = ((Array< Float >)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_uvtData,return )

::openfl::display::TriangleCulling DrawTrianglesView_Impl__obj::get_culling( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_culling",0x7a0dc13d,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_culling","openfl/_internal/renderer/DrawCommandReader.hx",374,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(374)
	int tmp = (this1->oPos + (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(374)
	::openfl::display::TriangleCulling tmp2 = ((::openfl::display::TriangleCulling)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(374)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_culling,return )

Array< int > DrawTrianglesView_Impl__obj::get_colors( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_colors",0xe9237f83,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_colors","openfl/_internal/renderer/DrawCommandReader.hx",375,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(375)
	int tmp = (this1->oPos + (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	Dynamic tmp1 = this1->buffer->o->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	Array< int > tmp2 = ((Array< int >)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_colors,return )

int DrawTrianglesView_Impl__obj::get_blendMode( ::openfl::_internal::renderer::DrawCommandReader this1){
	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","get_blendMode",0x470cd061,"openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_.get_blendMode","openfl/_internal/renderer/DrawCommandReader.hx",376,0xbbdbd1ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(376)
	int tmp = this1->iPos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	int tmp1 = this1->buffer->i->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_blendMode,return )


DrawTrianglesView_Impl__obj::DrawTrianglesView_Impl__obj()
{
}

bool DrawTrianglesView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colors") ) { outValue = get_colors_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_indices") ) { outValue = get_indices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_uvtData") ) { outValue = get_uvtData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_culling") ) { outValue = get_culling_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { outValue = get_vertices_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { outValue = get_blendMode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawTrianglesView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawTrianglesView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawTrianglesView_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_vertices","\x02","\x74","\x2f","\x1f"),
	HX_HCSTRING("get_indices","\x3e","\xa7","\x4e","\x69"),
	HX_HCSTRING("get_uvtData","\xd4","\x06","\x1e","\xad"),
	HX_HCSTRING("get_culling","\x87","\x42","\x82","\xd9"),
	HX_HCSTRING("get_colors","\x79","\x35","\x0e","\xb7"),
	HX_HCSTRING("get_blendMode","\x2b","\xb8","\x9b","\xcd"),
	::String(null()) };

void DrawTrianglesView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawTrianglesView_Impl_","\x24","\x26","\xf3","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawTrianglesView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawTrianglesView_Impl__obj >;
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
