#ifndef INCLUDED_lime_graphics_DOMRenderContext
#define INCLUDED_lime_graphics_DOMRenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  DOMRenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DOMRenderContext_obj OBJ_;
		DOMRenderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.graphics.DOMRenderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DOMRenderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DOMRenderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DOMRenderContext","\x77","\xa5","\xe8","\xcd"); }

		::String accessKey;
		::String align;
		Dynamic attributes;
		::String baseURI;
		int childElementCount;
		Dynamic childNodes;
		Dynamic children;
		Dynamic classList;
		::String className;
		int clientHeight;
		int clientLeft;
		int clientTop;
		int clientWidth;
		::String contentEditable;
		Dynamic dataset;
		::String dir;
		bool draggable;
		::String dropzone;
		Dynamic firstChild;
		Dynamic firstElementChild;
		bool hidden;
		::String id;
		::String innerHTML;
		::String innerText;
		bool isContentEditable;
		::String lang;
		Dynamic lastChild;
		Dynamic lastElementChild;
		::String localName;
		::String namespaceURI;
		Dynamic nextElementSibling;
		Dynamic nextSibling;
		::String nodeName;
		int nodeType;
		::String nodeValue;
		int offsetHeight;
		int offsetLeft;
		Dynamic offsetParent;
		int offsetTop;
		int offsetWidth;
		Dynamic onabort;
		Dynamic onbeforecopy;
		Dynamic onbeforecut;
		Dynamic onbeforepaste;
		Dynamic onblur;
		Dynamic onchange;
		Dynamic onclick;
		Dynamic oncontextmenu;
		Dynamic oncopy;
		Dynamic oncut;
		Dynamic ondblclick;
		Dynamic ondrag;
		Dynamic ondragend;
		Dynamic ondragenter;
		Dynamic ondragleave;
		Dynamic ondragover;
		Dynamic ondragstart;
		Dynamic ondrop;
		Dynamic onerror;
		Dynamic onfocus;
		Dynamic onfullscreenchange;
		Dynamic onfullscreenerror;
		Dynamic oninput;
		Dynamic oninvalid;
		Dynamic onkeydown;
		Dynamic onkeypress;
		Dynamic onkeyup;
		Dynamic onload;
		Dynamic onmousedown;
		Dynamic onmousemove;
		Dynamic onmouseout;
		Dynamic onmouseover;
		Dynamic onmouseup;
		Dynamic onmousewheel;
		Dynamic onpaste;
		Dynamic onreset;
		Dynamic onscroll;
		Dynamic onsearch;
		Dynamic onselect;
		Dynamic onselectstart;
		Dynamic onsubmit;
		Dynamic ontouchcancel;
		Dynamic ontouchend;
		Dynamic ontouchmove;
		Dynamic ontouchstart;
		::String outerHTML;
		::String outerText;
		Dynamic ownerDocument;
		Dynamic parentElement;
		Dynamic parentNode;
		::String prefix;
		Dynamic previousElementSibling;
		Dynamic previousSibling;
		::String pseudo;
		int scrollHeight;
		int scrollLeft;
		int scrollTop;
		int scrollWidth;
		bool spellcheck;
		Dynamic style;
		int tabIndex;
		::String tagName;
		::String textContent;
		::String title;
		bool translate;
		virtual Void addEventListener( ::String type,Dynamic listener,Dynamic useCapture);
		Dynamic addEventListener_dyn();

		virtual Dynamic appendChild( Dynamic newChild);
		Dynamic appendChild_dyn();

		virtual Void blur( );
		Dynamic blur_dyn();

		virtual Void click( );
		Dynamic click_dyn();

		virtual Dynamic cloneNode( bool deep);
		Dynamic cloneNode_dyn();

		virtual int compareDocumentPosition( Dynamic other);
		Dynamic compareDocumentPosition_dyn();

		virtual bool contains( Dynamic other);
		Dynamic contains_dyn();

		virtual bool dispatchEvent( Dynamic event);
		Dynamic dispatchEvent_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual ::String getAttribute( ::String name);
		Dynamic getAttribute_dyn();

		virtual ::String getAttributeNS( ::String namespaceURI,::String localName);
		Dynamic getAttributeNS_dyn();

		virtual Dynamic getAttributeNode( ::String name);
		Dynamic getAttributeNode_dyn();

		virtual Dynamic getAttributeNodeNS( ::String namespaceURI,::String localName);
		Dynamic getAttributeNodeNS_dyn();

		virtual Dynamic getBoundingClientRect( );
		Dynamic getBoundingClientRect_dyn();

		virtual Dynamic getClientRects( );
		Dynamic getClientRects_dyn();

		virtual Dynamic getElementsByClassName( ::String name);
		Dynamic getElementsByClassName_dyn();

		virtual Dynamic getElementsByTagName( ::String name);
		Dynamic getElementsByTagName_dyn();

		virtual Dynamic getElementsByTagNameNS( ::String namespaceURI,::String localName);
		Dynamic getElementsByTagNameNS_dyn();

		virtual bool hasAttribute( ::String name);
		Dynamic hasAttribute_dyn();

		virtual bool hasAttributeNS( ::String namespaceURI,::String localName);
		Dynamic hasAttributeNS_dyn();

		virtual bool hasAttributes( );
		Dynamic hasAttributes_dyn();

		virtual bool hasChildNodes( );
		Dynamic hasChildNodes_dyn();

		virtual Dynamic insertAdjacentElement( ::String where,Dynamic element);
		Dynamic insertAdjacentElement_dyn();

		virtual Void insertAdjacentHTML( ::String where,::String html);
		Dynamic insertAdjacentHTML_dyn();

		virtual Void insertAdjacentText( ::String where,::String text);
		Dynamic insertAdjacentText_dyn();

		virtual Dynamic insertBefore( Dynamic newChild,Dynamic refChild);
		Dynamic insertBefore_dyn();

		virtual bool isDefaultNamespace( ::String namespaceURI);
		Dynamic isDefaultNamespace_dyn();

		virtual bool isEqualNode( Dynamic other);
		Dynamic isEqualNode_dyn();

		virtual bool isSameNode( Dynamic other);
		Dynamic isSameNode_dyn();

		virtual bool isSupported( ::String feature,::String version);
		Dynamic isSupported_dyn();

		virtual ::String lookupNamespaceURI( ::String prefix);
		Dynamic lookupNamespaceURI_dyn();

		virtual ::String lookupPrefix( ::String namespaceURI);
		Dynamic lookupPrefix_dyn();

		virtual bool matchesSelector( ::String selectors);
		Dynamic matchesSelector_dyn();

		virtual Void normalize( );
		Dynamic normalize_dyn();

		virtual Dynamic querySelector( ::String selectors);
		Dynamic querySelector_dyn();

		virtual Dynamic querySelectorAll( ::String selectors);
		Dynamic querySelectorAll_dyn();

		virtual Void remove( );
		Dynamic remove_dyn();

		virtual Void removeAttribute( ::String name);
		Dynamic removeAttribute_dyn();

		virtual Void removeAttributeNS( ::String namespaceURI,::String localName);
		Dynamic removeAttributeNS_dyn();

		virtual Dynamic removeAttributeNode( Dynamic oldAttr);
		Dynamic removeAttributeNode_dyn();

		virtual Dynamic removeChild( Dynamic oldChild);
		Dynamic removeChild_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,Dynamic useCapture);
		Dynamic removeEventListener_dyn();

		virtual Dynamic replaceChild( Dynamic newChild,Dynamic oldChild);
		Dynamic replaceChild_dyn();

		virtual Void requestFullScreen( int flags);
		Dynamic requestFullScreen_dyn();

		virtual Void requestFullscreen( );
		Dynamic requestFullscreen_dyn();

		virtual Void requestPointerLock( );
		Dynamic requestPointerLock_dyn();

		virtual Void scrollByLines( int lines);
		Dynamic scrollByLines_dyn();

		virtual Void scrollByPages( int pages);
		Dynamic scrollByPages_dyn();

		virtual Void scrollIntoView( Dynamic alignWithTop);
		Dynamic scrollIntoView_dyn();

		virtual Void scrollIntoViewIfNeeded( Dynamic centerIfNeeded);
		Dynamic scrollIntoViewIfNeeded_dyn();

		virtual Void setAttribute( ::String name,::String value);
		Dynamic setAttribute_dyn();

		virtual Void setAttributeNS( ::String namespaceURI,::String qualifiedName,::String value);
		Dynamic setAttributeNS_dyn();

		virtual Dynamic setAttributeNode( Dynamic newAttr);
		Dynamic setAttributeNode_dyn();

		virtual Dynamic setAttributeNodeNS( Dynamic newAttr);
		Dynamic setAttributeNodeNS_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_DOMRenderContext */ 
