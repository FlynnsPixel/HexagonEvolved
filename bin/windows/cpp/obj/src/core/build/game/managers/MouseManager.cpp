#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_managers_KeyboardManager
#include <core/build/game/managers/KeyboardManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_MouseManager
#include <core/build/game/managers/MouseManager.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
namespace core{
namespace build{
namespace game{
namespace managers{

Void MouseManager_obj::__construct()
{
HX_STACK_PUSH("MouseManager::new","core/build/game/managers/MouseManager.hx",12);
{
	HX_STACK_LINE(15)
	this->mouseisdown = false;
}
;
	return null();
}

MouseManager_obj::~MouseManager_obj() { }

Dynamic MouseManager_obj::__CreateEmpty() { return  new MouseManager_obj; }
hx::ObjectPtr< MouseManager_obj > MouseManager_obj::__new()
{  hx::ObjectPtr< MouseManager_obj > result = new MouseManager_obj();
	result->__construct();
	return result;}

Dynamic MouseManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseManager_obj > result = new MouseManager_obj();
	result->__construct();
	return result;}

Void MouseManager_obj::mouseup( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("MouseManager::mouseup","core/build/game/managers/MouseManager.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(50)
		this->mouseisdown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MouseManager_obj,mouseup,(void))

Void MouseManager_obj::mousedown( ::flash::events::MouseEvent event){
{
		HX_STACK_PUSH("MouseManager::mousedown","core/build/game/managers/MouseManager.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(46)
		this->mouseisdown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MouseManager_obj,mousedown,(void))

Void MouseManager_obj::touchup( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("MouseManager::touchup","core/build/game/managers/MouseManager.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(41)
		this->mouseisdown = false;
		HX_STACK_LINE(42)
		::core::build::game::managers::Universe_obj::keyboard->rightkeydown = false;
		HX_STACK_LINE(43)
		::core::build::game::managers::Universe_obj::keyboard->leftkeydown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MouseManager_obj,touchup,(void))

Void MouseManager_obj::touchdown( ::flash::events::TouchEvent event){
{
		HX_STACK_PUSH("MouseManager::touchdown","core/build/game/managers/MouseManager.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(32)
		this->mouseisdown = true;
		HX_STACK_LINE(33)
		if (((::core::build::game::managers::Universe_obj::stage->get_mouseX() >= (Float(::core::build::game::managers::Universe_obj::stage->get_stageWidth()) / Float((int)2))))){
			HX_STACK_LINE(33)
			::core::build::game::managers::Universe_obj::keyboard->rightkeydown = true;
		}
		else{
			HX_STACK_LINE(35)
			::core::build::game::managers::Universe_obj::keyboard->leftkeydown = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MouseManager_obj,touchdown,(void))

Void MouseManager_obj::initiate( ){
{
		HX_STACK_PUSH("MouseManager::initiate","core/build/game/managers/MouseManager.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		::core::build::game::managers::Universe_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->mousedown_dyn(),null(),null(),null());
		HX_STACK_LINE(27)
		::core::build::game::managers::Universe_obj::stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->mouseup_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseManager_obj,initiate,(void))


MouseManager_obj::MouseManager_obj()
{
}

void MouseManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseManager);
	HX_MARK_MEMBER_NAME(mouseisdown,"mouseisdown");
	HX_MARK_END_CLASS();
}

void MouseManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseisdown,"mouseisdown");
}

Dynamic MouseManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"mouseup") ) { return mouseup_dyn(); }
		if (HX_FIELD_EQ(inName,"touchup") ) { return touchup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initiate") ) { return initiate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mousedown") ) { return mousedown_dyn(); }
		if (HX_FIELD_EQ(inName,"touchdown") ) { return touchdown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseisdown") ) { return mouseisdown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"mouseisdown") ) { mouseisdown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mouseisdown"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mouseup"),
	HX_CSTRING("mousedown"),
	HX_CSTRING("touchup"),
	HX_CSTRING("touchdown"),
	HX_CSTRING("initiate"),
	HX_CSTRING("mouseisdown"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseManager_obj::__mClass,"__mClass");
};

Class MouseManager_obj::__mClass;

void MouseManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.managers.MouseManager"), hx::TCanCast< MouseManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MouseManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers
