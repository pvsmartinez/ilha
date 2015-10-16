#include <hxcpp.h>

#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessageType
#include <lime/system/_ThreadPool/ThreadPoolMessageType.h>
#endif
namespace lime{
namespace _system{
namespace _ThreadPool{

::lime::_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::COMPLETE;

::lime::_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::ERROR;

::lime::_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::EXIT;

::lime::_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::PROGRESS;

::lime::_system::_ThreadPool::ThreadPoolMessageType ThreadPoolMessageType_obj::WORK;

HX_DEFINE_CREATE_ENUM(ThreadPoolMessageType_obj)

int ThreadPoolMessageType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9")) return 0;
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return 1;
	if (inName==HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d")) return 2;
	if (inName==HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf")) return 3;
	if (inName==HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39")) return 4;
	return super::__FindIndex(inName);
}

int ThreadPoolMessageType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9")) return 0;
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return 0;
	if (inName==HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d")) return 0;
	if (inName==HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf")) return 0;
	if (inName==HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ThreadPoolMessageType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9")) return COMPLETE;
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return ERROR;
	if (inName==HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d")) return EXIT;
	if (inName==HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf")) return PROGRESS;
	if (inName==HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39")) return WORK;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9"),
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d"),
	HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf"),
	HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::EXIT,"EXIT");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::PROGRESS,"PROGRESS");
	HX_MARK_MEMBER_NAME(ThreadPoolMessageType_obj::WORK,"WORK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::EXIT,"EXIT");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::PROGRESS,"PROGRESS");
	HX_VISIT_MEMBER_NAME(ThreadPoolMessageType_obj::WORK,"WORK");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ThreadPoolMessageType_obj::__mClass;

Dynamic __Create_ThreadPoolMessageType_obj() { return new ThreadPoolMessageType_obj; }

void ThreadPoolMessageType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.system._ThreadPool.ThreadPoolMessageType","\xec","\x6c","\x62","\xb0"), hx::TCanCast< ThreadPoolMessageType_obj >,sStaticFields,sMemberFields,
	&__Create_ThreadPoolMessageType_obj, &__Create,
	&super::__SGetClass(), &CreateThreadPoolMessageType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ThreadPoolMessageType_obj::__boot()
{
hx::Static(COMPLETE) = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9"),0);
hx::Static(ERROR) = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),1);
hx::Static(EXIT) = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d"),2);
hx::Static(PROGRESS) = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf"),3);
hx::Static(WORK) = hx::CreateEnum< ThreadPoolMessageType_obj >(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"),4);
}


} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool
