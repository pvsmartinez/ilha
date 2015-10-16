#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace _system{

Void CFFI_obj::__construct()
{
	return null();
}

//CFFI_obj::~CFFI_obj() { }

Dynamic CFFI_obj::__CreateEmpty() { return  new CFFI_obj; }
hx::ObjectPtr< CFFI_obj > CFFI_obj::__new()
{  hx::ObjectPtr< CFFI_obj > _result_ = new CFFI_obj();
	_result_->__construct();
	return _result_;}

Dynamic CFFI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CFFI_obj > _result_ = new CFFI_obj();
	_result_->__construct();
	return _result_;}

void CFFI_obj::__init__() {
HX_STACK_FRAME("lime.system.CFFI","__init__",0x5a035452,"lime.system.CFFI.__init__","lime/system/CFFI.hx",24,0x441ad672)
{
	HX_STACK_LINE(27)
	::lime::_system::CFFI_obj::available = true;
	HX_STACK_LINE(28)
	::lime::_system::CFFI_obj::enabled = true;
}
}

::haxe::ds::StringMap CFFI_obj::__moduleNames;

bool CFFI_obj::available;

bool CFFI_obj::enabled;

Dynamic CFFI_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.CFFI","load",0x60b2e828,"lime.system.CFFI.load","lime/system/CFFI.hx",45,0x441ad672)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(59)
		bool tmp = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Dynamic run(cpp::ArrayBase __){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/system/CFFI.hx",61,0x441ad672)
				HX_STACK_ARG(__,"__")
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/CFFI.hx",61,0x441ad672)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(61)
					Dynamic tmp2 = _Function_3_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(61)
					return tmp2;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(61)
			Dynamic tmp2 = ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			return tmp2;
		}
		HX_STACK_LINE(65)
		Dynamic result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp2 = ::lime::_system::CFFI_obj::__moduleNames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		if ((tmp3)){
			HX_STACK_LINE(70)
			::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(70)
			::lime::_system::CFFI_obj::__moduleNames = tmp4;
		}
		HX_STACK_LINE(72)
		bool tmp4 = lazy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		if ((tmp4)){
			HX_STACK_LINE(74)
			::haxe::ds::StringMap tmp5 = ::lime::_system::CFFI_obj::__moduleNames;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			::String tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(76)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(81)
				bool tmp8 = (library == HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				if ((tmp8)){
					HX_STACK_LINE(81)
					return null();
				}
				HX_STACK_LINE(87)
				::String tmp9 = library;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				::String tmp10 = method;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				int tmp11 = args;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				Dynamic tmp12 = ::cpp::Lib_obj::loadLazy(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				result = tmp12;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
		else{
			HX_STACK_LINE(99)
			::haxe::ds::StringMap tmp5 = ::lime::_system::CFFI_obj::__moduleNames;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			::String tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			if ((tmp7)){
				HX_STACK_LINE(102)
				::haxe::ds::StringMap tmp8 = ::lime::_system::CFFI_obj::__moduleNames;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				::String tmp9 = library;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				::String tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(102)
				::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				::String tmp12 = method;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				int tmp13 = args;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				Dynamic tmp14 = ::cpp::Lib_obj::load(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				return tmp14;
			}
			HX_STACK_LINE(127)
			::haxe::ds::StringMap tmp8 = ::lime::_system::CFFI_obj::__moduleNames;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			::String tmp9 = library;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			::String tmp10 = library;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			tmp8->set(tmp9,tmp10);
			HX_STACK_LINE(129)
			::String tmp11 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			::String tmp12 = library;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			::String tmp13 = method;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			int tmp14 = args;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			Dynamic tmp15 = ::lime::_system::CFFI_obj::__tryLoad(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			result = tmp15;
			HX_STACK_LINE(131)
			bool tmp16 = (result == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			if ((tmp16)){
				HX_STACK_LINE(133)
				::String tmp17 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + library);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(133)
				::String tmp18 = library;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(133)
				::String tmp19 = method;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(133)
				int tmp20 = args;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(133)
				Dynamic tmp21 = ::lime::_system::CFFI_obj::__tryLoad(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(133)
				result = tmp21;
			}
			HX_STACK_LINE(137)
			bool tmp17 = (result == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(137)
			if ((tmp17)){
				HX_STACK_LINE(139)
				::String tmp18 = library;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(139)
				::String tmp19 = library;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(139)
				::String tmp20 = method;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(139)
				int tmp21 = args;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(139)
				Dynamic tmp22 = ::lime::_system::CFFI_obj::__tryLoad(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(139)
				result = tmp22;
			}
			HX_STACK_LINE(143)
			bool tmp18 = (result == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(143)
			if ((tmp18)){
				HX_STACK_LINE(145)
				::String tmp19 = ::lime::_system::CFFI_obj::__sysName();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(145)
				::String tmp20 = tmp19.substr((int)7,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(145)
				::String tmp21 = tmp20.toLowerCase();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(145)
				bool tmp22 = (tmp21 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(145)
				::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(145)
				if ((tmp22)){
					HX_STACK_LINE(145)
					tmp23 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(145)
					tmp23 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
				}
				HX_STACK_LINE(145)
				::String slash = tmp23;		HX_STACK_VAR(slash,"slash");
				HX_STACK_LINE(146)
				::String tmp24 = ::lime::_system::CFFI_obj::__findHaxelib(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(146)
				::String haxelib = tmp24;		HX_STACK_VAR(haxelib,"haxelib");
				HX_STACK_LINE(148)
				bool tmp25 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				if ((tmp25)){
					HX_STACK_LINE(150)
					::String tmp26 = (haxelib + slash);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(150)
					::String tmp27 = (tmp26 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(150)
					::String tmp28 = slash;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(150)
					::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(150)
					::String tmp30 = ::lime::_system::CFFI_obj::__sysName();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(150)
					::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(150)
					::String tmp32 = slash;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(150)
					::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(150)
					::String tmp34 = library;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(150)
					::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(150)
					::String tmp36 = library;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(150)
					::String tmp37 = method;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(150)
					int tmp38 = args;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(150)
					Dynamic tmp39 = ::lime::_system::CFFI_obj::__tryLoad(tmp35,tmp36,tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(150)
					result = tmp39;
					HX_STACK_LINE(152)
					bool tmp40 = (result == null());		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(152)
					if ((tmp40)){
						HX_STACK_LINE(154)
						::String tmp41 = (haxelib + slash);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(154)
						::String tmp42 = (tmp41 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(154)
						::String tmp43 = slash;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(154)
						::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(154)
						::String tmp45 = ::lime::_system::CFFI_obj::__sysName();		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(154)
						::String tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(154)
						::String tmp47 = (tmp46 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(154)
						::String tmp48 = slash;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(154)
						::String tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(154)
						::String tmp50 = library;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(154)
						::String tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(154)
						::String tmp52 = library;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(154)
						::String tmp53 = method;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(154)
						int tmp54 = args;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(154)
						Dynamic tmp55 = ::lime::_system::CFFI_obj::__tryLoad(tmp51,tmp52,tmp53,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(154)
						result = tmp55;
					}
				}
			}
			HX_STACK_LINE(162)
			Dynamic tmp19 = result;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(162)
			::String tmp20 = ::Std_obj::string(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(162)
			::String tmp21 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(162)
			::lime::_system::CFFI_obj::__loaderTrace(tmp21);
		}
		HX_STACK_LINE(181)
		Dynamic tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,load,return )

::String CFFI_obj::__findHaxelib( ::String library){
	HX_STACK_FRAME("lime.system.CFFI","__findHaxelib",0xf1a39a44,"lime.system.CFFI.__findHaxelib","lime/system/CFFI.hx",205,0x441ad672)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(209)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(211)
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(library));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::sys::io::Process proc = tmp;		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(213)
		bool tmp1 = (proc != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		if ((tmp1)){
			HX_STACK_LINE(215)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(217)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(219)
				while((true)){
					HX_STACK_LINE(221)
					::String tmp2 = stream->readLine();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(221)
					::String s = tmp2;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(223)
					::String tmp3 = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(223)
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(223)
					if ((tmp4)){
						HX_STACK_LINE(225)
						stream->close();
						HX_STACK_LINE(226)
						proc->close();
						HX_STACK_LINE(227)
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(227)
						::lime::_system::CFFI_obj::__loaderTrace(tmp5);
						HX_STACK_LINE(228)
						::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(236)
			stream->close();
			HX_STACK_LINE(237)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(245)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,__findHaxelib,return )

Void CFFI_obj::__loaderTrace( ::String message){
{
		HX_STACK_FRAME("lime.system.CFFI","__loaderTrace",0x9278b410,"lime.system.CFFI.__loaderTrace","lime/system/CFFI.hx",250,0x441ad672)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(254)
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		Dynamic get_env = tmp;		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(255)
		Dynamic tmp1 = get_env(HX_HCSTRING("OPENFL_LOAD_DEBUG","\xa9","\x1b","\xff","\x9b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		bool debug = tmp2;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(260)
		bool tmp3 = debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(260)
		if ((tmp3)){
			HX_STACK_LINE(262)
			::String tmp4 = message;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			::Sys_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CFFI_obj,__loaderTrace,(void))

::String CFFI_obj::__sysName( ){
	HX_STACK_FRAME("lime.system.CFFI","__sysName",0x178f5196,"lime.system.CFFI.__sysName","lime/system/CFFI.hx",323,0x441ad672)
	HX_STACK_LINE(327)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	Dynamic sys_string = tmp;		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(328)
	::String tmp1 = sys_string().Cast< ::String >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CFFI_obj,__sysName,return )

Dynamic CFFI_obj::__tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("lime.system.CFFI","__tryLoad",0xe7c4e49f,"lime.system.CFFI.__tryLoad","lime/system/CFFI.hx",339,0x441ad672)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(343)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(346)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(355)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		if ((tmp4)){
			HX_STACK_LINE(357)
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(357)
			::lime::_system::CFFI_obj::__loaderTrace(tmp5);
			HX_STACK_LINE(358)
			::haxe::ds::StringMap tmp6 = ::lime::_system::CFFI_obj::__moduleNames;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(358)
			::String tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(358)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(358)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(359)
			Dynamic tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(359)
			return tmp9;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(365)
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + name);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(365)
				::lime::_system::CFFI_obj::__loaderTrace(tmp);
			}
		}
	}
	HX_STACK_LINE(371)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CFFI_obj,__tryLoad,return )

Dynamic CFFI_obj::lime_cffi_set_finalizer;


CFFI_obj::CFFI_obj()
{
}

bool CFFI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { outValue = enabled; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { outValue = available; return true;  }
		if (HX_FIELD_EQ(inName,"__sysName") ) { outValue = __sysName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__tryLoad") ) { outValue = __tryLoad_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { outValue = __moduleNames; return true;  }
		if (HX_FIELD_EQ(inName,"__findHaxelib") ) { outValue = __findHaxelib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__loaderTrace") ) { outValue = __loaderTrace_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cffi_set_finalizer") ) { outValue = lime_cffi_set_finalizer; return true;  }
	}
	return false;
}

bool CFFI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { available=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_cffi_set_finalizer") ) { lime_cffi_set_finalizer=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &CFFI_obj::__moduleNames,HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28")},
	{hx::fsBool,(void *) &CFFI_obj::available,HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsBool,(void *) &CFFI_obj::enabled,HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CFFI_obj::lime_cffi_set_finalizer,HX_HCSTRING("lime_cffi_set_finalizer","\x88","\x8e","\xc1","\x29")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CFFI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CFFI_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(CFFI_obj::available,"available");
	HX_MARK_MEMBER_NAME(CFFI_obj::enabled,"enabled");
	HX_MARK_MEMBER_NAME(CFFI_obj::lime_cffi_set_finalizer,"lime_cffi_set_finalizer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CFFI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CFFI_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(CFFI_obj::available,"available");
	HX_VISIT_MEMBER_NAME(CFFI_obj::enabled,"enabled");
	HX_VISIT_MEMBER_NAME(CFFI_obj::lime_cffi_set_finalizer,"lime_cffi_set_finalizer");
};

#endif

hx::Class CFFI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__moduleNames","\x5c","\x9c","\x9c","\x28"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("__findHaxelib","\x86","\xb8","\xe3","\x50"),
	HX_HCSTRING("__loaderTrace","\x52","\xd2","\xb8","\xf1"),
	HX_HCSTRING("__sysName","\xd8","\xa6","\x8e","\xfb"),
	HX_HCSTRING("__tryLoad","\xe1","\x39","\xc4","\xcb"),
	HX_HCSTRING("lime_cffi_set_finalizer","\x88","\x8e","\xc1","\x29"),
	::String(null()) };

void CFFI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.CFFI","\xac","\xd1","\xdf","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CFFI_obj::__GetStatic;
	__mClass->mSetStaticField = &CFFI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CFFI_obj >;
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

void CFFI_obj::__boot()
{
	__moduleNames= null();
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/CFFI.hx",376,0x441ad672)
		{
			HX_STACK_LINE(376)
			bool lazy = false;		HX_STACK_VAR(lazy,"lazy");
			HX_STACK_LINE(376)
			bool tmp = lazy;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(376)
			return ::lime::_system::CFFI_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cffi_set_finalizer","\x88","\x8e","\xc1","\x29"),(int)1,tmp);
		}
		return null();
	}
};
	lime_cffi_set_finalizer= _Function_0_1::Block();
}

} // end namespace lime
} // end namespace system
