#ifndef INCLUDED_openfl_display_IBitmapDrawable
#define INCLUDED_openfl_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IBitmapDrawable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBitmapDrawable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession)=0;
virtual Dynamic __renderCairo_dyn()=0;
		virtual Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession)=0;
virtual Dynamic __renderCairoMask_dyn()=0;
		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession)=0;
virtual Dynamic __renderCanvas_dyn()=0;
		virtual Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession)=0;
virtual Dynamic __renderCanvasMask_dyn()=0;
		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession)=0;
virtual Dynamic __renderGL_dyn()=0;
		virtual Void __updateChildren( bool transformOnly)=0;
virtual Dynamic __updateChildren_dyn()=0;
		virtual Void __updateMask( ::openfl::display::Graphics maskGraphics)=0;
virtual Dynamic __updateMask_dyn()=0;
};



template<typename IMPL>
class IBitmapDrawable_delegate_ : public IBitmapDrawable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBitmapDrawable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void __renderCairo( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderCairo(renderSession);}
		Dynamic __renderCairo_dyn() { return mDelegate->__renderCairo_dyn();}
		Void __renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderCairoMask(renderSession);}
		Dynamic __renderCairoMask_dyn() { return mDelegate->__renderCairoMask_dyn();}
		Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderCanvas(renderSession);}
		Dynamic __renderCanvas_dyn() { return mDelegate->__renderCanvas_dyn();}
		Void __renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderCanvasMask(renderSession);}
		Dynamic __renderCanvasMask_dyn() { return mDelegate->__renderCanvasMask_dyn();}
		Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderGL(renderSession);}
		Dynamic __renderGL_dyn() { return mDelegate->__renderGL_dyn();}
		Void __updateChildren( bool transformOnly) { return mDelegate->__updateChildren(transformOnly);}
		Dynamic __updateChildren_dyn() { return mDelegate->__updateChildren_dyn();}
		Void __updateMask( ::openfl::display::Graphics maskGraphics) { return mDelegate->__updateMask(maskGraphics);}
		Dynamic __updateMask_dyn() { return mDelegate->__updateMask_dyn();}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IBitmapDrawable */ 
