#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void DrawCommandReader_obj::__construct(::openfl::_internal::renderer::DrawCommandBuffer buffer)
{
HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","new",0x4095dae1,"openfl._internal.renderer.DrawCommandReader.new","openfl/_internal/renderer/DrawCommandReader.hx",36,0xbbdbd1ae)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
{
	HX_STACK_LINE(38)
	this->buffer = buffer;
	HX_STACK_LINE(40)
	int tmp = this->tsPos = (int)0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = this->iiPos = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	int tmp2 = this->ffPos = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	int tmp3 = this->oPos = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	int tmp4 = this->fPos = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	int tmp5 = this->iPos = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	this->bPos = tmp5;
	HX_STACK_LINE(41)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::UNKNOWN;
}
;
	return null();
}

//DrawCommandReader_obj::~DrawCommandReader_obj() { }

Dynamic DrawCommandReader_obj::__CreateEmpty() { return  new DrawCommandReader_obj; }
hx::ObjectPtr< DrawCommandReader_obj > DrawCommandReader_obj::__new(::openfl::_internal::renderer::DrawCommandBuffer buffer)
{  hx::ObjectPtr< DrawCommandReader_obj > _result_ = new DrawCommandReader_obj();
	_result_->__construct(buffer);
	return _result_;}

Dynamic DrawCommandReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawCommandReader_obj > _result_ = new DrawCommandReader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DrawCommandReader_obj::advance( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","advance",0xc0cbe783,"openfl._internal.renderer.DrawCommandReader.advance","openfl/_internal/renderer/DrawCommandReader.hx",48,0xbbdbd1ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(52)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(53)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(57)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(58)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(62)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(63)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(64)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(68)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(72)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(76)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(80)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(84)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(88)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(92)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(96)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(97)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(98)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(99)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(103)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(104)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(112)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(113)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(117)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(118)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(119)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(123)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(127)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(131)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(136)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,advance,(void))

bool DrawCommandReader_obj::_bool( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","bool",0x3aa2aa89,"openfl._internal.renderer.DrawCommandReader.bool","openfl/_internal/renderer/DrawCommandReader.hx",146,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(148)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	int tmp1 = this->bPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	bool tmp4 = tmp->b->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_bool,return )

Void DrawCommandReader_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","destroy",0xf6460bfb,"openfl._internal.renderer.DrawCommandReader.destroy","openfl/_internal/renderer/DrawCommandReader.hx",153,0xbbdbd1ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		this->buffer = null();
		HX_STACK_LINE(156)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,destroy,(void))

Array< Float > DrawCommandReader_obj::fArr( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","fArr",0x3d249ffa,"openfl._internal.renderer.DrawCommandReader.fArr","openfl/_internal/renderer/DrawCommandReader.hx",161,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(163)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	int tmp1 = this->ffPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	return tmp->ff->__get(tmp3).StaticCast< Array< Float > >();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,fArr,return )

Float DrawCommandReader_obj::_float( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","float",0x5f51325d,"openfl._internal.renderer.DrawCommandReader.float","openfl/_internal/renderer/DrawCommandReader.hx",168,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(170)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	int tmp1 = this->fPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	Float tmp4 = tmp->f->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(170)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_float,return )

Array< int > DrawCommandReader_obj::iArr( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","iArr",0x3f2043d7,"openfl._internal.renderer.DrawCommandReader.iArr","openfl/_internal/renderer/DrawCommandReader.hx",175,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(177)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	int tmp1 = this->iiPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(177)
	return tmp->ii->__get(tmp3).StaticCast< Array< int > >();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,iArr,return )

int DrawCommandReader_obj::_int( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","int",0x40921770,"openfl._internal.renderer.DrawCommandReader.int","openfl/_internal/renderer/DrawCommandReader.hx",182,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(184)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	int tmp1 = this->iPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	int tmp4 = tmp->i->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,_int,return )

Dynamic DrawCommandReader_obj::obj( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","obj",0x40969a78,"openfl._internal.renderer.DrawCommandReader.obj","openfl/_internal/renderer/DrawCommandReader.hx",189,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(191)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	int tmp1 = this->oPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	Dynamic tmp4 = tmp->o->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,obj,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readBeginBitmapFill( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readBeginBitmapFill",0xa0599366,"openfl._internal.renderer.DrawCommandReader.readBeginBitmapFill","openfl/_internal/renderer/DrawCommandReader.hx",196,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(196)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(196)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(196)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(196)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(196)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(196)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(196)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(196)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(196)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(196)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(196)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(196)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(196)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(196)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(196)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(196)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(196)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
	HX_STACK_LINE(196)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginBitmapFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readBeginFill( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readBeginFill",0xa70abcd7,"openfl._internal.renderer.DrawCommandReader.readBeginFill","openfl/_internal/renderer/DrawCommandReader.hx",197,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(197)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(197)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(197)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(197)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(197)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(197)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(197)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(197)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(197)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(197)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(197)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(197)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(197)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(197)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(197)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(197)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(197)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
	HX_STACK_LINE(197)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readBeginGradientFill( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readBeginGradientFill",0xf3b34ee7,"openfl._internal.renderer.DrawCommandReader.readBeginGradientFill","openfl/_internal/renderer/DrawCommandReader.hx",198,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(198)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(198)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(198)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(198)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(198)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(198)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(198)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(198)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(198)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(198)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(198)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(198)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(198)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(198)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(198)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(198)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(198)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
	HX_STACK_LINE(198)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readBeginGradientFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readCubicCurveTo( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readCubicCurveTo",0x914f0135,"openfl._internal.renderer.DrawCommandReader.readCubicCurveTo","openfl/_internal/renderer/DrawCommandReader.hx",199,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(199)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(199)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(199)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(199)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(199)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(199)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(199)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(199)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(199)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(199)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(199)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(199)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(199)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(199)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(199)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(199)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(199)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
	HX_STACK_LINE(199)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCubicCurveTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readCurveTo( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readCurveTo",0x2d75e6d5,"openfl._internal.renderer.DrawCommandReader.readCurveTo","openfl/_internal/renderer/DrawCommandReader.hx",200,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(200)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(200)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(200)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(200)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(200)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(200)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(200)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(200)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(200)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(200)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(200)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(200)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(200)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(200)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(200)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(200)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(200)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(200)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
	HX_STACK_LINE(200)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readCurveTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawCircle( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawCircle",0xa3c97749,"openfl._internal.renderer.DrawCommandReader.readDrawCircle","openfl/_internal/renderer/DrawCommandReader.hx",201,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(201)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(201)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(201)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(201)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(201)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(201)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(201)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(201)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(201)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(201)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(201)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(201)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(201)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(201)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(201)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(201)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(201)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
	HX_STACK_LINE(201)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawCircle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawEllipse( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawEllipse",0xc24ecd85,"openfl._internal.renderer.DrawCommandReader.readDrawEllipse","openfl/_internal/renderer/DrawCommandReader.hx",202,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(202)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(202)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(202)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(202)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(202)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(202)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(202)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(202)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(202)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(202)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(202)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(202)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(202)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(202)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(202)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(202)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(202)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
	HX_STACK_LINE(202)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawEllipse,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawPath( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawPath",0x0fa3fa9e,"openfl._internal.renderer.DrawCommandReader.readDrawPath","openfl/_internal/renderer/DrawCommandReader.hx",203,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(203)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(203)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(203)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(203)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(203)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(203)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(203)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(203)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(203)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(203)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(203)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(203)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(203)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(203)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(203)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(203)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(203)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_PATH;
	HX_STACK_LINE(203)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawPath,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawRect( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawRect",0x10f9621d,"openfl._internal.renderer.DrawCommandReader.readDrawRect","openfl/_internal/renderer/DrawCommandReader.hx",204,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	{
		HX_STACK_LINE(204)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(204)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(204)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(204)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(204)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(204)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(204)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(204)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(204)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(204)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(204)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(204)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(204)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(204)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(204)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(204)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(204)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(204)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
	HX_STACK_LINE(204)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRect,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawRoundRect( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawRoundRect",0xe705f4f9,"openfl._internal.renderer.DrawCommandReader.readDrawRoundRect","openfl/_internal/renderer/DrawCommandReader.hx",205,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(205)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(205)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(205)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(205)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(205)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(205)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(205)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(205)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(205)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(205)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(205)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(205)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(205)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(205)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(205)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(205)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(205)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
	HX_STACK_LINE(205)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawRoundRect,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawTiles( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawTiles",0xf2b5426c,"openfl._internal.renderer.DrawCommandReader.readDrawTiles","openfl/_internal/renderer/DrawCommandReader.hx",206,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	{
		HX_STACK_LINE(206)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(206)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(206)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(206)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(206)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(206)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(206)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(206)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(206)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(206)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(206)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(206)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(206)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(206)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(206)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(206)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(206)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(206)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TILES;
	HX_STACK_LINE(206)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawTiles,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readDrawTriangles( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readDrawTriangles",0xe2c37512,"openfl._internal.renderer.DrawCommandReader.readDrawTriangles","openfl/_internal/renderer/DrawCommandReader.hx",207,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(207)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(207)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(207)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(207)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(207)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(207)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(207)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(207)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(207)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(207)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(207)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(207)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(207)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(207)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(207)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(207)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(207)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
	HX_STACK_LINE(207)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readDrawTriangles,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readEndFill( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readEndFill",0x84ce0ec9,"openfl._internal.renderer.DrawCommandReader.readEndFill","openfl/_internal/renderer/DrawCommandReader.hx",208,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(208)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(208)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(208)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(208)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(208)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(208)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(208)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(208)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(208)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(208)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(208)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(208)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(208)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(208)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(208)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(208)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(208)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
	HX_STACK_LINE(208)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readEndFill,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineBitmapStyle( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readLineBitmapStyle",0x7b7308f9,"openfl._internal.renderer.DrawCommandReader.readLineBitmapStyle","openfl/_internal/renderer/DrawCommandReader.hx",209,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	{
		HX_STACK_LINE(209)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(209)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(209)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(209)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(209)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(209)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(209)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(209)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(209)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(209)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(209)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(209)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(209)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(209)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(209)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(209)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(209)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(209)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
	HX_STACK_LINE(209)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineBitmapStyle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineGradientStyle( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readLineGradientStyle",0x87a23718,"openfl._internal.renderer.DrawCommandReader.readLineGradientStyle","openfl/_internal/renderer/DrawCommandReader.hx",210,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(210)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(210)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(210)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(210)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(210)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(210)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(210)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(210)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(210)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(210)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(210)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(210)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(210)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(210)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(210)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(210)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(210)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
	HX_STACK_LINE(210)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineGradientStyle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineStyle( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readLineStyle",0xe58db828,"openfl._internal.renderer.DrawCommandReader.readLineStyle","openfl/_internal/renderer/DrawCommandReader.hx",211,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(211)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(211)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(211)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(211)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(211)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(211)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(211)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(211)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(211)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(211)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(211)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(211)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(211)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(211)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(211)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(211)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(211)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
	HX_STACK_LINE(211)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineStyle,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readLineTo( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readLineTo",0xdcfae224,"openfl._internal.renderer.DrawCommandReader.readLineTo","openfl/_internal/renderer/DrawCommandReader.hx",212,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(212)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(212)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(212)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(212)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(212)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(212)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(212)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(212)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(212)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(212)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(212)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(212)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(212)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(212)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(212)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(212)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(212)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(212)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
	HX_STACK_LINE(212)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readLineTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readMoveTo( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readMoveTo",0xbd076e81,"openfl._internal.renderer.DrawCommandReader.readMoveTo","openfl/_internal/renderer/DrawCommandReader.hx",213,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(213)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(213)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(213)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(213)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(213)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(213)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(213)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(213)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(213)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(213)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(213)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(213)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(213)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(213)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(213)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(213)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(213)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
	HX_STACK_LINE(213)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readMoveTo,return )

::openfl::_internal::renderer::DrawCommandReader DrawCommandReader_obj::readOverrideMatrix( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","readOverrideMatrix",0x85194642,"openfl._internal.renderer.DrawCommandReader.readOverrideMatrix","openfl/_internal/renderer/DrawCommandReader.hx",214,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	{
		HX_STACK_LINE(214)
		::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(214)
		::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(214)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(214)
				hx::AddEq(this->iPos,(int)1);
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(214)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(214)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)3);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)3);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)4);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)6);
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(214)
				hx::AddEq(this->tsPos,(int)1);
				HX_STACK_LINE(214)
				hx::AddEq(this->ffPos,(int)1);
				HX_STACK_LINE(214)
				hx::AddEq(this->bPos,(int)1);
				HX_STACK_LINE(214)
				hx::AddEq(this->iPos,(int)2);
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(214)
				hx::AddEq(this->iPos,(int)1);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(214)
				Dynamic();
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)2);
				HX_STACK_LINE(214)
				hx::AddEq(this->bPos,(int)2);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)5);
				HX_STACK_LINE(214)
				hx::AddEq(this->iiPos,(int)2);
				HX_STACK_LINE(214)
				hx::AddEq(this->ffPos,(int)1);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(214)
				hx::AddEq(this->fPos,(int)2);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(214)
				hx::AddEq(this->oPos,(int)1);
			}
			;break;
			default: {
				HX_STACK_LINE(214)
				Dynamic();
			}
		}
	}
	HX_STACK_LINE(214)
	this->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
	HX_STACK_LINE(214)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,readOverrideMatrix,return )

Void DrawCommandReader_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","reset",0x4382b690,"openfl._internal.renderer.DrawCommandReader.reset","openfl/_internal/renderer/DrawCommandReader.hx",217,0xbbdbd1ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		int tmp = this->tsPos = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		int tmp1 = this->iiPos = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		int tmp2 = this->ffPos = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		int tmp3 = this->oPos = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		int tmp4 = this->fPos = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		int tmp5 = this->iPos = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		this->bPos = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandReader_obj,reset,(void))

Void DrawCommandReader_obj::skip( ::openfl::_internal::renderer::DrawCommandType type){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","skip",0x45dc3cde,"openfl._internal.renderer.DrawCommandReader.skip","openfl/_internal/renderer/DrawCommandReader.hx",224,0xbbdbd1ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::openfl::_internal::renderer::DrawCommandType tmp = this->prev;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(226)
			::openfl::_internal::renderer::DrawCommandType _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(226)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)2);
					HX_STACK_LINE(226)
					hx::AddEq(this->bPos,(int)2);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(226)
					hx::AddEq(this->iPos,(int)1);
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)1);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)5);
					HX_STACK_LINE(226)
					hx::AddEq(this->iiPos,(int)2);
					HX_STACK_LINE(226)
					hx::AddEq(this->ffPos,(int)1);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)6);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)4);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)3);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)4);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)3);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)4);
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)6);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(226)
					hx::AddEq(this->tsPos,(int)1);
					HX_STACK_LINE(226)
					hx::AddEq(this->ffPos,(int)1);
					HX_STACK_LINE(226)
					hx::AddEq(this->bPos,(int)1);
					HX_STACK_LINE(226)
					hx::AddEq(this->iPos,(int)2);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)5);
					HX_STACK_LINE(226)
					hx::AddEq(this->iPos,(int)1);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(226)
					Dynamic();
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)2);
					HX_STACK_LINE(226)
					hx::AddEq(this->bPos,(int)2);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)5);
					HX_STACK_LINE(226)
					hx::AddEq(this->iiPos,(int)2);
					HX_STACK_LINE(226)
					hx::AddEq(this->ffPos,(int)1);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)8);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)2);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(226)
					hx::AddEq(this->fPos,(int)2);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(226)
					hx::AddEq(this->oPos,(int)1);
				}
				;break;
				default: {
					HX_STACK_LINE(226)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(227)
		this->prev = type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,skip,(void))

