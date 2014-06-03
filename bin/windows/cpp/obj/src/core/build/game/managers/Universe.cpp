#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_entities_Ship
#include <core/build/game/entities/Ship.h>
#endif
#ifndef INCLUDED_core_build_game_managers_AssetManager
#include <core/build/game/managers/AssetManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_KeyboardManager
#include <core/build/game/managers/KeyboardManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_MouseManager
#include <core/build/game/managers/MouseManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_ToolManager
#include <core/build/game/managers/ToolManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_Universe
#include <core/build/game/managers/Universe.h>
#endif
#ifndef INCLUDED_core_build_game_stage_ObstacleManager
#include <core/build/game/stage/ObstacleManager.h>
#endif
#ifndef INCLUDED_core_build_game_stage_StageManager
#include <core/build/game/stage/StageManager.h>
#endif
#ifndef INCLUDED_core_build_game_ui_UIManager
#include <core/build/game/ui/UIManager.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
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
namespace core{
namespace build{
namespace game{
namespace managers{

Void Universe_obj::__construct()
{
	return null();
}

Universe_obj::~Universe_obj() { }

Dynamic Universe_obj::__CreateEmpty() { return  new Universe_obj; }
hx::ObjectPtr< Universe_obj > Universe_obj::__new()
{  hx::ObjectPtr< Universe_obj > result = new Universe_obj();
	result->__construct();
	return result;}

Dynamic Universe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Universe_obj > result = new Universe_obj();
	result->__construct();
	return result;}

::flash::display::Stage Universe_obj::stage;

::core::build::game::managers::AssetManager Universe_obj::assets;

::core::build::game::managers::KeyboardManager Universe_obj::keyboard;

::core::build::game::managers::MouseManager Universe_obj::mouse;

::core::build::game::managers::ToolManager Universe_obj::tools;

::core::build::game::entities::Ship Universe_obj::player;

::core::build::game::stage::StageManager Universe_obj::stagemanager;

::core::build::game::stage::ObstacleManager Universe_obj::obstaclemanager;

::core::build::game::ui::UIManager Universe_obj::uimanager;

Void Universe_obj::initiate( ){
{
		HX_STACK_PUSH("Universe::initiate","core/build/game/managers/Universe.hx",38);
		HX_STACK_LINE(39)
		::core::build::game::managers::Universe_obj::stage = ::flash::Lib_obj::get_current()->get_stage();
		HX_STACK_LINE(41)
		::core::build::game::managers::Universe_obj::stage->addEventListener(::flash::events::Event_obj::ENTER_FRAME,::core::build::game::managers::Universe_obj::update_dyn(),null(),null(),null());
		HX_STACK_LINE(43)
		::core::build::game::managers::Universe_obj::keyboard = ::core::build::game::managers::KeyboardManager_obj::__new();
		HX_STACK_LINE(44)
		::core::build::game::managers::Universe_obj::keyboard->initiate();
		HX_STACK_LINE(45)
		::core::build::game::managers::Universe_obj::mouse = ::core::build::game::managers::MouseManager_obj::__new();
		HX_STACK_LINE(46)
		::core::build::game::managers::Universe_obj::mouse->initiate();
		HX_STACK_LINE(48)
		::core::build::game::managers::Universe_obj::tools = ::core::build::game::managers::ToolManager_obj::__new();
		HX_STACK_LINE(49)
		::core::build::game::managers::Universe_obj::assets = ::core::build::game::managers::AssetManager_obj::__new();
		HX_STACK_LINE(50)
		::core::build::game::managers::Universe_obj::player = ::core::build::game::entities::Ship_obj::__new();
		HX_STACK_LINE(51)
		::core::build::game::managers::Universe_obj::stagemanager = ::core::build::game::stage::StageManager_obj::__new();
		HX_STACK_LINE(52)
		::core::build::game::managers::Universe_obj::obstaclemanager = ::core::build::game::stage::ObstacleManager_obj::__new();
		HX_STACK_LINE(53)
		::core::build::game::managers::Universe_obj::uimanager = ::core::build::game::ui::UIManager_obj::__new();
		HX_STACK_LINE(55)
		::core::build::game::managers::Universe_obj::stagemanager->create();
		HX_STACK_LINE(56)
		::core::build::game::managers::Universe_obj::player->create();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Universe_obj,initiate,(void))

Void Universe_obj::update( ::flash::events::Event event){
{
		HX_STACK_PUSH("Universe::update","core/build/game/managers/Universe.hx",59);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(60)
		::core::build::game::managers::Universe_obj::player->update();
		HX_STACK_LINE(61)
		::core::build::game::managers::Universe_obj::stagemanager->update();
		HX_STACK_LINE(62)
		::core::build::game::managers::Universe_obj::obstaclemanager->update();
		HX_STACK_LINE(63)
		::core::build::game::managers::Universe_obj::uimanager->update();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Universe_obj,update,(void))


Universe_obj::Universe_obj()
{
}

void Universe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Universe);
	HX_MARK_END_CLASS();
}

void Universe_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Universe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"tools") ) { return tools; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { return keyboard; }
		if (HX_FIELD_EQ(inName,"initiate") ) { return initiate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uimanager") ) { return uimanager; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stagemanager") ) { return stagemanager; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"obstaclemanager") ) { return obstaclemanager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Universe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::flash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::core::build::game::managers::MouseManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tools") ) { tools=inValue.Cast< ::core::build::game::managers::ToolManager >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::core::build::game::managers::AssetManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::core::build::game::entities::Ship >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { keyboard=inValue.Cast< ::core::build::game::managers::KeyboardManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uimanager") ) { uimanager=inValue.Cast< ::core::build::game::ui::UIManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stagemanager") ) { stagemanager=inValue.Cast< ::core::build::game::stage::StageManager >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"obstaclemanager") ) { obstaclemanager=inValue.Cast< ::core::build::game::stage::ObstacleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Universe_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("stage"),
	HX_CSTRING("assets"),
	HX_CSTRING("keyboard"),
	HX_CSTRING("mouse"),
	HX_CSTRING("tools"),
	HX_CSTRING("player"),
	HX_CSTRING("stagemanager"),
	HX_CSTRING("obstaclemanager"),
	HX_CSTRING("uimanager"),
	HX_CSTRING("initiate"),
	HX_CSTRING("update"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Universe_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Universe_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Universe_obj::assets,"assets");
	HX_MARK_MEMBER_NAME(Universe_obj::keyboard,"keyboard");
	HX_MARK_MEMBER_NAME(Universe_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(Universe_obj::tools,"tools");
	HX_MARK_MEMBER_NAME(Universe_obj::player,"player");
	HX_MARK_MEMBER_NAME(Universe_obj::stagemanager,"stagemanager");
	HX_MARK_MEMBER_NAME(Universe_obj::obstaclemanager,"obstaclemanager");
	HX_MARK_MEMBER_NAME(Universe_obj::uimanager,"uimanager");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Universe_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Universe_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Universe_obj::assets,"assets");
	HX_VISIT_MEMBER_NAME(Universe_obj::keyboard,"keyboard");
	HX_VISIT_MEMBER_NAME(Universe_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(Universe_obj::tools,"tools");
	HX_VISIT_MEMBER_NAME(Universe_obj::player,"player");
	HX_VISIT_MEMBER_NAME(Universe_obj::stagemanager,"stagemanager");
	HX_VISIT_MEMBER_NAME(Universe_obj::obstaclemanager,"obstaclemanager");
	HX_VISIT_MEMBER_NAME(Universe_obj::uimanager,"uimanager");
};

Class Universe_obj::__mClass;

void Universe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.managers.Universe"), hx::TCanCast< Universe_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Universe_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace managers
