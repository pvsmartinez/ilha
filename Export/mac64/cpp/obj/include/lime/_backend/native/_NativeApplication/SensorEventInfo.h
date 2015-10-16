#ifndef INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,SensorEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  SensorEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SensorEventInfo_obj OBJ_;
		SensorEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.SensorEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SensorEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SensorEventInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SensorEventInfo","\xee","\xdf","\xdf","\xb5"); }

		int id;
		Float x;
		Float y;
		Float z;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::SensorEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_SensorEventInfo */ 
