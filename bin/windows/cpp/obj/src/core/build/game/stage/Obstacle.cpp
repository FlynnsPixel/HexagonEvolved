#include <hxcpp.h>

#ifndef INCLUDED_core_build_game_entities_Ship
#include <core/build/game/entities/Ship.h>
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
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
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
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace core{
namespace build{
namespace game{
namespace stage{

Void Obstacle_obj::__construct()
{
HX_STACK_PUSH("Obstacle::new","core/build/game/stage/Obstacle.hx",14);
{
	HX_STACK_LINE(26)
	this->reverse = false;
	HX_STACK_LINE(24)
	this->speed = (int)10;
	HX_STACK_LINE(23)
	this->removed = false;
	HX_STACK_LINE(22)
	this->offsetrotation = (int)0;
	HX_STACK_LINE(21)
	this->length = (int)25;
	HX_STACK_LINE(20)
	this->distancey = (int)0;
	HX_STACK_LINE(19)
	this->distancex = (int)0;
	HX_STACK_LINE(18)
	this->midy = (int)0;
	HX_STACK_LINE(17)
	this->midx = (int)0;
	HX_STACK_LINE(28)
	super::__construct();
}
;
	return null();
}

Obstacle_obj::~Obstacle_obj() { }

Dynamic Obstacle_obj::__CreateEmpty() { return  new Obstacle_obj; }
hx::ObjectPtr< Obstacle_obj > Obstacle_obj::__new()
{  hx::ObjectPtr< Obstacle_obj > result = new Obstacle_obj();
	result->__construct();
	return result;}

Dynamic Obstacle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Obstacle_obj > result = new Obstacle_obj();
	result->__construct();
	return result;}

bool Obstacle_obj::calculatecollision( ){
	HX_STACK_PUSH("Obstacle::calculatecollision","core/build/game/stage/Obstacle.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	Float angle = (::core::build::game::managers::Universe_obj::stagemanager->increment + this->offsetrotation);		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(65)
	if (((bool((bool((bool((bool(!(this->reverse)) && bool((this->distancex <= (this->length + (int)30))))) && bool((this->distancey <= (this->length + (int)30))))) && bool((this->distancex >= (int)25)))) && bool((this->distancey >= (int)25))))){
		HX_STACK_LINE(66)
		if (((::Math_obj::round((::Math_obj::atan2((::Math_obj::sin(angle) * this->distancey),(::Math_obj::cos(angle) * this->distancex)) * ((Float((int)180) / Float(::Math_obj::PI))))) == ::Math_obj::round(::core::build::game::managers::Universe_obj::player->angle)))){
			HX_STACK_LINE(67)
			return true;
		}
	}
	HX_STACK_LINE(71)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Obstacle_obj,calculatecollision,return )

Void Obstacle_obj::update( ){
{
		HX_STACK_PUSH("Obstacle::update","core/build/game/stage/Obstacle.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		::core::build::game::stage::StageManager stagemanager = ::core::build::game::managers::Universe_obj::stagemanager;		HX_STACK_VAR(stagemanager,"stagemanager");
		HX_STACK_LINE(34)
		if (((bool(this->reverse) && bool((stagemanager->hittimer <= (int)100))))){
			HX_STACK_LINE(34)
			return null();
		}
		HX_STACK_LINE(36)
		hx::SubEq(this->distancex,this->speed);
		HX_STACK_LINE(36)
		hx::SubEq(this->distancey,this->speed);
		HX_STACK_LINE(37)
		if (((bool((bool((bool((bool(!(this->reverse)) && bool((this->distancex <= (-(this->speed) - (int)10))))) || bool((bool(!(this->reverse)) && bool((this->distancey <= (-(this->speed) - (int)10))))))) || bool((bool(this->reverse) && bool((this->distancex >= this->midx)))))) || bool((bool(this->reverse) && bool((this->distancey >= this->midy))))))){
			HX_STACK_LINE(38)
			this->distancex = (int)0;
			HX_STACK_LINE(38)
			this->distancey = (int)0;
			HX_STACK_LINE(39)
			this->removed = true;
		}
		HX_STACK_LINE(42)
		Float angle = (stagemanager->increment + this->offsetrotation);		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(43)
		this->get_graphics()->clear();
		HX_STACK_LINE(45)
		this->get_graphics()->lineStyle((int)1,this->colour,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(46)
		this->get_graphics()->beginFill(this->colour,null());
		HX_STACK_LINE(47)
		this->get_graphics()->moveTo((this->midx + (::Math_obj::cos(angle) * this->distancex)),(this->midy + (::Math_obj::sin(angle) * this->distancey)));
		HX_STACK_LINE(48)
		hx::AddEq(angle,stagemanager->increment);
		HX_STACK_LINE(49)
		this->get_graphics()->lineTo((this->midx + (::Math_obj::cos(angle) * this->distancex)),(this->midy + (::Math_obj::sin(angle) * this->distancey)));
		HX_STACK_LINE(50)
		this->get_graphics()->lineTo((this->midx + (::Math_obj::cos(angle) * ((this->distancex + this->length)))),(this->midy + (::Math_obj::sin(angle) * ((this->distancey + this->length)))));
		HX_STACK_LINE(51)
		hx::SubEq(angle,stagemanager->increment);
		HX_STACK_LINE(52)
		this->get_graphics()->lineTo((this->midx + (::Math_obj::cos(angle) * ((this->distancex + this->length)))),(this->midy + (::Math_obj::sin(angle) * ((this->distancey + this->length)))));
		HX_STACK_LINE(53)
		this->get_graphics()->endFill();
		HX_STACK_LINE(55)
		if ((this->calculatecollision())){
			HX_STACK_LINE(56)
			::core::build::game::managers::Universe_obj::obstaclemanager->reverseobstacles(null());
			HX_STACK_LINE(56)
			stagemanager->hit = true;
			HX_STACK_LINE(57)
			::core::build::game::managers::Universe_obj::assets->playsfx((int)0);
			HX_STACK_LINE(58)
			this->reverse = true;
			HX_STACK_LINE(59)
			this->set_alpha(.5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Obstacle_obj,update,(void))


Obstacle_obj::Obstacle_obj()
{
}

void Obstacle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Obstacle);
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(removed,"removed");
	HX_MARK_MEMBER_NAME(offsetrotation,"offsetrotation");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(distancey,"distancey");
	HX_MARK_MEMBER_NAME(distancex,"distancex");
	HX_MARK_MEMBER_NAME(midy,"midy");
	HX_MARK_MEMBER_NAME(midx,"midx");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Obstacle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(removed,"removed");
	HX_VISIT_MEMBER_NAME(offsetrotation,"offsetrotation");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(distancey,"distancey");
	HX_VISIT_MEMBER_NAME(distancex,"distancex");
	HX_VISIT_MEMBER_NAME(midy,"midy");
	HX_VISIT_MEMBER_NAME(midx,"midx");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Obstacle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"midy") ) { return midy; }
		if (HX_FIELD_EQ(inName,"midx") ) { return midx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		if (HX_FIELD_EQ(inName,"removed") ) { return removed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"distancey") ) { return distancey; }
		if (HX_FIELD_EQ(inName,"distancex") ) { return distancex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"offsetrotation") ) { return offsetrotation; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"calculatecollision") ) { return calculatecollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Obstacle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"midy") ) { midy=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midx") ) { midx=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"removed") ) { removed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"distancey") ) { distancey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"distancex") ) { distancex=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"offsetrotation") ) { offsetrotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Obstacle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("reverse"));
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("removed"));
	outFields->push(HX_CSTRING("offsetrotation"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("distancey"));
	outFields->push(HX_CSTRING("distancex"));
	outFields->push(HX_CSTRING("midy"));
	outFields->push(HX_CSTRING("midx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("calculatecollision"),
	HX_CSTRING("update"),
	HX_CSTRING("reverse"),
	HX_CSTRING("colour"),
	HX_CSTRING("speed"),
	HX_CSTRING("removed"),
	HX_CSTRING("offsetrotation"),
	HX_CSTRING("length"),
	HX_CSTRING("distancey"),
	HX_CSTRING("distancex"),
	HX_CSTRING("midy"),
	HX_CSTRING("midx"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Obstacle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Obstacle_obj::__mClass,"__mClass");
};

Class Obstacle_obj::__mClass;

void Obstacle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.stage.Obstacle"), hx::TCanCast< Obstacle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Obstacle_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace stage
