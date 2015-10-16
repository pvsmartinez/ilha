#ifndef INCLUDED_openfl_IAssetCache
#define INCLUDED_openfl_IAssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS1(openfl,IAssetCache)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,text,Font)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  IAssetCache_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAssetCache_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool get_enabled( )=0;
virtual Dynamic get_enabled_dyn()=0;
		virtual bool set_enabled( bool value)=0;
virtual Dynamic set_enabled_dyn()=0;
		virtual Void clear( ::String prefix)=0;
virtual Dynamic clear_dyn()=0;
		virtual ::openfl::display::BitmapData getBitmapData( ::String id)=0;
virtual Dynamic getBitmapData_dyn()=0;
		virtual ::openfl::text::Font getFont( ::String id)=0;
virtual Dynamic getFont_dyn()=0;
		virtual ::openfl::media::Sound getSound( ::String id)=0;
virtual Dynamic getSound_dyn()=0;
		virtual bool hasBitmapData( ::String id)=0;
virtual Dynamic hasBitmapData_dyn()=0;
		virtual bool hasFont( ::String id)=0;
virtual Dynamic hasFont_dyn()=0;
		virtual bool hasSound( ::String id)=0;
virtual Dynamic hasSound_dyn()=0;
		virtual bool removeBitmapData( ::String id)=0;
virtual Dynamic removeBitmapData_dyn()=0;
		virtual bool removeFont( ::String id)=0;
virtual Dynamic removeFont_dyn()=0;
		virtual bool removeSound( ::String id)=0;
virtual Dynamic removeSound_dyn()=0;
		virtual Void setBitmapData( ::String id,::openfl::display::BitmapData bitmapData)=0;
virtual Dynamic setBitmapData_dyn()=0;
		virtual Void setFont( ::String id,::openfl::text::Font font)=0;
virtual Dynamic setFont_dyn()=0;
		virtual Void setSound( ::String id,::openfl::media::Sound sound)=0;
virtual Dynamic setSound_dyn()=0;
};



template<typename IMPL>
class IAssetCache_delegate_ : public IAssetCache_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAssetCache_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		bool get_enabled( ) { return mDelegate->get_enabled();}
		Dynamic get_enabled_dyn() { return mDelegate->get_enabled_dyn();}
		bool set_enabled( bool value) { return mDelegate->set_enabled(value);}
		Dynamic set_enabled_dyn() { return mDelegate->set_enabled_dyn();}
		Void clear( ::String prefix) { return mDelegate->clear(prefix);}
		Dynamic clear_dyn() { return mDelegate->clear_dyn();}
		::openfl::display::BitmapData getBitmapData( ::String id) { return mDelegate->getBitmapData(id);}
		Dynamic getBitmapData_dyn() { return mDelegate->getBitmapData_dyn();}
		::openfl::text::Font getFont( ::String id) { return mDelegate->getFont(id);}
		Dynamic getFont_dyn() { return mDelegate->getFont_dyn();}
		::openfl::media::Sound getSound( ::String id) { return mDelegate->getSound(id);}
		Dynamic getSound_dyn() { return mDelegate->getSound_dyn();}
		bool hasBitmapData( ::String id) { return mDelegate->hasBitmapData(id);}
		Dynamic hasBitmapData_dyn() { return mDelegate->hasBitmapData_dyn();}
		bool hasFont( ::String id) { return mDelegate->hasFont(id);}
		Dynamic hasFont_dyn() { return mDelegate->hasFont_dyn();}
		bool hasSound( ::String id) { return mDelegate->hasSound(id);}
		Dynamic hasSound_dyn() { return mDelegate->hasSound_dyn();}
		bool removeBitmapData( ::String id) { return mDelegate->removeBitmapData(id);}
		Dynamic removeBitmapData_dyn() { return mDelegate->removeBitmapData_dyn();}
		bool removeFont( ::String id) { return mDelegate->removeFont(id);}
		Dynamic removeFont_dyn() { return mDelegate->removeFont_dyn();}
		bool removeSound( ::String id) { return mDelegate->removeSound(id);}
		Dynamic removeSound_dyn() { return mDelegate->removeSound_dyn();}
		Void setBitmapData( ::String id,::openfl::display::BitmapData bitmapData) { return mDelegate->setBitmapData(id,bitmapData);}
		Dynamic setBitmapData_dyn() { return mDelegate->setBitmapData_dyn();}
		Void setFont( ::String id,::openfl::text::Font font) { return mDelegate->setFont(id,font);}
		Dynamic setFont_dyn() { return mDelegate->setFont_dyn();}
		Void setSound( ::String id,::openfl::media::Sound sound) { return mDelegate->setSound(id,sound);}
		Dynamic setSound_dyn() { return mDelegate->setSound_dyn();}
};

} // end namespace openfl

#endif /* INCLUDED_openfl_IAssetCache */ 
