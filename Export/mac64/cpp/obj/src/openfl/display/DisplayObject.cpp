#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",173,0xc7539829)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(751)
	this->__cacheAsBitmap = false;
	HX_STACK_LINE(729)
	this->__maskCached = false;
	HX_STACK_LINE(764)
	super::__construct(null());
	HX_STACK_LINE(766)
	this->__alpha = (int)1;
	HX_STACK_LINE(767)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(767)
	this->__transform = tmp;
	HX_STACK_LINE(768)
	this->__visible = true;
	HX_STACK_LINE(770)
	this->__rotation = (int)0;
	HX_STACK_LINE(771)
	this->__rotationSine = (int)0;
	HX_STACK_LINE(772)
	this->__rotationCosine = (int)1;
	HX_STACK_LINE(774)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(774)
	this->__renderTransform = tmp1;
	HX_STACK_LINE(776)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(776)
	this->__offset = tmp2;
	HX_STACK_LINE(777)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(777)
	this->__worldOffset = tmp3;
	HX_STACK_LINE(779)
	this->__worldAlpha = (int)1;
	HX_STACK_LINE(780)
	::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(780)
	this->__worldTransform = tmp4;
	HX_STACK_LINE(781)
	::openfl::geom::ColorTransform tmp5 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(781)
	this->__worldColorTransform = tmp5;
	HX_STACK_LINE(787)
	int tmp6 = ++(::openfl::display::DisplayObject_obj::__instanceCount);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(787)
	::String tmp7 = (HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(787)
	this->set_name(tmp7);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",816,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(818)
	::openfl::geom::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(820)
	bool tmp = (targetCoordinateSpace != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(820)
	if ((tmp)){
		HX_STACK_LINE(822)
		::openfl::geom::Matrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(822)
			::openfl::geom::Matrix tmp2 = this->__getWorldTransform();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(822)
			::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(822)
			tmp1 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(822)
		matrix = tmp1;
		HX_STACK_LINE(823)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(823)
		{
			HX_STACK_LINE(823)
			::openfl::geom::Matrix tmp3 = targetCoordinateSpace->__getWorldTransform();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(823)
			::openfl::geom::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(823)
			tmp2 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(823)
		::openfl::geom::Matrix tmp3 = tmp2->invert();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(823)
		matrix->concat(tmp3);
	}
	else{
		HX_STACK_LINE(827)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(827)
		matrix = tmp1;
		HX_STACK_LINE(828)
		matrix->identity();
	}
	HX_STACK_LINE(832)
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(832)
	::openfl::geom::Rectangle bounds = tmp1;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(833)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(833)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(835)
	::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(835)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",858,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(861)
	::openfl::display::DisplayObject tmp = targetCoordinateSpace;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(861)
	::openfl::geom::Rectangle tmp1 = this->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(861)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",883,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(885)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(885)
	pos = tmp;
	HX_STACK_LINE(886)
	{
		HX_STACK_LINE(886)
		::openfl::geom::Matrix tmp1 = this->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(886)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(886)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(886)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(886)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(886)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(886)
		if ((tmp5)){
			HX_STACK_LINE(886)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(886)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(886)
			pos->x = tmp7;
			HX_STACK_LINE(886)
			Float tmp8 = _this->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(886)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(886)
			pos->y = tmp9;
		}
		else{
			HX_STACK_LINE(886)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(886)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(886)
			Float tmp8 = (_this->ty - pos->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(886)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(886)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(886)
			Float tmp11 = (pos->x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(886)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(886)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(886)
			Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(886)
			Float px = tmp14;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(886)
			Float tmp15 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(886)
			Float tmp16 = _this->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(886)
			Float tmp17 = (pos->y - _this->ty);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(886)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(886)
			Float tmp19 = _this->b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(886)
			Float tmp20 = (_this->tx - pos->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(886)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(886)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(886)
			Float tmp23 = (tmp15 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(886)
			pos->y = tmp23;
			HX_STACK_LINE(886)
			pos->x = px;
		}
	}
	HX_STACK_LINE(887)
	::openfl::geom::Point tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(887)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",900,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(902)
	bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(902)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(902)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(902)
	if ((tmp1)){
		HX_STACK_LINE(902)
		tmp2 = (obj->parent != null());
	}
	else{
		HX_STACK_LINE(902)
		tmp2 = false;
	}
	HX_STACK_LINE(902)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(902)
	if ((tmp2)){
		HX_STACK_LINE(902)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(902)
		::openfl::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(902)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(902)
		tmp3 = false;
	}
	HX_STACK_LINE(902)
	if ((tmp3)){
		HX_STACK_LINE(904)
		::openfl::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(904)
		::openfl::geom::Rectangle currentBounds = tmp4;		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(905)
		::openfl::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(905)
		::openfl::geom::Rectangle targetBounds = tmp5;		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(907)
		::openfl::geom::Rectangle tmp6 = targetBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(907)
		bool tmp7 = currentBounds->intersects(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(907)
		return tmp7;
	}
	HX_STACK_LINE(911)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",932,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(934)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(934)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(934)
		if ((tmp1)){
			HX_STACK_LINE(936)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(936)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(937)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(937)
			::openfl::geom::Matrix tmp4 = this->__getWorldTransform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(937)
			this->__getBounds(tmp3,tmp4);
			HX_STACK_LINE(939)
			::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(939)
			bool tmp6 = bounds->containsPoint(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(939)
			return tmp6;
		}
		HX_STACK_LINE(943)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",971,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(973)
	::openfl::geom::Matrix tmp = this->__getWorldTransform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(973)
	::openfl::geom::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(973)
	::openfl::geom::Point tmp2 = tmp->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(973)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObject","__broadcast",0xe41880ea,"openfl.display.DisplayObject.__broadcast","openfl/display/DisplayObject.hx",978,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(980)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(980)
	if ((tmp1)){
		HX_STACK_LINE(980)
		::String tmp3 = event->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(980)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(980)
		tmp2 = this->hasEventListener(tmp4);
	}
	else{
		HX_STACK_LINE(980)
		tmp2 = false;
	}
	HX_STACK_LINE(980)
	if ((tmp2)){
		HX_STACK_LINE(982)
		::openfl::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(982)
		bool tmp4 = this->super::__dispatchEvent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(982)
		bool result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(984)
		bool tmp5 = event->__isCancelled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(984)
		if ((tmp5)){
			HX_STACK_LINE(986)
			return true;
		}
		HX_STACK_LINE(990)
		bool tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(990)
		return tmp6;
	}
	HX_STACK_LINE(994)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__broadcast,return )

bool DisplayObject_obj::__dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","__dispatchEvent",0xd8f34d69,"openfl.display.DisplayObject.__dispatchEvent","openfl/display/DisplayObject.hx",999,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(1001)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1001)
	bool tmp1 = this->super::__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1001)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1003)
	bool tmp2 = event->__isCancelled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1003)
	if ((tmp2)){
		HX_STACK_LINE(1005)
		return true;
	}
	HX_STACK_LINE(1009)
	bool tmp3 = event->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1009)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1009)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1009)
	if ((tmp4)){
		HX_STACK_LINE(1009)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1009)
		::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1009)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1009)
		tmp5 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(1009)
		tmp5 = false;
	}
	HX_STACK_LINE(1009)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1009)
	if ((tmp5)){
		HX_STACK_LINE(1009)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1009)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1009)
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(1009)
		tmp6 = false;
	}
	HX_STACK_LINE(1009)
	if ((tmp6)){
		HX_STACK_LINE(1011)
		event->eventPhase = ::openfl::events::EventPhase_obj::BUBBLING_PHASE;
		HX_STACK_LINE(1013)
		bool tmp7 = (event->target == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1013)
		if ((tmp7)){
			HX_STACK_LINE(1015)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1019)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1019)
		::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1019)
		tmp8->__dispatchEvent(tmp9);
	}
	HX_STACK_LINE(1023)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1023)
	return tmp7;
}


Void DisplayObject_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__enterFrame",0x5c5351ec,"openfl.display.DisplayObject.__enterFrame","openfl/display/DisplayObject.hx",1028,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__enterFrame,(void))

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",1035,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1037)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1037)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1037)
		if ((tmp1)){
			HX_STACK_LINE(1039)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1039)
			::openfl::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1039)
			::openfl::geom::Matrix tmp4 = matrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1039)
			tmp2->__getBounds(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

::lime::ui::MouseCursor DisplayObject_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getCursor",0xc03df5f5,"openfl.display.DisplayObject.__getCursor","openfl/display/DisplayObject.hx",1048,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1048)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getCursor,return )

bool DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",1055,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(1055)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,return )

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",1060,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(1062)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1062)
		::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1062)
		this->__getBounds(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getWorldTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getWorldTransform",0x71693ad9,"openfl.display.DisplayObject.__getWorldTransform","openfl/display/DisplayObject.hx",1067,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1069)
	bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1069)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1069)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1069)
	if ((tmp1)){
		HX_STACK_LINE(1069)
		int tmp3 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1069)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1069)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(1069)
		tmp2 = true;
	}
	HX_STACK_LINE(1069)
	if ((tmp2)){
		HX_STACK_LINE(1071)
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1072)
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1073)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1073)
		bool transformDirty = tmp3;		HX_STACK_VAR(transformDirty,"transformDirty");
		HX_STACK_LINE(1075)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1075)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1075)
		if ((tmp5)){
			HX_STACK_LINE(1077)
			bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1077)
			if ((tmp6)){
				HX_STACK_LINE(1077)
				this->__update(true,false,null());
			}
		}
		else{
			HX_STACK_LINE(1081)
			while((true)){
				HX_STACK_LINE(1081)
				bool tmp6 = (current->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1081)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1081)
				if ((tmp7)){
					HX_STACK_LINE(1081)
					break;
				}
				HX_STACK_LINE(1083)
				::openfl::display::DisplayObject tmp8 = current;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1083)
				list->push(tmp8);
				HX_STACK_LINE(1084)
				current = current->parent;
				HX_STACK_LINE(1086)
				bool tmp9 = current->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1086)
				if ((tmp9)){
					HX_STACK_LINE(1088)
					transformDirty = true;
				}
			}
		}
		HX_STACK_LINE(1096)
		bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1096)
		if ((tmp6)){
			HX_STACK_LINE(1098)
			int i = list->length;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1099)
			while((true)){
				HX_STACK_LINE(1099)
				int tmp7 = --(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1099)
				bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1099)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1099)
				if ((tmp9)){
					HX_STACK_LINE(1099)
					break;
				}
				HX_STACK_LINE(1101)
				::openfl::display::DisplayObject tmp10 = list->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1101)
				tmp10->__update(true,false,null());
			}
		}
	}
	HX_STACK_LINE(1109)
	::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1109)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getWorldTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",1114,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(1116)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1116)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1116)
	if ((tmp1)){
		HX_STACK_LINE(1118)
		bool tmp2 = this->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1118)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1118)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1118)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1118)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1118)
		if ((tmp5)){
			HX_STACK_LINE(1118)
			tmp6 = this->__isMask;
		}
		else{
			HX_STACK_LINE(1118)
			tmp6 = true;
		}
		HX_STACK_LINE(1118)
		if ((tmp6)){
			HX_STACK_LINE(1118)
			return false;
		}
		HX_STACK_LINE(1119)
		::openfl::display::DisplayObject tmp7 = this->get_mask();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1119)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1119)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1119)
		if ((tmp8)){
			HX_STACK_LINE(1119)
			::openfl::display::DisplayObject tmp10 = this->get_mask();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1119)
			::openfl::display::DisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1119)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1119)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1119)
			Float tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1119)
			Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1119)
			bool tmp16 = tmp11->__hitTestMask(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1119)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1119)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1119)
			tmp9 = !(tmp18);
		}
		else{
			HX_STACK_LINE(1119)
			tmp9 = false;
		}
		HX_STACK_LINE(1119)
		if ((tmp9)){
			HX_STACK_LINE(1119)
			return false;
		}
		HX_STACK_LINE(1121)
		::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1121)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1121)
		Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1121)
		bool tmp13 = shapeFlag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1121)
		::openfl::geom::Matrix tmp14 = this->__getWorldTransform();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1121)
		bool tmp15 = tmp10->__hitTest(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1121)
		if ((tmp15)){
			HX_STACK_LINE(1123)
			bool tmp16 = (stack != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1123)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1123)
			if ((tmp16)){
				HX_STACK_LINE(1123)
				bool tmp18 = interactiveOnly;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1123)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1123)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(1123)
				tmp17 = false;
			}
			HX_STACK_LINE(1123)
			if ((tmp17)){
				HX_STACK_LINE(1125)
				stack->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(1129)
			return true;
		}
	}
	HX_STACK_LINE(1135)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(DisplayObject_obj,__hitTest,return )

bool DisplayObject_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTestMask",0x5c65bdfa,"openfl.display.DisplayObject.__hitTestMask","openfl/display/DisplayObject.hx",1140,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1142)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1142)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1142)
	if ((tmp1)){
		HX_STACK_LINE(1144)
		::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1144)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1144)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1144)
		::openfl::geom::Matrix tmp5 = this->__getWorldTransform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1144)
		bool tmp6 = tmp2->__hitTest(tmp3,tmp4,true,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1144)
		if ((tmp6)){
			HX_STACK_LINE(1146)
			return true;
		}
	}
	HX_STACK_LINE(1152)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__hitTestMask,return )

Void DisplayObject_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairo",0x75ab477b,"openfl.display.DisplayObject.__renderCairo","openfl/display/DisplayObject.hx",1157,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1159)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1159)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1159)
		if ((tmp1)){
			HX_STACK_LINE(1161)
			::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1161)
			::openfl::_internal::renderer::cairo::CairoShape_obj::render(hx::ObjectPtr<OBJ_>(this),tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairo,(void))

