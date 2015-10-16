#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace events{

Void MouseEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{
HX_STACK_FRAME("openfl.events.MouseEvent","new",0x5c6da59e,"openfl.events.MouseEvent.new","openfl/events/MouseEvent.hx",291,0xd3783172)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_localX,"localX")
HX_STACK_ARG(__o_localY,"localY")
HX_STACK_ARG(relatedObject,"relatedObject")
HX_STACK_ARG(__o_ctrlKey,"ctrlKey")
HX_STACK_ARG(__o_altKey,"altKey")
HX_STACK_ARG(__o_shiftKey,"shiftKey")
HX_STACK_ARG(__o_buttonDown,"buttonDown")
HX_STACK_ARG(__o_delta,"delta")
HX_STACK_ARG(__o_commandKey,"commandKey")
HX_STACK_ARG(__o_clickCount,"clickCount")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool buttonDown = __o_buttonDown.Default(false);
int delta = __o_delta.Default(0);
bool commandKey = __o_commandKey.Default(false);
int clickCount = __o_clickCount.Default(0);
{
	HX_STACK_LINE(293)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(293)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(295)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(296)
	this->altKey = altKey;
	HX_STACK_LINE(297)
	this->ctrlKey = ctrlKey;
	HX_STACK_LINE(298)
	this->bubbles = bubbles;
	HX_STACK_LINE(299)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(300)
	this->delta = delta;
	HX_STACK_LINE(301)
	this->localX = localX;
	HX_STACK_LINE(302)
	this->localY = localY;
	HX_STACK_LINE(303)
	this->buttonDown = buttonDown;
	HX_STACK_LINE(304)
	this->commandKey = commandKey;
	HX_STACK_LINE(305)
	this->clickCount = clickCount;
}
;
	return null();
}

//MouseEvent_obj::~MouseEvent_obj() { }

Dynamic MouseEvent_obj::__CreateEmpty() { return  new MouseEvent_obj; }
hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return _result_;}

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _result_;}

::openfl::events::Event MouseEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.MouseEvent","clone",0x3e8b341b,"openfl.events.MouseEvent.clone","openfl/events/MouseEvent.hx",336,0xd3783172)
	HX_STACK_THIS(this)
	HX_STACK_LINE(338)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	bool tmp1 = this->bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	bool tmp2 = this->cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	Float tmp3 = this->localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(338)
	Float tmp4 = this->localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(338)
	::openfl::display::InteractiveObject tmp5 = this->relatedObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	bool tmp6 = this->ctrlKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(338)
	bool tmp7 = this->altKey;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(338)
	bool tmp8 = this->shiftKey;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(338)
	bool tmp9 = this->buttonDown;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(338)
	int tmp10 = this->delta;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(338)
	bool tmp11 = this->commandKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(338)
	int tmp12 = this->clickCount;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(338)
	::openfl::events::MouseEvent tmp13 = ::openfl::events::MouseEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(338)
	return tmp13;
}


