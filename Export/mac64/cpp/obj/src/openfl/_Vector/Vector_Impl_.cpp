#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#include <openfl/_Vector/Vector_Impl_.h>
#endif
namespace openfl{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase Vector_Impl__obj::_new( Dynamic length,Dynamic fixed){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","_new",0x72cc24a2,"openfl._Vector.Vector_Impl_._new","openfl/Vector.hx",780,0x4a01873c)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(780)
	cpp::ArrayBase this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(782)
	Dynamic tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(782)
	this1 = Dynamic( Array_obj<Dynamic>::__new() )->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(780)
	cpp::ArrayBase tmp1 = ((cpp::ArrayBase)(this1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(780)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,_new,return )

cpp::ArrayBase Vector_Impl__obj::concat( cpp::ArrayBase this1,cpp::ArrayBase a){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","concat",0x0c502a95,"openfl._Vector.Vector_Impl_.concat","openfl/Vector.hx",789,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(789)
	return this1->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,concat,return )

cpp::ArrayBase Vector_Impl__obj::copy( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","copy",0x7571caf6,"openfl._Vector.Vector_Impl_.copy","openfl/Vector.hx",796,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(796)
	return this1->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,copy,return )

Dynamic Vector_Impl__obj::iterator( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","iterator",0x11868daf,"openfl._Vector.Vector_Impl_.iterator","openfl/Vector.hx",801,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(803)
	Dynamic tmp = this1->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(803)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,iterator,return )

::String Vector_Impl__obj::join( cpp::ArrayBase this1,::String sep){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","join",0x7a12432b,"openfl._Vector.Vector_Impl_.join","openfl/Vector.hx",808,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(810)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(810)
	::String tmp1 = this1->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(810)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,join,return )

Dynamic Vector_Impl__obj::pop( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","pop",0x4571b170,"openfl._Vector.Vector_Impl_.pop","openfl/Vector.hx",815,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(817)
	Dynamic tmp = this1->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(817)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,pop,return )

int Vector_Impl__obj::push( cpp::ArrayBase this1,Dynamic x){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","push",0x7e0e211b,"openfl._Vector.Vector_Impl_.push","openfl/Vector.hx",822,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(824)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(824)
	int tmp1 = this1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(824)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,push,return )

Void Vector_Impl__obj::reverse( cpp::ArrayBase this1){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","reverse",0xc6996881,"openfl._Vector.Vector_Impl_.reverse","openfl/Vector.hx",831,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(831)
		this1->__Field(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"), hx::paccDynamic )();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,reverse,(void))

Dynamic Vector_Impl__obj::shift( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","shift",0x7fe33621,"openfl._Vector.Vector_Impl_.shift","openfl/Vector.hx",836,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(838)
	Dynamic tmp = this1->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(838)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,shift,return )

Void Vector_Impl__obj::unshift( cpp::ArrayBase this1,Dynamic x){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","unshift",0x245112e8,"openfl._Vector.Vector_Impl_.unshift","openfl/Vector.hx",843,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(845)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(845)
		this1->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,unshift,(void))

cpp::ArrayBase Vector_Impl__obj::slice( cpp::ArrayBase this1,Dynamic pos,Dynamic end){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","slice",0x82880df1,"openfl._Vector.Vector_Impl_.slice","openfl/Vector.hx",850,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(852)
	Dynamic tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(852)
	return this1->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,slice,return )

Void Vector_Impl__obj::sort( cpp::ArrayBase this1,Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.Vector_Impl_","sort",0x8005369f,"openfl._Vector.Vector_Impl_.sort","openfl/Vector.hx",857,0x4a01873c)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(859)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(859)
		this1->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sort,(void))

cpp::ArrayBase Vector_Impl__obj::splice( cpp::ArrayBase this1,int pos,int len){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","splice",0x041ea6fd,"openfl._Vector.Vector_Impl_.splice","openfl/Vector.hx",864,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(866)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(866)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(866)
	return this1->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp,tmp1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,splice,return )

::String Vector_Impl__obj::toString( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toString",0xb65b146d,"openfl._Vector.Vector_Impl_.toString","openfl/Vector.hx",871,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(873)
	::String tmp = this1->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(873)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toString,return )

int Vector_Impl__obj::indexOf( cpp::ArrayBase this1,Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","indexOf",0x8c5c7828,"openfl._Vector.Vector_Impl_.indexOf","openfl/Vector.hx",878,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(880)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(880)
		Dynamic tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(880)
		int tmp2 = this1->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,indexOf,return )

int Vector_Impl__obj::lastIndexOf( cpp::ArrayBase this1,Dynamic x,Dynamic from){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","lastIndexOf",0x5bdcc7f2,"openfl._Vector.Vector_Impl_.lastIndexOf","openfl/Vector.hx",885,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
	HX_STACK_LINE(887)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(887)
	Dynamic tmp1 = from;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(887)
	int tmp2 = this1->__Field(HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"), hx::paccDynamic )(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(887)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,lastIndexOf,return )

Dynamic Vector_Impl__obj::get( cpp::ArrayBase this1,int index){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get",0x456ad475,"openfl._Vector.Vector_Impl_.get","openfl/Vector.hx",892,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(897)
	Dynamic tmp = this1->__GetItem(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,get,return )

Dynamic Vector_Impl__obj::set( cpp::ArrayBase this1,int index,Dynamic value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set",0x4573ef81,"openfl._Vector.Vector_Impl_.set","openfl/Vector.hx",903,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(908)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	Dynamic tmp1 = hx::IndexRef((this1).mPtr,index) = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,set,return )

cpp::ArrayBase Vector_Impl__obj::ofArray( cpp::ArrayBase a){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","ofArray",0x348f5861,"openfl._Vector.Vector_Impl_.ofArray","openfl/Vector.hx",914,0x4a01873c)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(916)
	cpp::ArrayBase tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(916)
	{
		HX_STACK_LINE(916)
		cpp::ArrayBase tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(916)
		{
			HX_STACK_LINE(916)
			cpp::ArrayBase this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(916)
			this1 = Dynamic( Array_obj<Dynamic>::__new() )->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(null());
			HX_STACK_LINE(916)
			tmp1 = ((cpp::ArrayBase)(this1));
		}
		HX_STACK_LINE(916)
		cpp::ArrayBase this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(916)
		tmp = ((cpp::ArrayBase)(this1))->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(((cpp::ArrayBase)(a)));
	}
	HX_STACK_LINE(916)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,ofArray,return )

cpp::ArrayBase Vector_Impl__obj::convert( cpp::ArrayBase v){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","convert",0xc6672d52,"openfl._Vector.Vector_Impl_.convert","openfl/Vector.hx",921,0x4a01873c)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(923)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(v));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(923)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,convert,return )

cpp::ArrayBase Vector_Impl__obj::fromHaxeVector( cpp::ArrayBase value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromHaxeVector",0x36245614,"openfl._Vector.Vector_Impl_.fromHaxeVector","openfl/Vector.hx",928,0x4a01873c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(930)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(value));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(930)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromHaxeVector,return )

cpp::ArrayBase Vector_Impl__obj::toHaxeVector( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toHaxeVector",0x8e47e325,"openfl._Vector.Vector_Impl_.toHaxeVector","openfl/Vector.hx",935,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(937)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(this1));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(937)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toHaxeVector,return )

int Vector_Impl__obj::get_length( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get_length",0x93e47ab0,"openfl._Vector.Vector_Impl_.get_length","openfl/Vector.hx",949,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(951)
	int tmp = this1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(951)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

int Vector_Impl__obj::set_length( cpp::ArrayBase this1,int value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set_length",0x97621924,"openfl._Vector.Vector_Impl_.set_length","openfl/Vector.hx",956,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(958)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(958)
	this1->__Field(HX_HCSTRING("__SetSizeExact","\x7c","\x25","\xcd","\x82"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(959)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(959)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_length,return )

bool Vector_Impl__obj::get_fixed( cpp::ArrayBase this1){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get_fixed",0xf51a5aea,"openfl._Vector.Vector_Impl_.get_fixed","openfl/Vector.hx",966,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(966)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_fixed,return )

bool Vector_Impl__obj::set_fixed( cpp::ArrayBase this1,bool value){
	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set_fixed",0xd86b46f6,"openfl._Vector.Vector_Impl_.set_fixed","openfl/Vector.hx",971,0x4a01873c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(973)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(973)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_fixed,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { outValue = pop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"push") ) { outValue = push_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { outValue = shift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"slice") ) { outValue = slice_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"splice") ) { outValue = splice_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unshift") ) { outValue = unshift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ofArray") ) { outValue = ofArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"convert") ) { outValue = convert_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_fixed") ) { outValue = get_fixed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed") ) { outValue = set_fixed_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { outValue = lastIndexOf_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toHaxeVector") ) { outValue = toHaxeVector_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromHaxeVector") ) { outValue = fromHaxeVector_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("ofArray","\x02","\x29","\xf2","\x88"),
	HX_HCSTRING("convert","\xf3","\xfd","\xc9","\x1a"),
	HX_HCSTRING("fromHaxeVector","\x93","\x4b","\x75","\x07"),
	HX_HCSTRING("toHaxeVector","\xe4","\x2a","\x28","\xb1"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_fixed","\xcb","\x55","\x4b","\x44"),
	HX_HCSTRING("set_fixed","\xd7","\x41","\x9c","\x27"),
	::String(null()) };

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.Vector_Impl_","\xcd","\x98","\xe3","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vector_Impl__obj >;
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
} // end namespace _Vector