Void DisplayObject_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairoMask",0x9fd38e07,"openfl.display.DisplayObject.__renderCairoMask","openfl/display/DisplayObject.hx",1168,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1170)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1170)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1170)
		if ((tmp1)){
			HX_STACK_LINE(1172)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1172)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1172)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairoMask,(void))

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvas",0x83845285,"openfl.display.DisplayObject.__renderCanvas","openfl/display/DisplayObject.hx",1179,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1181)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1181)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1181)
		if ((tmp1)){
			HX_STACK_LINE(1183)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvasMask",0x388fe611,"openfl.display.DisplayObject.__renderCanvasMask","openfl/display/DisplayObject.hx",1190,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1192)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1192)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1192)
		if ((tmp1)){
			HX_STACK_LINE(1194)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1194)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1194)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvasMask,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderDOM",0xd2568ab5,"openfl.display.DisplayObject.__renderDOM","openfl/display/DisplayObject.hx",1201,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1203)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1203)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1203)
		if ((tmp1)){
			HX_STACK_LINE(1205)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderGL",0xe0ccbd32,"openfl.display.DisplayObject.__renderGL","openfl/display/DisplayObject.hx",1212,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1214)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1214)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1214)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1214)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1214)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1214)
		if ((tmp3)){
			HX_STACK_LINE(1214)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1214)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1214)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(1214)
			tmp4 = true;
		}
		HX_STACK_LINE(1214)
		if ((tmp4)){
			HX_STACK_LINE(1214)
			return null();
		}
		HX_STACK_LINE(1216)
		{
			HX_STACK_LINE(1216)
			::openfl::geom::Rectangle tmp5 = this->__scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1216)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1216)
			if ((tmp6)){
				HX_STACK_LINE(1216)
				::openfl::geom::Rectangle tmp7 = this->__scrollRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1216)
				::openfl::geom::Matrix tmp8 = this->__renderTransform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1216)
				renderSession->maskManager->pushRect(tmp7,tmp8);
			}
			HX_STACK_LINE(1216)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1216)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1216)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1216)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1216)
			if ((tmp9)){
				HX_STACK_LINE(1216)
				::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1216)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1216)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1216)
				tmp10 = (tmp13 != null());
			}
			else{
				HX_STACK_LINE(1216)
				tmp10 = false;
			}
			HX_STACK_LINE(1216)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1216)
			if ((tmp10)){
				HX_STACK_LINE(1216)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1216)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1216)
				int tmp14 = tmp13->__commands->get_length();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1216)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1216)
				tmp11 = (tmp15 > (int)0);
			}
			else{
				HX_STACK_LINE(1216)
				tmp11 = false;
			}
			HX_STACK_LINE(1216)
			if ((tmp11)){
				HX_STACK_LINE(1216)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(1217)
		{
			HX_STACK_LINE(1217)
			::openfl::display::Graphics tmp5 = this->__graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1217)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1217)
			if ((tmp6)){
				HX_STACK_LINE(1217)
				::openfl::display::Graphics tmp7 = this->__graphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1217)
				bool tmp8 = tmp7->__hardware;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1217)
				if ((tmp8)){
					HX_STACK_LINE(1217)
					::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1217)
					::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp9);
				}
				else{
					HX_STACK_LINE(1217)
					::openfl::display::Graphics tmp9 = this->__graphics;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1217)
					::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1217)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp9,tmp10);
					HX_STACK_LINE(1217)
					::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1217)
					::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp11,null());
				}
			}
		}
		HX_STACK_LINE(1218)
		{
			HX_STACK_LINE(1218)
			::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1218)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1218)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1218)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1218)
			if ((tmp7)){
				HX_STACK_LINE(1218)
				::openfl::display::Graphics tmp9 = this->__maskGraphics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1218)
				::openfl::display::Graphics tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1218)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1218)
				tmp8 = (tmp11 != null());
			}
			else{
				HX_STACK_LINE(1218)
				tmp8 = false;
			}
			HX_STACK_LINE(1218)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1218)
			if ((tmp8)){
				HX_STACK_LINE(1218)
				::openfl::display::Graphics tmp10 = this->__maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1218)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1218)
				int tmp12 = tmp11->__commands->get_length();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1218)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1218)
				tmp9 = (tmp13 > (int)0);
			}
			else{
				HX_STACK_LINE(1218)
				tmp9 = false;
			}
			HX_STACK_LINE(1218)
			if ((tmp9)){
				HX_STACK_LINE(1218)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(1218)
			::openfl::geom::Rectangle tmp10 = this->__scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1218)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1218)
			if ((tmp11)){
				HX_STACK_LINE(1218)
				renderSession->maskManager->popRect();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__drawGraphicsGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__drawGraphicsGL",0x8421324b,"openfl.display.DisplayObject.__drawGraphicsGL","openfl/display/DisplayObject.hx",1222,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1224)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1224)
		if ((tmp1)){
			HX_STACK_LINE(1226)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1226)
			bool tmp3 = tmp2->__hardware;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1226)
			if ((tmp3)){
				HX_STACK_LINE(1228)
				::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1228)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp4);
			}
			else{
				HX_STACK_LINE(1235)
				::openfl::display::Graphics tmp4 = this->__graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1235)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1235)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp4,tmp5);
				HX_STACK_LINE(1238)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1238)
				::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp6,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__drawGraphicsGL,(void))

Void DisplayObject_obj::__preRenderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__preRenderGL",0x31250c67,"openfl.display.DisplayObject.__preRenderGL","openfl/display/DisplayObject.hx",1246,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1248)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1248)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1248)
		if ((tmp1)){
			HX_STACK_LINE(1250)
			::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1250)
			::openfl::geom::Matrix tmp3 = this->__renderTransform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1250)
			renderSession->maskManager->pushRect(tmp2,tmp3);
		}
		HX_STACK_LINE(1254)
		::openfl::display::DisplayObject tmp2 = this->__mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1254)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1254)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1254)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1254)
		if ((tmp4)){
			HX_STACK_LINE(1254)
			::openfl::display::Graphics tmp6 = this->__maskGraphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1254)
			::openfl::display::Graphics tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1254)
			tmp5 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(1254)
			tmp5 = false;
		}
		HX_STACK_LINE(1254)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1254)
		if ((tmp5)){
			HX_STACK_LINE(1254)
			::openfl::display::Graphics tmp7 = this->__maskGraphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1254)
			::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1254)
			int tmp9 = tmp8->__commands->get_length();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1254)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1254)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(1254)
			tmp6 = false;
		}
		HX_STACK_LINE(1254)
		if ((tmp6)){
			HX_STACK_LINE(1256)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__preRenderGL,(void))

