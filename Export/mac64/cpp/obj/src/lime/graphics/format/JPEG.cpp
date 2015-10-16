#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void JPEG_obj::__construct()
{
	return null();
}

//JPEG_obj::~JPEG_obj() { }

Dynamic JPEG_obj::__CreateEmpty() { return  new JPEG_obj; }
hx::ObjectPtr< JPEG_obj > JPEG_obj::__new()
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::Image JPEG_obj::decodeBytes( ::lime::utils::ByteArray bytes,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeBytes",0x9c51a384,"lime.graphics.format.JPEG.decodeBytes","lime/graphics/format/JPEG.hx",25,0x0d45bec8)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(29)
		Dynamic bufferData = ((Dynamic)(::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_bytes.call(hx::DynamicPtr(bytes),decodeData)));		HX_STACK_VAR(bufferData,"bufferData");
		HX_STACK_LINE(31)
		bool tmp = (bufferData != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(33)
			::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(bufferData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(33)
			::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(34)
			buffer->transparent = bufferData->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
			HX_STACK_LINE(35)
			::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			return tmp2;
		}
		HX_STACK_LINE(41)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeBytes,return )

::lime::graphics::Image JPEG_obj::decodeFile( ::String path,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeFile",0xcb0bd983,"lime.graphics.format.JPEG.decodeFile","lime/graphics/format/JPEG.hx",46,0x0d45bec8)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(50)
		Dynamic bufferData = ((Dynamic)(::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_file.call(path,decodeData)));		HX_STACK_VAR(bufferData,"bufferData");
		HX_STACK_LINE(52)
		bool tmp = (bufferData != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		if ((tmp)){
			HX_STACK_LINE(54)
			::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(bufferData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("bpp","\xe2","\xbe","\x4a","\x00"), hx::paccDynamic ),bufferData->__Field(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(55)
			buffer->transparent = bufferData->__Field(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"), hx::paccDynamic );
			HX_STACK_LINE(56)
			::lime::graphics::Image tmp2 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			return tmp2;
		}
		HX_STACK_LINE(62)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeFile,return )

::lime::utils::ByteArray JPEG_obj::encode( ::lime::graphics::Image image,int quality){
	HX_STACK_FRAME("lime.graphics.format.JPEG","encode",0xce6c344f,"lime.graphics.format.JPEG.encode","lime/graphics/format/JPEG.hx",67,0x0d45bec8)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(69)
	bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(69)
		int tmp3 = image->get_format();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		tmp2 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(69)
		tmp2 = true;
	}
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(73)
		::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		image = tmp3;
		HX_STACK_LINE(74)
		image->set_premultiplied(false);
		HX_STACK_LINE(75)
		image->set_format((int)0);
	}
	HX_STACK_LINE(83)
	Dynamic data = ((Dynamic)(::lime::graphics::format::JPEG_obj::cffi_lime_image_encode.call(hx::DynamicPtr(image->buffer),(int)1,quality)));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(84)
	::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	::haxe::io::Bytes bytes = tmp3;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(85)
	::haxe::io::Bytes tmp4 = bytes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::fromBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	return tmp5;
	HX_STACK_LINE(109)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )

Dynamic JPEG_obj::lime_jpeg_decode_bytes( Dynamic data,bool decodeData){
	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_jpeg_decode_bytes",0x320703e0,"lime.graphics.format.JPEG.lime_jpeg_decode_bytes","lime/graphics/format/JPEG.hx",122,0x0d45bec8)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(decodeData,"decodeData")
	HX_STACK_LINE(122)
	return ::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_bytes.call(hx::DynamicPtr(data),decodeData);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,lime_jpeg_decode_bytes,return )

Dynamic JPEG_obj::lime_jpeg_decode_file( ::String path,bool decodeData){
	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_jpeg_decode_file",0x5579b8a7,"lime.graphics.format.JPEG.lime_jpeg_decode_file","lime/graphics/format/JPEG.hx",123,0x0d45bec8)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(decodeData,"decodeData")
	HX_STACK_LINE(123)
	return ::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_file.call(path,decodeData);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,lime_jpeg_decode_file,return )

Dynamic JPEG_obj::lime_image_encode( Dynamic data,int type,int quality){
	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_image_encode",0x82bdaecb,"lime.graphics.format.JPEG.lime_image_encode","lime/graphics/format/JPEG.hx",124,0x0d45bec8)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(124)
	return ::lime::graphics::format::JPEG_obj::cffi_lime_image_encode.call(hx::DynamicPtr(data),type,quality);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JPEG_obj,lime_image_encode,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ) > JPEG_obj::cffi_lime_jpeg_decode_bytes;

::cpp::Function< ::hx::Object * ( ::String ,bool ) > JPEG_obj::cffi_lime_jpeg_decode_file;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > JPEG_obj::cffi_lime_image_encode;


JPEG_obj::JPEG_obj()
{
}

bool JPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_file") ) { outValue = lime_jpeg_decode_file_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_bytes") ) { outValue = lime_jpeg_decode_bytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { outValue = cffi_lime_image_encode; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { outValue = cffi_lime_jpeg_decode_file; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { outValue = cffi_lime_jpeg_decode_bytes; return true;  }
	}
	return false;
}

bool JPEG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { cffi_lime_image_encode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { cffi_lime_jpeg_decode_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,bool ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { cffi_lime_jpeg_decode_bytes=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ) >*/ ,(void *) &JPEG_obj::cffi_lime_jpeg_decode_bytes,HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,bool ) >*/ ,(void *) &JPEG_obj::cffi_lime_jpeg_decode_file,HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &JPEG_obj::cffi_lime_image_encode,HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
};

#endif

hx::Class JPEG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),
	HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b"),
	HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8"),
	HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82"),
	::String(null()) };

void JPEG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.JPEG","\x15","\x91","\x5a","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &JPEG_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JPEG_obj >;
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

void JPEG_obj::__boot()
{
	cffi_lime_jpeg_decode_bytes= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),HX_HCSTRING("obo","\xfc","\x8f","\x54","\x00"),false));
	cffi_lime_jpeg_decode_file= ::cpp::Function< ::hx::Object * ( ::String ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),HX_HCSTRING("sbo","\x00","\x99","\x57","\x00"),false));
	cffi_lime_image_encode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
