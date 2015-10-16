#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app_Event_Float_Float_Float_Void
#include <lime/app/Event_Float_Float_Float_Void.h>
#endif
namespace lime{
namespace app{

Void Event_Float_Float_Float_Void_obj::__construct()
{
HX_STACK_FRAME("lime.app.Event_Float_Float_Float_Void","new",0xb243f81a,"lime.app.Event_Float_Float_Float_Void.new","lime/app/Event.hx",25,0xbda45bec)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->listeners = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(29)
	this->priorities = Array_obj< int >::__new();
	HX_STACK_LINE(30)
	this->repeat = Array_obj< bool >::__new();
}
;
	return null();
}

//Event_Float_Float_Float_Void_obj::~Event_Float_Float_Float_Void_obj() { }

Dynamic Event_Float_Float_Float_Void_obj::__CreateEmpty() { return  new Event_Float_Float_Float_Void_obj; }
hx::ObjectPtr< Event_Float_Float_Float_Void_obj > Event_Float_Float_Float_Void_obj::__new()
{  hx::ObjectPtr< Event_Float_Float_Float_Void_obj > _result_ = new Event_Float_Float_Float_Void_obj();
	_result_->__construct();
	return _result_;}

Dynamic Event_Float_Float_Float_Void_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_Float_Float_Float_Void_obj > _result_ = new Event_Float_Float_Float_Void_obj();
	_result_->__construct();
	return _result_;}

Void Event_Float_Float_Float_Void_obj::add( Dynamic listener,hx::Null< bool >  __o_once,hx::Null< int >  __o_priority){
bool once = __o_once.Default(false);
int priority = __o_priority.Default(0);
	HX_STACK_FRAME("lime.app.Event_Float_Float_Float_Void","add",0xb23a19db,"lime.app.Event_Float_Float_Float_Void.add","lime/app/Event.hx",36,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(once,"once")
	HX_STACK_ARG(priority,"priority")
{
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(39)
			int tmp = this->priorities->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			while((true)){
				HX_STACK_LINE(39)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(39)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(39)
				if ((tmp2)){
					HX_STACK_LINE(39)
					break;
				}
				HX_STACK_LINE(39)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(39)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(41)
				int tmp4 = priority;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				int tmp5 = this->priorities->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(41)
				if ((tmp6)){
					HX_STACK_LINE(43)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(43)
					Dynamic tmp8 = listener;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(43)
					this->listeners->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp7,tmp8);
					HX_STACK_LINE(44)
					int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(44)
					int tmp10 = priority;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(44)
					this->priorities->insert(tmp9,tmp10);
					HX_STACK_LINE(45)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(45)
					bool tmp12 = once;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(45)
					this->repeat->insert(tmp11,tmp13);
					HX_STACK_LINE(46)
					return null();
				}
			}
		}
		HX_STACK_LINE(52)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		this->listeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(53)
		int tmp1 = priority;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		this->priorities->push(tmp1);
		HX_STACK_LINE(54)
		bool tmp2 = once;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		this->repeat->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Event_Float_Float_Float_Void_obj,add,(void))

bool Event_Float_Float_Float_Void_obj::has( Dynamic listener){
	HX_STACK_FRAME("lime.app.Event_Float_Float_Float_Void","has",0xb23f6714,"lime.app.Event_Float_Float_Float_Void.has","lime/app/Event.hx",228,0xbda45bec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		cpp::ArrayBase _g1 = this->listeners;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(231)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			if ((tmp1)){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(231)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			Dynamic l = tmp2;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(231)
			++(_g);
			HX_STACK_LINE(233)
			Dynamic tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			bool tmp5 = ::Reflect_obj::compareMethods(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			if ((tmp5)){
				HX_STACK_LINE(233)
				return true;
			}
		}
	}
	HX_STACK_LINE(238)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_Float_Float_Float_Void_obj,has,return )

Void Event_Float_Float_Float_Void_obj::remove( Dynamic listener){
{
		HX_STACK_FRAME("lime.app.Event_Float_Float_Float_Void","remove",0x6adc84ca,"lime.app.Event_Float_Float_Float_Void.remove","lime/app/Event.hx",243,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(246)
		int tmp = this->listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(248)
		while((true)){
			HX_STACK_LINE(248)
			int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(248)
			bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			if ((tmp3)){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(250)
			Dynamic tmp4 = this->listeners->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			bool tmp6 = ::Reflect_obj::compareMethods(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			if ((tmp6)){
				HX_STACK_LINE(252)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(252)
				this->listeners->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp7,(int)1);
				HX_STACK_LINE(253)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(253)
				this->priorities->splice(tmp8,(int)1);
				HX_STACK_LINE(254)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(254)
				this->repeat->splice(tmp9,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_Float_Float_Float_Void_obj,remove,(void))

Void Event_Float_Float_Float_Void_obj::dispatch( Float a,Float a1,Float a2){
{
		HX_STACK_FRAME("lime.app.Event_Float_Float_Float_Void","dispatch",0xafe764c0,"lime.app.Event_Float_Float_Float_Void.dispatch","lime/app/Event.hx",133,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(a1,"a1")
		HX_STACK_ARG(a2,"a2")
		HX_STACK_LINE(135)
		cpp::ArrayBase listeners = this->listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(136)
		Array< bool > repeat = this->repeat;		HX_STACK_VAR(repeat,"repeat");
		HX_STACK_LINE(137)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			bool tmp = (i < listeners->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(139)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			if ((tmp1)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(141)
			Dynamic tmp2 = listeners->__GetItem(i);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(14)
			Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(14)
			Float tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(14)
			Float tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			tmp2(tmp3,tmp4,tmp5).Cast< Void >();
			HX_STACK_LINE(143)
			bool tmp6 = repeat->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			if ((tmp7)){
				HX_STACK_LINE(145)
				Dynamic tmp8 = listeners->__GetItem(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(145)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(145)
				this->remove(tmp9);
			}
			else{
				HX_STACK_LINE(149)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Event_Float_Float_Float_Void_obj,dispatch,(void))


Event_Float_Float_Float_Void_obj::Event_Float_Float_Float_Void_obj()
{
}

void Event_Float_Float_Float_Void_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event_Float_Float_Float_Void);
	HX_MARK_MEMBER_NAME(repeat,"repeat");
	HX_MARK_MEMBER_NAME(priorities,"priorities");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_END_CLASS();
}

void Event_Float_Float_Float_Void_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(repeat,"repeat");
	HX_VISIT_MEMBER_NAME(priorities,"priorities");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
}

Dynamic Event_Float_Float_Float_Void_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorities") ) { return priorities; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_Float_Float_Float_Void_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { repeat=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorities") ) { priorities=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_Float_Float_Float_Void_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"));
	outFields->push(HX_HCSTRING("priorities","\xc2","\x50","\x53","\xe4"));
	outFields->push(HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Event_Float_Float_Float_Void_obj,repeat),HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Event_Float_Float_Float_Void_obj,priorities),HX_HCSTRING("priorities","\xc2","\x50","\x53","\xe4")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Event_Float_Float_Float_Void_obj,listeners),HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("priorities","\xc2","\x50","\x53","\xe4"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("listeners","\x7f","\x65","\x8e","\xf3"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_Float_Float_Float_Void_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_Float_Float_Float_Void_obj::__mClass,"__mClass");
};

#endif

hx::Class Event_Float_Float_Float_Void_obj::__mClass;

void Event_Float_Float_Float_Void_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Event_Float_Float_Float_Void","\x28","\xa3","\x73","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Event_Float_Float_Float_Void_obj >;
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
} // end namespace app