::openfl::display::Tilesheet DrawCommandReader_obj::tileSheet( int index){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandReader","tileSheet",0xb031a1d2,"openfl._internal.renderer.DrawCommandReader.tileSheet","openfl/_internal/renderer/DrawCommandReader.hx",232,0xbbdbd1ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(234)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	int tmp1 = this->tsPos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(234)
	::openfl::display::Tilesheet tmp4 = tmp->ts->__get(tmp3).StaticCast< ::openfl::display::Tilesheet >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandReader_obj,tileSheet,return )


DrawCommandReader_obj::DrawCommandReader_obj()
{
}

void DrawCommandReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandReader);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(bPos,"bPos");
	HX_MARK_MEMBER_NAME(iiPos,"iiPos");
	HX_MARK_MEMBER_NAME(iPos,"iPos");
	HX_MARK_MEMBER_NAME(ffPos,"ffPos");
	HX_MARK_MEMBER_NAME(fPos,"fPos");
	HX_MARK_MEMBER_NAME(oPos,"oPos");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(tsPos,"tsPos");
	HX_MARK_END_CLASS();
}

void DrawCommandReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(bPos,"bPos");
	HX_VISIT_MEMBER_NAME(iiPos,"iiPos");
	HX_VISIT_MEMBER_NAME(iPos,"iPos");
	HX_VISIT_MEMBER_NAME(ffPos,"ffPos");
	HX_VISIT_MEMBER_NAME(fPos,"fPos");
	HX_VISIT_MEMBER_NAME(oPos,"oPos");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(tsPos,"tsPos");
}