Void DisplayObject_obj::__postRenderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__postRenderGL",0x83814532,"openfl.display.DisplayObject.__postRenderGL","openfl/display/DisplayObject.hx",1263,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1265)
		::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1265)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1265)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1265)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1265)
		if ((tmp2)){
			HX_STACK_LINE(1265)
			::openfl::display::Graphics tmp4 = this->__maskGraphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1265)
			::openfl::display::Graphics tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1265)
			::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1265)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(1265)
			tmp3 = false;
		}
		HX_STACK_LINE(1265)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1265)
		if ((tmp3)){
			HX_STACK_LINE(1265)
			::openfl::display::Graphics tmp5 = this->__maskGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1265)
			::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1265)
			int tmp7 = tmp6->__commands->get_length();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1265)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1265)
			tmp4 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(1265)
			tmp4 = false;
		}
		HX_STACK_LINE(1265)
		if ((tmp4)){
			HX_STACK_LINE(1267)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(1271)
		::openfl::geom::Rectangle tmp5 = this->__scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1271)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1271)
		if ((tmp6)){
			HX_STACK_LINE(1273)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__postRenderGL,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",1280,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1282)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1282)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1282)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1282)
		if ((tmp2)){
			HX_STACK_LINE(1284)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1284)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1284)
			if ((tmp4)){
				HX_STACK_LINE(1286)
				::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1286)
				::openfl::display::InteractiveObject tmp6 = tmp5->get_focus();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1286)
				bool tmp7 = (tmp6 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1286)
				if ((tmp7)){
					HX_STACK_LINE(1288)
					::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1288)
					tmp8->set_focus(null());
				}
				HX_STACK_LINE(1292)
				::String tmp8 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1292)
				::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(tmp8,false,false);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1292)
				this->dispatchEvent(tmp9);
			}
			HX_STACK_LINE(1296)
			this->stage = stage;
			HX_STACK_LINE(1298)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1298)
			if ((tmp5)){
				HX_STACK_LINE(1300)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1300)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1300)
				this->dispatchEvent(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",1309,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1311)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1311)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1311)
		if ((tmp1)){
			HX_STACK_LINE(1313)
			this->__renderDirty = true;
			HX_STACK_LINE(1314)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",1321,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1323)
		bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1323)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1323)
		if ((tmp1)){
			HX_STACK_LINE(1325)
			this->__transformDirty = true;
			HX_STACK_LINE(1326)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",1333,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1335)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1335)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1335)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1335)
		if ((tmp1)){
			HX_STACK_LINE(1335)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1335)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1335)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1335)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(1335)
			tmp2 = false;
		}
		HX_STACK_LINE(1335)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1335)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1335)
		if ((tmp3)){
			HX_STACK_LINE(1335)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1335)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1335)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1335)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(1335)
			tmp4 = false;
		}
		HX_STACK_LINE(1335)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1335)
		if ((tmp4)){
			HX_STACK_LINE(1335)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1335)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1335)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1335)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1335)
			tmp5 = false;
		}
		HX_STACK_LINE(1335)
		this->__renderable = tmp5;
		HX_STACK_LINE(1337)
		::openfl::geom::Matrix tmp6 = this->__worldTransform;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1337)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1337)
		if ((tmp7)){
			HX_STACK_LINE(1339)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1339)
			this->__worldTransform = tmp8;
		}
		HX_STACK_LINE(1343)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1343)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1343)
		if ((tmp9)){
			HX_STACK_LINE(1345)
			::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1345)
			::openfl::geom::Matrix parentTransform = tmp10->__worldTransform;		HX_STACK_VAR(parentTransform,"parentTransform");
			HX_STACK_LINE(1347)
			::openfl::geom::Matrix tmp11 = this->__transform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1347)
			Float tmp12 = tmp11->a;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1347)
			Float tmp13 = parentTransform->a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1347)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1347)
			::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1347)
			Float tmp16 = tmp15->b;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1347)
			Float tmp17 = parentTransform->c;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1347)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1347)
			Float tmp19 = (tmp14 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1347)
			::openfl::geom::Matrix tmp20 = this->__worldTransform;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1347)
			tmp20->a = tmp19;
			HX_STACK_LINE(1348)
			::openfl::geom::Matrix tmp21 = this->__transform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1348)
			Float tmp22 = tmp21->a;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1348)
			Float tmp23 = parentTransform->b;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1348)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1348)
			::openfl::geom::Matrix tmp25 = this->__transform;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1348)
			Float tmp26 = tmp25->b;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1348)
			Float tmp27 = parentTransform->d;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1348)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1348)
			Float tmp29 = (tmp24 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1348)
			::openfl::geom::Matrix tmp30 = this->__worldTransform;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1348)
			tmp30->b = tmp29;
			HX_STACK_LINE(1349)
			::openfl::geom::Matrix tmp31 = this->__transform;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1349)
			Float tmp32 = tmp31->c;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1349)
			Float tmp33 = parentTransform->a;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1349)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1349)
			::openfl::geom::Matrix tmp35 = this->__transform;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1349)
			Float tmp36 = tmp35->d;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1349)
			Float tmp37 = parentTransform->c;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1349)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1349)
			Float tmp39 = (tmp34 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1349)
			::openfl::geom::Matrix tmp40 = this->__worldTransform;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1349)
			tmp40->c = tmp39;
			HX_STACK_LINE(1350)
			::openfl::geom::Matrix tmp41 = this->__transform;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1350)
			Float tmp42 = tmp41->c;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1350)
			Float tmp43 = parentTransform->b;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1350)
			Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1350)
			::openfl::geom::Matrix tmp45 = this->__transform;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1350)
			Float tmp46 = tmp45->d;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1350)
			Float tmp47 = parentTransform->d;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1350)
			Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1350)
			Float tmp49 = (tmp44 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1350)
			::openfl::geom::Matrix tmp50 = this->__worldTransform;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1350)
			tmp50->d = tmp49;
			HX_STACK_LINE(1351)
			::openfl::geom::Matrix tmp51 = this->__transform;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1351)
			Float tmp52 = tmp51->tx;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1351)
			Float tmp53 = parentTransform->a;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1351)
			Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1351)
			::openfl::geom::Matrix tmp55 = this->__transform;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1351)
			Float tmp56 = tmp55->ty;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1351)
			Float tmp57 = parentTransform->c;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1351)
			Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1351)
			Float tmp59 = (tmp54 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1351)
			Float tmp60 = parentTransform->tx;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1351)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1351)
			::openfl::geom::Matrix tmp62 = this->__worldTransform;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1351)
			tmp62->tx = tmp61;
			HX_STACK_LINE(1352)
			::openfl::geom::Matrix tmp63 = this->__transform;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1352)
			Float tmp64 = tmp63->tx;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1352)
			Float tmp65 = parentTransform->b;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1352)
			Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1352)
			::openfl::geom::Matrix tmp67 = this->__transform;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1352)
			Float tmp68 = tmp67->ty;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1352)
			Float tmp69 = parentTransform->d;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1352)
			Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1352)
			Float tmp71 = (tmp66 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1352)
			Float tmp72 = parentTransform->ty;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1352)
			Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1352)
			::openfl::geom::Matrix tmp74 = this->__worldTransform;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1352)
			tmp74->ty = tmp73;
			HX_STACK_LINE(1354)
			::openfl::geom::Point tmp75 = this->__worldOffset;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1354)
			::openfl::display::DisplayObjectContainer tmp76 = this->parent;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1354)
			::openfl::geom::Point tmp77 = tmp76->__worldOffset;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1354)
			tmp75->copyFrom(tmp77);
		}
		else{
			HX_STACK_LINE(1358)
			::openfl::geom::Matrix tmp10 = this->__worldTransform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1358)
			::openfl::geom::Matrix tmp11 = this->__transform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1358)
			tmp10->copyFrom(tmp11);
			HX_STACK_LINE(1359)
			{
				HX_STACK_LINE(1359)
				::openfl::geom::Point tmp12 = this->__worldOffset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1359)
				::openfl::geom::Point _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1359)
				_this->x = (int)0;
				HX_STACK_LINE(1359)
				_this->y = (int)0;
			}
		}
		HX_STACK_LINE(1363)
		::openfl::geom::Rectangle tmp10 = this->get_scrollRect();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1363)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1363)
		if ((tmp11)){
			HX_STACK_LINE(1365)
			::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1365)
			::openfl::geom::Rectangle tmp13 = this->__scrollRect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1365)
			::openfl::geom::Point tmp14 = tmp13->get_topLeft();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1365)
			::openfl::geom::Point tmp15 = tmp12->deltaTransformPoint(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1365)
			this->__offset = tmp15;
			HX_STACK_LINE(1366)
			::openfl::geom::Point tmp16 = this->__worldOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1366)
			::openfl::geom::Point tmp17 = this->__offset;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1366)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1366)
			::openfl::geom::Point tmp19 = this->__offset;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1366)
			Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1366)
			tmp16->offset(tmp18,tmp20);
		}
		else{
			HX_STACK_LINE(1370)
			::openfl::geom::Point tmp12 = this->__offset;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1370)
			::openfl::geom::Point _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1370)
			_this->x = (int)0;
			HX_STACK_LINE(1370)
			_this->y = (int)0;
		}
		HX_STACK_LINE(1374)
		::openfl::geom::Matrix tmp12 = this->__renderTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1374)
		::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1374)
		tmp12->copyFrom(tmp13);
		HX_STACK_LINE(1375)
		::openfl::geom::Matrix tmp14 = this->__renderTransform;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1375)
		::openfl::geom::Point tmp15 = this->__worldOffset;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1375)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1375)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1375)
		::openfl::geom::Point tmp18 = this->__worldOffset;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1375)
		Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1375)
		Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1375)
		tmp14->translate(tmp17,tmp20);
		HX_STACK_LINE(1377)
		bool tmp21 = updateChildren;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1377)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1377)
		if ((tmp21)){
			HX_STACK_LINE(1377)
			tmp22 = this->__transformDirty;
		}
		else{
			HX_STACK_LINE(1377)
			tmp22 = false;
		}
		HX_STACK_LINE(1377)
		if ((tmp22)){
			HX_STACK_LINE(1379)
			this->__transformDirty = false;
			HX_STACK_LINE(1380)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
		HX_STACK_LINE(1384)
		bool tmp23 = transformOnly;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1384)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1384)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1384)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1384)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1384)
		if ((tmp26)){
			HX_STACK_LINE(1384)
			::openfl::display::DisplayObject tmp28 = this->__mask;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1384)
			::openfl::display::DisplayObject tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1384)
			::openfl::display::DisplayObject tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1384)
			tmp27 = (tmp30 != null());
		}
		else{
			HX_STACK_LINE(1384)
			tmp27 = false;
		}
		HX_STACK_LINE(1384)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1384)
		if ((tmp27)){
			HX_STACK_LINE(1384)
			::openfl::display::DisplayObject tmp29 = this->__mask;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1384)
			::openfl::display::DisplayObject tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1384)
			bool tmp31 = tmp30->__maskCached;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1384)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1384)
			tmp28 = !(tmp32);
		}
		else{
			HX_STACK_LINE(1384)
			tmp28 = false;
		}
		HX_STACK_LINE(1384)
		if ((tmp28)){
			HX_STACK_LINE(1386)
			::openfl::display::Graphics tmp29 = this->__maskGraphics;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1386)
			bool tmp30 = (tmp29 == null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1386)
			if ((tmp30)){
				HX_STACK_LINE(1388)
				::openfl::display::Graphics tmp31 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1388)
				this->__maskGraphics = tmp31;
			}
			HX_STACK_LINE(1392)
			::openfl::display::Graphics tmp31 = this->__maskGraphics;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1392)
			tmp31->clear();
			HX_STACK_LINE(1394)
			::openfl::display::DisplayObject tmp32 = this->__mask;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1394)
			::openfl::display::Graphics tmp33 = this->__maskGraphics;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1394)
			tmp32->__update(true,true,tmp33);
			HX_STACK_LINE(1395)
			::openfl::display::DisplayObject tmp34 = this->__mask;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1395)
			tmp34->__maskCached = true;
		}
		HX_STACK_LINE(1399)
		bool tmp29 = (maskGraphics != null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1399)
		if ((tmp29)){
			HX_STACK_LINE(1401)
			::openfl::display::Graphics tmp30 = maskGraphics;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1401)
			this->__updateMask(tmp30);
		}
		HX_STACK_LINE(1405)
		bool tmp30 = transformOnly;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1405)
		bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1405)
		if ((tmp31)){
			HX_STACK_LINE(1423)
			::openfl::geom::ColorTransform tmp32 = this->__worldColorTransform;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1423)
			::openfl::geom::Transform tmp33 = this->get_transform();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1423)
			::openfl::geom::ColorTransform tmp34 = tmp33->get_colorTransform();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1423)
			bool tmp35 = tmp32->__equals(tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1423)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1423)
			if ((tmp36)){
				HX_STACK_LINE(1425)
				::openfl::geom::Transform tmp37 = this->get_transform();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1425)
				::openfl::geom::ColorTransform tmp38 = tmp37->get_colorTransform();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1425)
				::openfl::geom::ColorTransform tmp39 = tmp38->__clone();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1425)
				this->__worldColorTransform = tmp39;
			}
			HX_STACK_LINE(1429)
			::openfl::display::DisplayObjectContainer tmp37 = this->parent;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1429)
			bool tmp38 = (tmp37 != null());		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1429)
			if ((tmp38)){
				HX_STACK_LINE(1433)
				Float tmp39 = this->get_alpha();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1433)
				::openfl::display::DisplayObjectContainer tmp40 = this->parent;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1433)
				Float tmp41 = tmp40->__worldAlpha;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1433)
				Float tmp42 = (tmp39 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1433)
				this->__worldAlpha = tmp42;
				HX_STACK_LINE(1434)
				::openfl::geom::ColorTransform tmp43 = this->__worldColorTransform;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1434)
				::openfl::display::DisplayObjectContainer tmp44 = this->parent;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1434)
				::openfl::geom::ColorTransform tmp45 = tmp44->__worldColorTransform;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1434)
				tmp43->__combine(tmp45);
				HX_STACK_LINE(1436)
				::openfl::display::BlendMode tmp46 = this->blendMode;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1436)
				bool tmp47 = (tmp46 == null());		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1436)
				bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1436)
				bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1436)
				if ((tmp48)){
					HX_STACK_LINE(1436)
					::openfl::display::BlendMode tmp50 = this->blendMode;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1436)
					::openfl::display::BlendMode tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(1436)
					tmp49 = (tmp51 == ::openfl::display::BlendMode_obj::NORMAL);
				}
				else{
					HX_STACK_LINE(1436)
					tmp49 = true;
				}
				HX_STACK_LINE(1436)
				if ((tmp49)){
					HX_STACK_LINE(1438)
					::openfl::display::DisplayObjectContainer tmp50 = this->parent;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(1438)
					this->__blendMode = tmp50->__blendMode;
				}
			}
			else{
				HX_STACK_LINE(1477)
				Float tmp39 = this->get_alpha();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1477)
				this->__worldAlpha = tmp39;
			}
			HX_STACK_LINE(1502)
			bool tmp39 = updateChildren;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1502)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1502)
			if ((tmp39)){
				HX_STACK_LINE(1502)
				tmp40 = this->__renderDirty;
			}
			else{
				HX_STACK_LINE(1502)
				tmp40 = false;
			}
			HX_STACK_LINE(1502)
			if ((tmp40)){
				HX_STACK_LINE(1504)
				this->__renderDirty = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateChildren",0xcfbb21df,"openfl.display.DisplayObject.__updateChildren","openfl/display/DisplayObject.hx",1513,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1515)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1515)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1515)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1515)
		if ((tmp1)){
			HX_STACK_LINE(1515)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1515)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1515)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1515)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(1515)
			tmp2 = false;
		}
		HX_STACK_LINE(1515)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1515)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1515)
		if ((tmp3)){
			HX_STACK_LINE(1515)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1515)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1515)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1515)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(1515)
			tmp4 = false;
		}
		HX_STACK_LINE(1515)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1515)
		if ((tmp4)){
			HX_STACK_LINE(1515)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1515)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1515)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1515)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(1515)
			tmp5 = false;
		}
		HX_STACK_LINE(1515)
		this->__renderable = tmp5;
		HX_STACK_LINE(1516)
		bool tmp6 = this->__renderable;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1516)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1516)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1516)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1516)
		if ((tmp8)){
			HX_STACK_LINE(1516)
			bool tmp10 = this->__isMask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1516)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1516)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1516)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(1516)
			tmp9 = false;
		}
		HX_STACK_LINE(1516)
		if ((tmp9)){
			HX_STACK_LINE(1516)
			return null();
		}
		HX_STACK_LINE(1517)
		Float tmp10 = this->get_alpha();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1517)
		this->__worldAlpha = tmp10;
		HX_STACK_LINE(1519)
		bool tmp11 = this->__transformDirty;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1519)
		if ((tmp11)){
			HX_STACK_LINE(1521)
			this->__transformDirty = false;
			HX_STACK_LINE(1522)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateMask",0x5b0e798c,"openfl.display.DisplayObject.__updateMask","openfl/display/DisplayObject.hx",1529,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1531)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1531)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1531)
		if ((tmp1)){
			HX_STACK_LINE(1533)
			::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1533)
			maskGraphics->__commands->overrideMatrix(tmp2);
			HX_STACK_LINE(1534)
			::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1534)
			::openfl::_internal::renderer::DrawCommandBuffer tmp4 = tmp3->__commands;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1534)
			maskGraphics->__commands->append(tmp4);
			HX_STACK_LINE(1535)
			maskGraphics->set___dirty(true);
			HX_STACK_LINE(1536)
			maskGraphics->__visible = true;
			HX_STACK_LINE(1538)
			bool tmp5 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1538)
			if ((tmp5)){
				HX_STACK_LINE(1540)
				::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1540)
				maskGraphics->__bounds = tmp6;
			}
			HX_STACK_LINE(1544)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1544)
			::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1544)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1544)
			tmp6->__getBounds(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",1558,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1560)
	Float tmp = this->__alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1560)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",1565,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1567)
	bool tmp = (value > ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1567)
	if ((tmp)){
		HX_STACK_LINE(1567)
		value = ((Float)1.0);
	}
	HX_STACK_LINE(1568)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1568)
	Float tmp2 = this->__alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1568)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1568)
	if ((tmp3)){
		HX_STACK_LINE(1568)
		bool tmp4 = this->__renderDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1568)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1568)
		if ((tmp5)){
			HX_STACK_LINE(1568)
			this->__renderDirty = true;
			HX_STACK_LINE(1568)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1569)
	Float tmp4 = this->__alpha = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1569)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

