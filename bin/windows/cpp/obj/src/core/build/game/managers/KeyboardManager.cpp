#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_entities_Ship
#include <core/build/game/entities/Ship.h>
#endif
#ifndef INCLUDED_core_build_game_managers_KeyboardManager
#include <core/build/game/managers/KeyboardManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_Universe
#include <core/build/game/managers/Universe.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
namespace core{
namespace build{
namespace game{
namespace managers{

Void KeyboardManager_obj::__construct()
{
HX_STACK_PUSH("KeyboardManager::new","core/build/game/managers/KeyboardManager.hx",10);
{
	HX_STACK_LINE(16)
	this->rightkeydown = false;
	HX_STACK_LINE(15)
	this->leftkeydown = false;
	HX_STACK_LINE(14)
	this->downkeydown = false;
	HX_STACK_LINE(13)
	this->upkeydown = false;
}
;
	return null();
}

KeyboardManager_obj::~KeyboardManager_obj() { }

Dynamic KeyboardManager_obj::__CreateEmpty() { return  new KeyboardManager_obj; }
hx::ObjectPtr< KeyboardManager_obj > KeyboardManager_obj::__new()
{  hx::ObjectPtr< KeyboardManager_obj > result = new KeyboardManager_obj();
	result->__construct();
	return result;}

Dynamic KeyboardManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyboardManager_obj > result = new KeyboardManager_obj();
	result->__construct();
	return result;}

Void KeyboardManager_obj::keyup( ::flash::events::KeyboardEvent event){
{
		HX_STACK_PUSH("KeyboardManager::keyup","core/build/game/managers/KeyboardManager.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(37)
		int key = event->keyCode;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(39)
		if (((bool((key == (int)65)) || bool((key == (int)37))))){
			HX_STACK_LINE(39)
			::core::build::game::managers::Universe_obj::player->endmovement();
			HX_STACK_LINE(39)
			this->leftkeydown = false;
		}
		HX_STACK_LINE(40)
		if (((bool((key == (int)68)) || bool((key == (int)39))))){
			HX_STACK_LINE(40)
			::core::build::game::managers::Universe_obj::player->endmovement();
			HX_STACK_LINE(40)
			this->rightkeydown = false;
		}
		HX_STACK_LINE(41)
		if (((bool((key == (int)87)) || bool((key == (int)38))))){
			HX_STACK_LINE(41)
			this->upkeydown = false;
		}
		HX_STACK_LINE(42)
		if (((bool((key == (int)83)) || bool((key == (int)40))))){
			HX_STACK_LINE(42)
			this->downkeydown = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardManager_obj,keyup,(void))

Void KeyboardManager_obj::keydown( ::flash::events::KeyboardEvent event){
{
		HX_STACK_PUSH("KeyboardManager::keydown","core/build/game/managers/KeyboardManager.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(28)
		int key = event->keyCode;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(30)
		if (((bool((key == (int)65)) || bool((key == (int)37))))){
			HX_STACK_LINE(30)
			this->leftkeydown = true;
		}
		HX_STACK_LINE(31)
		if (((bool((key == (int)68)) || bool((key == (int)39))))){
			HX_STACK_LINE(31)
			this->rightkeydown = true;
		}
		HX_STACK_LINE(32)
		if (((bool((key == (int)87)) || bool((key == (int)38))))){
			HX_STACK_LINE(32)
			this->upkeydown = true;
		}
		HX_STACK_LINE(33)
		if (((bool((key == (int)83)) || bool((key == (int)40))))){
			HX_STACK_LINE(33)
			this->downkeydown = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardManager_obj,keydown,(void))

Void KeyboardManager_obj::initiate( ){
{
		HX_STACK_PUSH("KeyboardManager::initiate","core/build/game/managers/KeyboardManager.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(23)
		::core::build::game::managers::Universe_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keydown_dyn(),null(),null(),null());
		HX_STACK_LINE(24)
		::core::build::game::managers::Universe_obj::stage->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyup_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardManager_obj,initiate,(void))


KeyboardManager_obj::KeyboardManager_obj()
{
}

void KeyboardManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyboardManager);
	HX_MARK_MEMBER_NAME(rightkeydown,"rightkeydown");
	HX_MARK_MEMBER_NAME(leftkeydown,"leftkeydown");
	HX_MARK_MEMBER_NAME(downkeydown,"downkeydown");
	HX_MARK_MEMBER_NAME(upkeydown,"upkeydown");
	HX_MARK_END_CLASS();
}

void KeyboardManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rightkeydown,"rightkeydown");
	HX_VISIT_MEMBER_NAME(leftkeydown,"leftkeydown");
	HX_VISIT_MEMBER_NAME(downkeydown,"downkeydown");
	HX_VISIT_MEMBER_NAME(upkeydown,"upkeydown");
}

Dynamic KeyboardManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"keyup") ) { return keyup_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keydown") ) { return keydown_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initiate") ) { return initiate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upkeydown") ) { return upkeydown; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftkeydown") ) { return leftkeydown; }
		if (HX_FIELD_EQ(inName,"downkeydown") ) { return downkeydown; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightkeydown") ) { return rightkeydown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyboardManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"upkeydown") ) { upkeydown=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"leftkeydown") ) { leftkeydown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"downkeydown") ) { downkeydown=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rightkeydown") ) { rightkeydown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rightkeydown"));
	outFields->push(HX_CSTRING("leftkeydown"));
	outFields->push(HX_CSTRING("downkeydown"));
	outFields->push(HX_CSTRING("upkeydown"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyup"),
	HX_CSTRING("keydown"),
	HX_CSTRING("initiate"),
	HX_CSTRING("rightkeydown"),
	HX_CSTRING("leftkeydown"),
	HX_CSTRING("downkeydown"),
	HX_CSTRING("upkeydown"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardManager_obj::__mClass,"__mClass");
};

Class KeyboardManager_obj::__mClass;

void KeyboardManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.managers.KeyboardManager"), hx::TCanCast< KeyboardManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KeyboardManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers
