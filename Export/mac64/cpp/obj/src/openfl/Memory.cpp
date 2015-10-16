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
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
namespace openfl{

Void Memory_obj::__construct()
{
	return null();
}

//Memory_obj::~Memory_obj() { }

Dynamic Memory_obj::__CreateEmpty() { return  new Memory_obj; }
hx::ObjectPtr< Memory_obj > Memory_obj::__new()
{  hx::ObjectPtr< Memory_obj > _result_ = new Memory_obj();
	_result_->__construct();
	return _result_;}

Dynamic Memory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Memory_obj > _result_ = new Memory_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ByteArray Memory_obj::gcRef;

int Memory_obj::len;

Dynamic Memory_obj::_setPositionTemporarily( int position,Dynamic action){
	HX_STACK_FRAME("openfl.Memory","_setPositionTemporarily",0x2a841813,"openfl.Memory._setPositionTemporarily","openfl/Memory.hx",15,0x3e66e7be)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(action,"action")
	HX_STACK_LINE(17)
	::lime::utils::ByteArray tmp = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	int oldPosition = tmp->position;		HX_STACK_VAR(oldPosition,"oldPosition");
	HX_STACK_LINE(18)
	::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	tmp1->position = position;
	HX_STACK_LINE(19)
	Dynamic tmp2 = action();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	Dynamic value = tmp2;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(20)
	::lime::utils::ByteArray tmp3 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	tmp3->position = oldPosition;
	HX_STACK_LINE(22)
	Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,_setPositionTemporarily,return )

int Memory_obj::getByte( int addr){
	HX_STACK_FRAME("openfl.Memory","getByte",0xd720eb8f,"openfl.Memory.getByte","openfl/Memory.hx",27,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(31)
	::lime::utils::ByteArray tmp = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = tmp->b->__get(addr);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getByte,return )

Float Memory_obj::getDouble( int addr){
	HX_STACK_FRAME("openfl.Memory","getDouble",0x9d3a6758,"openfl.Memory.getDouble","openfl/Memory.hx",36,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(40)
	int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 0; }
	Float run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",40,0x3e66e7be)
		{
			HX_STACK_LINE(42)
			::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			Float tmp2 = tmp1->readDouble();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(40)
	Float tmp1 = ::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getDouble,return )

Float Memory_obj::getFloat( int addr){
	HX_STACK_FRAME("openfl.Memory","getFloat",0xaaabef35,"openfl.Memory.getFloat","openfl/Memory.hx",49,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(53)
	int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 0; }
	Float run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",53,0x3e66e7be)
		{
			HX_STACK_LINE(55)
			::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			Float tmp2 = tmp1->readFloat();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(53)
	Float tmp1 = ::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getFloat,return )

int Memory_obj::getI32( int addr){
	HX_STACK_FRAME("openfl.Memory","getI32",0x92c73aa1,"openfl.Memory.getI32","openfl/Memory.hx",62,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(66)
	int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 0; }
	int run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",66,0x3e66e7be)
		{
			HX_STACK_LINE(68)
			::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(68)
			int tmp2 = tmp1->readInt();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(66)
	int tmp1 = ::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getI32,return )

int Memory_obj::getUI16( int addr){
	HX_STACK_FRAME("openfl.Memory","getUI16",0xe38b52a0,"openfl.Memory.getUI16","openfl/Memory.hx",75,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(79)
	int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 0; }
	int run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",79,0x3e66e7be)
		{
			HX_STACK_LINE(81)
			::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			int tmp2 = tmp1->readUnsignedShort();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(79)
	int tmp1 = ::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getUI16,return )

Void Memory_obj::select( ::lime::utils::ByteArray inBytes){
{
		HX_STACK_FRAME("openfl.Memory","select",0x59db434b,"openfl.Memory.select","openfl/Memory.hx",88,0x3e66e7be)
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_LINE(90)
		::openfl::Memory_obj::gcRef = inBytes;
		HX_STACK_LINE(91)
		bool tmp = (inBytes != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp)){
			HX_STACK_LINE(91)
			tmp1 = inBytes->length;
		}
		else{
			HX_STACK_LINE(91)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(91)
		::openfl::Memory_obj::len = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,select,(void))

Void Memory_obj::setByte( int addr,int v){
{
		HX_STACK_FRAME("openfl.Memory","setByte",0xca227c9b,"openfl.Memory.setByte","openfl/Memory.hx",100,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(100)
		::lime::utils::ByteArray tmp = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		tmp->b[addr] = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setByte,(void))

Void Memory_obj::setDouble( int addr,Float v){
{
		HX_STACK_FRAME("openfl.Memory","setDouble",0x808b5364,"openfl.Memory.setDouble","openfl/Memory.hx",105,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(109)
		int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Float,v)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",109,0x3e66e7be)
			{
				HX_STACK_LINE(111)
				::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(111)
				Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(111)
				tmp1->writeDouble(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(109)
		::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1(v)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setDouble,(void))

Void Memory_obj::setFloat( int addr,Float v){
{
		HX_STACK_FRAME("openfl.Memory","setFloat",0x590948a9,"openfl.Memory.setFloat","openfl/Memory.hx",118,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(122)
		int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Float,v)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",122,0x3e66e7be)
			{
				HX_STACK_LINE(124)
				::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				Float tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				tmp1->writeFloat(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(122)
		::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1(v)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setFloat,(void))

Void Memory_obj::setI16( int addr,int v){
{
		HX_STACK_FRAME("openfl.Memory","setI16",0x5f0f8d5b,"openfl.Memory.setI16","openfl/Memory.hx",131,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(135)
		int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,int,v)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",135,0x3e66e7be)
			{
				HX_STACK_LINE(137)
				::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(137)
				int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(137)
				tmp1->writeUnsignedShort(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(135)
		::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1(v)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI16,(void))

Void Memory_obj::setI32( int addr,int v){
{
		HX_STACK_FRAME("openfl.Memory","setI32",0x5f0f8f15,"openfl.Memory.setI32","openfl/Memory.hx",144,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(148)
		int tmp = addr;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,int,v)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",148,0x3e66e7be)
			{
				HX_STACK_LINE(150)
				::lime::utils::ByteArray tmp1 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(150)
				int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(150)
				tmp1->writeInt(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(148)
		::openfl::Memory_obj::_setPositionTemporarily(tmp, Dynamic(new _Function_1_1(v)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI32,(void))


Memory_obj::Memory_obj()
{
}

bool Memory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { outValue = len; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { outValue = gcRef; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getI32") ) { outValue = getI32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setI16") ) { outValue = setI16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setI32") ) { outValue = setI32_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { outValue = getByte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUI16") ) { outValue = getUI16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setByte") ) { outValue = setByte_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat") ) { outValue = setFloat_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setDouble") ) { outValue = setDouble_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_setPositionTemporarily") ) { outValue = _setPositionTemporarily_dyn(); return true;  }
	}
	return false;
}

bool Memory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { gcRef=ioValue.Cast< ::lime::utils::ByteArray >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(void *) &Memory_obj::gcRef,HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f")},
	{hx::fsInt,(void *) &Memory_obj::len,HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_MARK_MEMBER_NAME(Memory_obj::len,"len");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_VISIT_MEMBER_NAME(Memory_obj::len,"len");
};

#endif

hx::Class Memory_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("_setPositionTemporarily","\x42","\x89","\x02","\xed"),
	HX_HCSTRING("getByte","\xbe","\xce","\xa5","\x13"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getI32","\x52","\x12","\x1f","\xa3"),
	HX_HCSTRING("getUI16","\xcf","\x35","\x10","\x20"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("setByte","\xca","\x5f","\xa7","\x06"),
	HX_HCSTRING("setDouble","\x53","\xa0","\x72","\x92"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("setI16","\x0c","\x65","\x67","\x6f"),
	HX_HCSTRING("setI32","\xc6","\x66","\x67","\x6f"),
	::String(null()) };

void Memory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Memory","\x3f","\xc4","\x9d","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Memory_obj::__GetStatic;
	__mClass->mSetStaticField = &Memory_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Memory_obj >;
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