::openfl::display::BlendMode DisplayObject_obj::set_blendMode( ::openfl::display::BlendMode value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_blendMode",0x330a4380,"openfl.display.DisplayObject.set_blendMode","openfl/display/DisplayObject.hx",1574,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1576)
	this->__blendMode = value;
	HX_STACK_LINE(1577)
	::openfl::display::BlendMode tmp = this->blendMode = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1577)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",1582,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1584)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1584)
	if ((tmp)){
		HX_STACK_LINE(1586)
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(1590)
		return this->__filters->copy();
	}
	HX_STACK_LINE(1584)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",1601,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1601)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",1606,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1608)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1608)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1609)
	{
		HX_STACK_LINE(1609)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1609)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1609)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1611)
	Float tmp1 = bounds->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1611)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",1616,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1618)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1618)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1620)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1620)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(1621)
	matrix->identity();
	HX_STACK_LINE(1623)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1623)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1623)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(1625)
	bool tmp4 = (value != bounds->height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1625)
	if ((tmp4)){
		HX_STACK_LINE(1627)
		Float tmp5 = (Float(value) / Float(bounds->height));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1627)
		this->set_scaleY(tmp5);
	}
	else{
		HX_STACK_LINE(1631)
		this->set_scaleY((int)1);
	}
	HX_STACK_LINE(1635)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1635)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",1640,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1642)
	::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1642)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",1647,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1649)
	::openfl::display::DisplayObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1649)
	::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1649)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1649)
	if ((tmp2)){
		HX_STACK_LINE(1650)
		{
			HX_STACK_LINE(1650)
			bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1650)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1650)
			if ((tmp4)){
				HX_STACK_LINE(1650)
				this->__transformDirty = true;
				HX_STACK_LINE(1650)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1651)
		{
			HX_STACK_LINE(1651)
			bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1651)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1651)
			if ((tmp4)){
				HX_STACK_LINE(1651)
				this->__renderDirty = true;
				HX_STACK_LINE(1651)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(1653)
	::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1653)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1653)
	if ((tmp4)){
		HX_STACK_LINE(1654)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1654)
		tmp5->__isMask = false;
		HX_STACK_LINE(1655)
		::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1655)
		tmp6->__maskCached = false;
		HX_STACK_LINE(1656)
		{
			HX_STACK_LINE(1656)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1656)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1656)
			bool tmp8 = _this->__transformDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1656)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1656)
			if ((tmp9)){
				HX_STACK_LINE(1656)
				_this->__transformDirty = true;
				HX_STACK_LINE(1656)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1657)
		{
			HX_STACK_LINE(1657)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1657)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1657)
			bool tmp8 = _this->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1657)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1657)
			if ((tmp9)){
				HX_STACK_LINE(1657)
				_this->__renderDirty = true;
				HX_STACK_LINE(1657)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(1658)
		this->__maskGraphics = null();
	}
	HX_STACK_LINE(1660)
	bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1660)
	if ((tmp5)){
		HX_STACK_LINE(1660)
		value->__isMask = true;
	}
	HX_STACK_LINE(1661)
	::openfl::display::DisplayObject tmp6 = this->__mask = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1661)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",1666,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1668)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1668)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1668)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1668)
	if ((tmp1)){
		HX_STACK_LINE(1668)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1668)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1668)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1668)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1668)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1669)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1669)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1669)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1669)
	if ((tmp4)){
		HX_STACK_LINE(1669)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1669)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1669)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1669)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1669)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1671)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1671)
	{
		HX_STACK_LINE(1671)
		::openfl::geom::Matrix tmp7 = this->__getWorldTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1671)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1671)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1671)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1671)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1671)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1671)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1671)
		if ((tmp11)){
			HX_STACK_LINE(1671)
			Float tmp12 = _this->tx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1671)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1671)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1671)
			Float tmp13 = _this->c;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1671)
			Float tmp14 = (_this->ty - mouseY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1671)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1671)
			Float tmp16 = _this->d;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1671)
			Float tmp17 = (mouseX - _this->tx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1671)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1671)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1671)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1671)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",1676,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1678)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1678)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1678)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1678)
	if ((tmp1)){
		HX_STACK_LINE(1678)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1678)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1678)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1678)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1678)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1679)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1679)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1679)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1679)
	if ((tmp4)){
		HX_STACK_LINE(1679)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1679)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1679)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1679)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1679)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1681)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1681)
	{
		HX_STACK_LINE(1681)
		::openfl::geom::Matrix tmp7 = this->__getWorldTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1681)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1681)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1681)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1681)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1681)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1681)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1681)
		if ((tmp11)){
			HX_STACK_LINE(1681)
			Float tmp12 = _this->ty;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1681)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1681)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1681)
			Float tmp13 = _this->a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1681)
			Float tmp14 = (mouseY - _this->ty);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1681)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1681)
			Float tmp16 = _this->b;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1681)
			Float tmp17 = (_this->tx - mouseX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1681)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1681)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1681)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1681)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",1686,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1688)
	::String tmp = this->__name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1688)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",1693,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1695)
	::String tmp = this->__name = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1695)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",1700,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1702)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1702)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1702)
	if ((tmp1)){
		HX_STACK_LINE(1704)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1704)
		return tmp2;
	}
	HX_STACK_LINE(1708)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",1713,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1715)
	Float tmp = this->__rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1715)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",1720,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1722)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1722)
	Float tmp1 = this->__rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1722)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1722)
	if ((tmp2)){
		HX_STACK_LINE(1724)
		this->__rotation = value;
		HX_STACK_LINE(1725)
		Float tmp3 = this->__rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1725)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1725)
		Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1725)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1725)
		Float radians = tmp6;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(1726)
		Float tmp7 = radians;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1726)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1726)
		this->__rotationSine = tmp8;
		HX_STACK_LINE(1727)
		Float tmp9 = radians;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1727)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1727)
		this->__rotationCosine = tmp10;
		HX_STACK_LINE(1729)
		Float tmp11 = this->get_scaleX();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1729)
		Float __scaleX = tmp11;		HX_STACK_VAR(__scaleX,"__scaleX");
		HX_STACK_LINE(1730)
		Float tmp12 = this->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1730)
		Float __scaleY = tmp12;		HX_STACK_VAR(__scaleY,"__scaleY");
		HX_STACK_LINE(1732)
		Float tmp13 = this->__rotationCosine;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1732)
		Float tmp14 = __scaleX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1732)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1732)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1732)
		tmp16->a = tmp15;
		HX_STACK_LINE(1733)
		Float tmp17 = this->__rotationSine;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1733)
		Float tmp18 = __scaleX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1733)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1733)
		::openfl::geom::Matrix tmp20 = this->__transform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1733)
		tmp20->b = tmp19;
		HX_STACK_LINE(1734)
		Float tmp21 = this->__rotationSine;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1734)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1734)
		Float tmp23 = __scaleY;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1734)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1734)
		::openfl::geom::Matrix tmp25 = this->__transform;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1734)
		tmp25->c = tmp24;
		HX_STACK_LINE(1735)
		Float tmp26 = this->__rotationCosine;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1735)
		Float tmp27 = __scaleY;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1735)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1735)
		::openfl::geom::Matrix tmp29 = this->__transform;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1735)
		tmp29->d = tmp28;
		HX_STACK_LINE(1737)
		{
			HX_STACK_LINE(1737)
			bool tmp30 = this->__transformDirty;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1737)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1737)
			if ((tmp31)){
				HX_STACK_LINE(1737)
				this->__transformDirty = true;
				HX_STACK_LINE(1737)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(1741)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1741)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",1746,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1748)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1748)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1748)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1748)
	if ((tmp2)){
		HX_STACK_LINE(1750)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1750)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1750)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1754)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1754)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1754)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1754)
		Float tmp6 = tmp5->a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1754)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1754)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1754)
		Float tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1754)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1754)
		Float tmp11 = tmp10->b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1754)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1754)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1754)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1754)
		return tmp14;
	}
	HX_STACK_LINE(1748)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",1761,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1763)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1763)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1763)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1763)
	if ((tmp2)){
		HX_STACK_LINE(1765)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1765)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1765)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1765)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1765)
		if ((tmp6)){
			HX_STACK_LINE(1765)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1765)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1765)
			if ((tmp8)){
				HX_STACK_LINE(1765)
				this->__transformDirty = true;
				HX_STACK_LINE(1765)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1766)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1766)
		tmp7->a = value;
	}
	else{
		HX_STACK_LINE(1770)
		Float tmp3 = this->__rotationCosine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1770)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1770)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1770)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1771)
		Float tmp6 = this->__rotationSine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1771)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1771)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1771)
		Float b = tmp8;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1773)
		::openfl::geom::Matrix tmp9 = this->__transform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1773)
		Float tmp10 = tmp9->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1773)
		Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1773)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1773)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1773)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1773)
		if ((tmp13)){
			HX_STACK_LINE(1773)
			::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1773)
			::openfl::geom::Matrix tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1773)
			Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1773)
			Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1773)
			tmp14 = (tmp17 != tmp18);
		}
		else{
			HX_STACK_LINE(1773)
			tmp14 = true;
		}
		HX_STACK_LINE(1773)
		if ((tmp14)){
			HX_STACK_LINE(1775)
			bool tmp15 = this->__transformDirty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1775)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1775)
			if ((tmp16)){
				HX_STACK_LINE(1775)
				this->__transformDirty = true;
				HX_STACK_LINE(1775)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1779)
		::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1779)
		tmp15->a = a;
		HX_STACK_LINE(1780)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1780)
		tmp16->b = b;
	}
	HX_STACK_LINE(1784)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1784)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",1789,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1791)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1791)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1791)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1791)
	if ((tmp2)){
		HX_STACK_LINE(1793)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1793)
		Float tmp4 = tmp3->d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1793)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1797)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1797)
		Float tmp4 = tmp3->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1797)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1797)
		Float tmp6 = tmp5->c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1797)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1797)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1797)
		Float tmp9 = tmp8->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1797)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1797)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1797)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1797)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1797)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1797)
		return tmp14;
	}
	HX_STACK_LINE(1791)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",1804,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1806)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1806)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1806)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1806)
	if ((tmp2)){
		HX_STACK_LINE(1808)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1808)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1808)
		Float tmp5 = tmp4->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1808)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1808)
		if ((tmp6)){
			HX_STACK_LINE(1808)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1808)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1808)
			if ((tmp8)){
				HX_STACK_LINE(1808)
				this->__transformDirty = true;
				HX_STACK_LINE(1808)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1809)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1809)
		tmp7->d = value;
	}
	else{
		HX_STACK_LINE(1813)
		Float tmp3 = this->__rotationSine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1813)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1813)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1813)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1813)
		Float c = tmp6;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1814)
		Float tmp7 = this->__rotationCosine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1814)
		Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1814)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1814)
		Float d = tmp9;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1816)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1816)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1816)
		Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1816)
		bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1816)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1816)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1816)
		if ((tmp14)){
			HX_STACK_LINE(1816)
			::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1816)
			::openfl::geom::Matrix tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1816)
			Float tmp18 = tmp17->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1816)
			Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1816)
			tmp15 = (tmp18 != tmp19);
		}
		else{
			HX_STACK_LINE(1816)
			tmp15 = true;
		}
		HX_STACK_LINE(1816)
		if ((tmp15)){
			HX_STACK_LINE(1818)
			bool tmp16 = this->__transformDirty;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1818)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1818)
			if ((tmp17)){
				HX_STACK_LINE(1818)
				this->__transformDirty = true;
				HX_STACK_LINE(1818)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1822)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1822)
		tmp16->c = c;
		HX_STACK_LINE(1823)
		::openfl::geom::Matrix tmp17 = this->__transform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1823)
		tmp17->d = d;
	}
	HX_STACK_LINE(1827)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1827)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",1832,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1834)
	::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1834)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1834)
	if ((tmp1)){
		HX_STACK_LINE(1834)
		return null();
	}
	HX_STACK_LINE(1836)
	::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1836)
	::openfl::geom::Rectangle tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1836)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",1841,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1843)
	::openfl::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1843)
	::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1843)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1843)
	if ((tmp2)){
		HX_STACK_LINE(1845)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1845)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1845)
		if ((tmp4)){
			HX_STACK_LINE(1845)
			this->__transformDirty = true;
			HX_STACK_LINE(1845)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1850)
	::openfl::geom::Rectangle tmp3 = this->__scrollRect = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1850)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",1855,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1857)
	::openfl::geom::Transform tmp = this->__objectTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1857)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1857)
	if ((tmp1)){
		HX_STACK_LINE(1859)
		::openfl::geom::Transform tmp2 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1859)
		this->__objectTransform = tmp2;
	}
	HX_STACK_LINE(1863)
	::openfl::geom::Transform tmp2 = this->__objectTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1863)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",1868,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1870)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1870)
	if ((tmp)){
		HX_STACK_LINE(1872)
		::openfl::errors::TypeError tmp1 = ::openfl::errors::TypeError_obj::__new(HX_HCSTRING("Parameter transform must be non-null.","\x56","\x12","\xfe","\x6e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1872)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(1876)
	::openfl::geom::Transform tmp1 = this->__objectTransform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1876)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1876)
	if ((tmp2)){
		HX_STACK_LINE(1878)
		::openfl::geom::Transform tmp3 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1878)
		this->__objectTransform = tmp3;
	}
	HX_STACK_LINE(1882)
	{
		HX_STACK_LINE(1882)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1882)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1882)
		if ((tmp4)){
			HX_STACK_LINE(1882)
			this->__transformDirty = true;
			HX_STACK_LINE(1882)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1883)
	::openfl::geom::Transform tmp3 = this->__objectTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1883)
	::openfl::geom::Matrix tmp4 = value->get_matrix();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1883)
	tmp3->set_matrix(tmp4);
	HX_STACK_LINE(1884)
	::openfl::geom::Transform tmp5 = this->__objectTransform;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1884)
	::openfl::geom::ColorTransform tmp6 = value->get_colorTransform();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1884)
	::openfl::geom::ColorTransform tmp7 = tmp6->__clone();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1884)
	tmp5->set_colorTransform(tmp7);
	HX_STACK_LINE(1886)
	::openfl::geom::Transform tmp8 = this->__objectTransform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1886)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",1891,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1893)
	bool tmp = this->__visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1893)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",1898,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1900)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1900)
	bool tmp1 = this->__visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1900)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1900)
	if ((tmp2)){
		HX_STACK_LINE(1900)
		bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1900)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1900)
		if ((tmp4)){
			HX_STACK_LINE(1900)
			this->__renderDirty = true;
			HX_STACK_LINE(1900)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1901)
	bool tmp3 = this->__visible = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1901)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",1906,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1908)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1908)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1909)
	{
		HX_STACK_LINE(1909)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1909)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1909)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1911)
	Float tmp1 = bounds->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1911)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",1916,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1918)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1918)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1920)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1920)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(1921)
	matrix->identity();
	HX_STACK_LINE(1923)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1923)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1923)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(1925)
	bool tmp4 = (value != bounds->width);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1925)
	if ((tmp4)){
		HX_STACK_LINE(1927)
		Float tmp5 = (Float(value) / Float(bounds->width));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1927)
		this->set_scaleX(tmp5);
	}
	else{
		HX_STACK_LINE(1931)
		this->set_scaleX((int)1);
	}
	HX_STACK_LINE(1935)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1935)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",1940,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1942)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1942)
	Float tmp1 = tmp->tx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1942)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",1947,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1949)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1949)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1949)
	Float tmp2 = tmp1->tx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1949)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1949)
	if ((tmp3)){
		HX_STACK_LINE(1949)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1949)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1949)
		if ((tmp5)){
			HX_STACK_LINE(1949)
			this->__transformDirty = true;
			HX_STACK_LINE(1949)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1950)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1950)
	Float tmp5 = tmp4->tx = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1950)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",1955,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1957)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1957)
	Float tmp1 = tmp->ty;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1957)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",1962,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1964)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1964)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1964)
	Float tmp2 = tmp1->ty;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1964)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1964)
	if ((tmp3)){
		HX_STACK_LINE(1964)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1964)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1964)
		if ((tmp5)){
			HX_STACK_LINE(1964)
			this->__transformDirty = true;
			HX_STACK_LINE(1964)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1965)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1965)
	Float tmp5 = tmp4->ty = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1965)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

