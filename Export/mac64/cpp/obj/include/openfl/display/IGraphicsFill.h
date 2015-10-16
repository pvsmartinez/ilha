#ifndef INCLUDED_openfl_display_IGraphicsFill
#define INCLUDED_openfl_display_IGraphicsFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,GraphicsFillType)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IGraphicsFill_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGraphicsFill_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
};



template<typename IMPL>
class IGraphicsFill_delegate_ : public IGraphicsFill_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGraphicsFill_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IGraphicsFill */ 