Dynamic DrawCommandReader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		if (HX_FIELD_EQ(inName,"obj") ) { return obj_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { return bPos; }
		if (HX_FIELD_EQ(inName,"iPos") ) { return iPos; }
		if (HX_FIELD_EQ(inName,"fPos") ) { return fPos; }
		if (HX_FIELD_EQ(inName,"oPos") ) { return oPos; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"bool") ) { return _bool_dyn(); }
		if (HX_FIELD_EQ(inName,"fArr") ) { return fArr_dyn(); }
		if (HX_FIELD_EQ(inName,"iArr") ) { return iArr_dyn(); }
		if (HX_FIELD_EQ(inName,"skip") ) { return skip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { return iiPos; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { return ffPos; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { return tsPos; }
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return advance_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readLineTo") ) { return readLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"readMoveTo") ) { return readMoveTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readCurveTo") ) { return readCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"readEndFill") ) { return readEndFill_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readDrawPath") ) { return readDrawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"readDrawRect") ) { return readDrawRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readBeginFill") ) { return readBeginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readDrawTiles") ) { return readDrawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineStyle") ) { return readLineStyle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readDrawCircle") ) { return readDrawCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readDrawEllipse") ) { return readDrawEllipse_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readCubicCurveTo") ) { return readCubicCurveTo_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readDrawRoundRect") ) { return readDrawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"readDrawTriangles") ) { return readDrawTriangles_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readOverrideMatrix") ) { return readOverrideMatrix_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readBeginBitmapFill") ) { return readBeginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineBitmapStyle") ) { return readLineBitmapStyle_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readBeginGradientFill") ) { return readBeginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineGradientStyle") ) { return readLineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawCommandReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bPos") ) { bPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iPos") ) { iPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPos") ) { fPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oPos") ) { oPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::openfl::_internal::renderer::DrawCommandType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"iiPos") ) { iiPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ffPos") ) { ffPos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tsPos") ) { tsPos=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawCommandReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("bPos","\x52","\xfe","\x03","\x41"));
	outFields->push(HX_HCSTRING("iiPos","\x94","\x65","\xb7","\xba"));
	outFields->push(HX_HCSTRING("iPos","\xab","\x7c","\xa4","\x45"));
	outFields->push(HX_HCSTRING("ffPos","\x34","\x04","\x88","\xfe"));
	outFields->push(HX_HCSTRING("fPos","\xce","\xd8","\xa8","\x43"));
	outFields->push(HX_HCSTRING("oPos","\x65","\xc4","\x9b","\x49"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("tsPos","\x55","\xe9","\xbb","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(int)offsetof(DrawCommandReader_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,bPos),HX_HCSTRING("bPos","\x52","\xfe","\x03","\x41")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,iiPos),HX_HCSTRING("iiPos","\x94","\x65","\xb7","\xba")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,iPos),HX_HCSTRING("iPos","\xab","\x7c","\xa4","\x45")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,ffPos),HX_HCSTRING("ffPos","\x34","\x04","\x88","\xfe")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,fPos),HX_HCSTRING("fPos","\xce","\xd8","\xa8","\x43")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,oPos),HX_HCSTRING("oPos","\x65","\xc4","\x9b","\x49")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandType*/ ,(int)offsetof(DrawCommandReader_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsInt,(int)offsetof(DrawCommandReader_obj,tsPos),HX_HCSTRING("tsPos","\x55","\xe9","\xbb","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("bPos","\x52","\xfe","\x03","\x41"),
	HX_HCSTRING("iiPos","\x94","\x65","\xb7","\xba"),
	HX_HCSTRING("iPos","\xab","\x7c","\xa4","\x45"),
	HX_HCSTRING("ffPos","\x34","\x04","\x88","\xfe"),
	HX_HCSTRING("fPos","\xce","\xd8","\xa8","\x43"),
	HX_HCSTRING("oPos","\x65","\xc4","\x9b","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("tsPos","\x55","\xe9","\xbb","\x16"),
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fArr","\x9b","\x79","\x9d","\x43"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("iArr","\x78","\x1d","\x99","\x45"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("obj","\xf7","\x8f","\x54","\x00"),
	HX_HCSTRING("readBeginBitmapFill","\xe5","\xb6","\x06","\xb9"),
	HX_HCSTRING("readBeginFill","\x16","\x27","\x04","\x20"),
	HX_HCSTRING("readBeginGradientFill","\x26","\x90","\x8f","\x6c"),
	HX_HCSTRING("readCubicCurveTo","\x56","\x48","\x38","\x74"),
	HX_HCSTRING("readCurveTo","\x54","\xf3","\x73","\x21"),
	HX_HCSTRING("readDrawCircle","\x2a","\x04","\x0d","\x05"),
	HX_HCSTRING("readDrawEllipse","\x84","\x85","\x26","\x7c"),
	HX_HCSTRING("readDrawPath","\x3f","\xdd","\xf0","\x99"),
	HX_HCSTRING("readDrawRect","\xbe","\x44","\x46","\x9b"),
	HX_HCSTRING("readDrawRoundRect","\xb8","\xea","\x3a","\x90"),
	HX_HCSTRING("readDrawTiles","\xab","\xac","\xae","\x6b"),
	HX_HCSTRING("readDrawTriangles","\xd1","\x6a","\xf8","\x8b"),
	HX_HCSTRING("readEndFill","\x48","\x1b","\xcc","\x78"),
	HX_HCSTRING("readLineBitmapStyle","\x78","\x2c","\x20","\x94"),
	HX_HCSTRING("readLineGradientStyle","\x57","\x78","\x7e","\x00"),
	HX_HCSTRING("readLineStyle","\x67","\x22","\x87","\x5e"),
	HX_HCSTRING("readLineTo","\x85","\x2a","\x1c","\xe6"),
	HX_HCSTRING("readMoveTo","\xe2","\xb6","\x28","\xc6"),
	HX_HCSTRING("readOverrideMatrix","\xa3","\x57","\x3b","\xea"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("skip","\x7f","\x16","\x55","\x4c"),
	HX_HCSTRING("tileSheet","\x91","\x40","\x7b","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandReader_obj::__mClass,"__mClass");
};

#endif

hx::Class DrawCommandReader_obj::__mClass;

void DrawCommandReader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.DrawCommandReader","\x6f","\xd6","\x3c","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawCommandReader_obj >;
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
