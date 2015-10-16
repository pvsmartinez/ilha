#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct(::String path)
{
HX_STACK_FRAME("haxe.io.Path","new",0x1b96d677,"haxe.io.Path.new","/usr/local/lib/haxe/std/haxe/io/Path.hx",76,0xc99b0f1c)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(77)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING(".","\x2e","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("..","\x40","\x28","\x00","\x00"))){
		HX_STACK_LINE(79)
		this->dir = path;
		HX_STACK_LINE(80)
		this->file = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(81)
		return null();
	}
	HX_STACK_LINE(83)
	int tmp1 = path.lastIndexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	int c1 = tmp1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(84)
	int tmp2 = path.lastIndexOf(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	int c2 = tmp2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(85)
	bool tmp3 = (c1 < c2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	if ((tmp3)){
		HX_STACK_LINE(86)
		int tmp4 = c2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		::String tmp5 = path.substr((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		this->dir = tmp5;
		HX_STACK_LINE(87)
		int tmp6 = (c2 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::String tmp7 = path.substr(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		path = tmp7;
		HX_STACK_LINE(88)
		this->backslash = true;
	}
	else{
		HX_STACK_LINE(89)
		bool tmp4 = (c2 < c1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		if ((tmp4)){
			HX_STACK_LINE(90)
			int tmp5 = c1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::String tmp6 = path.substr((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			this->dir = tmp6;
			HX_STACK_LINE(91)
			int tmp7 = (c1 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			::String tmp8 = path.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			path = tmp8;
		}
		else{
			HX_STACK_LINE(93)
			this->dir = null();
		}
	}
	HX_STACK_LINE(94)
	int tmp4 = path.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(94)
	int cp = tmp4;		HX_STACK_VAR(cp,"cp");
	HX_STACK_LINE(95)
	bool tmp5 = (cp != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	if ((tmp5)){
		HX_STACK_LINE(96)
		int tmp6 = (cp + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		::String tmp7 = path.substr(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		this->ext = tmp7;
		HX_STACK_LINE(97)
		int tmp8 = cp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		::String tmp9 = path.substr((int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		this->file = tmp9;
	}
	else{
		HX_STACK_LINE(99)
		this->ext = null();
		HX_STACK_LINE(100)
		this->file = path;
	}
}
;
	return null();
}

//Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{  hx::ObjectPtr< Path_obj > _result_ = new Path_obj();
	_result_->__construct(path);
	return _result_;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > _result_ = new Path_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Path_obj::toString( ){
	HX_STACK_FRAME("haxe.io.Path","toString",0xc0ab5735,"haxe.io.Path.toString","/usr/local/lib/haxe/std/haxe/io/Path.hx",114,0xc99b0f1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	::String tmp = this->dir;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	if ((tmp1)){
		HX_STACK_LINE(115)
		tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(115)
		::String tmp3 = this->dir;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		bool tmp4 = this->backslash;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		if ((tmp4)){
			HX_STACK_LINE(115)
			tmp5 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(115)
			tmp5 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(115)
		tmp2 = (tmp3 + tmp5);
	}
	HX_STACK_LINE(115)
	::String tmp3 = this->file;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	::String tmp5 = this->ext;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	if ((tmp6)){
		HX_STACK_LINE(115)
		tmp7 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(115)
		::String tmp8 = this->ext;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		tmp7 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + tmp8);
	}
	HX_STACK_LINE(115)
	::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(115)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toString,return )

::String Path_obj::withoutDirectory( ::String path){
	HX_STACK_FRAME("haxe.io.Path","withoutDirectory",0xdf35ce8e,"haxe.io.Path.withoutDirectory","/usr/local/lib/haxe/std/haxe/io/Path.hx",134,0xc99b0f1c)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(135)
	::haxe::io::Path tmp = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::haxe::io::Path s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(136)
	s->dir = null();
	HX_STACK_LINE(137)
	::String tmp1 = s->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutDirectory,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
}

Dynamic Path_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
	}
	return super::__Field(inName,inCallProp);
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"withoutDirectory") ) { outValue = withoutDirectory_dyn(); return true;  }
	}
	return false;
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Path_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsString,(int)offsetof(Path_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(int)offsetof(Path_obj,ext),HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(Path_obj,backslash),HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

hx::Class Path_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("withoutDirectory","\x05","\x17","\xd2","\x7a"),
	::String(null()) };

void Path_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Path","\x05","\xcf","\xc6","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Path_obj >;
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

} // end namespace haxe
} // end namespace io
