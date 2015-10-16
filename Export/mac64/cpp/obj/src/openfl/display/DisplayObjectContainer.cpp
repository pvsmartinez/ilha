#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
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
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",102,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(104)
	super::__construct();
	HX_STACK_LINE(106)
	this->mouseChildren = true;
	HX_STACK_LINE(108)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(109)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",144,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(146)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(148)
		bool tmp1 = (child->parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(150)
			::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			child->parent->removeChild(tmp2);
		}
		HX_STACK_LINE(154)
		::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		this->__children->push(tmp2);
		HX_STACK_LINE(155)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(157)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		if ((tmp4)){
			HX_STACK_LINE(161)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			child->__setStageReference(tmp5);
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			bool tmp5 = child->__transformDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			if ((tmp6)){
				HX_STACK_LINE(165)
				child->__transformDirty = true;
				HX_STACK_LINE(165)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			bool tmp5 = child->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			if ((tmp6)){
				HX_STACK_LINE(166)
				child->__renderDirty = true;
				HX_STACK_LINE(166)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(168)
		::String tmp5 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		::openfl::events::Event event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(169)
		event->target = child;
		HX_STACK_LINE(170)
		::openfl::events::Event tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		child->__dispatchEvent(tmp7);
	}
	HX_STACK_LINE(174)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",208,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(210)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(210)
	if ((tmp3)){
		HX_STACK_LINE(210)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(210)
		tmp4 = true;
	}
	HX_STACK_LINE(210)
	if ((tmp4)){
		HX_STACK_LINE(212)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(216)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(216)
	if ((tmp5)){
		HX_STACK_LINE(218)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		this->__children->remove(tmp6);
	}
	else{
		HX_STACK_LINE(222)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		if ((tmp6)){
			HX_STACK_LINE(224)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(228)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(230)
		::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(230)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(230)
		if ((tmp8)){
			HX_STACK_LINE(234)
			::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(234)
			child->__setStageReference(tmp9);
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			bool tmp9 = child->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(238)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(238)
			if ((tmp10)){
				HX_STACK_LINE(238)
				child->__transformDirty = true;
				HX_STACK_LINE(238)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			bool tmp9 = child->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(239)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(239)
			if ((tmp10)){
				HX_STACK_LINE(239)
				child->__renderDirty = true;
				HX_STACK_LINE(239)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(241)
		::String tmp9 = ::openfl::events::Event_obj::ADDED;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(241)
		::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(241)
		::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(242)
		event->target = child;
		HX_STACK_LINE(243)
		::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(243)
		child->__dispatchEvent(tmp11);
	}
	HX_STACK_LINE(247)
	int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(247)
	::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(247)
	this->__children->insert(tmp6,tmp7);
	HX_STACK_LINE(249)
	::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(249)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",277,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(277)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",294,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(296)
	while((true)){
		HX_STACK_LINE(296)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(296)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		if ((tmp)){
			HX_STACK_LINE(296)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(296)
			tmp1 = false;
		}
		HX_STACK_LINE(296)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		if ((tmp2)){
			HX_STACK_LINE(296)
			break;
		}
		HX_STACK_LINE(298)
		child = child->parent;
	}
	HX_STACK_LINE(302)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(302)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",320,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(322)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	if ((tmp)){
		HX_STACK_LINE(322)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(322)
		tmp1 = false;
	}
	HX_STACK_LINE(322)
	if ((tmp1)){
		HX_STACK_LINE(324)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		return tmp2;
	}
	HX_STACK_LINE(328)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",351,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(353)
	{
		HX_STACK_LINE(353)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(353)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(353)
		while((true)){
			HX_STACK_LINE(353)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(353)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(353)
			if ((tmp1)){
				HX_STACK_LINE(353)
				break;
			}
			HX_STACK_LINE(353)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(353)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(353)
			++(_g);
			HX_STACK_LINE(355)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(355)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			if ((tmp5)){
				HX_STACK_LINE(355)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(355)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(359)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",372,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(374)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(374)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			if ((tmp2)){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(374)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(376)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(376)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			if ((tmp6)){
				HX_STACK_LINE(376)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(376)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(380)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",404,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(406)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(407)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	this->__hitTest(tmp,tmp1,false,stack,false);
	HX_STACK_LINE(408)
	stack->reverse();
	HX_STACK_LINE(409)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",433,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(435)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(435)
	if ((tmp)){
		HX_STACK_LINE(435)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(435)
		tmp1 = false;
	}
	HX_STACK_LINE(435)
	if ((tmp1)){
		HX_STACK_LINE(437)
		::String tmp2 = ::openfl::events::Event_obj::REMOVED;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(tmp2,true,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(437)
		child->__dispatchEvent(tmp3);
		HX_STACK_LINE(439)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(439)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(439)
		if ((tmp5)){
			HX_STACK_LINE(441)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(445)
		child->parent = null();
		HX_STACK_LINE(446)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		this->__children->remove(tmp6);
		HX_STACK_LINE(447)
		::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		this->__removedChildren->push(tmp7);
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			bool tmp8 = child->__transformDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			if ((tmp9)){
				HX_STACK_LINE(448)
				child->__transformDirty = true;
				HX_STACK_LINE(448)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			bool tmp8 = child->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(449)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(449)
			if ((tmp9)){
				HX_STACK_LINE(449)
				child->__renderDirty = true;
				HX_STACK_LINE(449)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(453)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",480,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(482)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	if ((tmp)){
		HX_STACK_LINE(482)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(482)
		tmp1 = false;
	}
	HX_STACK_LINE(482)
	if ((tmp1)){
		HX_STACK_LINE(484)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		return tmp3;
	}
	HX_STACK_LINE(488)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",493,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(495)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		if ((tmp)){
			HX_STACK_LINE(497)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(497)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(497)
			endIndex = tmp2;
			HX_STACK_LINE(499)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(499)
			if ((tmp3)){
				HX_STACK_LINE(501)
				return null();
			}
		}
		HX_STACK_LINE(507)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(507)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(507)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(507)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(507)
		if ((tmp4)){
			HX_STACK_LINE(509)
			return null();
		}
		else{
			HX_STACK_LINE(511)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(511)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(511)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(511)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(511)
			if ((tmp7)){
				HX_STACK_LINE(511)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(511)
				tmp8 = true;
			}
			HX_STACK_LINE(511)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(511)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(511)
			if ((tmp9)){
				HX_STACK_LINE(511)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(511)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(511)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(511)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(511)
				tmp10 = true;
			}
			HX_STACK_LINE(511)
			if ((tmp10)){
				HX_STACK_LINE(513)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(513)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(517)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(517)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(518)
		while((true)){
			HX_STACK_LINE(518)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(518)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(518)
			if ((tmp7)){
				HX_STACK_LINE(518)
				break;
			}
			HX_STACK_LINE(520)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(520)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(521)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve( ::String fieldName){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",528,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fieldName,"fieldName")
	HX_STACK_LINE(530)
	bool tmp = (this->__children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	if ((tmp)){
		HX_STACK_LINE(530)
		return null();
	}
	HX_STACK_LINE(532)
	{
		HX_STACK_LINE(532)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(532)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(532)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			if ((tmp2)){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(532)
			::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(532)
			++(_g);
			HX_STACK_LINE(534)
			::String tmp4 = child->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(534)
			::String tmp5 = fieldName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(534)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(534)
			if ((tmp6)){
				HX_STACK_LINE(536)
				::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(536)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(542)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",575,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(577)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(577)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(577)
		if ((tmp1)){
			HX_STACK_LINE(577)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(577)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(577)
			tmp2 = false;
		}
		HX_STACK_LINE(577)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(577)
		if ((tmp2)){
			HX_STACK_LINE(577)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(577)
			tmp3 = false;
		}
		HX_STACK_LINE(577)
		if ((tmp3)){
			HX_STACK_LINE(579)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			this->__children->remove(tmp4);
			HX_STACK_LINE(580)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(580)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(580)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",597,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(599)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		if ((tmp)){
			HX_STACK_LINE(599)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(599)
			tmp1 = false;
		}
		HX_STACK_LINE(599)
		if ((tmp1)){
			HX_STACK_LINE(603)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(603)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(603)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(604)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(604)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(604)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(627)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(627)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(628)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(628)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",644,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(646)
		::openfl::display::DisplayObject tmp = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(646)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(647)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(647)
		this->__children[child1] = tmp1;
		HX_STACK_LINE(648)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(648)
		this->__children[child2] = tmp2;
		HX_STACK_LINE(649)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",654,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(656)
	bool tmp = (event->target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	if ((tmp)){
		HX_STACK_LINE(658)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(662)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(662)
	bool tmp2 = notifyChilden;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(662)
	bool tmp3 = this->super::__broadcast(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(662)
	bool result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(664)
	bool tmp4 = event->__isCancelled;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(664)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(664)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(664)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(664)
	if ((tmp6)){
		HX_STACK_LINE(664)
		tmp7 = notifyChilden;
	}
	else{
		HX_STACK_LINE(664)
		tmp7 = false;
	}
	HX_STACK_LINE(664)
	if ((tmp7)){
		HX_STACK_LINE(666)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(666)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(666)
		while((true)){
			HX_STACK_LINE(666)
			bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(666)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(666)
			if ((tmp9)){
				HX_STACK_LINE(666)
				break;
			}
			HX_STACK_LINE(666)
			::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(666)
			::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(666)
			++(_g);
			HX_STACK_LINE(668)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(668)
			child->__broadcast(tmp11,true);
			HX_STACK_LINE(670)
			bool tmp12 = event->__isCancelled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(670)
			if ((tmp12)){
				HX_STACK_LINE(672)
				return true;
			}
		}
	}
	HX_STACK_LINE(680)
	bool tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(680)
	return tmp8;
}


Void DisplayObjectContainer_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",687,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(687)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(687)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(687)
		while((true)){
			HX_STACK_LINE(687)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(687)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(687)
			if ((tmp1)){
				HX_STACK_LINE(687)
				break;
			}
			HX_STACK_LINE(687)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(687)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(687)
			++(_g);
			HX_STACK_LINE(689)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(689)
			child->__enterFrame(tmp3);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",696,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(698)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(698)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(698)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(700)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		if ((tmp3)){
			HX_STACK_LINE(700)
			return null();
		}
		HX_STACK_LINE(702)
		::openfl::geom::Matrix matrixCache = null();		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(704)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(704)
		if ((tmp4)){
			HX_STACK_LINE(706)
			::openfl::geom::Matrix tmp5 = this->__worldTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(706)
			matrixCache = tmp5;
			HX_STACK_LINE(707)
			this->__worldTransform = matrix;
			HX_STACK_LINE(708)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(712)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(712)
			while((true)){
				HX_STACK_LINE(712)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(712)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(712)
				if ((tmp6)){
					HX_STACK_LINE(712)
					break;
				}
				HX_STACK_LINE(712)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(712)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(712)
				++(_g);
				HX_STACK_LINE(714)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(714)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(714)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(714)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(714)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(714)
				if ((tmp11)){
					HX_STACK_LINE(714)
					Float tmp13 = child->get_scaleY();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(714)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(714)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(714)
					tmp12 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(714)
					tmp12 = true;
				}
				HX_STACK_LINE(714)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(714)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(714)
				if ((tmp13)){
					HX_STACK_LINE(714)
					tmp14 = child->__isMask;
				}
				else{
					HX_STACK_LINE(714)
					tmp14 = true;
				}
				HX_STACK_LINE(714)
				if ((tmp14)){
					HX_STACK_LINE(714)
					continue;
				}
				HX_STACK_LINE(715)
				::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(715)
				::openfl::geom::Matrix tmp16 = child->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(715)
				child->__getBounds(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(719)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(719)
		if ((tmp5)){
			HX_STACK_LINE(721)
			this->__worldTransform = matrixCache;
			HX_STACK_LINE(722)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",729,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(731)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(731)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(731)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(731)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(731)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(731)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(731)
	if ((tmp4)){
		HX_STACK_LINE(731)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(731)
		tmp5 = true;
	}
	HX_STACK_LINE(731)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(731)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(731)
	if ((tmp6)){
		HX_STACK_LINE(731)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(731)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(731)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(731)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(731)
		if ((tmp11)){
			HX_STACK_LINE(731)
			bool tmp12 = this->mouseEnabled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(731)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(731)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(731)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(731)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(731)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(731)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(731)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(731)
			tmp10 = tmp19;
		}
		else{
			HX_STACK_LINE(731)
			tmp10 = false;
		}
		HX_STACK_LINE(731)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(731)
		if ((tmp12)){
			HX_STACK_LINE(731)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(731)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(731)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(731)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(731)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(731)
			tmp7 = !(tmp17);
		}
		else{
			HX_STACK_LINE(731)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(731)
		tmp7 = true;
	}
	HX_STACK_LINE(731)
	if ((tmp7)){
		HX_STACK_LINE(731)
		return false;
	}
	HX_STACK_LINE(732)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(732)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(732)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(732)
	if ((tmp9)){
		HX_STACK_LINE(732)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(732)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(732)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(732)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(732)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(732)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(732)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(732)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(732)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(732)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(732)
		tmp10 = false;
	}
	HX_STACK_LINE(732)
	if ((tmp10)){
		HX_STACK_LINE(732)
		return false;
	}
	HX_STACK_LINE(733)
	::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(733)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(733)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(733)
	if ((tmp12)){
		HX_STACK_LINE(733)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(733)
		::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(733)
		::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(733)
		::openfl::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(733)
		::openfl::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(733)
		::openfl::geom::Point tmp19 = this->globalToLocal(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(733)
		::openfl::geom::Point tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(733)
		::openfl::geom::Point tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(733)
		bool tmp22 = tmp15->containsPoint(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(733)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(733)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(733)
		tmp13 = !(tmp24);
	}
	else{
		HX_STACK_LINE(733)
		tmp13 = false;
	}
	HX_STACK_LINE(733)
	if ((tmp13)){
		HX_STACK_LINE(733)
		return false;
	}
	HX_STACK_LINE(735)
	int tmp14 = this->__children->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(735)
	int i = tmp14;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(736)
	bool tmp15 = interactiveOnly;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(736)
	if ((tmp15)){
		HX_STACK_LINE(738)
		bool tmp16 = (stack == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(738)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(738)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(738)
		if ((tmp17)){
			HX_STACK_LINE(738)
			bool tmp19 = this->mouseChildren;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(738)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(738)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(738)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(738)
			tmp18 = true;
		}
		HX_STACK_LINE(738)
		if ((tmp18)){
			HX_STACK_LINE(740)
			while((true)){
				HX_STACK_LINE(740)
				int tmp19 = --(i);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(740)
				bool tmp20 = (tmp19 >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(740)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(740)
				if ((tmp21)){
					HX_STACK_LINE(740)
					break;
				}
				HX_STACK_LINE(742)
				::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(742)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(742)
				Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(742)
				bool tmp25 = shapeFlag;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(742)
				bool tmp26 = tmp22->__hitTest(tmp23,tmp24,tmp25,null(),true);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(742)
				if ((tmp26)){
					HX_STACK_LINE(744)
					bool tmp27 = (stack != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(744)
					if ((tmp27)){
						HX_STACK_LINE(746)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(750)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(756)
			bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(756)
			if ((tmp19)){
				HX_STACK_LINE(758)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(760)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(761)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(763)
				while((true)){
					HX_STACK_LINE(763)
					int tmp20 = --(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(763)
					bool tmp21 = (tmp20 >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(763)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(763)
					if ((tmp22)){
						HX_STACK_LINE(763)
						break;
					}
					HX_STACK_LINE(765)
					::openfl::display::DisplayObject tmp23 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(765)
					bool tmp24 = tmp23->__getInteractive(null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(765)
					interactive = tmp24;
					HX_STACK_LINE(767)
					bool tmp25 = interactive;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(767)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(767)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(767)
					if ((tmp26)){
						HX_STACK_LINE(767)
						bool tmp28 = this->mouseEnabled;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(767)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(767)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(767)
						if ((tmp30)){
							HX_STACK_LINE(767)
							bool tmp31 = hitTest;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(767)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(767)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(767)
							tmp27 = !(tmp33);
						}
						else{
							HX_STACK_LINE(767)
							tmp27 = false;
						}
					}
					else{
						HX_STACK_LINE(767)
						tmp27 = true;
					}
					HX_STACK_LINE(767)
					if ((tmp27)){
						HX_STACK_LINE(769)
						::openfl::display::DisplayObject tmp28 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(769)
						Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(769)
						Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(769)
						bool tmp31 = shapeFlag;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(769)
						bool tmp32 = tmp28->__hitTest(tmp29,tmp30,tmp31,stack,true);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(769)
						if ((tmp32)){
							HX_STACK_LINE(771)
							hitTest = true;
							HX_STACK_LINE(773)
							bool tmp33 = interactive;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(773)
							if ((tmp33)){
								HX_STACK_LINE(775)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(785)
				bool tmp20 = hitTest;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(785)
				if ((tmp20)){
					HX_STACK_LINE(787)
					int tmp21 = length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(787)
					stack->insert(tmp21,hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(788)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(796)
		while((true)){
			HX_STACK_LINE(796)
			int tmp16 = --(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(796)
			bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(796)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(796)
			if ((tmp18)){
				HX_STACK_LINE(796)
				break;
			}
			HX_STACK_LINE(798)
			::openfl::display::DisplayObject tmp19 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(798)
			Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(798)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(798)
			bool tmp22 = shapeFlag;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(798)
			tmp19->__hitTest(tmp20,tmp21,tmp22,stack,false);
		}
	}
	HX_STACK_LINE(804)
	return false;
}


bool DisplayObjectContainer_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",809,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(811)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(813)
	while((true)){
		HX_STACK_LINE(813)
		int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(813)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(813)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(813)
		if ((tmp3)){
			HX_STACK_LINE(813)
			break;
		}
		HX_STACK_LINE(815)
		::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(815)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(815)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(815)
		bool tmp7 = tmp4->__hitTestMask(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(815)
		if ((tmp7)){
			HX_STACK_LINE(817)
			return true;
		}
	}
	HX_STACK_LINE(823)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",828,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(830)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(830)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(830)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(830)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(830)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(830)
		if ((tmp3)){
			HX_STACK_LINE(830)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(830)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(830)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(830)
			tmp4 = true;
		}
		HX_STACK_LINE(830)
		if ((tmp4)){
			HX_STACK_LINE(830)
			return null();
		}
		HX_STACK_LINE(832)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(832)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(834)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(834)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(834)
		if ((tmp7)){
			HX_STACK_LINE(836)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(836)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(836)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(840)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(840)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(840)
		if ((tmp9)){
			HX_STACK_LINE(842)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(842)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(846)
		{
			HX_STACK_LINE(846)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(846)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(846)
			while((true)){
				HX_STACK_LINE(846)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(846)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(846)
				if ((tmp11)){
					HX_STACK_LINE(846)
					break;
				}
				HX_STACK_LINE(846)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(846)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(846)
				++(_g);
				HX_STACK_LINE(848)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(848)
				child->__renderCairo(tmp13);
			}
		}
		HX_STACK_LINE(852)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(852)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(852)
		if ((tmp11)){
			HX_STACK_LINE(854)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(854)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(858)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(858)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(858)
		if ((tmp13)){
			HX_STACK_LINE(860)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(864)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(864)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(864)
		if ((tmp15)){
			HX_STACK_LINE(866)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",873,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(875)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(875)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		if ((tmp1)){
			HX_STACK_LINE(877)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(877)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(877)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(886)
		{
			HX_STACK_LINE(886)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(886)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(886)
			while((true)){
				HX_STACK_LINE(886)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(886)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(886)
				if ((tmp3)){
					HX_STACK_LINE(886)
					break;
				}
				HX_STACK_LINE(886)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(886)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(886)
				++(_g);
				HX_STACK_LINE(888)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(888)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",895,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(897)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(897)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(897)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(897)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(897)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(897)
		if ((tmp3)){
			HX_STACK_LINE(897)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(897)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(897)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(897)
			tmp4 = true;
		}
		HX_STACK_LINE(897)
		if ((tmp4)){
			HX_STACK_LINE(897)
			return null();
		}
		HX_STACK_LINE(901)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(901)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(903)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(903)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(903)
		if ((tmp7)){
			HX_STACK_LINE(905)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(905)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(905)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(909)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(909)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(909)
		if ((tmp9)){
			HX_STACK_LINE(911)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(911)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(915)
		{
			HX_STACK_LINE(915)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(915)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(915)
			while((true)){
				HX_STACK_LINE(915)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(915)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(915)
				if ((tmp11)){
					HX_STACK_LINE(915)
					break;
				}
				HX_STACK_LINE(915)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(915)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(915)
				++(_g);
				HX_STACK_LINE(917)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(917)
				child->__renderCanvas(tmp13);
			}
		}
		HX_STACK_LINE(921)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(921)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(921)
		if ((tmp11)){
			HX_STACK_LINE(923)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(923)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(927)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(927)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(927)
		if ((tmp13)){
			HX_STACK_LINE(929)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(933)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(933)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(933)
		if ((tmp15)){
			HX_STACK_LINE(935)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",944,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(946)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(946)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(946)
		if ((tmp1)){
			HX_STACK_LINE(948)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(948)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(948)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(952)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(952)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(953)
		{
			HX_STACK_LINE(953)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(953)
			::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(953)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(955)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(955)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(955)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",966,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(972)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(972)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(974)
		::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(974)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(974)
		if ((tmp2)){
			HX_STACK_LINE(976)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(976)
			renderSession->maskManager->pushMask(tmp3);
		}
		HX_STACK_LINE(982)
		{
			HX_STACK_LINE(982)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(982)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(982)
			while((true)){
				HX_STACK_LINE(982)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(982)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(982)
				if ((tmp4)){
					HX_STACK_LINE(982)
					break;
				}
				HX_STACK_LINE(982)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(982)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(982)
				++(_g);
				HX_STACK_LINE(984)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(984)
				child->__renderDOM(tmp6);
			}
		}
		HX_STACK_LINE(988)
		{
			HX_STACK_LINE(988)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(988)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(988)
			while((true)){
				HX_STACK_LINE(988)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(988)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(988)
				if ((tmp4)){
					HX_STACK_LINE(988)
					break;
				}
				HX_STACK_LINE(988)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(988)
				::openfl::display::DisplayObject orphan = tmp5;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(988)
				++(_g);
				HX_STACK_LINE(990)
				bool tmp6 = (orphan->stage == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(990)
				if ((tmp6)){
					HX_STACK_LINE(992)
					::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(992)
					orphan->__renderDOM(tmp7);
				}
			}
		}
		HX_STACK_LINE(998)
		int tmp3 = this->__removedChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(998)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(998)
		if ((tmp4)){
			HX_STACK_LINE(1000)
			int tmp5 = this->__removedChildren->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1000)
			this->__removedChildren->splice((int)0,tmp5);
		}
		HX_STACK_LINE(1004)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1004)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1004)
		if ((tmp6)){
			HX_STACK_LINE(1006)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",1015,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1017)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1017)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1017)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1017)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1017)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1017)
		if ((tmp3)){
			HX_STACK_LINE(1017)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1017)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1017)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(1017)
			tmp4 = true;
		}
		HX_STACK_LINE(1017)
		if ((tmp4)){
			HX_STACK_LINE(1017)
			return null();
		}
		HX_STACK_LINE(1019)
		{
			HX_STACK_LINE(1019)
			::openfl::geom::Rectangle tmp5 = this->__scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1019)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1019)
			if ((tmp6)){
				HX_STACK_LINE(1019)
				::openfl::geom::Rectangle tmp7 = this->__scrollRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1019)
				::openfl::geom::Matrix tmp8 = this->__renderTransform;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1019)
				renderSession->maskManager->pushRect(tmp7,tmp8);
			}
			HX_STACK_LINE(1019)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1019)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1019)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1019)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1019)
			if ((tmp9)){
				HX_STACK_LINE(1019)
				::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1019)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1019)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1019)
				tmp10 = (tmp13 != null());
			}
			else{
				HX_STACK_LINE(1019)
				tmp10 = false;
			}
			HX_STACK_LINE(1019)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1019)
			if ((tmp10)){
				HX_STACK_LINE(1019)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1019)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1019)
				int tmp14 = tmp13->__commands->get_length();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1019)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1019)
				tmp11 = (tmp15 > (int)0);
			}
			else{
				HX_STACK_LINE(1019)
				tmp11 = false;
			}
			HX_STACK_LINE(1019)
			if ((tmp11)){
				HX_STACK_LINE(1019)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(1020)
		{
			HX_STACK_LINE(1020)
			::openfl::display::Graphics tmp5 = this->__graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1020)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1020)
			if ((tmp6)){
				HX_STACK_LINE(1020)
				::openfl::display::Graphics tmp7 = this->__graphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1020)
				bool tmp8 = tmp7->__hardware;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1020)
				if ((tmp8)){
					HX_STACK_LINE(1020)
					::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1020)
					::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp9);
				}
				else{
					HX_STACK_LINE(1020)
					::openfl::display::Graphics tmp9 = this->__graphics;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1020)
					::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1020)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp9,tmp10);
					HX_STACK_LINE(1020)
					::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1020)
					::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp11,null());
				}
			}
		}
		HX_STACK_LINE(1022)
		{
			HX_STACK_LINE(1022)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1022)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1022)
			while((true)){
				HX_STACK_LINE(1022)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1022)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1022)
				if ((tmp6)){
					HX_STACK_LINE(1022)
					break;
				}
				HX_STACK_LINE(1022)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1022)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1022)
				++(_g);
				HX_STACK_LINE(1024)
				::openfl::_internal::renderer::RenderSession tmp8 = renderSession;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1024)
				child->__renderGL(tmp8);
			}
		}
		HX_STACK_LINE(1028)
		{
			HX_STACK_LINE(1028)
			::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1028)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1028)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1028)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1028)
			if ((tmp7)){
				HX_STACK_LINE(1028)
				::openfl::display::Graphics tmp9 = this->__maskGraphics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1028)
				::openfl::display::Graphics tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1028)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1028)
				tmp8 = (tmp11 != null());
			}
			else{
				HX_STACK_LINE(1028)
				tmp8 = false;
			}
			HX_STACK_LINE(1028)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1028)
			if ((tmp8)){
				HX_STACK_LINE(1028)
				::openfl::display::Graphics tmp10 = this->__maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1028)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1028)
				int tmp12 = tmp11->__commands->get_length();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1028)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1028)
				tmp9 = (tmp13 > (int)0);
			}
			else{
				HX_STACK_LINE(1028)
				tmp9 = false;
			}
			HX_STACK_LINE(1028)
			if ((tmp9)){
				HX_STACK_LINE(1028)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(1028)
			::openfl::geom::Rectangle tmp10 = this->__scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1028)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1028)
			if ((tmp11)){
				HX_STACK_LINE(1028)
				renderSession->maskManager->popRect();
			}
		}
		HX_STACK_LINE(1030)
		int tmp5 = this->__removedChildren->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1030)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1030)
		if ((tmp6)){
			HX_STACK_LINE(1032)
			int tmp7 = this->__removedChildren->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1032)
			this->__removedChildren->splice((int)0,tmp7);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",1039,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1041)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1041)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1041)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1041)
		if ((tmp2)){
			HX_STACK_LINE(1043)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1043)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1043)
			if ((tmp4)){
				HX_STACK_LINE(1045)
				::String tmp5 = ::openfl::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1045)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1045)
				this->__dispatchEvent(tmp6);
			}
			HX_STACK_LINE(1049)
			this->stage = stage;
			HX_STACK_LINE(1051)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1051)
			if ((tmp5)){
				HX_STACK_LINE(1053)
				::String tmp6 = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1053)
				::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(tmp6,false,false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1053)
				this->__dispatchEvent(tmp7);
			}
			HX_STACK_LINE(1057)
			bool tmp6 = (this->__children != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1057)
			if ((tmp6)){
				HX_STACK_LINE(1059)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1059)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1059)
				while((true)){
					HX_STACK_LINE(1059)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1059)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1059)
					if ((tmp8)){
						HX_STACK_LINE(1059)
						break;
					}
					HX_STACK_LINE(1059)
					::openfl::display::DisplayObject tmp9 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1059)
					::openfl::display::DisplayObject child = tmp9;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(1059)
					++(_g);
					HX_STACK_LINE(1061)
					::openfl::display::Stage tmp10 = stage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1061)
					child->__setStageReference(tmp10);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",1072,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1074)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1074)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1074)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1074)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(1077)
		bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1077)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1077)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1077)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1077)
		if ((tmp5)){
			HX_STACK_LINE(1077)
			bool tmp7 = this->__isMask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1077)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1077)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1077)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1077)
			tmp6 = false;
		}
		HX_STACK_LINE(1077)
		if ((tmp6)){
			HX_STACK_LINE(1079)
			return null();
		}
		HX_STACK_LINE(1085)
		bool tmp7 = updateChildren;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1085)
		if ((tmp7)){
			HX_STACK_LINE(1087)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1087)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1087)
			while((true)){
				HX_STACK_LINE(1087)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1087)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1087)
				if ((tmp9)){
					HX_STACK_LINE(1087)
					break;
				}
				HX_STACK_LINE(1087)
				::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1087)
				::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1087)
				++(_g);
				HX_STACK_LINE(1089)
				bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1089)
				::openfl::display::Graphics tmp12 = maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1089)
				child->__update(tmp11,true,tmp12);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",1098,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1100)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1100)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(1102)
		{
			HX_STACK_LINE(1102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1102)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1102)
			while((true)){
				HX_STACK_LINE(1102)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1102)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1102)
				if ((tmp2)){
					HX_STACK_LINE(1102)
					break;
				}
				HX_STACK_LINE(1102)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1102)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(1102)
				++(_g);
				HX_STACK_LINE(1104)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1104)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",1118,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1120)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
} // end namespace display
