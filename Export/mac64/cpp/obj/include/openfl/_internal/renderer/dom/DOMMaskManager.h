#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#define INCLUDED_openfl__internal_renderer_dom_DOMMaskManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractMaskManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,dom,DOMMaskManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{


class HXCPP_CLASS_ATTRIBUTES  DOMMaskManager_obj : public ::openfl::_internal::renderer::AbstractMaskManager_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractMaskManager_obj super;
		typedef DOMMaskManager_obj OBJ_;
		DOMMaskManager_obj();
		Void __construct(::openfl::_internal::renderer::RenderSession renderSession);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.dom.DOMMaskManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DOMMaskManager_obj > __new(::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMMaskManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DOMMaskManager","\x9f","\x1f","\xbd","\x2d"); }

		virtual Void pushMask( ::openfl::display::DisplayObject mask);

		virtual Void pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform);

		virtual Void popMask( );

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom

#endif /* INCLUDED_openfl__internal_renderer_dom_DOMMaskManager */ 