int DisplayObject_obj::__instanceCount;

int DisplayObject_obj::__worldRenderDirty;

int DisplayObject_obj::__worldTransformDirty;


DisplayObject_obj::DisplayObject_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__worldOffset,"__worldOffset");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_MARK_MEMBER_NAME(__maskCached,"__maskCached");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_MARK_MEMBER_NAME(__offset,"__offset");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_MARK_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__worldOffset,"__worldOffset");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_VISIT_MEMBER_NAME(__maskCached,"__maskCached");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_VISIT_MEMBER_NAME(__offset,"__offset");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_VISIT_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp == hx::paccAlways ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__offset") ) { return __offset; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { return __maskCached; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__worldOffset") ) { return __worldOffset; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"__preRenderGL") ) { return __preRenderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { return __maskGraphics; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__postRenderGL") ) { return __postRenderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGraphicsGL") ) { return __drawGraphicsGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { return __objectTransform; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return __getWorldTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { return __worldTransformCache; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { return __worldTransformChanged; }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = __instanceCount; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { outValue = __worldRenderDirty; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { outValue = __worldTransformDirty; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offset") ) { __offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue);blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { __maskCached=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldOffset") ) { __worldOffset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { __maskGraphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { __objectTransform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { __worldTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { __worldTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { __worldRenderDirty=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { __worldTransformDirty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"));
	outFields->push(HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"));
	outFields->push(HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"));
	outFields->push(HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"));
	outFields->push(HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"));
	outFields->push(HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"));
	outFields->push(HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"));
	outFields->push(HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"));
	outFields->push(HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"));
	outFields->push(HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"));
	outFields->push(HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"));
	outFields->push(HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"));
	outFields->push(HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"));
	outFields->push(HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"));
	outFields->push(HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,cacheAsBitmap),HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(DisplayObject_obj,__worldOffset),HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__maskGraphics),HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__maskCached),HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__objectTransform),HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(DisplayObject_obj,__offset),HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransformCache),HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldTransformChanged),HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(DisplayObject_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DisplayObject_obj::__instanceCount,HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldRenderDirty,HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldTransformDirty,HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"),
	HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"),
	HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"),
	HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"),
	HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"),
	HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"),
	HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"),
	HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"),
	HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"),
	HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"),
	HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"),
	HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"),
	HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"),
	HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"),
	HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__getLocalBounds","\x6a","\x04","\x36","\xdf"),
	HX_HCSTRING("__getWorldTransform","\xd0","\xf4","\xfc","\x8b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__drawGraphicsGL","\xf4","\xa7","\x39","\x8e"),
	HX_HCSTRING("__preRenderGL","\x1e","\x63","\xbc","\x10"),
	HX_HCSTRING("__postRenderGL","\x9b","\xce","\x55","\x48"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setRenderDirty","\x7a","\x43","\x7f","\x81"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f"),
	HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2"),
	HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObject","\xf7","\x4b","\x6f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
	__instanceCount= (int)0;
	__worldRenderDirty= (int)0;
	__worldTransformDirty= (int)0;
}

} // end namespace openfl
} // end namespace display
