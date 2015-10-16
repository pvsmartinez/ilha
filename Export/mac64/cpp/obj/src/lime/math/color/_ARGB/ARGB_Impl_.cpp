#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_color__ARGB_ARGB_Impl_
#include <lime/math/color/_ARGB/ARGB_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace math{
namespace color{
namespace _ARGB{

Void ARGB_Impl__obj::__construct()
{
	return null();
}

//ARGB_Impl__obj::~ARGB_Impl__obj() { }

Dynamic ARGB_Impl__obj::__CreateEmpty() { return  new ARGB_Impl__obj; }
hx::ObjectPtr< ARGB_Impl__obj > ARGB_Impl__obj::__new()
{  hx::ObjectPtr< ARGB_Impl__obj > _result_ = new ARGB_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ARGB_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ARGB_Impl__obj > _result_ = new ARGB_Impl__obj();
	_result_->__construct();
	return _result_;}

int ARGB_Impl__obj::a16;

Float ARGB_Impl__obj::unmult;

int ARGB_Impl__obj::_new( hx::Null< int >  __o_argb){
int argb = __o_argb.Default(0);
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","_new",0xd22d5968,"lime.math.color._ARGB.ARGB_Impl_._new","lime/math/color/ARGB.hx",23,0x9a2de539)
	HX_STACK_ARG(argb,"argb")
{
		HX_STACK_LINE(23)
		int tmp = argb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,_new,return )

int ARGB_Impl__obj::create( int a,int r,int g,int b){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","create",0xa23bfac3,"lime.math.color._ARGB.ARGB_Impl_.create","lime/math/color/ARGB.hx",28,0x9a2de539)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(30)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int argb = (int)0;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(30)
		tmp = argb;
	}
	HX_STACK_LINE(30)
	int argb = tmp;		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int tmp1 = (int(a) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		int tmp3 = (int(r) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		int tmp5 = (int(tmp2) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		int tmp6 = (int(g) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		int tmp8 = (int(tmp5) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		int tmp9 = (int(b) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		argb = tmp10;
	}
	HX_STACK_LINE(32)
	int tmp1 = argb;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ARGB_Impl__obj,create,return )

Void ARGB_Impl__obj::multiplyAlpha( int this1){
{
		HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","multiplyAlpha",0x102f75b3,"lime.math.color._ARGB.ARGB_Impl_.multiplyAlpha","lime/math/color/ARGB.hx",37,0x9a2de539)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(39)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		if ((tmp2)){
			HX_STACK_LINE(41)
			this1 = (int)0;
		}
		else{
			HX_STACK_LINE(43)
			int tmp3 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			bool tmp5 = (tmp4 != (int)255);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			if ((tmp5)){
				HX_STACK_LINE(45)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView tmp7 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView this2 = tmp7;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(45)
						tmp6 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + (((int((int(this1) >> int((int)24))) & int((int)255))) * (int)4)));
					}
				}
				HX_STACK_LINE(45)
				::lime::math::color::_ARGB::ARGB_Impl__obj::a16 = tmp6;
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					int tmp7 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					int tmp11 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					int tmp13 = ::lime::math::color::_ARGB::ARGB_Impl__obj::a16;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					int tmp15 = (int(tmp14) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(46)
					int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(46)
					int tmp18 = (int(tmp10) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(46)
					int tmp19 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(46)
					int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(46)
					int tmp21 = ::lime::math::color::_ARGB::ARGB_Impl__obj::a16;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(46)
					int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(46)
					int tmp23 = (int(tmp22) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(46)
					int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(46)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(46)
					int tmp26 = (int(tmp18) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(46)
					int tmp27 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(46)
					int tmp28 = ::lime::math::color::_ARGB::ARGB_Impl__obj::a16;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(46)
					int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(46)
					int tmp30 = (int(tmp29) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(46)
					int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(46)
					int tmp32 = (int(tmp26) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(46)
					this1 = tmp32;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,multiplyAlpha,(void))

Void ARGB_Impl__obj::readUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","readUInt8",0x0a985ee1,"lime.math.color._ARGB.ARGB_Impl_.readUInt8","lime/math/color/ARGB.hx",53,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(premultiplied,"premultiplied")
{
		HX_STACK_LINE(55)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		switch( (int)(tmp)){
			case (int)2: {
				HX_STACK_LINE(59)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(59)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				int a = tmp2;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(59)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				int r = tmp4;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(59)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				int g = tmp6;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(59)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				int b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(59)
				int tmp9 = (int(a) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(59)
				int tmp11 = (int(r) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(59)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(59)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(59)
				int tmp14 = (int(g) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(59)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(59)
				int tmp17 = (int(b) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(59)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(59)
				this1 = tmp18;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(63)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(63)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				int a = tmp2;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(63)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				int r = tmp4;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(63)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				int g = tmp6;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(63)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(63)
				int b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(63)
				int tmp9 = (int(a) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(63)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(63)
				int tmp11 = (int(r) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(63)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				int tmp14 = (int(g) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(63)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(63)
				int tmp17 = (int(b) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(63)
				this1 = tmp18;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(67)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				int a = tmp2;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(67)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				int r = tmp4;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(67)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				int g = tmp6;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(67)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				int b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(67)
				int tmp9 = (int(a) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				int tmp11 = (int(r) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				int tmp14 = (int(g) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(67)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(67)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(67)
				int tmp17 = (int(b) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(67)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(67)
				this1 = tmp18;
			}
			;break;
		}
		HX_STACK_LINE(71)
		bool tmp1 = premultiplied;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(73)
			int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			if ((tmp4)){
				HX_STACK_LINE(73)
				int tmp6 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				tmp5 = (tmp9 != (int)255);
			}
			else{
				HX_STACK_LINE(73)
				tmp5 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp5)){
				HX_STACK_LINE(73)
				int tmp6 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				Float tmp8 = (Float(((Float)255.0)) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				::lime::math::color::_ARGB::ARGB_Impl__obj::unmult = tmp8;
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp10 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView this2 = tmp10;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp11 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						Float tmp13 = ::lime::math::color::_ARGB::ARGB_Impl__obj::unmult;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						int idx = tmp15;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(73)
						int tmp16 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						tmp9 = (int(tmp16) & int((int)255));
					}
					HX_STACK_LINE(73)
					int r = tmp9;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(73)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp11 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView this2 = tmp11;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp12 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						Float tmp14 = ::lime::math::color::_ARGB::ARGB_Impl__obj::unmult;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						int idx = tmp16;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(73)
						int tmp17 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(73)
						tmp10 = (int(tmp17) & int((int)255));
					}
					HX_STACK_LINE(73)
					int g = tmp10;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(73)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp12 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView this2 = tmp12;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp13 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						Float tmp14 = ::lime::math::color::_ARGB::ARGB_Impl__obj::unmult;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(73)
						int idx = tmp16;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(73)
						int tmp17 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(73)
						tmp11 = (int(tmp17) & int((int)255));
					}
					HX_STACK_LINE(73)
					int b = tmp11;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(73)
					int tmp12 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					int tmp16 = (int(r) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(73)
					int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(73)
					int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(73)
					int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(73)
					int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(73)
					int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(73)
					this1 = tmp23;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ARGB_Impl__obj,readUInt8,(void))

Void ARGB_Impl__obj::set( int this1,int a,int r,int g,int b){
{
		HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","set",0x0597f57b,"lime.math.color._ARGB.ARGB_Impl_.set","lime/math/color/ARGB.hx",80,0x9a2de539)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(82)
		int tmp = (int(a) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		int tmp2 = (int(r) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int tmp4 = (int(tmp1) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		int tmp5 = (int(g) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		int tmp6 = (int(tmp5) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		int tmp8 = (int(b) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		this1 = tmp9;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ARGB_Impl__obj,set,(void))

Void ARGB_Impl__obj::unmultiplyAlpha( int this1){
{
		HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","unmultiplyAlpha",0x19a303fa,"lime.math.color._ARGB.ARGB_Impl_.unmultiplyAlpha","lime/math/color/ARGB.hx",87,0x9a2de539)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(89)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(89)
			int tmp4 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			tmp3 = (tmp7 != (int)255);
		}
		else{
			HX_STACK_LINE(89)
			tmp3 = false;
		}
		HX_STACK_LINE(89)
		if ((tmp3)){
			HX_STACK_LINE(91)
			int tmp4 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			Float tmp6 = (Float(((Float)255.0)) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::lime::math::color::_ARGB::ARGB_Impl__obj::unmult = tmp6;
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView this2 = tmp8;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(92)
					int tmp9 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					Float tmp11 = ::lime::math::color::_ARGB::ARGB_Impl__obj::unmult;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					int idx = tmp13;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(92)
					int tmp14 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(92)
					tmp7 = (int(tmp14) & int((int)255));
				}
				HX_STACK_LINE(92)
				int r = tmp7;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(92)
				Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp9 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView this2 = tmp9;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(92)
					int tmp10 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					Float tmp12 = ::lime::math::color::_ARGB::ARGB_Impl__obj::unmult;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(92)
					int idx = tmp14;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(92)
					int tmp15 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(92)
					tmp8 = (int(tmp15) & int((int)255));
				}
				HX_STACK_LINE(92)
				int g = tmp8;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(92)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp10 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView this2 = tmp10;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(92)
					int tmp11 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					Float tmp12 = ::lime::math::color::_ARGB::ARGB_Impl__obj::unmult;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(92)
					int idx = tmp14;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(92)
					int tmp15 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(92)
					tmp9 = (int(tmp15) & int((int)255));
				}
				HX_STACK_LINE(92)
				int b = tmp9;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(92)
				int tmp10 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(92)
				int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(92)
				int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(92)
				int tmp13 = (int(tmp12) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(92)
				int tmp14 = (int(r) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(92)
				int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(92)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(92)
				int tmp17 = (int(g) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(92)
				int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(92)
				int tmp20 = (int(b) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(92)
				int tmp21 = (int(tmp19) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(92)
				this1 = tmp21;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,unmultiplyAlpha,(void))

Void ARGB_Impl__obj::writeUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","writeUInt8",0x4b67cd66,"lime.math.color._ARGB.ARGB_Impl_.writeUInt8","lime/math/color/ARGB.hx",99,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(premultiplied,"premultiplied")
{
		HX_STACK_LINE(101)
		bool tmp = premultiplied;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		if ((tmp)){
			HX_STACK_LINE(103)
			int tmp1 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			if ((tmp3)){
				HX_STACK_LINE(103)
				this1 = (int)0;
			}
			else{
				HX_STACK_LINE(103)
				int tmp4 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				bool tmp6 = (tmp5 != (int)255);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(103)
				if ((tmp6)){
					HX_STACK_LINE(103)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView this2 = tmp8;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(103)
							tmp7 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + (((int((int(this1) >> int((int)24))) & int((int)255))) * (int)4)));
						}
					}
					HX_STACK_LINE(103)
					::lime::math::color::_ARGB::ARGB_Impl__obj::a16 = tmp7;
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						int tmp8 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(103)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(103)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(103)
						int tmp12 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(103)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(103)
						int tmp14 = ::lime::math::color::_ARGB::ARGB_Impl__obj::a16;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(103)
						int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(103)
						int tmp16 = (int(tmp15) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(103)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(103)
						int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(103)
						int tmp19 = (int(tmp11) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(103)
						int tmp20 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(103)
						int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(103)
						int tmp22 = ::lime::math::color::_ARGB::ARGB_Impl__obj::a16;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(103)
						int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(103)
						int tmp24 = (int(tmp23) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(103)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(103)
						int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(103)
						int tmp27 = (int(tmp19) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(103)
						int tmp28 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(103)
						int tmp29 = ::lime::math::color::_ARGB::ARGB_Impl__obj::a16;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(103)
						int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(103)
						int tmp31 = (int(tmp30) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(103)
						int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(103)
						int tmp33 = (int(tmp27) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(103)
						this1 = tmp33;
					}
				}
			}
		}
		HX_STACK_LINE(107)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		switch( (int)(tmp1)){
			case (int)2: {
				HX_STACK_LINE(111)
				{
					HX_STACK_LINE(111)
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(111)
					int val = tmp2;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(111)
						val;
					}
				}
				HX_STACK_LINE(112)
				{
					HX_STACK_LINE(112)
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(112)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(112)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(112)
						val;
					}
				}
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(113)
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(113)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(113)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(113)
					{
						HX_STACK_LINE(113)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(113)
						val;
					}
				}
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(114)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(114)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(114)
					{
						HX_STACK_LINE(114)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(114)
						val;
					}
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(118)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(118)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(118)
					{
						HX_STACK_LINE(118)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(118)
						val;
					}
				}
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(119)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(119)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(119)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(119)
						val;
					}
				}
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(120)
					int val = tmp2;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(120)
						val;
					}
				}
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(121)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(121)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(121)
						val;
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(125)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(125)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
						HX_STACK_LINE(125)
						val;
					}
				}
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(126)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(126)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
						HX_STACK_LINE(126)
						val;
					}
				}
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(127)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(127)
					int val = tmp3;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
						HX_STACK_LINE(127)
						val;
					}
				}
				HX_STACK_LINE(128)
				{
					HX_STACK_LINE(128)
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(128)
					int val = tmp2;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
						HX_STACK_LINE(128)
						val;
					}
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ARGB_Impl__obj,writeUInt8,(void))

int ARGB_Impl__obj::__fromBGRA( int bgra){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","__fromBGRA",0x6a30d585,"lime.math.color._ARGB.ARGB_Impl_.__fromBGRA","lime/math/color/ARGB.hx",135,0x9a2de539)
	HX_STACK_ARG(bgra,"bgra")
	HX_STACK_LINE(137)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int argb = (int)0;		HX_STACK_VAR(argb,"argb");
			HX_STACK_LINE(137)
			tmp1 = argb;
		}
		HX_STACK_LINE(137)
		int argb = tmp1;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int tmp2 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			int tmp5 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			int tmp9 = (int(tmp4) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			int tmp10 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(137)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(137)
			int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			int tmp15 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(137)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(137)
			int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			argb = tmp18;
		}
		HX_STACK_LINE(137)
		tmp = argb;
	}
	HX_STACK_LINE(137)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,__fromBGRA,return )

int ARGB_Impl__obj::__fromRGBA( int rgba){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","__fromRGBA",0x74c43185,"lime.math.color._ARGB.ARGB_Impl_.__fromRGBA","lime/math/color/ARGB.hx",142,0x9a2de539)
	HX_STACK_ARG(rgba,"rgba")
	HX_STACK_LINE(144)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int argb = (int)0;		HX_STACK_VAR(argb,"argb");
			HX_STACK_LINE(144)
			tmp1 = argb;
		}
		HX_STACK_LINE(144)
		int argb = tmp1;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int tmp2 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			int tmp5 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			int tmp9 = (int(tmp4) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			int tmp10 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(144)
			int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			int tmp15 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(144)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(144)
			argb = tmp18;
		}
		HX_STACK_LINE(144)
		tmp = argb;
	}
	HX_STACK_LINE(144)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,__fromRGBA,return )

int ARGB_Impl__obj::get_a( int this1){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","get_a",0xaacde751,"lime.math.color._ARGB.ARGB_Impl_.get_a","lime/math/color/ARGB.hx",156,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(158)
	int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_a,return )

int ARGB_Impl__obj::set_a( int this1,int value){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","set_a",0x939cdd5d,"lime.math.color._ARGB.ARGB_Impl_.set_a","lime/math/color/ARGB.hx",164,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		int tmp = (int(value) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		int tmp6 = (int(tmp1) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(166)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(166)
		int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(166)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(166)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(166)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(166)
		this1 = tmp14;
	}
	HX_STACK_LINE(167)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_a,return )

int ARGB_Impl__obj::get_b( int this1){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","get_b",0xaacde752,"lime.math.color._ARGB.ARGB_Impl_.get_b","lime/math/color/ARGB.hx",172,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(174)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_b,return )

int ARGB_Impl__obj::set_b( int this1,int value){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","set_b",0x939cdd5e,"lime.math.color._ARGB.ARGB_Impl_.set_b","lime/math/color/ARGB.hx",179,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(181)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(181)
		int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(181)
		int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(181)
		int tmp14 = (int(value) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(181)
		int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(181)
		this1 = tmp15;
	}
	HX_STACK_LINE(182)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_b,return )

int ARGB_Impl__obj::get_g( int this1){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","get_g",0xaacde757,"lime.math.color._ARGB.ARGB_Impl_.get_g","lime/math/color/ARGB.hx",187,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(189)
	int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_g,return )

int ARGB_Impl__obj::set_g( int this1,int value){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","set_g",0x939cdd63,"lime.math.color._ARGB.ARGB_Impl_.set_g","lime/math/color/ARGB.hx",194,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		int tmp9 = (int(value) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		int tmp11 = (int(tmp8) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(196)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(196)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(196)
		this1 = tmp14;
	}
	HX_STACK_LINE(197)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_g,return )

int ARGB_Impl__obj::get_r( int this1){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","get_r",0xaacde762,"lime.math.color._ARGB.ARGB_Impl_.get_r","lime/math/color/ARGB.hx",202,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(204)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ARGB_Impl__obj,get_r,return )

int ARGB_Impl__obj::set_r( int this1,int value){
	HX_STACK_FRAME("lime.math.color._ARGB.ARGB_Impl_","set_r",0x939cdd6e,"lime.math.color._ARGB.ARGB_Impl_.set_r","lime/math/color/ARGB.hx",209,0x9a2de539)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	{
		HX_STACK_LINE(211)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		int tmp6 = (int(tmp3) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(211)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(211)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(211)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(211)
		this1 = tmp14;
	}
	HX_STACK_LINE(212)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ARGB_Impl__obj,set_r,return )


ARGB_Impl__obj::ARGB_Impl__obj()
{
}

bool ARGB_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__fromBGRA") ) { outValue = __fromBGRA_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__fromRGBA") ) { outValue = __fromRGBA_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ARGB_Impl__obj::a16,HX_HCSTRING("a16","\x86","\xc5","\x49","\x00")},
	{hx::fsFloat,(void *) &ARGB_Impl__obj::unmult,HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ARGB_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ARGB_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(ARGB_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ARGB_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ARGB_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(ARGB_Impl__obj::unmult,"unmult");
};

#endif

hx::Class ARGB_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("a16","\x86","\xc5","\x49","\x00"),
	HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("readUInt8","\x48","\x9c","\x5d","\x5f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("writeUInt8","\x1f","\x4a","\x38","\x23"),
	HX_HCSTRING("__fromBGRA","\x3e","\x52","\x01","\x42"),
	HX_HCSTRING("__fromRGBA","\x3e","\xae","\x94","\x4c"),
	HX_HCSTRING("get_a","\x38","\xa5","\x60","\x91"),
	HX_HCSTRING("set_a","\x44","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_b","\x39","\xa5","\x60","\x91"),
	HX_HCSTRING("set_b","\x45","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_g","\x3e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_g","\x4a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_r","\x49","\xa5","\x60","\x91"),
	HX_HCSTRING("set_r","\x55","\x9b","\x2f","\x7a"),
	::String(null()) };

void ARGB_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.color._ARGB.ARGB_Impl_","\xc7","\x99","\x5a","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ARGB_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ARGB_Impl__obj >;
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

} // end namespace lime
} // end namespace math
} // end namespace color
} // end namespace _ARGB
