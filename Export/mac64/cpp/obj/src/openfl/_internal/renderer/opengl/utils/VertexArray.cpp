#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void VertexArray_obj::__construct(Array< ::Dynamic > attributes,Dynamic __o_size,hx::Null< bool >  __o_isStatic)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","new",0x2bd75746,"openfl._internal.renderer.opengl.utils.VertexArray.new","openfl/_internal/renderer/opengl/utils/VertexArray.hx",9,0x59dc110d)
HX_STACK_THIS(this)
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_isStatic,"isStatic")
Dynamic size = __o_size.Default(0);
bool isStatic = __o_isStatic.Default(false);
{
	HX_STACK_LINE(18)
	this->isStatic = false;
	HX_STACK_LINE(15)
	this->size = (int)0;
	HX_STACK_LINE(13)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(21)
	this->size = size;
	HX_STACK_LINE(22)
	this->attributes = attributes;
	HX_STACK_LINE(24)
	bool tmp = (size > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(25)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int byteLength = size;		HX_STACK_VAR(byteLength,"byteLength");
			HX_STACK_LINE(25)
			::haxe::io::Bytes this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(25)
			int tmp2 = byteLength;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			this1 = tmp3;
			HX_STACK_LINE(25)
			tmp1 = this1;
		}
		HX_STACK_LINE(25)
		this->buffer = tmp1;
	}
	HX_STACK_LINE(28)
	this->isStatic = isStatic;
}
;
	return null();
}

//VertexArray_obj::~VertexArray_obj() { }

Dynamic VertexArray_obj::__CreateEmpty() { return  new VertexArray_obj; }
hx::ObjectPtr< VertexArray_obj > VertexArray_obj::__new(Array< ::Dynamic > attributes,Dynamic __o_size,hx::Null< bool >  __o_isStatic)
{  hx::ObjectPtr< VertexArray_obj > _result_ = new VertexArray_obj();
	_result_->__construct(attributes,__o_size,__o_isStatic);
	return _result_;}

Dynamic VertexArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexArray_obj > _result_ = new VertexArray_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void VertexArray_obj::bind( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","bind",0x28a97817,"openfl._internal.renderer.opengl.utils.VertexArray.bind","openfl/_internal/renderer/opengl/utils/VertexArray.hx",32,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::lime::graphics::opengl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(32)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,bind,(void))

Void VertexArray_obj::unbind( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","unbind",0x31e74970,"openfl._internal.renderer.opengl.utils.VertexArray.unbind","openfl/_internal/renderer/opengl/utils/VertexArray.hx",36,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ARRAY_BUFFER,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,unbind,(void))

Void VertexArray_obj::upload( ::lime::utils::ArrayBufferView view){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","upload",0x5f5516db,"openfl._internal.renderer.opengl.utils.VertexArray.upload","openfl/_internal/renderer/opengl/utils/VertexArray.hx",40,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(40)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_sub_data.call(this->gl->ARRAY_BUFFER,(int)0,hx::DynamicPtr(view->buffer),view->byteOffset,view->byteLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexArray_obj,upload,(void))

Void VertexArray_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","destroy",0xed6e1ee0,"openfl._internal.renderer.opengl.utils.VertexArray.destroy","openfl/_internal/renderer/opengl/utils/VertexArray.hx",43,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					int buffer1 = buffer->id;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(44)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(buffer1);
				}
				HX_STACK_LINE(44)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(45)
		this->buffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,destroy,(void))

Void VertexArray_obj::setContext( ::lime::graphics::GLRenderContext gl,::lime::utils::ArrayBufferView view){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","setContext",0xd2427c47,"openfl._internal.renderer.opengl.utils.VertexArray.setContext","openfl/_internal/renderer/opengl/utils/VertexArray.hx",48,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(49)
		this->gl = gl;
		HX_STACK_LINE(51)
		int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::lime::graphics::opengl::GLBuffer tmp1 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		this->glBuffer = tmp1;
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::lime::graphics::opengl::GLBuffer tmp2 = this->glBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			::lime::graphics::opengl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(53)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(55)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ARRAY_BUFFER,hx::DynamicPtr(view->buffer),view->byteOffset,view->byteLength,(  ((this->isStatic)) ? int(gl->STATIC_DRAW) : int(gl->DYNAMIC_DRAW) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexArray_obj,setContext,(void))

int VertexArray_obj::get_stride( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","get_stride",0x67a351bc,"openfl._internal.renderer.opengl.utils.VertexArray.get_stride","openfl/_internal/renderer/opengl/utils/VertexArray.hx",58,0x59dc110d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	int s = (int)0;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(60)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			if ((tmp1)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(61)
			bool tmp3 = a->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			if ((tmp3)){
				HX_STACK_LINE(61)
				int tmp4 = a->components;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(61)
					int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
					switch( (int)(tmp6)){
						case (int)5120: case (int)5121: {
							HX_STACK_LINE(61)
							tmp5 = (int)1;
						}
						;break;
						case (int)5122: case (int)5123: {
							HX_STACK_LINE(61)
							tmp5 = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(61)
							tmp5 = (int)4;
						}
					}
				}
				HX_STACK_LINE(61)
				int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(61)
				hx::AddEq(s,tmp9);
			}
		}
	}
	HX_STACK_LINE(63)
	int tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,get_stride,return )


VertexArray_obj::VertexArray_obj()
{
}

void VertexArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexArray);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(isStatic,"isStatic");
	HX_MARK_END_CLASS();
}

void VertexArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(isStatic,"isStatic");
}

Dynamic VertexArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"stride") ) { if (inCallProp == hx::paccAlways) return get_stride(); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return get_stride_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { isStatic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("isStatic","\x38","\x78","\x65","\x5e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(VertexArray_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(VertexArray_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VertexArray_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(VertexArray_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(VertexArray_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsBool,(int)offsetof(VertexArray_obj,isStatic),HX_HCSTRING("isStatic","\x38","\x78","\x65","\x5e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("isStatic","\x38","\x78","\x65","\x5e"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("unbind","\x96","\xfc","\xeb","\x5e"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexArray_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexArray_obj::__mClass;

void VertexArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.VertexArray","\x54","\xfc","\x44","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexArray_obj >;
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
} // end namespace opengl
} // end namespace utils