::String MouseEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.MouseEvent","toString",0x2fb13aae,"openfl.events.MouseEvent.toString","openfl/events/MouseEvent.hx",343,0xd3783172)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	::String tmp1 = (HX_HCSTRING("[MouseEvent type=\"","\xaf","\xa0","\x87","\x6f") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	::String tmp2 = (tmp1 + HX_HCSTRING("\" bubbles=","\xb4","\x4a","\x9e","\xb2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(345)
	bool tmp3 = this->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(345)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(345)
	bool tmp7 = this->cancelable;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(345)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(345)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(345)
	::String tmp10 = (tmp9 + HX_HCSTRING(" localX=","\xf0","\xca","\x14","\x54"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(345)
	Float tmp11 = this->localX;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(345)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(345)
	::String tmp13 = (tmp12 + HX_HCSTRING(" localY=","\xcf","\xcb","\x14","\x54"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(345)
	Float tmp14 = this->localY;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(345)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(345)
	::String tmp16 = (tmp15 + HX_HCSTRING(" relatedObject=","\x13","\x62","\xef","\x68"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(345)
	::openfl::display::InteractiveObject tmp17 = this->relatedObject;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(345)
	::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(345)
	::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(345)
	::String tmp20 = (tmp19 + HX_HCSTRING(" ctrlKey=","\x29","\xe8","\x3e","\x4a"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(345)
	bool tmp21 = this->ctrlKey;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(345)
	::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(345)
	::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(345)
	::String tmp24 = (tmp23 + HX_HCSTRING(" altKey=","\x67","\x93","\xd6","\x12"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(345)
	bool tmp25 = this->altKey;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(345)
	::String tmp26 = ::Std_obj::string(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(345)
	::String tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(345)
	::String tmp28 = (tmp27 + HX_HCSTRING(" shiftKey=","\x40","\x5f","\x4f","\xdb"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(345)
	bool tmp29 = this->shiftKey;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(345)
	::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(345)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(345)
	::String tmp32 = (tmp31 + HX_HCSTRING(" buttonDown=","\x29","\xd2","\x63","\x63"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(345)
	bool tmp33 = this->buttonDown;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(345)
	::String tmp34 = ::Std_obj::string(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(345)
	::String tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(345)
	::String tmp36 = (tmp35 + HX_HCSTRING(" delta=","\x65","\xe9","\x92","\x9d"));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(345)
	int tmp37 = this->delta;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(345)
	::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(345)
	::String tmp39 = (tmp38 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(345)
	return tmp39;
}


Void MouseEvent_obj::updateAfterEvent( ){
{
		HX_STACK_FRAME("openfl.events.MouseEvent","updateAfterEvent",0xc76737c9,"openfl.events.MouseEvent.updateAfterEvent","openfl/events/MouseEvent.hx",355,0xd3783172)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,updateAfterEvent,(void))

::String MouseEvent_obj::CLICK;

::String MouseEvent_obj::DOUBLE_CLICK;

::String MouseEvent_obj::MIDDLE_CLICK;

::String MouseEvent_obj::MIDDLE_MOUSE_DOWN;

::String MouseEvent_obj::MIDDLE_MOUSE_UP;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::RIGHT_CLICK;

::String MouseEvent_obj::RIGHT_MOUSE_DOWN;

::String MouseEvent_obj::RIGHT_MOUSE_UP;

::String MouseEvent_obj::ROLL_OUT;

::String MouseEvent_obj::ROLL_OVER;

bool MouseEvent_obj::__altKey;

bool MouseEvent_obj::__buttonDown;

bool MouseEvent_obj::__commandKey;

bool MouseEvent_obj::__ctrlKey;

bool MouseEvent_obj::__shiftKey;

::openfl::events::MouseEvent MouseEvent_obj::__create( ::String type,int button,Float stageX,Float stageY,::openfl::geom::Point local,::openfl::display::InteractiveObject target,hx::Null< int >  __o_delta){
int delta = __o_delta.Default(0);
	HX_STACK_FRAME("openfl.events.MouseEvent","__create",0x1b813c1e,"openfl.events.MouseEvent.__create","openfl/events/MouseEvent.hx",310,0xd3783172)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(button,"button")
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_ARG(local,"local")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(delta,"delta")
{
		HX_STACK_LINE(312)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"))){
			HX_STACK_LINE(316)
			::openfl::events::MouseEvent_obj::__buttonDown = true;
		}
		else if (  ( _switch_1==HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"))){
			HX_STACK_LINE(320)
			::openfl::events::MouseEvent_obj::__buttonDown = false;
		}
		else  {
		}
;
;
		HX_STACK_LINE(326)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		Float tmp2 = local->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(326)
		Float tmp3 = local->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(326)
		bool tmp4 = ::openfl::events::MouseEvent_obj::__ctrlKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		bool tmp5 = ::openfl::events::MouseEvent_obj::__altKey;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		bool tmp6 = ::openfl::events::MouseEvent_obj::__shiftKey;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(326)
		bool tmp7 = ::openfl::events::MouseEvent_obj::__buttonDown;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(326)
		int tmp8 = delta;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(326)
		bool tmp9 = ::openfl::events::MouseEvent_obj::__commandKey;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(326)
		::openfl::events::MouseEvent tmp10 = ::openfl::events::MouseEvent_obj::__new(tmp1,true,false,tmp2,tmp3,null(),tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(326)
		::openfl::events::MouseEvent event = tmp10;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(327)
		event->stageX = stageX;
		HX_STACK_LINE(328)
		event->stageY = stageY;
		HX_STACK_LINE(329)
		event->target = target;
		HX_STACK_LINE(331)
		::openfl::events::MouseEvent tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(331)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MouseEvent_obj,__create,return )


MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(clickCount,"clickCount");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(clickCount,"clickCount");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		if (HX_FIELD_EQ(inName,"localX") ) { return localX; }
		if (HX_FIELD_EQ(inName,"localY") ) { return localY; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { return clickCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MouseEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { outValue = CLICK; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { outValue = MOUSE_UP; return true;  }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { outValue = ROLL_OUT; return true;  }
		if (HX_FIELD_EQ(inName,"__altKey") ) { outValue = __altKey; return true;  }
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = __create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { outValue = MOUSE_OUT; return true;  }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { outValue = ROLL_OVER; return true;  }
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { outValue = __ctrlKey; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { outValue = MOUSE_DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { outValue = MOUSE_MOVE; return true;  }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { outValue = MOUSE_OVER; return true;  }
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { outValue = __shiftKey; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { outValue = MOUSE_WHEEL; return true;  }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { outValue = RIGHT_CLICK; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { outValue = DOUBLE_CLICK; return true;  }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { outValue = MIDDLE_CLICK; return true;  }
		if (HX_FIELD_EQ(inName,"__buttonDown") ) { outValue = __buttonDown; return true;  }
		if (HX_FIELD_EQ(inName,"__commandKey") ) { outValue = __commandKey; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { outValue = RIGHT_MOUSE_UP; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { outValue = MIDDLE_MOUSE_UP; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { outValue = RIGHT_MOUSE_DOWN; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { outValue = MIDDLE_MOUSE_DOWN; return true;  }
	}
	return false;
}

Dynamic MouseEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { clickCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MouseEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { CLICK=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { MOUSE_UP=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { ROLL_OUT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__altKey") ) { __altKey=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { MOUSE_OUT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { ROLL_OVER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { __ctrlKey=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { MOUSE_DOWN=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { MOUSE_MOVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { MOUSE_OVER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { __shiftKey=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { MOUSE_WHEEL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { RIGHT_CLICK=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { DOUBLE_CLICK=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { MIDDLE_CLICK=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__buttonDown") ) { __buttonDown=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__commandKey") ) { __commandKey=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { RIGHT_MOUSE_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { MIDDLE_MOUSE_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { RIGHT_MOUSE_DOWN=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { MIDDLE_MOUSE_DOWN=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
	outFields->push(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"));
	outFields->push(HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MouseEvent_obj,altKey),HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,buttonDown),HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,commandKey),HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,clickCount),HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,ctrlKey),HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localX),HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localY),HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(MouseEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &MouseEvent_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{hx::fsString,(void *) &MouseEvent_obj::DOUBLE_CLICK,HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_CLICK,HX_HCSTRING("MIDDLE_CLICK","\x7e","\x28","\x5f","\x94")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_MOUSE_DOWN,HX_HCSTRING("MIDDLE_MOUSE_DOWN","\x06","\xb0","\x34","\x98")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_MOUSE_UP,HX_HCSTRING("MIDDLE_MOUSE_UP","\xff","\x48","\x8e","\xac")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_DOWN,HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_MOVE,HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OUT,HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OVER,HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_UP,HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_WHEEL,HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_CLICK,HX_HCSTRING("RIGHT_CLICK","\x25","\xb4","\xdd","\x1a")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_DOWN,HX_HCSTRING("RIGHT_MOUSE_DOWN","\xff","\x86","\xb7","\x29")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_UP,HX_HCSTRING("RIGHT_MOUSE_UP","\xb8","\x3f","\xdb","\x17")},
	{hx::fsString,(void *) &MouseEvent_obj::ROLL_OUT,HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b")},
	{hx::fsString,(void *) &MouseEvent_obj::ROLL_OVER,HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda")},
	{hx::fsBool,(void *) &MouseEvent_obj::__altKey,HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec")},
	{hx::fsBool,(void *) &MouseEvent_obj::__buttonDown,HX_HCSTRING("__buttonDown","\x94","\xe2","\xf7","\xe4")},
	{hx::fsBool,(void *) &MouseEvent_obj::__commandKey,HX_HCSTRING("__commandKey","\x34","\xec","\x2e","\x7c")},
	{hx::fsBool,(void *) &MouseEvent_obj::__ctrlKey,HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2")},
	{hx::fsBool,(void *) &MouseEvent_obj::__shiftKey,HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"),
	HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a"),
	HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"),
	HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updateAfterEvent","\xc7","\xfb","\xc7","\x22"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__altKey,"__altKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__buttonDown,"__buttonDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__commandKey,"__commandKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__ctrlKey,"__ctrlKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__shiftKey,"__shiftKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__altKey,"__altKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__buttonDown,"__buttonDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__commandKey,"__commandKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__ctrlKey,"__ctrlKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__shiftKey,"__shiftKey");
};

#endif

hx::Class MouseEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68"),
	HX_HCSTRING("MIDDLE_CLICK","\x7e","\x28","\x5f","\x94"),
	HX_HCSTRING("MIDDLE_MOUSE_DOWN","\x06","\xb0","\x34","\x98"),
	HX_HCSTRING("MIDDLE_MOUSE_UP","\xff","\x48","\x8e","\xac"),
	HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde"),
	HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4"),
	HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11"),
	HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6"),
	HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd"),
	HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28"),
	HX_HCSTRING("RIGHT_CLICK","\x25","\xb4","\xdd","\x1a"),
	HX_HCSTRING("RIGHT_MOUSE_DOWN","\xff","\x86","\xb7","\x29"),
	HX_HCSTRING("RIGHT_MOUSE_UP","\xb8","\x3f","\xdb","\x17"),
	HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b"),
	HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda"),
	HX_HCSTRING("__altKey","\x16","\x13","\xfa","\xec"),
	HX_HCSTRING("__buttonDown","\x94","\xe2","\xf7","\xe4"),
	HX_HCSTRING("__commandKey","\x34","\xec","\x2e","\x7c"),
	HX_HCSTRING("__ctrlKey","\x94","\x86","\xcb","\xe2"),
	HX_HCSTRING("__shiftKey","\x5d","\x05","\xd8","\x3c"),
	HX_HCSTRING("__create","\x1c","\xd2","\x3e","\x24"),
	::String(null()) };

void MouseEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.MouseEvent","\xac","\x3e","\x4f","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &MouseEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
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

void MouseEvent_obj::__boot()
{
	CLICK= HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
	DOUBLE_CLICK= HX_HCSTRING("doubleClick","\x77","\x03","\x76","\xcd");
	MIDDLE_CLICK= HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43");
	MIDDLE_MOUSE_DOWN= HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01");
	MIDDLE_MOUSE_UP= HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a");
	MOUSE_DOWN= HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
	MOUSE_MOVE= HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4");
	MOUSE_OUT= HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4");
	MOUSE_OVER= HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6");
	MOUSE_UP= HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
	MOUSE_WHEEL= HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7");
	RIGHT_CLICK= HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b");
	RIGHT_MOUSE_DOWN= HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd");
	RIGHT_MOUSE_UP= HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab");
	ROLL_OUT= HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d");
	ROLL_OVER= HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12");
}

} // end namespace openfl
} // end namespace events
