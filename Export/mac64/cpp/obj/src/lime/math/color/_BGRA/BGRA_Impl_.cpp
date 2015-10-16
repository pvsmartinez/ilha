#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math_color__BGRA_BGRA_Impl_
#include <lime/math/color/_BGRA/BGRA_Impl_.h>
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
namespace _BGRA{

Void BGRA_Impl__obj::__construct()
{
	return null();
}

//BGRA_Impl__obj::~BGRA_Impl__obj() { }

Dynamic BGRA_Impl__obj::__CreateEmpty() { return  new BGRA_Impl__obj; }
hx::ObjectPtr< BGRA_Impl__obj > BGRA_Impl__obj::__new()
{  hx::ObjectPtr< BGRA_Impl__obj > _result_ = new BGRA_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic BGRA_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BGRA_Impl__obj > _result_ = new BGRA_Impl__obj();
	_result_->__construct();
	return _result_;}

int BGRA_Impl__obj::a16;

Float BGRA_Impl__obj::unmult;

int BGRA_Impl__obj::_new( hx::Null< int >  __o_bgra){
int bgra = __o_bgra.Default(0);
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","_new",0x3d689268,"lime.math.color._BGRA.BGRA_Impl_._new","lime/math/color/BGRA.hx",23,0xb2958ed1)
	HX_STACK_ARG(bgra,"bgra")
{
		HX_STACK_LINE(23)
		int tmp = bgra;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,_new,return )

int BGRA_Impl__obj::create( int b,int g,int r,int a){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","create",0xbd7773c3,"lime.math.color._BGRA.BGRA_Impl_.create","lime/math/color/BGRA.hx",28,0xb2958ed1)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(30)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(30)
		tmp = bgra;
	}
	HX_STACK_LINE(30)
	int bgra = tmp;		HX_STACK_VAR(bgra,"bgra");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int tmp1 = (int(b) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		int tmp2 = (int(tmp1) << int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		int tmp3 = (int(g) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		int tmp5 = (int(tmp2) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		int tmp6 = (int(r) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		int tmp8 = (int(tmp5) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		int tmp9 = (int(a) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(31)
		bgra = tmp10;
	}
	HX_STACK_LINE(32)
	int tmp1 = bgra;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BGRA_Impl__obj,create,return )

Void BGRA_Impl__obj::multiplyAlpha( int this1){
{
		HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","multiplyAlpha",0x7a451cb3,"lime.math.color._BGRA.BGRA_Impl_.multiplyAlpha","lime/math/color/BGRA.hx",37,0xb2958ed1)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(39)
		int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(41)
			this1 = (int)0;
		}
		else{
			HX_STACK_LINE(43)
			int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			bool tmp3 = (tmp2 != (int)255);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			if ((tmp3)){
				HX_STACK_LINE(45)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				{
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView tmp5 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(45)
					::lime::utils::ArrayBufferView this2 = tmp5;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(45)
					{
						HX_STACK_LINE(45)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(45)
						tmp4 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + (((int(this1) & int((int)255))) * (int)4)));
					}
				}
				HX_STACK_LINE(45)
				::lime::math::color::_BGRA::BGRA_Impl__obj::a16 = tmp4;
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					int tmp5 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(46)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(46)
					int tmp7 = ::lime::math::color::_BGRA::BGRA_Impl__obj::a16;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(46)
					int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					int tmp9 = (int(tmp8) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					int tmp12 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					int tmp14 = ::lime::math::color::_BGRA::BGRA_Impl__obj::a16;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(46)
					int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(46)
					int tmp16 = (int(tmp15) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(46)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(46)
					int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(46)
					int tmp19 = (int(tmp11) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(46)
					int tmp20 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(46)
					int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(46)
					int tmp22 = ::lime::math::color::_BGRA::BGRA_Impl__obj::a16;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(46)
					int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(46)
					int tmp24 = (int(tmp23) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(46)
					int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(46)
					int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(46)
					int tmp27 = (int(tmp19) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(46)
					int tmp28 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(46)
					int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(46)
					int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(46)
					this1 = tmp30;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,multiplyAlpha,(void))

Void BGRA_Impl__obj::readUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","readUInt8",0x610e85e1,"lime.math.color._BGRA.BGRA_Impl_.readUInt8","lime/math/color/BGRA.hx",53,0xb2958ed1)
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
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(59)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				int b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(59)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				int g = tmp4;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(59)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				int r = tmp6;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(59)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(59)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(59)
				int a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(59)
				int tmp9 = (int(b) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(59)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(59)
				int tmp11 = (int(g) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(59)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(59)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(59)
				int tmp14 = (int(r) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(59)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(59)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(59)
				int tmp17 = (int(a) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(59)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(59)
				this1 = tmp18;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(63)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(63)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(63)
				int b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(63)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				int g = tmp4;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(63)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				int r = tmp6;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(63)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(63)
				int a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(63)
				int tmp9 = (int(b) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(63)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(63)
				int tmp11 = (int(g) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(63)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(63)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				int tmp14 = (int(r) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(63)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(63)
				int tmp17 = (int(a) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(63)
				this1 = tmp18;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(67)
				int tmp1 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				Dynamic tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(67)
				int b = tmp2;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(67)
				int tmp3 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(67)
				Dynamic tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				int g = tmp4;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(67)
				int tmp5 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				Dynamic tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				int r = tmp6;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(67)
				int tmp7 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				Dynamic tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				int a = tmp8;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(67)
				int tmp9 = (int(b) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				int tmp11 = (int(g) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				int tmp13 = (int(tmp10) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				int tmp14 = (int(r) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(67)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(67)
				int tmp16 = (int(tmp13) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(67)
				int tmp17 = (int(a) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
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
			int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(73)
				int tmp5 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				tmp4 = (tmp6 != (int)255);
			}
			else{
				HX_STACK_LINE(73)
				tmp4 = false;
			}
			HX_STACK_LINE(73)
			if ((tmp4)){
				HX_STACK_LINE(73)
				int tmp5 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				Float tmp6 = (Float(((Float)255.0)) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				::lime::math::color::_BGRA::BGRA_Impl__obj::unmult = tmp6;
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView this2 = tmp8;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp9 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						Float tmp11 = ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						int idx = tmp13;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(73)
						int tmp14 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						tmp7 = (int(tmp14) & int((int)255));
					}
					HX_STACK_LINE(73)
					int b = tmp7;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(73)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp9 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView this2 = tmp9;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp10 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						Float tmp12 = ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(73)
						int idx = tmp14;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(73)
						int tmp15 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(73)
						tmp8 = (int(tmp15) & int((int)255));
					}
					HX_STACK_LINE(73)
					int g = tmp8;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(73)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView tmp10 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						::lime::utils::ArrayBufferView this2 = tmp10;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(73)
						int tmp11 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						Float tmp13 = ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult;		HX_STACK_VAR(tmp13,"tmp13");
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
					int tmp10 = (int(b) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					int tmp12 = (int(g) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					int tmp15 = (int(r) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					int tmp17 = (int(tmp14) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(73)
					int tmp18 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(73)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(73)
					int tmp20 = (int(tmp17) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(73)
					this1 = tmp20;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,readUInt8,(void))

Void BGRA_Impl__obj::set( int this1,int b,int g,int r,int a){
{
		HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","set",0x2f66dc7b,"lime.math.color._BGRA.BGRA_Impl_.set","lime/math/color/BGRA.hx",80,0xb2958ed1)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(82)
		int tmp = (int(b) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		int tmp2 = (int(g) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int tmp4 = (int(tmp1) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		int tmp5 = (int(r) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		int tmp6 = (int(tmp5) << int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		int tmp8 = (int(a) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		this1 = tmp9;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,set,(void))

Void BGRA_Impl__obj::unmultiplyAlpha( int this1){
{
		HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","unmultiplyAlpha",0x71b06afa,"lime.math.color._BGRA.BGRA_Impl_.unmultiplyAlpha","lime/math/color/BGRA.hx",87,0xb2958ed1)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(89)
		int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(89)
			int tmp3 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			tmp2 = (tmp4 != (int)255);
		}
		else{
			HX_STACK_LINE(89)
			tmp2 = false;
		}
		HX_STACK_LINE(89)
		if ((tmp2)){
			HX_STACK_LINE(91)
			int tmp3 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			Float tmp4 = (Float(((Float)255.0)) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::lime::math::color::_BGRA::BGRA_Impl__obj::unmult = tmp4;
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp6 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView this2 = tmp6;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(92)
					int tmp7 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					Float tmp9 = ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					int idx = tmp11;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(92)
					int tmp12 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					tmp5 = (int(tmp12) & int((int)255));
				}
				HX_STACK_LINE(92)
				int b = tmp5;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(92)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp7 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView this2 = tmp7;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(92)
					int tmp8 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					Float tmp10 = ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					int idx = tmp12;		HX_STACK_VAR(idx,"idx");
					HX_STACK_LINE(92)
					int tmp13 = ::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + idx));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					tmp6 = (int(tmp13) & int((int)255));
				}
				HX_STACK_LINE(92)
				int g = tmp6;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(92)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp8 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView this2 = tmp8;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(92)
					int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					Float tmp11 = ::lime::math::color::_BGRA::BGRA_Impl__obj::unmult;		HX_STACK_VAR(tmp11,"tmp11");
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
				int tmp8 = (int(b) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				int tmp10 = (int(g) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(92)
				int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(92)
				int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(92)
				int tmp13 = (int(r) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(92)
				int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(92)
				int tmp15 = (int(tmp12) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(92)
				int tmp16 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(92)
				int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(92)
				this1 = tmp18;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,unmultiplyAlpha,(void))

Void BGRA_Impl__obj::writeUInt8( int this1,::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","writeUInt8",0x9c53c666,"lime.math.color._BGRA.BGRA_Impl_.writeUInt8","lime/math/color/BGRA.hx",99,0xb2958ed1)
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
			int tmp1 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			if ((tmp2)){
				HX_STACK_LINE(103)
				this1 = (int)0;
			}
			else{
				HX_STACK_LINE(103)
				int tmp3 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(103)
				bool tmp4 = (tmp3 != (int)255);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				if ((tmp4)){
					HX_STACK_LINE(103)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView tmp6 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView this2 = tmp6;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(103)
							tmp5 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this2->byteOffset + (((int(this1) & int((int)255))) * (int)4)));
						}
					}
					HX_STACK_LINE(103)
					::lime::math::color::_BGRA::BGRA_Impl__obj::a16 = tmp5;
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						int tmp6 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(103)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(103)
						int tmp8 = ::lime::math::color::_BGRA::BGRA_Impl__obj::a16;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(103)
						int tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(103)
						int tmp10 = (int(tmp9) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(103)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(103)
						int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(103)
						int tmp13 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(103)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(103)
						int tmp15 = ::lime::math::color::_BGRA::BGRA_Impl__obj::a16;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(103)
						int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(103)
						int tmp17 = (int(tmp16) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(103)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(103)
						int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(103)
						int tmp20 = (int(tmp12) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(103)
						int tmp21 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(103)
						int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(103)
						int tmp23 = ::lime::math::color::_BGRA::BGRA_Impl__obj::a16;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(103)
						int tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(103)
						int tmp25 = (int(tmp24) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(103)
						int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(103)
						int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(103)
						int tmp28 = (int(tmp20) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(103)
						int tmp29 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(103)
						int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(103)
						int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(103)
						this1 = tmp31;
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
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(111)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(111)
					int val = tmp3;		HX_STACK_VAR(val,"val");
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
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
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
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
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
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(114)
					int val = tmp2;		HX_STACK_VAR(val,"val");
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
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
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
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
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
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(120)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(120)
					int val = tmp3;		HX_STACK_VAR(val,"val");
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
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(121)
					int val = tmp2;		HX_STACK_VAR(val,"val");
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
					int tmp2 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(125)
					int val = tmp2;		HX_STACK_VAR(val,"val");
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
					int tmp2 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
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
					int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
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
					int tmp2 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(128)
					int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(128)
					int val = tmp3;		HX_STACK_VAR(val,"val");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BGRA_Impl__obj,writeUInt8,(void))

int BGRA_Impl__obj::__fromARGB( int argb){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","__fromARGB",0xba7be71d,"lime.math.color._BGRA.BGRA_Impl_.__fromARGB","lime/math/color/BGRA.hx",135,0xb2958ed1)
	HX_STACK_ARG(argb,"argb")
	HX_STACK_LINE(137)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
			HX_STACK_LINE(137)
			tmp1 = bgra;
		}
		HX_STACK_LINE(137)
		int bgra = tmp1;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int tmp2 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			int tmp4 = (int(tmp3) << int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			int tmp5 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			int tmp8 = (int(tmp7) << int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			int tmp9 = (int(tmp4) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			int tmp10 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(137)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(137)
			int tmp13 = (int(tmp12) << int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			int tmp15 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(137)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(137)
			int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			bgra = tmp18;
		}
		HX_STACK_LINE(137)
		tmp = bgra;
	}
	HX_STACK_LINE(137)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,__fromARGB,return )

int BGRA_Impl__obj::__fromRGBA( int rgba){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","__fromRGBA",0xc5b02a85,"lime.math.color._BGRA.BGRA_Impl_.__fromRGBA","lime/math/color/BGRA.hx",142,0xb2958ed1)
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
			int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
			HX_STACK_LINE(144)
			tmp1 = bgra;
		}
		HX_STACK_LINE(144)
		int bgra = tmp1;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int tmp2 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			int tmp6 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			int tmp11 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(144)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(144)
			int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(144)
			int tmp16 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(144)
			bgra = tmp18;
		}
		HX_STACK_LINE(144)
		tmp = bgra;
	}
	HX_STACK_LINE(144)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,__fromRGBA,return )

int BGRA_Impl__obj::get_a( int this1){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","get_a",0x13648e51,"lime.math.color._BGRA.BGRA_Impl_.get_a","lime/math/color/BGRA.hx",156,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(158)
	int tmp = (int(this1) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_a,return )

int BGRA_Impl__obj::set_a( int this1,int value){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","set_a",0xfc33845d,"lime.math.color._BGRA.BGRA_Impl_.set_a","lime/math/color/BGRA.hx",163,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(165)
		int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(165)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(165)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(165)
		int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(165)
		int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(165)
		int tmp14 = (int(value) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(165)
		int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(165)
		this1 = tmp15;
	}
	HX_STACK_LINE(166)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_a,return )

int BGRA_Impl__obj::get_b( int this1){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","get_b",0x13648e52,"lime.math.color._BGRA.BGRA_Impl_.get_b","lime/math/color/BGRA.hx",171,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(173)
	int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_b,return )

int BGRA_Impl__obj::set_b( int this1,int value){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","set_b",0xfc33845e,"lime.math.color._BGRA.BGRA_Impl_.set_b","lime/math/color/BGRA.hx",178,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		int tmp = (int(value) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		int tmp2 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		int tmp6 = (int(tmp1) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(180)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(180)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(180)
		int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(180)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(180)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(180)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(180)
		this1 = tmp14;
	}
	HX_STACK_LINE(181)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_b,return )

int BGRA_Impl__obj::get_g( int this1){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","get_g",0x13648e57,"lime.math.color._BGRA.BGRA_Impl_.get_g","lime/math/color/BGRA.hx",186,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(188)
	int tmp = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_g,return )

int BGRA_Impl__obj::set_g( int this1,int value){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","set_g",0xfc338463,"lime.math.color._BGRA.BGRA_Impl_.set_g","lime/math/color/BGRA.hx",193,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		int tmp5 = (int(tmp4) << int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		int tmp6 = (int(tmp3) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		int tmp7 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(195)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(195)
		this1 = tmp14;
	}
	HX_STACK_LINE(196)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_g,return )

int BGRA_Impl__obj::get_r( int this1){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","get_r",0x13648e62,"lime.math.color._BGRA.BGRA_Impl_.get_r","lime/math/color/BGRA.hx",201,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(203)
	int tmp = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BGRA_Impl__obj,get_r,return )

int BGRA_Impl__obj::set_r( int this1,int value){
	HX_STACK_FRAME("lime.math.color._BGRA.BGRA_Impl_","set_r",0xfc33846e,"lime.math.color._BGRA.BGRA_Impl_.set_r","lime/math/color/BGRA.hx",208,0xb2958ed1)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		int tmp = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		int tmp9 = (int(value) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		int tmp10 = (int(tmp9) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(210)
		int tmp11 = (int(tmp8) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(210)
		int tmp12 = (int(this1) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(210)
		int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(210)
		int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(210)
		this1 = tmp14;
	}
	HX_STACK_LINE(211)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BGRA_Impl__obj,set_r,return )


BGRA_Impl__obj::BGRA_Impl__obj()
{
}

bool BGRA_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"__fromARGB") ) { outValue = __fromARGB_dyn(); return true;  }
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
	{hx::fsInt,(void *) &BGRA_Impl__obj::a16,HX_HCSTRING("a16","\x86","\xc5","\x49","\x00")},
	{hx::fsFloat,(void *) &BGRA_Impl__obj::unmult,HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(BGRA_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(BGRA_Impl__obj::unmult,"unmult");
};

#endif

hx::Class BGRA_Impl__obj::__mClass;

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
	HX_HCSTRING("__fromARGB","\xd6","\x6a","\x60","\x41"),
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

void BGRA_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math.color._BGRA.BGRA_Impl_","\xc7","\x00","\xea","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BGRA_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BGRA_Impl__obj >;
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
} // end namespace _BGRA
