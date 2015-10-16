#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace utils{


static ::String sMemberFields[] = {
	HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

#endif

hx::Class IDataInput_obj::__mClass;

void IDataInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.IDataInput","\x8d","\x88","\xca","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IDataInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
