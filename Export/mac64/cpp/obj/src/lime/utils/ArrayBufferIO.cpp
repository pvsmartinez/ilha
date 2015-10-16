#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
#endif
namespace lime{
namespace utils{

Void ArrayBufferIO_obj::__construct()
{
	return null();
}

//ArrayBufferIO_obj::~ArrayBufferIO_obj() { }

Dynamic ArrayBufferIO_obj::__CreateEmpty() { return  new ArrayBufferIO_obj; }
hx::ObjectPtr< ArrayBufferIO_obj > ArrayBufferIO_obj::__new()
{  hx::ObjectPtr< ArrayBufferIO_obj > _result_ = new ArrayBufferIO_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayBufferIO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferIO_obj > _result_ = new ArrayBufferIO_obj();
	_result_->__construct();
	return _result_;}

int ArrayBufferIO_obj::getInt8( ::haxe::io::Bytes buffer,int byteOffset){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt8",0x658d8b5a,"lime.utils.ArrayBufferIO.getInt8","lime/utils/ArrayBufferView.hx",379,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(382)
	int tmp = ::__hxcpp_memory_get_byte(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getInt8,return )

int ArrayBufferIO_obj::setInt8( ::haxe::io::Bytes buffer,int byteOffset,int value){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt8",0x588f1c66,"lime.utils.ArrayBufferIO.setInt8","lime/utils/ArrayBufferView.hx",391,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(394)
	::__hxcpp_memory_set_byte(buffer->b,byteOffset,value);
	HX_STACK_LINE(401)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setInt8,return )

Dynamic ArrayBufferIO_obj::getUint8( ::haxe::io::Bytes buffer,int byteOffset){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getUint8",0x5bc8ef4d,"lime.utils.ArrayBufferIO.getUint8","lime/utils/ArrayBufferView.hx",406,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_LINE(409)
	int tmp = ::__hxcpp_memory_get_byte(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	Dynamic tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(409)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferIO_obj,getUint8,return )

int ArrayBufferIO_obj::setUint8Clamped( ::haxe::io::Bytes buffer,int byteOffset,int value){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint8Clamped",0xa8a3a959,"lime.utils.ArrayBufferIO.setUint8Clamped","lime/utils/ArrayBufferView.hx",417,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(419)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	{
		HX_STACK_LINE(419)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				int _int = value;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(419)
				bool tmp3 = (_int < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(419)
				if ((tmp3)){
					HX_STACK_LINE(419)
					tmp2 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(419)
					tmp2 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(419)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			int _out = tmp3;		HX_STACK_VAR(_out,"_out");
			HX_STACK_LINE(419)
			bool tmp4 = (_out > (int)255);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			if ((tmp4)){
				HX_STACK_LINE(419)
				tmp5 = (int)255;
			}
			else{
				HX_STACK_LINE(419)
				tmp5 = _out;
			}
			HX_STACK_LINE(419)
			_out = tmp5;
			HX_STACK_LINE(419)
			bool tmp6 = (_out < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			if ((tmp6)){
				HX_STACK_LINE(419)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(419)
				tmp1 = _out;
			}
		}
		HX_STACK_LINE(419)
		int value1 = tmp1;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(419)
		::__hxcpp_memory_set_byte(buffer->b,byteOffset,value1);
		HX_STACK_LINE(419)
		tmp = value1;
	}
	HX_STACK_LINE(419)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setUint8Clamped,return )

int ArrayBufferIO_obj::setUint8( ::haxe::io::Bytes buffer,int byteOffset,int value){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint8",0x0a2648c1,"lime.utils.ArrayBufferIO.setUint8","lime/utils/ArrayBufferView.hx",424,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(427)
	::__hxcpp_memory_set_byte(buffer->b,byteOffset,value);
	HX_STACK_LINE(432)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,setUint8,return )

int ArrayBufferIO_obj::getInt16( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt16",0x764c5d83,"lime.utils.ArrayBufferIO.getInt16","lime/utils/ArrayBufferView.hx",436,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(439)
		int tmp = ::__hxcpp_memory_get_i16(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getInt16,return )

int ArrayBufferIO_obj::setInt16( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt16",0x24a9b6f7,"lime.utils.ArrayBufferIO.setInt16","lime/utils/ArrayBufferView.hx",456,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(459)
		::__hxcpp_memory_set_i16(buffer->b,byteOffset,value);
		HX_STACK_LINE(480)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(480)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setInt16,return )

Dynamic ArrayBufferIO_obj::getUint16( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getUint16",0xf4086e30,"lime.utils.ArrayBufferIO.getUint16","lime/utils/ArrayBufferView.hx",485,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(488)
		int tmp = ::__hxcpp_memory_get_ui16(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		int tmp1 = (int(tmp) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getUint16,return )

int ArrayBufferIO_obj::setUint16( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint16",0xd7595a3c,"lime.utils.ArrayBufferIO.setUint16","lime/utils/ArrayBufferView.hx",504,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(507)
		::__hxcpp_memory_set_ui16(buffer->b,byteOffset,value);
		HX_STACK_LINE(512)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setUint16,return )

int ArrayBufferIO_obj::getInt32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getInt32",0x764c5f3d,"lime.utils.ArrayBufferIO.getInt32","lime/utils/ArrayBufferView.hx",517,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(520)
		int tmp = ::__hxcpp_memory_get_i32(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(520)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getInt32,return )

int ArrayBufferIO_obj::setInt32( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setInt32",0x24a9b8b1,"lime.utils.ArrayBufferIO.setInt32","lime/utils/ArrayBufferView.hx",542,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(545)
		::__hxcpp_memory_set_i32(buffer->b,byteOffset,value);
		HX_STACK_LINE(564)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setInt32,return )

Dynamic ArrayBufferIO_obj::getUint32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getUint32",0xf4086fea,"lime.utils.ArrayBufferIO.getUint32","lime/utils/ArrayBufferView.hx",569,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(572)
		Dynamic tmp = ::__hxcpp_memory_get_ui32(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(572)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getUint32,return )

int ArrayBufferIO_obj::setUint32( ::haxe::io::Bytes buffer,int byteOffset,int value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setUint32",0xd7595bf6,"lime.utils.ArrayBufferIO.setUint32","lime/utils/ArrayBufferView.hx",580,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(583)
		::__hxcpp_memory_set_ui32(buffer->b,byteOffset,value);
		HX_STACK_LINE(588)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setUint32,return )

Float ArrayBufferIO_obj::getFloat32( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getFloat32",0xddb276ea,"lime.utils.ArrayBufferIO.getFloat32","lime/utils/ArrayBufferView.hx",593,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(596)
		Float tmp = ::__hxcpp_memory_get_float(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(596)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getFloat32,return )

Float ArrayBufferIO_obj::setFloat32( ::haxe::io::Bytes buffer,int byteOffset,Float value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setFloat32",0xe130155e,"lime.utils.ArrayBufferIO.setFloat32","lime/utils/ArrayBufferView.hx",604,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(607)
		::__hxcpp_memory_set_float(buffer->b,byteOffset,value);
		HX_STACK_LINE(612)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(612)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setFloat32,return )

Float ArrayBufferIO_obj::getFloat64( ::haxe::io::Bytes buffer,int byteOffset,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","getFloat64",0xddb27989,"lime.utils.ArrayBufferIO.getFloat64","lime/utils/ArrayBufferView.hx",617,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(620)
		Float tmp = ::__hxcpp_memory_get_double(buffer->b,byteOffset);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayBufferIO_obj,getFloat64,return )

Float ArrayBufferIO_obj::setFloat64( ::haxe::io::Bytes buffer,int byteOffset,Float value,hx::Null< bool >  __o_littleEndian){
bool littleEndian = __o_littleEndian.Default(true);
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","setFloat64",0xe13017fd,"lime.utils.ArrayBufferIO.setFloat64","lime/utils/ArrayBufferView.hx",628,0xb543acf8)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(littleEndian,"littleEndian")
{
		HX_STACK_LINE(631)
		::__hxcpp_memory_set_double(buffer->b,byteOffset,value);
		HX_STACK_LINE(636)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(636)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayBufferIO_obj,setFloat64,return )

int ArrayBufferIO_obj::_clamp( Float _in){
	HX_STACK_FRAME("lime.utils.ArrayBufferIO","_clamp",0xd1cc2361,"lime.utils.ArrayBufferIO._clamp","lime/utils/ArrayBufferView.hx",644,0xb543acf8)
	HX_STACK_ARG(_in,"_in")
	HX_STACK_LINE(646)
	Float tmp = _in;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(646)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(646)
	int _out = tmp1;		HX_STACK_VAR(_out,"_out");
	HX_STACK_LINE(647)
	bool tmp2 = (_out > (int)255);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(647)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(647)
	if ((tmp2)){
		HX_STACK_LINE(647)
		tmp3 = (int)255;
	}
	else{
		HX_STACK_LINE(647)
		tmp3 = _out;
	}
	HX_STACK_LINE(647)
	_out = tmp3;
	HX_STACK_LINE(648)
	bool tmp4 = (_out < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(648)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(648)
	if ((tmp4)){
		HX_STACK_LINE(648)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(648)
		tmp5 = _out;
	}
	HX_STACK_LINE(648)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferIO_obj,_clamp,return )


ArrayBufferIO_obj::ArrayBufferIO_obj()
{
}

bool ArrayBufferIO_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_clamp") ) { outValue = _clamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { outValue = getInt8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt8") ) { outValue = setInt8_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getUint8") ) { outValue = getUint8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setUint8") ) { outValue = setUint8_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInt16") ) { outValue = getInt16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt16") ) { outValue = setInt16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInt32") ) { outValue = getInt32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setInt32") ) { outValue = setInt32_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getUint16") ) { outValue = getUint16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setUint16") ) { outValue = setUint16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUint32") ) { outValue = getUint32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setUint32") ) { outValue = setUint32_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFloat32") ) { outValue = getFloat32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { outValue = setFloat32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFloat64") ) { outValue = getFloat64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat64") ) { outValue = setFloat64_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setUint8Clamped") ) { outValue = setUint8Clamped_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferIO_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferIO_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getInt8","\x1f","\xf4","\x3d","\x18"),
	HX_HCSTRING("setInt8","\x2b","\x85","\x3f","\x0b"),
	HX_HCSTRING("getUint8","\xe8","\x32","\x74","\x03"),
	HX_HCSTRING("setUint8Clamped","\x1e","\xdf","\xc1","\xf1"),
	HX_HCSTRING("setUint8","\x5c","\x8c","\xd1","\xb1"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("getUint16","\x35","\x52","\x38","\x02"),
	HX_HCSTRING("setUint16","\x41","\x3e","\x89","\xe5"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("getUint32","\xef","\x53","\x38","\x02"),
	HX_HCSTRING("setUint32","\xfb","\x3f","\x89","\xe5"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("getFloat64","\xe4","\x19","\x6a","\x39"),
	HX_HCSTRING("setFloat64","\x58","\xb8","\xe7","\x3c"),
	HX_HCSTRING("_clamp","\x3c","\xba","\x3f","\x44"),
	::String(null()) };

void ArrayBufferIO_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ArrayBufferIO","\xa9","\xc4","\x7c","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferIO_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferIO_obj >;
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
} // end namespace utils
