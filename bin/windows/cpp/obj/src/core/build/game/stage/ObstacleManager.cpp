#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_build_game_managers_AssetManager
#include <core/build/game/managers/AssetManager.h>
#endif
#ifndef INCLUDED_core_build_game_managers_Universe
#include <core/build/game/managers/Universe.h>
#endif
#ifndef INCLUDED_core_build_game_stage_Obstacle
#include <core/build/game/stage/Obstacle.h>
#endif
#ifndef INCLUDED_core_build_game_stage_ObstacleManager
#include <core/build/game/stage/ObstacleManager.h>
#endif
#ifndef INCLUDED_core_build_game_stage_StageManager
#include <core/build/game/stage/StageManager.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace core{
namespace build{
namespace game{
namespace stage{

Void ObstacleManager_obj::__construct()
{
HX_STACK_PUSH("ObstacleManager::new","core/build/game/stage/ObstacleManager.hx",11);
{
	HX_STACK_LINE(18)
	this->pausespawning = false;
	HX_STACK_LINE(17)
	this->obstaclespeed = (int)0;
	HX_STACK_LINE(16)
	this->obstaclerate = (int)0;
	HX_STACK_LINE(15)
	this->obstacletimer = (int)0;
	HX_STACK_LINE(20)
	this->obstacles = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

ObstacleManager_obj::~ObstacleManager_obj() { }

Dynamic ObstacleManager_obj::__CreateEmpty() { return  new ObstacleManager_obj; }
hx::ObjectPtr< ObstacleManager_obj > ObstacleManager_obj::__new()
{  hx::ObjectPtr< ObstacleManager_obj > result = new ObstacleManager_obj();
	result->__construct();
	return result;}

Dynamic ObstacleManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObstacleManager_obj > result = new ObstacleManager_obj();
	result->__construct();
	return result;}

Void ObstacleManager_obj::createobstacle( int obstaclerotation){
{
		HX_STACK_PUSH("ObstacleManager::createobstacle","core/build/game/stage/ObstacleManager.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obstaclerotation,"obstaclerotation");
		HX_STACK_LINE(68)
		::core::build::game::stage::StageManager stagemanager = ::core::build::game::managers::Universe_obj::stagemanager;		HX_STACK_VAR(stagemanager,"stagemanager");
		HX_STACK_LINE(69)
		::core::build::game::stage::Obstacle obstacle = ::core::build::game::stage::Obstacle_obj::__new();		HX_STACK_VAR(obstacle,"obstacle");
		HX_STACK_LINE(70)
		obstacle->midx = stagemanager->midx;
		HX_STACK_LINE(71)
		obstacle->midy = stagemanager->midy;
		HX_STACK_LINE(72)
		this->obstacles->__Field(HX_CSTRING("push"),true)(obstacle);
		HX_STACK_LINE(73)
		stagemanager->container->addChild(obstacle);
		HX_STACK_LINE(74)
		stagemanager->container->setChildIndex(obstacle,(int)1);
		HX_STACK_LINE(75)
		obstacle->set_x(-(((Float(stagemanager->rect->width) / Float((int)2)))));
		HX_STACK_LINE(76)
		obstacle->set_y(-(((Float(stagemanager->rect->height) / Float((int)2)))));
		HX_STACK_LINE(77)
		obstacle->distancex = (stagemanager->midx * 1.5);
		HX_STACK_LINE(78)
		obstacle->distancey = (stagemanager->midy * 1.5);
		HX_STACK_LINE(79)
		hx::AddEq(obstacle->offsetrotation,(stagemanager->increment * obstaclerotation));
		HX_STACK_LINE(80)
		int colour = (int)9803157;		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(81)
		obstacle->colour = colour;
		HX_STACK_LINE(82)
		obstacle->speed = this->obstaclespeed;
		HX_STACK_LINE(83)
		if (((stagemanager->gamemode == (int)1))){
			HX_STACK_LINE(83)
			obstacle->speed = (int)15;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObstacleManager_obj,createobstacle,(void))

Void ObstacleManager_obj::removeobstacles( ){
{
		HX_STACK_PUSH("ObstacleManager::removeobstacles","core/build/game/stage/ObstacleManager.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_LINE(62)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->obstacles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		while(((_g1 < _g))){
			HX_STACK_LINE(62)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			this->obstacles->__get(i).StaticCast< ::core::build::game::stage::Obstacle >()->removed = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObstacleManager_obj,removeobstacles,(void))

Void ObstacleManager_obj::reverseobstacles( hx::Null< bool >  __o_reverseonly){
bool reverseonly = __o_reverseonly.Default(false);
	HX_STACK_PUSH("ObstacleManager::reverseobstacles","core/build/game/stage/ObstacleManager.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_ARG(reverseonly,"reverseonly");
{
		HX_STACK_LINE(52)
		if (((bool(!(reverseonly)) && bool((::core::build::game::managers::Universe_obj::assets->soundchannel != null()))))){
			HX_STACK_LINE(53)
			::core::build::game::managers::Universe_obj::assets->soundtransform->volume = .5;
			HX_STACK_LINE(54)
			::core::build::game::managers::Universe_obj::assets->soundchannel->set_soundTransform(::core::build::game::managers::Universe_obj::assets->soundtransform);
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->obstacles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			while(((_g1 < _g))){
				HX_STACK_LINE(56)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				this->obstacles->__get(i).StaticCast< ::core::build::game::stage::Obstacle >()->reverse = true;
				HX_STACK_LINE(57)
				this->obstacles->__get(i).StaticCast< ::core::build::game::stage::Obstacle >()->speed = (-(this->obstacles->__get(i).StaticCast< ::core::build::game::stage::Obstacle >()->speed) * (int)6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObstacleManager_obj,reverseobstacles,(void))

Void ObstacleManager_obj::update( ){
{
		HX_STACK_PUSH("ObstacleManager::update","core/build/game/stage/ObstacleManager.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_LINE(25)
		if (((bool((bool(!(::core::build::game::managers::Universe_obj::stagemanager->hit)) && bool(!(::core::build::game::managers::Universe_obj::stagemanager->pause)))) && bool(!(this->pausespawning))))){
			HX_STACK_LINE(26)
			++(this->obstacletimer);
			HX_STACK_LINE(27)
			if (((this->obstacletimer >= this->obstaclerate))){
				HX_STACK_LINE(28)
				this->obstacletimer = (int)0;
				HX_STACK_LINE(29)
				int obstaclerotation = ::Std_obj::_int((::Math_obj::random() * ::core::build::game::managers::Universe_obj::stagemanager->sectors));		HX_STACK_VAR(obstaclerotation,"obstaclerotation");
				HX_STACK_LINE(30)
				int spawn = (::Std_obj::_int((::Math_obj::random() * ((::core::build::game::managers::Universe_obj::stagemanager->sectors - (int)1)))) + (int)1);		HX_STACK_VAR(spawn,"spawn");
				HX_STACK_LINE(31)
				if (((::core::build::game::managers::Universe_obj::stagemanager->mode == (int)3))){
					HX_STACK_LINE(31)
					--(spawn);
				}
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(32)
					while(((_g < spawn))){
						HX_STACK_LINE(32)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(33)
						this->createobstacle(obstaclerotation);
						HX_STACK_LINE(34)
						++(obstaclerotation);
					}
				}
			}
		}
		HX_STACK_LINE(38)
		int index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->obstacles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			while(((_g1 < _g))){
				HX_STACK_LINE(39)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(40)
				this->obstacles->__get(index).StaticCast< ::core::build::game::stage::Obstacle >()->update();
				HX_STACK_LINE(41)
				if ((this->obstacles->__get(index).StaticCast< ::core::build::game::stage::Obstacle >()->removed)){
					HX_STACK_LINE(42)
					::core::build::game::managers::Universe_obj::stagemanager->container->removeChild(this->obstacles->__get(index).StaticCast< ::core::build::game::stage::Obstacle >());
					HX_STACK_LINE(43)
					this->obstacles->__get(index).StaticCast< ::core::build::game::stage::Obstacle >()->get_graphics()->clear();
					HX_STACK_LINE(44)
					::flash::_Vector::Vector_Impl__obj::splice(this->obstacles,index,(int)1);
					HX_STACK_LINE(45)
					--(index);
				}
				HX_STACK_LINE(47)
				++(index);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObstacleManager_obj,update,(void))


ObstacleManager_obj::ObstacleManager_obj()
{
}

void ObstacleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObstacleManager);
	HX_MARK_MEMBER_NAME(pausespawning,"pausespawning");
	HX_MARK_MEMBER_NAME(obstaclespeed,"obstaclespeed");
	HX_MARK_MEMBER_NAME(obstaclerate,"obstaclerate");
	HX_MARK_MEMBER_NAME(obstacletimer,"obstacletimer");
	HX_MARK_MEMBER_NAME(obstacles,"obstacles");
	HX_MARK_END_CLASS();
}

void ObstacleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pausespawning,"pausespawning");
	HX_VISIT_MEMBER_NAME(obstaclespeed,"obstaclespeed");
	HX_VISIT_MEMBER_NAME(obstaclerate,"obstaclerate");
	HX_VISIT_MEMBER_NAME(obstacletimer,"obstacletimer");
	HX_VISIT_MEMBER_NAME(obstacles,"obstacles");
}

Dynamic ObstacleManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"obstacles") ) { return obstacles; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"obstaclerate") ) { return obstaclerate; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pausespawning") ) { return pausespawning; }
		if (HX_FIELD_EQ(inName,"obstaclespeed") ) { return obstaclespeed; }
		if (HX_FIELD_EQ(inName,"obstacletimer") ) { return obstacletimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createobstacle") ) { return createobstacle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeobstacles") ) { return removeobstacles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reverseobstacles") ) { return reverseobstacles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObstacleManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"obstacles") ) { obstacles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"obstaclerate") ) { obstaclerate=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pausespawning") ) { pausespawning=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"obstaclespeed") ) { obstaclespeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"obstacletimer") ) { obstacletimer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObstacleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pausespawning"));
	outFields->push(HX_CSTRING("obstaclespeed"));
	outFields->push(HX_CSTRING("obstaclerate"));
	outFields->push(HX_CSTRING("obstacletimer"));
	outFields->push(HX_CSTRING("obstacles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createobstacle"),
	HX_CSTRING("removeobstacles"),
	HX_CSTRING("reverseobstacles"),
	HX_CSTRING("update"),
	HX_CSTRING("pausespawning"),
	HX_CSTRING("obstaclespeed"),
	HX_CSTRING("obstaclerate"),
	HX_CSTRING("obstacletimer"),
	HX_CSTRING("obstacles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObstacleManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObstacleManager_obj::__mClass,"__mClass");
};

Class ObstacleManager_obj::__mClass;

void ObstacleManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.stage.ObstacleManager"), hx::TCanCast< ObstacleManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ObstacleManager_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace stage
