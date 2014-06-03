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
#ifndef INCLUDED_core_build_game_stage_Obstacle
#include <core/build/game/stage/Obstacle.h>
#endif
#ifndef INCLUDED_core_build_game_stage_ObstacleManager
#include <core/build/game/stage/ObstacleManager.h>
#endif
#ifndef INCLUDED_core_build_game_stage_StageManager
#include <core/build/game/stage/StageManager.h>
#endif
#ifndef INCLUDED_core_build_game_tools_ColourChanger
#include <core/build/game/tools/ColourChanger.h>
#endif
#ifndef INCLUDED_core_build_game_ui_UIManager
#include <core/build/game/ui/UIManager.h>
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
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_filters_DropShadowFilter
#include <flash/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace core{
namespace build{
namespace game{
namespace entities{

Void Ship_obj::__construct()
{
HX_STACK_PUSH("Ship::new","core/build/game/entities/Ship.hx",16);
{
	HX_STACK_LINE(28)
	this->destoffset = (int)0;
	HX_STACK_LINE(27)
	this->rotationindex = (int)0;
	HX_STACK_LINE(26)
	this->adjusting = true;
	HX_STACK_LINE(25)
	this->closestrotationoffset = (int)0;
	HX_STACK_LINE(24)
	this->angle = (int)0;
	HX_STACK_LINE(23)
	this->movedelaytimer = (int)0;
	HX_STACK_LINE(22)
	this->moving = false;
	HX_STACK_LINE(21)
	this->dest = (int)0;
	HX_STACK_LINE(30)
	super::__construct();
}
;
	return null();
}

Ship_obj::~Ship_obj() { }

Dynamic Ship_obj::__CreateEmpty() { return  new Ship_obj; }
hx::ObjectPtr< Ship_obj > Ship_obj::__new()
{  hx::ObjectPtr< Ship_obj > result = new Ship_obj();
	result->__construct();
	return result;}

Dynamic Ship_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ship_obj > result = new Ship_obj();
	result->__construct();
	return result;}

Void Ship_obj::calculateangle( Float lastdest){
{
		HX_STACK_PUSH("Ship::calculateangle","core/build/game/entities/Ship.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lastdest,"lastdest");
		HX_STACK_LINE(109)
		hx::AddEq(this->angle,(this->dest - lastdest));
		HX_STACK_LINE(110)
		if (((::Math_obj::round(this->angle) > (int)180))){
			HX_STACK_LINE(110)
			this->angle = (-(this->angle) + (((this->dest - lastdest)) * (int)2));
		}
		else{
			HX_STACK_LINE(110)
			if (((::Math_obj::round(this->angle) <= (int)-180))){
				HX_STACK_LINE(110)
				this->angle = -(this->angle);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ship_obj,calculateangle,(void))

Void Ship_obj::endmovement( ){
{
		HX_STACK_PUSH("Ship::endmovement","core/build/game/entities/Ship.hx",100);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		if ((!(::core::build::game::managers::Universe_obj::stagemanager->pause))){
			HX_STACK_LINE(102)
			this->moving = false;
			HX_STACK_LINE(103)
			this->movedelaytimer = (int)0;
			HX_STACK_LINE(104)
			this->set_rotation((this->dest + this->destoffset));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,endmovement,(void))

bool Ship_obj::obstaclecollision( ){
	HX_STACK_PUSH("Ship::obstaclecollision","core/build/game/entities/Ship.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::core::build::game::managers::Universe_obj::obstaclemanager->obstacles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		while(((_g1 < _g))){
			HX_STACK_LINE(94)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(95)
			if ((::core::build::game::managers::Universe_obj::obstaclemanager->obstacles->__get(i).StaticCast< ::core::build::game::stage::Obstacle >()->calculatecollision())){
				HX_STACK_LINE(95)
				return true;
			}
		}
	}
	HX_STACK_LINE(97)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,obstaclecollision,return )

Void Ship_obj::update( ){
{
		HX_STACK_PUSH("Ship::update","core/build/game/entities/Ship.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		::core::build::game::stage::StageManager stagemanager = ::core::build::game::managers::Universe_obj::stagemanager;		HX_STACK_VAR(stagemanager,"stagemanager");
		HX_STACK_LINE(52)
		if (((bool(stagemanager->pause) && bool(this->adjusting)))){
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::flash::display::Sprite _g = stagemanager->container;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(53)
				_g->set_rotation((_g->get_rotation() - (Float(((stagemanager->container->get_rotation() - this->closestrotationoffset))) / Float((int)10))));
			}
			HX_STACK_LINE(54)
			if (((bool((stagemanager->container->get_rotation() >= (this->closestrotationoffset - .1))) && bool((stagemanager->container->get_rotation() <= (this->closestrotationoffset + .1)))))){
				HX_STACK_LINE(55)
				stagemanager->container->set_rotation(this->closestrotationoffset);
				HX_STACK_LINE(56)
				this->set_visible(false);
				HX_STACK_LINE(57)
				this->adjusting = false;
				HX_STACK_LINE(58)
				::core::build::game::managers::Universe_obj::uimanager->createmenu();
			}
			else{
				HX_STACK_LINE(59)
				return null();
			}
		}
		HX_STACK_LINE(64)
		if ((stagemanager->pause)){
			HX_STACK_LINE(64)
			this->get_transform()->set_colorTransform(::core::build::game::managers::Universe_obj::stagemanager->colourchanger->transform);
		}
		HX_STACK_LINE(66)
		if ((!(stagemanager->hit))){
			HX_STACK_LINE(66)
			if ((this->moving)){
				HX_STACK_LINE(68)
				if ((stagemanager->pause)){
					HX_STACK_LINE(69)
					::flash::display::Sprite _g = stagemanager->container;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(69)
					_g->set_rotation((_g->get_rotation() - (Float(((stagemanager->container->get_rotation() + ((this->dest - this->closestrotationoffset))))) / Float(2.5))));
				}
				else{
					HX_STACK_LINE(71)
					::core::build::game::entities::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(71)
					_g->set_rotation((_g->get_rotation() - (Float(((this->get_rotation() - ((this->dest + this->destoffset))))) / Float(1.5))));
				}
				HX_STACK_LINE(74)
				++(this->movedelaytimer);
				HX_STACK_LINE(75)
				if (((bool((bool(!(stagemanager->pause)) && bool((this->movedelaytimer >= (int)6)))) || bool((bool((bool((bool(stagemanager->pause) && bool((this->movedelaytimer >= (int)15)))) && bool(!(::core::build::game::managers::Universe_obj::keyboard->rightkeydown)))) && bool(!(::core::build::game::managers::Universe_obj::keyboard->leftkeydown))))))){
					HX_STACK_LINE(77)
					this->movedelaytimer = (int)0;
					HX_STACK_LINE(77)
					this->moving = false;
				}
			}
			else{
				HX_STACK_LINE(80)
				Float lastdest = (int)0;		HX_STACK_VAR(lastdest,"lastdest");
				HX_STACK_LINE(81)
				if ((::core::build::game::managers::Universe_obj::keyboard->rightkeydown)){
					HX_STACK_LINE(81)
					lastdest = this->dest;
					HX_STACK_LINE(81)
					hx::AddEq(this->dest,stagemanager->incrementangle);
					HX_STACK_LINE(81)
					this->moving = true;
					HX_STACK_LINE(82)
					this->calculateangle(lastdest);
					HX_STACK_LINE(82)
					lastdest = this->dest;
					HX_STACK_LINE(82)
					if ((this->obstaclecollision())){
						HX_STACK_LINE(82)
						hx::SubEq(this->dest,stagemanager->incrementangle);
						HX_STACK_LINE(82)
						this->calculateangle(lastdest);
					}
					else{
						HX_STACK_LINE(83)
						if ((stagemanager->pause)){
							HX_STACK_LINE(83)
							++(this->rotationindex);
							HX_STACK_LINE(83)
							::core::build::game::managers::Universe_obj::uimanager->turn();
						}
					}
				}
				else{
					HX_STACK_LINE(84)
					if ((::core::build::game::managers::Universe_obj::keyboard->leftkeydown)){
						HX_STACK_LINE(84)
						lastdest = this->dest;
						HX_STACK_LINE(84)
						hx::SubEq(this->dest,stagemanager->incrementangle);
						HX_STACK_LINE(84)
						this->moving = true;
						HX_STACK_LINE(85)
						this->calculateangle(lastdest);
						HX_STACK_LINE(85)
						lastdest = this->dest;
						HX_STACK_LINE(85)
						if ((this->obstaclecollision())){
							HX_STACK_LINE(85)
							hx::AddEq(this->dest,stagemanager->incrementangle);
							HX_STACK_LINE(85)
							this->calculateangle(lastdest);
						}
						else{
							HX_STACK_LINE(86)
							if ((stagemanager->pause)){
								HX_STACK_LINE(86)
								--(this->rotationindex);
								HX_STACK_LINE(86)
								::core::build::game::managers::Universe_obj::uimanager->turn();
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(90)
		this->base->set_y(((Float(stagemanager->hexagon->get_height()) / Float(1.8)) + (int)5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,update,(void))

Void Ship_obj::create( ){
{
		HX_STACK_PUSH("Ship::create","core/build/game/entities/Ship.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->base = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(36)
		this->base->get_graphics()->lineStyle((int)1,(int)0,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(37)
		this->base->get_graphics()->beginFill((int)6645093,null());
		HX_STACK_LINE(38)
		this->base->get_graphics()->lineTo((int)15,(int)0);
		HX_STACK_LINE(39)
		this->base->get_graphics()->lineTo(7.5,(int)15);
		HX_STACK_LINE(40)
		this->base->get_graphics()->lineTo((int)0,(int)0);
		HX_STACK_LINE(41)
		this->base->set_x(-(((Float(this->base->get_width()) / Float((int)2)))));
		HX_STACK_LINE(42)
		this->base->set_y(::core::build::game::managers::Universe_obj::stagemanager->hexagon->get_height());
		HX_STACK_LINE(43)
		this->base->set_filters(Dynamic( Array_obj<Dynamic>::__new().Add(::flash::filters::DropShadowFilter_obj::__new((int)2,(int)90,(int)0,(int)1,(int)2,(int)2,(int)1,null(),null(),null(),null()))));
		HX_STACK_LINE(44)
		this->container = ::flash::display::Sprite_obj::__new();
		HX_STACK_LINE(45)
		this->container->addChild(this->base);
		HX_STACK_LINE(46)
		this->addChild(this->container);
		HX_STACK_LINE(47)
		::core::build::game::managers::Universe_obj::stagemanager->container->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,create,(void))


Ship_obj::Ship_obj()
{
}

void Ship_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ship);
	HX_MARK_MEMBER_NAME(destoffset,"destoffset");
	HX_MARK_MEMBER_NAME(rotationindex,"rotationindex");
	HX_MARK_MEMBER_NAME(adjusting,"adjusting");
	HX_MARK_MEMBER_NAME(closestrotationoffset,"closestrotationoffset");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(movedelaytimer,"movedelaytimer");
	HX_MARK_MEMBER_NAME(moving,"moving");
	HX_MARK_MEMBER_NAME(dest,"dest");
	HX_MARK_MEMBER_NAME(base,"base");
	HX_MARK_MEMBER_NAME(container,"container");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ship_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destoffset,"destoffset");
	HX_VISIT_MEMBER_NAME(rotationindex,"rotationindex");
	HX_VISIT_MEMBER_NAME(adjusting,"adjusting");
	HX_VISIT_MEMBER_NAME(closestrotationoffset,"closestrotationoffset");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(movedelaytimer,"movedelaytimer");
	HX_VISIT_MEMBER_NAME(moving,"moving");
	HX_VISIT_MEMBER_NAME(dest,"dest");
	HX_VISIT_MEMBER_NAME(base,"base");
	HX_VISIT_MEMBER_NAME(container,"container");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Ship_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dest") ) { return dest; }
		if (HX_FIELD_EQ(inName,"base") ) { return base; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"moving") ) { return moving; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"adjusting") ) { return adjusting; }
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destoffset") ) { return destoffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endmovement") ) { return endmovement_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotationindex") ) { return rotationindex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"calculateangle") ) { return calculateangle_dyn(); }
		if (HX_FIELD_EQ(inName,"movedelaytimer") ) { return movedelaytimer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"obstaclecollision") ) { return obstaclecollision_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"closestrotationoffset") ) { return closestrotationoffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ship_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dest") ) { dest=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moving") ) { moving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"adjusting") ) { adjusting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"destoffset") ) { destoffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotationindex") ) { rotationindex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"movedelaytimer") ) { movedelaytimer=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"closestrotationoffset") ) { closestrotationoffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ship_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("destoffset"));
	outFields->push(HX_CSTRING("rotationindex"));
	outFields->push(HX_CSTRING("adjusting"));
	outFields->push(HX_CSTRING("closestrotationoffset"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("movedelaytimer"));
	outFields->push(HX_CSTRING("moving"));
	outFields->push(HX_CSTRING("dest"));
	outFields->push(HX_CSTRING("base"));
	outFields->push(HX_CSTRING("container"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("calculateangle"),
	HX_CSTRING("endmovement"),
	HX_CSTRING("obstaclecollision"),
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	HX_CSTRING("destoffset"),
	HX_CSTRING("rotationindex"),
	HX_CSTRING("adjusting"),
	HX_CSTRING("closestrotationoffset"),
	HX_CSTRING("angle"),
	HX_CSTRING("movedelaytimer"),
	HX_CSTRING("moving"),
	HX_CSTRING("dest"),
	HX_CSTRING("base"),
	HX_CSTRING("container"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
};

Class Ship_obj::__mClass;

void Ship_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.build.game.entities.Ship"), hx::TCanCast< Ship_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ship_obj::__boot()
{
}

} // end namespace core
} // end namespace build
} // end namespace game
} // end namespace entities
