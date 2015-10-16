#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_LZMA
#include <lime/utils/LZMA.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace lime{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("lime.utils.ByteArray","new",0x0dbc8bed,"lime.utils.ByteArray.new","lime/utils/ByteArray.hx",38,0x2063a1e5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(50)
	this->littleEndian = false;
	HX_STACK_LINE(49)
	this->allocated = (int)0;
	HX_STACK_LINE(47)
	this->position = (int)0;
	HX_STACK_LINE(68)
	this->length = (int)0;
	HX_STACK_LINE(69)
	bool tmp = (size > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	if ((tmp)){
		HX_STACK_LINE(76)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(78)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		data->__SetSizeExact(tmp1);
		HX_STACK_LINE(82)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		super::__construct(tmp2,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(__o_size);
	return _result_;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	if (inType==typeid( ::lime::utils::IDataInput_obj)) return operator ::lime::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArray_obj::operator ::lime::utils::IMemoryRange_obj *()
	{ return new ::lime::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::lime::utils::IDataInput_obj *()
	{ return new ::lime::utils::IDataInput_delegate_< ByteArray_obj >(this); }
::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","asString",0x166978b6,"lime.utils.ByteArray.asString","lime/utils/ByteArray.hx",92,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","checkData",0xb6bc825f,"lime.utils.ByteArray.checkData","lime/utils/ByteArray.hx",101,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(103)
		int tmp = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		if ((tmp4)){
			HX_STACK_LINE(105)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","clear",0x0e13ea5a,"lime.utils.ByteArray.clear","lime/utils/ByteArray.hx",113,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->length = (int)0;
		HX_STACK_LINE(116)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","compress",0xfa228cf5,"lime.utils.ByteArray.compress","lime/utils/ByteArray.hx",121,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(127)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(130)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		if ((tmp)){
			HX_STACK_LINE(132)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(136)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(138)
		bool tmp1 = (algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(140)
			::lime::utils::ByteArray tmp2 = src;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			::lime::utils::ByteArray tmp3 = ::lime::utils::ByteArray_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			::lime::utils::ByteArray tmp4 = ::lime::utils::LZMA_obj::encode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			result = ((::haxe::io::Bytes)(tmp4));
		}
		else{
			HX_STACK_LINE(144)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			if ((tmp2)){
				HX_STACK_LINE(144)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(146)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(147)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(148)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(148)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(144)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(155)
			::lime::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Compress_obj::run(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			result = tmp5;
		}
		HX_STACK_LINE(160)
		this->b = result->b;
		HX_STACK_LINE(161)
		this->length = result->length;
		HX_STACK_LINE(162)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		this->position = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","deflate",0xa25c1178,"lime.utils.ByteArray.deflate","lime/utils/ByteArray.hx",173,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		this->compress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("lime.utils.ByteArray","ensureElem",0x67e83180,"lime.utils.ByteArray.ensureElem","lime/utils/ByteArray.hx",179,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(181)
		int tmp = (size + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		int len = tmp;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(194)
		bool tmp1 = (this->b == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		if ((tmp1)){
			HX_STACK_LINE(195)
			this->b = Array_obj< unsigned char >::__new();
		}
		HX_STACK_LINE(197)
		int tmp2 = this->b->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		if ((tmp4)){
			HX_STACK_LINE(199)
			int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			this->b->__SetSize(tmp5);
		}
		HX_STACK_LINE(204)
		bool tmp5 = updateLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		if ((tmp5)){
			HX_STACK_LINE(204)
			int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			int tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			tmp6 = (tmp8 < tmp9);
		}
		else{
			HX_STACK_LINE(204)
			tmp6 = false;
		}
		HX_STACK_LINE(204)
		if ((tmp6)){
			HX_STACK_LINE(206)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getLength",0x3bd78169,"lime.utils.ByteArray.getLength","lime/utils/ByteArray.hx",233,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::lime::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getByteBuffer",0x574d302b,"lime.utils.ByteArray.getByteBuffer","lime/utils/ByteArray.hx",234,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getStart",0x5a45c93f,"lime.utils.ByteArray.getStart","lime/utils/ByteArray.hx",235,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","inflate",0x0b7da294,"lime.utils.ByteArray.inflate","lime/utils/ByteArray.hx",241,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		this->uncompress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readBoolean",0x0cfd0e7f,"lime.utils.ByteArray.readBoolean","lime/utils/ByteArray.hx",246,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	if ((tmp2)){
		HX_STACK_LINE(251)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		{
			HX_STACK_LINE(251)
			int tmp5 = (this->position)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			int pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(251)
			tmp4 = this->b->__get(pos);
		}
		HX_STACK_LINE(251)
		tmp3 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(251)
		int tmp4 = this->ThrowEOFi();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		tmp3 = (tmp4 != (int)0);
	}
	HX_STACK_LINE(251)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readByte",0xdf7e3ed1,"lime.utils.ByteArray.readByte","lime/utils/ByteArray.hx",257,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(263)
	if ((tmp2)){
		HX_STACK_LINE(263)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(263)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(263)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(263)
	int val = tmp3;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(264)
	int tmp4 = (int(val) & int((int)128));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(264)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(264)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(264)
	if ((tmp5)){
		HX_STACK_LINE(264)
		tmp6 = (val - (int)256);
	}
	else{
		HX_STACK_LINE(264)
		tmp6 = val;
	}
	HX_STACK_LINE(264)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","readBytes",0xaef8b882,"lime.utils.ByteArray.readBytes","lime/utils/ByteArray.hx",270,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(292)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		if ((tmp)){
			HX_STACK_LINE(292)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(292)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(292)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(292)
			length = tmp3;
		}
		HX_STACK_LINE(293)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(293)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		if ((tmp5)){
			HX_STACK_LINE(293)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(295)
		int tmp6 = bytes->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(295)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(295)
		if ((tmp8)){
			HX_STACK_LINE(297)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			bytes->ensureElem(tmp10,true);
		}
		HX_STACK_LINE(304)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(305)
		Array< unsigned char > b2 = bytes->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(306)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(306)
		int p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			while((true)){
				HX_STACK_LINE(307)
				bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(307)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(307)
				if ((tmp11)){
					HX_STACK_LINE(307)
					break;
				}
				HX_STACK_LINE(307)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(307)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(307)
				int tmp13 = (offset + i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(307)
				int tmp14 = (p + i);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(307)
				unsigned char tmp15 = b1->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(307)
				b2[tmp13] = tmp15;
			}
		}
		HX_STACK_LINE(310)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readDouble",0x76048f1a,"lime.utils.ByteArray.readDouble","lime/utils/ByteArray.hx",317,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(324)
	if ((tmp3)){
		HX_STACK_LINE(324)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(325)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(326)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	{
		HX_STACK_LINE(326)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		int tmp6 = (tmp5 - (int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(326)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(326)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(326)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(326)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(326)
		if ((tmp8)){
			HX_STACK_LINE(326)
			int tmp10 = (pos + (int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(326)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(326)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(326)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(326)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(326)
			tmp9 = true;
		}
		HX_STACK_LINE(326)
		if ((tmp9)){
			HX_STACK_LINE(326)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(326)
		tmp4 = ::__hxcpp_memory_get_double(this->b,pos);
	}
	HX_STACK_LINE(326)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readFloat",0xf3f775b3,"lime.utils.ByteArray.readFloat","lime/utils/ByteArray.hx",343,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	if ((tmp3)){
		HX_STACK_LINE(350)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(351)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(352)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(352)
		int tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(352)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(352)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(352)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(352)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(352)
		if ((tmp8)){
			HX_STACK_LINE(352)
			int tmp10 = (pos + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(352)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(352)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(352)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(352)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(352)
			tmp9 = true;
		}
		HX_STACK_LINE(352)
		if ((tmp9)){
			HX_STACK_LINE(352)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(352)
		tmp4 = ::__hxcpp_memory_get_float(this->b,pos);
	}
	HX_STACK_LINE(352)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readInt",0x022bb946,"lime.utils.ByteArray.readInt","lime/utils/ByteArray.hx",358,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(365)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(365)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(365)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(365)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(365)
	if ((tmp2)){
		HX_STACK_LINE(365)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(365)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(365)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(365)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(366)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(366)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(366)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(366)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(366)
	if ((tmp6)){
		HX_STACK_LINE(366)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(366)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(366)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(366)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(366)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(367)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(367)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(367)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(367)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(367)
	if ((tmp10)){
		HX_STACK_LINE(367)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(367)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(367)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(367)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(367)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(368)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(368)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(368)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(368)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(368)
	if ((tmp14)){
		HX_STACK_LINE(368)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(368)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(368)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(368)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(368)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(369)
	bool tmp16 = this->littleEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(369)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(369)
	if ((tmp16)){
		HX_STACK_LINE(369)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(369)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(369)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(369)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(369)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(369)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(369)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(369)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(369)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(369)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(369)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(369)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(369)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(369)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(369)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("lime.utils.ByteArray","readMultiByte",0x680b0db8,"lime.utils.ByteArray.readMultiByte","lime/utils/ByteArray.hx",375,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(377)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readShort",0x6d883493,"lime.utils.ByteArray.readShort","lime/utils/ByteArray.hx",382,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(389)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(389)
	if ((tmp2)){
		HX_STACK_LINE(389)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(389)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(389)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(389)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(390)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(390)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(390)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(390)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(390)
	if ((tmp6)){
		HX_STACK_LINE(390)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(390)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(390)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(390)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(390)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(391)
	bool tmp8 = this->littleEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(391)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(391)
	if ((tmp8)){
		HX_STACK_LINE(391)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(391)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(391)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(391)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(391)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(391)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(391)
	int val = tmp9;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(392)
	int tmp10 = (int(val) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(392)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(392)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(392)
	if ((tmp11)){
		HX_STACK_LINE(392)
		tmp12 = (val - (int)65536);
	}
	else{
		HX_STACK_LINE(392)
		tmp12 = val;
	}
	HX_STACK_LINE(392)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedByte",0x22c35b66,"lime.utils.ByteArray.readUnsignedByte","lime/utils/ByteArray.hx",398,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(404)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(404)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(404)
	if ((tmp2)){
		HX_STACK_LINE(404)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(404)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(404)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(404)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedInt",0x956a0651,"lime.utils.ByteArray.readUnsignedInt","lime/utils/ByteArray.hx",410,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(417)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(417)
	if ((tmp2)){
		HX_STACK_LINE(417)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(417)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(417)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(417)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(417)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(418)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(418)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(418)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(418)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(418)
	if ((tmp6)){
		HX_STACK_LINE(418)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(418)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(418)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(418)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(418)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(419)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(419)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(419)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(419)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(419)
	if ((tmp10)){
		HX_STACK_LINE(419)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(419)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(419)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(419)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(419)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(420)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(420)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(420)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(420)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(420)
	if ((tmp14)){
		HX_STACK_LINE(420)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(420)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(420)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(420)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(420)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(421)
	bool tmp16 = this->littleEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(421)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(421)
	if ((tmp16)){
		HX_STACK_LINE(421)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(421)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(421)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(421)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(421)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(421)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(421)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(421)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(421)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(421)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(421)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(421)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(421)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(421)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(421)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedShort",0x06bc1a5e,"lime.utils.ByteArray.readUnsignedShort","lime/utils/ByteArray.hx",427,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(434)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(434)
	if ((tmp2)){
		HX_STACK_LINE(434)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(434)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(434)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(434)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(435)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(435)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(435)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(435)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(435)
	if ((tmp6)){
		HX_STACK_LINE(435)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(435)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(435)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(435)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(435)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(436)
	bool tmp8 = this->littleEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(436)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(436)
	if ((tmp8)){
		HX_STACK_LINE(436)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(436)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(436)
		tmp9 = (tmp10 + tmp11);
	}
	else{
		HX_STACK_LINE(436)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(436)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(436)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(436)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTF",0x0234bd7e,"lime.utils.ByteArray.readUTF","lime/utils/ByteArray.hx",442,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(444)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(444)
	int bytesCount = tmp;		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(445)
	int tmp1 = bytesCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(445)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(445)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int len){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTFBytes",0xa63b120d,"lime.utils.ByteArray.readUTFBytes","lime/utils/ByteArray.hx",450,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(491)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(491)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(491)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(491)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(491)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(491)
	if ((tmp4)){
		HX_STACK_LINE(493)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(497)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(497)
	int p = tmp5;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(498)
	hx::AddEq(this->position,len);
	HX_STACK_LINE(508)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(509)
	bool tmp6 = (this->b != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(509)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(509)
	if ((tmp6)){
		HX_STACK_LINE(509)
		tmp7 = (len > (int)0);
	}
	else{
		HX_STACK_LINE(509)
		tmp7 = false;
	}
	HX_STACK_LINE(509)
	if ((tmp7)){
		HX_STACK_LINE(510)
		::__hxcpp_string_of_bytes(this->b,result,p,len);
	}
	HX_STACK_LINE(512)
	::String tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(512)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","setLength",0x1f286d75,"lime.utils.ByteArray.setLength","lime/utils/ByteArray.hx",525,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(527)
		bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		if ((tmp)){
			HX_STACK_LINE(528)
			int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(528)
			this->ensureElem(tmp1,false);
		}
		HX_STACK_LINE(529)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::lime::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic inEnd){
	HX_STACK_FRAME("lime.utils.ByteArray","slice",0x44803d1f,"lime.utils.ByteArray.slice","lime/utils/ByteArray.hx",536,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(538)
	bool tmp = (begin < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	if ((tmp)){
		HX_STACK_LINE(540)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		hx::AddEq(begin,tmp1);
		HX_STACK_LINE(541)
		bool tmp2 = (begin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		if ((tmp2)){
			HX_STACK_LINE(542)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(546)
	bool tmp1 = (inEnd == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	if ((tmp1)){
		HX_STACK_LINE(546)
		tmp2 = this->length;
	}
	else{
		HX_STACK_LINE(546)
		tmp2 = inEnd;
	}
	HX_STACK_LINE(546)
	int end = tmp2;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(548)
	bool tmp3 = (end < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(548)
	if ((tmp3)){
		HX_STACK_LINE(550)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(550)
		hx::AddEq(end,tmp4);
		HX_STACK_LINE(552)
		bool tmp5 = (end < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		if ((tmp5)){
			HX_STACK_LINE(553)
			end = (int)0;
		}
	}
	HX_STACK_LINE(557)
	bool tmp4 = (begin >= end);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(557)
	if ((tmp4)){
		HX_STACK_LINE(558)
		::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(558)
		return tmp5;
	}
	HX_STACK_LINE(560)
	int tmp5 = (end - begin);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(560)
	::lime::utils::ByteArray tmp6 = ::lime::utils::ByteArray_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(560)
	::lime::utils::ByteArray result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(562)
	int tmp7 = this->position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(562)
	int opos = tmp7;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(563)
	int tmp8 = begin;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(563)
	int tmp9 = (end - begin);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(563)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),tmp8,tmp9);
	HX_STACK_LINE(565)
	::lime::utils::ByteArray tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(565)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("lime.utils.ByteArray","ThrowEOFi",0x2ce113a0,"lime.utils.ByteArray.ThrowEOFi","lime/utils/ByteArray.hx",572,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(574)
	HX_STACK_DO_THROW(HX_HCSTRING("new EOFError();","\x4e","\x2c","\xa3","\xf0"));
	HX_STACK_LINE(575)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

::String ByteArray_obj::toString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","toString",0xaed215ff,"lime.utils.ByteArray.toString","lime/utils/ByteArray.hx",581,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(583)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	int cachePosition = tmp;		HX_STACK_VAR(cachePosition,"cachePosition");
	HX_STACK_LINE(584)
	this->position = (int)0;
	HX_STACK_LINE(585)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(585)
	::String value = tmp2;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(586)
	this->position = cachePosition;
	HX_STACK_LINE(587)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(587)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,toString,return )

Void ByteArray_obj::uncompress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","uncompress",0x5340af0e,"lime.utils.ByteArray.uncompress","lime/utils/ByteArray.hx",592,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(608)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		if ((tmp)){
			HX_STACK_LINE(608)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::GZIP;
		}
		HX_STACK_LINE(613)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(616)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(618)
		bool tmp1 = (algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		if ((tmp1)){
			HX_STACK_LINE(620)
			::lime::utils::ByteArray tmp2 = src;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(620)
			::lime::utils::ByteArray tmp3 = ::lime::utils::ByteArray_obj::fromBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(620)
			::lime::utils::ByteArray tmp4 = ::lime::utils::LZMA_obj::decode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(620)
			result = tmp4;
		}
		else{
			HX_STACK_LINE(624)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(624)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(624)
			if ((tmp2)){
				HX_STACK_LINE(624)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(625)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(626)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(627)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(627)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(624)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(633)
			::lime::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Uncompress_obj::run(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(633)
			result = tmp5;
		}
		HX_STACK_LINE(638)
		this->b = result->b;
		HX_STACK_LINE(639)
		this->length = result->length;
		HX_STACK_LINE(640)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("lime.utils.ByteArray","write_uncheck",0xb8315afc,"lime.utils.ByteArray.write_uncheck","lime/utils/ByteArray.hx",650,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(654)
		int tmp = (this->position)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(654)
		int tmp1 = byte;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(654)
		this->b->__unsafe_set(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeBoolean",0x97597a5c,"lime.utils.ByteArray.writeBoolean","lime/utils/ByteArray.hx",665,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(667)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(667)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(667)
		if ((tmp)){
			HX_STACK_LINE(667)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(667)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(667)
		this->writeByte(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeByte",0x6a5076d4,"lime.utils.ByteArray.writeByte","lime/utils/ByteArray.hx",672,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(680)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(680)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(684)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		unsigned char tmp2 = (int(value) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		this->b[tmp1] = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","writeBytes",0x9c17831f,"lime.utils.ByteArray.writeBytes","lime/utils/ByteArray.hx",691,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(693)
		bool tmp = (bytes->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(693)
		if ((tmp)){
			HX_STACK_LINE(693)
			return null();
		}
		HX_STACK_LINE(701)
		bool tmp1 = (length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(701)
		if ((tmp1)){
			HX_STACK_LINE(701)
			int tmp2 = (bytes->length - offset);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(701)
			length = tmp2;
		}
		HX_STACK_LINE(702)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(702)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		int tmp4 = length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(702)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(702)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(702)
		this->ensureElem(tmp8,true);
		HX_STACK_LINE(703)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(703)
		int opos = tmp9;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(704)
		int tmp10 = this->position;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(704)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(704)
		int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(704)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(704)
		this->position = tmp13;
		HX_STACK_LINE(705)
		int tmp14 = opos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(705)
		::haxe::io::Bytes tmp15 = bytes;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(705)
		int tmp16 = offset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(705)
		int tmp17 = length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(705)
		this->blit(tmp14,tmp15,tmp16,tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeDouble",0x03d70ddd,"lime.utils.ByteArray.writeDouble","lime/utils/ByteArray.hx",711,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(718)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(718)
		int tmp1 = (tmp + (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(718)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(719)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(719)
		this->setDouble(tmp2,tmp3);
		HX_STACK_LINE(720)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFile",0x6ce92648,"lime.utils.ByteArray.writeFile","lime/utils/ByteArray.hx",726,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(729)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(729)
		::sys::io::File_obj::saveBytes(tmp,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFloat",0xe1164050,"lime.utils.ByteArray.writeFloat","lime/utils/ByteArray.hx",735,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(742)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(742)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(742)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(743)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(743)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(743)
		this->setFloat(tmp2,tmp3);
		HX_STACK_LINE(744)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeInt",0x9a53b2a3,"lime.utils.ByteArray.writeInt","lime/utils/ByteArray.hx",750,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(757)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(757)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(759)
		bool tmp2 = this->littleEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		if ((tmp2)){
			HX_STACK_LINE(761)
			{
				HX_STACK_LINE(761)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(761)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(761)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(762)
			{
				HX_STACK_LINE(762)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(762)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(762)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(763)
			{
				HX_STACK_LINE(763)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(763)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(763)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(764)
			{
				HX_STACK_LINE(764)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(764)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(764)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(768)
			{
				HX_STACK_LINE(768)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(768)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(768)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(769)
			{
				HX_STACK_LINE(769)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(769)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(769)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(770)
			{
				HX_STACK_LINE(770)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(770)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(770)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(771)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(771)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeShort",0x5aa6ff30,"lime.utils.ByteArray.writeShort","lime/utils/ByteArray.hx",779,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(786)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(786)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(786)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(788)
		bool tmp2 = this->littleEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		if ((tmp2)){
			HX_STACK_LINE(790)
			{
				HX_STACK_LINE(790)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(790)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(790)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(791)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(791)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(795)
			{
				HX_STACK_LINE(795)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(795)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(795)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(796)
			{
				HX_STACK_LINE(796)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(796)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(796)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedInt",0x9d6624ae,"lime.utils.ByteArray.writeUnsignedInt","lime/utils/ByteArray.hx",805,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(812)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUnsignedShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedShort",0x1cc249fb,"lime.utils.ByteArray.writeUnsignedShort","lime/utils/ByteArray.hx",818,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(825)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		this->writeShort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedShort,(void))

Void ByteArray_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTF",0x9a5cb6db,"lime.utils.ByteArray.writeUTF","lime/utils/ByteArray.hx",831,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(840)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(840)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(840)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(842)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(842)
		this->writeShort(tmp2);
		HX_STACK_LINE(843)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(843)
		this->writeBytes(tmp3,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTFBytes",0x2cbd0790,"lime.utils.ByteArray.writeUTFBytes","lime/utils/ByteArray.hx",849,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(886)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(886)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(886)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(888)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(888)
		this->writeBytes(tmp2,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__fromBytes",0xdc5fcc0e,"lime.utils.ByteArray.__fromBytes","lime/utils/ByteArray.hx",894,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(901)
		this->b = bytes->b;
		HX_STACK_LINE(902)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("lime.utils.ByteArray","__get",0xb7e35a43,"lime.utils.ByteArray.__get","lime/utils/ByteArray.hx",921,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(929)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Dynamic ByteArray_obj::__getNativePointer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","__getNativePointer",0x110c17a3,"lime.utils.ByteArray.__getNativePointer","lime/utils/ByteArray.hx",950,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(950)
	return ::lime::utils::ByteArray_obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(hx::ObjectPtr<OBJ_>(this)));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__getNativePointer,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__set",0xb7ec754f,"lime.utils.ByteArray.__set","lime/utils/ByteArray.hx",1027,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1034)
		int tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1034)
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

bool ByteArray_obj::get_bigEndian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bigEndian",0x3400371f,"lime.utils.ByteArray.get_bigEndian","lime/utils/ByteArray.hx",1051,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1051)
	bool tmp = this->littleEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1051)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1051)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bigEndian,return )

bool ByteArray_obj::set_bigEndian( bool value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_bigEndian",0x7906192b,"lime.utils.ByteArray.set_bigEndian","lime/utils/ByteArray.hx",1052,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1052)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1052)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1052)
	this->littleEndian = tmp1;
	HX_STACK_LINE(1052)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1052)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_bigEndian,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bytesAvailable",0x625f77ba,"lime.utils.ByteArray.get_bytesAvailable","lime/utils/ByteArray.hx",1056,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1058)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1058)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1058)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1058)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_byteLength",0x941c2bea,"lime.utils.ByteArray.get_byteLength","lime/utils/ByteArray.hx",1064,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1066)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1066)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_endian",0x34cd8877,"lime.utils.ByteArray.get_endian","lime/utils/ByteArray.hx",1072,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1074)
	bool tmp = this->littleEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1074)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1074)
	if ((tmp)){
		HX_STACK_LINE(1074)
		tmp1 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
	}
	else{
		HX_STACK_LINE(1074)
		tmp1 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
	}
	HX_STACK_LINE(1074)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String endian){
	HX_STACK_FRAME("lime.utils.ByteArray","set_endian",0x384b26eb,"lime.utils.ByteArray.set_endian","lime/utils/ByteArray.hx",1079,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(endian,"endian")
	HX_STACK_LINE(1081)
	bool tmp = (endian == HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1081)
	this->littleEndian = tmp;
	HX_STACK_LINE(1082)
	::String tmp1 = endian;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1082)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

int ByteArray_obj::set_length( int value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_length",0xdcca2336,"lime.utils.ByteArray.set_length","lime/utils/ByteArray.hx",1087,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1096)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1096)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_length,return )

::lime::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.ByteArray","fromBytes",0x929a55ee,"lime.utils.ByteArray.fromBytes","lime/utils/ByteArray.hx",223,0x2063a1e5)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(225)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	::lime::utils::ByteArray result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		result->b = bytes->b;
		HX_STACK_LINE(226)
		result->length = bytes->length;
	}
	HX_STACK_LINE(227)
	::lime::utils::ByteArray tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::lime::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("lime.utils.ByteArray","readFile",0xe216ee45,"lime.utils.ByteArray.readFile","lime/utils/ByteArray.hx",332,0x2063a1e5)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(335)
	Dynamic data = ((Dynamic)(::lime::utils::ByteArray_obj::cffi_lime_bytes_read_file.call(path)));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(336)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	if ((tmp)){
		HX_STACK_LINE(336)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(336)
		return tmp2;
	}
	HX_STACK_LINE(338)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

::lime::utils::ByteArray ByteArray_obj::__fromNativePointer( Dynamic data,int length){
	HX_STACK_FRAME("lime.utils.ByteArray","__fromNativePointer",0x00ab2e89,"lime.utils.ByteArray.__fromNativePointer","lime/utils/ByteArray.hx",912,0x2063a1e5)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(914)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(914)
	{
		HX_STACK_LINE(914)
		Float data1 = data;		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(914)
		tmp = ::lime::utils::ByteArray_obj::cffi_lime_bytes_from_data_pointer.call(data1,length);
	}
	HX_STACK_LINE(914)
	Dynamic bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(915)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::__new(bytes->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),bytes->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(915)
	::lime::utils::ByteArray tmp2 = ::lime::utils::ByteArray_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(915)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__fromNativePointer,return )

Dynamic ByteArray_obj::lime_bytes_from_data_pointer( Float data,int length){
	HX_STACK_FRAME("lime.utils.ByteArray","lime_bytes_from_data_pointer",0xf7183bf2,"lime.utils.ByteArray.lime_bytes_from_data_pointer","lime/utils/ByteArray.hx",1109,0x2063a1e5)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(1109)
	return ::lime::utils::ByteArray_obj::cffi_lime_bytes_from_data_pointer.call(data,length);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,lime_bytes_from_data_pointer,return )

Float ByteArray_obj::lime_bytes_get_data_pointer( Dynamic data){
	HX_STACK_FRAME("lime.utils.ByteArray","lime_bytes_get_data_pointer",0xc2003a3c,"lime.utils.ByteArray.lime_bytes_get_data_pointer","lime/utils/ByteArray.hx",1110,0x2063a1e5)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1110)
	return ::lime::utils::ByteArray_obj::cffi_lime_bytes_get_data_pointer.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,lime_bytes_get_data_pointer,return )

Dynamic ByteArray_obj::lime_bytes_read_file( ::String path){
	HX_STACK_FRAME("lime.utils.ByteArray","lime_bytes_read_file",0x38a2289a,"lime.utils.ByteArray.lime_bytes_read_file","lime/utils/ByteArray.hx",1111,0x2063a1e5)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(1111)
	return ::lime::utils::ByteArray_obj::cffi_lime_bytes_read_file.call(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,lime_bytes_read_file,return )

::cpp::Function< ::hx::Object * ( Float ,int ) > ByteArray_obj::cffi_lime_bytes_from_data_pointer;

::cpp::Function< Float ( ::hx::Object * ) > ByteArray_obj::cffi_lime_bytes_get_data_pointer;

::cpp::Function< ::hx::Object * ( ::String ) > ByteArray_obj::cffi_lime_bytes_read_file;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { return allocated; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return get_bigEndian(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp == hx::paccAlways ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { return littleEndian; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bigEndian") ) { return get_bigEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp == hx::paccAlways ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeUnsignedShort") ) { return writeUnsignedShort_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNativePointer") ) { return __getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__fromNativePointer") ) { outValue = __fromNativePointer_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_bytes_read_file") ) { outValue = lime_bytes_read_file_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { outValue = cffi_lime_bytes_read_file; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bytes_get_data_pointer") ) { outValue = lime_bytes_get_data_pointer_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bytes_from_data_pointer") ) { outValue = lime_bytes_from_data_pointer_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { outValue = cffi_lime_bytes_get_data_pointer; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { outValue = cffi_lime_bytes_from_data_pointer; return true;  }
	}
	return false;
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return set_bigEndian(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { littleEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_read_file") ) { cffi_lime_bytes_read_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_get_data_pointer") ) { cffi_lime_bytes_get_data_pointer=ioValue.Cast< ::cpp::Function< Float ( ::hx::Object * ) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_bytes_from_data_pointer") ) { cffi_lime_bytes_from_data_pointer=ioValue.Cast< ::cpp::Function< ::hx::Object * ( Float ,int ) > >(); return true; }
	}
	return false;
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c"));
	outFields->push(HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,allocated),HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c")},
	{hx::fsBool,(int)offsetof(ByteArray_obj,littleEndian),HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( Float ,int ) >*/ ,(void *) &ByteArray_obj::cffi_lime_bytes_from_data_pointer,HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81")},
	{hx::fsObject /*::cpp::Function< Float ( ::hx::Object * ) >*/ ,(void *) &ByteArray_obj::cffi_lime_bytes_get_data_pointer,HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ) >*/ ,(void *) &ByteArray_obj::cffi_lime_bytes_read_file,HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c"),
	HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("asString","\x63","\x33","\x06","\xa0"),
	HX_HCSTRING("checkData","\x12","\x1f","\x43","\x96"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("ThrowEOFi","\x53","\xb0","\x67","\x0c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("write_uncheck","\x2f","\xcd","\xef","\x65"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFile","\xfb","\xc2","\x6f","\x4c"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUnsignedShort","\xe8","\xfe","\x99","\xf1"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__getNativePointer","\x90","\xcc","\xe3","\xe5"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("get_bigEndian","\x52","\xa9","\xbe","\xe1"),
	HX_HCSTRING("set_bigEndian","\x5e","\x8b","\xc4","\x26"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::cffi_lime_bytes_from_data_pointer,"cffi_lime_bytes_from_data_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::cffi_lime_bytes_get_data_pointer,"cffi_lime_bytes_get_data_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::cffi_lime_bytes_read_file,"cffi_lime_bytes_read_file");
};

#endif

hx::Class ByteArray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("__fromNativePointer","\xfc","\xc8","\x91","\x68"),
	HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),
	HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),
	HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),
	HX_HCSTRING("cffi_lime_bytes_from_data_pointer","\x98","\x81","\xca","\x81"),
	HX_HCSTRING("cffi_lime_bytes_get_data_pointer","\x56","\xeb","\xe8","\x02"),
	HX_HCSTRING("cffi_lime_bytes_read_file","\x40","\x58","\x83","\x5f"),
	::String(null()) };

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ByteArray","\x7b","\x11","\x5b","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArray_obj >;
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

void ByteArray_obj::__boot()
{
	cffi_lime_bytes_from_data_pointer= ::cpp::Function< ::hx::Object * ( Float ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_from_data_pointer","\x1f","\x3b","\x02","\x90"),HX_HCSTRING("dio","\x4a","\x3d","\x4c","\x00"),false));
	cffi_lime_bytes_get_data_pointer= ::cpp::Function< Float ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_get_data_pointer","\xaf","\xff","\x82","\x7b"),HX_HCSTRING("od","\x15","\x61","\x00","\x00"),false));
	cffi_lime_bytes_read_file= ::cpp::Function< ::hx::Object * ( ::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_bytes_read_file","\xc7","\xb2","\x82","\xba"),HX_HCSTRING("so","\x9c","\x64","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace utils
