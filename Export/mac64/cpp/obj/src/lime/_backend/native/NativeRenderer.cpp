#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeRenderer_obj::__construct(::lime::graphics::Renderer parent)
{
HX_STACK_FRAME("lime._backend.native.NativeRenderer","new",0x43f11223,"lime._backend.native.NativeRenderer.new","lime/_backend/native/NativeRenderer.hx",38,0x398cc96c)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(38)
	this->parent = parent;
}
;
	return null();
}

//NativeRenderer_obj::~NativeRenderer_obj() { }

Dynamic NativeRenderer_obj::__CreateEmpty() { return  new NativeRenderer_obj; }
hx::ObjectPtr< NativeRenderer_obj > NativeRenderer_obj::__new(::lime::graphics::Renderer parent)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeRenderer_obj::create( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","create",0x10556119,"lime._backend.native.NativeRenderer.create","lime/_backend/native/NativeRenderer.hx",43,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->handle = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_create.call(hx::DynamicPtr(this->parent->window->backend->handle))));
		HX_STACK_LINE(48)
		::lime::graphics::Renderer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		tmp->window->__scale = ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_scale.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(57)
		::String type = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_type.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(59)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		::String _switch_1 = (tmp1);
		if (  ( _switch_1==HX_HCSTRING("opengl","\x6f","\x64","\x94","\x21"))){
			HX_STACK_LINE(63)
			this->useHardware = true;
			HX_STACK_LINE(64)
			::lime::graphics::GLRenderContext tmp2 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			::lime::graphics::RenderContext tmp3 = ::lime::graphics::RenderContext_obj::OPENGL(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			::lime::graphics::Renderer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			tmp4->context = tmp3;
			HX_STACK_LINE(65)
			::lime::graphics::Renderer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			tmp5->type = ::lime::graphics::RendererType_obj::OPENGL;
		}
		else  {
			HX_STACK_LINE(69)
			this->useHardware = false;
			HX_STACK_LINE(72)
			this->render();
			HX_STACK_LINE(73)
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::lime::graphics::RenderContext tmp3 = ::lime::graphics::RenderContext_obj::CAIRO(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			::lime::graphics::Renderer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			tmp4->context = tmp3;
			HX_STACK_LINE(75)
			::lime::graphics::Renderer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			tmp5->type = ::lime::graphics::RendererType_obj::CAIRO;
		}
;
;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,create,(void))

Void NativeRenderer_obj::dispatch( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","dispatch",0xcbb24a17,"lime._backend.native.NativeRenderer.dispatch","lime/_backend/native/NativeRenderer.hx",85,0x398cc96c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,dispatch,(void))

Void NativeRenderer_obj::flip( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","flip",0x29ba5b8a,"lime._backend.native.NativeRenderer.flip","lime/_backend/native/NativeRenderer.hx",92,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		bool tmp = this->useHardware;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(98)
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			if ((tmp3)){
				HX_STACK_LINE(100)
				Dynamic tmp4 = this->primarySurface;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp4);
			}
			HX_STACK_LINE(104)
			::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_unlock.call(hx::DynamicPtr(this->handle));
		}
		HX_STACK_LINE(108)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_flip.call(hx::DynamicPtr(this->handle));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,flip,(void))

Void NativeRenderer_obj::render( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","render",0x996f6573,"lime._backend.native.NativeRenderer.render","lime/_backend/native/NativeRenderer.hx",114,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_make_current.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(119)
		bool tmp = this->useHardware;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(122)
			Dynamic lock = ((Dynamic)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_lock.call(hx::DynamicPtr(this->handle))));		HX_STACK_VAR(lock,"lock");
			HX_STACK_LINE(124)
			Dynamic tmp2 = this->cacheLock;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			if ((tmp5)){
				HX_STACK_LINE(124)
				Dynamic tmp7 = this->cacheLock;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(124)
				tmp6 = (tmp9->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(124)
				tmp6 = true;
			}
			HX_STACK_LINE(124)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			if ((tmp8)){
				HX_STACK_LINE(124)
				Dynamic tmp10 = this->cacheLock;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(124)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				tmp9 = (tmp12->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(124)
				tmp9 = true;
			}
			HX_STACK_LINE(124)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			if ((tmp10)){
				HX_STACK_LINE(124)
				Dynamic tmp12 = this->cacheLock;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(124)
				tmp11 = (tmp13->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(124)
				tmp11 = true;
			}
			HX_STACK_LINE(124)
			if ((tmp11)){
				HX_STACK_LINE(126)
				Dynamic tmp12 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create(lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ),(int)0,lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),lock->__Field(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(126)
				this->primarySurface = tmp12;
				HX_STACK_LINE(128)
				::lime::graphics::cairo::Cairo tmp13 = this->cairo;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(128)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(128)
				if ((tmp14)){
					HX_STACK_LINE(130)
					::lime::graphics::cairo::Cairo tmp15 = this->cairo;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(130)
					Dynamic tmp16 = this->primarySurface;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(130)
					tmp15->recreate(tmp16);
				}
				else{
					HX_STACK_LINE(134)
					Dynamic tmp15 = this->primarySurface;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(134)
					::lime::graphics::cairo::Cairo tmp16 = ::lime::graphics::cairo::Cairo_obj::__new(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(134)
					this->cairo = tmp16;
				}
			}
			HX_STACK_LINE(140)
			this->cacheLock = lock;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,render,(void))

Dynamic NativeRenderer_obj::lime_renderer_create( Dynamic window){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_create",0xcf0a582b,"lime._backend.native.NativeRenderer.lime_renderer_create","lime/_backend/native/NativeRenderer.hx",159,0x398cc96c)
	HX_STACK_ARG(window,"window")
	HX_STACK_LINE(159)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_create.call(hx::DynamicPtr(window));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_create,return )

Void NativeRenderer_obj::lime_renderer_flip( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_flip",0xb8790a1c,"lime._backend.native.NativeRenderer.lime_renderer_flip","lime/_backend/native/NativeRenderer.hx",160,0x398cc96c)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(160)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_flip.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_flip,(void))

Float NativeRenderer_obj::lime_renderer_get_context( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_context",0x0ef35a77,"lime._backend.native.NativeRenderer.lime_renderer_get_context","lime/_backend/native/NativeRenderer.hx",161,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(161)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_context.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_context,return )

Float NativeRenderer_obj::lime_renderer_get_scale( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_scale",0x6d3ae112,"lime._backend.native.NativeRenderer.lime_renderer_get_scale","lime/_backend/native/NativeRenderer.hx",162,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(162)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_scale.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_scale,return )

Dynamic NativeRenderer_obj::lime_renderer_get_type( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_type",0x09408932,"lime._backend.native.NativeRenderer.lime_renderer_get_type","lime/_backend/native/NativeRenderer.hx",163,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(163)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_type.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_type,return )

Dynamic NativeRenderer_obj::lime_renderer_lock( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_lock",0xbc72935a,"lime._backend.native.NativeRenderer.lime_renderer_lock","lime/_backend/native/NativeRenderer.hx",164,0x398cc96c)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(164)
	return ::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_lock.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_lock,return )

Void NativeRenderer_obj::lime_renderer_make_current( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_make_current",0x92794c17,"lime._backend.native.NativeRenderer.lime_renderer_make_current","lime/_backend/native/NativeRenderer.hx",165,0x398cc96c)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(165)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_make_current.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_make_current,(void))

Void NativeRenderer_obj::lime_renderer_unlock( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_unlock",0xb88793f3,"lime._backend.native.NativeRenderer.lime_renderer_unlock","lime/_backend/native/NativeRenderer.hx",166,0x398cc96c)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(166)
		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_unlock.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_unlock,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_create;

::cpp::Function< void ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_flip;

::cpp::Function< Float ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_get_context;

::cpp::Function< Float ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_get_scale;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_get_type;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_lock;

::cpp::Function< void ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_make_current;

::cpp::Function< void ( ::hx::Object * ) > NativeRenderer_obj::cffi_lime_renderer_unlock;


NativeRenderer_obj::NativeRenderer_obj()
{
}

void NativeRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeRenderer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

Dynamic NativeRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return cacheLock; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { return useHardware; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return primarySurface; }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { outValue = lime_renderer_flip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { outValue = lime_renderer_lock_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { outValue = lime_renderer_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { outValue = lime_renderer_unlock_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_type") ) { outValue = lime_renderer_get_type_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_scale") ) { outValue = lime_renderer_get_scale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { outValue = cffi_lime_renderer_flip; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { outValue = cffi_lime_renderer_lock; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_context") ) { outValue = lime_renderer_get_context_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { outValue = cffi_lime_renderer_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { outValue = cffi_lime_renderer_unlock; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_renderer_make_current") ) { outValue = lime_renderer_make_current_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { outValue = cffi_lime_renderer_get_type; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { outValue = cffi_lime_renderer_get_scale; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { outValue = cffi_lime_renderer_get_context; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { outValue = cffi_lime_renderer_make_current; return true;  }
	}
	return false;
}

Dynamic NativeRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { cffi_lime_renderer_flip=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { cffi_lime_renderer_lock=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { cffi_lime_renderer_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { cffi_lime_renderer_unlock=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { cffi_lime_renderer_get_type=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { cffi_lime_renderer_get_scale=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { cffi_lime_renderer_get_context=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { cffi_lime_renderer_make_current=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

void NativeRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"));
	outFields->push(HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(NativeRenderer_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeRenderer_obj,useHardware),HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,cacheLock),HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(NativeRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,primarySurface),HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_create,HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_flip,HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_context,HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_scale,HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_type,HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_lock,HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_make_current,HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_unlock,HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"),
	HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
};

#endif

hx::Class NativeRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),
	HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),
	HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),
	HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),
	HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),
	HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),
	HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),
	HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),
	HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36"),
	HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3"),
	HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60"),
	HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d"),
	HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c"),
	HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7"),
	HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd"),
	HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f"),
	::String(null()) };

void NativeRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeRenderer","\xb1","\xc4","\x96","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeRenderer_obj >;
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

void NativeRenderer_obj::__boot()
{
	cffi_lime_renderer_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_flip= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_context= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_scale= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_renderer_get_type= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_lock= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_renderer_make_current= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_renderer_unlock= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
