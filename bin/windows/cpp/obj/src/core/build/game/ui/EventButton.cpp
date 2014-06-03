#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_managers_AssetManager
#include <core/build/game/managers/AssetManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_Universe
#include <core/build/game/managers/Universe.h>
#endif
#ifndef INCLUDED_core_build_game_ui_EventButton
#include <core/build/game/ui/EventButton.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
namespace core{
namespace build{
namespace game{
namespace ui{

Void EventButton_obj::__construct(::flash::display::BitmapData texture,::flash::display::BitmapData mouseovertexture,::String message,hx::Null< int >  __o_size,Dynamic clickfunction)
{
HX_STACK_PUSH("EventButton::new","core/build/game/ui/EventButton.hx",29);
int size = __o_size.Default(20);
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	this->base = ::flash::display::Bitmap_obj::__new(texture,null(),null());
	HX_STACK_LINE(32)
	this->addChild(this->base);
	HX_STACK_LINE(34)
	this->text = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(35)
	this->text->set_width(this->base->get_width());
	HX_STACK_LINE(36)
	this->text->set_height(this->base->get_height());
	HX_STACK_LINE(37)
	this->text->set_selectable(false);
	HX_STACK_LINE(38)
	this->text->set_mouseEnabled(false);
	HX_STACK_LINE(39)
	::flash::text::TextFormat textformat = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(textformat,"textformat");
	HX_STACK_LINE(40)
	textformat->font = ::core::build::game::managers::Universe_obj::assets->kenpixelfont->fontName;
	HX_STACK_LINE(41)
	textformat->size = size;
	HX_STACK_LINE(42)
	textformat->align = ::flash::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(43)
	this->text->set_embedFonts(true);
	HX_STACK_LINE(44)
	this->text->set_defaultTextFormat(textformat);
	HX_STACK_LINE(45)
	this->text->set_text(message);
	HX_STACK_LINE(46)
	this->text->set_textColor((int)16777215);
	HX_STACK_LINE(47)
	this->text->set_y(((Float(this->base->get_height()) / Float((int)2)) - (Float(this->text->get_textHeight()) / Float(1.5))));
	HX_STACK_LINE(48)
	this->addChild(this->text);
	HX_STACK_LINE(50)
	this->mouseovertexturedata = mouseovertexture;
	HX_STACK_LINE(51)
	this->texturedata = texture;
	HX_STACK_LINE(52)
	this->onclickfunction = clickfunction;
	HX_STACK_LINE(60)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->mousedown_dyn(),null(),null(),null());
	HX_STACK_LINE(61)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->mouseup_dyn(),null(),null(),null());
	HX_STACK_LINE(62)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->mouseover_dyn(),null(),null(),null());
	HX_STACK_LINE(63)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->mouseout_dyn(),null(),null(),null());
}
;
	return null();
}

EventButton_obj::~EventButton_obj() { }

Dynamic EventButton_obj::__CreateEmpty() { return  new EventButton_obj; }
hx::ObjectPtr< EventButton_obj > EventButton_obj::__new(::flash::display::BitmapData texture,::flash::display::BitmapData mouseovertexture,::String message,hx::Null< int >  __o_size,Dynamic clickfunction)
{  hx::ObjectPtr< EventButton_obj > result = new EventButton_obj();
	result->__construct(texture,mouseovertexture,message,__o_size,clickfunction);
	return result;}

Dynamic EventButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventButton_obj > result = new EventButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void EventButton_obj::mouseout( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("EventButton::mouseout","core/build/game/ui/EventButton.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(116)
		this->base->set_bitmapData(this->texturedata);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,mouseout,(void))

Void EventButton_obj::mouseover( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("EventButton::mouseover","core/build/game/ui/EventButton.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(112)
		if (((this->base->bitmapData != this->mouseovertexturedata))){
			HX_STACK_LINE(112)
			::core::build::game::managers::Universe_obj::assets->playsfx((int)2);
		}
		HX_STACK_LINE(113)
		this->base->set_bitmapData(this->mouseovertexturedata);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,mouseover,(void))

Void EventButton_obj::mouseup( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("EventButton::mouseup","core/build/game/ui/EventButton.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(107)
		if (((this->onclickfunction_dyn() != null()))){
			HX_STACK_LINE(108)
			this->onclickfunction();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,mouseup,(void))

Void EventButton_obj::mousedown( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("EventButton::mousedown","core/build/game/ui/EventButton.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(103)
		this->base->set_bitmapData(this->mouseovertexturedata);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,mousedown,(void))

Void EventButton_obj::touchout( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("EventButton::touchout","core/build/game/ui/EventButton.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(99)
		this->base->set_bitmapData(this->texturedata);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,touchout,(void))

Void EventButton_obj::touchover( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("EventButton::touchover","core/build/game/ui/EventButton.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(95)
		if (((this->base->bitmapData != this->mouseovertexturedata))){
			HX_STACK_LINE(95)
			::core::build::game::managers::Universe_obj::assets->playsfx((int)2);
		}
		HX_STACK_LINE(96)
		this->base->set_bitmapData(this->mouseovertexturedata);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,touchover,(void))

Void EventButton_obj::touchend( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("EventButton::touchend","core/build/game/ui/EventButton.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(90)
		if (((this->onclickfunction_dyn() != null()))){
			HX_STACK_LINE(91)
			this->onclickfunction();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,touchend,(void))

Void EventButton_obj::touchbegin( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("EventButton::touchbegin","core/build/game/ui/EventButton.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(86)
		this->base->set_bitmapData(this->mouseovertexturedata);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EventButton_obj,touchbegin,(void))

Void EventButton_obj::remove( ){
{
		HX_STACK_PUSH("EventButton::remove","core/build/game/ui/EventButton.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		this->removeChild(this->base);
		HX_STACK_LINE(69)
		this->removeChild(this->text);
		HX_STACK_LINE(70)
		this->base = null();
		HX_STACK_LINE(71)
		this->text = null();
		HX_STACK_LINE(79)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->mousedown_dyn(),null());
		HX_STACK_LINE(80)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->mouseup_dyn(),null());
		HX_STACK_LINE(81)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->mouseover_dyn(),null());
		HX_STACK_LINE(82)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->mouseout_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventButton_obj,remove,(void))


EventButton_obj::EventButton_obj()
{
}

void EventButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventButton);
	HX_MARK_MEMBER_NAME(onclickfunction,"onclickfunction");
	HX_MARK_MEMBER_NAME(texturedata,"texturedata");
	HX_MARK_MEMBER_NAME(mouseovertexturedata,"mouseovertexturedata");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(base,"base");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EventButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onclickfunction,"onclickfunction");
	HX_VISIT_MEMBER_NAME(texturedata,"texturedata");
	HX_VISIT_MEMBER_NAME(mouseovertexturedata,"mouseovertexturedata");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(base,"base");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EventButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"base") ) { return base; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mouseout") ) { return mouseout_dyn(); }
		if (HX_FIELD_EQ(inName,"touchout") ) { return touchout_dyn(); }
		if (HX_FIELD_EQ(inName,"touchend") ) { return touchend_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseover") ) { return mouseover_dyn(); }
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchover") ) { return touchover_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"touchbegin") ) { return touchbegin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"texturedata") ) { return texturedata; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onclickfunction") ) { return onclickfunction; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouseovertexturedata") ) { return mouseovertexturedata; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"texturedata") ) { texturedata=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onclickfunction") ) { onclickfunction=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mouseovertexturedata") ) { mouseovertexturedata=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("texturedata"));
	outFields->push(HX_CSTRING("mouseovertexturedata"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("base"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mouseout"),
	HX_CSTRING("mouseover"),
	HX_CSTRING("mouseup"),
	HX_CSTRING("mousedown"),
	HX_CSTRING("touchout"),
	HX_CSTRING("touchover"),
	HX_CSTRING("touchend"),
	HX_CSTRING("touchbegin"),
	HX_CSTRING("remove"),
	HX_CSTRING("onclickfunction"),
	HX_CSTRING("texturedata"),
	HX_CSTRING("mouseovertexturedata"),
	HX_CSTRING("text"),
	HX_CSTRING("base"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventButton_obj::__mClass,"__mClass");
};

Class EventButton_obj::__mClass;

void EventButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.ui.EventButton"), hx::TCanCast< EventButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EventButton_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace ui
